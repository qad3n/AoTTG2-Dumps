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

[Token(Token = "0x20000EE")]
internal abstract class OffsetInstruction : Instruction
{
	[Token(Token = "0x400023E")]
	[FieldOffset(Offset = "0x10")]
	protected int _offset;

	[Token(Token = "0x1700015F")]
	public abstract Instruction[] Cache
	{
		[Token(Token = "0x600060D")]
		get;
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x5DDD1B0", Offset = "0x5DDC1B0", VA = "0x5DDD1B0")]
	public Instruction Fixup(int offset)
	{
		return null;
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x5DDD240", Offset = "0x5DDC240", VA = "0x5DDD240", Slot = "10")]
	public override string ToDebugString(int instructionIndex, object cookie, Func<int, int> labelIndexer, IReadOnlyList<object> objects)
	{
		return null;
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x5DDD2F0", Offset = "0x5DDC2F0", VA = "0x5DDD2F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x5DDD3A0", Offset = "0x5DDC3A0", VA = "0x5DDD3A0")]
	protected OffsetInstruction()
	{
	}
}
