using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200018D")]
internal sealed class ExceptionHandler
{
	[Token(Token = "0x400034C")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _exceptionType;

	[Token(Token = "0x400034D")]
	[FieldOffset(Offset = "0x18")]
	public readonly int LabelIndex;

	[Token(Token = "0x400034E")]
	[FieldOffset(Offset = "0x1C")]
	public readonly int HandlerStartIndex;

	[Token(Token = "0x400034F")]
	[FieldOffset(Offset = "0x20")]
	public readonly int HandlerEndIndex;

	[Token(Token = "0x4000350")]
	[FieldOffset(Offset = "0x28")]
	public readonly ExceptionFilter Filter;

	[Token(Token = "0x6000863")]
	[Address(RVA = "0x41B99D0", Offset = "0x41B99D0", VA = "0x41B99D0")]
	internal ExceptionHandler(int labelIndex, int handlerStartIndex, int handlerEndIndex, Type exceptionType, ExceptionFilter filter)
	{
	}

	[Token(Token = "0x6000864")]
	[Address(RVA = "0x41B9A40", Offset = "0x41B9A40", VA = "0x41B9A40")]
	public bool Matches(Type exceptionType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000865")]
	[Address(RVA = "0x41B9A70", Offset = "0x41B9A70", VA = "0x41B9A70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
