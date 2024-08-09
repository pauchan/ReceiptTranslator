// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220531.1

#pragma once
#ifndef WINRT_Microsoft_Graphics_Canvas_UI_Xaml_2_H
#define WINRT_Microsoft_Graphics_Canvas_UI_Xaml_2_H
#include "winrt/impl/Microsoft.Graphics.Canvas.1.h"
#include "winrt/impl/Microsoft.UI.Composition.1.h"
#include "winrt/impl/Microsoft.UI.Xaml.1.h"
#include "winrt/impl/Microsoft.UI.Xaml.Controls.1.h"
#include "winrt/impl/Microsoft.UI.Xaml.Media.1.h"
#include "winrt/impl/Microsoft.UI.Xaml.Media.Imaging.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.UI.Xaml.1.h"
WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::UI::Xaml
{
    struct __declspec(empty_bases) CanvasControl : winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl,
        impl::base<CanvasControl, winrt::Microsoft::UI::Xaml::Controls::UserControl, winrt::Microsoft::UI::Xaml::Controls::Control, winrt::Microsoft::UI::Xaml::FrameworkElement, winrt::Microsoft::UI::Xaml::UIElement, winrt::Microsoft::UI::Xaml::DependencyObject>,
        impl::require<CanvasControl, winrt::Microsoft::UI::Xaml::Controls::IUserControl, winrt::Microsoft::UI::Xaml::Controls::IControl, winrt::Microsoft::UI::Xaml::Controls::IControlProtected, winrt::Microsoft::UI::Xaml::Controls::IControlOverrides, winrt::Microsoft::UI::Xaml::IFrameworkElement, winrt::Microsoft::UI::Xaml::IFrameworkElementProtected, winrt::Microsoft::UI::Xaml::IFrameworkElementOverrides, winrt::Microsoft::UI::Xaml::IUIElement, winrt::Microsoft::UI::Xaml::IUIElementProtected, winrt::Microsoft::UI::Xaml::IUIElementOverrides, winrt::Microsoft::UI::Composition::IAnimationObject, winrt::Microsoft::UI::Composition::IVisualElement, winrt::Microsoft::UI::Composition::IVisualElement2, winrt::Microsoft::UI::Xaml::IDependencyObject>
    {
        CanvasControl(std::nullptr_t) noexcept {}
        CanvasControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl(ptr, take_ownership_from_abi) {}
        CanvasControl();
    };
    struct __declspec(empty_bases) CanvasDrawEventArgs : winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgs
    {
        CanvasDrawEventArgs(std::nullptr_t) noexcept {}
        CanvasDrawEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgs(ptr, take_ownership_from_abi) {}
        explicit CanvasDrawEventArgs(winrt::Microsoft::Graphics::Canvas::CanvasDrawingSession const& canvasDrawingSession);
    };
    struct __declspec(empty_bases) CanvasImageSource : winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource,
        impl::base<CanvasImageSource, winrt::Microsoft::UI::Xaml::Media::Imaging::SurfaceImageSource, winrt::Microsoft::UI::Xaml::Media::ImageSource, winrt::Microsoft::UI::Xaml::DependencyObject>,
        impl::require<CanvasImageSource, winrt::Microsoft::UI::Xaml::Media::Imaging::ISurfaceImageSource, winrt::Microsoft::UI::Xaml::Media::IImageSource, winrt::Microsoft::UI::Xaml::IDependencyObject>
    {
        CanvasImageSource(std::nullptr_t) noexcept {}
        CanvasImageSource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource(ptr, take_ownership_from_abi) {}
        CanvasImageSource(winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, winrt::Windows::Foundation::Size const& size);
        CanvasImageSource(winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, float width, float height);
        CanvasImageSource(winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi);
        CanvasImageSource(winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi, winrt::Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode);
    };
    struct __declspec(empty_bases) CanvasRegionsInvalidatedEventArgs : winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasRegionsInvalidatedEventArgs
    {
        CanvasRegionsInvalidatedEventArgs(std::nullptr_t) noexcept {}
        CanvasRegionsInvalidatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasRegionsInvalidatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CanvasSwapChainPanel : winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasSwapChainPanel,
        impl::base<CanvasSwapChainPanel, winrt::Microsoft::UI::Xaml::Controls::SwapChainPanel, winrt::Microsoft::UI::Xaml::Controls::Grid, winrt::Microsoft::UI::Xaml::Controls::Panel, winrt::Microsoft::UI::Xaml::FrameworkElement, winrt::Microsoft::UI::Xaml::UIElement, winrt::Microsoft::UI::Xaml::DependencyObject>,
        impl::require<CanvasSwapChainPanel, winrt::Microsoft::UI::Xaml::Controls::ISwapChainPanel, winrt::Microsoft::UI::Xaml::Controls::IGrid, winrt::Microsoft::UI::Xaml::Controls::IPanel, winrt::Microsoft::UI::Xaml::IFrameworkElement, winrt::Microsoft::UI::Xaml::IFrameworkElementProtected, winrt::Microsoft::UI::Xaml::IFrameworkElementOverrides, winrt::Microsoft::UI::Xaml::IUIElement, winrt::Microsoft::UI::Xaml::IUIElementProtected, winrt::Microsoft::UI::Xaml::IUIElementOverrides, winrt::Microsoft::UI::Composition::IAnimationObject, winrt::Microsoft::UI::Composition::IVisualElement, winrt::Microsoft::UI::Composition::IVisualElement2, winrt::Microsoft::UI::Xaml::IDependencyObject>
    {
        CanvasSwapChainPanel(std::nullptr_t) noexcept {}
        CanvasSwapChainPanel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasSwapChainPanel(ptr, take_ownership_from_abi) {}
        CanvasSwapChainPanel();
    };
    struct __declspec(empty_bases) CanvasVirtualControl : winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl,
        impl::base<CanvasVirtualControl, winrt::Microsoft::UI::Xaml::Controls::UserControl, winrt::Microsoft::UI::Xaml::Controls::Control, winrt::Microsoft::UI::Xaml::FrameworkElement, winrt::Microsoft::UI::Xaml::UIElement, winrt::Microsoft::UI::Xaml::DependencyObject>,
        impl::require<CanvasVirtualControl, winrt::Microsoft::UI::Xaml::Controls::IUserControl, winrt::Microsoft::UI::Xaml::Controls::IControl, winrt::Microsoft::UI::Xaml::Controls::IControlProtected, winrt::Microsoft::UI::Xaml::Controls::IControlOverrides, winrt::Microsoft::UI::Xaml::IFrameworkElement, winrt::Microsoft::UI::Xaml::IFrameworkElementProtected, winrt::Microsoft::UI::Xaml::IFrameworkElementOverrides, winrt::Microsoft::UI::Xaml::IUIElement, winrt::Microsoft::UI::Xaml::IUIElementProtected, winrt::Microsoft::UI::Xaml::IUIElementOverrides, winrt::Microsoft::UI::Composition::IAnimationObject, winrt::Microsoft::UI::Composition::IVisualElement, winrt::Microsoft::UI::Composition::IVisualElement2, winrt::Microsoft::UI::Xaml::IDependencyObject>
    {
        CanvasVirtualControl(std::nullptr_t) noexcept {}
        CanvasVirtualControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl(ptr, take_ownership_from_abi) {}
        CanvasVirtualControl();
    };
    struct __declspec(empty_bases) CanvasVirtualImageSource : winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource
    {
        CanvasVirtualImageSource(std::nullptr_t) noexcept {}
        CanvasVirtualImageSource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource(ptr, take_ownership_from_abi) {}
        CanvasVirtualImageSource(winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, winrt::Windows::Foundation::Size const& size);
        CanvasVirtualImageSource(winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, float width, float height);
        CanvasVirtualImageSource(winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi);
        CanvasVirtualImageSource(winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi, winrt::Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode);
    };
}
#endif