using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000138")]
internal abstract class FieldInstruction : Instruction
{
	[Token(Token = "0x400028B")]
	[FieldOffset(Offset = "0x10")]
	protected readonly FieldInfo _field;

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x41A9450", Offset = "0x41A9450", VA = "0x41A9450")]
	public FieldInstruction(FieldInfo field)
	{
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x41A9490", Offset = "0x41A9490", VA = "0x41A9490", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
