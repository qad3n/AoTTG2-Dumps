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
	[FieldOffset(Offset = "0x14")]
	private readonly bool _hasFinally;

	[Token(Token = "0x4000242")]
	[FieldOffset(Offset = "0x18")]
	private TryCatchFinallyHandler _tryHandler;

	[Token(Token = "0x1700016F")]
	internal TryCatchFinallyHandler Handler
	{
		[Token(Token = "0x600062B")]
		[Address(RVA = "0x44C8210", Offset = "0x44C8210", VA = "0x44C8210")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000170")]
	public override int ProducedContinuations
	{
		[Token(Token = "0x600062C")]
		[Address(RVA = "0x44C8220", Offset = "0x44C8220", VA = "0x44C8220", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000171")]
	public override string InstructionName
	{
		[Token(Token = "0x6000631")]
		[Address(RVA = "0x44C8920", Offset = "0x44C8920", VA = "0x44C8920", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x44C8200", Offset = "0x44C8200", VA = "0x44C8200")]
	internal void SetTryHandler(TryCatchFinallyHandler tryHandler)
	{
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x44C8230", Offset = "0x44C8230", VA = "0x44C8230")]
	private EnterTryCatchFinallyInstruction(int targetIndex, bool hasFinally)
	{
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x44C8250", Offset = "0x44C8250", VA = "0x44C8250")]
	internal static EnterTryCatchFinallyInstruction CreateTryFinally(int labelIndex)
	{
		return null;
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x44C82A0", Offset = "0x44C82A0", VA = "0x44C82A0")]
	internal static EnterTryCatchFinallyInstruction CreateTryCatch()
	{
		return null;
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x44C82F0", Offset = "0x44C82F0", VA = "0x44C82F0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x44C8970", Offset = "0x44C8970", VA = "0x44C8970", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
