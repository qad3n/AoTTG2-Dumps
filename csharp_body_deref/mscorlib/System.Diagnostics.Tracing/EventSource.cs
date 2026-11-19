// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.Tracing.EventSource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Diagnostics.Tracing;

[Token(Token = "0x200059A")]
public class EventSource : IDisposable
{
	[Token(Token = "0x200059B")]
	protected internal struct EventData
	{
		[Token(Token = "0x170006A5")]
		public IntPtr DataPointer
		{
			[Token(Token = "0x6002B88")]
			[Address(RVA = "0x544FE20", Offset = "0x544EE20", VA = "0x544FE20")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170006A6")]
		public int Size
		{
			[Token(Token = "0x6002B89")]
			[Address(RVA = "0x544FE30", Offset = "0x544EE30", VA = "0x544FE30")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170006A7")]
		internal int Reserved
		{
			[Token(Token = "0x6002B8A")]
			[Address(RVA = "0x544FE40", Offset = "0x544EE40", VA = "0x544FE40")]
			[CompilerGenerated]
			set
			{
			}
		}
	}

	[Token(Token = "0x170006A4")]
	private string Name
	{
		[Token(Token = "0x6002B7A")]
		[Address(RVA = "0x544F6E0", Offset = "0x544E6E0", VA = "0x544F6E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002B76")]
	[Address(RVA = "0x544F590", Offset = "0x544E590", VA = "0x544F590")]
	protected EventSource()
	{
	}

	[Token(Token = "0x6002B77")]
	[Address(RVA = "0x544F5E0", Offset = "0x544E5E0", VA = "0x544F5E0")]
	public EventSource(string eventSourceName)
	{
	}

	[Token(Token = "0x6002B78")]
	[Address(RVA = "0x544F610", Offset = "0x544E610", VA = "0x544F610")]
	internal EventSource(Guid eventSourceGuid, string eventSourceName)
	{
	}

	[Token(Token = "0x6002B79")]
	[Address(RVA = "0x544F640", Offset = "0x544E640", VA = "0x544F640", Slot = "1")]
	~EventSource()
	{
	}

	[Token(Token = "0x6002B7B")]
	[Address(RVA = "0x544F6F0", Offset = "0x544E6F0", VA = "0x544F6F0")]
	public bool IsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6002B7C")]
	[Address(RVA = "0x544F700", Offset = "0x544E700", VA = "0x544F700")]
	public bool IsEnabled(EventLevel level, EventKeywords keywords)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B7D")]
	[Address(RVA = "0x544F710", Offset = "0x544E710", VA = "0x544F710", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002B7E")]
	[Address(RVA = "0x544F780", Offset = "0x544E780", VA = "0x544F780", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002B7F")]
	[Address(RVA = "0x544F790", Offset = "0x544E790", VA = "0x544F790")]
	protected void WriteEvent(int eventId, int arg1)
	{
	}

	[Token(Token = "0x6002B80")]
	[Address(RVA = "0x544F860", Offset = "0x544E860", VA = "0x544F860")]
	protected void WriteEvent(int eventId, string arg1)
	{
	}

	[Token(Token = "0x6002B81")]
	[Address(RVA = "0x544F900", Offset = "0x544E900", VA = "0x544F900")]
	protected void WriteEvent(int eventId, int arg1, int arg2)
	{
	}

	[Token(Token = "0x6002B82")]
	[Address(RVA = "0x544FA00", Offset = "0x544EA00", VA = "0x544FA00")]
	protected void WriteEvent(int eventId, int arg1, int arg2, int arg3)
	{
	}

	[Token(Token = "0x6002B83")]
	[Address(RVA = "0x544FB60", Offset = "0x544EB60", VA = "0x544FB60")]
	protected void WriteEvent(int eventId, long arg1)
	{
	}

	[Token(Token = "0x6002B84")]
	[Address(RVA = "0x544FC10", Offset = "0x544EC10", VA = "0x544FC10")]
	protected void WriteEvent(int eventId, long arg1, string arg2)
	{
	}

	[Token(Token = "0x6002B85")]
	[Address(RVA = "0x544F850", Offset = "0x544E850", VA = "0x544F850")]
	protected void WriteEvent(int eventId, params object[] args)
	{
	}

	[Token(Token = "0x6002B86")]
	[Address(RVA = "0x544FD00", Offset = "0x544ED00", VA = "0x544FD00")]
	protected void WriteEvent(int eventId, string arg1, string arg2, string arg3)
	{
	}

	[Token(Token = "0x6002B87")]
	[Address(RVA = "0x544FE10", Offset = "0x544EE10", VA = "0x544FE10")]
	[CLSCompliant(false)]
	protected unsafe void WriteEventCore(int eventId, int eventDataCount, EventData* data)
	{
	}
}
