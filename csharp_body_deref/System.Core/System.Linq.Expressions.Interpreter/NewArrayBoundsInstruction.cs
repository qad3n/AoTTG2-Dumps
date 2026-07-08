using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000E3")]
internal sealed class NewArrayBoundsInstruction : Instruction
{
	[Token(Token = "0x4000225")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _elementType;

	[Token(Token = "0x4000226")]
	[FieldOffset(Offset = "0x18")]
	private readonly int _rank;

	[Token(Token = "0x17000149")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60005CD")]
		[Address(RVA = "0x41A0320", Offset = "0x41A0320", VA = "0x41A0320", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700014A")]
	public override int ProducedStack
	{
		[Token(Token = "0x60005CE")]
		[Address(RVA = "0x41A0330", Offset = "0x41A0330", VA = "0x41A0330", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700014B")]
	public override string InstructionName
	{
		[Token(Token = "0x60005CF")]
		[Address(RVA = "0x41A0340", Offset = "0x41A0340", VA = "0x41A0340", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x41A02F0", Offset = "0x41A02F0", VA = "0x41A02F0")]
	internal NewArrayBoundsInstruction(Type elementType, int rank)
	{
	}

	[Token(Token = "0x60005D0")]
	[Address(RVA = "0x41A0370", Offset = "0x41A0370", VA = "0x41A0370", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
