using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000232")]
internal sealed class TypeAsInstruction : Instruction
{
	[Token(Token = "0x400040A")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _type;

	[Token(Token = "0x1700023A")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000AF0")]
		[Address(RVA = "0x41DFBE0", Offset = "0x41DFBE0", VA = "0x41DFBE0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700023B")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AF1")]
		[Address(RVA = "0x41DFBF0", Offset = "0x41DFBF0", VA = "0x41DFBF0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700023C")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AF2")]
		[Address(RVA = "0x41DFC00", Offset = "0x41DFC00", VA = "0x41DFC00", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x41DFBB0", Offset = "0x41DFBB0", VA = "0x41DFBB0")]
	internal TypeAsInstruction(Type type)
	{
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x41DFC30", Offset = "0x41DFC30", VA = "0x41DFC30", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000AF4")]
	[Address(RVA = "0x41DFC90", Offset = "0x41DFC90", VA = "0x41DFC90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
