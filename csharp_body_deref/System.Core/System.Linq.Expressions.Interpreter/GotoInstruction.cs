// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.GotoInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x44C7ED0", Offset = "0x44C7ED0", VA = "0x44C7ED0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016D")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000624")]
		[Address(RVA = "0x44C7F00", Offset = "0x44C7F00", VA = "0x44C7F00", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700016E")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000625")]
		[Address(RVA = "0x44C7F10", Offset = "0x44C7F10", VA = "0x44C7F10", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x44C7F20", Offset = "0x44C7F20", VA = "0x44C7F20")]
	private GotoInstruction(int targetIndex, bool hasResult, bool hasValue, bool labelTargetGetsValue)
	{
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x44C7F60", Offset = "0x44C7F60", VA = "0x44C7F60")]
	internal static GotoInstruction Create(int labelIndex, bool hasResult, bool hasValue, bool labelTargetGetsValue)
	{
		return null;
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x44C80C0", Offset = "0x44C80C0", VA = "0x44C80C0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
