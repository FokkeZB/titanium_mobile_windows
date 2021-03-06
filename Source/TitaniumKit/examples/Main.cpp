/**
 * TitaniumKit
 *
 * Copyright (c) 2014 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License.
 * Please see the LICENSE included with this distribution for details.
 */

#include "Titanium/Titanium.hpp"
#include "NativeGlobalObjectExample.hpp"
#include "NativeAPIExample.hpp"
#include "NativeWindowExample.hpp"
#include "NativeViewExample.hpp"
#include "NativeButtonExample.hpp"
#include "NativePlatformExample.hpp"
#include "NativeAccelerometerExample.hpp"
#include "NativeGestureExample.hpp"
#include "NativeFilesystemExample.hpp"
#include "NativeFileExample.hpp"

#include <iostream>

int main()
{
	using namespace HAL;

	std::string app_js = R"js(
'use strict';

var button = Ti.UI.createButton({
  top: 20,
  bottom: 20,
  width: 200,
  height: Ti.UI.SIZE
});

button.title = 'Neeraj Says...';

button.addEventListener('click', function(e) {
  Ti.API.warn('Goals without a timeline are just a dream.');
});

var view = Ti.UI.createView({
  bottom: 50,
  right: 50,
  width: 300,
  height: Ti.UI.SIZE
});

view.add(button);

var window = Ti.UI.createWindow();
window.add(view);

window.open();

Ti.API.info(Ti.Platform.osname);
Ti.API.info('ng.js running...');
  )js";

	JSContextGroup js_context_group;
	JSContext js_context = js_context_group.CreateContext(JSExport<NativeGlobalObjectExample>::Class());
	Titanium::Application app = Titanium::ApplicationBuilder(js_context)
	                                .APIObject(js_context.CreateObject(JSExport<NativeAPIExample>::Class()))
	                                .ViewObject(js_context.CreateObject(JSExport<NativeViewExample>::Class()))
	                                .WindowObject(js_context.CreateObject(JSExport<NativeWindowExample>::Class()))
	                                .ButtonObject(js_context.CreateObject(JSExport<NativeButtonExample>::Class()))
	                                .PlatformObject(js_context.CreateObject(JSExport<NativePlatformExample>::Class()))
	                                .AccelerometerObject(js_context.CreateObject(JSExport<NativeAccelerometerExample>::Class()))
	                                .GestureObject(js_context.CreateObject(JSExport<NativeGestureExample>::Class()))
	                                .FilesystemObject(js_context.CreateObject(JSExport<NativeFilesystemExample>::Class()))
	                                .FileObject(js_context.CreateObject(JSExport<NativeFileExample>::Class()))
	                                .build();

	JSValue reslut = app.Run("app.js");
}
