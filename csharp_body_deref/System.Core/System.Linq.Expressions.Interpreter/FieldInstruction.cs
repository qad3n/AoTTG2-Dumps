// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.FieldInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000138")]
internal abstract class FieldInstruction : Instruction
{
	[Token(Token = "0x400028B")]
	[FieldOffset(Offset = "0x10")]
	protected readonly FieldInfo _field;

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x44CE550", Offset = "0x44CE550", VA = "0x44CE550")]
	public FieldInstruction(FieldInfo field)
	{
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x44CE590", Offset = "0x44CE590", VA = "0x44CE590", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
