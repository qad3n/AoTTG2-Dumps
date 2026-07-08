using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200018C")]
internal sealed class ExceptionFilter
{
	[Token(Token = "0x4000349")]
	[FieldOffset(Offset = "0x10")]
	public readonly int LabelIndex;

	[Token(Token = "0x400034A")]
	[FieldOffset(Offset = "0x14")]
	public readonly int StartIndex;

	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0x18")]
	public readonly int EndIndex;

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x41B99A0", Offset = "0x41B99A0", VA = "0x41B99A0")]
	internal ExceptionFilter(int labelIndex, int start, int end)
	{
	}
}
