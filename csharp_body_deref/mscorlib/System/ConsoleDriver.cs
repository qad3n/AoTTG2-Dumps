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

[Token(Token = "0x20001AA")]
internal static class ConsoleDriver
{
	[Token(Token = "0x40006E7")]
	[FieldOffset(Offset = "0x0")]
	internal static System.IConsoleDriver driver;

	[Token(Token = "0x40006E8")]
	[FieldOffset(Offset = "0x8")]
	private static bool is_console;

	[Token(Token = "0x40006E9")]
	[FieldOffset(Offset = "0x9")]
	private static bool called_isatty;

	[Token(Token = "0x17000169")]
	public static bool IsConsole
	{
		[Token(Token = "0x6000FB9")]
		[Address(RVA = "0x1B7C6F0", Offset = "0x1B7ACF0", VA = "0x181B7C6F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000FB4")]
	[Address(RVA = "0x1B7C610", Offset = "0x1B7AC10", VA = "0x181B7C610")]
	static ConsoleDriver()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000FB5")]
	[Address(RVA = "0x1B7C3E0", Offset = "0x1B7A9E0", VA = "0x181B7C3E0")]
	private static System.IConsoleDriver CreateNullConsoleDriver()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000FB6")]
	[Address(RVA = "0x1B7C470", Offset = "0x1B7AA70", VA = "0x181B7C470")]
	private static System.IConsoleDriver CreateWindowsConsoleDriver()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000FB7")]
	[Address(RVA = "0x1B7C410", Offset = "0x1B7AA10", VA = "0x181B7C410")]
	private static System.IConsoleDriver CreateTermInfoDriver(string term)
	{
		return null;
	}

	[Token(Token = "0x6000FB8")]
	[Address(RVA = "0x1B7C4E0", Offset = "0x1B7AAE0", VA = "0x181B7C4E0")]
	public static ConsoleKeyInfo ReadKey(bool intercept)
	{
		return default(ConsoleKeyInfo);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FBA")]
	[Address(RVA = "0x1B7C4D0", Offset = "0x1B7AAD0", VA = "0x181B7C4D0")]
	private static extern bool Isatty(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x1B7C4C0", Offset = "0x1B7AAC0", VA = "0x181B7C4C0")]
	internal static extern int InternalKeyAvailable(int ms_timeout);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FBC")]
	[Address(RVA = "0x1B7C600", Offset = "0x1B7AC00", VA = "0x181B7C600")]
	internal unsafe static extern bool TtySetup(string keypadXmit, string teardown, out byte[] control_characters, out int* address);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x1B7C5F0", Offset = "0x1B7ABF0", VA = "0x181B7C5F0")]
	internal static extern bool SetEcho(bool wantEcho);
}
