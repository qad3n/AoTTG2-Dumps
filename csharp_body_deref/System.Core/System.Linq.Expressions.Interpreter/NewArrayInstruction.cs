// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.NewArrayInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000E3")]
internal sealed class NewArrayInstruction : Instruction
{
	[Token(Token = "0x400022D")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _elementType;

	[Token(Token = "0x17000148")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x5DDB010", Offset = "0x5DDA010", VA = "0x5DDB010", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000149")]
	public override int ProducedStack
	{
		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x5DDB020", Offset = "0x5DDA020", VA = "0x5DDB020", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700014A")]
	public override string InstructionName
	{
		[Token(Token = "0x60005D4")]
		[Address(RVA = "0x5DDB030", Offset = "0x5DDA030", VA = "0x5DDB030", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005D1")]
	[Address(RVA = "0x5DDAFE0", Offset = "0x5DD9FE0", VA = "0x5DDAFE0")]
	internal NewArrayInstruction(Type elementType)
	{
	}

	[Token(Token = "0x60005D5")]
	[Address(RVA = "0x5DDB060", Offset = "0x5DDA060", VA = "0x5DDB060", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
