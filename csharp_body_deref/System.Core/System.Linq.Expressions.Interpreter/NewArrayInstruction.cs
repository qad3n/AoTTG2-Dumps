// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.NewArrayInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000E2")]
internal sealed class NewArrayInstruction : Instruction
{
	[Token(Token = "0x4000224")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _elementType;

	[Token(Token = "0x17000146")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60005C8")]
		[Address(RVA = "0x44C5280", Offset = "0x44C5280", VA = "0x44C5280", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000147")]
	public override int ProducedStack
	{
		[Token(Token = "0x60005C9")]
		[Address(RVA = "0x44C5290", Offset = "0x44C5290", VA = "0x44C5290", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000148")]
	public override string InstructionName
	{
		[Token(Token = "0x60005CA")]
		[Address(RVA = "0x44C52A0", Offset = "0x44C52A0", VA = "0x44C52A0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x44C5250", Offset = "0x44C5250", VA = "0x44C5250")]
	internal NewArrayInstruction(Type elementType)
	{
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x44C52D0", Offset = "0x44C52D0", VA = "0x44C52D0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
