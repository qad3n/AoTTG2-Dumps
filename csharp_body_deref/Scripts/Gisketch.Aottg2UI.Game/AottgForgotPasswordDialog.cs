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

[Token(Token = "0x200016B")]
[AottgDialog("main-menu-forgot-password")]
public sealed class AottgForgotPasswordDialog : AottgDialog
{
	[Token(Token = "0x40007F4")]
	public const string Id = "main-menu-forgot-password";

	[Token(Token = "0x40007F5")]
	public const string EmailInputId = "account-forgot-email";

	[Token(Token = "0x17000120")]
	protected override string Title
	{
		[Token(Token = "0x6000802")]
		[Address(RVA = "0x43EE980", Offset = "0x43EE980", VA = "0x43EE980", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000121")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000803")]
		[Address(RVA = "0x43EE9F0", Offset = "0x43EE9F0", VA = "0x43EE9F0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000122")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000804")]
		[Address(RVA = "0x43EEA20", Offset = "0x43EEA20", VA = "0x43EEA20", Slot = "13")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x17000123")]
	protected override string HeaderCloseEnabledKey
	{
		[Token(Token = "0x6000805")]
		[Address(RVA = "0x43EEA30", Offset = "0x43EEA30", VA = "0x43EEA30", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000124")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000806")]
		[Address(RVA = "0x43EEA60", Offset = "0x43EEA60", VA = "0x43EEA60", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000125")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000807")]
		[Address(RVA = "0x43EEB30", Offset = "0x43EEB30", VA = "0x43EEB30", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x43EEBF0", Offset = "0x43EEBF0", VA = "0x43EEBF0", Slot = "19")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000809")]
	[Address(RVA = "0x43EEEE0", Offset = "0x43EEEE0", VA = "0x43EEEE0")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		return null;
	}

	[Token(Token = "0x600080A")]
	[Address(RVA = "0x43EEF50", Offset = "0x43EEF50", VA = "0x43EEF50")]
	private static GisketchUIBindingDefinition Enabled(string key)
	{
		return null;
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x43EEFC0", Offset = "0x43EEFC0", VA = "0x43EEFC0")]
	private static GisketchUIBindingDefinition BoundCta(string textKey)
	{
		return null;
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x43EF050", Offset = "0x43EF050", VA = "0x43EF050")]
	public AottgForgotPasswordDialog()
	{
	}
}
