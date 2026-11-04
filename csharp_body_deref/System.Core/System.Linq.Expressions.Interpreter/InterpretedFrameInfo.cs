// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.InterpretedFrameInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000193")]
internal readonly struct InterpretedFrameInfo
{
	[Token(Token = "0x4000361")]
	[FieldOffset(Offset = "0x0")]
	private readonly string _methodName;

	[Token(Token = "0x4000362")]
	[FieldOffset(Offset = "0x8")]
	private readonly DebugInfo _debugInfo;

	[Token(Token = "0x6000874")]
	[Address(RVA = "0xB5D000", Offset = "0xB5B600", VA = "0x180B5D000")]
	public InterpretedFrameInfo(string methodName, DebugInfo info)
	{
	}

	[Token(Token = "0x6000875")]
	[Address(RVA = "0x244E880", Offset = "0x244CE80", VA = "0x18244E880", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
