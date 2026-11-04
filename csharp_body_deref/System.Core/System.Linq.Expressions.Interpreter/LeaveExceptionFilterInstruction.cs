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

[Token(Token = "0x20000FB")]
internal sealed class LeaveExceptionFilterInstruction : Instruction
{
	[Token(Token = "0x4000249")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly LeaveExceptionFilterInstruction Instance;

	[Token(Token = "0x17000181")]
	public override string InstructionName
	{
		[Token(Token = "0x6000656")]
		[Address(RVA = "0x243BC80", Offset = "0x243A280", VA = "0x18243BC80", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000182")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000657")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	private LeaveExceptionFilterInstruction()
	{
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "8")]
	[ExcludeFromCodeCoverage]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
