using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using ApplicationManagers.Credits;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Localization;
using Il2CppDummyDll;
using Settings;
using SimpleJSONFixed;
using TMPro;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000111")]
public sealed class AottgGameUiActions : GisketchController
{
	[Token(Token = "0x400067F")]
	private const string LoginToastKey = "account.login";

	[Token(Token = "0x4000680")]
	private const string RegisterToastKey = "account.register.email";

	[Token(Token = "0x4000681")]
	private const string ForgotPasswordToastKey = "account.forgotPassword";

	[Token(Token = "0x4000682")]
	private const string LogoutToastKey = "account.logout";

	[Token(Token = "0x4000683")]
	private const string RefreshAccountToastKey = "account.refresh";

	[Token(Token = "0x4000684")]
	private const string GoOfflineToastKey = "account.goOffline";

	[Token(Token = "0x4000685")]
	private const string GoOnlineToastKey = "account.goOnline";

	[Token(Token = "0x4000686")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly IGisketchLocalizer AccountLocalizer;

	[Token(Token = "0x4000687")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool _authMethodsUnavailable;

	[Token(Token = "0x4000688")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x31")]
	private bool _lastAuthLoading;

	[Token(Token = "0x4000689")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x32")]
	private bool _lastIdentityLoading;

	[Token(Token = "0x400068A")]
	private const string NetworkToastKey = "network.error";

	[Token(Token = "0x400068B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x33")]
	private bool _profileIdentityLoading;

	[Token(Token = "0x400068C")]
	private const string ProfileSaveToastKey = "profile.save";

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x4061000", Offset = "0x4061000", VA = "0x4061000")]
	private void RegisterAccountFormActions()
	{
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x4061400", Offset = "0x4061400", VA = "0x4061400")]
	private static void SetKeepSignedIn(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x40614A0", Offset = "0x40614A0", VA = "0x40614A0")]
	private static void SetKeepSignedInFromCheckbox(GisketchActionContext context, string id)
	{
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x4061550", Offset = "0x4061550", VA = "0x4061550")]
	private static bool CheckboxValue(GisketchActionContext context, string id, bool fallback)
	{
		return default(bool);
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x4061680", Offset = "0x4061680", VA = "0x4061680")]
	private void RegisterWithEmail(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x40621C0", Offset = "0x40621C0", VA = "0x40621C0")]
	private void ForgotPassword(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x40624F0", Offset = "0x40624F0", VA = "0x40624F0")]
	private void Logout(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x4062690", Offset = "0x4062690", VA = "0x4062690")]
	private void RefreshAccount(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x40633B0", Offset = "0x40633B0", VA = "0x40633B0")]
	private void GoOffline(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x4063610", Offset = "0x4063610", VA = "0x4063610")]
	private void GoOnline(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x40638A0", Offset = "0x40638A0", VA = "0x40638A0")]
	private static void OpenAccountDetails()
	{
	}

	[Token(Token = "0x6000595")]
	[Address(RVA = "0x4063A20", Offset = "0x4063A20", VA = "0x4063A20")]
	private void ResetAccountCtas()
	{
	}

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x4063D70", Offset = "0x4063D70", VA = "0x4063D70")]
	private void SetAccountCta(string key, string text)
	{
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x4062100", Offset = "0x4062100", VA = "0x4062100")]
	private bool TryBeginAccountOperation(string ctaKey, string textKey, string fallback)
	{
		return default(bool);
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0x4063E70", Offset = "0x4063E70", VA = "0x4063E70")]
	private bool TryBeginAccountOperation(string textKey, string fallback)
	{
		return default(bool);
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x4063DD0", Offset = "0x4063DD0", VA = "0x4063DD0")]
	private bool TryBeginAccountOperation(string message)
	{
		return default(bool);
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x4063570", Offset = "0x4063570", VA = "0x4063570")]
	private void EndAccountOperation()
	{
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x4063ED0", Offset = "0x4063ED0", VA = "0x4063ED0")]
	private void RegisterAccountActions()
	{
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x4064050", Offset = "0x4064050", VA = "0x4064050")]
	private void AddAccountListeners()
	{
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x4064150", Offset = "0x4064150", VA = "0x4064150")]
	private void RemoveAccountListeners()
	{
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x4064250", Offset = "0x4064250", VA = "0x4064250")]
	private void StartAccountActions()
	{
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x40642F0", Offset = "0x40642F0", VA = "0x40642F0")]
	private void LateUpdateAccountActions()
	{
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x40658E0", Offset = "0x40658E0", VA = "0x40658E0")]
	private void OpenLoginDialog()
	{
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x4065B20", Offset = "0x4065B20", VA = "0x4065B20")]
	private void RefreshAuthMethodsForDialog()
	{
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x4065920", Offset = "0x4065920", VA = "0x4065920")]
	private void ShowAccountDialog(string dialogId, bool requireEmailPassword)
	{
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x4065C60", Offset = "0x4065C60", VA = "0x4065C60")]
	private void LoginWithEmail(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x40660E0", Offset = "0x40660E0", VA = "0x40660E0")]
	private void LoginWithOAuth(string provider)
	{
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x40629C0", Offset = "0x40629C0", VA = "0x40629C0")]
	private void RefreshAccountState()
	{
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x4064520", Offset = "0x4064520", VA = "0x4064520")]
	private static bool IsAccountAuthLoading()
	{
		return default(bool);
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x4064650", Offset = "0x4064650", VA = "0x4064650")]
	private bool IsAccountIdentityLoading()
	{
		return default(bool);
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x40662C0", Offset = "0x40662C0", VA = "0x40662C0")]
	private static string InGameDisplayName()
	{
		return null;
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x40662D0", Offset = "0x40662D0", VA = "0x40662D0")]
	private static string AuthDisplayName()
	{
		return null;
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x40663E0", Offset = "0x40663E0", VA = "0x40663E0")]
	private void AttachTruncation(string id)
	{
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x4061D60", Offset = "0x4061D60", VA = "0x4061D60")]
	private static bool LooksLikeEmail(string email)
	{
		return default(bool);
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x4061C80", Offset = "0x4061C80", VA = "0x4061C80")]
	private static string FindInput(GisketchActionContext context, string id)
	{
		return null;
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x40666C0", Offset = "0x40666C0", VA = "0x40666C0")]
	private static void ClearInput(GisketchActionContext context, string id)
	{
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x4066590", Offset = "0x4066590", VA = "0x4066590")]
	private static TMP_InputField Input(GisketchActionContext context, string id)
	{
		return null;
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x4065BB0", Offset = "0x4065BB0", VA = "0x4065BB0")]
	private void CloseTopOverlay()
	{
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x4061FC0", Offset = "0x4061FC0", VA = "0x4061FC0")]
	private void AccountToast(AottgToastVariant variant, string icon, string titleKey, string titleFallback, string content, [Optional] string updateKey)
	{
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x40667B0", Offset = "0x40667B0", VA = "0x40667B0")]
	private static string ErrorText(string error)
	{
		return null;
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x4061EB0", Offset = "0x4061EB0", VA = "0x4061EB0")]
	private static string AccountText(string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x4066D80", Offset = "0x4066D80", VA = "0x4066D80")]
	private void RegisterCreditsActions()
	{
	}

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x4066E10", Offset = "0x4066E10", VA = "0x4066E10")]
	private void OpenCreditsScreen()
	{
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x4066ED0", Offset = "0x4066ED0", VA = "0x4066ED0")]
	private void RefreshCredits(bool forceRefresh)
	{
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x4066F40", Offset = "0x4066F40", VA = "0x4066F40")]
	private void ApplyCreditsResult(AottgCreditsResult result)
	{
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x40671F0", Offset = "0x40671F0", VA = "0x40671F0")]
	private void ApplyCreditsState(AottgCreditsResult result, bool hasCredits, bool loading, bool failedNoCache)
	{
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x40674C0", Offset = "0x40674C0", VA = "0x40674C0")]
	private static string CreditsErrorText(string error)
	{
		return null;
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x4067580", Offset = "0x4067580", VA = "0x4067580")]
	private void AddNetworkListeners()
	{
	}

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x40675F0", Offset = "0x40675F0", VA = "0x40675F0")]
	private void RemoveNetworkListeners()
	{
	}

	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x4067660", Offset = "0x4067660", VA = "0x4067660")]
	private void ShowNetworkErrorToast(string error)
	{
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x4067730", Offset = "0x4067730", VA = "0x4067730")]
	private void RegisterEmoteActions()
	{
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x40678D0", Offset = "0x40678D0", VA = "0x40678D0")]
	private void OpenEmoteText(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x4067A20", Offset = "0x4067A20", VA = "0x4067A20")]
	private void OpenEmoteSticker(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x4067B10", Offset = "0x4067B10", VA = "0x4067B10")]
	private void SaveEmoteText(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x4067E00", Offset = "0x4067E00", VA = "0x4067E00")]
	private void SaveEmoteSticker(GisketchActionContext context, string sticker)
	{
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x4067CA0", Offset = "0x4067CA0", VA = "0x4067CA0")]
	private void SaveEmoteSettings()
	{
	}

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x40679C0", Offset = "0x40679C0", VA = "0x40679C0")]
	private static int SlotIndex(GisketchActionContext context)
	{
		return default(int);
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x4068320", Offset = "0x4068320", VA = "0x4068320")]
	private void StartProfileActions()
	{
	}

	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x4068550", Offset = "0x4068550", VA = "0x4068550")]
	private void OpenProfileScreen()
	{
	}

	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x4068840", Offset = "0x4068840", VA = "0x4068840")]
	private void OnAccountLoggedIn()
	{
	}

	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x4068930", Offset = "0x4068930", VA = "0x4068930")]
	private void OnAccountLoggedOut()
	{
	}

	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x4063130", Offset = "0x4063130", VA = "0x4063130")]
	private void RefreshRemoteProfileAndCharacter(bool rebuildProfileScreen, [Optional][DefaultParameterValue(false)] bool forceRefresh, [Optional] Action<bool, string> onComplete, bool showProfileErrorToast = true)
	{
	}

	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x4068B90", Offset = "0x4068B90", VA = "0x4068B90")]
	private void RefreshRemoteCharacterInfo(bool rebuildProfileScreen, [Optional][DefaultParameterValue(false)] bool forceRefresh, [Optional] Action<bool, string> onComplete, bool showProfileErrorToast = true)
	{
	}

	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x4068A40", Offset = "0x4068A40", VA = "0x4068A40")]
	private static bool HasCachedRemoteIdentity()
	{
		return default(bool);
	}

	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x4068950", Offset = "0x4068950", VA = "0x4068950")]
	private void RebuildProfileScreen()
	{
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x4068DE0", Offset = "0x4068DE0", VA = "0x4068DE0")]
	private void RefreshCurrentScreenManifest()
	{
	}

	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x40646A0", Offset = "0x40646A0", VA = "0x40646A0")]
	private void RefreshProfileState()
	{
	}

	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x4068EC0", Offset = "0x4068EC0", VA = "0x4068EC0")]
	private static string ConnectionStatus(bool linked, bool loading)
	{
		return null;
	}

	[Token(Token = "0x60005CE")]
	[Address(RVA = "0x4068E50", Offset = "0x4068E50", VA = "0x4068E50")]
	private static string PatreonConnectionStatus(bool supporter, bool loading)
	{
		return null;
	}

	[Token(Token = "0x60005CF")]
	[Address(RVA = "0x4067F10", Offset = "0x4067F10", VA = "0x4067F10")]
	private void RefreshEmoteState()
	{
	}

	[Token(Token = "0x60005D0")]
	[Address(RVA = "0x40694D0", Offset = "0x40694D0", VA = "0x40694D0")]
	private static string StickerSprite(string value)
	{
		return null;
	}

	[Token(Token = "0x60005D1")]
	[Address(RVA = "0x4069450", Offset = "0x4069450", VA = "0x4069450")]
	private static string StickerLabel(string value)
	{
		return null;
	}

	[Token(Token = "0x60005D2")]
	[Address(RVA = "0x4068F30", Offset = "0x4068F30", VA = "0x4068F30")]
	private static string BadgeLabels(JSONNode badges)
	{
		return null;
	}

	[Token(Token = "0x60005D3")]
	[Address(RVA = "0x4069510", Offset = "0x4069510", VA = "0x4069510")]
	private void RegisterProfileActions()
	{
	}

	[Token(Token = "0x60005D4")]
	[Address(RVA = "0x40696D0", Offset = "0x40696D0", VA = "0x40696D0")]
	private void SaveAvatar(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60005D5")]
	[Address(RVA = "0x4069B40", Offset = "0x4069B40", VA = "0x4069B40")]
	private void SaveBanner(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x4069BF0", Offset = "0x4069BF0", VA = "0x4069BF0")]
	private void SaveDetails(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x406A5E0", Offset = "0x406A5E0", VA = "0x406A5E0")]
	private void SaveCharacter(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x4069780", Offset = "0x4069780", VA = "0x4069780")]
	private void SaveProfile(GisketchActionContext context, string displayName, string bio, string avatarKey, string bannerKey, Dictionary<string, string> socials, string savingMessage)
	{
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x406AE70", Offset = "0x406AE70", VA = "0x406AE70")]
	private static void SaveLocalProfile(string displayName, string bio, string avatarKey, string bannerKey, Dictionary<string, string> socials)
	{
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x4069F30", Offset = "0x4069F30", VA = "0x4069F30")]
	private static List<string> SocialLinks(GisketchActionContext context)
	{
		return null;
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x406A190", Offset = "0x406A190", VA = "0x406A190")]
	private static Dictionary<string, string> ToSocials(IEnumerable<string> links)
	{
		return null;
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x406AD40", Offset = "0x406AD40", VA = "0x406AD40")]
	private static string[] EffectColors(GisketchActionContext context, string prefix)
	{
		return null;
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x4068270", Offset = "0x4068270", VA = "0x4068270")]
	private void ProfileToast(AottgToastVariant variant, string icon, string title, string content, [Optional] string updateKey)
	{
	}

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x406B0A0", Offset = "0x406B0A0", VA = "0x406B0A0", Slot = "5")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x406B8B0", Offset = "0x406B8B0", VA = "0x406B8B0")]
	private void Start()
	{
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x406B970", Offset = "0x406B970", VA = "0x406B970")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x406BB10", Offset = "0x406BB10", VA = "0x406BB10")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x406B140", Offset = "0x406B140", VA = "0x406B140")]
	private void RegisterMainActions()
	{
	}

	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x406B570", Offset = "0x406B570", VA = "0x406B570")]
	private void RegisterSettingsActions()
	{
	}

	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x406BB80", Offset = "0x406BB80", VA = "0x406BB80")]
	private void RegisterLegacyMain(string actionId, string legacyButtonName)
	{
	}

	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x406BC60", Offset = "0x406BC60", VA = "0x406BC60")]
	private static void SaveSettings()
	{
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x406C0A0", Offset = "0x406C0A0", VA = "0x406C0A0")]
	private static void LoadSettings()
	{
	}

	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x406BF90", Offset = "0x406BF90", VA = "0x406BF90")]
	private static void ApplySettings()
	{
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x406C180", Offset = "0x406C180", VA = "0x406C180")]
	private static void ResetSettingsToDefault()
	{
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x406BD40", Offset = "0x406BD40", VA = "0x406BD40")]
	private static SaveableSettingsContainer[] SettingsContainers()
	{
		return null;
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x406B980", Offset = "0x406B980", VA = "0x406B980")]
	private void LateUpdateSearchPaletteShortcut()
	{
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x406C2C0", Offset = "0x406C2C0", VA = "0x406C2C0")]
	private static bool IsSearchPaletteShortcutBlocked()
	{
		return default(bool);
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x406C560", Offset = "0x406C560", VA = "0x406C560")]
	public AottgGameUiActions()
	{
	}
}
