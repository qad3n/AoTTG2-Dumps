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

[Token(Token = "0x20005BF")]
public class EventSource : IDisposable
{
	[Token(Token = "0x20005C0")]
	protected internal struct EventData
	{
		[Token(Token = "0x170006A4")]
		public IntPtr DataPointer
		{
			[Token(Token = "0x6002BA9")]
			[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170006A5")]
		public int Size
		{
			[Token(Token = "0x6002BAA")]
			[Address(RVA = "0x57AF20", Offset = "0x579520", VA = "0x18057AF20")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170006A6")]
		internal int Reserved
		{
			[Token(Token = "0x6002BAB")]
			[Address(RVA = "0x57AF30", Offset = "0x579530", VA = "0x18057AF30")]
			[CompilerGenerated]
			set
			{
			}
		}
	}

	[Token(Token = "0x170006A3")]
	private string Name
	{
		[Token(Token = "0x6002B9B")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002B97")]
	[Address(RVA = "0x1ABFFE0", Offset = "0x1ABE5E0", VA = "0x181ABFFE0")]
	protected EventSource()
	{
	}

	[Token(Token = "0x6002B98")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public EventSource(string eventSourceName)
	{
	}

	[Token(Token = "0x6002B99")]
	[Address(RVA = "0x1ABFFA0", Offset = "0x1ABE5A0", VA = "0x181ABFFA0")]
	internal EventSource(Guid eventSourceGuid, string eventSourceName)
	{
	}

	[Token(Token = "0x6002B9A")]
	[Address(RVA = "0x193BBF0", Offset = "0x193A1F0", VA = "0x18193BBF0", Slot = "1")]
	~EventSource()
	{
	}

	[Token(Token = "0x6002B9C")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	public bool IsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6002B9D")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	public bool IsEnabled(EventLevel level, EventKeywords keywords)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B9E")]
	[Address(RVA = "0x1ABF830", Offset = "0x1ABDE30", VA = "0x181ABF830", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002B9F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002BA0")]
	[Address(RVA = "0x1ABFBC0", Offset = "0x1ABE1C0", VA = "0x181ABFBC0")]
	protected void WriteEvent(int eventId, int arg1)
	{
	}

	[Token(Token = "0x6002BA1")]
	[Address(RVA = "0x1ABF890", Offset = "0x1ABDE90", VA = "0x181ABF890")]
	protected void WriteEvent(int eventId, string arg1)
	{
	}

	[Token(Token = "0x6002BA2")]
	[Address(RVA = "0x1ABFE80", Offset = "0x1ABE480", VA = "0x181ABFE80")]
	protected void WriteEvent(int eventId, int arg1, int arg2)
	{
	}

	[Token(Token = "0x6002BA3")]
	[Address(RVA = "0x1ABF930", Offset = "0x1ABDF30", VA = "0x181ABF930")]
	protected void WriteEvent(int eventId, int arg1, int arg2, int arg3)
	{
	}

	[Token(Token = "0x6002BA4")]
	[Address(RVA = "0x1ABFDC0", Offset = "0x1ABE3C0", VA = "0x181ABFDC0")]
	protected void WriteEvent(int eventId, long arg1)
	{
	}

	[Token(Token = "0x6002BA5")]
	[Address(RVA = "0x1ABFAC0", Offset = "0x1ABE0C0", VA = "0x181ABFAC0")]
	protected void WriteEvent(int eventId, long arg1, string arg2)
	{
	}

	[Token(Token = "0x6002BA6")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	protected void WriteEvent(int eventId, params object[] args)
	{
	}

	[Token(Token = "0x6002BA7")]
	[Address(RVA = "0x1ABFC80", Offset = "0x1ABE280", VA = "0x181ABFC80")]
	protected void WriteEvent(int eventId, string arg1, string arg2, string arg3)
	{
	}

	[Token(Token = "0x6002BA8")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[CLSCompliant(false)]
	protected unsafe void WriteEventCore(int eventId, int eventDataCount, EventData* data)
	{
	}
}
