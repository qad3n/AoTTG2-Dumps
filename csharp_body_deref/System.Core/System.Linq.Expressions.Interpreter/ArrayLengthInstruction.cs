using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000E6")]
internal sealed class ArrayLengthInstruction : Instruction
{
	[Token(Token = "0x4000229")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ArrayLengthInstruction Instance;

	[Token(Token = "0x17000151")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60005DC")]
		[Address(RVA = "0x41A0740", Offset = "0x41A0740", VA = "0x41A0740", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000152")]
	public override int ProducedStack
	{
		[Token(Token = "0x60005DD")]
		[Address(RVA = "0x41A0750", Offset = "0x41A0750", VA = "0x41A0750", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000153")]
	public override string InstructionName
	{
		[Token(Token = "0x60005DE")]
		[Address(RVA = "0x41A0760", Offset = "0x41A0760", VA = "0x41A0760", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x41A0790", Offset = "0x41A0790", VA = "0x41A0790")]
	private ArrayLengthInstruction()
	{
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x41A07A0", Offset = "0x41A07A0", VA = "0x41A07A0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
