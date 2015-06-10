/**
 * Windows Native Wrapper for Windows.UI.Xaml.Navigation.PageStackEntry
 *
 * Copyright (c) 2015 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License.
 * Please see the LICENSE included with this distribution for details.
 */

#include "Windows.UI.Xaml.DependencyObject.hpp"
#include "Windows.UI.Xaml.DependencyProperty.hpp"
#include "Windows.UI.Xaml.Media.Animation.NavigationTransitionInfo.hpp"
#include "Windows.UI.Xaml.Navigation.PageStackEntry.hpp"

namespace Titanium
{
	namespace Windows
	{
		namespace UI
		{
			namespace Xaml
			{
				namespace Navigation
				{

		PageStackEntry::PageStackEntry(const JSContext& js_context) TITANIUM_NOEXCEPT
			: Windows::UI::Xaml::DependencyObject(js_context)
		{
			TITANIUM_LOG_DEBUG("PageStackEntry::ctor");
		}

		void PageStackEntry::postCallAsConstructor(const JSContext& context, const std::vector<JSValue>& arguments)
		{
			TITANIUM_LOG_DEBUG("PageStackEntry::postCallAsConstructor ", this);
			if (arguments.size() == 3) {
				auto _0 = arguments.at(0);
			auto object_sourcePageType = static_cast<JSObject>(_0);
			::Windows::UI::Xaml::Interop::TypeName sourcePageType;
			// Assign fields explicitly since we didn't use a constructor

			auto object_sourcePageType_Name_ = TitaniumWindows::Utility::ConvertUTF8String(static_cast<std::string>(object_sourcePageType_Name));


			auto object_sourcePageType_Kind_ = static_cast<::Windows::UI::Xaml::Interop::TypeKind>(static_cast<int32_t>(object_sourcePageType_Kind)); // TODO Look up enum in metadata to know what type it's value is? 

				auto _1 = arguments.at(1);
			auto object_parameter = static_cast<JSObject>(_1);
 
			// FIXME What if the type we want here is some parent class of the actual wrapper's class? I think we'll get nullptr here.
			// We need some way to know the underlying type the JSObject maps to, get that, then cast to the type we want...
			auto parameter = wrapper_parameter->unwrapPlatform_Object();
				auto _2 = arguments.at(2);
			auto object_navigationTransitionInfo = static_cast<JSObject>(_2);
 
			// FIXME What if the type we want here is some parent class of the actual wrapper's class? I think we'll get nullptr here.
			// We need some way to know the underlying type the JSObject maps to, get that, then cast to the type we want...
			auto navigationTransitionInfo = wrapper_navigationTransitionInfo->unwrapWindows_UI_Xaml_Media_Animation_NavigationTransitionInfo();

				wrapped__ = ref new ::Windows::UI::Xaml::Navigation::PageStackEntry(sourcePageType, parameter, navigationTransitionInfo);
			}

		}

		::Windows::UI::Xaml::Navigation::PageStackEntry^ PageStackEntry::unwrapWindows_UI_Xaml_Navigation_PageStackEntry() const
		{
			return dynamic_cast<::Windows::UI::Xaml::Navigation::PageStackEntry^>(wrapped__);
		}

		::Windows::UI::Xaml::Navigation::PageStackEntry^ PageStackEntry::unwrap() const
		{
			return unwrapWindows_UI_Xaml_Navigation_PageStackEntry();
		}

		void PageStackEntry::wrap(::Windows::UI::Xaml::Navigation::PageStackEntry^ object)
		{
			wrapped__ = object;
		}

		void PageStackEntry::JSExportInitialize()
		{
			JSExport<PageStackEntry>::SetClassVersion(1);
			JSExport<PageStackEntry>::SetParent(JSExport<Windows::UI::Xaml::DependencyObject>::Class());

			TITANIUM_ADD_PROPERTY_READONLY(PageStackEntry, NavigationTransitionInfo);
			TITANIUM_ADD_PROPERTY_READONLY(PageStackEntry, Parameter);
			TITANIUM_ADD_PROPERTY_READONLY(PageStackEntry, SourcePageType);
			TITANIUM_ADD_PROPERTY_READONLY(PageStackEntry, SourcePageTypeProperty);
		}

		TITANIUM_PROPERTY_GETTER(PageStackEntry, NavigationTransitionInfo)
		{
			auto value = unwrap()->NavigationTransitionInfo;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(PageStackEntry, Parameter)
		{
			auto value = unwrap()->Parameter;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Platform::Object>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(PageStackEntry, SourcePageType)
		{
			auto value = unwrap()->SourcePageType;
			auto context = get_context();

			auto result = context.CreateObject();


			auto value_Kind_ = context.CreateNumber(static_cast<int32_t>(static_cast<int>(value.Kind))); // FIXME What if the enum isn't an int based one?!


		}

		TITANIUM_PROPERTY_GETTER(PageStackEntry, SourcePageTypeProperty)
		{
			auto value = unwrap()->SourcePageTypeProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

				} // namespace Navigation
			} // namespace Xaml
		} // namespace UI
	} // namespace Windows
} // namespace Titanium