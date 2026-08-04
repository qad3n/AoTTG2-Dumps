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

[Token(Token = "0x20000C6")]
public class TraceEventCache
{
	[Token(Token = "0x4000381")]
	[FieldOffset(Offset = "0x0")]
	private static int processId;

	[Token(Token = "0x4000382")]
	[FieldOffset(Offset = "0x8")]
	private static string processName;

	[Token(Token = "0x4000383")]
	[FieldOffset(Offset = "0x10")]
	private long timeStamp;

	[Token(Token = "0x4000384")]
	[FieldOffset(Offset = "0x18")]
	private DateTime dateTime;

	[Token(Token = "0x4000385")]
	[FieldOffset(Offset = "0x20")]
	private string stackTrace;

	[Token(Token = "0x170000BA")]
	public string Callstack
	{
		[Token(Token = "0x600046E")]
		[Address(RVA = "0x4924CE0", Offset = "0x4924CE0", VA = "0x4924CE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BB")]
	public Stack LogicalOperationStack
	{
		[Token(Token = "0x600046F")]
		[Address(RVA = "0x4924D10", Offset = "0x4924D10", VA = "0x4924D10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BC")]
	public DateTime DateTime
	{
		[Token(Token = "0x6000470")]
		[Address(RVA = "0x4924D30", Offset = "0x4924D30", VA = "0x4924D30")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x170000BD")]
	public int ProcessId
	{
		[Token(Token = "0x6000471")]
		[Address(RVA = "0x4924DC0", Offset = "0x4924DC0", VA = "0x4924DC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000BE")]
	public string ThreadId
	{
		[Token(Token = "0x6000472")]
		[Address(RVA = "0x4924E40", Offset = "0x4924E40", VA = "0x4924E40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BF")]
	public long Timestamp
	{
		[Token(Token = "0x6000473")]
		[Address(RVA = "0x4924EE0", Offset = "0x4924EE0", VA = "0x4924EE0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x4924F60", Offset = "0x4924F60", VA = "0x4924F60")]
	private static void InitProcessInfo()
	{
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x4924E00", Offset = "0x4924E00", VA = "0x4924E00")]
	internal static int GetProcessId()
	{
		return default(int);
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x4924EC0", Offset = "0x4924EC0", VA = "0x4924EC0")]
	internal static int GetThreadId()
	{
		return default(int);
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x4925420", Offset = "0x4925420", VA = "0x4925420")]
	public TraceEventCache()
	{
	}
}
