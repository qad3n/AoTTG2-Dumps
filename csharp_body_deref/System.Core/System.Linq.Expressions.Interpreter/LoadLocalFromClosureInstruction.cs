using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001A5")]
internal sealed class LoadLocalFromClosureInstruction : LocalAccessInstruction
{
	[Token(Token = "0x170001D9")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000957")]
		[Address(RVA = "0x41D0E30", Offset = "0x41D0E30", VA = "0x41D0E30", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001DA")]
	public override string InstructionName
	{
		[Token(Token = "0x6000958")]
		[Address(RVA = "0x41D0E40", Offset = "0x41D0E40", VA = "0x41D0E40", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x41D0E10", Offset = "0x41D0E10", VA = "0x41D0E10")]
	internal LoadLocalFromClosureInstruction(int index)
	{
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x41D0E70", Offset = "0x41D0E70", VA = "0x41D0E70", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
