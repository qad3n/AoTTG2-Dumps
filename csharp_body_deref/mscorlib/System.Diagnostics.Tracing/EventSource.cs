using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Diagnostics.Tracing;

[Token(Token = "0x20005ED")]
public class EventSource : IDisposable
{
	[Token(Token = "0x20005EE")]
	protected internal struct EventData
	{
		[Token(Token = "0x17000717")]
		public IntPtr DataPointer
		{
			[Token(Token = "0x6002E9C")]
			[Address(RVA = "0x4F971F0", Offset = "0x4F971F0", VA = "0x4F971F0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000718")]
		public int Size
		{
			[Token(Token = "0x6002E9D")]
			[Address(RVA = "0x4F97200", Offset = "0x4F97200", VA = "0x4F97200")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000719")]
		internal int Reserved
		{
			[Token(Token = "0x6002E9E")]
			[Address(RVA = "0x4F97210", Offset = "0x4F97210", VA = "0x4F97210")]
			[CompilerGenerated]
			set
			{
			}
		}
	}

	[Token(Token = "0x17000716")]
	private string Name
	{
		[Token(Token = "0x6002E8E")]
		[Address(RVA = "0x4F96AB0", Offset = "0x4F96AB0", VA = "0x4F96AB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002E8A")]
	[Address(RVA = "0x4F96970", Offset = "0x4F96970", VA = "0x4F96970")]
	protected EventSource()
	{
	}

	[Token(Token = "0x6002E8B")]
	[Address(RVA = "0x4F969C0", Offset = "0x4F969C0", VA = "0x4F969C0")]
	public EventSource(string eventSourceName)
	{
	}

	[Token(Token = "0x6002E8C")]
	[Address(RVA = "0x4F969F0", Offset = "0x4F969F0", VA = "0x4F969F0")]
	internal EventSource(Guid eventSourceGuid, string eventSourceName)
	{
	}

	[Token(Token = "0x6002E8D")]
	[Address(RVA = "0x4F96A20", Offset = "0x4F96A20", VA = "0x4F96A20", Slot = "1")]
	~EventSource()
	{
	}

	[Token(Token = "0x6002E8F")]
	[Address(RVA = "0x4F96AC0", Offset = "0x4F96AC0", VA = "0x4F96AC0")]
	public bool IsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6002E90")]
	[Address(RVA = "0x4F96AD0", Offset = "0x4F96AD0", VA = "0x4F96AD0")]
	public bool IsEnabled(EventLevel level, EventKeywords keywords)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E91")]
	[Address(RVA = "0x4F96AE0", Offset = "0x4F96AE0", VA = "0x4F96AE0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002E92")]
	[Address(RVA = "0x4F96B50", Offset = "0x4F96B50", VA = "0x4F96B50", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002E93")]
	[Address(RVA = "0x4F96B60", Offset = "0x4F96B60", VA = "0x4F96B60")]
	protected void WriteEvent(int eventId, int arg1)
	{
	}

	[Token(Token = "0x6002E94")]
	[Address(RVA = "0x4F96C30", Offset = "0x4F96C30", VA = "0x4F96C30")]
	protected void WriteEvent(int eventId, string arg1)
	{
	}

	[Token(Token = "0x6002E95")]
	[Address(RVA = "0x4F96CD0", Offset = "0x4F96CD0", VA = "0x4F96CD0")]
	protected void WriteEvent(int eventId, int arg1, int arg2)
	{
	}

	[Token(Token = "0x6002E96")]
	[Address(RVA = "0x4F96DD0", Offset = "0x4F96DD0", VA = "0x4F96DD0")]
	protected void WriteEvent(int eventId, int arg1, int arg2, int arg3)
	{
	}

	[Token(Token = "0x6002E97")]
	[Address(RVA = "0x4F96F30", Offset = "0x4F96F30", VA = "0x4F96F30")]
	protected void WriteEvent(int eventId, long arg1)
	{
	}

	[Token(Token = "0x6002E98")]
	[Address(RVA = "0x4F96FE0", Offset = "0x4F96FE0", VA = "0x4F96FE0")]
	protected void WriteEvent(int eventId, long arg1, string arg2)
	{
	}

	[Token(Token = "0x6002E99")]
	[Address(RVA = "0x4F96C20", Offset = "0x4F96C20", VA = "0x4F96C20")]
	protected void WriteEvent(int eventId, params object[] args)
	{
	}

	[Token(Token = "0x6002E9A")]
	[Address(RVA = "0x4F970D0", Offset = "0x4F970D0", VA = "0x4F970D0")]
	protected void WriteEvent(int eventId, string arg1, string arg2, string arg3)
	{
	}

	[Token(Token = "0x6002E9B")]
	[Address(RVA = "0x4F971E0", Offset = "0x4F971E0", VA = "0x4F971E0")]
	[CLSCompliant(false)]
	protected unsafe void WriteEventCore(int eventId, int eventDataCount, EventData* data)
	{
	}
}
