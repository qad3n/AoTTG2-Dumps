// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.ExceptionHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200018E")]
internal sealed class ExceptionHandler
{
	[Token(Token = "0x4000355")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _exceptionType;

	[Token(Token = "0x4000356")]
	[FieldOffset(Offset = "0x18")]
	public readonly int LabelIndex;

	[Token(Token = "0x4000357")]
	[FieldOffset(Offset = "0x1C")]
	public readonly int HandlerStartIndex;

	[Token(Token = "0x4000358")]
	[FieldOffset(Offset = "0x20")]
	public readonly int HandlerEndIndex;

	[Token(Token = "0x4000359")]
	[FieldOffset(Offset = "0x28")]
	public readonly ExceptionFilter Filter;

	[Token(Token = "0x600086D")]
	[Address(RVA = "0x5DF4570", Offset = "0x5DF3570", VA = "0x5DF4570")]
	internal ExceptionHandler(int labelIndex, int handlerStartIndex, int handlerEndIndex, Type exceptionType, ExceptionFilter filter)
	{
	}

	[Token(Token = "0x600086E")]
	[Address(RVA = "0x5DF45E0", Offset = "0x5DF35E0", VA = "0x5DF45E0")]
	public bool Matches(Type exceptionType)
	{
		return default(bool);
	}

	[Token(Token = "0x600086F")]
	[Address(RVA = "0x5DF4610", Offset = "0x5DF3610", VA = "0x5DF4610", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
