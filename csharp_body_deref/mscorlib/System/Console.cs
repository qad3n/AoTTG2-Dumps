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

[Token(Token = "0x200017C")]
public static class Console
{
	[Token(Token = "0x200017D")]
	private class WindowsConsole
	{
		[Token(Token = "0x200017E")]
		private delegate bool WindowsCancelHandler(int keyCode);

		[Token(Token = "0x4000681")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static bool ctrlHandlerAdded;

		[Token(Token = "0x4000682")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private static WindowsCancelHandler cancelHandler;

		[PreserveSig]
		[Token(Token = "0x6000F56")]
		[Address(RVA = "0x3D09A30", Offset = "0x3D09A30", VA = "0x3D09A30")]
		private static extern int GetConsoleCP();

		[PreserveSig]
		[Token(Token = "0x6000F57")]
		[Address(RVA = "0x3D09AB0", Offset = "0x3D09AB0", VA = "0x3D09AB0")]
		private static extern int GetConsoleOutputCP();

		[Token(Token = "0x6000F58")]
		[Address(RVA = "0x3D09B30", Offset = "0x3D09B30", VA = "0x3D09B30")]
		private static bool DoWindowsConsoleCancelEvent(int keyCode)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)8)]
		[Token(Token = "0x6000F59")]
		[Address(RVA = "0x3D08390", Offset = "0x3D08390", VA = "0x3D08390")]
		public static int GetInputCodePage()
		{
			return default(int);
		}

		[MethodImpl((MethodImplOptions)8)]
		[Token(Token = "0x6000F5A")]
		[Address(RVA = "0x3D08460", Offset = "0x3D08460", VA = "0x3D08460")]
		public static int GetOutputCodePage()
		{
			return default(int);
		}
	}

	[Token(Token = "0x400067A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static TextWriter stdout;

	[Token(Token = "0x400067B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static TextWriter stderr;

	[Token(Token = "0x400067C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static TextReader stdin;

	[Token(Token = "0x400067D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal static bool IsRunningOnAndroid;

	[Token(Token = "0x400067E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Encoding inputEncoding;

	[Token(Token = "0x400067F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static Encoding outputEncoding;

	[Token(Token = "0x4000680")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static ConsoleCancelEventHandler cancel_event;

	[Token(Token = "0x17000163")]
	public static TextWriter Error
	{
		[Token(Token = "0x6000F45")]
		[Address(RVA = "0x3D08EC0", Offset = "0x3D08EC0", VA = "0x3D08EC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000164")]
	public static TextWriter Out
	{
		[Token(Token = "0x6000F46")]
		[Address(RVA = "0x3D08F30", Offset = "0x3D08F30", VA = "0x3D08F30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000165")]
	public static Encoding InputEncoding
	{
		[Token(Token = "0x6000F51")]
		[Address(RVA = "0x3D09520", Offset = "0x3D09520", VA = "0x3D09520")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000166")]
	public static Encoding OutputEncoding
	{
		[Token(Token = "0x6000F52")]
		[Address(RVA = "0x3D09590", Offset = "0x3D09590", VA = "0x3D09590")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F43")]
	[Address(RVA = "0x3D080B0", Offset = "0x3D080B0", VA = "0x3D080B0")]
	static Console()
	{
	}

	[Token(Token = "0x6000F44")]
	[Address(RVA = "0x3D08530", Offset = "0x3D08530", VA = "0x3D08530")]
	private static void SetupStreams(Encoding inputEncoding, Encoding outputEncoding)
	{
	}

	[Token(Token = "0x6000F47")]
	[Address(RVA = "0x3D08FA0", Offset = "0x3D08FA0", VA = "0x3D08FA0")]
	private static Stream Open(IntPtr handle, FileAccess access, int bufferSize)
	{
		return null;
	}

	[Token(Token = "0x6000F48")]
	[Address(RVA = "0x3D08E40", Offset = "0x3D08E40", VA = "0x3D08E40")]
	public static Stream OpenStandardError(int bufferSize)
	{
		return null;
	}

	[Token(Token = "0x6000F49")]
	[Address(RVA = "0x3D08D40", Offset = "0x3D08D40", VA = "0x3D08D40")]
	public static Stream OpenStandardInput(int bufferSize)
	{
		return null;
	}

	[Token(Token = "0x6000F4A")]
	[Address(RVA = "0x3D08DC0", Offset = "0x3D08DC0", VA = "0x3D08DC0")]
	public static Stream OpenStandardOutput(int bufferSize)
	{
		return null;
	}

	[Token(Token = "0x6000F4B")]
	[Address(RVA = "0x3D09100", Offset = "0x3D09100", VA = "0x3D09100")]
	public static void SetError(TextWriter newError)
	{
	}

	[Token(Token = "0x6000F4C")]
	[Address(RVA = "0x3D091E0", Offset = "0x3D091E0", VA = "0x3D091E0")]
	public static void SetOut(TextWriter newOut)
	{
	}

	[Token(Token = "0x6000F4D")]
	[Address(RVA = "0x3D092C0", Offset = "0x3D092C0", VA = "0x3D092C0")]
	public static void Write(string value)
	{
	}

	[Token(Token = "0x6000F4E")]
	[Address(RVA = "0x3D09360", Offset = "0x3D09360", VA = "0x3D09360")]
	public static void WriteLine()
	{
	}

	[Token(Token = "0x6000F4F")]
	[Address(RVA = "0x3D093F0", Offset = "0x3D093F0", VA = "0x3D093F0")]
	public static void WriteLine(int value)
	{
	}

	[Token(Token = "0x6000F50")]
	[Address(RVA = "0x3D09480", Offset = "0x3D09480", VA = "0x3D09480")]
	public static void WriteLine(string value)
	{
	}

	[Token(Token = "0x6000F53")]
	[Address(RVA = "0x3D09600", Offset = "0x3D09600", VA = "0x3D09600")]
	public static ConsoleKeyInfo ReadKey()
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x6000F54")]
	[Address(RVA = "0x3D096B0", Offset = "0x3D096B0", VA = "0x3D096B0")]
	public static ConsoleKeyInfo ReadKey(bool intercept)
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x6000F55")]
	[Address(RVA = "0x3D09810", Offset = "0x3D09810", VA = "0x3D09810")]
	private static void DoConsoleCancelEvent()
	{
	}
}
