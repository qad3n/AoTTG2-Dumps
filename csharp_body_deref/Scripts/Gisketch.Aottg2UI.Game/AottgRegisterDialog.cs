// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgRegisterDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgRegisterDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000277")]
[AottgDialog("main-menu-register")]
public sealed class AottgRegisterDialog : AottgDialog
{
	[Token(Token = "0x4000CAD")]
	public const string Id = "main-menu-register";

	[Token(Token = "0x4000CAE")]
	public const string EmailInputId = "account-register-email";

	[Token(Token = "0x4000CAF")]
	public const string DisplayNameInputId = "account-register-display-name";

	[Token(Token = "0x4000CB0")]
	public const string PasswordInputId = "account-register-password";

	[Token(Token = "0x4000CB1")]
	public const string ConfirmPasswordInputId = "account-register-confirm-password";

	[Token(Token = "0x4000CB2")]
	public const string KeepSignedInId = "account-register-keep-signed-in";

	[Token(Token = "0x170001B0")]
	protected override string Title
	{
		[Token(Token = "0x6000EEF")]
		[Address(RVA = "0x1DE6460", Offset = "0x1DE4A60", VA = "0x181DE6460", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B1")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000EF0")]
		[Address(RVA = "0x1DE6430", Offset = "0x1DE4A30", VA = "0x181DE6430", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B2")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000EF1")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x170001B3")]
	protected override string HeaderCloseEnabledKey
	{
		[Token(Token = "0x6000EF2")]
		[Address(RVA = "0x1DE6300", Offset = "0x1DE4900", VA = "0x181DE6300", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B4")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000EF3")]
		[Address(RVA = "0x1DE6330", Offset = "0x1DE4930", VA = "0x181DE6330", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B5")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000EF4")]
		[Address(RVA = "0x1DE6210", Offset = "0x1DE4810", VA = "0x181DE6210", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000EF5")]
	[Address(RVA = "0x1DE5DF0", Offset = "0x1DE43F0", VA = "0x181DE5DF0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000EF6")]
	[Address(RVA = "0x1DE61A0", Offset = "0x1DE47A0", VA = "0x181DE61A0")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		return null;
	}

	[Token(Token = "0x6000EF7")]
	[Address(RVA = "0x1DE6130", Offset = "0x1DE4730", VA = "0x181DE6130")]
	private static GisketchUIBindingDefinition Enabled(string key)
	{
		return null;
	}

	[Token(Token = "0x6000EF8")]
	[Address(RVA = "0x1DE5D50", Offset = "0x1DE4350", VA = "0x181DE5D50")]
	private static GisketchUIBindingDefinition BoundCta(string textKey)
	{
		return null;
	}

	[Token(Token = "0x6000EF9")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgRegisterDialog()
	{
	}
}
