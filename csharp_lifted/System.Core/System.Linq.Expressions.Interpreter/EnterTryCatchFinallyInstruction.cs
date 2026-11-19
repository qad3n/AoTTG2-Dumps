// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.EnterTryCatchFinallyInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F5")]
internal sealed class EnterTryCatchFinallyInstruction : IndexedBranchInstruction
{
	[Token(Token = "0x400024A")]
	[FieldOffset(Offset = "0x14")]
	private readonly bool _hasFinally;

	[Token(Token = "0x400024B")]
	[FieldOffset(Offset = "0x18")]
	private TryCatchFinallyHandler _tryHandler;

	[Token(Token = "0x17000171")]
	internal TryCatchFinallyHandler Handler
	{
		[Token(Token = "0x6000635")]
		[Address(RVA = "0x5DDDF50", Offset = "0x5DDCF50", VA = "0x5DDDF50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000172")]
	public override int ProducedContinuations
	{
		[Token(Token = "0x6000636")]
		[Address(RVA = "0x5DDDF60", Offset = "0x5DDCF60", VA = "0x5DDDF60", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000173")]
	public override string InstructionName
	{
		[Token(Token = "0x600063B")]
		[Address(RVA = "0x5DDE520", Offset = "0x5DDD520", VA = "0x5DDE520", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x5DDDF40", Offset = "0x5DDCF40", VA = "0x5DDDF40")]
	internal void SetTryHandler(TryCatchFinallyHandler tryHandler)
	{
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x5DDDF70", Offset = "0x5DDCF70", VA = "0x5DDDF70")]
	private EnterTryCatchFinallyInstruction(int targetIndex, bool hasFinally)
	{
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x5DDDF90", Offset = "0x5DDCF90", VA = "0x5DDDF90")]
	internal static EnterTryCatchFinallyInstruction CreateTryFinally(int labelIndex)
	{
		return null;
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x5DDDFE0", Offset = "0x5DDCFE0", VA = "0x5DDDFE0")]
	internal static EnterTryCatchFinallyInstruction CreateTryCatch()
	{
		return null;
	}

	[Token(Token = "0x600063A")]
	[Address(RVA = "0x5DDE030", Offset = "0x5DDD030", VA = "0x5DDE030", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x600063C")]
	[Address(RVA = "0x5DDE570", Offset = "0x5DDD570", VA = "0x5DDE570", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
