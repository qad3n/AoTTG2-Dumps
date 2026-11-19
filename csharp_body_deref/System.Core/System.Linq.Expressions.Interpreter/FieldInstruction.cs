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

[Token(Token = "0x2000139")]
internal abstract class FieldInstruction : Instruction
{
	[Token(Token = "0x4000294")]
	[FieldOffset(Offset = "0x10")]
	protected readonly FieldInfo _field;

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x5DE4130", Offset = "0x5DE3130", VA = "0x5DE4130")]
	public FieldInstruction(FieldInfo field)
	{
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x5DE4170", Offset = "0x5DE3170", VA = "0x5DE4170", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
