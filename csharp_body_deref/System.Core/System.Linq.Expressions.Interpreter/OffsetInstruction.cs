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
	[Address(RVA = "0x41A2360", Offset = "0x41A2360", VA = "0x41A2360")]
	public Instruction Fixup(int offset)
	{
		return null;
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x41A23F0", Offset = "0x41A23F0", VA = "0x41A23F0", Slot = "10")]
	public override string ToDebugString(int instructionIndex, object cookie, Func<int, int> labelIndexer, IReadOnlyList<object> objects)
	{
		return null;
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x41A24A0", Offset = "0x41A24A0", VA = "0x41A24A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x41A2550", Offset = "0x41A2550", VA = "0x41A2550")]
	protected OffsetInstruction()
	{
	}
}
