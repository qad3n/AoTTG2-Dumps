// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LeaveExceptionHandlerInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000FD")]
internal sealed class LeaveExceptionHandlerInstruction : IndexedBranchInstruction
{
	[Token(Token = "0x400024D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly LeaveExceptionHandlerInstruction[] s_cache;

	[Token(Token = "0x400024E")]
	[FieldOffset(Offset = "0x18")]
	private readonly bool _hasValue;

	[Token(Token = "0x17000186")]
	public override string InstructionName
	{
		[Token(Token = "0x6000661")]
		[Address(RVA = "0x243BEC0", Offset = "0x243A4C0", VA = "0x18243BEC0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000187")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000662")]
		[Address(RVA = "0x2429AE0", Offset = "0x24280E0", VA = "0x182429AE0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000188")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000663")]
		[Address(RVA = "0x2429AE0", Offset = "0x24280E0", VA = "0x182429AE0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x242E200", Offset = "0x242C800", VA = "0x18242E200")]
	private LeaveExceptionHandlerInstruction(int labelIndex, bool hasValue)
	{
	}

	[Token(Token = "0x6000664")]
	[Address(RVA = "0x243BCB0", Offset = "0x243A2B0", VA = "0x18243BCB0")]
	internal static LeaveExceptionHandlerInstruction Create(int labelIndex, bool hasValue)
	{
		return null;
	}

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x243BE00", Offset = "0x243A400", VA = "0x18243BE00", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
