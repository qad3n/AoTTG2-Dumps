using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200013B")]
[AottgDialog("main-menu-login")]
public sealed class AottgLoginDialog : AottgDialog
{
	[Token(Token = "0x4000739")]
	public const string Id = "main-menu-login";

	[Token(Token = "0x400073A")]
	public const string EmailInputId = "account-login-email";

	[Token(Token = "0x400073B")]
	public const string PasswordInputId = "account-login-password";

	[Token(Token = "0x400073C")]
	public const string KeepSignedInId = "account-login-keep-signed-in";

	[Token(Token = "0x170000D0")]
	protected override string Title
	{
		[Token(Token = "0x60006A3")]
		[Address(RVA = "0x4077BE0", Offset = "0x4077BE0", VA = "0x4077BE0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D1")]
	protected override string TitleIcon
	{
		[Token(Token = "0x60006A4")]
		[Address(RVA = "0x4077C50", Offset = "0x4077C50", VA = "0x4077C50", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D2")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x60006A5")]
		[Address(RVA = "0x4077C80", Offset = "0x4077C80", VA = "0x4077C80", Slot = "12")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x170000D3")]
	protected override string HeaderCloseEnabledKey
	{
		[Token(Token = "0x60006A6")]
		[Address(RVA = "0x4077C90", Offset = "0x4077C90", VA = "0x4077C90", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D4")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60006A7")]
		[Address(RVA = "0x4077CC0", Offset = "0x4077CC0", VA = "0x4077CC0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D5")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x60006A8")]
		[Address(RVA = "0x4077D90", Offset = "0x4077D90", VA = "0x4077D90", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x4077E50", Offset = "0x4077E50", VA = "0x4077E50", Slot = "18")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x40781C0", Offset = "0x40781C0", VA = "0x40781C0")]
	private static void FooterLinks(AottgUi ui)
	{
	}

	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x4078150", Offset = "0x4078150", VA = "0x4078150")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		return null;
	}

	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x40783B0", Offset = "0x40783B0", VA = "0x40783B0")]
	private static GisketchUIBindingDefinition Enabled(string key)
	{
		return null;
	}

	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x4078420", Offset = "0x4078420", VA = "0x4078420")]
	private static GisketchUIBindingDefinition BoundCta(string textKey)
	{
		return null;
	}

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x40784B0", Offset = "0x40784B0", VA = "0x40784B0")]
	public AottgLoginDialog()
	{
	}
}
