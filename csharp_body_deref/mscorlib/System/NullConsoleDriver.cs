// ==================== AoTTG2 cross-reference ====================
// Type: System.NullConsoleDriver
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001C2")]
internal class NullConsoleDriver : System.IConsoleDriver
{
	[Token(Token = "0x400071C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConsoleKeyInfo EmptyConsoleKeyInfo;

	[Token(Token = "0x600102A")]
	[Address(RVA = "0x1B87620", Offset = "0x1B85C20", VA = "0x181B87620", Slot = "4")]
	public ConsoleKeyInfo ReadKey(bool intercept)
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x600102B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public NullConsoleDriver()
	{
	}
}
