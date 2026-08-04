// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LocalAccessInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001A2")]
internal abstract class LocalAccessInstruction : Instruction
{
	[Token(Token = "0x400038A")]
	[FieldOffset(Offset = "0x10")]
	internal readonly int _index;

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x44F5A10", Offset = "0x44F5A10", VA = "0x44F5A10")]
	protected LocalAccessInstruction(int index)
	{
	}

	[Token(Token = "0x600094C")]
	[Address(RVA = "0x44F5A30", Offset = "0x44F5A30", VA = "0x44F5A30", Slot = "10")]
	public override string ToDebugString(int instructionIndex, object cookie, Func<int, int> labelIndexer, IReadOnlyList<object> objects)
	{
		return null;
	}
}
