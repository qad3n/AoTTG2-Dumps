// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.NewArrayInitInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000E2")]
internal sealed class NewArrayInitInstruction : Instruction
{
	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _elementType;

	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x18")]
	private readonly int _elementCount;

	[Token(Token = "0x17000145")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60005CD")]
		[Address(RVA = "0x5DDAF10", Offset = "0x5DD9F10", VA = "0x5DDAF10", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000146")]
	public override int ProducedStack
	{
		[Token(Token = "0x60005CE")]
		[Address(RVA = "0x5DDAF20", Offset = "0x5DD9F20", VA = "0x5DDAF20", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000147")]
	public override string InstructionName
	{
		[Token(Token = "0x60005CF")]
		[Address(RVA = "0x5DDAF30", Offset = "0x5DD9F30", VA = "0x5DDAF30", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x5DDAEE0", Offset = "0x5DD9EE0", VA = "0x5DDAEE0")]
	internal NewArrayInitInstruction(Type elementType, int elementCount)
	{
	}

	[Token(Token = "0x60005D0")]
	[Address(RVA = "0x5DDAF60", Offset = "0x5DD9F60", VA = "0x5DDAF60", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
