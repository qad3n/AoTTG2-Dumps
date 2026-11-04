// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.IndexedBranchInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F2")]
internal abstract class IndexedBranchInstruction : Instruction
{
	[Token(Token = "0x400023C")]
	[FieldOffset(Offset = "0x10")]
	internal readonly int _labelIndex;

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	public IndexedBranchInstruction(int labelIndex)
	{
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x243A150", Offset = "0x2438750", VA = "0x18243A150")]
	public RuntimeLabel GetLabel(InterpretedFrame frame)
	{
		return default(RuntimeLabel);
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x243A1A0", Offset = "0x24387A0", VA = "0x18243A1A0", Slot = "10")]
	public override string ToDebugString(int instructionIndex, object cookie, Func<int, int> labelIndexer, IReadOnlyList<object> objects)
	{
		return null;
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x243A260", Offset = "0x2438860", VA = "0x18243A260", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
