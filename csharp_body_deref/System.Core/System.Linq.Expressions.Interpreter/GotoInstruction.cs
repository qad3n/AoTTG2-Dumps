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
	[FieldOffset(Offset = "0x18")]
	private readonly bool _hasResult;

	[Token(Token = "0x400023F")]
	[FieldOffset(Offset = "0x19")]
	private readonly bool _hasValue;

	[Token(Token = "0x4000240")]
	[FieldOffset(Offset = "0x1A")]
	private readonly bool _labelTargetGetsValue;

	[Token(Token = "0x1700016C")]
	public override string InstructionName
	{
		[Token(Token = "0x6000622")]
		[Address(RVA = "0x2439EA0", Offset = "0x24384A0", VA = "0x182439EA0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016D")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000623")]
		[Address(RVA = "0x2429AA0", Offset = "0x24280A0", VA = "0x182429AA0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700016E")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000624")]
		[Address(RVA = "0x2429AE0", Offset = "0x24280E0", VA = "0x182429AE0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x2439E60", Offset = "0x2438460", VA = "0x182439E60")]
	private GotoInstruction(int targetIndex, bool hasResult, bool hasValue, bool labelTargetGetsValue)
	{
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x2439BA0", Offset = "0x24381A0", VA = "0x182439BA0")]
	internal static GotoInstruction Create(int labelIndex, bool hasResult, bool hasValue, bool labelTargetGetsValue)
	{
		return null;
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x2439D10", Offset = "0x2438310", VA = "0x182439D10", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
