using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000635")]
internal class DuelCategoryPanel : CategoryPanel
{
	[Token(Token = "0x17000BFF")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003EE1")]
		[Address(RVA = "0x3FE6860", Offset = "0x3FE6860", VA = "0x3FE6860", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C00")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6003EE2")]
		[Address(RVA = "0x3FE6870", Offset = "0x3FE6870", VA = "0x3FE6870", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003EE3")]
	[Address(RVA = "0x3FE68A0", Offset = "0x3FE68A0", VA = "0x3FE68A0")]
	public DuelCategoryPanel()
	{
	}
}
