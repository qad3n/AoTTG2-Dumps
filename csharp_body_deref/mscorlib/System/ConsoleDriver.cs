// ==================== AoTTG2 cross-reference ====================
// Type: System.ConsoleDriver
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3D08BF0", Offset = "0x3D08BF0", VA = "0x3D08BF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x3D09D60", Offset = "0x3D09D60", VA = "0x3D09D60")]
	static ConsoleDriver()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000F5F")]
	[Address(RVA = "0x3D09E30", Offset = "0x3D09E30", VA = "0x3D09E30")]
	private static System.IConsoleDriver CreateNullConsoleDriver()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000F60")]
	[Address(RVA = "0x3D09E60", Offset = "0x3D09E60", VA = "0x3D09E60")]
	private static System.IConsoleDriver CreateWindowsConsoleDriver()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x3D09EA0", Offset = "0x3D09EA0", VA = "0x3D09EA0")]
	private static System.IConsoleDriver CreateTermInfoDriver(string term)
	{
		return null;
	}

	[Token(Token = "0x6000F62")]
	[Address(RVA = "0x3D09710", Offset = "0x3D09710", VA = "0x3D09710")]
	public static ConsoleKeyInfo ReadKey(bool intercept)
	{
		return default(ConsoleKeyInfo);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F64")]
	[Address(RVA = "0x3D0A440", Offset = "0x3D0A440", VA = "0x3D0A440")]
	private static extern bool Isatty(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F65")]
	[Address(RVA = "0x3D0A450", Offset = "0x3D0A450", VA = "0x3D0A450")]
	internal static extern int InternalKeyAvailable(int ms_timeout);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F66")]
	[Address(RVA = "0x3D0A460", Offset = "0x3D0A460", VA = "0x3D0A460")]
	internal unsafe static extern bool TtySetup(string keypadXmit, string teardown, out byte[] control_characters, out int* address);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F67")]
	[Address(RVA = "0x3D0A470", Offset = "0x3D0A470", VA = "0x3D0A470")]
	internal static extern bool SetEcho(bool wantEcho);
}
