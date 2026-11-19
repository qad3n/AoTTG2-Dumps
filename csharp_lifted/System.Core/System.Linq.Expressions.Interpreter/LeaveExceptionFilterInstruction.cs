// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LeaveExceptionFilterInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics.CodeAnalysis;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000FC")]
internal sealed class LeaveExceptionFilterInstruction : Instruction
{
	[Token(Token = "0x4000252")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly LeaveExceptionFilterInstruction Instance;

	[Token(Token = "0x17000183")]
	public override string InstructionName
	{
		[Token(Token = "0x6000661")]
		[Address(RVA = "0x5DDF000", Offset = "0x5DDE000", VA = "0x5DDF000", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000184")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000662")]
		[Address(RVA = "0x5DDF030", Offset = "0x5DDE030", VA = "0x5DDF030", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x5DDEFF0", Offset = "0x5DDDFF0", VA = "0x5DDEFF0")]
	private LeaveExceptionFilterInstruction()
	{
	}

	[Token(Token = "0x6000663")]
	[Address(RVA = "0x5DDF040", Offset = "0x5DDE040", VA = "0x5DDF040", Slot = "8")]
	[ExcludeFromCodeCoverage]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
