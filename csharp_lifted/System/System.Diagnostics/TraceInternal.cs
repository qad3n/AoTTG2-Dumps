// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.TraceInternal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20000CA")]
internal static class TraceInternal
{
	[Token(Token = "0x4000394")]
	[FieldOffset(Offset = "0x0")]
	private static string appName;

	[Token(Token = "0x4000395")]
	[FieldOffset(Offset = "0x8")]
	private static TraceListenerCollection listeners;

	[Token(Token = "0x4000396")]
	[FieldOffset(Offset = "0x10")]
	private static bool autoFlush;

	[Token(Token = "0x4000397")]
	[FieldOffset(Offset = "0x11")]
	private static bool useGlobalLock;

	[Token(Token = "0x4000398")]
	[ThreadStatic]
	private static int indentLevel;

	[Token(Token = "0x4000399")]
	[FieldOffset(Offset = "0x14")]
	private static int indentSize;

	[Token(Token = "0x400039A")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly object critSec;

	[Token(Token = "0x170000CA")]
	public static TraceListenerCollection Listeners
	{
		[Token(Token = "0x60004A4")]
		[Address(RVA = "0x6200BB0", Offset = "0x61FFBB0", VA = "0x6200BB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CB")]
	public static bool AutoFlush
	{
		[Token(Token = "0x60004A5")]
		[Address(RVA = "0x6200F70", Offset = "0x61FFF70", VA = "0x6200F70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CC")]
	public static bool UseGlobalLock
	{
		[Token(Token = "0x60004A6")]
		[Address(RVA = "0x6201AD0", Offset = "0x6200AD0", VA = "0x6201AD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CD")]
	public static int IndentLevel
	{
		[Token(Token = "0x60004A7")]
		[Address(RVA = "0x6201B20", Offset = "0x6200B20", VA = "0x6201B20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000CE")]
	public static int IndentSize
	{
		[Token(Token = "0x60004A8")]
		[Address(RVA = "0x6201B80", Offset = "0x6200B80", VA = "0x6201B80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x6201810", Offset = "0x6200810", VA = "0x6201810")]
	private static void InitializeSettings()
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x61FF8F0", Offset = "0x61FE8F0", VA = "0x61FF8F0")]
	public static void WriteLine(string message)
	{
	}
}
