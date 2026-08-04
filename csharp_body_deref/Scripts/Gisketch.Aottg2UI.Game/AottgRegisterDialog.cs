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

[Token(Token = "0x2000171")]
[AottgDialog("main-menu-register")]
public sealed class AottgRegisterDialog : AottgDialog
{
	[Token(Token = "0x400080C")]
	public const string Id = "main-menu-register";

	[Token(Token = "0x400080D")]
	public const string EmailInputId = "account-register-email";

	[Token(Token = "0x400080E")]
	public const string DisplayNameInputId = "account-register-display-name";

	[Token(Token = "0x400080F")]
	public const string PasswordInputId = "account-register-password";

	[Token(Token = "0x4000810")]
	public const string ConfirmPasswordInputId = "account-register-confirm-password";

	[Token(Token = "0x4000811")]
	public const string KeepSignedInId = "account-register-keep-signed-in";

	[Token(Token = "0x1700012C")]
	protected override string Title
	{
		[Token(Token = "0x600083B")]
		[Address(RVA = "0x43F3500", Offset = "0x43F3500", VA = "0x43F3500", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012D")]
	protected override string TitleIcon
	{
		[Token(Token = "0x600083C")]
		[Address(RVA = "0x43F3570", Offset = "0x43F3570", VA = "0x43F3570", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012E")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x600083D")]
		[Address(RVA = "0x43F35A0", Offset = "0x43F35A0", VA = "0x43F35A0", Slot = "13")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x1700012F")]
	protected override string HeaderCloseEnabledKey
	{
		[Token(Token = "0x600083E")]
		[Address(RVA = "0x43F35B0", Offset = "0x43F35B0", VA = "0x43F35B0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000130")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x600083F")]
		[Address(RVA = "0x43F35E0", Offset = "0x43F35E0", VA = "0x43F35E0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000131")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000840")]
		[Address(RVA = "0x43F36B0", Offset = "0x43F36B0", VA = "0x43F36B0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000841")]
	[Address(RVA = "0x43F3770", Offset = "0x43F3770", VA = "0x43F3770", Slot = "19")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000842")]
	[Address(RVA = "0x43F3A70", Offset = "0x43F3A70", VA = "0x43F3A70")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		return null;
	}

	[Token(Token = "0x6000843")]
	[Address(RVA = "0x43F3AE0", Offset = "0x43F3AE0", VA = "0x43F3AE0")]
	private static GisketchUIBindingDefinition Enabled(string key)
	{
		return null;
	}

	[Token(Token = "0x6000844")]
	[Address(RVA = "0x43F3B50", Offset = "0x43F3B50", VA = "0x43F3B50")]
	private static GisketchUIBindingDefinition BoundCta(string textKey)
	{
		return null;
	}

	[Token(Token = "0x6000845")]
	[Address(RVA = "0x43F3BE0", Offset = "0x43F3BE0", VA = "0x43F3BE0")]
	public AottgRegisterDialog()
	{
	}
}
