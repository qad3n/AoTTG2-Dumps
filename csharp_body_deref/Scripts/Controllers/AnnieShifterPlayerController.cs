using Characters;
using Il2CppDummyDll;
using Settings;

namespace Controllers;

[Token(Token = "0x200047E")]
internal class AnnieShifterPlayerController : BasePlayerController
{
	[Token(Token = "0x40013BD")]
	[FieldOffset(Offset = "0x58")]
	protected AnnieShifter _shifter;

	[Token(Token = "0x40013BE")]
	[FieldOffset(Offset = "0x60")]
	protected AnnieShifterInputSettings _shifterInput;

	[Token(Token = "0x600300F")]
	[Address(RVA = "0x3E7CB90", Offset = "0x3E7CB90", VA = "0x3E7CB90", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003010")]
	[Address(RVA = "0x3E7CF50", Offset = "0x3E7CF50", VA = "0x3E7CF50", Slot = "7")]
	protected override void UpdateActionInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003011")]
	[Address(RVA = "0x3E7D8F0", Offset = "0x3E7D8F0", VA = "0x3E7D8F0")]
	protected void AttackBrushFront()
	{
	}

	[Token(Token = "0x6003012")]
	[Address(RVA = "0x3E7D980", Offset = "0x3E7D980", VA = "0x3E7D980")]
	protected void AttackBrushHead()
	{
	}

	[Token(Token = "0x6003013")]
	[Address(RVA = "0x3E7DA10", Offset = "0x3E7DA10", VA = "0x3E7DA10")]
	protected void AttackGrabBottom()
	{
	}

	[Token(Token = "0x6003014")]
	[Address(RVA = "0x3E7DAA0", Offset = "0x3E7DAA0", VA = "0x3E7DAA0")]
	protected void AttackGrabMid()
	{
	}

	[Token(Token = "0x6003015")]
	[Address(RVA = "0x3E7DB30", Offset = "0x3E7DB30", VA = "0x3E7DB30")]
	protected void AttackGrabUp()
	{
	}

	[Token(Token = "0x6003016")]
	[Address(RVA = "0x3E7DFA0", Offset = "0x3E7DFA0", VA = "0x3E7DFA0")]
	public AnnieShifterPlayerController()
	{
	}
}
