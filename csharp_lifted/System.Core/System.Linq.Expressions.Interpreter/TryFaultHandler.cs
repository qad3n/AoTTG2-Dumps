// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.TryFaultHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000190")]
internal sealed class TryFaultHandler
{
	[Token(Token = "0x4000360")]
	[FieldOffset(Offset = "0x10")]
	internal readonly int TryStartIndex;

	[Token(Token = "0x4000361")]
	[FieldOffset(Offset = "0x14")]
	internal readonly int TryEndIndex;

	[Token(Token = "0x4000362")]
	[FieldOffset(Offset = "0x18")]
	internal readonly int FinallyStartIndex;

	[Token(Token = "0x4000363")]
	[FieldOffset(Offset = "0x1C")]
	internal readonly int FinallyEndIndex;

	[Token(Token = "0x6000877")]
	[Address(RVA = "0x5DF4C00", Offset = "0x5DF3C00", VA = "0x5DF4C00")]
	internal TryFaultHandler(int tryStart, int tryEnd, int finallyStart, int finallyEnd)
	{
	}
}
