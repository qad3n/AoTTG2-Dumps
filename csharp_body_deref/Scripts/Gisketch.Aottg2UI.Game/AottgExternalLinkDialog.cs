using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200012F")]
[AottgDialog("external-link-confirm")]
public sealed class AottgExternalLinkDialog : AottgDialog
{
	[Token(Token = "0x4000700")]
	public const string Id = "external-link-confirm";

	[Token(Token = "0x170000C4")]
	protected override string Title
	{
		[Token(Token = "0x600065A")]
		[Address(RVA = "0x4073850", Offset = "0x4073850", VA = "0x4073850", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C5")]
	protected override string TitleIcon
	{
		[Token(Token = "0x600065B")]
		[Address(RVA = "0x4073880", Offset = "0x4073880", VA = "0x4073880", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C6")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x600065C")]
		[Address(RVA = "0x40738B0", Offset = "0x40738B0", VA = "0x40738B0", Slot = "12")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x170000C7")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x600065D")]
		[Address(RVA = "0x40738C0", Offset = "0x40738C0", VA = "0x40738C0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C8")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x600065E")]
		[Address(RVA = "0x40738D0", Offset = "0x40738D0", VA = "0x40738D0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x40739A0", Offset = "0x40739A0", VA = "0x40739A0", Slot = "18")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x4073BE0", Offset = "0x4073BE0", VA = "0x4073BE0", Slot = "19")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x4073C70", Offset = "0x4073C70", VA = "0x4073C70")]
	public AottgExternalLinkDialog()
	{
	}
}
