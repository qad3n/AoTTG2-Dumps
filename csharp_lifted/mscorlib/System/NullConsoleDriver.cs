// ==================== AoTTG2 cross-reference ====================
// Type: System.NullConsoleDriver
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200019A")]
internal class NullConsoleDriver : System.IConsoleDriver
{
	[Token(Token = "0x400067A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConsoleKeyInfo EmptyConsoleKeyInfo;

	[Token(Token = "0x6001001")]
	[Address(RVA = "0x5515630", Offset = "0x5514630", VA = "0x5515630", Slot = "4")]
	public ConsoleKeyInfo ReadKey(bool intercept)
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x6001002")]
	[Address(RVA = "0x550D8B0", Offset = "0x550C8B0", VA = "0x550D8B0")]
	public NullConsoleDriver()
	{
	}
}
