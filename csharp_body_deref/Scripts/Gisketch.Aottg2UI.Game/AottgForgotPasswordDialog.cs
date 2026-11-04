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

[Token(Token = "0x2000271")]
[AottgDialog("main-menu-forgot-password")]
public sealed class AottgForgotPasswordDialog : AottgDialog
{
	[Token(Token = "0x4000C95")]
	public const string Id = "main-menu-forgot-password";

	[Token(Token = "0x4000C96")]
	public const string EmailInputId = "account-forgot-email";

	[Token(Token = "0x170001A4")]
	protected override string Title
	{
		[Token(Token = "0x6000EB6")]
		[Address(RVA = "0x1DDA400", Offset = "0x1DD8A00", VA = "0x181DDA400", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A5")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000EB7")]
		[Address(RVA = "0x1DDA3D0", Offset = "0x1DD89D0", VA = "0x181DDA3D0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A6")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000EB8")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x170001A7")]
	protected override string HeaderCloseEnabledKey
	{
		[Token(Token = "0x6000EB9")]
		[Address(RVA = "0x1DDA2A0", Offset = "0x1DD88A0", VA = "0x181DDA2A0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A8")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000EBA")]
		[Address(RVA = "0x1DDA2D0", Offset = "0x1DD88D0", VA = "0x181DDA2D0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A9")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000EBB")]
		[Address(RVA = "0x1DDA1B0", Offset = "0x1DD87B0", VA = "0x181DDA1B0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000EBC")]
	[Address(RVA = "0x1DD9DA0", Offset = "0x1DD83A0", VA = "0x181DD9DA0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000EBD")]
	[Address(RVA = "0x1DDA140", Offset = "0x1DD8740", VA = "0x181DDA140")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		return null;
	}

	[Token(Token = "0x6000EBE")]
	[Address(RVA = "0x1DDA0D0", Offset = "0x1DD86D0", VA = "0x181DDA0D0")]
	private static GisketchUIBindingDefinition Enabled(string key)
	{
		return null;
	}

	[Token(Token = "0x6000EBF")]
	[Address(RVA = "0x1DD9D00", Offset = "0x1DD8300", VA = "0x181DD9D00")]
	private static GisketchUIBindingDefinition BoundCta(string textKey)
	{
		return null;
	}

	[Token(Token = "0x6000EC0")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgForgotPasswordDialog()
	{
	}
}
