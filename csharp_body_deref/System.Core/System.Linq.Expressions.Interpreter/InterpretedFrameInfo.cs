// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.InterpretedFrameInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000194")]
internal readonly struct InterpretedFrameInfo
{
	[Token(Token = "0x400036A")]
	[FieldOffset(Offset = "0x0")]
	private readonly string _methodName;

	[Token(Token = "0x400036B")]
	[FieldOffset(Offset = "0x8")]
	private readonly DebugInfo _debugInfo;

	[Token(Token = "0x600087F")]
	[Address(RVA = "0x5DF09A0", Offset = "0x5DEF9A0", VA = "0x5DF09A0")]
	public InterpretedFrameInfo(string methodName, DebugInfo info)
	{
	}

	[Token(Token = "0x6000880")]
	[Address(RVA = "0x5DF4FC0", Offset = "0x5DF3FC0", VA = "0x5DF4FC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
