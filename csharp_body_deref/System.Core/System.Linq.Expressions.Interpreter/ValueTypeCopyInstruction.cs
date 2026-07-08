using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001AC")]
internal sealed class ValueTypeCopyInstruction : Instruction
{
	[Token(Token = "0x400038B")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ValueTypeCopyInstruction Instruction;

	[Token(Token = "0x170001EA")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000977")]
		[Address(RVA = "0x41D17D0", Offset = "0x41D17D0", VA = "0x41D17D0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001EB")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000978")]
		[Address(RVA = "0x41D17E0", Offset = "0x41D17E0", VA = "0x41D17E0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001EC")]
	public override string InstructionName
	{
		[Token(Token = "0x6000979")]
		[Address(RVA = "0x41D17F0", Offset = "0x41D17F0", VA = "0x41D17F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x41D1820", Offset = "0x41D1820", VA = "0x41D1820", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x41D1870", Offset = "0x41D1870", VA = "0x41D1870")]
	public ValueTypeCopyInstruction()
	{
	}
}
