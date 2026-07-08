using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000231")]
internal sealed class TypeIsInstruction : Instruction
{
	[Token(Token = "0x4000409")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _type;

	[Token(Token = "0x17000237")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000AEA")]
		[Address(RVA = "0x41DFAA0", Offset = "0x41DFAA0", VA = "0x41DFAA0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000238")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AEB")]
		[Address(RVA = "0x41DFAB0", Offset = "0x41DFAB0", VA = "0x41DFAB0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000239")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AEC")]
		[Address(RVA = "0x41DFAC0", Offset = "0x41DFAC0", VA = "0x41DFAC0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x41DFA70", Offset = "0x41DFA70", VA = "0x41DFA70")]
	internal TypeIsInstruction(Type type)
	{
	}

	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x41DFAF0", Offset = "0x41DFAF0", VA = "0x41DFAF0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x41DFB50", Offset = "0x41DFB50", VA = "0x41DFB50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
