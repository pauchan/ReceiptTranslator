// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220531.1

#pragma once
#ifndef WINRT_Microsoft_UI_Input_DragDrop_1_H
#define WINRT_Microsoft_UI_Input_DragDrop_1_H
#include "winrt/impl/Microsoft.UI.Input.DragDrop.0.h"
WINRT_EXPORT namespace winrt::Microsoft::UI::Input::DragDrop
{
    struct __declspec(empty_bases) IDragDropManager :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDragDropManager>
    {
        IDragDropManager(std::nullptr_t = nullptr) noexcept {}
        IDragDropManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDragDropManagerStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDragDropManagerStatics>
    {
        IDragDropManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IDragDropManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDragInfo :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDragInfo>
    {
        IDragInfo(std::nullptr_t = nullptr) noexcept {}
        IDragInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDragOperation :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDragOperation>
    {
        IDragOperation(std::nullptr_t = nullptr) noexcept {}
        IDragOperation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDragUIOverride :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDragUIOverride>
    {
        IDragUIOverride(std::nullptr_t = nullptr) noexcept {}
        IDragUIOverride(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDropOperationTarget :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDropOperationTarget>
    {
        IDropOperationTarget(std::nullptr_t = nullptr) noexcept {}
        IDropOperationTarget(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDropOperationTargetRequestedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDropOperationTargetRequestedEventArgs>
    {
        IDropOperationTargetRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IDropOperationTargetRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
