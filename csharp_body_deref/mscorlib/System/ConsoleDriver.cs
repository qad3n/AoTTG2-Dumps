using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200017F")]
internal static class ConsoleDriver
{
	[Token(Token = "0x4000683")]
	[FieldOffset(Offset = "0x0")]
	internal static System.IConsoleDriver driver;

	[Token(Token = "0x4000684")]
	[FieldOffset(Offset = "0x8")]
	private static bool is_console;

	[Token(Token = "0x4000685")]
	[FieldOffset(Offset = "0x9")]
	private static bool called_isatty;

	[Token(Token = "0x17000167")]
	public static bool IsConsole
	{
		[Token(Token = "0x6000F63")]
		[Address(RVA = "0x50230D0", Offset = "0x50230D0", VA = "0x50230D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x5024240", Offset = "0x5024240", VA = "0x5024240")]
	static ConsoleDriver()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000F5F")]
	[Address(RVA = "0x5024310", Offset = "0x5024310", VA = "0x5024310")]
	private static System.IConsoleDriver CreateNullConsoleDriver()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000F60")]
	[Address(RVA = "0x5024340", Offset = "0x5024340", VA = "0x5024340")]
	private static System.IConsoleDriver CreateWindowsConsoleDriver()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x5024380", Offset = "0x5024380", VA = "0x5024380")]
	private static System.IConsoleDriver CreateTermInfoDriver(string term)
	{
		return null;
	}

	[Token(Token = "0x6000F62")]
	[Address(RVA = "0x5023BF0", Offset = "0x5023BF0", VA = "0x5023BF0")]
	public static ConsoleKeyInfo ReadKey(bool intercept)
	{
		return default(ConsoleKeyInfo);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F64")]
	[Address(RVA = "0x5024920", Offset = "0x5024920", VA = "0x5024920")]
	private static extern bool Isatty(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F65")]
	[Address(RVA = "0x5024930", Offset = "0x5024930", VA = "0x5024930")]
	internal static extern int InternalKeyAvailable(int ms_timeout);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F66")]
	[Address(RVA = "0x5024940", Offset = "0x5024940", VA = "0x5024940")]
	internal unsafe static extern bool TtySetup(string keypadXmit, string teardown, out byte[] control_characters, out int* address);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F67")]
	[Address(RVA = "0x5024950", Offset = "0x5024950", VA = "0x5024950")]
	internal static extern bool SetEcho(bool wantEcho);
}
