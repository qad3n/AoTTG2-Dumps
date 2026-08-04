// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameUiActions
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using ApplicationManagers.Changelog;
using ApplicationManagers.Credits;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Localization;
using Il2CppDummyDll;
using Settings;
using SimpleJSONFixed;
using TMPro;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000133")]
public sealed class AottgGameUiActions : GisketchController
{
	[Token(Token = "0x40006F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly IGisketchLocalizer AccountLocalizer;

	[Token(Token = "0x40006F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool _authMethodsUnavailable;

	[Token(Token = "0x40006F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x31")]
	private bool _lastAuthLoading;

	[Token(Token = "0x40006F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x32")]
	private bool _lastIdentityLoading;

	[Token(Token = "0x40006F9")]
	private const string LoginToastKey = "account.login";

	[Token(Token = "0x40006FA")]
	private const string RegisterToastKey = "account.register.email";

	[Token(Token = "0x40006FB")]
	private const string ForgotPasswordToastKey = "account.forgotPassword";

	[Token(Token = "0x40006FC")]
	private const string LogoutToastKey = "account.logout";

	[Token(Token = "0x40006FD")]
	private const string RefreshAccountToastKey = "account.refresh";

	[Token(Token = "0x40006FE")]
	private const string GoOfflineToastKey = "account.goOffline";

	[Token(Token = "0x40006FF")]
	private const string GoOnlineToastKey = "account.goOnline";

	[Token(Token = "0x4000700")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x33")]
	private bool _checkedChangelogAutoOpen;

	[Token(Token = "0x4000701")]
	private const string NetworkToastKey = "network.error";

	[Token(Token = "0x4000702")]
	private const string ProfileSaveToastKey = "profile.save";

	[Token(Token = "0x4000703")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private bool _profileIdentityLoading;

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x4366E80", Offset = "0x4366E80", VA = "0x4366E80")]
	private void RegisterAccountActions()
	{
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x4367400", Offset = "0x4367400", VA = "0x4367400")]
	private void AddAccountListeners()
	{
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x4367500", Offset = "0x4367500", VA = "0x4367500")]
	private void RemoveAccountListeners()
	{
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x4367600", Offset = "0x4367600", VA = "0x4367600")]
	private void StartAccountActions()
	{
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x4367E10", Offset = "0x4367E10", VA = "0x4367E10")]
	private void LateUpdateAccountActions()
	{
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x4369400", Offset = "0x4369400", VA = "0x4369400")]
	private void OpenLoginDialog()
	{
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x4369640", Offset = "0x4369640", VA = "0x4369640")]
	private void RefreshAuthMethodsForDialog()
	{
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x4369440", Offset = "0x4369440", VA = "0x4369440")]
	private void ShowAccountDialog(string dialogId, bool requireEmailPassword)
	{
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x43699D0", Offset = "0x43699D0", VA = "0x43699D0")]
	private void LoginWithEmail(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x436A1E0", Offset = "0x436A1E0", VA = "0x436A1E0")]
	private void LoginWithOAuth(string provider)
	{
	}

	[Token(Token = "0x6000674")]
	[Address(RVA = "0x43676A0", Offset = "0x43676A0", VA = "0x43676A0")]
	private void RefreshAccountState()
	{
	}

	[Token(Token = "0x6000675")]
	[Address(RVA = "0x4368040", Offset = "0x4368040", VA = "0x4368040")]
	private static bool IsAccountAuthLoading()
	{
		return default(bool);
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x4368170", Offset = "0x4368170", VA = "0x4368170")]
	private bool IsAccountIdentityLoading()
	{
		return default(bool);
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x436A7B0", Offset = "0x436A7B0", VA = "0x436A7B0")]
	private static string InGameDisplayName()
	{
		return null;
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x436A7C0", Offset = "0x436A7C0", VA = "0x436A7C0")]
	private static string AuthDisplayName()
	{
		return null;
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x436A8D0", Offset = "0x436A8D0", VA = "0x436A8D0")]
	private void AttachTruncation(string id)
	{
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x4369F20", Offset = "0x4369F20", VA = "0x4369F20")]
	private static bool LooksLikeEmail(string email)
	{
		return default(bool);
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x4369E40", Offset = "0x4369E40", VA = "0x4369E40")]
	private static string FindInput(GisketchActionContext context, string id)
	{
		return null;
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x436ABB0", Offset = "0x436ABB0", VA = "0x436ABB0")]
	private static void ClearInput(GisketchActionContext context, string id)
	{
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x436AA80", Offset = "0x436AA80", VA = "0x436AA80")]
	private static TMP_InputField Input(GisketchActionContext context, string id)
	{
		return null;
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x4369920", Offset = "0x4369920", VA = "0x4369920")]
	private void CloseTopOverlay()
	{
	}

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x43697E0", Offset = "0x43697E0", VA = "0x43697E0")]
	private void AccountToast(AottgToastVariant variant, string icon, string titleKey, string titleFallback, string content, [Optional] string updateKey)
	{
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x436ACA0", Offset = "0x436ACA0", VA = "0x436ACA0")]
	private static string ErrorText(string error)
	{
		return null;
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x43696D0", Offset = "0x43696D0", VA = "0x43696D0")]
	private static string AccountText(string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x4367000", Offset = "0x4367000", VA = "0x4367000")]
	private void RegisterAccountFormActions()
	{
	}

	[Token(Token = "0x6000683")]
	[Address(RVA = "0x436B320", Offset = "0x436B320", VA = "0x436B320")]
	private static void SetKeepSignedIn(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x436A130", Offset = "0x436A130", VA = "0x436A130")]
	private static void SetKeepSignedInFromCheckbox(GisketchActionContext context, string id)
	{
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x436B3C0", Offset = "0x436B3C0", VA = "0x436B3C0")]
	private static bool CheckboxValue(GisketchActionContext context, string id, bool fallback)
	{
		return default(bool);
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x436B4F0", Offset = "0x436B4F0", VA = "0x436B4F0")]
	private void RegisterWithEmail(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x436BC60", Offset = "0x436BC60", VA = "0x436BC60")]
	private void ForgotPassword(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x436BF80", Offset = "0x436BF80", VA = "0x436BF80")]
	private void Logout(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x436C120", Offset = "0x436C120", VA = "0x436C120")]
	private void RefreshAccount(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x436BB90", Offset = "0x436BB90", VA = "0x436BB90")]
	private static bool IsValidDisplayNameLength(string displayName)
	{
		return default(bool);
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x436C6D0", Offset = "0x436C6D0", VA = "0x436C6D0")]
	private static bool IsCjkCharacter(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x436C710", Offset = "0x436C710", VA = "0x436C710")]
	private void GoOffline(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x436C970", Offset = "0x436C970", VA = "0x436C970")]
	private void GoOnline(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x436CC00", Offset = "0x436CC00", VA = "0x436CC00")]
	private static void OpenAccountDetails()
	{
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x436A460", Offset = "0x436A460", VA = "0x436A460")]
	private void ResetAccountCtas()
	{
	}

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x436CD80", Offset = "0x436CD80", VA = "0x436CD80")]
	private void SetAccountCta(string key, string text)
	{
	}

	[Token(Token = "0x6000691")]
	[Address(RVA = "0x436A070", Offset = "0x436A070", VA = "0x436A070")]
	private bool TryBeginAccountOperation(string ctaKey, string textKey, string fallback)
	{
		return default(bool);
	}

	[Token(Token = "0x6000692")]
	[Address(RVA = "0x436CDE0", Offset = "0x436CDE0", VA = "0x436CDE0")]
	private bool TryBeginAccountOperation(string textKey, string fallback)
	{
		return default(bool);
	}

	[Token(Token = "0x6000693")]
	[Address(RVA = "0x436A3C0", Offset = "0x436A3C0", VA = "0x436A3C0")]
	private bool TryBeginAccountOperation(string message)
	{
		return default(bool);
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x436C8D0", Offset = "0x436C8D0", VA = "0x436C8D0")]
	private void EndAccountOperation()
	{
	}

	[Token(Token = "0x6000695")]
	[Address(RVA = "0x436CE40", Offset = "0x436CE40", VA = "0x436CE40")]
	private void StartChangelogActions()
	{
	}

	[Token(Token = "0x6000696")]
	[Address(RVA = "0x436CEF0", Offset = "0x436CEF0", VA = "0x436CEF0")]
	private void ApplyAutoOpenLatestVersionResult(AottgChangelogResult<LatestChangelogVersionResponse> result)
	{
	}

	[Token(Token = "0x6000697")]
	[Address(RVA = "0x436D120", Offset = "0x436D120", VA = "0x436D120")]
	private void RegisterChangelogActions()
	{
	}

	[Token(Token = "0x6000698")]
	[Address(RVA = "0x436D390", Offset = "0x436D390", VA = "0x436D390")]
	private void OpenHelpUpdatesDialog()
	{
	}

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x436D3F0", Offset = "0x436D3F0", VA = "0x436D3F0")]
	private void RefreshLatestVersion(bool forceRefresh)
	{
	}

	[Token(Token = "0x600069A")]
	[Address(RVA = "0x436D490", Offset = "0x436D490", VA = "0x436D490")]
	private void ApplyLatestVersionResult(AottgChangelogResult<LatestChangelogVersionResponse> result)
	{
	}

	[Token(Token = "0x600069B")]
	[Address(RVA = "0x436DAC0", Offset = "0x436DAC0", VA = "0x436DAC0")]
	private void ApplyLatestPreviewResult(AottgChangelogResult<ChangelogEntryResponse> result)
	{
	}

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x436D800", Offset = "0x436D800", VA = "0x436D800")]
	private void ApplyLatestText(LatestChangelogVersionResponse latest, bool loading, bool failed, bool empty)
	{
	}

	[Token(Token = "0x600069D")]
	[Address(RVA = "0x436DB90", Offset = "0x436DB90", VA = "0x436DB90")]
	private static bool IsNewerThanGame(LatestChangelogVersionResponse latest)
	{
		return default(bool);
	}

	[Token(Token = "0x600069E")]
	[Address(RVA = "0x436CFB0", Offset = "0x436CFB0", VA = "0x436CFB0")]
	private void OpenLatestChangelog(bool newUpdateTitle)
	{
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x436E000", Offset = "0x436E000", VA = "0x436E000")]
	private void ApplyLatestHistoryResult(AottgChangelogResult<PublicChangelogListResponse> result)
	{
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x436DF70", Offset = "0x436DF70", VA = "0x436DF70")]
	private void FetchLatestEntry()
	{
	}

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x436E0A0", Offset = "0x436E0A0", VA = "0x436E0A0")]
	private void ApplyLatestEntryResult(AottgChangelogResult<ChangelogEntryResponse> result)
	{
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x436E1E0", Offset = "0x436E1E0", VA = "0x436E1E0")]
	private void RetryReader()
	{
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x436E4E0", Offset = "0x436E4E0", VA = "0x436E4E0")]
	private void OpenPreviousChangelog()
	{
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x436E560", Offset = "0x436E560", VA = "0x436E560")]
	private void OpenNextChangelog()
	{
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x436E780", Offset = "0x436E780", VA = "0x436E780")]
	private void ApplyPreviousPageResult(AottgChangelogResult<PublicChangelogListResponse> result)
	{
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x436E390", Offset = "0x436E390", VA = "0x436E390")]
	private void FetchEntry(string id)
	{
	}

	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x436E0B0", Offset = "0x436E0B0", VA = "0x436E0B0")]
	private void ApplyEntryResult(AottgChangelogResult<ChangelogEntryResponse> result, AottgChangelogReaderMode mode)
	{
	}

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x436DBE0", Offset = "0x436DBE0", VA = "0x436DBE0")]
	private string CurrentReaderTitle()
	{
		return null;
	}

	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x436ED20", Offset = "0x436ED20", VA = "0x436ED20")]
	private string ReaderTitle(ChangelogEntryResponse entry, AottgChangelogReaderMode mode)
	{
		return null;
	}

	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x436DD10", Offset = "0x436DD10", VA = "0x436DD10")]
	private void ApplyReaderLoading(string title)
	{
	}

	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x436E930", Offset = "0x436E930", VA = "0x436E930")]
	private void ApplyReaderState(string title, bool refreshing, bool failed, bool empty, string error)
	{
	}

	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x436EE40", Offset = "0x436EE40", VA = "0x436EE40")]
	private static string ReaderStatus(bool refreshing)
	{
		return null;
	}

	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x436DF10", Offset = "0x436DF10", VA = "0x436DF10")]
	private void ShowReader()
	{
	}

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x436ECB0", Offset = "0x436ECB0", VA = "0x436ECB0")]
	private void RefreshReader()
	{
	}

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x436EE90", Offset = "0x436EE90", VA = "0x436EE90")]
	private static int IndexFromElement(string elementId)
	{
		return default(int);
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x436EF10", Offset = "0x436EF10", VA = "0x436EF10")]
	private static void OpenHelpLink(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x436F0E0", Offset = "0x436F0E0", VA = "0x436F0E0")]
	private void RegisterCreditsActions()
	{
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x436F170", Offset = "0x436F170", VA = "0x436F170")]
	private void OpenCreditsScreen()
	{
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x436F230", Offset = "0x436F230", VA = "0x436F230")]
	private void RefreshCredits(bool forceRefresh)
	{
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x436F2A0", Offset = "0x436F2A0", VA = "0x436F2A0")]
	private void ApplyCreditsResult(AottgCreditsResult result)
	{
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x436F430", Offset = "0x436F430", VA = "0x436F430")]
	private void ApplyCreditsState(AottgCreditsResult result, bool hasCredits, bool loading, bool failedNoCache)
	{
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x436F700", Offset = "0x436F700", VA = "0x436F700")]
	private static string CreditsErrorText(string error)
	{
		return null;
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x436F7C0", Offset = "0x436F7C0", VA = "0x436F7C0", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x4370230", Offset = "0x4370230", VA = "0x4370230")]
	private void Start()
	{
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x4370560", Offset = "0x4370560", VA = "0x4370560")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x4370700", Offset = "0x4370700", VA = "0x4370700")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x436F860", Offset = "0x436F860", VA = "0x436F860")]
	private void RegisterMainActions()
	{
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x436FC70", Offset = "0x436FC70", VA = "0x436FC70")]
	private void RegisterSettingsActions()
	{
	}

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x43707E0", Offset = "0x43707E0", VA = "0x43707E0")]
	private void RegisterLegacyMain(string actionId, string legacyButtonName)
	{
	}

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x43708B0", Offset = "0x43708B0", VA = "0x43708B0")]
	private static void SaveSettings()
	{
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x4370CF0", Offset = "0x4370CF0", VA = "0x4370CF0")]
	private static void LoadSettings()
	{
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x4370BE0", Offset = "0x4370BE0", VA = "0x4370BE0")]
	private static void ApplySettings()
	{
	}

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x4370DD0", Offset = "0x4370DD0", VA = "0x4370DD0")]
	private static void ResetSettingsToDefault()
	{
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x4370990", Offset = "0x4370990", VA = "0x4370990")]
	private static SaveableSettingsContainer[] SettingsContainers()
	{
		return null;
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x4370570", Offset = "0x4370570", VA = "0x4370570")]
	private void LateUpdateSearchPaletteShortcut()
	{
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x4370F10", Offset = "0x4370F10", VA = "0x4370F10")]
	private static bool IsSearchPaletteShortcutBlocked()
	{
		return default(bool);
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x43701C0", Offset = "0x43701C0", VA = "0x43701C0")]
	private void AddNetworkListeners()
	{
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x4370770", Offset = "0x4370770", VA = "0x4370770")]
	private void RemoveNetworkListeners()
	{
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x43711D0", Offset = "0x43711D0", VA = "0x43711D0")]
	private void ShowNetworkErrorToast(string error)
	{
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x436FFB0", Offset = "0x436FFB0", VA = "0x436FFB0")]
	private void RegisterProfileActions()
	{
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x4371440", Offset = "0x4371440", VA = "0x4371440")]
	private void SaveAvatar(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x43718F0", Offset = "0x43718F0", VA = "0x43718F0")]
	private void SaveBanner(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x43719A0", Offset = "0x43719A0", VA = "0x43719A0")]
	private void SaveDetails(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x4372480", Offset = "0x4372480", VA = "0x4372480")]
	private void ImportLocalBio(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x4372680", Offset = "0x4372680", VA = "0x4372680")]
	private void SaveCharacter(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x43714F0", Offset = "0x43714F0", VA = "0x43714F0")]
	private void SaveProfile(GisketchActionContext context, string displayName, string bio, string avatarKey, string bannerKey, Dictionary<string, string> socials, string savingMessage)
	{
	}

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x4373150", Offset = "0x4373150", VA = "0x4373150")]
	private static void SaveLocalProfile(string displayName, string bio, string avatarKey, string bannerKey, Dictionary<string, string> socials)
	{
	}

	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x4373380", Offset = "0x4373380", VA = "0x4373380")]
	private static void SaveLocalBio(string bio)
	{
	}

	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x4371D20", Offset = "0x4371D20", VA = "0x4371D20")]
	private static List<string> SocialLinks(GisketchActionContext context)
	{
		return null;
	}

	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x4372030", Offset = "0x4372030", VA = "0x4372030")]
	private static Dictionary<string, string> ToSocials(IEnumerable<string> links)
	{
		return null;
	}

	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x4372F40", Offset = "0x4372F40", VA = "0x4372F40")]
	private static string[] EffectColors(GisketchActionContext context, string prefix)
	{
		return null;
	}

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x4371F80", Offset = "0x4371F80", VA = "0x4371F80")]
	private void ProfileToast(AottgToastVariant variant, string icon, string title, string content, [Optional] string updateKey)
	{
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x43712A0", Offset = "0x43712A0", VA = "0x43712A0")]
	private void RegisterEmoteActions()
	{
	}

	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x4373420", Offset = "0x4373420", VA = "0x4373420")]
	private void OpenEmoteText(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x4373570", Offset = "0x4373570", VA = "0x4373570")]
	private void OpenEmoteSticker(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x4373660", Offset = "0x4373660", VA = "0x4373660")]
	private void SaveEmoteText(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x4373950", Offset = "0x4373950", VA = "0x4373950")]
	private void SaveEmoteSticker(GisketchActionContext context, string sticker)
	{
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x43737F0", Offset = "0x43737F0", VA = "0x43737F0")]
	private void SaveEmoteSettings()
	{
	}

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x4373510", Offset = "0x4373510", VA = "0x4373510")]
	private static int SlotIndex(GisketchActionContext context)
	{
		return default(int);
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x43702F0", Offset = "0x43702F0", VA = "0x43702F0")]
	private void StartProfileActions()
	{
	}

	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x4373DC0", Offset = "0x4373DC0", VA = "0x4373DC0")]
	private void OpenProfileScreen()
	{
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x43740F0", Offset = "0x43740F0", VA = "0x43740F0")]
	private void OnAccountLoggedIn()
	{
	}

	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x43741E0", Offset = "0x43741E0", VA = "0x43741E0")]
	private void OnAccountLoggedOut()
	{
	}

	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x436C450", Offset = "0x436C450", VA = "0x436C450")]
	private void RefreshRemoteProfileAndCharacter(bool rebuildProfileScreen, [Optional][DefaultParameterValue(false)] bool forceRefresh, [Optional] Action<bool, string> onComplete, bool showProfileErrorToast = true)
	{
	}

	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x43743C0", Offset = "0x43743C0", VA = "0x43743C0")]
	private void RefreshRemoteCharacterInfo(bool rebuildProfileScreen, [Optional][DefaultParameterValue(false)] bool forceRefresh, [Optional] Action<bool, string> onComplete, bool showProfileErrorToast = true)
	{
	}

	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x4374260", Offset = "0x4374260", VA = "0x4374260")]
	private static bool HasCachedRemoteIdentity()
	{
		return default(bool);
	}

	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x4373070", Offset = "0x4373070", VA = "0x4373070")]
	private void RebuildProfileScreen()
	{
	}

	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x4374600", Offset = "0x4374600", VA = "0x4374600")]
	private void RefreshCurrentScreenManifest()
	{
	}

	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x43681C0", Offset = "0x43681C0", VA = "0x43681C0")]
	private void RefreshProfileState()
	{
	}

	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x43746E0", Offset = "0x43746E0", VA = "0x43746E0")]
	private static string ConnectionStatus(bool linked, bool loading)
	{
		return null;
	}

	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x4374670", Offset = "0x4374670", VA = "0x4374670")]
	private static string PatreonConnectionStatus(bool supporter, bool loading)
	{
		return null;
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x4373A60", Offset = "0x4373A60", VA = "0x4373A60")]
	private void RefreshEmoteState()
	{
	}

	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x4374CF0", Offset = "0x4374CF0", VA = "0x4374CF0")]
	private static string StickerSprite(string value)
	{
		return null;
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x4374C70", Offset = "0x4374C70", VA = "0x4374C70")]
	private static string StickerLabel(string value)
	{
		return null;
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x4374750", Offset = "0x4374750", VA = "0x4374750")]
	private static string BadgeLabels(JSONNode badges)
	{
		return null;
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x4374D30", Offset = "0x4374D30", VA = "0x4374D30")]
	public AottgGameUiActions()
	{
	}
}
