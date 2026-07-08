using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000EE")]
internal sealed class BranchFalseInstruction : OffsetInstruction
{
	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction[] s_cache;

	[Token(Token = "0x1700015E")]
	public override Instruction[] Cache
	{
		[Token(Token = "0x6000608")]
		[Address(RVA = "0x41A2560", Offset = "0x41A2560", VA = "0x41A2560", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015F")]
	public override string InstructionName
	{
		[Token(Token = "0x6000609")]
		[Address(RVA = "0x41A25F0", Offset = "0x41A25F0", VA = "0x41A25F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000160")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600060A")]
		[Address(RVA = "0x41A2620", Offset = "0x41A2620", VA = "0x41A2620", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x41A2630", Offset = "0x41A2630", VA = "0x41A2630", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x41A2690", Offset = "0x41A2690", VA = "0x41A2690")]
	public BranchFalseInstruction()
	{
	}
}
