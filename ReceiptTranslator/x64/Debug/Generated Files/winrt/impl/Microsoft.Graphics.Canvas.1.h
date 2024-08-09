// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220531.1

#pragma once
#ifndef WINRT_Microsoft_Graphics_Canvas_1_H
#define WINRT_Microsoft_Graphics_Canvas_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.0.h"
#include "winrt/impl/Windows.Graphics.Effects.0.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.0.h"
WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas
{
    struct __declspec(empty_bases) ICanvasActiveLayer :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasActiveLayer>,
        impl::require<winrt::Microsoft::Graphics::Canvas::ICanvasActiveLayer, winrt::Windows::Foundation::IClosable>
    {
        ICanvasActiveLayer(std::nullptr_t = nullptr) noexcept {}
        ICanvasActiveLayer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasBitmap :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasBitmap>,
        impl::require<winrt::Microsoft::Graphics::Canvas::ICanvasBitmap, winrt::Windows::Graphics::Effects::IGraphicsEffectSource, winrt::Windows::Foundation::IClosable, winrt::Microsoft::Graphics::Canvas::ICanvasImage, winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface, winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreator, winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi>
    {
        ICanvasBitmap(std::nullptr_t = nullptr) noexcept {}
        ICanvasBitmap(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasBitmapFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasBitmapFactory>
    {
        ICanvasBitmapFactory(std::nullptr_t = nullptr) noexcept {}
        ICanvasBitmapFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasBitmapStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasBitmapStatics>
    {
        ICanvasBitmapStatics(std::nullptr_t = nullptr) noexcept {}
        ICanvasBitmapStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasCommandList :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasCommandList>,
        impl::require<winrt::Microsoft::Graphics::Canvas::ICanvasCommandList, winrt::Windows::Graphics::Effects::IGraphicsEffectSource, winrt::Windows::Foundation::IClosable, winrt::Microsoft::Graphics::Canvas::ICanvasImage>
    {
        ICanvasCommandList(std::nullptr_t = nullptr) noexcept {}
        ICanvasCommandList(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasCommandListFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasCommandListFactory>
    {
        ICanvasCommandListFactory(std::nullptr_t = nullptr) noexcept {}
        ICanvasCommandListFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasDevice :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasDevice>,
        impl::require<winrt::Microsoft::Graphics::Canvas::ICanvasDevice, winrt::Windows::Foundation::IClosable, winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreator, winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>
    {
        ICanvasDevice(std::nullptr_t = nullptr) noexcept {}
        ICanvasDevice(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasDeviceFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasDeviceFactory>
    {
        ICanvasDeviceFactory(std::nullptr_t = nullptr) noexcept {}
        ICanvasDeviceFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasDeviceStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasDeviceStatics>
    {
        ICanvasDeviceStatics(std::nullptr_t = nullptr) noexcept {}
        ICanvasDeviceStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasDrawingSession :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasDrawingSession>,
        impl::require<winrt::Microsoft::Graphics::Canvas::ICanvasDrawingSession, winrt::Windows::Foundation::IClosable, winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreator, winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi>
    {
        ICanvasDrawingSession(std::nullptr_t = nullptr) noexcept {}
        ICanvasDrawingSession(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasImage :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasImage>,
        impl::require<winrt::Microsoft::Graphics::Canvas::ICanvasImage, winrt::Windows::Graphics::Effects::IGraphicsEffectSource, winrt::Windows::Foundation::IClosable>
    {
        ICanvasImage(std::nullptr_t = nullptr) noexcept {}
        ICanvasImage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasImageStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasImageStatics>
    {
        ICanvasImageStatics(std::nullptr_t = nullptr) noexcept {}
        ICanvasImageStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasLock :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasLock>
    {
        ICanvasLock(std::nullptr_t = nullptr) noexcept {}
        ICanvasLock(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasRenderTarget :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasRenderTarget>
    {
        ICanvasRenderTarget(std::nullptr_t = nullptr) noexcept {}
        ICanvasRenderTarget(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasRenderTargetFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasRenderTargetFactory>
    {
        ICanvasRenderTargetFactory(std::nullptr_t = nullptr) noexcept {}
        ICanvasRenderTargetFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasRenderTargetStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasRenderTargetStatics>
    {
        ICanvasRenderTargetStatics(std::nullptr_t = nullptr) noexcept {}
        ICanvasRenderTargetStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasResourceCreator :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasResourceCreator>
    {
        ICanvasResourceCreator(std::nullptr_t = nullptr) noexcept {}
        ICanvasResourceCreator(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasResourceCreatorWithDpi :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasResourceCreatorWithDpi>,
        impl::require<winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi, winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreator>
    {
        ICanvasResourceCreatorWithDpi(std::nullptr_t = nullptr) noexcept {}
        ICanvasResourceCreatorWithDpi(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasSpriteBatch :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasSpriteBatch>,
        impl::require<winrt::Microsoft::Graphics::Canvas::ICanvasSpriteBatch, winrt::Windows::Foundation::IClosable, winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreator, winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi>
    {
        ICanvasSpriteBatch(std::nullptr_t = nullptr) noexcept {}
        ICanvasSpriteBatch(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasSpriteBatchStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasSpriteBatchStatics>
    {
        ICanvasSpriteBatchStatics(std::nullptr_t = nullptr) noexcept {}
        ICanvasSpriteBatchStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasSwapChain :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasSwapChain>,
        impl::require<winrt::Microsoft::Graphics::Canvas::ICanvasSwapChain, winrt::Windows::Foundation::IClosable, winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreator, winrt::Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi>
    {
        ICanvasSwapChain(std::nullptr_t = nullptr) noexcept {}
        ICanvasSwapChain(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasSwapChainFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasSwapChainFactory>
    {
        ICanvasSwapChainFactory(std::nullptr_t = nullptr) noexcept {}
        ICanvasSwapChainFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasSwapChainStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasSwapChainStatics>
    {
        ICanvasSwapChainStatics(std::nullptr_t = nullptr) noexcept {}
        ICanvasSwapChainStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasVirtualBitmap :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasVirtualBitmap>,
        impl::require<winrt::Microsoft::Graphics::Canvas::ICanvasVirtualBitmap, winrt::Windows::Foundation::IClosable, winrt::Windows::Graphics::Effects::IGraphicsEffectSource, winrt::Microsoft::Graphics::Canvas::ICanvasImage>
    {
        ICanvasVirtualBitmap(std::nullptr_t = nullptr) noexcept {}
        ICanvasVirtualBitmap(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasVirtualBitmapStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasVirtualBitmapStatics>
    {
        ICanvasVirtualBitmapStatics(std::nullptr_t = nullptr) noexcept {}
        ICanvasVirtualBitmapStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
