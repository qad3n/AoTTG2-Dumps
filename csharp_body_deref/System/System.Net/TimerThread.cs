// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.TimerThread
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002E9")]
internal static class TimerThread
{
	[Token(Token = "0x20002EA")]
	internal abstract class Queue
	{
		[Token(Token = "0x4000B24")]
		[FieldOffset(Offset = "0x10")]
		private readonly int m_DurationMilliseconds;

		[Token(Token = "0x17000436")]
		internal int Duration
		{
			[Token(Token = "0x6001451")]
			[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6001450")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		internal Queue(int durationMilliseconds)
		{
		}

		[Token(Token = "0x6001452")]
		internal abstract Timer CreateTimer(Callback callback, object context);
	}

	[Token(Token = "0x20002EB")]
	internal abstract class Timer : IDisposable
	{
		[Token(Token = "0x4000B25")]
		[FieldOffset(Offset = "0x10")]
		private readonly int m_StartTimeMilliseconds;

		[Token(Token = "0x4000B26")]
		[FieldOffset(Offset = "0x14")]
		private readonly int m_DurationMilliseconds;

		[Token(Token = "0x17000437")]
		internal int StartTime
		{
			[Token(Token = "0x6001454")]
			[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000438")]
		internal int Expiration
		{
			[Token(Token = "0x6001455")]
			[Address(RVA = "0x27D4760", Offset = "0x27D2D60", VA = "0x1827D4760")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000439")]
		internal abstract bool HasExpired
		{
			[Token(Token = "0x6001457")]
			get;
		}

		[Token(Token = "0x6001453")]
		[Address(RVA = "0x27D4730", Offset = "0x27D2D30", VA = "0x1827D4730")]
		internal Timer(int durationMilliseconds)
		{
		}

		[Token(Token = "0x6001456")]
		internal abstract bool Cancel();

		[Token(Token = "0x6001458")]
		[Address(RVA = "0x21B8EA0", Offset = "0x21B74A0", VA = "0x1821B8EA0", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x20002EC")]
	internal delegate void Callback(Timer timer, int timeNoticed, object context);

	[Token(Token = "0x20002ED")]
	private class TimerQueue : Queue
	{
		[Token(Token = "0x4000B27")]
		[FieldOffset(Offset = "0x18")]
		private IntPtr m_ThisHandle;

		[Token(Token = "0x4000B28")]
		[FieldOffset(Offset = "0x20")]
		private readonly TimerNode m_Timers;

		[Token(Token = "0x600145B")]
		[Address(RVA = "0x27D2E70", Offset = "0x27D1470", VA = "0x1827D2E70")]
		internal TimerQueue(int durationMilliseconds)
		{
		}

		[Token(Token = "0x600145C")]
		[Address(RVA = "0x27D2970", Offset = "0x27D0F70", VA = "0x1827D2970", Slot = "4")]
		internal override Timer CreateTimer(Callback callback, object context)
		{
			return null;
		}

		[Token(Token = "0x600145D")]
		[Address(RVA = "0x27D2CD0", Offset = "0x27D12D0", VA = "0x1827D2CD0")]
		internal bool Fire(out int nextExpiration)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20002EE")]
	private class InfiniteTimerQueue : Queue
	{
		[Token(Token = "0x600145E")]
		[Address(RVA = "0x27CF2F0", Offset = "0x27CD8F0", VA = "0x1827CF2F0")]
		internal InfiniteTimerQueue()
		{
		}

		[Token(Token = "0x600145F")]
		[Address(RVA = "0x27CF290", Offset = "0x27CD890", VA = "0x1827CF290", Slot = "4")]
		internal override Timer CreateTimer(Callback callback, object context)
		{
			return null;
		}
	}

	[Token(Token = "0x20002EF")]
	private class TimerNode : Timer
	{
		[Token(Token = "0x20002F0")]
		private enum TimerState
		{
			[Token(Token = "0x4000B30")]
			Ready,
			[Token(Token = "0x4000B31")]
			Fired,
			[Token(Token = "0x4000B32")]
			Cancelled,
			[Token(Token = "0x4000B33")]
			Sentinel
		}

		[Token(Token = "0x4000B29")]
		[FieldOffset(Offset = "0x18")]
		private TimerState m_TimerState;

		[Token(Token = "0x4000B2A")]
		[FieldOffset(Offset = "0x20")]
		private Callback m_Callback;

		[Token(Token = "0x4000B2B")]
		[FieldOffset(Offset = "0x28")]
		private object m_Context;

		[Token(Token = "0x4000B2C")]
		[FieldOffset(Offset = "0x30")]
		private object m_QueueLock;

		[Token(Token = "0x4000B2D")]
		[FieldOffset(Offset = "0x38")]
		private TimerNode next;

		[Token(Token = "0x4000B2E")]
		[FieldOffset(Offset = "0x40")]
		private TimerNode prev;

		[Token(Token = "0x1700043A")]
		internal override bool HasExpired
		{
			[Token(Token = "0x6001462")]
			[Address(RVA = "0x27D2960", Offset = "0x27D0F60", VA = "0x1827D2960", Slot = "6")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700043B")]
		internal TimerNode Next
		{
			[Token(Token = "0x6001463")]
			[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
			get
			{
				return null;
			}
			[Token(Token = "0x6001464")]
			[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
			set
			{
			}
		}

		[Token(Token = "0x1700043C")]
		internal TimerNode Prev
		{
			[Token(Token = "0x6001465")]
			[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
			get
			{
				return null;
			}
			[Token(Token = "0x6001466")]
			[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
			set
			{
			}
		}

		[Token(Token = "0x6001460")]
		[Address(RVA = "0x27D28F0", Offset = "0x27D0EF0", VA = "0x1827D28F0")]
		internal TimerNode(Callback callback, object context, int durationMilliseconds, object queueLock)
		{
		}

		[Token(Token = "0x6001461")]
		[Address(RVA = "0x27D28C0", Offset = "0x27D0EC0", VA = "0x1827D28C0")]
		internal TimerNode()
		{
		}

		[Token(Token = "0x6001467")]
		[Address(RVA = "0x27D2500", Offset = "0x27D0B00", VA = "0x1827D2500", Slot = "5")]
		internal override bool Cancel()
		{
			return default(bool);
		}

		[Token(Token = "0x6001468")]
		[Address(RVA = "0x27D2650", Offset = "0x27D0C50", VA = "0x1827D2650")]
		internal bool Fire()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20002F1")]
	private class InfiniteTimer : Timer
	{
		[Token(Token = "0x4000B34")]
		[FieldOffset(Offset = "0x18")]
		private int cancelled;

		[Token(Token = "0x1700043D")]
		internal override bool HasExpired
		{
			[Token(Token = "0x600146A")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "6")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001469")]
		[Address(RVA = "0x27CF330", Offset = "0x27CD930", VA = "0x1827CF330")]
		internal InfiniteTimer()
		{
		}

		[Token(Token = "0x600146B")]
		[Address(RVA = "0x27CF310", Offset = "0x27CD910", VA = "0x1827CF310", Slot = "5")]
		internal override bool Cancel()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4000B1C")]
	[FieldOffset(Offset = "0x0")]
	private static LinkedList<WeakReference> s_Queues;

	[Token(Token = "0x4000B1D")]
	[FieldOffset(Offset = "0x8")]
	private static LinkedList<WeakReference> s_NewQueues;

	[Token(Token = "0x4000B1E")]
	[FieldOffset(Offset = "0x10")]
	private static int s_ThreadState;

	[Token(Token = "0x4000B1F")]
	[FieldOffset(Offset = "0x18")]
	private static AutoResetEvent s_ThreadReadyEvent;

	[Token(Token = "0x4000B20")]
	[FieldOffset(Offset = "0x20")]
	private static ManualResetEvent s_ThreadShutdownEvent;

	[Token(Token = "0x4000B21")]
	[FieldOffset(Offset = "0x28")]
	private static WaitHandle[] s_ThreadEvents;

	[Token(Token = "0x4000B22")]
	[FieldOffset(Offset = "0x30")]
	private static int s_CacheScanIteration;

	[Token(Token = "0x4000B23")]
	[FieldOffset(Offset = "0x38")]
	private static Hashtable s_QueuesCache;

	[Token(Token = "0x6001448")]
	[Address(RVA = "0x27D43D0", Offset = "0x27D29D0", VA = "0x1827D43D0")]
	static TimerThread()
	{
	}

	[Token(Token = "0x6001449")]
	[Address(RVA = "0x27D2F30", Offset = "0x27D1530", VA = "0x1827D2F30")]
	internal static Queue CreateQueue(int durationMilliseconds)
	{
		return null;
	}

	[Token(Token = "0x600144A")]
	[Address(RVA = "0x27D3150", Offset = "0x27D1750", VA = "0x1827D3150")]
	internal static Queue GetOrCreateQueue(int durationMilliseconds)
	{
		return null;
	}

	[Token(Token = "0x600144B")]
	[Address(RVA = "0x27D3A90", Offset = "0x27D2090", VA = "0x1827D3A90")]
	private static void Prod()
	{
	}

	[Token(Token = "0x600144C")]
	[Address(RVA = "0x27D3C30", Offset = "0x27D2230", VA = "0x1827D3C30")]
	private static void ThreadProc()
	{
	}

	[Token(Token = "0x600144D")]
	[Address(RVA = "0x27D3BB0", Offset = "0x27D21B0", VA = "0x1827D3BB0")]
	private static void StopTimerThread()
	{
	}

	[Token(Token = "0x600144E")]
	[Address(RVA = "0x27D39B0", Offset = "0x27D1FB0", VA = "0x1827D39B0")]
	private static bool IsTickBetween(int start, int end, int comparand)
	{
		return default(bool);
	}

	[Token(Token = "0x600144F")]
	[Address(RVA = "0x27D39D0", Offset = "0x27D1FD0", VA = "0x1827D39D0")]
	private static void OnDomainUnload(object sender, EventArgs e)
	{
	}
}
