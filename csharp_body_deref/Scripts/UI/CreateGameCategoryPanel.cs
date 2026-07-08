using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000572")]
internal class CreateGameCategoryPanel : CategoryPanel
{
	[Token(Token = "0x17000AF1")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x600390F")]
		[Address(RVA = "0x3F61FD0", Offset = "0x3F61FD0", VA = "0x3F61FD0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000AF2")]
	protected override bool DoublePanelDivider
	{
		[Token(Token = "0x6003910")]
		[Address(RVA = "0x3F61FE0", Offset = "0x3F61FE0", VA = "0x3F61FE0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003911")]
	[Address(RVA = "0x3F61FF0", Offset = "0x3F61FF0", VA = "0x3F61FF0")]
	public CreateGameCategoryPanel()
	{
	}
}
