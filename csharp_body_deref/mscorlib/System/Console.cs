// ==================== AoTTG2 cross-reference ====================
// Type: System.Console
// Update status: CHANGED in this game update
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

[Token(Token = "0x20001A7")]
public static class Console
{
	[Token(Token = "0x20001A8")]
	private class WindowsConsole
	{
		[Token(Token = "0x20001A9")]
		private delegate bool WindowsCancelHandler(int keyCode);

		[Token(Token = "0x40006E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static bool ctrlHandlerAdded;

		[Token(Token = "0x40006E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private static WindowsCancelHandler cancelHandler;

		[PreserveSig]
		[Token(Token = "0x6000FAC")]
		[Address(RVA = "0x1B934B0", Offset = "0x1B91AB0", VA = "0x181B934B0")]
		private static extern int GetConsoleCP();

		[PreserveSig]
		[Token(Token = "0x6000FAD")]
		[Address(RVA = "0x1B93520", Offset = "0x1B91B20", VA = "0x181B93520")]
		private static extern int GetConsoleOutputCP();

		[Token(Token = "0x6000FAE")]
		[Address(RVA = "0x1B93460", Offset = "0x1B91A60", VA = "0x181B93460")]
		private static bool DoWindowsConsoleCancelEvent(int keyCode)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)8)]
		[Token(Token = "0x6000FAF")]
		[Address(RVA = "0x1B93590", Offset = "0x1B91B90", VA = "0x181B93590")]
		public static int GetInputCodePage()
		{
			return default(int);
		}

		[MethodImpl((MethodImplOptions)8)]
		[Token(Token = "0x6000FB0")]
		[Address(RVA = "0x1B93630", Offset = "0x1B91C30", VA = "0x181B93630")]
		public static int GetOutputCodePage()
		{
			return default(int);
		}
	}

	[Token(Token = "0x40006DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static TextWriter stdout;

	[Token(Token = "0x40006DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static TextWriter stderr;

	[Token(Token = "0x40006E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static TextReader stdin;

	[Token(Token = "0x40006E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal static bool IsRunningOnAndroid;

	[Token(Token = "0x40006E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Encoding inputEncoding;

	[Token(Token = "0x40006E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static Encoding outputEncoding;

	[Token(Token = "0x40006E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static ConsoleCancelEventHandler cancel_event;

	[Token(Token = "0x17000165")]
	public static TextWriter Error
	{
		[Token(Token = "0x6000F99")]
		[Address(RVA = "0x1B7DAB0", Offset = "0x1B7C0B0", VA = "0x181B7DAB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000166")]
	public static TextWriter Out
	{
		[Token(Token = "0x6000F9A")]
		[Address(RVA = "0x1B7DB50", Offset = "0x1B7C150", VA = "0x181B7DB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000167")]
	public static Encoding InputEncoding
	{
		[Token(Token = "0x6000FA7")]
		[Address(RVA = "0x1B7DB00", Offset = "0x1B7C100", VA = "0x181B7DB00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000168")]
	public static Encoding OutputEncoding
	{
		[Token(Token = "0x6000FA8")]
		[Address(RVA = "0x1B7DBA0", Offset = "0x1B7C1A0", VA = "0x181B7DBA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F97")]
	[Address(RVA = "0x1B7D830", Offset = "0x1B7BE30", VA = "0x181B7D830")]
	static Console()
	{
	}

	[Token(Token = "0x6000F98")]
	[Address(RVA = "0x1B7D0E0", Offset = "0x1B7B6E0", VA = "0x181B7D0E0")]
	private static void SetupStreams(Encoding inputEncoding, Encoding outputEncoding)
	{
	}

	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x1B7CB80", Offset = "0x1B7B180", VA = "0x181B7CB80")]
	private static Stream Open(IntPtr handle, FileAccess access, int bufferSize)
	{
		return null;
	}

	[Token(Token = "0x6000F9C")]
	[Address(RVA = "0x1B7C9D0", Offset = "0x1B7AFD0", VA = "0x181B7C9D0")]
	public static Stream OpenStandardError(int bufferSize)
	{
		return null;
	}

	[Token(Token = "0x6000F9D")]
	[Address(RVA = "0x1B7CA60", Offset = "0x1B7B060", VA = "0x181B7CA60")]
	public static Stream OpenStandardInput(int bufferSize)
	{
		return null;
	}

	[Token(Token = "0x6000F9E")]
	[Address(RVA = "0x1B7CAF0", Offset = "0x1B7B0F0", VA = "0x181B7CAF0")]
	public static Stream OpenStandardOutput(int bufferSize)
	{
		return null;
	}

	[Token(Token = "0x6000F9F")]
	[Address(RVA = "0x1B7CF00", Offset = "0x1B7B500", VA = "0x181B7CF00")]
	public static void SetError(TextWriter newError)
	{
	}

	[Token(Token = "0x6000FA0")]
	[Address(RVA = "0x1B7CFF0", Offset = "0x1B7B5F0", VA = "0x181B7CFF0")]
	public static void SetOut(TextWriter newOut)
	{
	}

	[Token(Token = "0x6000FA1")]
	[Address(RVA = "0x1B7D7B0", Offset = "0x1B7BDB0", VA = "0x181B7D7B0")]
	public static void Write(string value)
	{
	}

	[Token(Token = "0x6000FA2")]
	[Address(RVA = "0x1B7D6B0", Offset = "0x1B7BCB0", VA = "0x181B7D6B0")]
	public static void WriteLine()
	{
	}

	[Token(Token = "0x6000FA3")]
	[Address(RVA = "0x1B7D640", Offset = "0x1B7BC40", VA = "0x181B7D640")]
	public static void WriteLine(int value)
	{
	}

	[Token(Token = "0x6000FA4")]
	[Address(RVA = "0x1B7D520", Offset = "0x1B7BB20", VA = "0x181B7D520")]
	public static void WriteLine(string value)
	{
	}

	[Token(Token = "0x6000FA5")]
	[Address(RVA = "0x1B7D720", Offset = "0x1B7BD20", VA = "0x181B7D720")]
	public static void WriteLine(string format, object arg0)
	{
	}

	[Token(Token = "0x6000FA6")]
	[Address(RVA = "0x1B7D5A0", Offset = "0x1B7BBA0", VA = "0x181B7D5A0")]
	public static void WriteLine(string format, object arg0, object arg1, object arg2)
	{
	}

	[Token(Token = "0x6000FA9")]
	[Address(RVA = "0x1B7CDA0", Offset = "0x1B7B3A0", VA = "0x181B7CDA0")]
	public static ConsoleKeyInfo ReadKey()
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x6000FAA")]
	[Address(RVA = "0x1B7CC60", Offset = "0x1B7B260", VA = "0x181B7CC60")]
	public static ConsoleKeyInfo ReadKey(bool intercept)
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x6000FAB")]
	[Address(RVA = "0x1B7C850", Offset = "0x1B7AE50", VA = "0x181B7C850")]
	private static void DoConsoleCancelEvent()
	{
	}
}
