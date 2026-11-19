// ==================== AoTTG2 cross-reference ====================
// Type: System.Console
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200017F")]
public static class Console
{
	[Token(Token = "0x2000180")]
	private class WindowsConsole
	{
		[Token(Token = "0x2000181")]
		private delegate bool WindowsCancelHandler(int keyCode);

		[Token(Token = "0x4000643")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static bool ctrlHandlerAdded;

		[Token(Token = "0x4000644")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private static WindowsCancelHandler cancelHandler;

		[PreserveSig]
		[Token(Token = "0x6000F83")]
		[Address(RVA = "0x550D3F0", Offset = "0x550C3F0", VA = "0x550D3F0")]
		private static extern int GetConsoleCP();

		[PreserveSig]
		[Token(Token = "0x6000F84")]
		[Address(RVA = "0x550D470", Offset = "0x550C470", VA = "0x550D470")]
		private static extern int GetConsoleOutputCP();

		[Token(Token = "0x6000F85")]
		[Address(RVA = "0x550D4F0", Offset = "0x550C4F0", VA = "0x550D4F0")]
		private static bool DoWindowsConsoleCancelEvent(int keyCode)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)8)]
		[Token(Token = "0x6000F86")]
		[Address(RVA = "0x550BC10", Offset = "0x550AC10", VA = "0x550BC10")]
		public static int GetInputCodePage()
		{
			return default(int);
		}

		[MethodImpl((MethodImplOptions)8)]
		[Token(Token = "0x6000F87")]
		[Address(RVA = "0x550BCE0", Offset = "0x550ACE0", VA = "0x550BCE0")]
		public static int GetOutputCodePage()
		{
			return default(int);
		}
	}

	[Token(Token = "0x400063C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static TextWriter stdout;

	[Token(Token = "0x400063D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static TextWriter stderr;

	[Token(Token = "0x400063E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static TextReader stdin;

	[Token(Token = "0x400063F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal static bool IsRunningOnAndroid;

	[Token(Token = "0x4000640")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Encoding inputEncoding;

	[Token(Token = "0x4000641")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static Encoding outputEncoding;

	[Token(Token = "0x4000642")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static ConsoleCancelEventHandler cancel_event;

	[Token(Token = "0x17000164")]
	public static TextWriter Error
	{
		[Token(Token = "0x6000F70")]
		[Address(RVA = "0x550C740", Offset = "0x550B740", VA = "0x550C740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000165")]
	public static TextWriter Out
	{
		[Token(Token = "0x6000F71")]
		[Address(RVA = "0x550C7B0", Offset = "0x550B7B0", VA = "0x550C7B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000166")]
	public static Encoding InputEncoding
	{
		[Token(Token = "0x6000F7E")]
		[Address(RVA = "0x550CEE0", Offset = "0x550BEE0", VA = "0x550CEE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000167")]
	public static Encoding OutputEncoding
	{
		[Token(Token = "0x6000F7F")]
		[Address(RVA = "0x550CF50", Offset = "0x550BF50", VA = "0x550CF50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F6E")]
	[Address(RVA = "0x550B950", Offset = "0x550A950", VA = "0x550B950")]
	static Console()
	{
	}

	[Token(Token = "0x6000F6F")]
	[Address(RVA = "0x550BDB0", Offset = "0x550ADB0", VA = "0x550BDB0")]
	private static void SetupStreams(Encoding inputEncoding, Encoding outputEncoding)
	{
	}

	[Token(Token = "0x6000F72")]
	[Address(RVA = "0x550C820", Offset = "0x550B820", VA = "0x550C820")]
	private static Stream Open(IntPtr handle, FileAccess access, int bufferSize)
	{
		return null;
	}

	[Token(Token = "0x6000F73")]
	[Address(RVA = "0x550C6C0", Offset = "0x550B6C0", VA = "0x550C6C0")]
	public static Stream OpenStandardError(int bufferSize)
	{
		return null;
	}

	[Token(Token = "0x6000F74")]
	[Address(RVA = "0x550C5C0", Offset = "0x550B5C0", VA = "0x550C5C0")]
	public static Stream OpenStandardInput(int bufferSize)
	{
		return null;
	}

	[Token(Token = "0x6000F75")]
	[Address(RVA = "0x550C640", Offset = "0x550B640", VA = "0x550C640")]
	public static Stream OpenStandardOutput(int bufferSize)
	{
		return null;
	}

	[Token(Token = "0x6000F76")]
	[Address(RVA = "0x550C970", Offset = "0x550B970", VA = "0x550C970")]
	public static void SetError(TextWriter newError)
	{
	}

	[Token(Token = "0x6000F77")]
	[Address(RVA = "0x550CA50", Offset = "0x550BA50", VA = "0x550CA50")]
	public static void SetOut(TextWriter newOut)
	{
	}

	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x550CB30", Offset = "0x550BB30", VA = "0x550CB30")]
	public static void Write(string value)
	{
	}

	[Token(Token = "0x6000F79")]
	[Address(RVA = "0x550CBD0", Offset = "0x550BBD0", VA = "0x550CBD0")]
	public static void WriteLine()
	{
	}

	[Token(Token = "0x6000F7A")]
	[Address(RVA = "0x550CC60", Offset = "0x550BC60", VA = "0x550CC60")]
	public static void WriteLine(int value)
	{
	}

	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x550CCF0", Offset = "0x550BCF0", VA = "0x550CCF0")]
	public static void WriteLine(string value)
	{
	}

	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x550CD90", Offset = "0x550BD90", VA = "0x550CD90")]
	public static void WriteLine(string format, object arg0)
	{
	}

	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x550CE30", Offset = "0x550BE30", VA = "0x550CE30")]
	public static void WriteLine(string format, object arg0, object arg1, object arg2)
	{
	}

	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x550CFC0", Offset = "0x550BFC0", VA = "0x550CFC0")]
	public static ConsoleKeyInfo ReadKey()
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x6000F81")]
	[Address(RVA = "0x550D070", Offset = "0x550C070", VA = "0x550D070")]
	public static ConsoleKeyInfo ReadKey(bool intercept)
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x550D1D0", Offset = "0x550C1D0", VA = "0x550D1D0")]
	private static void DoConsoleCancelEvent()
	{
	}
}
