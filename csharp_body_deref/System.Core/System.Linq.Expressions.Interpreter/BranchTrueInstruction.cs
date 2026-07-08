using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000EF")]
internal sealed class BranchTrueInstruction : OffsetInstruction
{
	[Token(Token = "0x4000237")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction[] s_cache;

	[Token(Token = "0x17000161")]
	public override Instruction[] Cache
	{
		[Token(Token = "0x600060D")]
		[Address(RVA = "0x41A26A0", Offset = "0x41A26A0", VA = "0x41A26A0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000162")]
	public override string InstructionName
	{
		[Token(Token = "0x600060E")]
		[Address(RVA = "0x41A2730", Offset = "0x41A2730", VA = "0x41A2730", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000163")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600060F")]
		[Address(RVA = "0x41A2760", Offset = "0x41A2760", VA = "0x41A2760", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x41A2770", Offset = "0x41A2770", VA = "0x41A2770", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x41A27D0", Offset = "0x41A27D0", VA = "0x41A27D0")]
	public BranchTrueInstruction()
	{
	}
}
