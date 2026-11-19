// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.NewArrayBoundsInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000E4")]
internal sealed class NewArrayBoundsInstruction : Instruction
{
	[Token(Token = "0x400022E")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _elementType;

	[Token(Token = "0x400022F")]
	[FieldOffset(Offset = "0x18")]
	private readonly int _rank;

	[Token(Token = "0x1700014B")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60005D7")]
		[Address(RVA = "0x5DDB1D0", Offset = "0x5DDA1D0", VA = "0x5DDB1D0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700014C")]
	public override int ProducedStack
	{
		[Token(Token = "0x60005D8")]
		[Address(RVA = "0x5DDB1E0", Offset = "0x5DDA1E0", VA = "0x5DDB1E0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700014D")]
	public override string InstructionName
	{
		[Token(Token = "0x60005D9")]
		[Address(RVA = "0x5DDB1F0", Offset = "0x5DDA1F0", VA = "0x5DDB1F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x5DDB1A0", Offset = "0x5DDA1A0", VA = "0x5DDB1A0")]
	internal NewArrayBoundsInstruction(Type elementType, int rank)
	{
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x5DDB220", Offset = "0x5DDA220", VA = "0x5DDB220", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
