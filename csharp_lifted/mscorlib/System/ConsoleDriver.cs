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

[Token(Token = "0x2000182")]
internal static class ConsoleDriver
{
	[Token(Token = "0x4000645")]
	[FieldOffset(Offset = "0x0")]
	internal static System.IConsoleDriver driver;

	[Token(Token = "0x4000646")]
	[FieldOffset(Offset = "0x8")]
	private static bool is_console;

	[Token(Token = "0x4000647")]
	[FieldOffset(Offset = "0x9")]
	private static bool called_isatty;

	[Token(Token = "0x17000168")]
	public static bool IsConsole
	{
		[Token(Token = "0x6000F90")]
		[Address(RVA = "0x550C460", Offset = "0x550B460", VA = "0x550C460")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F8B")]
	[Address(RVA = "0x550D720", Offset = "0x550C720", VA = "0x550D720")]
	static ConsoleDriver()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000F8C")]
	[Address(RVA = "0x550D7F0", Offset = "0x550C7F0", VA = "0x550D7F0")]
	private static System.IConsoleDriver CreateNullConsoleDriver()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000F8D")]
	[Address(RVA = "0x550D820", Offset = "0x550C820", VA = "0x550D820")]
	private static System.IConsoleDriver CreateWindowsConsoleDriver()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x550D860", Offset = "0x550C860", VA = "0x550D860")]
	private static System.IConsoleDriver CreateTermInfoDriver(string term)
	{
		return null;
	}

	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x550D0D0", Offset = "0x550C0D0", VA = "0x550D0D0")]
	public static ConsoleKeyInfo ReadKey(bool intercept)
	{
		return default(ConsoleKeyInfo);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x550DE50", Offset = "0x550CE50", VA = "0x550DE50")]
	private static extern bool Isatty(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x550DE60", Offset = "0x550CE60", VA = "0x550DE60")]
	internal static extern int InternalKeyAvailable(int ms_timeout);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F93")]
	[Address(RVA = "0x550DE70", Offset = "0x550CE70", VA = "0x550DE70")]
	internal unsafe static extern bool TtySetup(string keypadXmit, string teardown, out byte[] control_characters, out int* address);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F94")]
	[Address(RVA = "0x550DE80", Offset = "0x550CE80", VA = "0x550DE80")]
	internal static extern bool SetEcho(bool wantEcho);
}
