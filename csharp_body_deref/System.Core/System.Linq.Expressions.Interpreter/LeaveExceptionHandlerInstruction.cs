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
	[FieldOffset(Offset = "0x14")]
	private readonly bool _hasValue;

	[Token(Token = "0x17000186")]
	public override string InstructionName
	{
		[Token(Token = "0x6000662")]
		[Address(RVA = "0x44C9660", Offset = "0x44C9660", VA = "0x44C9660", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000187")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000663")]
		[Address(RVA = "0x44C9690", Offset = "0x44C9690", VA = "0x44C9690", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000188")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000664")]
		[Address(RVA = "0x44C96A0", Offset = "0x44C96A0", VA = "0x44C96A0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x44C9640", Offset = "0x44C9640", VA = "0x44C9640")]
	private LeaveExceptionHandlerInstruction(int labelIndex, bool hasValue)
	{
	}

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x44C96B0", Offset = "0x44C96B0", VA = "0x44C96B0")]
	internal static LeaveExceptionHandlerInstruction Create(int labelIndex, bool hasValue)
	{
		return null;
	}

	[Token(Token = "0x6000666")]
	[Address(RVA = "0x44C97D0", Offset = "0x44C97D0", VA = "0x44C97D0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
