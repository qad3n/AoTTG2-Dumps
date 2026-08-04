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
		[Token(Token = "0x6000603")]
		get;
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x44C7460", Offset = "0x44C7460", VA = "0x44C7460")]
	public Instruction Fixup(int offset)
	{
		return null;
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x44C74F0", Offset = "0x44C74F0", VA = "0x44C74F0", Slot = "10")]
	public override string ToDebugString(int instructionIndex, object cookie, Func<int, int> labelIndexer, IReadOnlyList<object> objects)
	{
		return null;
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x44C75A0", Offset = "0x44C75A0", VA = "0x44C75A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x44C7650", Offset = "0x44C7650", VA = "0x44C7650")]
	protected OffsetInstruction()
	{
	}
}
