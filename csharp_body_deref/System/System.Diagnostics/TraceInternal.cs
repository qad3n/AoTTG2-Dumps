using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20000C9")]
internal static class TraceInternal
{
	[Token(Token = "0x4000391")]
	[FieldOffset(Offset = "0x0")]
	private static string appName;

	[Token(Token = "0x4000392")]
	[FieldOffset(Offset = "0x8")]
	private static TraceListenerCollection listeners;

	[Token(Token = "0x4000393")]
	[FieldOffset(Offset = "0x10")]
	private static bool autoFlush;

	[Token(Token = "0x4000394")]
	[FieldOffset(Offset = "0x11")]
	private static bool useGlobalLock;

	[Token(Token = "0x4000395")]
	[ThreadStatic]
	private static int indentLevel;

	[Token(Token = "0x4000396")]
	[FieldOffset(Offset = "0x14")]
	private static int indentSize;

	[Token(Token = "0x4000397")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly object critSec;

	[Token(Token = "0x170000C0")]
	public static TraceListenerCollection Listeners
	{
		[Token(Token = "0x600047A")]
		[Address(RVA = "0x45FF6E0", Offset = "0x45FF6E0", VA = "0x45FF6E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C1")]
	public static bool AutoFlush
	{
		[Token(Token = "0x600047B")]
		[Address(RVA = "0x45FFAE0", Offset = "0x45FFAE0", VA = "0x45FFAE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C2")]
	public static bool UseGlobalLock
	{
		[Token(Token = "0x600047C")]
		[Address(RVA = "0x46006A0", Offset = "0x46006A0", VA = "0x46006A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C3")]
	public static int IndentLevel
	{
		[Token(Token = "0x600047D")]
		[Address(RVA = "0x46006F0", Offset = "0x46006F0", VA = "0x46006F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000C4")]
	public static int IndentSize
	{
		[Token(Token = "0x600047E")]
		[Address(RVA = "0x4600750", Offset = "0x4600750", VA = "0x4600750")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x46003C0", Offset = "0x46003C0", VA = "0x46003C0")]
	private static void InitializeSettings()
	{
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x45FDFF0", Offset = "0x45FDFF0", VA = "0x45FDFF0")]
	public static void WriteLine(string message)
	{
	}
}
