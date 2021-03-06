/**
* Titanium for Windows
*
* Copyright (c) 2015 by Appcelerator, Inc. All Rights Reserved.
* Licensed under the terms of the Apache Public License.
* Please see the LICENSE included with this distribution for details.
*/
#include "RequireHook.hpp"
#include "WindowsNativeModuleLoader.hpp"
#include "TitaniumWindows/Utility.hpp"
#include <collection.h>

//// NATIVE_MODULE_INCLUDES START
<% for(var i=0; i<native_module_includes.length; i++) { -%>
#include "<%= native_module_includes[i] %>"
<% } -%>
//// NATIVE_MODULE_INCLUDES END

namespace TitaniumWindows_Native
{

	using namespace HAL;

	RequireHook::RequireHook()
		: native_module_loader__(std::make_shared<TitaniumWindows::WindowsNativeModuleLoader>())
	{
	}

	RequireHook::~RequireHook()
	{
		app__->TitaniumModulePreload -= preload__;
		app__->TitaniumModuleRequire -= require__;
		app__->TitaniumModuleNames   -= names__;
	}

	void RequireHook::Register(TitaniumWindows::Application^ app)
	{
		app__ = app;
		preload__ = app__->TitaniumModulePreload += ref new TitaniumWindows::TitaniumModulePreloadHandler(this, &TitaniumWindows_Native::RequireHook::OnTitaniumModulePreload);
		require__ = app__->TitaniumModuleRequire += ref new TitaniumWindows::TitaniumModuleRequireHandler(this, &TitaniumWindows_Native::RequireHook::OnTitaniumModuleRequire);
		names__   = app__->TitaniumModuleNames   += ref new TitaniumWindows::TitaniumModuleNamesHandler(this, &TitaniumWindows_Native::RequireHook::OnTitaniumModuleNames);

		app__->SaveRequireHook(this);
	}

	// This should return pointer to JSObject (key-value) which consists of module name & preloaded JSObject
	std::intptr_t RequireHook::OnTitaniumModulePreload(std::intptr_t js_context_ref)
	{
		const auto js_context = JSContext(reinterpret_cast<JSContextRef>(js_context_ref));

		auto js_preloaded_module_map = js_context.CreateObject();


		//// TODO: native module initialization 
		//// js_preloaded_module_map.SetProperty("com.example.test", js_context.CreateObject(JSExport<Com::Example::Test>::Class()));

		//// INITIALLIZE PRELOADED NATIVE MODULE START
<% for(var i=0; i<native_modules.length; i++) { if (native_modules[i].preload) { -%>
		js_preloaded_module_map.SetProperty("<%= native_modules[i].name %>", js_context.CreateObject(JSExport<<%= native_modules[i].className %>>::Class()));
<% }} -%>
		//// INITIALLIZE PRELOADED NATIVE MODULE END

		return reinterpret_cast<std::intptr_t>(static_cast<JSValueRef>(js_preloaded_module_map));
	}

	// This will be called when native module with supported name is not loaded. Return pointer to JSValue as the result of require.
	std::intptr_t RequireHook::OnTitaniumModuleRequire(std::intptr_t js_context_ref, Platform::String^ moduleId)
	{
		const auto js_context = JSContext(reinterpret_cast<JSContextRef>(js_context_ref));

		auto value = native_module_loader__->registerNativeModule(js_context, TitaniumWindows::Utility::ConvertString(moduleId));

		return reinterpret_cast<std::intptr_t>(static_cast<JSValueRef>(value));
	}

	// This should return collections of supported name module names such as Windows.Xaml.Controls.Button etc.
	Windows::Foundation::Collections::IVector<Platform::String^>^ RequireHook::OnTitaniumModuleNames(int js_context_ref)
	{
		auto names = ref new ::Platform::Collections::Vector<::Platform::String^>();


		//// TODO: Insert supported module names here
		//// names->Append("com.example.test");
		//// names->Append("Windows.UI.Xaml.Controls.Button");
		//// names->Append("Windows.UI.Xaml.Controls.ListView");

		//// INSERT SUPPORTED NATIVE MODULE NAMES START
<% for(var i=0; i<native_modules.length; i++) { -%>
		names->Append("<%= native_modules[i].name %>");
<% } -%>
		//// INSERT SUPPORTED NATIVE MODULE NAMES END

		return names;
	}

} // namespace TitaniumWindows