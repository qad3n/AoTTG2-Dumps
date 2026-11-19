// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.GotoInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F4")]
internal sealed class GotoInstruction : IndexedBranchInstruction
{
	[Token(Token = "0x4000246")]
	[FieldOffset(Offset = "0x0")]
	private static readonly GotoInstruction[] s_cache;

	[Token(Token = "0x4000247")]
	[FieldOffset(Offset = "0x14")]
	private readonly bool _hasResult;

	[Token(Token = "0x4000248")]
	[FieldOffset(Offset = "0x15")]
	private readonly bool _hasValue;

	[Token(Token = "0x4000249")]
	[FieldOffset(Offset = "0x16")]
	private readonly bool _labelTargetGetsValue;

	[Token(Token = "0x1700016E")]
	public override string InstructionName
	{
		[Token(Token = "0x600062D")]
		[Address(RVA = "0x5DDDC20", Offset = "0x5DDCC20", VA = "0x5DDDC20", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016F")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600062E")]
		[Address(RVA = "0x5DDDC50", Offset = "0x5DDCC50", VA = "0x5DDDC50", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000170")]
	public override int ProducedStack
	{
		[Token(Token = "0x600062F")]
		[Address(RVA = "0x5DDDC60", Offset = "0x5DDCC60", VA = "0x5DDDC60", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x5DDDC70", Offset = "0x5DDCC70", VA = "0x5DDDC70")]
	private GotoInstruction(int targetIndex, bool hasResult, bool hasValue, bool labelTargetGetsValue)
	{
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x5DDDCB0", Offset = "0x5DDCCB0", VA = "0x5DDDCB0")]
	internal static GotoInstruction Create(int labelIndex, bool hasResult, bool hasValue, bool labelTargetGetsValue)
	{
		return null;
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x5DDDE10", Offset = "0x5DDCE10", VA = "0x5DDDE10", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
