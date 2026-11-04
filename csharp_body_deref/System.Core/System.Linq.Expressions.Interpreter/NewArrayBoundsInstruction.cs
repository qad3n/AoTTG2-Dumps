// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.NewArrayBoundsInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000E3")]
internal sealed class NewArrayBoundsInstruction : Instruction
{
	[Token(Token = "0x4000225")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _elementType;

	[Token(Token = "0x4000226")]
	[FieldOffset(Offset = "0x18")]
	private readonly int _rank;

	[Token(Token = "0x17000149")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60005CC")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700014A")]
	public override int ProducedStack
	{
		[Token(Token = "0x60005CD")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700014B")]
	public override string InstructionName
	{
		[Token(Token = "0x60005CE")]
		[Address(RVA = "0x243DA20", Offset = "0x243C020", VA = "0x18243DA20", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x1A2A540", Offset = "0x1A28B40", VA = "0x181A2A540")]
	internal NewArrayBoundsInstruction(Type elementType, int rank)
	{
	}

	[Token(Token = "0x60005CF")]
	[Address(RVA = "0x243D910", Offset = "0x243BF10", VA = "0x18243D910", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
