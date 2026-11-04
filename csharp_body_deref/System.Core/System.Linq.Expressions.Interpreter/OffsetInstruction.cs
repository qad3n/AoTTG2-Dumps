// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.OffsetInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000ED")]
internal abstract class OffsetInstruction : Instruction
{
	[Token(Token = "0x4000235")]
	[FieldOffset(Offset = "0x10")]
	protected int _offset;

	[Token(Token = "0x1700015D")]
	public abstract Instruction[] Cache
	{
		[Token(Token = "0x6000602")]
		get;
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x243DED0", Offset = "0x243C4D0", VA = "0x18243DED0")]
	public Instruction Fixup(int offset)
	{
		return null;
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x243DF70", Offset = "0x243C570", VA = "0x18243DF70", Slot = "10")]
	public override string ToDebugString(int instructionIndex, object cookie, Func<int, int> labelIndexer, IReadOnlyList<object> objects)
	{
		return null;
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x243E030", Offset = "0x243C630", VA = "0x18243E030", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x24296B0", Offset = "0x2427CB0", VA = "0x1824296B0")]
	protected OffsetInstruction()
	{
	}
}
