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
		[Address(RVA = "0x5023F10", Offset = "0x5023F10", VA = "0x5023F10")]
		private static extern int GetConsoleCP();

		[PreserveSig]
		[Token(Token = "0x6000F57")]
		[Address(RVA = "0x5023F90", Offset = "0x5023F90", VA = "0x5023F90")]
		private static extern int GetConsoleOutputCP();

		[Token(Token = "0x6000F58")]
		[Address(RVA = "0x5024010", Offset = "0x5024010", VA = "0x5024010")]
		private static bool DoWindowsConsoleCancelEvent(int keyCode)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)8)]
		[Token(Token = "0x6000F59")]
		[Address(RVA = "0x5022870", Offset = "0x5022870", VA = "0x5022870")]
		public static int GetInputCodePage()
		{
			return default(int);
		}

		[MethodImpl((MethodImplOptions)8)]
		[Token(Token = "0x6000F5A")]
		[Address(RVA = "0x5022940", Offset = "0x5022940", VA = "0x5022940")]
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
		[Address(RVA = "0x50233A0", Offset = "0x50233A0", VA = "0x50233A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000164")]
	public static TextWriter Out
	{
		[Token(Token = "0x6000F46")]
		[Address(RVA = "0x5023410", Offset = "0x5023410", VA = "0x5023410")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000165")]
	public static Encoding InputEncoding
	{
		[Token(Token = "0x6000F51")]
		[Address(RVA = "0x5023A00", Offset = "0x5023A00", VA = "0x5023A00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000166")]
	public static Encoding OutputEncoding
	{
		[Token(Token = "0x6000F52")]
		[Address(RVA = "0x5023A70", Offset = "0x5023A70", VA = "0x5023A70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F43")]
	[Address(RVA = "0x5022590", Offset = "0x5022590", VA = "0x5022590")]
	static Console()
	{
	}

	[Token(Token = "0x6000F44")]
	[Address(RVA = "0x5022A10", Offset = "0x5022A10", VA = "0x5022A10")]
	private static void SetupStreams(Encoding inputEncoding, Encoding outputEncoding)
	{
	}

	[Token(Token = "0x6000F47")]
	[Address(RVA = "0x5023480", Offset = "0x5023480", VA = "0x5023480")]
	private static Stream Open(IntPtr handle, FileAccess access, int bufferSize)
	{
		return null;
	}

	[Token(Token = "0x6000F48")]
	[Address(RVA = "0x5023320", Offset = "0x5023320", VA = "0x5023320")]
	public static Stream OpenStandardError(int bufferSize)
	{
		return null;
	}

	[Token(Token = "0x6000F49")]
	[Address(RVA = "0x5023220", Offset = "0x5023220", VA = "0x5023220")]
	public static Stream OpenStandardInput(int bufferSize)
	{
		return null;
	}

	[Token(Token = "0x6000F4A")]
	[Address(RVA = "0x50232A0", Offset = "0x50232A0", VA = "0x50232A0")]
	public static Stream OpenStandardOutput(int bufferSize)
	{
		return null;
	}

	[Token(Token = "0x6000F4B")]
	[Address(RVA = "0x50235E0", Offset = "0x50235E0", VA = "0x50235E0")]
	public static void SetError(TextWriter newError)
	{
	}

	[Token(Token = "0x6000F4C")]
	[Address(RVA = "0x50236C0", Offset = "0x50236C0", VA = "0x50236C0")]
	public static void SetOut(TextWriter newOut)
	{
	}

	[Token(Token = "0x6000F4D")]
	[Address(RVA = "0x50237A0", Offset = "0x50237A0", VA = "0x50237A0")]
	public static void Write(string value)
	{
	}

	[Token(Token = "0x6000F4E")]
	[Address(RVA = "0x5023840", Offset = "0x5023840", VA = "0x5023840")]
	public static void WriteLine()
	{
	}

	[Token(Token = "0x6000F4F")]
	[Address(RVA = "0x50238D0", Offset = "0x50238D0", VA = "0x50238D0")]
	public static void WriteLine(int value)
	{
	}

	[Token(Token = "0x6000F50")]
	[Address(RVA = "0x5023960", Offset = "0x5023960", VA = "0x5023960")]
	public static void WriteLine(string value)
	{
	}

	[Token(Token = "0x6000F53")]
	[Address(RVA = "0x5023AE0", Offset = "0x5023AE0", VA = "0x5023AE0")]
	public static ConsoleKeyInfo ReadKey()
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x6000F54")]
	[Address(RVA = "0x5023B90", Offset = "0x5023B90", VA = "0x5023B90")]
	public static ConsoleKeyInfo ReadKey(bool intercept)
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x6000F55")]
	[Address(RVA = "0x5023CF0", Offset = "0x5023CF0", VA = "0x5023CF0")]
	private static void DoConsoleCancelEvent()
	{
	}
}
