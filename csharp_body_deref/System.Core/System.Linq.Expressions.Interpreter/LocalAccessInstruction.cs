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
	[Address(RVA = "0x41D0910", Offset = "0x41D0910", VA = "0x41D0910")]
	protected LocalAccessInstruction(int index)
	{
	}

	[Token(Token = "0x600094C")]
	[Address(RVA = "0x41D0930", Offset = "0x41D0930", VA = "0x41D0930", Slot = "10")]
	public override string ToDebugString(int instructionIndex, object cookie, Func<int, int> labelIndexer, IReadOnlyList<object> objects)
	{
		return null;
	}
}
