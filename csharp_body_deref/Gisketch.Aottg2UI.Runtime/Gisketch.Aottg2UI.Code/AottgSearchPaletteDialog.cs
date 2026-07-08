using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200006A")]
[AottgDialog("aottg-search-palette")]
public sealed class AottgSearchPaletteDialog : AottgDialog
{
	[Token(Token = "0x1700005B")]
	protected override string Title
	{
		[Token(Token = "0x60002D0")]
		[Address(RVA = "0x39F60B0", Offset = "0x39F60B0", VA = "0x39F60B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005C")]
	protected override string TitleIcon
	{
		[Token(Token = "0x60002D1")]
		[Address(RVA = "0x39F60E0", Offset = "0x39F60E0", VA = "0x39F60E0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005D")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60002D2")]
		[Address(RVA = "0x39F6110", Offset = "0x39F6110", VA = "0x39F6110", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x39F62A0", Offset = "0x39F62A0", VA = "0x39F62A0", Slot = "18")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x39F63D0", Offset = "0x39F63D0", VA = "0x39F63D0")]
	public AottgSearchPaletteDialog()
	{
	}
}
