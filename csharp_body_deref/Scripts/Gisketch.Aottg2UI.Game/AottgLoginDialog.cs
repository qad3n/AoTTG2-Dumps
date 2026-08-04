// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgLoginDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgLoginDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200016D")]
[AottgDialog("main-menu-login")]
public sealed class AottgLoginDialog : AottgDialog
{
	[Token(Token = "0x40007F8")]
	public const string Id = "main-menu-login";

	[Token(Token = "0x40007F9")]
	public const string EmailInputId = "account-login-email";

	[Token(Token = "0x40007FA")]
	public const string PasswordInputId = "account-login-password";

	[Token(Token = "0x40007FB")]
	public const string KeepSignedInId = "account-login-keep-signed-in";

	[Token(Token = "0x17000126")]
	protected override string Title
	{
		[Token(Token = "0x6000810")]
		[Address(RVA = "0x43EF480", Offset = "0x43EF480", VA = "0x43EF480", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000127")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000811")]
		[Address(RVA = "0x43EF4F0", Offset = "0x43EF4F0", VA = "0x43EF4F0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000128")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000812")]
		[Address(RVA = "0x43EF520", Offset = "0x43EF520", VA = "0x43EF520", Slot = "13")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x17000129")]
	protected override string HeaderCloseEnabledKey
	{
		[Token(Token = "0x6000813")]
		[Address(RVA = "0x43EF530", Offset = "0x43EF530", VA = "0x43EF530", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012A")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000814")]
		[Address(RVA = "0x43EF560", Offset = "0x43EF560", VA = "0x43EF560", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012B")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000815")]
		[Address(RVA = "0x43EF630", Offset = "0x43EF630", VA = "0x43EF630", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x43EF6F0", Offset = "0x43EF6F0", VA = "0x43EF6F0", Slot = "19")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x43EFA60", Offset = "0x43EFA60", VA = "0x43EFA60")]
	private static void FooterLinks(AottgUi ui)
	{
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x43EF9F0", Offset = "0x43EF9F0", VA = "0x43EF9F0")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		return null;
	}

	[Token(Token = "0x6000819")]
	[Address(RVA = "0x43EFC50", Offset = "0x43EFC50", VA = "0x43EFC50")]
	private static GisketchUIBindingDefinition Enabled(string key)
	{
		return null;
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x43EFCC0", Offset = "0x43EFCC0", VA = "0x43EFCC0")]
	private static GisketchUIBindingDefinition BoundCta(string textKey)
	{
		return null;
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x43EFD50", Offset = "0x43EFD50", VA = "0x43EFD50")]
	public AottgLoginDialog()
	{
	}
}
