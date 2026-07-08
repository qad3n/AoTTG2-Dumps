using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000631")]
internal class AccountPanel : MonoBehaviour
{
	[Token(Token = "0x2000632")]
	private enum Tab
	{
		[Token(Token = "0x4001E9E")]
		SignUp,
		[Token(Token = "0x4001E9F")]
		Login,
		[Token(Token = "0x4001EA0")]
		ForgotPassword
	}

	[Token(Token = "0x4001E64")]
	private const float PanelWidth = 450f;

	[Token(Token = "0x4001E65")]
	private const float TitleWidth = 130f;

	[Token(Token = "0x4001E66")]
	private const float LabelWidthToggle = 180f;

	[Token(Token = "0x4001E67")]
	private const float InputHeight = 42f;

	[Token(Token = "0x4001E68")]
	private const float ActionButtonHeight = 40f;

	[Token(Token = "0x4001E69")]
	private const float CollapseButtonHeight = 22f;

	[Token(Token = "0x4001E6A")]
	private const int InputFontSize = 27;

	[Token(Token = "0x4001E6B")]
	private const int InputFontSizeSmall = 22;

	[Token(Token = "0x4001E6C")]
	private const int TabFontSize = 33;

	[Token(Token = "0x4001E6D")]
	private const int ActionButtonFontSize = 30;

	[Token(Token = "0x4001E6E")]
	private const int CollapseFontSize = 16;

	[Token(Token = "0x4001E6F")]
	private const int LoggedInLabelFontSize = 27;

	[Token(Token = "0x4001E70")]
	private const int OAuthOnlyButtonFontSize = 18;

	[Token(Token = "0x4001E71")]
	private const int StatusFontSize = 21;

	[Token(Token = "0x4001E72")]
	private const string ThemePanel = "DefaultPanel";

	[Token(Token = "0x4001E73")]
	[FieldOffset(Offset = "0x20")]
	private StringSetting _signupDisplayName;

	[Token(Token = "0x4001E74")]
	[FieldOffset(Offset = "0x28")]
	private StringSetting _signupEmail;

	[Token(Token = "0x4001E75")]
	[FieldOffset(Offset = "0x30")]
	private StringSetting _signupPassword;

	[Token(Token = "0x4001E76")]
	[FieldOffset(Offset = "0x38")]
	private StringSetting _loginEmail;

	[Token(Token = "0x4001E77")]
	[FieldOffset(Offset = "0x40")]
	private StringSetting _loginPassword;

	[Token(Token = "0x4001E78")]
	[FieldOffset(Offset = "0x48")]
	private BoolSetting _keepSignedIn;

	[Token(Token = "0x4001E79")]
	[FieldOffset(Offset = "0x50")]
	private StringSetting _forgotPasswordEmail;

	[Token(Token = "0x4001E7A")]
	[FieldOffset(Offset = "0x58")]
	private GameObject _content;

	[Token(Token = "0x4001E7B")]
	[FieldOffset(Offset = "0x60")]
	private GameObject _signupContent;

	[Token(Token = "0x4001E7C")]
	[FieldOffset(Offset = "0x68")]
	private GameObject _loginContent;

	[Token(Token = "0x4001E7D")]
	[FieldOffset(Offset = "0x70")]
	private GameObject _forgotPasswordContent;

	[Token(Token = "0x4001E7E")]
	[FieldOffset(Offset = "0x78")]
	private GameObject _loggedInContent;

	[Token(Token = "0x4001E7F")]
	[FieldOffset(Offset = "0x80")]
	private GameObject _signupEmailSection;

	[Token(Token = "0x4001E80")]
	[FieldOffset(Offset = "0x88")]
	private GameObject _loginOAuthOnlySection;

	[Token(Token = "0x4001E81")]
	[FieldOffset(Offset = "0x90")]
	private GameObject _loginOAuthOnlyButtons;

	[Token(Token = "0x4001E82")]
	[FieldOffset(Offset = "0x98")]
	private GameObject _loginOAuthOnlyDiscordButton;

	[Token(Token = "0x4001E83")]
	[FieldOffset(Offset = "0xA0")]
	private GameObject _loginOAuthOnlyGoogleButton;

	[Token(Token = "0x4001E84")]
	[FieldOffset(Offset = "0xA8")]
	private Text _loginOAuthOnlyMessage;

	[Token(Token = "0x4001E85")]
	[FieldOffset(Offset = "0xB0")]
	private GameObject _loginEmailSection;

	[Token(Token = "0x4001E86")]
	[FieldOffset(Offset = "0xB8")]
	private GameObject _signupTabButton;

	[Token(Token = "0x4001E87")]
	[FieldOffset(Offset = "0xC0")]
	private GameObject _loginTabButton;

	[Token(Token = "0x4001E88")]
	[FieldOffset(Offset = "0xC8")]
	private GameObject _tabSeparator;

	[Token(Token = "0x4001E89")]
	[FieldOffset(Offset = "0xD0")]
	private GameObject _signupOAuthDivider;

	[Token(Token = "0x4001E8A")]
	[FieldOffset(Offset = "0xD8")]
	private GameObject _signupOAuthRow;

	[Token(Token = "0x4001E8B")]
	[FieldOffset(Offset = "0xE0")]
	private GameObject _signupDiscordButton;

	[Token(Token = "0x4001E8C")]
	[FieldOffset(Offset = "0xE8")]
	private GameObject _signupGoogleButton;

	[Token(Token = "0x4001E8D")]
	[FieldOffset(Offset = "0xF0")]
	private GameObject _loginOAuthDivider;

	[Token(Token = "0x4001E8E")]
	[FieldOffset(Offset = "0xF8")]
	private GameObject _loginOAuthRow;

	[Token(Token = "0x4001E8F")]
	[FieldOffset(Offset = "0x100")]
	private GameObject _loginDiscordButton;

	[Token(Token = "0x4001E90")]
	[FieldOffset(Offset = "0x108")]
	private GameObject _loginGoogleButton;

	[Token(Token = "0x4001E91")]
	[FieldOffset(Offset = "0x110")]
	private GameObject _oauthCancelButton;

	[Token(Token = "0x4001E92")]
	[FieldOffset(Offset = "0x118")]
	private Text _statusLabel;

	[Token(Token = "0x4001E93")]
	[FieldOffset(Offset = "0x120")]
	private Text _loggedInUserLabel;

	[Token(Token = "0x4001E94")]
	[FieldOffset(Offset = "0x128")]
	private Text _onlineToggleButtonLabel;

	[Token(Token = "0x4001E95")]
	[FieldOffset(Offset = "0x130")]
	private Text _collapseButtonLabel;

	[Token(Token = "0x4001E96")]
	[FieldOffset(Offset = "0x138")]
	private Text _collapsedUserLabel;

	[Token(Token = "0x4001E97")]
	[FieldOffset(Offset = "0x140")]
	private RectTransform _rect;

	[Token(Token = "0x4001E98")]
	[FieldOffset(Offset = "0x148")]
	private Tab _currentTab;

	[Token(Token = "0x4001E99")]
	[FieldOffset(Offset = "0x14C")]
	private bool _collapsed;

	[Token(Token = "0x4001E9A")]
	[FieldOffset(Offset = "0x14D")]
	private bool _userToggledCollapse;

	[Token(Token = "0x4001E9B")]
	[FieldOffset(Offset = "0x14E")]
	private bool _busy;

	[Token(Token = "0x4001E9C")]
	[FieldOffset(Offset = "0x14F")]
	private bool _oauthInProgress;

	[Token(Token = "0x6003EA4")]
	[Address(RVA = "0x3FDEA00", Offset = "0x3FDEA00", VA = "0x3FDEA00")]
	public static AccountPanel Create(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6003EA5")]
	[Address(RVA = "0x3FDEB80", Offset = "0x3FDEB80", VA = "0x3FDEB80")]
	private void Build()
	{
	}

	[Token(Token = "0x6003EA6")]
	[Address(RVA = "0x3FE0140", Offset = "0x3FE0140", VA = "0x3FE0140")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6003EA7")]
	[Address(RVA = "0x3FDF020", Offset = "0x3FDF020", VA = "0x3FDF020")]
	private void BuildContent()
	{
	}

	[Token(Token = "0x6003EA8")]
	[Address(RVA = "0x3FE0240", Offset = "0x3FE0240", VA = "0x3FE0240")]
	private void BuildTabs(Transform parent)
	{
	}

	[Token(Token = "0x6003EA9")]
	[Address(RVA = "0x3FE0450", Offset = "0x3FE0450", VA = "0x3FE0450")]
	private GameObject BuildSignUpForm(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6003EAA")]
	[Address(RVA = "0x3FE09C0", Offset = "0x3FE09C0", VA = "0x3FE09C0")]
	private GameObject BuildLoginForm(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6003EAB")]
	[Address(RVA = "0x3FE12D0", Offset = "0x3FE12D0", VA = "0x3FE12D0")]
	private GameObject BuildForgotPasswordForm(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6003EAC")]
	[Address(RVA = "0x3FE1600", Offset = "0x3FE1600", VA = "0x3FE1600")]
	private GameObject BuildLoggedInView(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6003EAD")]
	[Address(RVA = "0x3FDF420", Offset = "0x3FDF420", VA = "0x3FDF420")]
	private void BuildCollapsedUserLabel()
	{
	}

	[Token(Token = "0x6003EAE")]
	[Address(RVA = "0x3FDF510", Offset = "0x3FDF510", VA = "0x3FDF510")]
	private void BuildCollapseBar()
	{
	}

	[Token(Token = "0x6003EAF")]
	[Address(RVA = "0x3FE1D80", Offset = "0x3FE1D80", VA = "0x3FE1D80")]
	private void BuildOAuthRow(Transform parent, out GameObject divider, out GameObject row, out GameObject discordBtn, out GameObject googleBtn)
	{
	}

	[Token(Token = "0x6003EB0")]
	[Address(RVA = "0x3FE2AA0", Offset = "0x3FE2AA0", VA = "0x3FE2AA0")]
	private static InputField GetInput(GameObject inputSettingGO)
	{
		return null;
	}

	[Token(Token = "0x6003EB1")]
	[Address(RVA = "0x3FE19E0", Offset = "0x3FE19E0", VA = "0x3FE19E0")]
	private static void ApplySubtleButtonStyle(GameObject buttonGO)
	{
	}

	[Token(Token = "0x6003EB2")]
	[Address(RVA = "0x3FE2F10", Offset = "0x3FE2F10", VA = "0x3FE2F10")]
	private static void AddOAuthButtonIcon(GameObject buttonGO, string resourcePath)
	{
	}

	[Token(Token = "0x6003EB3")]
	[Address(RVA = "0x3FE3860", Offset = "0x3FE3860", VA = "0x3FE3860")]
	private static void ConfigureOAuthOnlyButtonText(GameObject buttonGO)
	{
	}

	[Token(Token = "0x6003EB4")]
	[Address(RVA = "0x3FE1CF0", Offset = "0x3FE1CF0", VA = "0x3FE1CF0")]
	private static void ConfigurePasswordInput(GameObject inputSettingGO)
	{
	}

	[Token(Token = "0x6003EB5")]
	[Address(RVA = "0x3FE3B70", Offset = "0x3FE3B70", VA = "0x3FE3B70")]
	private static void AddPasswordToggle(InputField field)
	{
	}

	[Token(Token = "0x6003EB6")]
	[Address(RVA = "0x3FE2B30", Offset = "0x3FE2B30", VA = "0x3FE2B30")]
	private static void SetupTabNavigation(InputField[] fields, Selectable submit)
	{
	}

	[Token(Token = "0x6003EB7")]
	[Address(RVA = "0x3FDF6A0", Offset = "0x3FDF6A0", VA = "0x3FDF6A0")]
	private void RefreshState()
	{
	}

	[Token(Token = "0x6003EB8")]
	[Address(RVA = "0x3FE45E0", Offset = "0x3FE45E0", VA = "0x3FE45E0")]
	private void SetTab(Tab tab)
	{
	}

	[Token(Token = "0x6003EB9")]
	[Address(RVA = "0x3FE4630", Offset = "0x3FE4630", VA = "0x3FE4630")]
	private void ToggleCollapsed()
	{
	}

	[Token(Token = "0x6003EBA")]
	[Address(RVA = "0x3FE4650", Offset = "0x3FE4650", VA = "0x3FE4650")]
	private void HandleLoggedIn()
	{
	}

	[Token(Token = "0x6003EBB")]
	[Address(RVA = "0x3FE47A0", Offset = "0x3FE47A0", VA = "0x3FE47A0")]
	private void HandleLoggedOut()
	{
	}

	[Token(Token = "0x6003EBC")]
	[Address(RVA = "0x3FE47C0", Offset = "0x3FE47C0", VA = "0x3FE47C0")]
	private void HandleAuthMethodsChanged()
	{
	}

	[Token(Token = "0x6003EBD")]
	[Address(RVA = "0x3FE47D0", Offset = "0x3FE47D0", VA = "0x3FE47D0")]
	private void OnRegisterClick()
	{
	}

	[Token(Token = "0x6003EBE")]
	[Address(RVA = "0x3FE49A0", Offset = "0x3FE49A0", VA = "0x3FE49A0")]
	private void OnLoginClick()
	{
	}

	[Token(Token = "0x6003EBF")]
	[Address(RVA = "0x3FE4B30", Offset = "0x3FE4B30", VA = "0x3FE4B30")]
	private void OnForgotPasswordClick()
	{
	}

	[Token(Token = "0x6003EC0")]
	[Address(RVA = "0x3FE4C60", Offset = "0x3FE4C60", VA = "0x3FE4C60")]
	private void OnWebLoginClick()
	{
	}

	[Token(Token = "0x6003EC1")]
	[Address(RVA = "0x3FE4CF0", Offset = "0x3FE4CF0", VA = "0x3FE4CF0")]
	private void OnRefreshLoginClick()
	{
	}

	[Token(Token = "0x6003EC2")]
	[Address(RVA = "0x3FE4DC0", Offset = "0x3FE4DC0", VA = "0x3FE4DC0")]
	private void OnOAuthClick(string provider)
	{
	}

	[Token(Token = "0x6003EC3")]
	[Address(RVA = "0x3FE4F30", Offset = "0x3FE4F30", VA = "0x3FE4F30")]
	private void OnOAuthCancelClick()
	{
	}

	[Token(Token = "0x6003EC4")]
	[Address(RVA = "0x3FE4F90", Offset = "0x3FE4F90", VA = "0x3FE4F90")]
	private void OnOAuthComplete(bool success, string error)
	{
	}

	[Token(Token = "0x6003EC5")]
	[Address(RVA = "0x3FE5550", Offset = "0x3FE5550", VA = "0x3FE5550")]
	private void OnForgotPasswordComplete(bool success, string error)
	{
	}

	[Token(Token = "0x6003EC6")]
	[Address(RVA = "0x3FE55B0", Offset = "0x3FE55B0", VA = "0x3FE55B0")]
	private void OnLogoutClick()
	{
	}

	[Token(Token = "0x6003EC7")]
	[Address(RVA = "0x3FE5680", Offset = "0x3FE5680", VA = "0x3FE5680")]
	private void OnOnlineToggleClick()
	{
	}

	[Token(Token = "0x6003EC8")]
	[Address(RVA = "0x3FE5820", Offset = "0x3FE5820", VA = "0x3FE5820")]
	private void OnRegisterComplete(bool success, string error)
	{
	}

	[Token(Token = "0x6003EC9")]
	[Address(RVA = "0x3FE5AC0", Offset = "0x3FE5AC0", VA = "0x3FE5AC0")]
	private void OnAuthComplete(bool success, string error)
	{
	}

	[Token(Token = "0x6003ECA")]
	[Address(RVA = "0x3FE4690", Offset = "0x3FE4690", VA = "0x3FE4690")]
	private void ShowStatus(string message)
	{
	}

	[Token(Token = "0x6003ECB")]
	[Address(RVA = "0x3FE4610", Offset = "0x3FE4610", VA = "0x3FE4610")]
	private void ClearStatus()
	{
	}

	[Token(Token = "0x6003ECC")]
	[Address(RVA = "0x3FE5060", Offset = "0x3FE5060", VA = "0x3FE5060")]
	private static string FormatError(string error)
	{
		return null;
	}

	[Token(Token = "0x6003ECD")]
	[Address(RVA = "0x3FE5B90", Offset = "0x3FE5B90", VA = "0x3FE5B90")]
	public AccountPanel()
	{
	}
}
