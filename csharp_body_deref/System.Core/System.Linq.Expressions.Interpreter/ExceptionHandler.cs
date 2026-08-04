// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.ExceptionHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x44DEAD0", Offset = "0x44DEAD0", VA = "0x44DEAD0")]
	internal ExceptionHandler(int labelIndex, int handlerStartIndex, int handlerEndIndex, Type exceptionType, ExceptionFilter filter)
	{
	}

	[Token(Token = "0x6000864")]
	[Address(RVA = "0x44DEB40", Offset = "0x44DEB40", VA = "0x44DEB40")]
	public bool Matches(Type exceptionType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000865")]
	[Address(RVA = "0x44DEB70", Offset = "0x44DEB70", VA = "0x44DEB70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
