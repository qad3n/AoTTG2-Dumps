using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000139")]
[AottgDialog("main-menu-forgot-password")]
public sealed class AottgForgotPasswordDialog : AottgDialog
{
	[Token(Token = "0x4000735")]
	public const string Id = "main-menu-forgot-password";

	[Token(Token = "0x4000736")]
	public const string EmailInputId = "account-forgot-email";

	[Token(Token = "0x170000CA")]
	protected override string Title
	{
		[Token(Token = "0x6000695")]
		[Address(RVA = "0x40770E0", Offset = "0x40770E0", VA = "0x40770E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CB")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000696")]
		[Address(RVA = "0x4077150", Offset = "0x4077150", VA = "0x4077150", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CC")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000697")]
		[Address(RVA = "0x4077180", Offset = "0x4077180", VA = "0x4077180", Slot = "12")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x170000CD")]
	protected override string HeaderCloseEnabledKey
	{
		[Token(Token = "0x6000698")]
		[Address(RVA = "0x4077190", Offset = "0x4077190", VA = "0x4077190", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CE")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000699")]
		[Address(RVA = "0x40771C0", Offset = "0x40771C0", VA = "0x40771C0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CF")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x600069A")]
		[Address(RVA = "0x4077290", Offset = "0x4077290", VA = "0x4077290", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600069B")]
	[Address(RVA = "0x4077350", Offset = "0x4077350", VA = "0x4077350", Slot = "18")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x4077640", Offset = "0x4077640", VA = "0x4077640")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		return null;
	}

	[Token(Token = "0x600069D")]
	[Address(RVA = "0x40776B0", Offset = "0x40776B0", VA = "0x40776B0")]
	private static GisketchUIBindingDefinition Enabled(string key)
	{
		return null;
	}

	[Token(Token = "0x600069E")]
	[Address(RVA = "0x4077720", Offset = "0x4077720", VA = "0x4077720")]
	private static GisketchUIBindingDefinition BoundCta(string textKey)
	{
		return null;
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x40777B0", Offset = "0x40777B0", VA = "0x40777B0")]
	public AottgForgotPasswordDialog()
	{
	}
}
