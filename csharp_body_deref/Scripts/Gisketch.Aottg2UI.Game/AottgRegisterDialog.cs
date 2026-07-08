using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200013F")]
[AottgDialog("main-menu-register")]
public sealed class AottgRegisterDialog : AottgDialog
{
	[Token(Token = "0x400074D")]
	public const string Id = "main-menu-register";

	[Token(Token = "0x400074E")]
	public const string EmailInputId = "account-register-email";

	[Token(Token = "0x400074F")]
	public const string DisplayNameInputId = "account-register-display-name";

	[Token(Token = "0x4000750")]
	public const string PasswordInputId = "account-register-password";

	[Token(Token = "0x4000751")]
	public const string ConfirmPasswordInputId = "account-register-confirm-password";

	[Token(Token = "0x4000752")]
	public const string KeepSignedInId = "account-register-keep-signed-in";

	[Token(Token = "0x170000D6")]
	protected override string Title
	{
		[Token(Token = "0x60006CE")]
		[Address(RVA = "0x40C2690", Offset = "0x40C2690", VA = "0x40C2690", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D7")]
	protected override string TitleIcon
	{
		[Token(Token = "0x60006CF")]
		[Address(RVA = "0x40C2700", Offset = "0x40C2700", VA = "0x40C2700", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D8")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x60006D0")]
		[Address(RVA = "0x40C2730", Offset = "0x40C2730", VA = "0x40C2730", Slot = "12")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x170000D9")]
	protected override string HeaderCloseEnabledKey
	{
		[Token(Token = "0x60006D1")]
		[Address(RVA = "0x40C2740", Offset = "0x40C2740", VA = "0x40C2740", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DA")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60006D2")]
		[Address(RVA = "0x40C2770", Offset = "0x40C2770", VA = "0x40C2770", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DB")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x60006D3")]
		[Address(RVA = "0x40C2840", Offset = "0x40C2840", VA = "0x40C2840", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x40C2900", Offset = "0x40C2900", VA = "0x40C2900", Slot = "18")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x40C2C00", Offset = "0x40C2C00", VA = "0x40C2C00")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		return null;
	}

	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x40C2C70", Offset = "0x40C2C70", VA = "0x40C2C70")]
	private static GisketchUIBindingDefinition Enabled(string key)
	{
		return null;
	}

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x40C2CE0", Offset = "0x40C2CE0", VA = "0x40C2CE0")]
	private static GisketchUIBindingDefinition BoundCta(string textKey)
	{
		return null;
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x40C2D70", Offset = "0x40C2D70", VA = "0x40C2D70")]
	public AottgRegisterDialog()
	{
	}
}
