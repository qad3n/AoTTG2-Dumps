// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.EnterTryCatchFinallyInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F4")]
internal sealed class EnterTryCatchFinallyInstruction : IndexedBranchInstruction
{
	[Token(Token = "0x4000241")]
	[FieldOffset(Offset = "0x18")]
	private readonly bool _hasFinally;

	[Token(Token = "0x4000242")]
	[FieldOffset(Offset = "0x20")]
	private TryCatchFinallyHandler _tryHandler;

	[Token(Token = "0x1700016F")]
	internal TryCatchFinallyHandler Handler
	{
		[Token(Token = "0x600062A")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000170")]
	public override int ProducedContinuations
	{
		[Token(Token = "0x600062B")]
		[Address(RVA = "0x2429AE0", Offset = "0x24280E0", VA = "0x182429AE0", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000171")]
	public override string InstructionName
	{
		[Token(Token = "0x6000630")]
		[Address(RVA = "0x242E240", Offset = "0x242C840", VA = "0x18242E240", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
	internal void SetTryHandler(TryCatchFinallyHandler tryHandler)
	{
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x242E200", Offset = "0x242C800", VA = "0x18242E200")]
	private EnterTryCatchFinallyInstruction(int targetIndex, bool hasFinally)
	{
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x242DD10", Offset = "0x242C310", VA = "0x18242DD10")]
	internal static EnterTryCatchFinallyInstruction CreateTryFinally(int labelIndex)
	{
		return null;
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x242DCC0", Offset = "0x242C2C0", VA = "0x18242DCC0")]
	internal static EnterTryCatchFinallyInstruction CreateTryCatch()
	{
		return null;
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x242DD70", Offset = "0x242C370", VA = "0x18242DD70", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x242E180", Offset = "0x242C780", VA = "0x18242E180", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
