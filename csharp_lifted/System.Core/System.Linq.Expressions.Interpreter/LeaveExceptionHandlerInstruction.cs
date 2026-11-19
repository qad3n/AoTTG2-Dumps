// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LeaveExceptionHandlerInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000FE")]
internal sealed class LeaveExceptionHandlerInstruction : IndexedBranchInstruction
{
	[Token(Token = "0x4000256")]
	[FieldOffset(Offset = "0x0")]
	private static readonly LeaveExceptionHandlerInstruction[] s_cache;

	[Token(Token = "0x4000257")]
	[FieldOffset(Offset = "0x14")]
	private readonly bool _hasValue;

	[Token(Token = "0x17000188")]
	public override string InstructionName
	{
		[Token(Token = "0x600066C")]
		[Address(RVA = "0x5DDF200", Offset = "0x5DDE200", VA = "0x5DDF200", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000189")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600066D")]
		[Address(RVA = "0x5DDF230", Offset = "0x5DDE230", VA = "0x5DDF230", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700018A")]
	public override int ProducedStack
	{
		[Token(Token = "0x600066E")]
		[Address(RVA = "0x5DDF240", Offset = "0x5DDE240", VA = "0x5DDF240", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x5DDF1E0", Offset = "0x5DDE1E0", VA = "0x5DDF1E0")]
	private LeaveExceptionHandlerInstruction(int labelIndex, bool hasValue)
	{
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x5DDF250", Offset = "0x5DDE250", VA = "0x5DDF250")]
	internal static LeaveExceptionHandlerInstruction Create(int labelIndex, bool hasValue)
	{
		return null;
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x5DDF370", Offset = "0x5DDE370", VA = "0x5DDF370", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
