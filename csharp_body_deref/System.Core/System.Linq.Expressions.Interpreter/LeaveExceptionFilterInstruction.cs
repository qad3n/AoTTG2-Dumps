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
		[Token(Token = "0x6000657")]
		[Address(RVA = "0x44C9460", Offset = "0x44C9460", VA = "0x44C9460", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000182")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000658")]
		[Address(RVA = "0x44C9490", Offset = "0x44C9490", VA = "0x44C9490", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x44C9450", Offset = "0x44C9450", VA = "0x44C9450")]
	private LeaveExceptionFilterInstruction()
	{
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x44C94A0", Offset = "0x44C94A0", VA = "0x44C94A0", Slot = "8")]
	[ExcludeFromCodeCoverage]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
