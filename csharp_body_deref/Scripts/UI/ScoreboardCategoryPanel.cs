using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000602")]
internal class ScoreboardCategoryPanel : CategoryPanel
{
	[Token(Token = "0x17000BA2")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003D4F")]
		[Address(RVA = "0x3FC7A10", Offset = "0x3FC7A10", VA = "0x3FC7A10", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BA3")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6003D50")]
		[Address(RVA = "0x3FC7A20", Offset = "0x3FC7A20", VA = "0x3FC7A20", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003D51")]
	[Address(RVA = "0x3FC7A50", Offset = "0x3FC7A50", VA = "0x3FC7A50")]
	public ScoreboardCategoryPanel()
	{
	}
}
