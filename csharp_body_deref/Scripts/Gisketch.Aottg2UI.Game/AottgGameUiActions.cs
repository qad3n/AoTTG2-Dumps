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
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001A7")]
public sealed class AottgGameUiActions : GisketchController
{
	[Token(Token = "0x20001A8")]
	private enum CustomContentType
	{
		[Token(Token = "0x40008F7")]
		Map,
		[Token(Token = "0x40008F8")]
		Logic,
		[Token(Token = "0x40008F9")]
		Addon
	}

	[Token(Token = "0x40008E3")]
	private const string LoginToastKey = "account.login";

	[Token(Token = "0x40008E4")]
	private const string RegisterToastKey = "account.register.email";

	[Token(Token = "0x40008E5")]
	private const string ForgotPasswordToastKey = "account.forgotPassword";

	[Token(Token = "0x40008E6")]
	private const string LogoutToastKey = "account.logout";

	[Token(Token = "0x40008E7")]
	private const string RefreshAccountToastKey = "account.refresh";

	[Token(Token = "0x40008E8")]
	private const string GoOfflineToastKey = "account.goOffline";

	[Token(Token = "0x40008E9")]
	private const string GoOnlineToastKey = "account.goOnline";

	[Token(Token = "0x40008EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly IGisketchLocalizer AccountLocalizer;

	[Token(Token = "0x40008EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool _authMethodsUnavailable;

	[Token(Token = "0x40008EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x31")]
	private bool _lastAuthLoading;

	[Token(Token = "0x40008ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x32")]
	private bool _lastIdentityLoading;

	[Token(Token = "0x40008EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x33")]
	private bool _checkedChangelogAutoOpen;

	[Token(Token = "0x40008EF")]
	private const string NetworkToastKey = "network.error";

	[Token(Token = "0x40008F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private bool _profileIdentityLoading;

	[Token(Token = "0x40008F1")]
	private const string ProfileSaveToastKey = "profile.save";

	[Token(Token = "0x40008F2")]
	private const string SettingsSaveToastKey = "settings.save";

	[Token(Token = "0x40008F3")]
	private const string SettingsLoadToastKey = "settings.load";

	[Token(Token = "0x40008F4")]
	private const string SettingsDefaultToastKey = "settings.default";

	[Token(Token = "0x40008F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string _settingsLeaveTargetScreenId;

	[Token(Token = "0x600091D")]
	[Address(RVA = "0x23853B0", Offset = "0x23839B0", VA = "0x1823853B0")]
	private void RegisterAccountFormActions()
	{
	}

	[Token(Token = "0x600091E")]
	[Address(RVA = "0x238BCC0", Offset = "0x238A2C0", VA = "0x18238BCC0")]
	private static void SetKeepSignedIn(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600091F")]
	[Address(RVA = "0x238BB10", Offset = "0x238A110", VA = "0x18238BB10")]
	private static void SetKeepSignedInFromCheckbox(GisketchActionContext context, string id)
	{
	}

	[Token(Token = "0x6000920")]
	[Address(RVA = "0x237A800", Offset = "0x2378E00", VA = "0x18237A800")]
	private static bool CheckboxValue(GisketchActionContext context, string id, bool fallback)
	{
		return default(bool);
	}

	[Token(Token = "0x6000921")]
	[Address(RVA = "0x2388430", Offset = "0x2386A30", VA = "0x182388430")]
	private void RegisterWithEmail(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000922")]
	[Address(RVA = "0x237C170", Offset = "0x237A770", VA = "0x18237C170")]
	private void ForgotPassword(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000923")]
	[Address(RVA = "0x237FBB0", Offset = "0x237E1B0", VA = "0x18237FBB0")]
	private void Logout(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000924")]
	[Address(RVA = "0x2383550", Offset = "0x2381B50", VA = "0x182383550")]
	private void RefreshAccount(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000925")]
	[Address(RVA = "0x237EBE0", Offset = "0x237D1E0", VA = "0x18237EBE0")]
	private static bool IsValidDisplayNameLength(string displayName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000926")]
	[Address(RVA = "0x237E890", Offset = "0x237CE90", VA = "0x18237E890")]
	private static bool IsCjkCharacter(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x237C860", Offset = "0x237AE60", VA = "0x18237C860")]
	private void GoOffline(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x237CA40", Offset = "0x237B040", VA = "0x18237CA40")]
	private void GoOnline(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000929")]
	[Address(RVA = "0x23805A0", Offset = "0x237EBA0", VA = "0x1823805A0")]
	private static void OpenAccountDetails()
	{
	}

	[Token(Token = "0x600092A")]
	[Address(RVA = "0x2388B70", Offset = "0x2387170", VA = "0x182388B70")]
	private void ResetAccountCtas()
	{
	}

	[Token(Token = "0x600092B")]
	[Address(RVA = "0x238BAA0", Offset = "0x238A0A0", VA = "0x18238BAA0")]
	private void SetAccountCta(string key, string text)
	{
	}

	[Token(Token = "0x600092C")]
	[Address(RVA = "0x238DA10", Offset = "0x238C010", VA = "0x18238DA10")]
	private bool TryBeginAccountOperation(string ctaKey, string textKey, string fallback)
	{
		return default(bool);
	}

	[Token(Token = "0x600092D")]
	[Address(RVA = "0x238D990", Offset = "0x238BF90", VA = "0x18238D990")]
	private bool TryBeginAccountOperation(string textKey, string fallback)
	{
		return default(bool);
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x238D8E0", Offset = "0x238BEE0", VA = "0x18238D8E0")]
	private bool TryBeginAccountOperation(string message)
	{
		return default(bool);
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x237B5F0", Offset = "0x2379BF0", VA = "0x18237B5F0")]
	private void EndAccountOperation()
	{
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x2385220", Offset = "0x2383820", VA = "0x182385220")]
	private void RegisterAccountActions()
	{
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x2377AB0", Offset = "0x23760B0", VA = "0x182377AB0")]
	private void AddAccountListeners()
	{
	}

	[Token(Token = "0x6000932")]
	[Address(RVA = "0x23889F0", Offset = "0x2386FF0", VA = "0x1823889F0")]
	private void RemoveAccountListeners()
	{
	}

	[Token(Token = "0x6000933")]
	[Address(RVA = "0x238C960", Offset = "0x238AF60", VA = "0x18238C960")]
	private void StartAccountActions()
	{
	}

	[Token(Token = "0x6000934")]
	[Address(RVA = "0x237ED00", Offset = "0x237D300", VA = "0x18237ED00")]
	private void LateUpdateAccountActions()
	{
	}

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x2381D40", Offset = "0x2380340", VA = "0x182381D40")]
	private void OpenLoginDialog()
	{
	}

	[Token(Token = "0x6000936")]
	[Address(RVA = "0x2383860", Offset = "0x2381E60", VA = "0x182383860")]
	private void RefreshAuthMethodsForDialog()
	{
	}

	[Token(Token = "0x6000937")]
	[Address(RVA = "0x238C140", Offset = "0x238A740", VA = "0x18238C140")]
	private void ShowAccountDialog(string dialogId, bool requireEmailPassword)
	{
	}

	[Token(Token = "0x6000938")]
	[Address(RVA = "0x237F5C0", Offset = "0x237DBC0", VA = "0x18237F5C0")]
	private void LoginWithEmail(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x237F9D0", Offset = "0x237DFD0", VA = "0x18237F9D0")]
	private void LoginWithOAuth(string provider)
	{
	}

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x2382DC0", Offset = "0x23813C0", VA = "0x182382DC0")]
	private void RefreshAccountState()
	{
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x237E760", Offset = "0x237CD60", VA = "0x18237E760")]
	private static bool IsAccountAuthLoading()
	{
		return default(bool);
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x237E830", Offset = "0x237CE30", VA = "0x18237E830")]
	private bool IsAccountIdentityLoading()
	{
		return default(bool);
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x237E5A0", Offset = "0x237CBA0", VA = "0x18237E5A0")]
	private static string InGameDisplayName()
	{
		return null;
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x2379520", Offset = "0x2377B20", VA = "0x182379520")]
	private static string AuthDisplayName()
	{
		return null;
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x2379380", Offset = "0x2377980", VA = "0x182379380")]
	private void AttachTruncation(string id)
	{
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x237FD40", Offset = "0x237E340", VA = "0x18237FD40")]
	private static bool LooksLikeEmail(string email)
	{
		return default(bool);
	}

	[Token(Token = "0x6000941")]
	[Address(RVA = "0x237C0A0", Offset = "0x237A6A0", VA = "0x18237C0A0")]
	private static string FindInput(GisketchActionContext context, string id)
	{
		return null;
	}

	[Token(Token = "0x6000942")]
	[Address(RVA = "0x237A940", Offset = "0x2378F40", VA = "0x18237A940")]
	private static void ClearInput(GisketchActionContext context, string id)
	{
	}

	[Token(Token = "0x6000943")]
	[Address(RVA = "0x237E630", Offset = "0x237CC30", VA = "0x18237E630")]
	private static TMP_InputField Input(GisketchActionContext context, string id)
	{
		return null;
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x237AA10", Offset = "0x2379010", VA = "0x18237AA10")]
	private void CloseTopOverlay()
	{
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x2377980", Offset = "0x2375F80", VA = "0x182377980")]
	private void AccountToast(AottgToastVariant variant, string icon, string titleKey, string titleFallback, string content, [Optional] string updateKey)
	{
	}

	[Token(Token = "0x6000946")]
	[Address(RVA = "0x237B7C0", Offset = "0x2379DC0", VA = "0x18237B7C0")]
	private static string ErrorText(string error)
	{
		return null;
	}

	[Token(Token = "0x6000947")]
	[Address(RVA = "0x2377880", Offset = "0x2375E80", VA = "0x182377880")]
	private static string AccountText(string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000948")]
	[Address(RVA = "0x238CA00", Offset = "0x238B000", VA = "0x18238CA00")]
	private void StartChangelogActions()
	{
	}

	[Token(Token = "0x6000949")]
	[Address(RVA = "0x2377C30", Offset = "0x2376230", VA = "0x182377C30")]
	private void ApplyAutoOpenLatestVersionResult(AottgChangelogResult<LatestChangelogVersionResponse> result)
	{
	}

	[Token(Token = "0x600094A")]
	[Address(RVA = "0x2378390", Offset = "0x2376990", VA = "0x182378390")]
	private void ApplyLatestEntryResult(AottgChangelogResult<ChangelogEntryResponse> result)
	{
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x2389200", Offset = "0x2387800", VA = "0x182389200")]
	private void RetryReader()
	{
	}

	[Token(Token = "0x600094C")]
	[Address(RVA = "0x2382170", Offset = "0x2380770", VA = "0x182382170")]
	private void OpenPreviousChangelog()
	{
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x2381ED0", Offset = "0x23804D0", VA = "0x182381ED0")]
	private void OpenNextChangelog()
	{
	}

	[Token(Token = "0x600094E")]
	[Address(RVA = "0x2378B80", Offset = "0x2377180", VA = "0x182378B80")]
	private void ApplyPreviousPageResult(AottgChangelogResult<PublicChangelogListResponse> result)
	{
	}

	[Token(Token = "0x600094F")]
	[Address(RVA = "0x237BE90", Offset = "0x237A490", VA = "0x18237BE90")]
	private void FetchEntry(string id)
	{
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x23781B0", Offset = "0x23767B0", VA = "0x1823781B0")]
	private void ApplyEntryResult(AottgChangelogResult<ChangelogEntryResponse> result, AottgChangelogReaderMode mode)
	{
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x237B0D0", Offset = "0x23796D0", VA = "0x18237B0D0")]
	private string CurrentReaderTitle()
	{
		return null;
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x2382C50", Offset = "0x2381250", VA = "0x182382C50")]
	private string ReaderTitle(ChangelogEntryResponse entry, AottgChangelogReaderMode mode)
	{
		return null;
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x2378D20", Offset = "0x2377320", VA = "0x182378D20")]
	private void ApplyReaderLoading(string title)
	{
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x2378F50", Offset = "0x2377550", VA = "0x182378F50")]
	private void ApplyReaderState(string title, bool refreshing, bool failed, bool empty, string error)
	{
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x2382BE0", Offset = "0x23811E0", VA = "0x182382BE0")]
	private static string ReaderStatus(bool refreshing)
	{
		return null;
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x238C630", Offset = "0x238AC30", VA = "0x18238C630")]
	private void ShowReader()
	{
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x2384C90", Offset = "0x2383290", VA = "0x182384C90")]
	private void RefreshReader()
	{
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x237E5B0", Offset = "0x237CBB0", VA = "0x18237E5B0")]
	private static int IndexFromElement(string elementId)
	{
		return default(int);
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x2381980", Offset = "0x237FF80", VA = "0x182381980")]
	private static void OpenHelpLink(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x23857C0", Offset = "0x2383DC0", VA = "0x1823857C0")]
	private void RegisterChangelogActions()
	{
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x2381B60", Offset = "0x2380160", VA = "0x182381B60")]
	private void OpenHelpUpdatesDialog()
	{
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x2383E00", Offset = "0x2382400", VA = "0x182383E00")]
	private void RefreshLatestVersion(bool forceRefresh)
	{
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x2378830", Offset = "0x2376E30", VA = "0x182378830")]
	private void ApplyLatestVersionResult(AottgChangelogResult<LatestChangelogVersionResponse> result)
	{
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x2378440", Offset = "0x2376A40", VA = "0x182378440")]
	private void ApplyLatestPreviewResult(AottgChangelogResult<ChangelogEntryResponse> result)
	{
	}

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x2378510", Offset = "0x2376B10", VA = "0x182378510")]
	private void ApplyLatestText(LatestChangelogVersionResponse latest, bool loading, bool failed, bool empty)
	{
	}

	[Token(Token = "0x6000960")]
	[Address(RVA = "0x237F0D0", Offset = "0x237D6D0", VA = "0x18237F0D0")]
	private static string LatestStatusText(LatestChangelogVersionResponse latest)
	{
		return null;
	}

	[Token(Token = "0x6000961")]
	[Address(RVA = "0x2381BD0", Offset = "0x23801D0", VA = "0x182381BD0")]
	private void OpenLatestChangelog()
	{
	}

	[Token(Token = "0x6000962")]
	[Address(RVA = "0x23783A0", Offset = "0x23769A0", VA = "0x1823783A0")]
	private void ApplyLatestHistoryResult(AottgChangelogResult<PublicChangelogListResponse> result)
	{
	}

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x237C000", Offset = "0x237A600", VA = "0x18237C000")]
	private void FetchLatestEntry()
	{
	}

	[Token(Token = "0x6000964")]
	[Address(RVA = "0x238C510", Offset = "0x238AB10", VA = "0x18238C510")]
	private void ShowOutdatedChangelogDialog(LatestChangelogVersionResponse latest)
	{
	}

	[Token(Token = "0x6000965")]
	[Address(RVA = "0x2382090", Offset = "0x2380690", VA = "0x182382090")]
	private void OpenOutdatedLatestChangelog()
	{
	}

	[Token(Token = "0x6000966")]
	[Address(RVA = "0x237B490", Offset = "0x2379A90", VA = "0x18237B490")]
	private static void DownloadLatestBuild()
	{
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x2385B80", Offset = "0x2384180", VA = "0x182385B80")]
	private void RegisterCreditsActions()
	{
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x2380910", Offset = "0x237EF10", VA = "0x182380910")]
	private void OpenCreditsScreen()
	{
	}

	[Token(Token = "0x6000969")]
	[Address(RVA = "0x23838F0", Offset = "0x2381EF0", VA = "0x1823838F0")]
	private void RefreshCredits(bool forceRefresh)
	{
	}

	[Token(Token = "0x600096A")]
	[Address(RVA = "0x2377E10", Offset = "0x2376410", VA = "0x182377E10")]
	private void ApplyCreditsResult(AottgCreditsResult result)
	{
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x2377F70", Offset = "0x2376570", VA = "0x182377F70")]
	private void ApplyCreditsState(AottgCreditsResult result, bool hasCredits, bool loading, bool failedNoCache)
	{
	}

	[Token(Token = "0x600096C")]
	[Address(RVA = "0x237AF10", Offset = "0x2379510", VA = "0x18237AF10")]
	private static string CreditsErrorText(string error)
	{
		return null;
	}

	[Token(Token = "0x600096D")]
	[Address(RVA = "0x238D410", Offset = "0x238BA10", VA = "0x18238D410")]
	private static string Text(string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x600096E")]
	[Address(RVA = "0x2385DB0", Offset = "0x23843B0", VA = "0x182385DB0")]
	private void RegisterGameCreateActions()
	{
	}

	[Token(Token = "0x600096F")]
	[Address(RVA = "0x238B210", Offset = "0x2389810", VA = "0x18238B210")]
	private void SelectGameCreateCategory(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000970")]
	[Address(RVA = "0x238B6F0", Offset = "0x2389CF0", VA = "0x18238B6F0")]
	private void SelectGameCreateSubcategory(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000971")]
	[Address(RVA = "0x238B3E0", Offset = "0x23899E0", VA = "0x18238B3E0")]
	private void SelectGameCreateExperience(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000972")]
	[Address(RVA = "0x238B5B0", Offset = "0x2389BB0", VA = "0x18238B5B0")]
	private void SelectGameCreateHierarchy(GameObject source, string targetId, Action select)
	{
	}

	[Token(Token = "0x6000973")]
	[Address(RVA = "0x2380190", Offset = "0x237E790", VA = "0x182380190")]
	private void NavigateGameCreateRoot()
	{
	}

	[Token(Token = "0x6000974")]
	[Address(RVA = "0x23800F0", Offset = "0x237E6F0", VA = "0x1823800F0")]
	private void NavigateGameCreateCategory()
	{
	}

	[Token(Token = "0x6000975")]
	[Address(RVA = "0x2380220", Offset = "0x237E820", VA = "0x182380220")]
	private void NavigateGameCreateSubcategory()
	{
	}

	[Token(Token = "0x6000976")]
	[Address(RVA = "0x237A070", Offset = "0x2378670", VA = "0x18237A070")]
	private void ChangeGameCreateField(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000977")]
	[Address(RVA = "0x2381340", Offset = "0x237F940", VA = "0x182381340")]
	private void OpenGameCreateSelector(GisketchActionContext context, bool map)
	{
	}

	[Token(Token = "0x6000978")]
	[Address(RVA = "0x2381910", Offset = "0x237FF10", VA = "0x182381910")]
	private static void OpenGameCreateSelector(GisketchActionContext context, bool map, string[] options, bool showMapCategories, string currentMap, Action<string> selected)
	{
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x238B8C0", Offset = "0x2389EC0", VA = "0x18238B8C0")]
	private void SelectSandboxSection(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x237A4C0", Offset = "0x2378AC0", VA = "0x18237A4C0")]
	private void ChangeSandboxField(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x238D720", Offset = "0x238BD20", VA = "0x18238D720")]
	private void ToggleSandboxAddon(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x2380740", Offset = "0x237ED40", VA = "0x182380740")]
	private void OpenAddonSelector(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x237A290", Offset = "0x2378890", VA = "0x18237A290")]
	private void ChangeRoomField(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600097E")]
	[Address(RVA = "0x2379930", Offset = "0x2377F30", VA = "0x182379930")]
	private void BackFromGameCreate()
	{
	}

	[Token(Token = "0x600097F")]
	[Address(RVA = "0x238CAA0", Offset = "0x238B0A0", VA = "0x18238CAA0")]
	private void StartCreatedGame()
	{
	}

	[Token(Token = "0x6000980")]
	[Address(RVA = "0x23890C0", Offset = "0x23876C0", VA = "0x1823890C0")]
	private void RestartCreatedGame()
	{
	}

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x2382850", Offset = "0x2380E50", VA = "0x182382850")]
	private bool PrepareGameCreateLaunch()
	{
		return default(bool);
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x23811A0", Offset = "0x237F7A0", VA = "0x1823811A0")]
	private void OpenGameCreateImport()
	{
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x237DF10", Offset = "0x237C510", VA = "0x18237DF10")]
	private void ImportGameCreatePreset()
	{
	}

	[Token(Token = "0x6000984")]
	[Address(RVA = "0x2380F70", Offset = "0x237F570", VA = "0x182380F70")]
	private static void OpenGameCreateExport()
	{
	}

	[Token(Token = "0x6000985")]
	[Address(RVA = "0x2380E80", Offset = "0x237F480", VA = "0x182380E80")]
	private static void OpenFolder(string path)
	{
	}

	[Token(Token = "0x6000986")]
	[Address(RVA = "0x2381D80", Offset = "0x2380380", VA = "0x182381D80")]
	private static void OpenLogsFolder()
	{
	}

	[Token(Token = "0x6000987")]
	[Address(RVA = "0x237DD80", Offset = "0x237C380", VA = "0x18237DD80")]
	private void ImportCustomContent(CustomContentType type)
	{
	}

	[Token(Token = "0x6000988")]
	[Address(RVA = "0x2380980", Offset = "0x237EF80", VA = "0x182380980")]
	private void OpenCustomContentManager(GisketchActionContext context, CustomContentType type)
	{
	}

	[Token(Token = "0x6000989")]
	[Address(RVA = "0x238AF00", Offset = "0x2389500", VA = "0x18238AF00")]
	private void SelectCustomContent(CustomContentType type, Action<CustomContentType, string> operation)
	{
	}

	[Token(Token = "0x600098A")]
	[Address(RVA = "0x237FE00", Offset = "0x237E400", VA = "0x18237FE00")]
	private void ModifyCustomContent(CustomContentType type, string name)
	{
	}

	[Token(Token = "0x600098B")]
	[Address(RVA = "0x237B270", Offset = "0x2379870", VA = "0x18237B270")]
	private void DeleteCustomContent(CustomContentType type, string name)
	{
	}

	[Token(Token = "0x600098C")]
	[Address(RVA = "0x237C720", Offset = "0x237AD20", VA = "0x18237C720")]
	private static List<string> GetCustomContentNames(CustomContentType type)
	{
		return null;
	}

	[Token(Token = "0x600098D")]
	[Address(RVA = "0x237F1C0", Offset = "0x237D7C0", VA = "0x18237F1C0")]
	private static string LoadCustomContent(CustomContentType type, string name)
	{
		return null;
	}

	[Token(Token = "0x600098E")]
	[Address(RVA = "0x238DB70", Offset = "0x238C170", VA = "0x18238DB70")]
	private static bool TrySaveCustomContent(CustomContentType type, string name, string content, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x600098F")]
	[Address(RVA = "0x237C5E0", Offset = "0x237ABE0", VA = "0x18237C5E0")]
	private static string GetCustomContentLabel(CustomContentType type)
	{
		return null;
	}

	[Token(Token = "0x6000990")]
	[Address(RVA = "0x237C490", Offset = "0x237AA90", VA = "0x18237C490")]
	private static string GetCustomContentFolderPath(CustomContentType type)
	{
		return null;
	}

	[Token(Token = "0x6000991")]
	[Address(RVA = "0x2383DA0", Offset = "0x23823A0", VA = "0x182383DA0")]
	private void RefreshGameCreate()
	{
	}

	[Token(Token = "0x6000992")]
	[Address(RVA = "0x2389300", Offset = "0x2387900", VA = "0x182389300")]
	private static void SaveAndReloadWeather()
	{
	}

	[Token(Token = "0x6000993")]
	[Address(RVA = "0x238DAE0", Offset = "0x238C0E0", VA = "0x18238DAE0")]
	private static bool TryElementIndex(string elementId, string prefix, int count, out int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000994")]
	[Address(RVA = "0x2386FD0", Offset = "0x23855D0", VA = "0x182386FD0")]
	private void RegisterInGameActions()
	{
	}

	[Token(Token = "0x6000995")]
	[Address(RVA = "0x237D0B0", Offset = "0x237B6B0", VA = "0x18237D0B0")]
	internal static void HandleInGameAction(string id, GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000996")]
	[Address(RVA = "0x2377BC0", Offset = "0x23761C0", VA = "0x182377BC0")]
	private void AddNetworkListeners()
	{
	}

	[Token(Token = "0x6000997")]
	[Address(RVA = "0x2388B00", Offset = "0x2387100", VA = "0x182388B00")]
	private void RemoveNetworkListeners()
	{
	}

	[Token(Token = "0x6000998")]
	[Address(RVA = "0x238C3C0", Offset = "0x238A9C0", VA = "0x18238C3C0")]
	private void ShowNetworkErrorToast(string error)
	{
	}

	[Token(Token = "0x6000999")]
	[Address(RVA = "0x2387AD0", Offset = "0x23860D0", VA = "0x182387AD0")]
	private void RegisterPauseActions()
	{
	}

	[Token(Token = "0x600099A")]
	[Address(RVA = "0x2385C10", Offset = "0x2384210", VA = "0x182385C10")]
	private void RegisterEmoteActions()
	{
	}

	[Token(Token = "0x600099B")]
	[Address(RVA = "0x2380D80", Offset = "0x237F380", VA = "0x182380D80")]
	private void OpenEmoteText(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600099C")]
	[Address(RVA = "0x2380C80", Offset = "0x237F280", VA = "0x182380C80")]
	private void OpenEmoteSticker(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x238A620", Offset = "0x2388C20", VA = "0x18238A620")]
	private void SaveEmoteText(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x238A510", Offset = "0x2388B10", VA = "0x18238A510")]
	private void SaveEmoteSticker(GisketchActionContext context, string sticker)
	{
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x238A3A0", Offset = "0x23889A0", VA = "0x18238A3A0")]
	private void SaveEmoteSettings()
	{
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x238C730", Offset = "0x238AD30", VA = "0x18238C730")]
	private static int SlotIndex(GisketchActionContext context)
	{
		return default(int);
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x238CE10", Offset = "0x238B410", VA = "0x18238CE10")]
	private void StartProfileActions()
	{
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x23821D0", Offset = "0x23807D0", VA = "0x1823821D0")]
	private void OpenProfileScreen()
	{
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x23802C0", Offset = "0x237E8C0", VA = "0x1823802C0")]
	private void OnAccountLoggedIn()
	{
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x23803C0", Offset = "0x237E9C0", VA = "0x1823803C0")]
	private void OnAccountLoggedOut()
	{
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x2384F10", Offset = "0x2383510", VA = "0x182384F10")]
	private void RefreshRemoteProfileAndCharacter(bool rebuildProfileScreen, [Optional][DefaultParameterValue(false)] bool forceRefresh, [Optional] Action<bool, string> onComplete, bool showProfileErrorToast = true)
	{
	}

	[Token(Token = "0x60009A6")]
	[Address(RVA = "0x2384D10", Offset = "0x2383310", VA = "0x182384D10")]
	private void RefreshRemoteCharacterInfo(bool rebuildProfileScreen, [Optional][DefaultParameterValue(false)] bool forceRefresh, [Optional] Action<bool, string> onComplete, bool showProfileErrorToast = true)
	{
	}

	[Token(Token = "0x60009A7")]
	[Address(RVA = "0x237DCA0", Offset = "0x237C2A0", VA = "0x18237DCA0")]
	private static bool HasCachedRemoteIdentity()
	{
		return default(bool);
	}

	[Token(Token = "0x60009A8")]
	[Address(RVA = "0x2382CE0", Offset = "0x23812E0", VA = "0x182382CE0")]
	private void RebuildProfileScreen()
	{
	}

	[Token(Token = "0x60009A9")]
	[Address(RVA = "0x2383970", Offset = "0x2381F70", VA = "0x182383970")]
	private void RefreshCurrentScreenManifest()
	{
	}

	[Token(Token = "0x60009AA")]
	[Address(RVA = "0x2383EA0", Offset = "0x23824A0", VA = "0x182383EA0")]
	private void RefreshProfileState()
	{
	}

	[Token(Token = "0x60009AB")]
	[Address(RVA = "0x237AD80", Offset = "0x2379380", VA = "0x18237AD80")]
	private static string ConnectionStatus(bool linked, bool loading)
	{
		return null;
	}

	[Token(Token = "0x60009AC")]
	[Address(RVA = "0x23826C0", Offset = "0x2380CC0", VA = "0x1823826C0")]
	private static string PatreonConnectionStatus(bool supporter, bool loading)
	{
		return null;
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x23839F0", Offset = "0x2381FF0", VA = "0x1823839F0")]
	private void RefreshEmoteState()
	{
	}

	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x238D320", Offset = "0x238B920", VA = "0x18238D320")]
	private static string StickerSprite(string value)
	{
		return null;
	}

	[Token(Token = "0x60009AF")]
	[Address(RVA = "0x238D220", Offset = "0x238B820", VA = "0x18238D220")]
	private static string StickerLabel(string value)
	{
		return null;
	}

	[Token(Token = "0x60009B0")]
	[Address(RVA = "0x2379C80", Offset = "0x2378280", VA = "0x182379C80")]
	private static string BadgeLabels(JSONNode badges)
	{
		return null;
	}

	[Token(Token = "0x60009B1")]
	[Address(RVA = "0x2387DF0", Offset = "0x23863F0", VA = "0x182387DF0")]
	private void RegisterProfileActions()
	{
	}

	[Token(Token = "0x60009B2")]
	[Address(RVA = "0x2389380", Offset = "0x2387980", VA = "0x182389380")]
	private void SaveAvatar(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60009B3")]
	[Address(RVA = "0x23894C0", Offset = "0x2387AC0", VA = "0x1823894C0")]
	private void SaveBanner(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60009B4")]
	[Address(RVA = "0x2389E30", Offset = "0x2388430", VA = "0x182389E30")]
	private void SaveDetails(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60009B5")]
	[Address(RVA = "0x237E3B0", Offset = "0x237C9B0", VA = "0x18237E3B0")]
	private void ImportLocalBio(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x2389600", Offset = "0x2387C00", VA = "0x182389600")]
	private void SaveCharacter(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x238AA30", Offset = "0x2389030", VA = "0x18238AA30")]
	private void SaveProfile(GisketchActionContext context, string displayName, string bio, string avatarKey, string bannerKey, Dictionary<string, string> socials, string savingMessage)
	{
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x238A840", Offset = "0x2388E40", VA = "0x18238A840")]
	private static void SaveLocalProfile(string displayName, string bio, string avatarKey, string bannerKey, Dictionary<string, string> socials)
	{
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x238A7B0", Offset = "0x2388DB0", VA = "0x18238A7B0")]
	private static void SaveLocalBio(string bio)
	{
	}

	[Token(Token = "0x60009BA")]
	[Address(RVA = "0x238C790", Offset = "0x238AD90", VA = "0x18238C790")]
	private static List<string> SocialLinks(GisketchActionContext context)
	{
		return null;
	}

	[Token(Token = "0x60009BB")]
	[Address(RVA = "0x238D470", Offset = "0x238BA70", VA = "0x18238D470")]
	private static Dictionary<string, string> ToSocials(IEnumerable<string> links)
	{
		return null;
	}

	[Token(Token = "0x60009BC")]
	[Address(RVA = "0x237B4D0", Offset = "0x2379AD0", VA = "0x18237B4D0")]
	private static string[] EffectColors(GisketchActionContext context, string prefix)
	{
		return null;
	}

	[Token(Token = "0x60009BD")]
	[Address(RVA = "0x2382AC0", Offset = "0x23810C0", VA = "0x182382AC0")]
	private void ProfileToast(AottgToastVariant variant, string icon, string title, string content, [Optional] string updateKey)
	{
	}

	[Token(Token = "0x60009BE")]
	[Address(RVA = "0x2382A60", Offset = "0x2381060", VA = "0x182382A60")]
	private static string ProfileText(string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x237EEC0", Offset = "0x237D4C0", VA = "0x18237EEC0")]
	private void LateUpdateSearchShortcuts()
	{
	}

	[Token(Token = "0x60009C0")]
	[Address(RVA = "0x23824C0", Offset = "0x2380AC0", VA = "0x1823824C0")]
	private void OpenSearch(string actionId, string sourceId)
	{
	}

	[Token(Token = "0x60009C1")]
	[Address(RVA = "0x237E8E0", Offset = "0x237CEE0", VA = "0x18237E8E0")]
	private static bool IsSearchShortcutBlocked()
	{
		return default(bool);
	}

	[Token(Token = "0x60009C2")]
	[Address(RVA = "0x2379620", Offset = "0x2377C20", VA = "0x182379620", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60009C3")]
	[Address(RVA = "0x238D040", Offset = "0x238B640", VA = "0x18238D040")]
	private void Start()
	{
	}

	[Token(Token = "0x60009C4")]
	[Address(RVA = "0x237F090", Offset = "0x237D690", VA = "0x18237F090")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60009C5")]
	[Address(RVA = "0x2380440", Offset = "0x237EA40", VA = "0x182380440")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60009C6")]
	[Address(RVA = "0x2387600", Offset = "0x2385C00", VA = "0x182387600")]
	private void RegisterMainActions()
	{
	}

	[Token(Token = "0x60009C7")]
	[Address(RVA = "0x2388170", Offset = "0x2386770", VA = "0x182388170")]
	private void RegisterSettingsActions()
	{
	}

	[Token(Token = "0x60009C8")]
	[Address(RVA = "0x2382600", Offset = "0x2380C00", VA = "0x182382600")]
	private void OpenSettingsScreen()
	{
	}

	[Token(Token = "0x60009C9")]
	[Address(RVA = "0x2382560", Offset = "0x2380B60", VA = "0x182382560")]
	private void OpenSettingsScreen(string returnScreenId)
	{
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x2379B60", Offset = "0x2378160", VA = "0x182379B60")]
	private void BackFromSettings()
	{
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x2387540", Offset = "0x2385B40", VA = "0x182387540")]
	private void RegisterLegacyMain(string actionId, string legacyButtonName)
	{
	}

	[Token(Token = "0x60009CC")]
	[Address(RVA = "0x238AD90", Offset = "0x2389390", VA = "0x18238AD90")]
	private void SaveSettings()
	{
	}

	[Token(Token = "0x60009CD")]
	[Address(RVA = "0x237F4D0", Offset = "0x237DAD0", VA = "0x18237F4D0")]
	private void LoadSettings()
	{
	}

	[Token(Token = "0x60009CE")]
	[Address(RVA = "0x237F310", Offset = "0x237D910", VA = "0x18237F310")]
	private void LoadSettingsConfirmed()
	{
	}

	[Token(Token = "0x60009CF")]
	[Address(RVA = "0x237F3B0", Offset = "0x237D9B0", VA = "0x18237F3B0")]
	private void LoadSettingsFromDisk(bool syncUi)
	{
	}

	[Token(Token = "0x60009D0")]
	[Address(RVA = "0x23792C0", Offset = "0x23778C0", VA = "0x1823792C0")]
	private static void ApplySettings()
	{
	}

	[Token(Token = "0x60009D1")]
	[Address(RVA = "0x2389060", Offset = "0x2387660", VA = "0x182389060")]
	private void ResetSettingsToDefault()
	{
	}

	[Token(Token = "0x60009D2")]
	[Address(RVA = "0x2388EA0", Offset = "0x23874A0", VA = "0x182388EA0")]
	private void ResetSettingsToDefaultConfirmed()
	{
	}

	[Token(Token = "0x60009D3")]
	[Address(RVA = "0x237AD30", Offset = "0x2379330", VA = "0x18237AD30")]
	private void ConfirmSaveBack()
	{
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x237ACA0", Offset = "0x23792A0", VA = "0x18237ACA0")]
	private void ConfirmDiscardBack()
	{
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x237ACF0", Offset = "0x23792F0", VA = "0x18237ACF0")]
	private void ConfirmLoad()
	{
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x237AAC0", Offset = "0x23790C0", VA = "0x18237AAC0")]
	private void ConfirmDefault()
	{
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x238BD40", Offset = "0x238A340", VA = "0x18238BD40")]
	private static SaveableSettingsContainer[] SettingsContainers()
	{
		return null;
	}

	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x238D360", Offset = "0x238B960", VA = "0x18238D360")]
	private void SyncSettingsUiState()
	{
	}

	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x238C020", Offset = "0x238A620", VA = "0x18238C020")]
	private void SettingsToast(AottgToastVariant variant, string icon, string contentKey, string contentFallback, string updateKey)
	{
	}

	[Token(Token = "0x60009DA")]
	[Address(RVA = "0x237B690", Offset = "0x2379C90", VA = "0x18237B690")]
	private void EnsureScreenRouteGuard()
	{
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x237CC90", Offset = "0x237B290", VA = "0x18237CC90")]
	private bool GuardScreenNavigation(string targetScreenId)
	{
		return default(bool);
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x237CF00", Offset = "0x237B500", VA = "0x18237CF00")]
	private bool GuardSettingsScreenNavigation(string targetScreenId)
	{
		return default(bool);
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x238C690", Offset = "0x238AC90", VA = "0x18238C690")]
	private void ShowSettingsLeaveTarget()
	{
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x238ED80", Offset = "0x238D380", VA = "0x18238ED80")]
	private void UpdateSettingsState()
	{
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x237B210", Offset = "0x2379810", VA = "0x18237B210")]
	private static string CurrentSongText()
	{
		return null;
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x238EFE0", Offset = "0x238D5E0", VA = "0x18238EFE0")]
	public AottgGameUiActions()
	{
	}
}
