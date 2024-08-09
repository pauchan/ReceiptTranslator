// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220531.1

#pragma once
#ifndef WINRT_Microsoft_Windows_AppNotifications_Builder_2_H
#define WINRT_Microsoft_Windows_AppNotifications_Builder_2_H
#include "winrt/impl/Microsoft.Windows.AppNotifications.Builder.1.h"
WINRT_EXPORT namespace winrt::Microsoft::Windows::AppNotifications::Builder
{
    struct __declspec(empty_bases) AppNotificationBuilder : winrt::Microsoft::Windows::AppNotifications::Builder::IAppNotificationBuilder
    {
        AppNotificationBuilder(std::nullptr_t) noexcept {}
        AppNotificationBuilder(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Windows::AppNotifications::Builder::IAppNotificationBuilder(ptr, take_ownership_from_abi) {}
        AppNotificationBuilder();
        static auto IsUrgentScenarioSupported();
    };
    struct __declspec(empty_bases) AppNotificationButton : winrt::Microsoft::Windows::AppNotifications::Builder::IAppNotificationButton
    {
        AppNotificationButton(std::nullptr_t) noexcept {}
        AppNotificationButton(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Windows::AppNotifications::Builder::IAppNotificationButton(ptr, take_ownership_from_abi) {}
        AppNotificationButton();
        explicit AppNotificationButton(param::hstring const& content);
        static auto IsToolTipSupported();
        static auto IsButtonStyleSupported();
    };
    struct __declspec(empty_bases) AppNotificationComboBox : winrt::Microsoft::Windows::AppNotifications::Builder::IAppNotificationComboBox
    {
        AppNotificationComboBox(std::nullptr_t) noexcept {}
        AppNotificationComboBox(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Windows::AppNotifications::Builder::IAppNotificationComboBox(ptr, take_ownership_from_abi) {}
        explicit AppNotificationComboBox(param::hstring const& id);
    };
    struct __declspec(empty_bases) AppNotificationProgressBar : winrt::Microsoft::Windows::AppNotifications::Builder::IAppNotificationProgressBar
    {
        AppNotificationProgressBar(std::nullptr_t) noexcept {}
        AppNotificationProgressBar(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Windows::AppNotifications::Builder::IAppNotificationProgressBar(ptr, take_ownership_from_abi) {}
        AppNotificationProgressBar();
    };
    struct __declspec(empty_bases) AppNotificationTextProperties : winrt::Microsoft::Windows::AppNotifications::Builder::IAppNotificationTextProperties
    {
        AppNotificationTextProperties(std::nullptr_t) noexcept {}
        AppNotificationTextProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Windows::AppNotifications::Builder::IAppNotificationTextProperties(ptr, take_ownership_from_abi) {}
        AppNotificationTextProperties();
    };
}
#endif
