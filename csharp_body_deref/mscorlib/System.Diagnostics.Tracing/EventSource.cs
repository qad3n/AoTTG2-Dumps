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
			[Address(RVA = "0x3C7CD10", Offset = "0x3C7CD10", VA = "0x3C7CD10")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000718")]
		public int Size
		{
			[Token(Token = "0x6002E9D")]
			[Address(RVA = "0x3C7CD20", Offset = "0x3C7CD20", VA = "0x3C7CD20")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000719")]
		internal int Reserved
		{
			[Token(Token = "0x6002E9E")]
			[Address(RVA = "0x3C7CD30", Offset = "0x3C7CD30", VA = "0x3C7CD30")]
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
		[Address(RVA = "0x3C7C5D0", Offset = "0x3C7C5D0", VA = "0x3C7C5D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002E8A")]
	[Address(RVA = "0x3C7C490", Offset = "0x3C7C490", VA = "0x3C7C490")]
	protected EventSource()
	{
	}

	[Token(Token = "0x6002E8B")]
	[Address(RVA = "0x3C7C4E0", Offset = "0x3C7C4E0", VA = "0x3C7C4E0")]
	public EventSource(string eventSourceName)
	{
	}

	[Token(Token = "0x6002E8C")]
	[Address(RVA = "0x3C7C510", Offset = "0x3C7C510", VA = "0x3C7C510")]
	internal EventSource(Guid eventSourceGuid, string eventSourceName)
	{
	}

	[Token(Token = "0x6002E8D")]
	[Address(RVA = "0x3C7C540", Offset = "0x3C7C540", VA = "0x3C7C540", Slot = "1")]
	~EventSource()
	{
	}

	[Token(Token = "0x6002E8F")]
	[Address(RVA = "0x3C7C5E0", Offset = "0x3C7C5E0", VA = "0x3C7C5E0")]
	public bool IsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6002E90")]
	[Address(RVA = "0x3C7C5F0", Offset = "0x3C7C5F0", VA = "0x3C7C5F0")]
	public bool IsEnabled(EventLevel level, EventKeywords keywords)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E91")]
	[Address(RVA = "0x3C7C600", Offset = "0x3C7C600", VA = "0x3C7C600", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002E92")]
	[Address(RVA = "0x3C7C670", Offset = "0x3C7C670", VA = "0x3C7C670", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002E93")]
	[Address(RVA = "0x3C7C680", Offset = "0x3C7C680", VA = "0x3C7C680")]
	protected void WriteEvent(int eventId, int arg1)
	{
	}

	[Token(Token = "0x6002E94")]
	[Address(RVA = "0x3C7C750", Offset = "0x3C7C750", VA = "0x3C7C750")]
	protected void WriteEvent(int eventId, string arg1)
	{
	}

	[Token(Token = "0x6002E95")]
	[Address(RVA = "0x3C7C7F0", Offset = "0x3C7C7F0", VA = "0x3C7C7F0")]
	protected void WriteEvent(int eventId, int arg1, int arg2)
	{
	}

	[Token(Token = "0x6002E96")]
	[Address(RVA = "0x3C7C8F0", Offset = "0x3C7C8F0", VA = "0x3C7C8F0")]
	protected void WriteEvent(int eventId, int arg1, int arg2, int arg3)
	{
	}

	[Token(Token = "0x6002E97")]
	[Address(RVA = "0x3C7CA50", Offset = "0x3C7CA50", VA = "0x3C7CA50")]
	protected void WriteEvent(int eventId, long arg1)
	{
	}

	[Token(Token = "0x6002E98")]
	[Address(RVA = "0x3C7CB00", Offset = "0x3C7CB00", VA = "0x3C7CB00")]
	protected void WriteEvent(int eventId, long arg1, string arg2)
	{
	}

	[Token(Token = "0x6002E99")]
	[Address(RVA = "0x3C7C740", Offset = "0x3C7C740", VA = "0x3C7C740")]
	protected void WriteEvent(int eventId, params object[] args)
	{
	}

	[Token(Token = "0x6002E9A")]
	[Address(RVA = "0x3C7CBF0", Offset = "0x3C7CBF0", VA = "0x3C7CBF0")]
	protected void WriteEvent(int eventId, string arg1, string arg2, string arg3)
	{
	}

	[Token(Token = "0x6002E9B")]
	[Address(RVA = "0x3C7CD00", Offset = "0x3C7CD00", VA = "0x3C7CD00")]
	[CLSCompliant(false)]
	protected unsafe void WriteEventCore(int eventId, int eventDataCount, EventData* data)
	{
	}
}
