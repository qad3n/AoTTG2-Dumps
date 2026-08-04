// ==================== AoTTG2 cross-reference ====================
// Type: System.NullConsoleDriver
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000197")]
internal class NullConsoleDriver : System.IConsoleDriver
{
	[Token(Token = "0x40006B8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConsoleKeyInfo EmptyConsoleKeyInfo;

	[Token(Token = "0x6000FD3")]
	[Address(RVA = "0x3D11DD0", Offset = "0x3D11DD0", VA = "0x3D11DD0", Slot = "4")]
	public ConsoleKeyInfo ReadKey(bool intercept)
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x6000FD4")]
	[Address(RVA = "0x3D09EF0", Offset = "0x3D09EF0", VA = "0x3D09EF0")]
	public NullConsoleDriver()
	{
	}
}
