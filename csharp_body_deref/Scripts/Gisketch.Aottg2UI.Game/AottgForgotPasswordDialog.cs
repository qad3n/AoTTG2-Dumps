// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgForgotPasswordDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000297")]
[AottgDialog("main-menu-forgot-password")]
public sealed class AottgForgotPasswordDialog : AottgDialog
{
	[Token(Token = "0x4000D43")]
	public const string Id = "main-menu-forgot-password";

	[Token(Token = "0x4000D44")]
	public const string EmailInputId = "account-forgot-email";

	[Token(Token = "0x170001AF")]
	protected override string Title
	{
		[Token(Token = "0x6000FC3")]
		[Address(RVA = "0x57B7380", Offset = "0x57B6380", VA = "0x57B7380", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B0")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000FC4")]
		[Address(RVA = "0x57B73E0", Offset = "0x57B63E0", VA = "0x57B73E0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B1")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000FC5")]
		[Address(RVA = "0x57B7410", Offset = "0x57B6410", VA = "0x57B7410", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x170001B2")]
	protected override string HeaderCloseEnabledKey
	{
		[Token(Token = "0x6000FC6")]
		[Address(RVA = "0x57B7420", Offset = "0x57B6420", VA = "0x57B7420", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B3")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000FC7")]
		[Address(RVA = "0x57B7450", Offset = "0x57B6450", VA = "0x57B7450", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B4")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000FC8")]
		[Address(RVA = "0x57B7510", Offset = "0x57B6510", VA = "0x57B7510", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x57B75C0", Offset = "0x57B65C0", VA = "0x57B75C0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000FCA")]
	[Address(RVA = "0x57B7850", Offset = "0x57B6850", VA = "0x57B7850")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		return null;
	}

	[Token(Token = "0x6000FCB")]
	[Address(RVA = "0x57B78C0", Offset = "0x57B68C0", VA = "0x57B78C0")]
	private static GisketchUIBindingDefinition Enabled(string key)
	{
		return null;
	}

	[Token(Token = "0x6000FCC")]
	[Address(RVA = "0x57B7930", Offset = "0x57B6930", VA = "0x57B7930")]
	private static GisketchUIBindingDefinition BoundCta(string textKey)
	{
		return null;
	}

	[Token(Token = "0x6000FCD")]
	[Address(RVA = "0x57B79C0", Offset = "0x57B69C0", VA = "0x57B79C0")]
	public AottgForgotPasswordDialog()
	{
	}
}
