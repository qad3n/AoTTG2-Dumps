using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F0")]
internal sealed class CoalescingBranchInstruction : OffsetInstruction
{
	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction[] s_cache;

	[Token(Token = "0x17000164")]
	public override Instruction[] Cache
	{
		[Token(Token = "0x6000612")]
		[Address(RVA = "0x41A27E0", Offset = "0x41A27E0", VA = "0x41A27E0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000165")]
	public override string InstructionName
	{
		[Token(Token = "0x6000613")]
		[Address(RVA = "0x41A2870", Offset = "0x41A2870", VA = "0x41A2870", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000166")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000614")]
		[Address(RVA = "0x41A28A0", Offset = "0x41A28A0", VA = "0x41A28A0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000167")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000615")]
		[Address(RVA = "0x41A28B0", Offset = "0x41A28B0", VA = "0x41A28B0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x41A28C0", Offset = "0x41A28C0", VA = "0x41A28C0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000617")]
	[Address(RVA = "0x41A28F0", Offset = "0x41A28F0", VA = "0x41A28F0")]
	public CoalescingBranchInstruction()
	{
	}
}
