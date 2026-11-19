// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.TraceEventCache
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20000C7")]
public class TraceEventCache
{
	[Token(Token = "0x4000384")]
	[FieldOffset(Offset = "0x0")]
	private static int processId;

	[Token(Token = "0x4000385")]
	[FieldOffset(Offset = "0x8")]
	private static string processName;

	[Token(Token = "0x4000386")]
	[FieldOffset(Offset = "0x10")]
	private long timeStamp;

	[Token(Token = "0x4000387")]
	[FieldOffset(Offset = "0x18")]
	private DateTime dateTime;

	[Token(Token = "0x4000388")]
	[FieldOffset(Offset = "0x20")]
	private string stackTrace;

	[Token(Token = "0x170000C4")]
	public string Callstack
	{
		[Token(Token = "0x6000498")]
		[Address(RVA = "0x6201070", Offset = "0x6200070", VA = "0x6201070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C5")]
	public Stack LogicalOperationStack
	{
		[Token(Token = "0x6000499")]
		[Address(RVA = "0x62010A0", Offset = "0x62000A0", VA = "0x62010A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C6")]
	public DateTime DateTime
	{
		[Token(Token = "0x600049A")]
		[Address(RVA = "0x62010C0", Offset = "0x62000C0", VA = "0x62010C0")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x170000C7")]
	public int ProcessId
	{
		[Token(Token = "0x600049B")]
		[Address(RVA = "0x6201150", Offset = "0x6200150", VA = "0x6201150")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000C8")]
	public string ThreadId
	{
		[Token(Token = "0x600049C")]
		[Address(RVA = "0x62011D0", Offset = "0x62001D0", VA = "0x62011D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C9")]
	public long Timestamp
	{
		[Token(Token = "0x600049D")]
		[Address(RVA = "0x6201260", Offset = "0x6200260", VA = "0x6201260")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x62012E0", Offset = "0x62002E0", VA = "0x62012E0")]
	private static void InitProcessInfo()
	{
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x6201190", Offset = "0x6200190", VA = "0x6201190")]
	internal static int GetProcessId()
	{
		return default(int);
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x6201240", Offset = "0x6200240", VA = "0x6201240")]
	internal static int GetThreadId()
	{
		return default(int);
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x6201770", Offset = "0x6200770", VA = "0x6201770")]
	public TraceEventCache()
	{
	}
}
