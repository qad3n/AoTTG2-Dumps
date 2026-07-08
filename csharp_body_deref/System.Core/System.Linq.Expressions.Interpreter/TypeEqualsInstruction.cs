using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000233")]
internal sealed class TypeEqualsInstruction : Instruction
{
	[Token(Token = "0x400040B")]
	[FieldOffset(Offset = "0x0")]
	public static readonly TypeEqualsInstruction Instance;

	[Token(Token = "0x1700023D")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000AF5")]
		[Address(RVA = "0x41DFCF0", Offset = "0x41DFCF0", VA = "0x41DFCF0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700023E")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AF6")]
		[Address(RVA = "0x41DFD00", Offset = "0x41DFD00", VA = "0x41DFD00", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700023F")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AF7")]
		[Address(RVA = "0x41DFD10", Offset = "0x41DFD10", VA = "0x41DFD10", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AF8")]
	[Address(RVA = "0x41DFD40", Offset = "0x41DFD40", VA = "0x41DFD40")]
	private TypeEqualsInstruction()
	{
	}

	[Token(Token = "0x6000AF9")]
	[Address(RVA = "0x41DFD50", Offset = "0x41DFD50", VA = "0x41DFD50", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
