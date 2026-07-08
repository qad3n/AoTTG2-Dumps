using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F7")]
internal sealed class LeaveFinallyInstruction : Instruction
{
	[Token(Token = "0x4000245")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Instruction Instance;

	[Token(Token = "0x17000178")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000641")]
		[Address(RVA = "0x41A3E70", Offset = "0x41A3E70", VA = "0x41A3E70", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000179")]
	public override string InstructionName
	{
		[Token(Token = "0x6000642")]
		[Address(RVA = "0x41A3E80", Offset = "0x41A3E80", VA = "0x41A3E80", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000640")]
	[Address(RVA = "0x41A3E60", Offset = "0x41A3E60", VA = "0x41A3E60")]
	private LeaveFinallyInstruction()
	{
	}

	[Token(Token = "0x6000643")]
	[Address(RVA = "0x41A3EB0", Offset = "0x41A3EB0", VA = "0x41A3EB0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
