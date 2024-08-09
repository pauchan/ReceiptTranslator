// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220531.1

#pragma once
#ifndef WINRT_Microsoft_Windows_AppNotifications_0_H
#define WINRT_Microsoft_Windows_AppNotifications_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Microsoft::Windows::AppNotifications
{
    enum class AppNotificationPriority : int32_t
    {
        Default = 0,
        High = 1,
    };
    enum class AppNotificationProgressResult : int32_t
    {
        Succeeded = 0,
        AppNotificationNotFound = 1,
        Unsupported = 2,
    };
    enum class AppNotificationSetting : int32_t
    {
        Enabled = 0,
        DisabledForApplication = 1,
        DisabledForUser = 2,
        DisabledByGroupPolicy = 3,
        DisabledByManifest = 4,
        Unsupported = 5,
    };
    struct IAppNotification;
    struct IAppNotificationActivatedEventArgs;
    struct IAppNotificationActivatedEventArgs2;
    struct IAppNotificationFactory;
    struct IAppNotificationManager;
    struct IAppNotificationManager2;
    struct IAppNotificationManagerStatics;
    struct IAppNotificationManagerStatics2;
    struct IAppNotificationProgressData;
    struct IAppNotificationProgressDataFactory;
    struct AppNotification;
    struct AppNotificationActivatedEventArgs;
    struct AppNotificationManager;
    struct AppNotificationProgressData;
}
namespace winrt::impl
{
    template <> struct category<winrt::Microsoft::Windows::AppNotifications::IAppNotification>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::AppNotifications::IAppNotificationActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::AppNotifications::IAppNotificationActivatedEventArgs2>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::AppNotifications::IAppNotificationFactory>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::AppNotifications::IAppNotificationManager>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::AppNotifications::IAppNotificationManager2>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::AppNotifications::IAppNotificationManagerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::AppNotifications::IAppNotificationManagerStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::AppNotifications::IAppNotificationProgressData>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::AppNotifications::IAppNotificationProgressDataFactory>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::AppNotifications::AppNotification>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Windows::AppNotifications::AppNotificationActivatedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Windows::AppNotifications::AppNotificationManager>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Windows::AppNotifications::AppNotificationProgressData>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Windows::AppNotifications::AppNotificationPriority>{ using type = enum_category; };
    template <> struct category<winrt::Microsoft::Windows::AppNotifications::AppNotificationProgressResult>{ using type = enum_category; };
    template <> struct category<winrt::Microsoft::Windows::AppNotifications::AppNotificationSetting>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppNotifications::AppNotification> = L"Microsoft.Windows.AppNotifications.AppNotification";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppNotifications::AppNotificationActivatedEventArgs> = L"Microsoft.Windows.AppNotifications.AppNotificationActivatedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppNotifications::AppNotificationManager> = L"Microsoft.Windows.AppNotifications.AppNotificationManager";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppNotifications::AppNotificationProgressData> = L"Microsoft.Windows.AppNotifications.AppNotificationProgressData";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppNotifications::AppNotificationPriority> = L"Microsoft.Windows.AppNotifications.AppNotificationPriority";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppNotifications::AppNotificationProgressResult> = L"Microsoft.Windows.AppNotifications.AppNotificationProgressResult";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppNotifications::AppNotificationSetting> = L"Microsoft.Windows.AppNotifications.AppNotificationSetting";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppNotifications::IAppNotification> = L"Microsoft.Windows.AppNotifications.IAppNotification";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppNotifications::IAppNotificationActivatedEventArgs> = L"Microsoft.Windows.AppNotifications.IAppNotificationActivatedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppNotifications::IAppNotificationActivatedEventArgs2> = L"Microsoft.Windows.AppNotifications.IAppNotificationActivatedEventArgs2";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppNotifications::IAppNotificationFactory> = L"Microsoft.Windows.AppNotifications.IAppNotificationFactory";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppNotifications::IAppNotificationManager> = L"Microsoft.Windows.AppNotifications.IAppNotificationManager";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppNotifications::IAppNotificationManager2> = L"Microsoft.Windows.AppNotifications.IAppNotificationManager2";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppNotifications::IAppNotificationManagerStatics> = L"Microsoft.Windows.AppNotifications.IAppNotificationManagerStatics";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppNotifications::IAppNotificationManagerStatics2> = L"Microsoft.Windows.AppNotifications.IAppNotificationManagerStatics2";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppNotifications::IAppNotificationProgressData> = L"Microsoft.Windows.AppNotifications.IAppNotificationProgressData";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppNotifications::IAppNotificationProgressDataFactory> = L"Microsoft.Windows.AppNotifications.IAppNotificationProgressDataFactory";
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::AppNotifications::IAppNotification>{ 0x373A6917,0x4116,0x5657,{ 0x93,0x6A,0x15,0xF9,0x9A,0xFD,0xD6,0x67 } }; // 373A6917-4116-5657-936A-15F99AFDD667
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::AppNotifications::IAppNotificationActivatedEventArgs>{ 0x7A8AFAF9,0x31CB,0x51D5,{ 0x82,0xBE,0xDB,0x6B,0xD5,0x87,0x8B,0x77 } }; // 7A8AFAF9-31CB-51D5-82BE-DB6BD5878B77
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::AppNotifications::IAppNotificationActivatedEventArgs2>{ 0x52C06B9B,0x2C50,0x5037,{ 0x94,0x16,0xA3,0xBE,0x47,0xB9,0xD5,0xBD } }; // 52C06B9B-2C50-5037-9416-A3BE47B9D5BD
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::AppNotifications::IAppNotificationFactory>{ 0x9FFEE485,0x184A,0x5C65,{ 0x87,0xA9,0xC1,0xD9,0x44,0x69,0xDB,0xE7 } }; // 9FFEE485-184A-5C65-87A9-C1D94469DBE7
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::AppNotifications::IAppNotificationManager>{ 0x55129688,0xB4BD,0x550B,{ 0xAE,0x6B,0xC2,0x40,0x61,0x95,0x4D,0x91 } }; // 55129688-B4BD-550B-AE6B-C24061954D91
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::AppNotifications::IAppNotificationManager2>{ 0x38BA268D,0xE0C7,0x522E,{ 0xA7,0x9D,0x8A,0x29,0xDC,0xDD,0x71,0x35 } }; // 38BA268D-E0C7-522E-A79D-8A29DCDD7135
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::AppNotifications::IAppNotificationManagerStatics>{ 0x6CFC0D8D,0x84A3,0x5592,{ 0xB4,0xC6,0xE3,0xE7,0xE7,0xC6,0x80,0xE4 } }; // 6CFC0D8D-84A3-5592-B4C6-E3E7E7C680E4
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::AppNotifications::IAppNotificationManagerStatics2>{ 0x6EB42A35,0xE82F,0x5732,{ 0x98,0xF1,0x12,0x97,0x05,0x60,0x2F,0x2E } }; // 6EB42A35-E82F-5732-98F1-129705602F2E
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::AppNotifications::IAppNotificationProgressData>{ 0x4DEBFAC0,0x809D,0x55CB,{ 0xB8,0x79,0x92,0x48,0x21,0x87,0x6B,0x97 } }; // 4DEBFAC0-809D-55CB-B879-924821876B97
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::AppNotifications::IAppNotificationProgressDataFactory>{ 0xC08E4A0F,0x3A75,0x55D6,{ 0x8C,0x3E,0x14,0xF0,0x3A,0xE4,0x60,0x46 } }; // C08E4A0F-3A75-55D6-8C3E-14F03AE46046
    template <> struct default_interface<winrt::Microsoft::Windows::AppNotifications::AppNotification>{ using type = winrt::Microsoft::Windows::AppNotifications::IAppNotification; };
    template <> struct default_interface<winrt::Microsoft::Windows::AppNotifications::AppNotificationActivatedEventArgs>{ using type = winrt::Microsoft::Windows::AppNotifications::IAppNotificationActivatedEventArgs; };
    template <> struct default_interface<winrt::Microsoft::Windows::AppNotifications::AppNotificationManager>{ using type = winrt::Microsoft::Windows::AppNotifications::IAppNotificationManager; };
    template <> struct default_interface<winrt::Microsoft::Windows::AppNotifications::AppNotificationProgressData>{ using type = winrt::Microsoft::Windows::AppNotifications::IAppNotificationProgressData; };
    template <> struct abi<winrt::Microsoft::Windows::AppNotifications::IAppNotification>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Tag(void**) noexcept = 0;
            virtual int32_t __stdcall put_Tag(void*) noexcept = 0;
            virtual int32_t __stdcall get_Group(void**) noexcept = 0;
            virtual int32_t __stdcall put_Group(void*) noexcept = 0;
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Payload(void**) noexcept = 0;
            virtual int32_t __stdcall get_Progress(void**) noexcept = 0;
            virtual int32_t __stdcall put_Progress(void*) noexcept = 0;
            virtual int32_t __stdcall get_Expiration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Expiration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_ExpiresOnReboot(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ExpiresOnReboot(bool) noexcept = 0;
            virtual int32_t __stdcall get_Priority(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Priority(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SuppressDisplay(bool*) noexcept = 0;
            virtual int32_t __stdcall put_SuppressDisplay(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Windows::AppNotifications::IAppNotificationActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Argument(void**) noexcept = 0;
            virtual int32_t __stdcall get_UserInput(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Windows::AppNotifications::IAppNotificationActivatedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Arguments(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Windows::AppNotifications::IAppNotificationFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Windows::AppNotifications::IAppNotificationManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Register() noexcept = 0;
            virtual int32_t __stdcall Unregister() noexcept = 0;
            virtual int32_t __stdcall UnregisterAll() noexcept = 0;
            virtual int32_t __stdcall add_NotificationInvoked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_NotificationInvoked(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Show(void*) noexcept = 0;
            virtual int32_t __stdcall UpdateAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall UpdateAsync2(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_Setting(int32_t*) noexcept = 0;
            virtual int32_t __stdcall RemoveByIdAsync(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RemoveByTagAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RemoveByTagAndGroupAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RemoveByGroupAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RemoveAllAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetAllAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Windows::AppNotifications::IAppNotificationManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Register(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Windows::AppNotifications::IAppNotificationManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Default(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Windows::AppNotifications::IAppNotificationManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Windows::AppNotifications::IAppNotificationProgressData>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SequenceNumber(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SequenceNumber(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Value(double*) noexcept = 0;
            virtual int32_t __stdcall put_Value(double) noexcept = 0;
            virtual int32_t __stdcall get_ValueStringOverride(void**) noexcept = 0;
            virtual int32_t __stdcall put_ValueStringOverride(void*) noexcept = 0;
            virtual int32_t __stdcall get_Status(void**) noexcept = 0;
            virtual int32_t __stdcall put_Status(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Windows::AppNotifications::IAppNotificationProgressDataFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(uint32_t, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Microsoft_Windows_AppNotifications_IAppNotification
    {
        [[nodiscard]] auto Tag() const;
        auto Tag(param::hstring const& value) const;
        [[nodiscard]] auto Group() const;
        auto Group(param::hstring const& value) const;
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Payload() const;
        [[nodiscard]] auto Progress() const;
        auto Progress(winrt::Microsoft::Windows::AppNotifications::AppNotificationProgressData const& value) const;
        [[nodiscard]] auto Expiration() const;
        auto Expiration(winrt::Windows::Foundation::DateTime const& value) const;
        [[nodiscard]] auto ExpiresOnReboot() const;
        auto ExpiresOnReboot(bool value) const;
        [[nodiscard]] auto Priority() const;
        auto Priority(winrt::Microsoft::Windows::AppNotifications::AppNotificationPriority const& value) const;
        [[nodiscard]] auto SuppressDisplay() const;
        auto SuppressDisplay(bool value) const;
    };
    template <> struct consume<winrt::Microsoft::Windows::AppNotifications::IAppNotification>
    {
        template <typename D> using type = consume_Microsoft_Windows_AppNotifications_IAppNotification<D>;
    };
    template <typename D>
    struct consume_Microsoft_Windows_AppNotifications_IAppNotificationActivatedEventArgs
    {
        [[nodiscard]] auto Argument() const;
        [[nodiscard]] auto UserInput() const;
    };
    template <> struct consume<winrt::Microsoft::Windows::AppNotifications::IAppNotificationActivatedEventArgs>
    {
        template <typename D> using type = consume_Microsoft_Windows_AppNotifications_IAppNotificationActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Microsoft_Windows_AppNotifications_IAppNotificationActivatedEventArgs2
    {
        [[nodiscard]] auto Arguments() const;
    };
    template <> struct consume<winrt::Microsoft::Windows::AppNotifications::IAppNotificationActivatedEventArgs2>
    {
        template <typename D> using type = consume_Microsoft_Windows_AppNotifications_IAppNotificationActivatedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Microsoft_Windows_AppNotifications_IAppNotificationFactory
    {
        auto CreateInstance(param::hstring const& payload) const;
    };
    template <> struct consume<winrt::Microsoft::Windows::AppNotifications::IAppNotificationFactory>
    {
        template <typename D> using type = consume_Microsoft_Windows_AppNotifications_IAppNotificationFactory<D>;
    };
    template <typename D>
    struct consume_Microsoft_Windows_AppNotifications_IAppNotificationManager
    {
        auto Register() const;
        auto Unregister() const;
        auto UnregisterAll() const;
        auto NotificationInvoked(winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::Windows::AppNotifications::AppNotificationManager, winrt::Microsoft::Windows::AppNotifications::AppNotificationActivatedEventArgs> const& handler) const;
        using NotificationInvoked_revoker = impl::event_revoker<winrt::Microsoft::Windows::AppNotifications::IAppNotificationManager, &impl::abi_t<winrt::Microsoft::Windows::AppNotifications::IAppNotificationManager>::remove_NotificationInvoked>;
        [[nodiscard]] auto NotificationInvoked(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::Windows::AppNotifications::AppNotificationManager, winrt::Microsoft::Windows::AppNotifications::AppNotificationActivatedEventArgs> const& handler) const;
        auto NotificationInvoked(winrt::event_token const& token) const noexcept;
        auto Show(winrt::Microsoft::Windows::AppNotifications::AppNotification const& notification) const;
        auto UpdateAsync(winrt::Microsoft::Windows::AppNotifications::AppNotificationProgressData const& data, param::hstring const& tag, param::hstring const& group) const;
        auto UpdateAsync(winrt::Microsoft::Windows::AppNotifications::AppNotificationProgressData const& data, param::hstring const& tag) const;
        [[nodiscard]] auto Setting() const;
        auto RemoveByIdAsync(uint32_t notificationId) const;
        auto RemoveByTagAsync(param::hstring const& tag) const;
        auto RemoveByTagAndGroupAsync(param::hstring const& tag, param::hstring const& group) const;
        auto RemoveByGroupAsync(param::hstring const& group) const;
        auto RemoveAllAsync() const;
        auto GetAllAsync() const;
    };
    template <> struct consume<winrt::Microsoft::Windows::AppNotifications::IAppNotificationManager>
    {
        template <typename D> using type = consume_Microsoft_Windows_AppNotifications_IAppNotificationManager<D>;
    };
    template <typename D>
    struct consume_Microsoft_Windows_AppNotifications_IAppNotificationManager2
    {
        auto Register(param::hstring const& displayName, winrt::Windows::Foundation::Uri const& iconUri) const;
    };
    template <> struct consume<winrt::Microsoft::Windows::AppNotifications::IAppNotificationManager2>
    {
        template <typename D> using type = consume_Microsoft_Windows_AppNotifications_IAppNotificationManager2<D>;
    };
    template <typename D>
    struct consume_Microsoft_Windows_AppNotifications_IAppNotificationManagerStatics
    {
        [[nodiscard]] auto Default() const;
    };
    template <> struct consume<winrt::Microsoft::Windows::AppNotifications::IAppNotificationManagerStatics>
    {
        template <typename D> using type = consume_Microsoft_Windows_AppNotifications_IAppNotificationManagerStatics<D>;
    };
    template <typename D>
    struct consume_Microsoft_Windows_AppNotifications_IAppNotificationManagerStatics2
    {
        auto IsSupported() const;
    };
    template <> struct consume<winrt::Microsoft::Windows::AppNotifications::IAppNotificationManagerStatics2>
    {
        template <typename D> using type = consume_Microsoft_Windows_AppNotifications_IAppNotificationManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Microsoft_Windows_AppNotifications_IAppNotificationProgressData
    {
        [[nodiscard]] auto SequenceNumber() const;
        auto SequenceNumber(uint32_t value) const;
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Value() const;
        auto Value(double value) const;
        [[nodiscard]] auto ValueStringOverride() const;
        auto ValueStringOverride(param::hstring const& value) const;
        [[nodiscard]] auto Status() const;
        auto Status(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Microsoft::Windows::AppNotifications::IAppNotificationProgressData>
    {
        template <typename D> using type = consume_Microsoft_Windows_AppNotifications_IAppNotificationProgressData<D>;
    };
    template <typename D>
    struct consume_Microsoft_Windows_AppNotifications_IAppNotificationProgressDataFactory
    {
        auto CreateInstance(uint32_t sequenceNumber) const;
    };
    template <> struct consume<winrt::Microsoft::Windows::AppNotifications::IAppNotificationProgressDataFactory>
    {
        template <typename D> using type = consume_Microsoft_Windows_AppNotifications_IAppNotificationProgressDataFactory<D>;
    };
}
#endif
