using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F3")]
internal sealed class GotoInstruction : IndexedBranchInstruction
{
	[Token(Token = "0x400023D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly GotoInstruction[] s_cache;

	[Token(Token = "0x400023E")]
	[FieldOffset(Offset = "0x14")]
	private readonly bool _hasResult;

	[Token(Token = "0x400023F")]
	[FieldOffset(Offset = "0x15")]
	private readonly bool _hasValue;

	[Token(Token = "0x4000240")]
	[FieldOffset(Offset = "0x16")]
	private readonly bool _labelTargetGetsValue;

	[Token(Token = "0x1700016C")]
	public override string InstructionName
	{
		[Token(Token = "0x6000623")]
		[Address(RVA = "0x41A2DD0", Offset = "0x41A2DD0", VA = "0x41A2DD0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016D")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000624")]
		[Address(RVA = "0x41A2E00", Offset = "0x41A2E00", VA = "0x41A2E00", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700016E")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000625")]
		[Address(RVA = "0x41A2E10", Offset = "0x41A2E10", VA = "0x41A2E10", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x41A2E20", Offset = "0x41A2E20", VA = "0x41A2E20")]
	private GotoInstruction(int targetIndex, bool hasResult, bool hasValue, bool labelTargetGetsValue)
	{
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x41A2E60", Offset = "0x41A2E60", VA = "0x41A2E60")]
	internal static GotoInstruction Create(int labelIndex, bool hasResult, bool hasValue, bool labelTargetGetsValue)
	{
		return null;
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x41A2FC0", Offset = "0x41A2FC0", VA = "0x41A2FC0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
