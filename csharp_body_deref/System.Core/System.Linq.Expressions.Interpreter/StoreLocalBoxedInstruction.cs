using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001AA")]
internal sealed class StoreLocalBoxedInstruction : LocalAccessInstruction
{
	[Token(Token = "0x170001E5")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600096F")]
		[Address(RVA = "0x41D14F0", Offset = "0x41D14F0", VA = "0x41D14F0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E6")]
	public override string InstructionName
	{
		[Token(Token = "0x6000970")]
		[Address(RVA = "0x41D1500", Offset = "0x41D1500", VA = "0x41D1500", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600096E")]
	[Address(RVA = "0x41D14D0", Offset = "0x41D14D0", VA = "0x41D14D0")]
	internal StoreLocalBoxedInstruction(int index)
	{
	}

	[Token(Token = "0x6000971")]
	[Address(RVA = "0x41D1530", Offset = "0x41D1530", VA = "0x41D1530", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
