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

[Token(Token = "0x200029D")]
[AottgDialog("main-menu-register")]
public sealed class AottgRegisterDialog : AottgDialog
{
	[Token(Token = "0x4000D5B")]
	public const string Id = "main-menu-register";

	[Token(Token = "0x4000D5C")]
	public const string EmailInputId = "account-register-email";

	[Token(Token = "0x4000D5D")]
	public const string DisplayNameInputId = "account-register-display-name";

	[Token(Token = "0x4000D5E")]
	public const string PasswordInputId = "account-register-password";

	[Token(Token = "0x4000D5F")]
	public const string ConfirmPasswordInputId = "account-register-confirm-password";

	[Token(Token = "0x4000D60")]
	public const string KeepSignedInId = "account-register-keep-signed-in";

	[Token(Token = "0x170001BB")]
	protected override string Title
	{
		[Token(Token = "0x6000FFC")]
		[Address(RVA = "0x57BBB30", Offset = "0x57BAB30", VA = "0x57BBB30", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BC")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000FFD")]
		[Address(RVA = "0x57BBB90", Offset = "0x57BAB90", VA = "0x57BBB90", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BD")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000FFE")]
		[Address(RVA = "0x57BBBC0", Offset = "0x57BABC0", VA = "0x57BBBC0", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x170001BE")]
	protected override string HeaderCloseEnabledKey
	{
		[Token(Token = "0x6000FFF")]
		[Address(RVA = "0x57BBBD0", Offset = "0x57BABD0", VA = "0x57BBBD0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BF")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001000")]
		[Address(RVA = "0x57BBC00", Offset = "0x57BAC00", VA = "0x57BBC00", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C0")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6001001")]
		[Address(RVA = "0x57BBCC0", Offset = "0x57BACC0", VA = "0x57BBCC0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001002")]
	[Address(RVA = "0x57BBD70", Offset = "0x57BAD70", VA = "0x57BBD70", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6001003")]
	[Address(RVA = "0x57BC010", Offset = "0x57BB010", VA = "0x57BC010")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		return null;
	}

	[Token(Token = "0x6001004")]
	[Address(RVA = "0x57BC080", Offset = "0x57BB080", VA = "0x57BC080")]
	private static GisketchUIBindingDefinition Enabled(string key)
	{
		return null;
	}

	[Token(Token = "0x6001005")]
	[Address(RVA = "0x57BC0F0", Offset = "0x57BB0F0", VA = "0x57BC0F0")]
	private static GisketchUIBindingDefinition BoundCta(string textKey)
	{
		return null;
	}

	[Token(Token = "0x6001006")]
	[Address(RVA = "0x57BC180", Offset = "0x57BB180", VA = "0x57BC180")]
	public AottgRegisterDialog()
	{
	}
}
