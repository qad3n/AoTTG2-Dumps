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

[Token(Token = "0x2000273")]
[AottgDialog("main-menu-login")]
public sealed class AottgLoginDialog : AottgDialog
{
	[Token(Token = "0x4000C99")]
	public const string Id = "main-menu-login";

	[Token(Token = "0x4000C9A")]
	public const string EmailInputId = "account-login-email";

	[Token(Token = "0x4000C9B")]
	public const string PasswordInputId = "account-login-password";

	[Token(Token = "0x4000C9C")]
	public const string KeepSignedInId = "account-login-keep-signed-in";

	[Token(Token = "0x170001AA")]
	protected override string Title
	{
		[Token(Token = "0x6000EC4")]
		[Address(RVA = "0x1DE1060", Offset = "0x1DDF660", VA = "0x181DE1060", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AB")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000EC5")]
		[Address(RVA = "0x1DE1030", Offset = "0x1DDF630", VA = "0x181DE1030", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AC")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000EC6")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x170001AD")]
	protected override string HeaderCloseEnabledKey
	{
		[Token(Token = "0x6000EC7")]
		[Address(RVA = "0x1DE0F00", Offset = "0x1DDF500", VA = "0x181DE0F00", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AE")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000EC8")]
		[Address(RVA = "0x1DE0F30", Offset = "0x1DDF530", VA = "0x181DE0F30", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AF")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000EC9")]
		[Address(RVA = "0x1DE0E10", Offset = "0x1DDF410", VA = "0x181DE0E10", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000ECA")]
	[Address(RVA = "0x1DE07B0", Offset = "0x1DDEDB0", VA = "0x181DE07B0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000ECB")]
	[Address(RVA = "0x1DE0B60", Offset = "0x1DDF160", VA = "0x181DE0B60")]
	private static void FooterLinks(AottgUi ui)
	{
	}

	[Token(Token = "0x6000ECC")]
	[Address(RVA = "0x1DE0DA0", Offset = "0x1DDF3A0", VA = "0x181DE0DA0")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		return null;
	}

	[Token(Token = "0x6000ECD")]
	[Address(RVA = "0x1DE0AF0", Offset = "0x1DDF0F0", VA = "0x181DE0AF0")]
	private static GisketchUIBindingDefinition Enabled(string key)
	{
		return null;
	}

	[Token(Token = "0x6000ECE")]
	[Address(RVA = "0x1DE0710", Offset = "0x1DDED10", VA = "0x181DE0710")]
	private static GisketchUIBindingDefinition BoundCta(string textKey)
	{
		return null;
	}

	[Token(Token = "0x6000ECF")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgLoginDialog()
	{
	}
}
