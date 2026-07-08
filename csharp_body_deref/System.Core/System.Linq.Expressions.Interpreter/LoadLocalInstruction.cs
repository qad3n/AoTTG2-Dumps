using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001A3")]
internal sealed class LoadLocalInstruction : LocalAccessInstruction, IBoxableInstruction
{
	[Token(Token = "0x170001D5")]
	public override int ProducedStack
	{
		[Token(Token = "0x600094E")]
		[Address(RVA = "0x41D0B10", Offset = "0x41D0B10", VA = "0x41D0B10", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001D6")]
	public override string InstructionName
	{
		[Token(Token = "0x600094F")]
		[Address(RVA = "0x41D0B20", Offset = "0x41D0B20", VA = "0x41D0B20", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x41D0AF0", Offset = "0x41D0AF0", VA = "0x41D0AF0")]
	internal LoadLocalInstruction(int index)
	{
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x41D0B50", Offset = "0x41D0B50", VA = "0x41D0B50", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x41D0BE0", Offset = "0x41D0BE0", VA = "0x41D0BE0", Slot = "11")]
	public Instruction BoxIfIndexMatches(int index)
	{
		return null;
	}
}
