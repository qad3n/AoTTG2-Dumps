using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F2")]
internal abstract class IndexedBranchInstruction : Instruction
{
	[Token(Token = "0x400023C")]
	[FieldOffset(Offset = "0x10")]
	internal readonly int _labelIndex;

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x41A2C30", Offset = "0x41A2C30", VA = "0x41A2C30")]
	public IndexedBranchInstruction(int labelIndex)
	{
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x41A2C50", Offset = "0x41A2C50", VA = "0x41A2C50")]
	public RuntimeLabel GetLabel(InterpretedFrame frame)
	{
		return default(RuntimeLabel);
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x41A2C90", Offset = "0x41A2C90", VA = "0x41A2C90", Slot = "10")]
	public override string ToDebugString(int instructionIndex, object cookie, Func<int, int> labelIndexer, IReadOnlyList<object> objects)
	{
		return null;
	}

	[Token(Token = "0x6000622")]
	[Address(RVA = "0x41A2D50", Offset = "0x41A2D50", VA = "0x41A2D50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
