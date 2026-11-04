// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.TraceInternal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x2000109")]
internal static class TraceInternal
{
	[Token(Token = "0x4000463")]
	[FieldOffset(Offset = "0x0")]
	private static string appName;

	[Token(Token = "0x4000464")]
	[FieldOffset(Offset = "0x8")]
	private static TraceListenerCollection listeners;

	[Token(Token = "0x4000465")]
	[FieldOffset(Offset = "0x10")]
	private static bool autoFlush;

	[Token(Token = "0x4000466")]
	[FieldOffset(Offset = "0x11")]
	private static bool useGlobalLock;

	[Token(Token = "0x4000467")]
	[ThreadStatic]
	private static int indentLevel;

	[Token(Token = "0x4000468")]
	[FieldOffset(Offset = "0x14")]
	private static int indentSize;

	[Token(Token = "0x4000469")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly object critSec;

	[Token(Token = "0x170000F9")]
	public static TraceListenerCollection Listeners
	{
		[Token(Token = "0x600065A")]
		[Address(RVA = "0x2875800", Offset = "0x2873E00", VA = "0x182875800")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FA")]
	public static bool AutoFlush
	{
		[Token(Token = "0x600065B")]
		[Address(RVA = "0x28756F0", Offset = "0x2873CF0", VA = "0x1828756F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FB")]
	public static bool UseGlobalLock
	{
		[Token(Token = "0x600065C")]
		[Address(RVA = "0x2875B20", Offset = "0x2874120", VA = "0x182875B20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FC")]
	public static int IndentLevel
	{
		[Token(Token = "0x600065D")]
		[Address(RVA = "0x2875750", Offset = "0x2873D50", VA = "0x182875750")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000FD")]
	public static int IndentSize
	{
		[Token(Token = "0x600065E")]
		[Address(RVA = "0x28757A0", Offset = "0x2873DA0", VA = "0x1828757A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private static void InitializeSettings()
	{
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x2874F30", Offset = "0x2873530", VA = "0x182874F30")]
	public static void WriteLine(string message)
	{
	}
}
