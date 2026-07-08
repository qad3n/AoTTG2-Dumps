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
		[Address(RVA = "0x45FFBE0", Offset = "0x45FFBE0", VA = "0x45FFBE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BB")]
	public Stack LogicalOperationStack
	{
		[Token(Token = "0x600046F")]
		[Address(RVA = "0x45FFC10", Offset = "0x45FFC10", VA = "0x45FFC10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BC")]
	public DateTime DateTime
	{
		[Token(Token = "0x6000470")]
		[Address(RVA = "0x45FFC30", Offset = "0x45FFC30", VA = "0x45FFC30")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x170000BD")]
	public int ProcessId
	{
		[Token(Token = "0x6000471")]
		[Address(RVA = "0x45FFCC0", Offset = "0x45FFCC0", VA = "0x45FFCC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000BE")]
	public string ThreadId
	{
		[Token(Token = "0x6000472")]
		[Address(RVA = "0x45FFD40", Offset = "0x45FFD40", VA = "0x45FFD40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BF")]
	public long Timestamp
	{
		[Token(Token = "0x6000473")]
		[Address(RVA = "0x45FFDE0", Offset = "0x45FFDE0", VA = "0x45FFDE0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x45FFE60", Offset = "0x45FFE60", VA = "0x45FFE60")]
	private static void InitProcessInfo()
	{
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x45FFD00", Offset = "0x45FFD00", VA = "0x45FFD00")]
	internal static int GetProcessId()
	{
		return default(int);
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x45FFDC0", Offset = "0x45FFDC0", VA = "0x45FFDC0")]
	internal static int GetThreadId()
	{
		return default(int);
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x4600320", Offset = "0x4600320", VA = "0x4600320")]
	public TraceEventCache()
	{
	}
}
