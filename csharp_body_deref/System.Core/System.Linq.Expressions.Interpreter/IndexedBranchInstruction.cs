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

[Token(Token = "0x20000F3")]
internal abstract class IndexedBranchInstruction : Instruction
{
	[Token(Token = "0x4000245")]
	[FieldOffset(Offset = "0x10")]
	internal readonly int _labelIndex;

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x5DDDA80", Offset = "0x5DDCA80", VA = "0x5DDDA80")]
	public IndexedBranchInstruction(int labelIndex)
	{
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x5DDDAA0", Offset = "0x5DDCAA0", VA = "0x5DDDAA0")]
	public RuntimeLabel GetLabel(InterpretedFrame frame)
	{
		return default(RuntimeLabel);
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x5DDDAE0", Offset = "0x5DDCAE0", VA = "0x5DDDAE0", Slot = "10")]
	public override string ToDebugString(int instructionIndex, object cookie, Func<int, int> labelIndexer, IReadOnlyList<object> objects)
	{
		return null;
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x5DDDBA0", Offset = "0x5DDCBA0", VA = "0x5DDDBA0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
