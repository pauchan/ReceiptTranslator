// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220531.1

#pragma once
#ifndef WINRT_Microsoft_Windows_System_2_H
#define WINRT_Microsoft_Windows_System_2_H
#include "winrt/impl/Microsoft.Windows.System.1.h"
WINRT_EXPORT namespace winrt::Microsoft::Windows::System
{
    struct __declspec(empty_bases) EnvironmentManager : winrt::Microsoft::Windows::System::IEnvironmentManager,
        impl::require<EnvironmentManager, winrt::Microsoft::Windows::System::IEnvironmentManager2>
    {
        EnvironmentManager(std::nullptr_t) noexcept {}
        EnvironmentManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Windows::System::IEnvironmentManager(ptr, take_ownership_from_abi) {}
        static auto GetForProcess();
        static auto GetForUser();
        static auto GetForMachine();
        [[nodiscard]] static auto IsSupported();
    };
}
#endif
