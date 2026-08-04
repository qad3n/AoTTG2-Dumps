// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.NewArrayInitInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000E1")]
internal sealed class NewArrayInitInstruction : Instruction
{
	[Token(Token = "0x4000222")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _elementType;

	[Token(Token = "0x4000223")]
	[FieldOffset(Offset = "0x18")]
	private readonly int _elementCount;

	[Token(Token = "0x17000143")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60005C3")]
		[Address(RVA = "0x44C5180", Offset = "0x44C5180", VA = "0x44C5180", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000144")]
	public override int ProducedStack
	{
		[Token(Token = "0x60005C4")]
		[Address(RVA = "0x44C5190", Offset = "0x44C5190", VA = "0x44C5190", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000145")]
	public override string InstructionName
	{
		[Token(Token = "0x60005C5")]
		[Address(RVA = "0x44C51A0", Offset = "0x44C51A0", VA = "0x44C51A0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x44C5150", Offset = "0x44C5150", VA = "0x44C5150")]
	internal NewArrayInitInstruction(Type elementType, int elementCount)
	{
	}

	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x44C51D0", Offset = "0x44C51D0", VA = "0x44C51D0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
