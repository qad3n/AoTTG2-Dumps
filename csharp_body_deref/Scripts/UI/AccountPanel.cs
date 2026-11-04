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

[Token(Token = "0x20007D5")]
internal class AccountPanel : MonoBehaviour
{
	[Token(Token = "0x20007D6")]
	private enum Tab
	{
		[Token(Token = "0x40027BD")]
		SignUp,
		[Token(Token = "0x40027BE")]
		Login,
		[Token(Token = "0x40027BF")]
		ForgotPassword
	}

	[Token(Token = "0x4002783")]
	private const float PanelWidth = 450f;

	[Token(Token = "0x4002784")]
	private const float TitleWidth = 130f;

	[Token(Token = "0x4002785")]
	private const float LabelWidthToggle = 180f;

	[Token(Token = "0x4002786")]
	private const float InputHeight = 42f;

	[Token(Token = "0x4002787")]
	private const float ActionButtonHeight = 40f;

	[Token(Token = "0x4002788")]
	private const float CollapseButtonHeight = 22f;

	[Token(Token = "0x4002789")]
	private const int InputFontSize = 27;

	[Token(Token = "0x400278A")]
	private const int InputFontSizeSmall = 22;

	[Token(Token = "0x400278B")]
	private const int TabFontSize = 33;

	[Token(Token = "0x400278C")]
	private const int ActionButtonFontSize = 30;

	[Token(Token = "0x400278D")]
	private const int CollapseFontSize = 16;

	[Token(Token = "0x400278E")]
	private const int LoggedInLabelFontSize = 27;

	[Token(Token = "0x400278F")]
	private const int OAuthOnlyButtonFontSize = 18;

	[Token(Token = "0x4002790")]
	private const int StatusFontSize = 21;

	[Token(Token = "0x4002791")]
	private const string ThemePanel = "DefaultPanel";

	[Token(Token = "0x4002792")]
	[FieldOffset(Offset = "0x20")]
	private StringSetting _signupDisplayName;

	[Token(Token = "0x4002793")]
	[FieldOffset(Offset = "0x28")]
	private StringSetting _signupEmail;

	[Token(Token = "0x4002794")]
	[FieldOffset(Offset = "0x30")]
	private StringSetting _signupPassword;

	[Token(Token = "0x4002795")]
	[FieldOffset(Offset = "0x38")]
	private StringSetting _loginEmail;

	[Token(Token = "0x4002796")]
	[FieldOffset(Offset = "0x40")]
	private StringSetting _loginPassword;

	[Token(Token = "0x4002797")]
	[FieldOffset(Offset = "0x48")]
	private BoolSetting _keepSignedIn;

	[Token(Token = "0x4002798")]
	[FieldOffset(Offset = "0x50")]
	private StringSetting _forgotPasswordEmail;

	[Token(Token = "0x4002799")]
	[FieldOffset(Offset = "0x58")]
	private GameObject _content;

	[Token(Token = "0x400279A")]
	[FieldOffset(Offset = "0x60")]
	private GameObject _signupContent;

	[Token(Token = "0x400279B")]
	[FieldOffset(Offset = "0x68")]
	private GameObject _loginContent;

	[Token(Token = "0x400279C")]
	[FieldOffset(Offset = "0x70")]
	private GameObject _forgotPasswordContent;

	[Token(Token = "0x400279D")]
	[FieldOffset(Offset = "0x78")]
	private GameObject _loggedInContent;

	[Token(Token = "0x400279E")]
	[FieldOffset(Offset = "0x80")]
	private GameObject _signupEmailSection;

	[Token(Token = "0x400279F")]
	[FieldOffset(Offset = "0x88")]
	private GameObject _loginOAuthOnlySection;

	[Token(Token = "0x40027A0")]
	[FieldOffset(Offset = "0x90")]
	private GameObject _loginOAuthOnlyButtons;

	[Token(Token = "0x40027A1")]
	[FieldOffset(Offset = "0x98")]
	private GameObject _loginOAuthOnlyDiscordButton;

	[Token(Token = "0x40027A2")]
	[FieldOffset(Offset = "0xA0")]
	private GameObject _loginOAuthOnlyGoogleButton;

	[Token(Token = "0x40027A3")]
	[FieldOffset(Offset = "0xA8")]
	private Text _loginOAuthOnlyMessage;

	[Token(Token = "0x40027A4")]
	[FieldOffset(Offset = "0xB0")]
	private GameObject _loginEmailSection;

	[Token(Token = "0x40027A5")]
	[FieldOffset(Offset = "0xB8")]
	private GameObject _signupTabButton;

	[Token(Token = "0x40027A6")]
	[FieldOffset(Offset = "0xC0")]
	private GameObject _loginTabButton;

	[Token(Token = "0x40027A7")]
	[FieldOffset(Offset = "0xC8")]
	private GameObject _tabSeparator;

	[Token(Token = "0x40027A8")]
	[FieldOffset(Offset = "0xD0")]
	private GameObject _signupOAuthDivider;

	[Token(Token = "0x40027A9")]
	[FieldOffset(Offset = "0xD8")]
	private GameObject _signupOAuthRow;

	[Token(Token = "0x40027AA")]
	[FieldOffset(Offset = "0xE0")]
	private GameObject _signupDiscordButton;

	[Token(Token = "0x40027AB")]
	[FieldOffset(Offset = "0xE8")]
	private GameObject _signupGoogleButton;

	[Token(Token = "0x40027AC")]
	[FieldOffset(Offset = "0xF0")]
	private GameObject _loginOAuthDivider;

	[Token(Token = "0x40027AD")]
	[FieldOffset(Offset = "0xF8")]
	private GameObject _loginOAuthRow;

	[Token(Token = "0x40027AE")]
	[FieldOffset(Offset = "0x100")]
	private GameObject _loginDiscordButton;

	[Token(Token = "0x40027AF")]
	[FieldOffset(Offset = "0x108")]
	private GameObject _loginGoogleButton;

	[Token(Token = "0x40027B0")]
	[FieldOffset(Offset = "0x110")]
	private GameObject _oauthCancelButton;

	[Token(Token = "0x40027B1")]
	[FieldOffset(Offset = "0x118")]
	private Text _statusLabel;

	[Token(Token = "0x40027B2")]
	[FieldOffset(Offset = "0x120")]
	private Text _loggedInUserLabel;

	[Token(Token = "0x40027B3")]
	[FieldOffset(Offset = "0x128")]
	private Text _onlineToggleButtonLabel;

	[Token(Token = "0x40027B4")]
	[FieldOffset(Offset = "0x130")]
	private Text _collapseButtonLabel;

	[Token(Token = "0x40027B5")]
	[FieldOffset(Offset = "0x138")]
	private Text _collapsedUserLabel;

	[Token(Token = "0x40027B6")]
	[FieldOffset(Offset = "0x140")]
	private RectTransform _rect;

	[Token(Token = "0x40027B7")]
	[FieldOffset(Offset = "0x148")]
	private Tab _currentTab;

	[Token(Token = "0x40027B8")]
	[FieldOffset(Offset = "0x14C")]
	private bool _collapsed;

	[Token(Token = "0x40027B9")]
	[FieldOffset(Offset = "0x14D")]
	private bool _userToggledCollapse;

	[Token(Token = "0x40027BA")]
	[FieldOffset(Offset = "0x14E")]
	private bool _busy;

	[Token(Token = "0x40027BB")]
	[FieldOffset(Offset = "0x14F")]
	private bool _oauthInProgress;

	[Token(Token = "0x6004BDE")]
	[Address(RVA = "0x2274120", Offset = "0x2272720", VA = "0x182274120")]
	public static AccountPanel Create(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6004BDF")]
	[Address(RVA = "0x22735C0", Offset = "0x2271BC0", VA = "0x1822735C0")]
	private void Build()
	{
	}

	[Token(Token = "0x6004BE0")]
	[Address(RVA = "0x2274960", Offset = "0x2272F60", VA = "0x182274960")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6004BE1")]
	[Address(RVA = "0x22707F0", Offset = "0x226EDF0", VA = "0x1822707F0")]
	private void BuildContent()
	{
	}

	[Token(Token = "0x6004BE2")]
	[Address(RVA = "0x2273390", Offset = "0x2271990", VA = "0x182273390")]
	private void BuildTabs(Transform parent)
	{
	}

	[Token(Token = "0x6004BE3")]
	[Address(RVA = "0x2272C00", Offset = "0x2271200", VA = "0x182272C00")]
	private GameObject BuildSignUpForm(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6004BE4")]
	[Address(RVA = "0x2271440", Offset = "0x226FA40", VA = "0x182271440")]
	private GameObject BuildLoginForm(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6004BE5")]
	[Address(RVA = "0x2270C20", Offset = "0x226F220", VA = "0x182270C20")]
	private GameObject BuildForgotPasswordForm(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6004BE6")]
	[Address(RVA = "0x2271030", Offset = "0x226F630", VA = "0x182271030")]
	private GameObject BuildLoggedInView(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6004BE7")]
	[Address(RVA = "0x22706F0", Offset = "0x226ECF0", VA = "0x1822706F0")]
	private void BuildCollapsedUserLabel()
	{
	}

	[Token(Token = "0x6004BE8")]
	[Address(RVA = "0x2270560", Offset = "0x226EB60", VA = "0x182270560")]
	private void BuildCollapseBar()
	{
	}

	[Token(Token = "0x6004BE9")]
	[Address(RVA = "0x2271F10", Offset = "0x2270510", VA = "0x182271F10")]
	private void BuildOAuthRow(Transform parent, out GameObject divider, out GameObject row, out GameObject discordBtn, out GameObject googleBtn)
	{
	}

	[Token(Token = "0x6004BEA")]
	[Address(RVA = "0x2274760", Offset = "0x2272D60", VA = "0x182274760")]
	private static InputField GetInput(GameObject inputSettingGO)
	{
		return null;
	}

	[Token(Token = "0x6004BEB")]
	[Address(RVA = "0x2270250", Offset = "0x226E850", VA = "0x182270250")]
	private static void ApplySubtleButtonStyle(GameObject buttonGO)
	{
	}

	[Token(Token = "0x6004BEC")]
	[Address(RVA = "0x226EE80", Offset = "0x226D480", VA = "0x18226EE80")]
	private static void AddOAuthButtonIcon(GameObject buttonGO, string resourcePath)
	{
	}

	[Token(Token = "0x6004BED")]
	[Address(RVA = "0x2273CF0", Offset = "0x22722F0", VA = "0x182273CF0")]
	private static void ConfigureOAuthOnlyButtonText(GameObject buttonGO)
	{
	}

	[Token(Token = "0x6004BEE")]
	[Address(RVA = "0x2274010", Offset = "0x2272610", VA = "0x182274010")]
	private static void ConfigurePasswordInput(GameObject inputSettingGO)
	{
	}

	[Token(Token = "0x6004BEF")]
	[Address(RVA = "0x226F7F0", Offset = "0x226DDF0", VA = "0x18226F7F0")]
	private static void AddPasswordToggle(InputField field)
	{
	}

	[Token(Token = "0x6004BF0")]
	[Address(RVA = "0x2276320", Offset = "0x2274920", VA = "0x182276320")]
	private static void SetupTabNavigation(InputField[] fields, Selectable submit)
	{
	}

	[Token(Token = "0x6004BF1")]
	[Address(RVA = "0x2275880", Offset = "0x2273E80", VA = "0x182275880")]
	private void RefreshState()
	{
	}

	[Token(Token = "0x6004BF2")]
	[Address(RVA = "0x22762E0", Offset = "0x22748E0", VA = "0x1822762E0")]
	private void SetTab(Tab tab)
	{
	}

	[Token(Token = "0x6004BF3")]
	[Address(RVA = "0x2276790", Offset = "0x2274D90", VA = "0x182276790")]
	private void ToggleCollapsed()
	{
	}

	[Token(Token = "0x6004BF4")]
	[Address(RVA = "0x2274800", Offset = "0x2272E00", VA = "0x182274800")]
	private void HandleLoggedIn()
	{
	}

	[Token(Token = "0x6004BF5")]
	[Address(RVA = "0x2274850", Offset = "0x2272E50", VA = "0x182274850")]
	private void HandleLoggedOut()
	{
	}

	[Token(Token = "0x6004BF6")]
	[Address(RVA = "0x22747F0", Offset = "0x2272DF0", VA = "0x1822747F0")]
	private void HandleAuthMethodsChanged()
	{
	}

	[Token(Token = "0x6004BF7")]
	[Address(RVA = "0x22753B0", Offset = "0x22739B0", VA = "0x1822753B0")]
	private void OnRegisterClick()
	{
	}

	[Token(Token = "0x6004BF8")]
	[Address(RVA = "0x2274C10", Offset = "0x2273210", VA = "0x182274C10")]
	private void OnLoginClick()
	{
	}

	[Token(Token = "0x6004BF9")]
	[Address(RVA = "0x2274A70", Offset = "0x2273070", VA = "0x182274A70")]
	private void OnForgotPasswordClick()
	{
	}

	[Token(Token = "0x6004BFA")]
	[Address(RVA = "0x22757F0", Offset = "0x2273DF0", VA = "0x1822757F0")]
	private void OnWebLoginClick()
	{
	}

	[Token(Token = "0x6004BFB")]
	[Address(RVA = "0x22752E0", Offset = "0x22738E0", VA = "0x1822752E0")]
	private void OnRefreshLoginClick()
	{
	}

	[Token(Token = "0x6004BFC")]
	[Address(RVA = "0x2274EE0", Offset = "0x22734E0", VA = "0x182274EE0")]
	private void OnOAuthClick(string provider)
	{
	}

	[Token(Token = "0x6004BFD")]
	[Address(RVA = "0x2274E80", Offset = "0x2273480", VA = "0x182274E80")]
	private void OnOAuthCancelClick()
	{
	}

	[Token(Token = "0x6004BFE")]
	[Address(RVA = "0x2275050", Offset = "0x2273650", VA = "0x182275050")]
	private void OnOAuthComplete(bool success, string error)
	{
	}

	[Token(Token = "0x6004BFF")]
	[Address(RVA = "0x2274BA0", Offset = "0x22731A0", VA = "0x182274BA0")]
	private void OnForgotPasswordComplete(bool success, string error)
	{
	}

	[Token(Token = "0x6004C00")]
	[Address(RVA = "0x2274DB0", Offset = "0x22733B0", VA = "0x182274DB0")]
	private void OnLogoutClick()
	{
	}

	[Token(Token = "0x6004C01")]
	[Address(RVA = "0x2275140", Offset = "0x2273740", VA = "0x182275140")]
	private void OnOnlineToggleClick()
	{
	}

	[Token(Token = "0x6004C02")]
	[Address(RVA = "0x2275590", Offset = "0x2273B90", VA = "0x182275590")]
	private void OnRegisterComplete(bool success, string error)
	{
	}

	[Token(Token = "0x6004C03")]
	[Address(RVA = "0x2274870", Offset = "0x2272E70", VA = "0x182274870")]
	private void OnAuthComplete(bool success, string error)
	{
	}

	[Token(Token = "0x6004C04")]
	[Address(RVA = "0x2276660", Offset = "0x2274C60", VA = "0x182276660")]
	private void ShowStatus(string message)
	{
	}

	[Token(Token = "0x6004C05")]
	[Address(RVA = "0x2273CD0", Offset = "0x22722D0", VA = "0x182273CD0")]
	private void ClearStatus()
	{
	}

	[Token(Token = "0x6004C06")]
	[Address(RVA = "0x22742A0", Offset = "0x22728A0", VA = "0x1822742A0")]
	private static string FormatError(string error)
	{
		return null;
	}

	[Token(Token = "0x6004C07")]
	[Address(RVA = "0x2276B50", Offset = "0x2275150", VA = "0x182276B50")]
	public AccountPanel()
	{
	}
}
