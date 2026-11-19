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

[Token(Token = "0x2000299")]
[AottgDialog("main-menu-login")]
public sealed class AottgLoginDialog : AottgDialog
{
	[Token(Token = "0x4000D47")]
	public const string Id = "main-menu-login";

	[Token(Token = "0x4000D48")]
	public const string EmailInputId = "account-login-email";

	[Token(Token = "0x4000D49")]
	public const string PasswordInputId = "account-login-password";

	[Token(Token = "0x4000D4A")]
	public const string KeepSignedInId = "account-login-keep-signed-in";

	[Token(Token = "0x170001B5")]
	protected override string Title
	{
		[Token(Token = "0x6000FD1")]
		[Address(RVA = "0x57B7D90", Offset = "0x57B6D90", VA = "0x57B7D90", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B6")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000FD2")]
		[Address(RVA = "0x57B7DF0", Offset = "0x57B6DF0", VA = "0x57B7DF0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B7")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000FD3")]
		[Address(RVA = "0x57B7E20", Offset = "0x57B6E20", VA = "0x57B7E20", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x170001B8")]
	protected override string HeaderCloseEnabledKey
	{
		[Token(Token = "0x6000FD4")]
		[Address(RVA = "0x57B7E30", Offset = "0x57B6E30", VA = "0x57B7E30", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B9")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000FD5")]
		[Address(RVA = "0x57B7E60", Offset = "0x57B6E60", VA = "0x57B7E60", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BA")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000FD6")]
		[Address(RVA = "0x57B7F20", Offset = "0x57B6F20", VA = "0x57B7F20", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FD7")]
	[Address(RVA = "0x57B7FD0", Offset = "0x57B6FD0", VA = "0x57B7FD0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000FD8")]
	[Address(RVA = "0x57B82E0", Offset = "0x57B72E0", VA = "0x57B82E0")]
	private static void FooterLinks(AottgUi ui)
	{
	}

	[Token(Token = "0x6000FD9")]
	[Address(RVA = "0x57B8270", Offset = "0x57B7270", VA = "0x57B8270")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		return null;
	}

	[Token(Token = "0x6000FDA")]
	[Address(RVA = "0x57B84C0", Offset = "0x57B74C0", VA = "0x57B84C0")]
	private static GisketchUIBindingDefinition Enabled(string key)
	{
		return null;
	}

	[Token(Token = "0x6000FDB")]
	[Address(RVA = "0x57B8530", Offset = "0x57B7530", VA = "0x57B8530")]
	private static GisketchUIBindingDefinition BoundCta(string textKey)
	{
		return null;
	}

	[Token(Token = "0x6000FDC")]
	[Address(RVA = "0x57B85C0", Offset = "0x57B75C0", VA = "0x57B85C0")]
	public AottgLoginDialog()
	{
	}
}
