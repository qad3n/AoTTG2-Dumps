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

	[Token(Token = "0x6000875")]
	[Address(RVA = "0x41B5DD0", Offset = "0x41B5DD0", VA = "0x41B5DD0")]
	public InterpretedFrameInfo(string methodName, DebugInfo info)
	{
	}

	[Token(Token = "0x6000876")]
	[Address(RVA = "0x41BA4A0", Offset = "0x41BA4A0", VA = "0x41BA4A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
