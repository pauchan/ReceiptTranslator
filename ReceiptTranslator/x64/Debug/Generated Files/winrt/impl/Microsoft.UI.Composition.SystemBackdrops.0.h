// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220531.1

#pragma once
#ifndef WINRT_Microsoft_UI_Composition_SystemBackdrops_0_H
#define WINRT_Microsoft_UI_Composition_SystemBackdrops_0_H
WINRT_EXPORT namespace winrt::Microsoft::UI
{
    struct WindowId;
}
WINRT_EXPORT namespace winrt::Microsoft::UI::Composition
{
    struct ICompositionSupportsSystemBackdrop;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename T> struct __declspec(empty_bases) IReference;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
}
WINRT_EXPORT namespace winrt::Windows::UI::Composition
{
    struct CompositionTarget;
}
WINRT_EXPORT namespace winrt::Windows::UI::Core
{
    struct CoreWindow;
}
WINRT_EXPORT namespace winrt::Microsoft::UI::Composition::SystemBackdrops
{
    enum class DesktopAcrylicKind : int32_t
    {
        Default = 0,
        Base = 1,
        Thin = 2,
    };
    enum class MicaKind : int32_t
    {
        Base = 0,
        BaseAlt = 1,
    };
    enum class SystemBackdropState : int32_t
    {
        Active = 0,
        Fallback = 1,
        HighContrast = 2,
    };
    enum class SystemBackdropTheme : int32_t
    {
        Default = 0,
        Light = 1,
        Dark = 2,
    };
    struct IDesktopAcrylicController;
    struct IDesktopAcrylicController2;
    struct IDesktopAcrylicController3;
    struct IDesktopAcrylicControllerStatics;
    struct IMicaController;
    struct IMicaController2;
    struct IMicaControllerStatics;
    struct ISystemBackdropConfiguration;
    struct ISystemBackdropController;
    struct ISystemBackdropControllerWithTargets;
    struct DesktopAcrylicController;
    struct MicaController;
    struct SystemBackdropConfiguration;
}
namespace winrt::impl
{
    template <> struct category<winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController2>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController3>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicControllerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaController>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaController2>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaControllerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropConfiguration>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropController>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropControllerWithTargets>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Composition::SystemBackdrops::DesktopAcrylicController>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::UI::Composition::SystemBackdrops::MicaController>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::UI::Composition::SystemBackdrops::SystemBackdropConfiguration>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::UI::Composition::SystemBackdrops::DesktopAcrylicKind>{ using type = enum_category; };
    template <> struct category<winrt::Microsoft::UI::Composition::SystemBackdrops::MicaKind>{ using type = enum_category; };
    template <> struct category<winrt::Microsoft::UI::Composition::SystemBackdrops::SystemBackdropState>{ using type = enum_category; };
    template <> struct category<winrt::Microsoft::UI::Composition::SystemBackdrops::SystemBackdropTheme>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Composition::SystemBackdrops::DesktopAcrylicController> = L"Microsoft.UI.Composition.SystemBackdrops.DesktopAcrylicController";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Composition::SystemBackdrops::MicaController> = L"Microsoft.UI.Composition.SystemBackdrops.MicaController";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Composition::SystemBackdrops::SystemBackdropConfiguration> = L"Microsoft.UI.Composition.SystemBackdrops.SystemBackdropConfiguration";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Composition::SystemBackdrops::DesktopAcrylicKind> = L"Microsoft.UI.Composition.SystemBackdrops.DesktopAcrylicKind";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Composition::SystemBackdrops::MicaKind> = L"Microsoft.UI.Composition.SystemBackdrops.MicaKind";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Composition::SystemBackdrops::SystemBackdropState> = L"Microsoft.UI.Composition.SystemBackdrops.SystemBackdropState";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Composition::SystemBackdrops::SystemBackdropTheme> = L"Microsoft.UI.Composition.SystemBackdrops.SystemBackdropTheme";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController> = L"Microsoft.UI.Composition.SystemBackdrops.IDesktopAcrylicController";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController2> = L"Microsoft.UI.Composition.SystemBackdrops.IDesktopAcrylicController2";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController3> = L"Microsoft.UI.Composition.SystemBackdrops.IDesktopAcrylicController3";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicControllerStatics> = L"Microsoft.UI.Composition.SystemBackdrops.IDesktopAcrylicControllerStatics";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaController> = L"Microsoft.UI.Composition.SystemBackdrops.IMicaController";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaController2> = L"Microsoft.UI.Composition.SystemBackdrops.IMicaController2";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaControllerStatics> = L"Microsoft.UI.Composition.SystemBackdrops.IMicaControllerStatics";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropConfiguration> = L"Microsoft.UI.Composition.SystemBackdrops.ISystemBackdropConfiguration";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropController> = L"Microsoft.UI.Composition.SystemBackdrops.ISystemBackdropController";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropControllerWithTargets> = L"Microsoft.UI.Composition.SystemBackdrops.ISystemBackdropControllerWithTargets";
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController>{ 0x7C20A6AF,0x8EB3,0x5F08,{ 0xBD,0xFC,0x6D,0x35,0xE3,0x5D,0xFE,0x45 } }; // 7C20A6AF-8EB3-5F08-BDFC-6D35E35DFE45
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController2>{ 0x88E0A368,0xDFC7,0x5971,{ 0xA5,0x0B,0x40,0xDF,0x5A,0xA5,0xF5,0xC2 } }; // 88E0A368-DFC7-5971-A50B-40DF5AA5F5C2
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController3>{ 0x30D917E6,0x02D3,0x59CA,{ 0xB4,0x40,0xBF,0x9D,0x2E,0x7C,0xC1,0x40 } }; // 30D917E6-02D3-59CA-B440-BF9D2E7CC140
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicControllerStatics>{ 0xA9E8F790,0x79EF,0x5416,{ 0x9B,0x67,0x6B,0xCF,0xE8,0x67,0xC8,0xB7 } }; // A9E8F790-79EF-5416-9B67-6BCFE867C8B7
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaController>{ 0x2DE996A9,0x0A2A,0x5889,{ 0xA8,0x9C,0x1F,0x84,0x06,0x0A,0x8C,0xAB } }; // 2DE996A9-0A2A-5889-A89C-1F84060A8CAB
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaController2>{ 0xF1ED4A52,0xD9CA,0x506E,{ 0x95,0x86,0xCA,0xAE,0xFD,0x3A,0xA9,0x71 } }; // F1ED4A52-D9CA-506E-9586-CAAEFD3AA971
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaControllerStatics>{ 0x7D85D834,0xD514,0x5250,{ 0xB7,0xC4,0x0B,0x78,0x50,0xD1,0xEF,0xDC } }; // 7D85D834-D514-5250-B7C4-0B7850D1EFDC
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropConfiguration>{ 0xEBCCE1B9,0x0E0C,0x5431,{ 0xAB,0x0E,0x00,0xF3,0xF0,0x66,0x99,0x62 } }; // EBCCE1B9-0E0C-5431-AB0E-00F3F0669962
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropController>{ 0x5632D76C,0x0B74,0x5B52,{ 0xAA,0x33,0x80,0x26,0x20,0x68,0xAE,0xB2 } }; // 5632D76C-0B74-5B52-AA33-80262068AEB2
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropControllerWithTargets>{ 0x9C56FE7C,0x98EB,0x5F89,{ 0xAD,0x97,0xDA,0xD5,0x7F,0xC3,0x0C,0x8C } }; // 9C56FE7C-98EB-5F89-AD97-DAD57FC30C8C
    template <> struct default_interface<winrt::Microsoft::UI::Composition::SystemBackdrops::DesktopAcrylicController>{ using type = winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController; };
    template <> struct default_interface<winrt::Microsoft::UI::Composition::SystemBackdrops::MicaController>{ using type = winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaController; };
    template <> struct default_interface<winrt::Microsoft::UI::Composition::SystemBackdrops::SystemBackdropConfiguration>{ using type = winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropConfiguration; };
    template <> struct abi<winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FallbackColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_FallbackColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_LuminosityOpacity(float*) noexcept = 0;
            virtual int32_t __stdcall put_LuminosityOpacity(float) noexcept = 0;
            virtual int32_t __stdcall get_TintColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_TintColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_TintOpacity(float*) noexcept = 0;
            virtual int32_t __stdcall put_TintOpacity(float) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ResetProperties() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Kind(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicControllerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FallbackColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_FallbackColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_LuminosityOpacity(float*) noexcept = 0;
            virtual int32_t __stdcall put_LuminosityOpacity(float) noexcept = 0;
            virtual int32_t __stdcall get_TintColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_TintColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_TintOpacity(float*) noexcept = 0;
            virtual int32_t __stdcall put_TintOpacity(float) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaController2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Kind(int32_t) noexcept = 0;
            virtual int32_t __stdcall ResetProperties() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaControllerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HighContrastBackgroundColor(void**) noexcept = 0;
            virtual int32_t __stdcall put_HighContrastBackgroundColor(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsHighContrast(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsHighContrast(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsInputActive(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsInputActive(bool) noexcept = 0;
            virtual int32_t __stdcall get_Theme(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Theme(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetTargetWithWindowId(struct struct_Microsoft_UI_WindowId, void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetTargetWithCoreWindow(void*, void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropControllerWithTargets>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall AddSystemBackdropTarget(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall RemoveAllSystemBackdropTargets() noexcept = 0;
            virtual int32_t __stdcall RemoveSystemBackdropTarget(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetSystemBackdropConfiguration(void*) noexcept = 0;
            virtual int32_t __stdcall add_StateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StateChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Microsoft_UI_Composition_SystemBackdrops_IDesktopAcrylicController
    {
        [[nodiscard]] auto FallbackColor() const;
        auto FallbackColor(winrt::Windows::UI::Color const& value) const;
        [[nodiscard]] auto LuminosityOpacity() const;
        auto LuminosityOpacity(float value) const;
        [[nodiscard]] auto TintColor() const;
        auto TintColor(winrt::Windows::UI::Color const& value) const;
        [[nodiscard]] auto TintOpacity() const;
        auto TintOpacity(float value) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController>
    {
        template <typename D> using type = consume_Microsoft_UI_Composition_SystemBackdrops_IDesktopAcrylicController<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Composition_SystemBackdrops_IDesktopAcrylicController2
    {
        auto ResetProperties() const;
    };
    template <> struct consume<winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController2>
    {
        template <typename D> using type = consume_Microsoft_UI_Composition_SystemBackdrops_IDesktopAcrylicController2<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Composition_SystemBackdrops_IDesktopAcrylicController3
    {
        [[nodiscard]] auto Kind() const;
        auto Kind(winrt::Microsoft::UI::Composition::SystemBackdrops::DesktopAcrylicKind const& value) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController3>
    {
        template <typename D> using type = consume_Microsoft_UI_Composition_SystemBackdrops_IDesktopAcrylicController3<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Composition_SystemBackdrops_IDesktopAcrylicControllerStatics
    {
        auto IsSupported() const;
    };
    template <> struct consume<winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicControllerStatics>
    {
        template <typename D> using type = consume_Microsoft_UI_Composition_SystemBackdrops_IDesktopAcrylicControllerStatics<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Composition_SystemBackdrops_IMicaController
    {
        [[nodiscard]] auto FallbackColor() const;
        auto FallbackColor(winrt::Windows::UI::Color const& value) const;
        [[nodiscard]] auto LuminosityOpacity() const;
        auto LuminosityOpacity(float value) const;
        [[nodiscard]] auto TintColor() const;
        auto TintColor(winrt::Windows::UI::Color const& value) const;
        [[nodiscard]] auto TintOpacity() const;
        auto TintOpacity(float value) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaController>
    {
        template <typename D> using type = consume_Microsoft_UI_Composition_SystemBackdrops_IMicaController<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Composition_SystemBackdrops_IMicaController2
    {
        [[nodiscard]] auto Kind() const;
        auto Kind(winrt::Microsoft::UI::Composition::SystemBackdrops::MicaKind const& value) const;
        auto ResetProperties() const;
    };
    template <> struct consume<winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaController2>
    {
        template <typename D> using type = consume_Microsoft_UI_Composition_SystemBackdrops_IMicaController2<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Composition_SystemBackdrops_IMicaControllerStatics
    {
        auto IsSupported() const;
    };
    template <> struct consume<winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaControllerStatics>
    {
        template <typename D> using type = consume_Microsoft_UI_Composition_SystemBackdrops_IMicaControllerStatics<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Composition_SystemBackdrops_ISystemBackdropConfiguration
    {
        [[nodiscard]] auto HighContrastBackgroundColor() const;
        auto HighContrastBackgroundColor(winrt::Windows::Foundation::IReference<winrt::Windows::UI::Color> const& value) const;
        [[nodiscard]] auto IsHighContrast() const;
        auto IsHighContrast(bool value) const;
        [[nodiscard]] auto IsInputActive() const;
        auto IsInputActive(bool value) const;
        [[nodiscard]] auto Theme() const;
        auto Theme(winrt::Microsoft::UI::Composition::SystemBackdrops::SystemBackdropTheme const& value) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropConfiguration>
    {
        template <typename D> using type = consume_Microsoft_UI_Composition_SystemBackdrops_ISystemBackdropConfiguration<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Composition_SystemBackdrops_ISystemBackdropController
    {
        auto SetTarget(winrt::Microsoft::UI::WindowId const& windowId, winrt::Windows::UI::Composition::CompositionTarget const& desktopWindowTarget) const;
        auto SetTarget(winrt::Windows::UI::Core::CoreWindow const& coreWindow, winrt::Windows::UI::Composition::CompositionTarget const& compositionTarget) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropController>
    {
        template <typename D> using type = consume_Microsoft_UI_Composition_SystemBackdrops_ISystemBackdropController<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Composition_SystemBackdrops_ISystemBackdropControllerWithTargets
    {
        [[nodiscard]] auto State() const;
        auto AddSystemBackdropTarget(winrt::Microsoft::UI::Composition::ICompositionSupportsSystemBackdrop const& systemBackdropTarget) const;
        auto RemoveAllSystemBackdropTargets() const;
        auto RemoveSystemBackdropTarget(winrt::Microsoft::UI::Composition::ICompositionSupportsSystemBackdrop const& systemBackdropTarget) const;
        auto SetSystemBackdropConfiguration(winrt::Microsoft::UI::Composition::SystemBackdrops::SystemBackdropConfiguration const& configuration) const;
        auto StateChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropControllerWithTargets, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using StateChanged_revoker = impl::event_revoker<winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropControllerWithTargets, &impl::abi_t<winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropControllerWithTargets>::remove_StateChanged>;
        [[nodiscard]] auto StateChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropControllerWithTargets, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto StateChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropControllerWithTargets>
    {
        template <typename D> using type = consume_Microsoft_UI_Composition_SystemBackdrops_ISystemBackdropControllerWithTargets<D>;
    };
}
#endif
