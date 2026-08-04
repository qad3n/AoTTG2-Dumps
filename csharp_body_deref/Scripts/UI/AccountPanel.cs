// ==================== AoTTG2 cross-reference ====================
// Type: UI.AccountPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/AccountPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200067A")]
internal class AccountPanel : MonoBehaviour
{
	[Token(Token = "0x200067B")]
	private enum Tab
	{
		[Token(Token = "0x4001FE5")]
		SignUp,
		[Token(Token = "0x4001FE6")]
		Login,
		[Token(Token = "0x4001FE7")]
		ForgotPassword
	}

	[Token(Token = "0x4001FAB")]
	private const float PanelWidth = 450f;

	[Token(Token = "0x4001FAC")]
	private const float TitleWidth = 130f;

	[Token(Token = "0x4001FAD")]
	private const float LabelWidthToggle = 180f;

	[Token(Token = "0x4001FAE")]
	private const float InputHeight = 42f;

	[Token(Token = "0x4001FAF")]
	private const float ActionButtonHeight = 40f;

	[Token(Token = "0x4001FB0")]
	private const float CollapseButtonHeight = 22f;

	[Token(Token = "0x4001FB1")]
	private const int InputFontSize = 27;

	[Token(Token = "0x4001FB2")]
	private const int InputFontSizeSmall = 22;

	[Token(Token = "0x4001FB3")]
	private const int TabFontSize = 33;

	[Token(Token = "0x4001FB4")]
	private const int ActionButtonFontSize = 30;

	[Token(Token = "0x4001FB5")]
	private const int CollapseFontSize = 16;

	[Token(Token = "0x4001FB6")]
	private const int LoggedInLabelFontSize = 27;

	[Token(Token = "0x4001FB7")]
	private const int OAuthOnlyButtonFontSize = 18;

	[Token(Token = "0x4001FB8")]
	private const int StatusFontSize = 21;

	[Token(Token = "0x4001FB9")]
	private const string ThemePanel = "DefaultPanel";

	[Token(Token = "0x4001FBA")]
	[FieldOffset(Offset = "0x20")]
	private StringSetting _signupDisplayName;

	[Token(Token = "0x4001FBB")]
	[FieldOffset(Offset = "0x28")]
	private StringSetting _signupEmail;

	[Token(Token = "0x4001FBC")]
	[FieldOffset(Offset = "0x30")]
	private StringSetting _signupPassword;

	[Token(Token = "0x4001FBD")]
	[FieldOffset(Offset = "0x38")]
	private StringSetting _loginEmail;

	[Token(Token = "0x4001FBE")]
	[FieldOffset(Offset = "0x40")]
	private StringSetting _loginPassword;

	[Token(Token = "0x4001FBF")]
	[FieldOffset(Offset = "0x48")]
	private BoolSetting _keepSignedIn;

	[Token(Token = "0x4001FC0")]
	[FieldOffset(Offset = "0x50")]
	private StringSetting _forgotPasswordEmail;

	[Token(Token = "0x4001FC1")]
	[FieldOffset(Offset = "0x58")]
	private GameObject _content;

	[Token(Token = "0x4001FC2")]
	[FieldOffset(Offset = "0x60")]
	private GameObject _signupContent;

	[Token(Token = "0x4001FC3")]
	[FieldOffset(Offset = "0x68")]
	private GameObject _loginContent;

	[Token(Token = "0x4001FC4")]
	[FieldOffset(Offset = "0x70")]
	private GameObject _forgotPasswordContent;

	[Token(Token = "0x4001FC5")]
	[FieldOffset(Offset = "0x78")]
	private GameObject _loggedInContent;

	[Token(Token = "0x4001FC6")]
	[FieldOffset(Offset = "0x80")]
	private GameObject _signupEmailSection;

	[Token(Token = "0x4001FC7")]
	[FieldOffset(Offset = "0x88")]
	private GameObject _loginOAuthOnlySection;

	[Token(Token = "0x4001FC8")]
	[FieldOffset(Offset = "0x90")]
	private GameObject _loginOAuthOnlyButtons;

	[Token(Token = "0x4001FC9")]
	[FieldOffset(Offset = "0x98")]
	private GameObject _loginOAuthOnlyDiscordButton;

	[Token(Token = "0x4001FCA")]
	[FieldOffset(Offset = "0xA0")]
	private GameObject _loginOAuthOnlyGoogleButton;

	[Token(Token = "0x4001FCB")]
	[FieldOffset(Offset = "0xA8")]
	private Text _loginOAuthOnlyMessage;

	[Token(Token = "0x4001FCC")]
	[FieldOffset(Offset = "0xB0")]
	private GameObject _loginEmailSection;

	[Token(Token = "0x4001FCD")]
	[FieldOffset(Offset = "0xB8")]
	private GameObject _signupTabButton;

	[Token(Token = "0x4001FCE")]
	[FieldOffset(Offset = "0xC0")]
	private GameObject _loginTabButton;

	[Token(Token = "0x4001FCF")]
	[FieldOffset(Offset = "0xC8")]
	private GameObject _tabSeparator;

	[Token(Token = "0x4001FD0")]
	[FieldOffset(Offset = "0xD0")]
	private GameObject _signupOAuthDivider;

	[Token(Token = "0x4001FD1")]
	[FieldOffset(Offset = "0xD8")]
	private GameObject _signupOAuthRow;

	[Token(Token = "0x4001FD2")]
	[FieldOffset(Offset = "0xE0")]
	private GameObject _signupDiscordButton;

	[Token(Token = "0x4001FD3")]
	[FieldOffset(Offset = "0xE8")]
	private GameObject _signupGoogleButton;

	[Token(Token = "0x4001FD4")]
	[FieldOffset(Offset = "0xF0")]
	private GameObject _loginOAuthDivider;

	[Token(Token = "0x4001FD5")]
	[FieldOffset(Offset = "0xF8")]
	private GameObject _loginOAuthRow;

	[Token(Token = "0x4001FD6")]
	[FieldOffset(Offset = "0x100")]
	private GameObject _loginDiscordButton;

	[Token(Token = "0x4001FD7")]
	[FieldOffset(Offset = "0x108")]
	private GameObject _loginGoogleButton;

	[Token(Token = "0x4001FD8")]
	[FieldOffset(Offset = "0x110")]
	private GameObject _oauthCancelButton;

	[Token(Token = "0x4001FD9")]
	[FieldOffset(Offset = "0x118")]
	private Text _statusLabel;

	[Token(Token = "0x4001FDA")]
	[FieldOffset(Offset = "0x120")]
	private Text _loggedInUserLabel;

	[Token(Token = "0x4001FDB")]
	[FieldOffset(Offset = "0x128")]
	private Text _onlineToggleButtonLabel;

	[Token(Token = "0x4001FDC")]
	[FieldOffset(Offset = "0x130")]
	private Text _collapseButtonLabel;

	[Token(Token = "0x4001FDD")]
	[FieldOffset(Offset = "0x138")]
	private Text _collapsedUserLabel;

	[Token(Token = "0x4001FDE")]
	[FieldOffset(Offset = "0x140")]
	private RectTransform _rect;

	[Token(Token = "0x4001FDF")]
	[FieldOffset(Offset = "0x148")]
	private Tab _currentTab;

	[Token(Token = "0x4001FE0")]
	[FieldOffset(Offset = "0x14C")]
	private bool _collapsed;

	[Token(Token = "0x4001FE1")]
	[FieldOffset(Offset = "0x14D")]
	private bool _userToggledCollapse;

	[Token(Token = "0x4001FE2")]
	[FieldOffset(Offset = "0x14E")]
	private bool _busy;

	[Token(Token = "0x4001FE3")]
	[FieldOffset(Offset = "0x14F")]
	private bool _oauthInProgress;

	[Token(Token = "0x60040E9")]
	[Address(RVA = "0x42F1080", Offset = "0x42F1080", VA = "0x42F1080")]
	public static AccountPanel Create(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x60040EA")]
	[Address(RVA = "0x42F1200", Offset = "0x42F1200", VA = "0x42F1200")]
	private void Build()
	{
	}

	[Token(Token = "0x60040EB")]
	[Address(RVA = "0x42F27C0", Offset = "0x42F27C0", VA = "0x42F27C0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60040EC")]
	[Address(RVA = "0x42F16A0", Offset = "0x42F16A0", VA = "0x42F16A0")]
	private void BuildContent()
	{
	}

	[Token(Token = "0x60040ED")]
	[Address(RVA = "0x42F28C0", Offset = "0x42F28C0", VA = "0x42F28C0")]
	private void BuildTabs(Transform parent)
	{
	}

	[Token(Token = "0x60040EE")]
	[Address(RVA = "0x42F2AD0", Offset = "0x42F2AD0", VA = "0x42F2AD0")]
	private GameObject BuildSignUpForm(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x60040EF")]
	[Address(RVA = "0x42F3040", Offset = "0x42F3040", VA = "0x42F3040")]
	private GameObject BuildLoginForm(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x60040F0")]
	[Address(RVA = "0x42F3950", Offset = "0x42F3950", VA = "0x42F3950")]
	private GameObject BuildForgotPasswordForm(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x60040F1")]
	[Address(RVA = "0x42F3C80", Offset = "0x42F3C80", VA = "0x42F3C80")]
	private GameObject BuildLoggedInView(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x60040F2")]
	[Address(RVA = "0x42F1AA0", Offset = "0x42F1AA0", VA = "0x42F1AA0")]
	private void BuildCollapsedUserLabel()
	{
	}

	[Token(Token = "0x60040F3")]
	[Address(RVA = "0x42F1B90", Offset = "0x42F1B90", VA = "0x42F1B90")]
	private void BuildCollapseBar()
	{
	}

	[Token(Token = "0x60040F4")]
	[Address(RVA = "0x42F4400", Offset = "0x42F4400", VA = "0x42F4400")]
	private void BuildOAuthRow(Transform parent, out GameObject divider, out GameObject row, out GameObject discordBtn, out GameObject googleBtn)
	{
	}

	[Token(Token = "0x60040F5")]
	[Address(RVA = "0x42F5120", Offset = "0x42F5120", VA = "0x42F5120")]
	private static InputField GetInput(GameObject inputSettingGO)
	{
		return null;
	}

	[Token(Token = "0x60040F6")]
	[Address(RVA = "0x42F4060", Offset = "0x42F4060", VA = "0x42F4060")]
	private static void ApplySubtleButtonStyle(GameObject buttonGO)
	{
	}

	[Token(Token = "0x60040F7")]
	[Address(RVA = "0x42F5590", Offset = "0x42F5590", VA = "0x42F5590")]
	private static void AddOAuthButtonIcon(GameObject buttonGO, string resourcePath)
	{
	}

	[Token(Token = "0x60040F8")]
	[Address(RVA = "0x42F5EE0", Offset = "0x42F5EE0", VA = "0x42F5EE0")]
	private static void ConfigureOAuthOnlyButtonText(GameObject buttonGO)
	{
	}

	[Token(Token = "0x60040F9")]
	[Address(RVA = "0x42F4370", Offset = "0x42F4370", VA = "0x42F4370")]
	private static void ConfigurePasswordInput(GameObject inputSettingGO)
	{
	}

	[Token(Token = "0x60040FA")]
	[Address(RVA = "0x42F61F0", Offset = "0x42F61F0", VA = "0x42F61F0")]
	private static void AddPasswordToggle(InputField field)
	{
	}

	[Token(Token = "0x60040FB")]
	[Address(RVA = "0x42F51B0", Offset = "0x42F51B0", VA = "0x42F51B0")]
	private static void SetupTabNavigation(InputField[] fields, Selectable submit)
	{
	}

	[Token(Token = "0x60040FC")]
	[Address(RVA = "0x42F1D20", Offset = "0x42F1D20", VA = "0x42F1D20")]
	private void RefreshState()
	{
	}

	[Token(Token = "0x60040FD")]
	[Address(RVA = "0x42F6C60", Offset = "0x42F6C60", VA = "0x42F6C60")]
	private void SetTab(Tab tab)
	{
	}

	[Token(Token = "0x60040FE")]
	[Address(RVA = "0x42F6CB0", Offset = "0x42F6CB0", VA = "0x42F6CB0")]
	private void ToggleCollapsed()
	{
	}

	[Token(Token = "0x60040FF")]
	[Address(RVA = "0x42F6CD0", Offset = "0x42F6CD0", VA = "0x42F6CD0")]
	private void HandleLoggedIn()
	{
	}

	[Token(Token = "0x6004100")]
	[Address(RVA = "0x42F6E20", Offset = "0x42F6E20", VA = "0x42F6E20")]
	private void HandleLoggedOut()
	{
	}

	[Token(Token = "0x6004101")]
	[Address(RVA = "0x42F6E40", Offset = "0x42F6E40", VA = "0x42F6E40")]
	private void HandleAuthMethodsChanged()
	{
	}

	[Token(Token = "0x6004102")]
	[Address(RVA = "0x42F6E50", Offset = "0x42F6E50", VA = "0x42F6E50")]
	private void OnRegisterClick()
	{
	}

	[Token(Token = "0x6004103")]
	[Address(RVA = "0x42F7020", Offset = "0x42F7020", VA = "0x42F7020")]
	private void OnLoginClick()
	{
	}

	[Token(Token = "0x6004104")]
	[Address(RVA = "0x42F71B0", Offset = "0x42F71B0", VA = "0x42F71B0")]
	private void OnForgotPasswordClick()
	{
	}

	[Token(Token = "0x6004105")]
	[Address(RVA = "0x42F72E0", Offset = "0x42F72E0", VA = "0x42F72E0")]
	private void OnWebLoginClick()
	{
	}

	[Token(Token = "0x6004106")]
	[Address(RVA = "0x42F7370", Offset = "0x42F7370", VA = "0x42F7370")]
	private void OnRefreshLoginClick()
	{
	}

	[Token(Token = "0x6004107")]
	[Address(RVA = "0x42F7440", Offset = "0x42F7440", VA = "0x42F7440")]
	private void OnOAuthClick(string provider)
	{
	}

	[Token(Token = "0x6004108")]
	[Address(RVA = "0x42F75B0", Offset = "0x42F75B0", VA = "0x42F75B0")]
	private void OnOAuthCancelClick()
	{
	}

	[Token(Token = "0x6004109")]
	[Address(RVA = "0x42F7610", Offset = "0x42F7610", VA = "0x42F7610")]
	private void OnOAuthComplete(bool success, string error)
	{
	}

	[Token(Token = "0x600410A")]
	[Address(RVA = "0x42F7BD0", Offset = "0x42F7BD0", VA = "0x42F7BD0")]
	private void OnForgotPasswordComplete(bool success, string error)
	{
	}

	[Token(Token = "0x600410B")]
	[Address(RVA = "0x42F7C30", Offset = "0x42F7C30", VA = "0x42F7C30")]
	private void OnLogoutClick()
	{
	}

	[Token(Token = "0x600410C")]
	[Address(RVA = "0x42F7D00", Offset = "0x42F7D00", VA = "0x42F7D00")]
	private void OnOnlineToggleClick()
	{
	}

	[Token(Token = "0x600410D")]
	[Address(RVA = "0x42F7EA0", Offset = "0x42F7EA0", VA = "0x42F7EA0")]
	private void OnRegisterComplete(bool success, string error)
	{
	}

	[Token(Token = "0x600410E")]
	[Address(RVA = "0x42F8140", Offset = "0x42F8140", VA = "0x42F8140")]
	private void OnAuthComplete(bool success, string error)
	{
	}

	[Token(Token = "0x600410F")]
	[Address(RVA = "0x42F6D10", Offset = "0x42F6D10", VA = "0x42F6D10")]
	private void ShowStatus(string message)
	{
	}

	[Token(Token = "0x6004110")]
	[Address(RVA = "0x42F6C90", Offset = "0x42F6C90", VA = "0x42F6C90")]
	private void ClearStatus()
	{
	}

	[Token(Token = "0x6004111")]
	[Address(RVA = "0x42F76E0", Offset = "0x42F76E0", VA = "0x42F76E0")]
	private static string FormatError(string error)
	{
		return null;
	}

	[Token(Token = "0x6004112")]
	[Address(RVA = "0x42F8210", Offset = "0x42F8210", VA = "0x42F8210")]
	public AccountPanel()
	{
	}
}
