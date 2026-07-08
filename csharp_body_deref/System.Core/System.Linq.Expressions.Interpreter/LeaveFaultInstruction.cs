using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F9")]
internal sealed class LeaveFaultInstruction : Instruction
{
	[Token(Token = "0x4000247")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Instruction Instance;

	[Token(Token = "0x1700017C")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600064C")]
		[Address(RVA = "0x41A41A0", Offset = "0x41A41A0", VA = "0x41A41A0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700017D")]
	public override int ConsumedContinuations
	{
		[Token(Token = "0x600064D")]
		[Address(RVA = "0x41A41B0", Offset = "0x41A41B0", VA = "0x41A41B0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700017E")]
	public override string InstructionName
	{
		[Token(Token = "0x600064E")]
		[Address(RVA = "0x41A41C0", Offset = "0x41A41C0", VA = "0x41A41C0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x41A4190", Offset = "0x41A4190", VA = "0x41A4190")]
	private LeaveFaultInstruction()
	{
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x41A41F0", Offset = "0x41A41F0", VA = "0x41A41F0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
