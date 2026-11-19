// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.EnterExceptionFilterInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics.CodeAnalysis;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000FB")]
internal sealed class EnterExceptionFilterInstruction : Instruction
{
	[Token(Token = "0x4000251")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly EnterExceptionFilterInstruction Instance;

	[Token(Token = "0x17000181")]
	public override string InstructionName
	{
		[Token(Token = "0x600065C")]
		[Address(RVA = "0x5DDEF30", Offset = "0x5DDDF30", VA = "0x5DDEF30", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000182")]
	public override int ProducedStack
	{
		[Token(Token = "0x600065D")]
		[Address(RVA = "0x5DDEF60", Offset = "0x5DDDF60", VA = "0x5DDEF60", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x5DDEF20", Offset = "0x5DDDF20", VA = "0x5DDEF20")]
	private EnterExceptionFilterInstruction()
	{
	}

	[Token(Token = "0x600065E")]
	[Address(RVA = "0x5DDEF70", Offset = "0x5DDDF70", VA = "0x5DDEF70", Slot = "8")]
	[ExcludeFromCodeCoverage]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
