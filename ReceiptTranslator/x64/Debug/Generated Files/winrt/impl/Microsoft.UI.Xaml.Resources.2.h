// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220531.1

#pragma once
#ifndef WINRT_Microsoft_UI_Xaml_Resources_2_H
#define WINRT_Microsoft_UI_Xaml_Resources_2_H
#include "winrt/impl/Microsoft.UI.Xaml.Resources.1.h"
WINRT_EXPORT namespace winrt::Microsoft::UI::Xaml::Resources
{
    struct __declspec(empty_bases) CustomXamlResourceLoader : winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoader,
        impl::require<CustomXamlResourceLoader, winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>
    {
        CustomXamlResourceLoader(std::nullptr_t) noexcept {}
        CustomXamlResourceLoader(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoader(ptr, take_ownership_from_abi) {}
        CustomXamlResourceLoader();
        [[nodiscard]] static auto Current();
        static auto Current(winrt::Microsoft::UI::Xaml::Resources::CustomXamlResourceLoader const& value);
    };
    template <typename D>
    class ICustomXamlResourceLoaderOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using ICustomXamlResourceLoaderOverrides = winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides;
        auto GetResource(param::hstring const& resourceId, param::hstring const& objectType, param::hstring const& propertyName, param::hstring const& propertyType) const;
    };
}
#endif
