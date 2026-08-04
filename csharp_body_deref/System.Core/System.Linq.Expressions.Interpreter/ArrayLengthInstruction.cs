// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.ArrayLengthInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000E6")]
internal sealed class ArrayLengthInstruction : Instruction
{
	[Token(Token = "0x4000229")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ArrayLengthInstruction Instance;

	[Token(Token = "0x17000151")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60005DC")]
		[Address(RVA = "0x44C5840", Offset = "0x44C5840", VA = "0x44C5840", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000152")]
	public override int ProducedStack
	{
		[Token(Token = "0x60005DD")]
		[Address(RVA = "0x44C5850", Offset = "0x44C5850", VA = "0x44C5850", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000153")]
	public override string InstructionName
	{
		[Token(Token = "0x60005DE")]
		[Address(RVA = "0x44C5860", Offset = "0x44C5860", VA = "0x44C5860", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x44C5890", Offset = "0x44C5890", VA = "0x44C5890")]
	private ArrayLengthInstruction()
	{
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x44C58A0", Offset = "0x44C58A0", VA = "0x44C58A0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
