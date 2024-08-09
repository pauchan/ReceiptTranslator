// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220531.1

#pragma once
#ifndef WINRT_Microsoft_Windows_Widgets_Feeds_Providers_2_H
#define WINRT_Microsoft_Windows_Widgets_Feeds_Providers_2_H
#include "winrt/impl/Microsoft.Windows.Widgets.Feeds.Providers.1.h"
WINRT_EXPORT namespace winrt::Microsoft::Windows::Widgets::Feeds::Providers
{
    struct __declspec(empty_bases) CustomQueryParametersRequestedArgs : winrt::Microsoft::Windows::Widgets::Feeds::Providers::ICustomQueryParametersRequestedArgs
    {
        CustomQueryParametersRequestedArgs(std::nullptr_t) noexcept {}
        CustomQueryParametersRequestedArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Windows::Widgets::Feeds::Providers::ICustomQueryParametersRequestedArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CustomQueryParametersUpdateOptions : winrt::Microsoft::Windows::Widgets::Feeds::Providers::ICustomQueryParametersUpdateOptions
    {
        CustomQueryParametersUpdateOptions(std::nullptr_t) noexcept {}
        CustomQueryParametersUpdateOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Windows::Widgets::Feeds::Providers::ICustomQueryParametersUpdateOptions(ptr, take_ownership_from_abi) {}
        CustomQueryParametersUpdateOptions(param::hstring const& feedProviderDefinitionId, param::hstring const& customQueryParameters);
    };
    struct __declspec(empty_bases) FeedDisabledArgs : winrt::Microsoft::Windows::Widgets::Feeds::Providers::IFeedDisabledArgs
    {
        FeedDisabledArgs(std::nullptr_t) noexcept {}
        FeedDisabledArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Windows::Widgets::Feeds::Providers::IFeedDisabledArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FeedEnabledArgs : winrt::Microsoft::Windows::Widgets::Feeds::Providers::IFeedEnabledArgs
    {
        FeedEnabledArgs(std::nullptr_t) noexcept {}
        FeedEnabledArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Windows::Widgets::Feeds::Providers::IFeedEnabledArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FeedManager : winrt::Microsoft::Windows::Widgets::Feeds::Providers::IFeedManager
    {
        FeedManager(std::nullptr_t) noexcept {}
        FeedManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Windows::Widgets::Feeds::Providers::IFeedManager(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
    };
    struct __declspec(empty_bases) FeedProviderDisabledArgs : winrt::Microsoft::Windows::Widgets::Feeds::Providers::IFeedProviderDisabledArgs
    {
        FeedProviderDisabledArgs(std::nullptr_t) noexcept {}
        FeedProviderDisabledArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Windows::Widgets::Feeds::Providers::IFeedProviderDisabledArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FeedProviderEnabledArgs : winrt::Microsoft::Windows::Widgets::Feeds::Providers::IFeedProviderEnabledArgs
    {
        FeedProviderEnabledArgs(std::nullptr_t) noexcept {}
        FeedProviderEnabledArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Windows::Widgets::Feeds::Providers::IFeedProviderEnabledArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FeedProviderInfo : winrt::Microsoft::Windows::Widgets::Feeds::Providers::IFeedProviderInfo
    {
        FeedProviderInfo(std::nullptr_t) noexcept {}
        FeedProviderInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Windows::Widgets::Feeds::Providers::IFeedProviderInfo(ptr, take_ownership_from_abi) {}
    };
}
#endif