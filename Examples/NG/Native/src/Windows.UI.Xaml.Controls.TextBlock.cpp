/**
 * Windows Native Wrapper for Windows.UI.Xaml.Controls.TextBlock
 *
 * Copyright (c) 2015 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License.
 * Please see the LICENSE included with this distribution for details.
 */

#include "Windows.UI.Xaml.Controls.TextBlock.hpp"
#include "Windows.UI.Xaml.DependencyProperty.hpp"
#include "Windows.UI.Xaml.Documents.InlineCollection.hpp"
#include "Windows.UI.Xaml.Documents.TextPointer.hpp"
#include "Windows.UI.Xaml.FrameworkElement.hpp"
#include "Windows.UI.Xaml.Media.Brush.hpp"
#include "Windows.UI.Xaml.Media.FontFamily.hpp"
#include "Windows.UI.Xaml.Media.SolidColorBrush.hpp"

namespace Titanium
{
	namespace Windows
	{
		namespace UI
		{
			namespace Xaml
			{
				namespace Controls
				{

		TextBlock::TextBlock(const JSContext& js_context) TITANIUM_NOEXCEPT
			: Windows::UI::Xaml::FrameworkElement(js_context)
		{
			TITANIUM_LOG_DEBUG("TextBlock::ctor");
		}

		void TextBlock::postCallAsConstructor(const JSContext& context, const std::vector<JSValue>& arguments)
		{
			TITANIUM_LOG_DEBUG("TextBlock::postCallAsConstructor ", this);
			if (arguments.size() == 0) {

				wrapped__ = ref new ::Windows::UI::Xaml::Controls::TextBlock();
			}

		}

		::Windows::UI::Xaml::Controls::TextBlock^ TextBlock::unwrapWindows_UI_Xaml_Controls_TextBlock() const
		{
			return dynamic_cast<::Windows::UI::Xaml::Controls::TextBlock^>(wrapped__);
		}

		::Windows::UI::Xaml::Controls::TextBlock^ TextBlock::unwrap() const
		{
			return unwrapWindows_UI_Xaml_Controls_TextBlock();
		}

		void TextBlock::wrap(::Windows::UI::Xaml::Controls::TextBlock^ object)
		{
			wrapped__ = object;
		}

		void TextBlock::JSExportInitialize()
		{
			JSExport<TextBlock>::SetClassVersion(1);
			JSExport<TextBlock>::SetParent(JSExport<Windows::UI::Xaml::FrameworkElement>::Class());

			TITANIUM_ADD_PROPERTY(TextBlock, TextWrapping);
			TITANIUM_ADD_PROPERTY(TextBlock, TextTrimming);
			TITANIUM_ADD_PROPERTY(TextBlock, TextAlignment);
			TITANIUM_ADD_PROPERTY(TextBlock, Text);
			TITANIUM_ADD_PROPERTY(TextBlock, Padding);
			TITANIUM_ADD_PROPERTY(TextBlock, LineStackingStrategy);
			TITANIUM_ADD_PROPERTY(TextBlock, Foreground);
			TITANIUM_ADD_PROPERTY(TextBlock, FontWeight);
			TITANIUM_ADD_PROPERTY(TextBlock, FontStyle);
			TITANIUM_ADD_PROPERTY(TextBlock, FontStretch);
			TITANIUM_ADD_PROPERTY(TextBlock, FontSize);
			TITANIUM_ADD_PROPERTY(TextBlock, FontFamily);
			TITANIUM_ADD_PROPERTY(TextBlock, LineHeight);
			TITANIUM_ADD_PROPERTY(TextBlock, IsTextSelectionEnabled);
			TITANIUM_ADD_PROPERTY(TextBlock, CharacterSpacing);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, SelectedText);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, SelectionEnd);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, SelectionStart);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, ContentEnd);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, ContentStart);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, BaselineOffset);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, Inlines);
			TITANIUM_ADD_PROPERTY(TextBlock, OpticalMarginAlignment);
			TITANIUM_ADD_PROPERTY(TextBlock, TextReadingOrder);
			TITANIUM_ADD_PROPERTY(TextBlock, TextLineBounds);
			TITANIUM_ADD_PROPERTY(TextBlock, SelectionHighlightColor);
			TITANIUM_ADD_PROPERTY(TextBlock, MaxLines);
			TITANIUM_ADD_PROPERTY(TextBlock, IsColorFontEnabled);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, SelectionHighlightColorProperty);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, IsColorFontEnabledProperty);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, MaxLinesProperty);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, OpticalMarginAlignmentProperty);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, TextLineBoundsProperty);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, TextReadingOrderProperty);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, CharacterSpacingProperty);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, FontFamilyProperty);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, FontSizeProperty);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, FontStretchProperty);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, FontStyleProperty);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, FontWeightProperty);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, ForegroundProperty);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, IsTextSelectionEnabledProperty);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, LineHeightProperty);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, LineStackingStrategyProperty);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, PaddingProperty);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, SelectedTextProperty);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, TextAlignmentProperty);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, TextProperty);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, TextTrimmingProperty);
			TITANIUM_ADD_PROPERTY_READONLY(TextBlock, TextWrappingProperty);
			TITANIUM_ADD_FUNCTION(TextBlock, SelectAll);
			TITANIUM_ADD_FUNCTION(TextBlock, Select);
			TITANIUM_ADD_FUNCTION(TextBlock, Focus);
		}

		TITANIUM_PROPERTY_SETTER(TextBlock, TextWrapping)
		{
			auto value = static_cast<::Windows::UI::Xaml::TextWrapping>(static_cast<int32_t>(argument)); // TODO Look up enum in metadata to know what type it's value is? 

			unwrap()->TextWrapping = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(TextBlock, TextWrapping)
		{
			auto value = unwrap()->TextWrapping;
			auto context = get_context();

			auto result = context.CreateNumber(static_cast<int32_t>(static_cast<int>(value))); // FIXME What if the enum isn't an int based one?!

		}

		TITANIUM_PROPERTY_SETTER(TextBlock, TextTrimming)
		{
			auto value = static_cast<::Windows::UI::Xaml::TextTrimming>(static_cast<int32_t>(argument)); // TODO Look up enum in metadata to know what type it's value is? 

			unwrap()->TextTrimming = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(TextBlock, TextTrimming)
		{
			auto value = unwrap()->TextTrimming;
			auto context = get_context();

			auto result = context.CreateNumber(static_cast<int32_t>(static_cast<int>(value))); // FIXME What if the enum isn't an int based one?!

		}

		TITANIUM_PROPERTY_SETTER(TextBlock, TextAlignment)
		{
			auto value = static_cast<::Windows::UI::Xaml::TextAlignment>(static_cast<int32_t>(argument)); // TODO Look up enum in metadata to know what type it's value is? 

			unwrap()->TextAlignment = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(TextBlock, TextAlignment)
		{
			auto value = unwrap()->TextAlignment;
			auto context = get_context();

			auto result = context.CreateNumber(static_cast<int32_t>(static_cast<int>(value))); // FIXME What if the enum isn't an int based one?!

		}

		TITANIUM_PROPERTY_SETTER(TextBlock, Text)
		{ 
			auto value = TitaniumWindows::Utility::ConvertUTF8String(static_cast<std::string>(argument));

			unwrap()->Text = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(TextBlock, Text)
		{
			auto value = unwrap()->Text;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_SETTER(TextBlock, Padding)
		{
			auto object_value = static_cast<JSObject>(argument);
			::Windows::UI::Xaml::Thickness value;
			// Assign fields explicitly since we didn't use a constructor

			auto object_value_Left_ = static_cast<float>(static_cast<double>(object_value_Left));


			auto object_value_Top_ = static_cast<float>(static_cast<double>(object_value_Top));


			auto object_value_Right_ = static_cast<float>(static_cast<double>(object_value_Right));


			auto object_value_Bottom_ = static_cast<float>(static_cast<double>(object_value_Bottom));


			unwrap()->Padding = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(TextBlock, Padding)
		{
			auto value = unwrap()->Padding;
			auto context = get_context();

			auto result = context.CreateObject();








		}

		TITANIUM_PROPERTY_SETTER(TextBlock, LineStackingStrategy)
		{
			auto value = static_cast<::Windows::UI::Xaml::LineStackingStrategy>(static_cast<int32_t>(argument)); // TODO Look up enum in metadata to know what type it's value is? 

			unwrap()->LineStackingStrategy = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(TextBlock, LineStackingStrategy)
		{
			auto value = unwrap()->LineStackingStrategy;
			auto context = get_context();

			auto result = context.CreateNumber(static_cast<int32_t>(static_cast<int>(value))); // FIXME What if the enum isn't an int based one?!

		}

		TITANIUM_PROPERTY_SETTER(TextBlock, Foreground)
		{
			auto object_value = static_cast<JSObject>(argument);
 
			// FIXME What if the type we want here is some parent class of the actual wrapper's class? I think we'll get nullptr here.
			// We need some way to know the underlying type the JSObject maps to, get that, then cast to the type we want...
			auto value = wrapper_value->unwrapWindows_UI_Xaml_Media_Brush();

			unwrap()->Foreground = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(TextBlock, Foreground)
		{
			auto value = unwrap()->Foreground;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::Media::Brush>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_SETTER(TextBlock, FontWeight)
		{
			auto object_value = static_cast<JSObject>(argument);
			::Windows::UI::Text::FontWeight value;
			// Assign fields explicitly since we didn't use a constructor

			auto object_value_Weight_ = static_cast<uint32_t>(object_value_Weight);


			unwrap()->FontWeight = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(TextBlock, FontWeight)
		{
			auto value = unwrap()->FontWeight;
			auto context = get_context();

			auto result = context.CreateObject();


		}

		TITANIUM_PROPERTY_SETTER(TextBlock, FontStyle)
		{
			auto value = static_cast<::Windows::UI::Text::FontStyle>(static_cast<int32_t>(argument)); // TODO Look up enum in metadata to know what type it's value is? 

			unwrap()->FontStyle = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(TextBlock, FontStyle)
		{
			auto value = unwrap()->FontStyle;
			auto context = get_context();

			auto result = context.CreateNumber(static_cast<int32_t>(static_cast<int>(value))); // FIXME What if the enum isn't an int based one?!

		}

		TITANIUM_PROPERTY_SETTER(TextBlock, FontStretch)
		{
			auto value = static_cast<::Windows::UI::Text::FontStretch>(static_cast<int32_t>(argument)); // TODO Look up enum in metadata to know what type it's value is? 

			unwrap()->FontStretch = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(TextBlock, FontStretch)
		{
			auto value = unwrap()->FontStretch;
			auto context = get_context();

			auto result = context.CreateNumber(static_cast<int32_t>(static_cast<int>(value))); // FIXME What if the enum isn't an int based one?!

		}

		TITANIUM_PROPERTY_SETTER(TextBlock, FontSize)
		{ 
			auto value = static_cast<float>(static_cast<double>(argument));

			unwrap()->FontSize = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(TextBlock, FontSize)
		{
			auto value = unwrap()->FontSize;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_SETTER(TextBlock, FontFamily)
		{
			auto object_value = static_cast<JSObject>(argument);
 
			// FIXME What if the type we want here is some parent class of the actual wrapper's class? I think we'll get nullptr here.
			// We need some way to know the underlying type the JSObject maps to, get that, then cast to the type we want...
			auto value = wrapper_value->unwrapWindows_UI_Xaml_Media_FontFamily();

			unwrap()->FontFamily = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(TextBlock, FontFamily)
		{
			auto value = unwrap()->FontFamily;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::Media::FontFamily>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_SETTER(TextBlock, LineHeight)
		{ 
			auto value = static_cast<float>(static_cast<double>(argument));

			unwrap()->LineHeight = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(TextBlock, LineHeight)
		{
			auto value = unwrap()->LineHeight;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_SETTER(TextBlock, IsTextSelectionEnabled)
		{ 
			auto value = static_cast<bool>(argument);

			unwrap()->IsTextSelectionEnabled = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(TextBlock, IsTextSelectionEnabled)
		{
			auto value = unwrap()->IsTextSelectionEnabled;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_SETTER(TextBlock, CharacterSpacing)
		{ 
			auto value = static_cast<int32_t>(argument);

			unwrap()->CharacterSpacing = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(TextBlock, CharacterSpacing)
		{
			auto value = unwrap()->CharacterSpacing;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_GETTER(TextBlock, SelectedText)
		{
			auto value = unwrap()->SelectedText;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_GETTER(TextBlock, SelectionEnd)
		{
			auto value = unwrap()->SelectionEnd;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::Documents::TextPointer>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, SelectionStart)
		{
			auto value = unwrap()->SelectionStart;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::Documents::TextPointer>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, ContentEnd)
		{
			auto value = unwrap()->ContentEnd;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::Documents::TextPointer>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, ContentStart)
		{
			auto value = unwrap()->ContentStart;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::Documents::TextPointer>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, BaselineOffset)
		{
			auto value = unwrap()->BaselineOffset;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_GETTER(TextBlock, Inlines)
		{
			auto value = unwrap()->Inlines;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::Documents::InlineCollection>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_SETTER(TextBlock, OpticalMarginAlignment)
		{
			auto value = static_cast<::Windows::UI::Xaml::OpticalMarginAlignment>(static_cast<int32_t>(argument)); // TODO Look up enum in metadata to know what type it's value is? 

			unwrap()->OpticalMarginAlignment = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(TextBlock, OpticalMarginAlignment)
		{
			auto value = unwrap()->OpticalMarginAlignment;
			auto context = get_context();

			auto result = context.CreateNumber(static_cast<int32_t>(static_cast<int>(value))); // FIXME What if the enum isn't an int based one?!

		}

		TITANIUM_PROPERTY_SETTER(TextBlock, TextReadingOrder)
		{
			auto value = static_cast<::Windows::UI::Xaml::TextReadingOrder>(static_cast<int32_t>(argument)); // TODO Look up enum in metadata to know what type it's value is? 

			unwrap()->TextReadingOrder = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(TextBlock, TextReadingOrder)
		{
			auto value = unwrap()->TextReadingOrder;
			auto context = get_context();

			auto result = context.CreateNumber(static_cast<int32_t>(static_cast<int>(value))); // FIXME What if the enum isn't an int based one?!

		}

		TITANIUM_PROPERTY_SETTER(TextBlock, TextLineBounds)
		{
			auto value = static_cast<::Windows::UI::Xaml::TextLineBounds>(static_cast<int32_t>(argument)); // TODO Look up enum in metadata to know what type it's value is? 

			unwrap()->TextLineBounds = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(TextBlock, TextLineBounds)
		{
			auto value = unwrap()->TextLineBounds;
			auto context = get_context();

			auto result = context.CreateNumber(static_cast<int32_t>(static_cast<int>(value))); // FIXME What if the enum isn't an int based one?!

		}

		TITANIUM_PROPERTY_SETTER(TextBlock, SelectionHighlightColor)
		{
			auto object_value = static_cast<JSObject>(argument);
 
			// FIXME What if the type we want here is some parent class of the actual wrapper's class? I think we'll get nullptr here.
			// We need some way to know the underlying type the JSObject maps to, get that, then cast to the type we want...
			auto value = wrapper_value->unwrapWindows_UI_Xaml_Media_SolidColorBrush();

			unwrap()->SelectionHighlightColor = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(TextBlock, SelectionHighlightColor)
		{
			auto value = unwrap()->SelectionHighlightColor;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::Media::SolidColorBrush>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_SETTER(TextBlock, MaxLines)
		{ 
			auto value = static_cast<int32_t>(argument);

			unwrap()->MaxLines = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(TextBlock, MaxLines)
		{
			auto value = unwrap()->MaxLines;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_SETTER(TextBlock, IsColorFontEnabled)
		{ 
			auto value = static_cast<bool>(argument);

			unwrap()->IsColorFontEnabled = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(TextBlock, IsColorFontEnabled)
		{
			auto value = unwrap()->IsColorFontEnabled;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_GETTER(TextBlock, SelectionHighlightColorProperty)
		{
			auto value = unwrap()->SelectionHighlightColorProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, IsColorFontEnabledProperty)
		{
			auto value = unwrap()->IsColorFontEnabledProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, MaxLinesProperty)
		{
			auto value = unwrap()->MaxLinesProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, OpticalMarginAlignmentProperty)
		{
			auto value = unwrap()->OpticalMarginAlignmentProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, TextLineBoundsProperty)
		{
			auto value = unwrap()->TextLineBoundsProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, TextReadingOrderProperty)
		{
			auto value = unwrap()->TextReadingOrderProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, CharacterSpacingProperty)
		{
			auto value = unwrap()->CharacterSpacingProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, FontFamilyProperty)
		{
			auto value = unwrap()->FontFamilyProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, FontSizeProperty)
		{
			auto value = unwrap()->FontSizeProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, FontStretchProperty)
		{
			auto value = unwrap()->FontStretchProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, FontStyleProperty)
		{
			auto value = unwrap()->FontStyleProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, FontWeightProperty)
		{
			auto value = unwrap()->FontWeightProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, ForegroundProperty)
		{
			auto value = unwrap()->ForegroundProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, IsTextSelectionEnabledProperty)
		{
			auto value = unwrap()->IsTextSelectionEnabledProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, LineHeightProperty)
		{
			auto value = unwrap()->LineHeightProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, LineStackingStrategyProperty)
		{
			auto value = unwrap()->LineStackingStrategyProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, PaddingProperty)
		{
			auto value = unwrap()->PaddingProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, SelectedTextProperty)
		{
			auto value = unwrap()->SelectedTextProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, TextAlignmentProperty)
		{
			auto value = unwrap()->TextAlignmentProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, TextProperty)
		{
			auto value = unwrap()->TextProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, TextTrimmingProperty)
		{
			auto value = unwrap()->TextTrimmingProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(TextBlock, TextWrappingProperty)
		{
			auto value = unwrap()->TextWrappingProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_FUNCTION(TextBlock, SelectAll)
		{
			auto context = get_context();
			if (arguments.size() == 0) {
				unwrap()->SelectAll();
				return context.CreateUndefined(); 
			}

			// Catch-all if no arg count matches!
			TITANIUM_LOG_DEBUG("No method signature matched TextBlock::SelectAll with # of args: ", arguments.size());
			return context.CreateUndefined(); 
		}

		TITANIUM_FUNCTION(TextBlock, Select)
		{
			auto context = get_context();
			if (arguments.size() == 2) {
				auto _0 = arguments.at(0);
			auto object_start = static_cast<JSObject>(_0);
 
			// FIXME What if the type we want here is some parent class of the actual wrapper's class? I think we'll get nullptr here.
			// We need some way to know the underlying type the JSObject maps to, get that, then cast to the type we want...
			auto start = wrapper_start->unwrapWindows_UI_Xaml_Documents_TextPointer();

				auto _1 = arguments.at(1);
			auto object_end = static_cast<JSObject>(_1);
 
			// FIXME What if the type we want here is some parent class of the actual wrapper's class? I think we'll get nullptr here.
			// We need some way to know the underlying type the JSObject maps to, get that, then cast to the type we want...
			auto end = wrapper_end->unwrapWindows_UI_Xaml_Documents_TextPointer();

				unwrap()->Select(start, end);
				return context.CreateUndefined(); 
			}

			// Catch-all if no arg count matches!
			TITANIUM_LOG_DEBUG("No method signature matched TextBlock::Select with # of args: ", arguments.size());
			return context.CreateUndefined(); 
		}

		TITANIUM_FUNCTION(TextBlock, Focus)
		{
			auto context = get_context();
			if (arguments.size() == 1) {
				auto _0 = arguments.at(0);
			auto value = static_cast<::Windows::UI::Xaml::FocusState>(static_cast<int32_t>(_0)); // TODO Look up enum in metadata to know what type it's value is? 

				auto method_result = unwrap()->Focus(value);

			}

			// Catch-all if no arg count matches!
			TITANIUM_LOG_DEBUG("No method signature matched TextBlock::Focus with # of args: ", arguments.size());
			return context.CreateUndefined(); 
		}

				} // namespace Controls
			} // namespace Xaml
		} // namespace UI
	} // namespace Windows
} // namespace Titanium