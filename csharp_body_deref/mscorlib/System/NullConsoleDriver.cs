using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000197")]
internal class NullConsoleDriver : System.IConsoleDriver
{
	[Token(Token = "0x40006B8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConsoleKeyInfo EmptyConsoleKeyInfo;

	[Token(Token = "0x6000FD3")]
	[Address(RVA = "0x502C2B0", Offset = "0x502C2B0", VA = "0x502C2B0", Slot = "4")]
	public ConsoleKeyInfo ReadKey(bool intercept)
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x6000FD4")]
	[Address(RVA = "0x50243D0", Offset = "0x50243D0", VA = "0x50243D0")]
	public NullConsoleDriver()
	{
	}
}
