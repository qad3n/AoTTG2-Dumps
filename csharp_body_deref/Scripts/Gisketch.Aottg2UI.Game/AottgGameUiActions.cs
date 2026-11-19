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
using Il2CppDummyDll;
using Settings;
using SimpleJSONFixed;
using TMPro;
using UI;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001B6")]
public sealed class AottgGameUiActions : GisketchController
{
	[Token(Token = "0x20001B7")]
	private enum CustomContentType
	{
		[Token(Token = "0x4000952")]
		Map,
		[Token(Token = "0x4000953")]
		Logic,
		[Token(Token = "0x4000954")]
		Addon
	}

	[Token(Token = "0x400093F")]
	private const string LoginToastKey = "account.login";

	[Token(Token = "0x4000940")]
	private const string RegisterToastKey = "account.register.email";

	[Token(Token = "0x4000941")]
	private const string ForgotPasswordToastKey = "account.forgotPassword";

	[Token(Token = "0x4000942")]
	private const string LogoutToastKey = "account.logout";

	[Token(Token = "0x4000943")]
	private const string RefreshAccountToastKey = "account.refresh";

	[Token(Token = "0x4000944")]
	private const string GoOfflineToastKey = "account.goOffline";

	[Token(Token = "0x4000945")]
	private const string GoOnlineToastKey = "account.goOnline";

	[Token(Token = "0x4000946")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool _authMethodsUnavailable;

	[Token(Token = "0x4000947")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x31")]
	private bool _lastAuthLoading;

	[Token(Token = "0x4000948")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x32")]
	private bool _lastIdentityLoading;

	[Token(Token = "0x4000949")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x33")]
	private bool _checkedChangelogAutoOpen;

	[Token(Token = "0x400094A")]
	private const string NetworkToastKey = "network.error";

	[Token(Token = "0x400094B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private bool _profileIdentityLoading;

	[Token(Token = "0x400094C")]
	private const string ProfileSaveToastKey = "profile.save";

	[Token(Token = "0x400094D")]
	private const string SettingsSaveToastKey = "settings.save";

	[Token(Token = "0x400094E")]
	private const string SettingsLoadToastKey = "settings.load";

	[Token(Token = "0x400094F")]
	private const string SettingsDefaultToastKey = "settings.default";

	[Token(Token = "0x4000950")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string _settingsLeaveTargetScreenId;

	[Token(Token = "0x60009B0")]
	[Address(RVA = "0x5D59760", Offset = "0x5D58760", VA = "0x5D59760")]
	private void RegisterAccountFormActions()
	{
	}

	[Token(Token = "0x60009B1")]
	[Address(RVA = "0x5D59B60", Offset = "0x5D58B60", VA = "0x5D59B60")]
	private static void SetKeepSignedIn(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60009B2")]
	[Address(RVA = "0x5D59C00", Offset = "0x5D58C00", VA = "0x5D59C00")]
	private static void SetKeepSignedInFromCheckbox(GisketchActionContext context, string id)
	{
	}

	[Token(Token = "0x60009B3")]
	[Address(RVA = "0x5D59C80", Offset = "0x5D58C80", VA = "0x5D59C80")]
	private static bool CheckboxValue(GisketchActionContext context, string id, bool fallback)
	{
		return default(bool);
	}

	[Token(Token = "0x60009B4")]
	[Address(RVA = "0x5D59DC0", Offset = "0x5D58DC0", VA = "0x5D59DC0")]
	private void RegisterWithEmail(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60009B5")]
	[Address(RVA = "0x5D5A950", Offset = "0x5D59950", VA = "0x5D5A950")]
	private void ForgotPassword(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x5D5AC80", Offset = "0x5D59C80", VA = "0x5D5AC80")]
	private void Logout(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x5D5ADE0", Offset = "0x5D59DE0", VA = "0x5D5ADE0")]
	private void RefreshAccount(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x5D5A7F0", Offset = "0x5D597F0", VA = "0x5D5A7F0")]
	private static bool IsValidDisplayNameLength(string displayName)
	{
		return default(bool);
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x5D5B980", Offset = "0x5D5A980", VA = "0x5D5B980")]
	private static bool IsCjkCharacter(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x60009BA")]
	[Address(RVA = "0x5D5B9C0", Offset = "0x5D5A9C0", VA = "0x5D5B9C0")]
	private void GoOffline(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60009BB")]
	[Address(RVA = "0x5D5BBD0", Offset = "0x5D5ABD0", VA = "0x5D5BBD0")]
	private void GoOnline(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60009BC")]
	[Address(RVA = "0x5D5BE00", Offset = "0x5D5AE00", VA = "0x5D5BE00")]
	private static void OpenAccountDetails()
	{
	}

	[Token(Token = "0x60009BD")]
	[Address(RVA = "0x5D5BF80", Offset = "0x5D5AF80", VA = "0x5D5BF80")]
	private void ResetAccountCtas()
	{
	}

	[Token(Token = "0x60009BE")]
	[Address(RVA = "0x5D5C240", Offset = "0x5D5B240", VA = "0x5D5C240")]
	private void SetAccountCta(string key, string text)
	{
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x5D5A890", Offset = "0x5D59890", VA = "0x5D5A890")]
	private bool TryBeginAccountOperation(string ctaKey, string textKey)
	{
		return default(bool);
	}

	[Token(Token = "0x60009C0")]
	[Address(RVA = "0x5D5C2A0", Offset = "0x5D5B2A0", VA = "0x5D5C2A0")]
	private bool TryBeginAccountOperation(string message)
	{
		return default(bool);
	}

	[Token(Token = "0x60009C1")]
	[Address(RVA = "0x5D5BB30", Offset = "0x5D5AB30", VA = "0x5D5BB30")]
	private void EndAccountOperation()
	{
	}

	[Token(Token = "0x60009C2")]
	[Address(RVA = "0x5D5C350", Offset = "0x5D5B350", VA = "0x5D5C350")]
	private void RegisterAccountActions()
	{
	}

	[Token(Token = "0x60009C3")]
	[Address(RVA = "0x5D5C4D0", Offset = "0x5D5B4D0", VA = "0x5D5C4D0")]
	private void AddAccountListeners()
	{
	}

	[Token(Token = "0x60009C4")]
	[Address(RVA = "0x5D5C5D0", Offset = "0x5D5B5D0", VA = "0x5D5C5D0")]
	private void RemoveAccountListeners()
	{
	}

	[Token(Token = "0x60009C5")]
	[Address(RVA = "0x5D5C6D0", Offset = "0x5D5B6D0", VA = "0x5D5C6D0")]
	private void StartAccountActions()
	{
	}

	[Token(Token = "0x60009C6")]
	[Address(RVA = "0x5D5C770", Offset = "0x5D5B770", VA = "0x5D5C770")]
	private void LateUpdateAccountActions()
	{
	}

	[Token(Token = "0x60009C7")]
	[Address(RVA = "0x5D5D6C0", Offset = "0x5D5C6C0", VA = "0x5D5D6C0")]
	private void OpenLoginDialog()
	{
	}

	[Token(Token = "0x60009C8")]
	[Address(RVA = "0x5D5D8D0", Offset = "0x5D5C8D0", VA = "0x5D5D8D0")]
	private void RefreshAuthMethodsForDialog()
	{
	}

	[Token(Token = "0x60009C9")]
	[Address(RVA = "0x5D5D700", Offset = "0x5D5C700", VA = "0x5D5D700")]
	private void ShowAccountDialog(string dialogId, bool requireEmailPassword)
	{
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x5D5DA10", Offset = "0x5D5CA10", VA = "0x5D5DA10")]
	private void LoginWithEmail(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x5D5DEC0", Offset = "0x5D5CEC0", VA = "0x5D5DEC0")]
	private void LoginWithOAuth(string provider)
	{
	}

	[Token(Token = "0x60009CC")]
	[Address(RVA = "0x5D5B0C0", Offset = "0x5D5A0C0", VA = "0x5D5B0C0")]
	public void RefreshAccountState()
	{
	}

	[Token(Token = "0x60009CD")]
	[Address(RVA = "0x5D5C8E0", Offset = "0x5D5B8E0", VA = "0x5D5C8E0")]
	private static bool IsAccountAuthLoading()
	{
		return default(bool);
	}

	[Token(Token = "0x60009CE")]
	[Address(RVA = "0x5D5C9E0", Offset = "0x5D5B9E0", VA = "0x5D5C9E0")]
	private bool IsAccountIdentityLoading()
	{
		return default(bool);
	}

	[Token(Token = "0x60009CF")]
	[Address(RVA = "0x5D5E070", Offset = "0x5D5D070", VA = "0x5D5E070")]
	private static string InGameDisplayName()
	{
		return null;
	}

	[Token(Token = "0x60009D0")]
	[Address(RVA = "0x5D5E080", Offset = "0x5D5D080", VA = "0x5D5E080")]
	private static string AuthDisplayName()
	{
		return null;
	}

	[Token(Token = "0x60009D1")]
	[Address(RVA = "0x5D5E170", Offset = "0x5D5D170", VA = "0x5D5E170")]
	private void AttachTruncation(string id)
	{
	}

	[Token(Token = "0x60009D2")]
	[Address(RVA = "0x5D5A5A0", Offset = "0x5D595A0", VA = "0x5D5A5A0")]
	private static bool LooksLikeEmail(string email)
	{
		return default(bool);
	}

	[Token(Token = "0x60009D3")]
	[Address(RVA = "0x5D5A4F0", Offset = "0x5D594F0", VA = "0x5D5A4F0")]
	private static string FindInput(GisketchActionContext context, string id)
	{
		return null;
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x5D5E450", Offset = "0x5D5D450", VA = "0x5D5E450")]
	private static void ClearInput(GisketchActionContext context, string id)
	{
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x5D5E330", Offset = "0x5D5D330", VA = "0x5D5E330")]
	private static TMP_InputField Input(GisketchActionContext context, string id)
	{
		return null;
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x5D5D960", Offset = "0x5D5C960", VA = "0x5D5D960")]
	private void CloseTopOverlay()
	{
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x5D5A6C0", Offset = "0x5D596C0", VA = "0x5D5A6C0")]
	private void AccountToast(AottgToastVariant variant, string icon, string titleKey, string content, [Optional] string updateKey)
	{
	}

	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x5D5E500", Offset = "0x5D5D500", VA = "0x5D5E500")]
	private static string ErrorText(string error)
	{
		return null;
	}

	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x5D5EA10", Offset = "0x5D5DA10", VA = "0x5D5EA10")]
	private void StartChangelogActions()
	{
	}

	[Token(Token = "0x60009DA")]
	[Address(RVA = "0x5D5EAC0", Offset = "0x5D5DAC0", VA = "0x5D5EAC0")]
	private void ApplyAutoOpenLatestVersionResult(AottgChangelogResult<LatestChangelogVersionResponse> result)
	{
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x5D5EE20", Offset = "0x5D5DE20", VA = "0x5D5EE20")]
	private void ApplyLatestEntryResult(AottgChangelogResult<ChangelogEntryResponse> result)
	{
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x5D5EF90", Offset = "0x5D5DF90", VA = "0x5D5EF90")]
	private void RetryReader()
	{
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x5D5F280", Offset = "0x5D5E280", VA = "0x5D5F280")]
	private void OpenPreviousChangelog()
	{
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x5D5F300", Offset = "0x5D5E300", VA = "0x5D5F300")]
	private void OpenNextChangelog()
	{
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x5D5F810", Offset = "0x5D5E810", VA = "0x5D5F810")]
	private void ApplyPreviousPageResult(AottgChangelogResult<PublicChangelogListResponse> result)
	{
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x5D5F100", Offset = "0x5D5E100", VA = "0x5D5F100")]
	private void FetchEntry(string id)
	{
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x5D5EE30", Offset = "0x5D5DE30", VA = "0x5D5EE30")]
	private void ApplyEntryResult(AottgChangelogResult<ChangelogEntryResponse> result, AottgChangelogReaderMode mode)
	{
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0x5D5F9D0", Offset = "0x5D5E9D0", VA = "0x5D5F9D0")]
	private string CurrentReaderTitle()
	{
		return null;
	}

	[Token(Token = "0x60009E3")]
	[Address(RVA = "0x5D5FED0", Offset = "0x5D5EED0", VA = "0x5D5FED0")]
	private string ReaderTitle(ChangelogEntryResponse entry, AottgChangelogReaderMode mode)
	{
		return null;
	}

	[Token(Token = "0x60009E4")]
	[Address(RVA = "0x5D5F560", Offset = "0x5D5E560", VA = "0x5D5F560")]
	private void ApplyReaderLoading(string title)
	{
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x5D5FAE0", Offset = "0x5D5EAE0", VA = "0x5D5FAE0")]
	private void ApplyReaderState(string title, bool refreshing, bool failed, bool empty, string error)
	{
	}

	[Token(Token = "0x60009E6")]
	[Address(RVA = "0x5D5FF70", Offset = "0x5D5EF70", VA = "0x5D5FF70")]
	private static string ReaderStatus(bool refreshing)
	{
		return null;
	}

	[Token(Token = "0x60009E7")]
	[Address(RVA = "0x5D5F7B0", Offset = "0x5D5E7B0", VA = "0x5D5F7B0")]
	private void ShowReader()
	{
	}

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x5D5FE60", Offset = "0x5D5EE60", VA = "0x5D5FE60")]
	private void RefreshReader()
	{
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x5D5FFF0", Offset = "0x5D5EFF0", VA = "0x5D5FFF0")]
	private static int IndexFromElement(string elementId)
	{
		return default(int);
	}

	[Token(Token = "0x60009EA")]
	[Address(RVA = "0x5D60070", Offset = "0x5D5F070", VA = "0x5D60070")]
	private static void OpenHelpLink(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60009EB")]
	[Address(RVA = "0x5D60220", Offset = "0x5D5F220", VA = "0x5D60220")]
	private void RegisterChangelogActions()
	{
	}

	[Token(Token = "0x60009EC")]
	[Address(RVA = "0x5D605D0", Offset = "0x5D5F5D0", VA = "0x5D605D0")]
	private void OpenHelpUpdatesDialog()
	{
	}

	[Token(Token = "0x60009ED")]
	[Address(RVA = "0x5D60630", Offset = "0x5D5F630", VA = "0x5D60630")]
	private void RefreshLatestVersion(bool forceRefresh)
	{
	}

	[Token(Token = "0x60009EE")]
	[Address(RVA = "0x5D606D0", Offset = "0x5D5F6D0", VA = "0x5D606D0")]
	private void ApplyLatestVersionResult(AottgChangelogResult<LatestChangelogVersionResponse> result)
	{
	}

	[Token(Token = "0x60009EF")]
	[Address(RVA = "0x5D60C70", Offset = "0x5D5FC70", VA = "0x5D60C70")]
	private void ApplyLatestPreviewResult(AottgChangelogResult<ChangelogEntryResponse> result)
	{
	}

	[Token(Token = "0x60009F0")]
	[Address(RVA = "0x5D60A30", Offset = "0x5D5FA30", VA = "0x5D60A30")]
	private void ApplyLatestText(LatestChangelogVersionResponse latest, bool loading, bool failed, bool empty)
	{
	}

	[Token(Token = "0x60009F1")]
	[Address(RVA = "0x5D60D40", Offset = "0x5D5FD40", VA = "0x5D60D40")]
	private static string LatestStatusText(LatestChangelogVersionResponse latest)
	{
		return null;
	}

	[Token(Token = "0x60009F2")]
	[Address(RVA = "0x5D5ECC0", Offset = "0x5D5DCC0", VA = "0x5D5ECC0")]
	private void OpenLatestChangelog()
	{
	}

	[Token(Token = "0x60009F3")]
	[Address(RVA = "0x5D60EE0", Offset = "0x5D5FEE0", VA = "0x5D60EE0")]
	private void ApplyLatestHistoryResult(AottgChangelogResult<PublicChangelogListResponse> result)
	{
	}

	[Token(Token = "0x60009F4")]
	[Address(RVA = "0x5D60E50", Offset = "0x5D5FE50", VA = "0x5D60E50")]
	private void FetchLatestEntry()
	{
	}

	[Token(Token = "0x60009F5")]
	[Address(RVA = "0x5D5EBA0", Offset = "0x5D5DBA0", VA = "0x5D5EBA0")]
	private void ShowOutdatedChangelogDialog(LatestChangelogVersionResponse latest)
	{
	}

	[Token(Token = "0x60009F6")]
	[Address(RVA = "0x5D60F80", Offset = "0x5D5FF80", VA = "0x5D60F80")]
	private void OpenOutdatedLatestChangelog()
	{
	}

	[Token(Token = "0x60009F7")]
	[Address(RVA = "0x5D61070", Offset = "0x5D60070", VA = "0x5D61070")]
	private static void DownloadLatestBuild()
	{
	}

	[Token(Token = "0x60009F8")]
	[Address(RVA = "0x5D610A0", Offset = "0x5D600A0", VA = "0x5D610A0")]
	private void RegisterCreditsActions()
	{
	}

	[Token(Token = "0x60009F9")]
	[Address(RVA = "0x5D61130", Offset = "0x5D60130", VA = "0x5D61130")]
	private void OpenCreditsScreen()
	{
	}

	[Token(Token = "0x60009FA")]
	[Address(RVA = "0x5D611F0", Offset = "0x5D601F0", VA = "0x5D611F0")]
	private void RefreshCredits(bool forceRefresh)
	{
	}

	[Token(Token = "0x60009FB")]
	[Address(RVA = "0x5D61260", Offset = "0x5D60260", VA = "0x5D61260")]
	private void ApplyCreditsResult(AottgCreditsResult result)
	{
	}

	[Token(Token = "0x60009FC")]
	[Address(RVA = "0x5D61400", Offset = "0x5D60400", VA = "0x5D61400")]
	private void ApplyCreditsState(AottgCreditsResult result, bool hasCredits, bool loading, bool failedNoCache)
	{
	}

	[Token(Token = "0x60009FD")]
	[Address(RVA = "0x5D61680", Offset = "0x5D60680", VA = "0x5D61680")]
	private static string CreditsErrorText(string error)
	{
		return null;
	}

	[Token(Token = "0x60009FE")]
	[Address(RVA = "0x5D617A0", Offset = "0x5D607A0", VA = "0x5D617A0")]
	private void RegisterGameCreateActions()
	{
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x5D628D0", Offset = "0x5D618D0", VA = "0x5D628D0")]
	private void SelectGameCreateCategory(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x5D62C10", Offset = "0x5D61C10", VA = "0x5D62C10")]
	private void SelectGameCreateSubcategory(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x5D62D60", Offset = "0x5D61D60", VA = "0x5D62D60")]
	private void SelectGameCreateExperience(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000A02")]
	[Address(RVA = "0x5D62AB0", Offset = "0x5D61AB0", VA = "0x5D62AB0")]
	private void SelectGameCreateHierarchy(GameObject source, string targetId, Action select)
	{
	}

	[Token(Token = "0x6000A03")]
	[Address(RVA = "0x5D62F20", Offset = "0x5D61F20", VA = "0x5D62F20")]
	private void NavigateGameCreateRoot()
	{
	}

	[Token(Token = "0x6000A04")]
	[Address(RVA = "0x5D62FE0", Offset = "0x5D61FE0", VA = "0x5D62FE0")]
	private void NavigateGameCreateCategory()
	{
	}

	[Token(Token = "0x6000A05")]
	[Address(RVA = "0x5D630A0", Offset = "0x5D620A0", VA = "0x5D630A0")]
	private void NavigateGameCreateSubcategory()
	{
	}

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x5D63160", Offset = "0x5D62160", VA = "0x5D63160")]
	private void ChangeGameCreateField(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x5D63220", Offset = "0x5D62220", VA = "0x5D63220")]
	private void OpenGameCreateSelector(GisketchActionContext context, bool map)
	{
	}

	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x5D63680", Offset = "0x5D62680", VA = "0x5D63680")]
	private static void OpenGameCreateSelector(GisketchActionContext context, bool map, string[] options, bool showMapCategories, Action<string, string> selected)
	{
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x5D63890", Offset = "0x5D62890", VA = "0x5D63890")]
	private void SelectSandboxSection(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x5D63A10", Offset = "0x5D62A10", VA = "0x5D63A10")]
	private void ChangeSandboxField(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x5D63D20", Offset = "0x5D62D20", VA = "0x5D63D20")]
	private void ToggleSandboxAddon(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x5D63E90", Offset = "0x5D62E90", VA = "0x5D63E90")]
	private void OpenAddonSelector(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x5D64090", Offset = "0x5D63090", VA = "0x5D64090")]
	private void ChangeRoomField(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000A0E")]
	[Address(RVA = "0x5D642E0", Offset = "0x5D632E0", VA = "0x5D642E0")]
	private void BackFromGameCreate()
	{
	}

	[Token(Token = "0x6000A0F")]
	[Address(RVA = "0x5D646B0", Offset = "0x5D636B0", VA = "0x5D646B0")]
	private void StartCreatedGame()
	{
	}

	[Token(Token = "0x6000A10")]
	[Address(RVA = "0x5D64DD0", Offset = "0x5D63DD0", VA = "0x5D64DD0")]
	private void RestartCreatedGame()
	{
	}

	[Token(Token = "0x6000A11")]
	[Address(RVA = "0x5D64F70", Offset = "0x5D63F70", VA = "0x5D64F70")]
	private void SaveForNextRestart()
	{
	}

	[Token(Token = "0x6000A12")]
	[Address(RVA = "0x5D64AD0", Offset = "0x5D63AD0", VA = "0x5D64AD0")]
	private bool PrepareGameCreateLaunch()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A13")]
	[Address(RVA = "0x5D65100", Offset = "0x5D64100", VA = "0x5D65100")]
	private void OpenGameCreateImport()
	{
	}

	[Token(Token = "0x6000A14")]
	[Address(RVA = "0x5D652B0", Offset = "0x5D642B0", VA = "0x5D652B0")]
	private void ImportGameCreatePreset()
	{
	}

	[Token(Token = "0x6000A15")]
	[Address(RVA = "0x5D65880", Offset = "0x5D64880", VA = "0x5D65880")]
	private static void OpenGameCreateExport()
	{
	}

	[Token(Token = "0x6000A16")]
	[Address(RVA = "0x5D65B30", Offset = "0x5D64B30", VA = "0x5D65B30")]
	private static void OpenFolder(string path)
	{
	}

	[Token(Token = "0x6000A17")]
	[Address(RVA = "0x5D65C20", Offset = "0x5D64C20", VA = "0x5D65C20")]
	private static void OpenLogsFolder()
	{
	}

	[Token(Token = "0x6000A18")]
	[Address(RVA = "0x5D65D70", Offset = "0x5D64D70", VA = "0x5D65D70")]
	private void ImportCustomContent(CustomContentType type)
	{
	}

	[Token(Token = "0x6000A19")]
	[Address(RVA = "0x5D65F00", Offset = "0x5D64F00", VA = "0x5D65F00")]
	private void OpenCustomContentManager(GisketchActionContext context, CustomContentType type)
	{
	}

	[Token(Token = "0x6000A1A")]
	[Address(RVA = "0x5D66440", Offset = "0x5D65440", VA = "0x5D66440")]
	private void SelectCustomContent(CustomContentType type, Action<CustomContentType, string> operation)
	{
	}

	[Token(Token = "0x6000A1B")]
	[Address(RVA = "0x5D66700", Offset = "0x5D65700", VA = "0x5D66700")]
	private void ModifyCustomContent(CustomContentType type, string name)
	{
	}

	[Token(Token = "0x6000A1C")]
	[Address(RVA = "0x5D66A10", Offset = "0x5D65A10", VA = "0x5D66A10")]
	private void DeleteCustomContent(CustomContentType type, string name)
	{
	}

	[Token(Token = "0x6000A1D")]
	[Address(RVA = "0x5D66300", Offset = "0x5D65300", VA = "0x5D66300")]
	private static List<string> GetCustomContentNames(CustomContentType type)
	{
		return null;
	}

	[Token(Token = "0x6000A1E")]
	[Address(RVA = "0x5D668D0", Offset = "0x5D658D0", VA = "0x5D668D0")]
	private static string LoadCustomContent(CustomContentType type, string name)
	{
		return null;
	}

	[Token(Token = "0x6000A1F")]
	[Address(RVA = "0x5D66C30", Offset = "0x5D65C30", VA = "0x5D66C30")]
	private static bool TrySaveCustomContent(CustomContentType type, string name, string content, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A20")]
	[Address(RVA = "0x5D661D0", Offset = "0x5D651D0", VA = "0x5D661D0")]
	private static string GetCustomContentLabel(CustomContentType type)
	{
		return null;
	}

	[Token(Token = "0x6000A21")]
	[Address(RVA = "0x5D66F20", Offset = "0x5D65F20", VA = "0x5D66F20")]
	private static string GetCustomContentFolderPath(CustomContentType type)
	{
		return null;
	}

	[Token(Token = "0x6000A22")]
	[Address(RVA = "0x5D62EC0", Offset = "0x5D61EC0", VA = "0x5D62EC0")]
	private void RefreshGameCreate()
	{
	}

	[Token(Token = "0x6000A23")]
	[Address(RVA = "0x5D64D50", Offset = "0x5D63D50", VA = "0x5D64D50")]
	private static void SaveAndReloadWeather()
	{
	}

	[Token(Token = "0x6000A24")]
	[Address(RVA = "0x5D62A20", Offset = "0x5D61A20", VA = "0x5D62A20")]
	private static bool TryElementIndex(string elementId, string prefix, int count, out int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A25")]
	[Address(RVA = "0x5D67050", Offset = "0x5D66050", VA = "0x5D67050")]
	private void RegisterInGameActions()
	{
	}

	[Token(Token = "0x6000A26")]
	[Address(RVA = "0x5D67630", Offset = "0x5D66630", VA = "0x5D67630")]
	internal static void HandleInGameAction(string id, GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000A27")]
	[Address(RVA = "0x5D68420", Offset = "0x5D67420", VA = "0x5D68420")]
	private void RegisterMobileActions()
	{
	}

	[Token(Token = "0x6000A28")]
	[Address(RVA = "0x5D68240", Offset = "0x5D67240", VA = "0x5D68240")]
	internal static void HandleMobileAction(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000A29")]
	[Address(RVA = "0x5D684B0", Offset = "0x5D674B0", VA = "0x5D684B0")]
	private void RegisterMultiplayerActions()
	{
	}

	[Token(Token = "0x6000A2A")]
	[Address(RVA = "0x5D68860", Offset = "0x5D67860", VA = "0x5D68860")]
	private static void ConnectRegion(MultiplayerRegion region)
	{
	}

	[Token(Token = "0x6000A2B")]
	[Address(RVA = "0x5D688E0", Offset = "0x5D678E0", VA = "0x5D688E0")]
	private void LeaveMultiplayer(string screenId)
	{
	}

	[Token(Token = "0x6000A2C")]
	[Address(RVA = "0x5D645A0", Offset = "0x5D635A0", VA = "0x5D645A0")]
	private static void WithMainMenu(Action<MainMenu> action)
	{
	}

	[Token(Token = "0x6000A2D")]
	[Address(RVA = "0x5D68990", Offset = "0x5D67990", VA = "0x5D68990")]
	private void AddNetworkListeners()
	{
	}

	[Token(Token = "0x6000A2E")]
	[Address(RVA = "0x5D68A50", Offset = "0x5D67A50", VA = "0x5D68A50")]
	private void RemoveNetworkListeners()
	{
	}

	[Token(Token = "0x6000A2F")]
	[Address(RVA = "0x5D649B0", Offset = "0x5D639B0", VA = "0x5D649B0")]
	private void ShowNetworkErrorToast(string error)
	{
	}

	[Token(Token = "0x6000A30")]
	[Address(RVA = "0x5D68B10", Offset = "0x5D67B10", VA = "0x5D68B10")]
	private void ShowRoomEntryFailedToast(short returnCode, bool creating)
	{
	}

	[Token(Token = "0x6000A31")]
	[Address(RVA = "0x5D68D10", Offset = "0x5D67D10", VA = "0x5D68D10")]
	private static string RoomEntryFailedMessageKey(short returnCode)
	{
		return null;
	}

	[Token(Token = "0x6000A32")]
	[Address(RVA = "0x5D68D90", Offset = "0x5D67D90", VA = "0x5D68D90")]
	private void RegisterPauseActions()
	{
	}

	[Token(Token = "0x6000A33")]
	[Address(RVA = "0x5D69060", Offset = "0x5D68060", VA = "0x5D69060")]
	private void RegisterEmoteActions()
	{
	}

	[Token(Token = "0x6000A34")]
	[Address(RVA = "0x5D69200", Offset = "0x5D68200", VA = "0x5D69200")]
	private void OpenEmoteText(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000A35")]
	[Address(RVA = "0x5D69330", Offset = "0x5D68330", VA = "0x5D69330")]
	private void OpenEmoteSticker(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000A36")]
	[Address(RVA = "0x5D69400", Offset = "0x5D68400", VA = "0x5D69400")]
	private void SaveEmoteText(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000A37")]
	[Address(RVA = "0x5D696C0", Offset = "0x5D686C0", VA = "0x5D696C0")]
	private void SaveEmoteSticker(GisketchActionContext context, string sticker)
	{
	}

	[Token(Token = "0x6000A38")]
	[Address(RVA = "0x5D695E0", Offset = "0x5D685E0", VA = "0x5D695E0")]
	private void SaveEmoteSettings()
	{
	}

	[Token(Token = "0x6000A39")]
	[Address(RVA = "0x5D692D0", Offset = "0x5D682D0", VA = "0x5D692D0")]
	private static int SlotIndex(GisketchActionContext context)
	{
		return default(int);
	}

	[Token(Token = "0x6000A3A")]
	[Address(RVA = "0x5D69B70", Offset = "0x5D68B70", VA = "0x5D69B70")]
	private void StartProfileActions()
	{
	}

	[Token(Token = "0x6000A3B")]
	[Address(RVA = "0x5D69D90", Offset = "0x5D68D90", VA = "0x5D69D90")]
	private void OpenProfileScreen()
	{
	}

	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x5D6A080", Offset = "0x5D69080", VA = "0x5D6A080")]
	private void OnAccountLoggedIn()
	{
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x5D6A170", Offset = "0x5D69170", VA = "0x5D6A170")]
	private void OnAccountLoggedOut()
	{
	}

	[Token(Token = "0x6000A3E")]
	[Address(RVA = "0x5D5B720", Offset = "0x5D5A720", VA = "0x5D5B720")]
	private void RefreshRemoteProfileAndCharacter(bool rebuildProfileScreen, [Optional][DefaultParameterValue(false)] bool forceRefresh, [Optional] Action<bool, string> onComplete, bool showProfileErrorToast = true)
	{
	}

	[Token(Token = "0x6000A3F")]
	[Address(RVA = "0x5D6A430", Offset = "0x5D69430", VA = "0x5D6A430")]
	private void RefreshRemoteCharacterInfo(bool rebuildProfileScreen, [Optional][DefaultParameterValue(false)] bool forceRefresh, [Optional] Action<bool, string> onComplete, bool showProfileErrorToast = true)
	{
	}

	[Token(Token = "0x6000A40")]
	[Address(RVA = "0x5D6A2E0", Offset = "0x5D692E0", VA = "0x5D6A2E0")]
	private static bool HasCachedRemoteIdentity()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A41")]
	[Address(RVA = "0x5D6A1F0", Offset = "0x5D691F0", VA = "0x5D6A1F0")]
	private void RebuildProfileScreen()
	{
	}

	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x5D6A680", Offset = "0x5D69680", VA = "0x5D6A680")]
	private void RefreshCurrentScreenManifest()
	{
	}

	[Token(Token = "0x6000A43")]
	[Address(RVA = "0x5D5CA00", Offset = "0x5D5BA00", VA = "0x5D5CA00")]
	private void RefreshProfileState()
	{
	}

	[Token(Token = "0x6000A44")]
	[Address(RVA = "0x5D6A7D0", Offset = "0x5D697D0", VA = "0x5D6A7D0")]
	private static string ConnectionStatus(bool linked, bool loading)
	{
		return null;
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x5D6A6F0", Offset = "0x5D696F0", VA = "0x5D6A6F0")]
	private static string PatreonConnectionStatus(bool supporter, bool loading)
	{
		return null;
	}

	[Token(Token = "0x6000A46")]
	[Address(RVA = "0x5D697D0", Offset = "0x5D687D0", VA = "0x5D697D0")]
	private void RefreshEmoteState()
	{
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x5D6AE40", Offset = "0x5D69E40", VA = "0x5D6AE40")]
	private static string StickerSprite(string value)
	{
		return null;
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x5D6AD90", Offset = "0x5D69D90", VA = "0x5D6AD90")]
	private static string StickerLabel(string value)
	{
		return null;
	}

	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x5D6A8B0", Offset = "0x5D698B0", VA = "0x5D6A8B0")]
	private static string BadgeLabels(JSONNode badges)
	{
		return null;
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x5D6AE80", Offset = "0x5D69E80", VA = "0x5D6AE80")]
	private void RegisterProfileActions()
	{
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x5D6B090", Offset = "0x5D6A090", VA = "0x5D6B090")]
	private void SaveAvatar(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x5D6B450", Offset = "0x5D6A450", VA = "0x5D6B450")]
	private void SaveBanner(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x5D6B530", Offset = "0x5D6A530", VA = "0x5D6B530")]
	private void SaveDetails(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x5D6BEC0", Offset = "0x5D6AEC0", VA = "0x5D6BEC0")]
	private void ImportLocalBio(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x5D6C020", Offset = "0x5D6B020", VA = "0x5D6C020")]
	private void SaveCharacter(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x5D6B170", Offset = "0x5D6A170", VA = "0x5D6B170")]
	private void SaveProfile(GisketchActionContext context, string displayName, string bio, string avatarKey, string bannerKey, Dictionary<string, string> socials, string savingMessage)
	{
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x5D6C950", Offset = "0x5D6B950", VA = "0x5D6C950")]
	private static void SaveLocalProfile(string displayName, string bio, string avatarKey, string bannerKey, Dictionary<string, string> socials)
	{
	}

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x5D6CB80", Offset = "0x5D6BB80", VA = "0x5D6CB80")]
	private static void SaveLocalBio(string bio)
	{
	}

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x5D6B900", Offset = "0x5D6A900", VA = "0x5D6B900")]
	private static List<string> SocialLinks(GisketchActionContext context)
	{
		return null;
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x5D6BB00", Offset = "0x5D6AB00", VA = "0x5D6BB00")]
	private static Dictionary<string, string> ToSocials(IEnumerable<string> links)
	{
		return null;
	}

	[Token(Token = "0x6000A55")]
	[Address(RVA = "0x5D6C800", Offset = "0x5D6B800", VA = "0x5D6C800")]
	private static string[] EffectColors(GisketchActionContext context, string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000A56")]
	[Address(RVA = "0x5D69A70", Offset = "0x5D68A70", VA = "0x5D69A70")]
	private void ProfileToast(AottgToastVariant variant, string icon, string content, [Optional] string updateKey)
	{
	}

	[Token(Token = "0x6000A57")]
	[Address(RVA = "0x5D6CC20", Offset = "0x5D6BC20", VA = "0x5D6CC20")]
	private void LateUpdateSearchShortcuts()
	{
	}

	[Token(Token = "0x6000A58")]
	[Address(RVA = "0x5D6D200", Offset = "0x5D6C200", VA = "0x5D6D200")]
	private void OpenSearch(string actionId, string sourceId)
	{
	}

	[Token(Token = "0x6000A59")]
	[Address(RVA = "0x5D6CE70", Offset = "0x5D6BE70", VA = "0x5D6CE70")]
	private static bool IsSearchShortcutBlocked()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A5A")]
	[Address(RVA = "0x5D6D290", Offset = "0x5D6C290", VA = "0x5D6D290")]
	private void RegisterViewerActions()
	{
	}

	[Token(Token = "0x6000A5B")]
	[Address(RVA = "0x5D6D5F0", Offset = "0x5D6C5F0", VA = "0x5D6D5F0", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x5D6DE50", Offset = "0x5D6CE50", VA = "0x5D6DE50")]
	private void Start()
	{
	}

	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x5D6E070", Offset = "0x5D6D070", VA = "0x5D6E070")]
	private void ShowDataFolderWarning()
	{
	}

	[Token(Token = "0x6000A5E")]
	[Address(RVA = "0x5D6E270", Offset = "0x5D6D270", VA = "0x5D6E270")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000A5F")]
	[Address(RVA = "0x5D6E4A0", Offset = "0x5D6D4A0", VA = "0x5D6E4A0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000A60")]
	[Address(RVA = "0x5D6D6D0", Offset = "0x5D6C6D0", VA = "0x5D6D6D0")]
	private void RegisterMainActions()
	{
	}

	[Token(Token = "0x6000A61")]
	[Address(RVA = "0x5D6DB90", Offset = "0x5D6CB90", VA = "0x5D6DB90")]
	private void RegisterSettingsActions()
	{
	}

	[Token(Token = "0x6000A62")]
	[Address(RVA = "0x5D6E670", Offset = "0x5D6D670", VA = "0x5D6E670")]
	private void OpenSettingsScreen()
	{
	}

	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x5D6E6B0", Offset = "0x5D6D6B0", VA = "0x5D6E6B0")]
	private void OpenSettingsScreen(string returnScreenId)
	{
	}

	[Token(Token = "0x6000A64")]
	[Address(RVA = "0x5D6E750", Offset = "0x5D6D750", VA = "0x5D6E750")]
	private void BackFromSettings()
	{
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x5D6E5A0", Offset = "0x5D6D5A0", VA = "0x5D6E5A0")]
	private void RegisterLegacyMain(string actionId, string legacyButtonName)
	{
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x5D6E4C0", Offset = "0x5D6D4C0", VA = "0x5D6E4C0")]
	private void RegisterDialog(string actionId, string dialogId)
	{
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x5D6E9D0", Offset = "0x5D6D9D0", VA = "0x5D6E9D0")]
	private void SaveSettings()
	{
	}

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x5D6EE80", Offset = "0x5D6DE80", VA = "0x5D6EE80")]
	private void LoadSettings()
	{
	}

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x5D6EF70", Offset = "0x5D6DF70", VA = "0x5D6EF70")]
	private void LoadSettingsConfirmed()
	{
	}

	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x5D6EFF0", Offset = "0x5D6DFF0", VA = "0x5D6EFF0")]
	private void LoadSettingsFromDisk(bool syncUi)
	{
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x5D6E850", Offset = "0x5D6D850", VA = "0x5D6E850")]
	private static void ApplySettings()
	{
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x5D6F180", Offset = "0x5D6E180", VA = "0x5D6F180")]
	private void ResetSettingsToDefault()
	{
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x5D6F1E0", Offset = "0x5D6E1E0", VA = "0x5D6F1E0")]
	private void ResetSettingsToDefaultConfirmed()
	{
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x5D6F340", Offset = "0x5D6E340", VA = "0x5D6F340")]
	private void ConfirmSaveBack()
	{
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x5D6F3F0", Offset = "0x5D6E3F0", VA = "0x5D6F3F0")]
	private void ConfirmDiscardBack()
	{
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x5D6F4A0", Offset = "0x5D6E4A0", VA = "0x5D6F4A0")]
	private void ConfirmLoad()
	{
	}

	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x5D6F540", Offset = "0x5D6E540", VA = "0x5D6F540")]
	private void ConfirmDefault()
	{
	}

	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x5D6EAE0", Offset = "0x5D6DAE0", VA = "0x5D6EAE0")]
	private static SaveableSettingsContainer[] SettingsContainers()
	{
		return null;
	}

	[Token(Token = "0x6000A73")]
	[Address(RVA = "0x5D6F0D0", Offset = "0x5D6E0D0", VA = "0x5D6F0D0")]
	private void SyncSettingsUiState()
	{
	}

	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x5D6ED80", Offset = "0x5D6DD80", VA = "0x5D6ED80")]
	private void SettingsToast(AottgToastVariant variant, string icon, string contentKey, string updateKey)
	{
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x5D6DF50", Offset = "0x5D6CF50", VA = "0x5D6DF50")]
	private void EnsureScreenRouteGuard()
	{
	}

	[Token(Token = "0x6000A76")]
	[Address(RVA = "0x5D6F570", Offset = "0x5D6E570", VA = "0x5D6F570")]
	private bool GuardScreenNavigation(string targetScreenId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A77")]
	[Address(RVA = "0x5D6F660", Offset = "0x5D6E660", VA = "0x5D6F660")]
	private bool GuardSettingsScreenNavigation(string targetScreenId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x5D6E920", Offset = "0x5D6D920", VA = "0x5D6E920")]
	private void ShowSettingsLeaveTarget()
	{
	}

	[Token(Token = "0x6000A79")]
	[Address(RVA = "0x5D6E2E0", Offset = "0x5D6D2E0", VA = "0x5D6E2E0")]
	private void UpdateSettingsState()
	{
	}

	[Token(Token = "0x6000A7A")]
	[Address(RVA = "0x5D6F7F0", Offset = "0x5D6E7F0", VA = "0x5D6F7F0")]
	private static string CurrentSongText()
	{
		return null;
	}

	[Token(Token = "0x6000A7B")]
	[Address(RVA = "0x5D6F910", Offset = "0x5D6E910", VA = "0x5D6F910")]
	public AottgGameUiActions()
	{
	}
}
