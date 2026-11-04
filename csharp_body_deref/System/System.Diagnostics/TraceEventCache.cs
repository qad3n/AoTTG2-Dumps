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

[Token(Token = "0x2000106")]
public class TraceEventCache
{
	[Token(Token = "0x4000453")]
	[FieldOffset(Offset = "0x0")]
	private static int processId;

	[Token(Token = "0x4000454")]
	[FieldOffset(Offset = "0x8")]
	private static string processName;

	[Token(Token = "0x4000455")]
	[FieldOffset(Offset = "0x10")]
	private long timeStamp;

	[Token(Token = "0x4000456")]
	[FieldOffset(Offset = "0x18")]
	private DateTime dateTime;

	[Token(Token = "0x4000457")]
	[FieldOffset(Offset = "0x20")]
	private string stackTrace;

	[Token(Token = "0x170000F3")]
	public string Callstack
	{
		[Token(Token = "0x600064E")]
		[Address(RVA = "0x2874BD0", Offset = "0x28731D0", VA = "0x182874BD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F4")]
	public Stack LogicalOperationStack
	{
		[Token(Token = "0x600064F")]
		[Address(RVA = "0x2874CB0", Offset = "0x28732B0", VA = "0x182874CB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F5")]
	public DateTime DateTime
	{
		[Token(Token = "0x6000650")]
		[Address(RVA = "0x2874C10", Offset = "0x2873210", VA = "0x182874C10")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x170000F6")]
	public int ProcessId
	{
		[Token(Token = "0x6000651")]
		[Address(RVA = "0x28749D0", Offset = "0x2872FD0", VA = "0x1828749D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F7")]
	public string ThreadId
	{
		[Token(Token = "0x6000652")]
		[Address(RVA = "0x2874E00", Offset = "0x2873400", VA = "0x182874E00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F8")]
	public long Timestamp
	{
		[Token(Token = "0x6000653")]
		[Address(RVA = "0x2874E80", Offset = "0x2873480", VA = "0x182874E80")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x2874A20", Offset = "0x2873020", VA = "0x182874A20")]
	private static void InitProcessInfo()
	{
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x28749D0", Offset = "0x2872FD0", VA = "0x1828749D0")]
	internal static int GetProcessId()
	{
		return default(int);
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x1B81DF0", Offset = "0x1B803F0", VA = "0x181B81DF0")]
	internal static int GetThreadId()
	{
		return default(int);
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x2874B60", Offset = "0x2873160", VA = "0x182874B60")]
	public TraceEventCache()
	{
	}
}
