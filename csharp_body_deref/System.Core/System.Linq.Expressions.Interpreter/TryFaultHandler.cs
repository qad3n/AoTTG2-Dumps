// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.TryFaultHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200018F")]
internal sealed class TryFaultHandler
{
	[Token(Token = "0x4000357")]
	[FieldOffset(Offset = "0x10")]
	internal readonly int TryStartIndex;

	[Token(Token = "0x4000358")]
	[FieldOffset(Offset = "0x14")]
	internal readonly int TryEndIndex;

	[Token(Token = "0x4000359")]
	[FieldOffset(Offset = "0x18")]
	internal readonly int FinallyStartIndex;

	[Token(Token = "0x400035A")]
	[FieldOffset(Offset = "0x1C")]
	internal readonly int FinallyEndIndex;

	[Token(Token = "0x600086D")]
	[Address(RVA = "0x44DF1F0", Offset = "0x44DF1F0", VA = "0x44DF1F0")]
	internal TryFaultHandler(int tryStart, int tryEnd, int finallyStart, int finallyEnd)
	{
	}
}
