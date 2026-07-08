using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F1")]
internal class BranchInstruction : OffsetInstruction
{
	[Token(Token = "0x4000239")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction[][][] s_caches;

	[Token(Token = "0x400023A")]
	[FieldOffset(Offset = "0x14")]
	internal readonly bool _hasResult;

	[Token(Token = "0x400023B")]
	[FieldOffset(Offset = "0x15")]
	internal readonly bool _hasValue;

	[Token(Token = "0x17000168")]
	public override Instruction[] Cache
	{
		[Token(Token = "0x6000618")]
		[Address(RVA = "0x41A2900", Offset = "0x41A2900", VA = "0x41A2900", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000169")]
	public override string InstructionName
	{
		[Token(Token = "0x600061B")]
		[Address(RVA = "0x41A2BD0", Offset = "0x41A2BD0", VA = "0x41A2BD0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016A")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600061C")]
		[Address(RVA = "0x41A2C00", Offset = "0x41A2C00", VA = "0x41A2C00", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700016B")]
	public override int ProducedStack
	{
		[Token(Token = "0x600061D")]
		[Address(RVA = "0x41A2C10", Offset = "0x41A2C10", VA = "0x41A2C10", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x41A2B80", Offset = "0x41A2B80", VA = "0x41A2B80")]
	internal BranchInstruction()
	{
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x41A2BA0", Offset = "0x41A2BA0", VA = "0x41A2BA0")]
	public BranchInstruction(bool hasResult, bool hasValue)
	{
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x41A2C20", Offset = "0x41A2C20", VA = "0x41A2C20", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
