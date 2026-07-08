using System.Collections;
using System.Collections.Generic;
using System.Threading;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000161")]
internal static class TimerThread
{
	[Token(Token = "0x2000162")]
	internal abstract class Queue
	{
		[Token(Token = "0x400070E")]
		[FieldOffset(Offset = "0x10")]
		private readonly int m_DurationMilliseconds;

		[Token(Token = "0x170001E1")]
		internal int Duration
		{
			[Token(Token = "0x6000891")]
			[Address(RVA = "0x46456C0", Offset = "0x46456C0", VA = "0x46456C0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000890")]
		[Address(RVA = "0x46456A0", Offset = "0x46456A0", VA = "0x46456A0")]
		internal Queue(int durationMilliseconds)
		{
		}

		[Token(Token = "0x6000892")]
		internal abstract Timer CreateTimer(Callback callback, object context);
	}

	[Token(Token = "0x2000163")]
	internal abstract class Timer : IDisposable
	{
		[Token(Token = "0x400070F")]
		[FieldOffset(Offset = "0x10")]
		private readonly int m_StartTimeMilliseconds;

		[Token(Token = "0x4000710")]
		[FieldOffset(Offset = "0x14")]
		private readonly int m_DurationMilliseconds;

		[Token(Token = "0x170001E2")]
		internal int StartTime
		{
			[Token(Token = "0x6000894")]
			[Address(RVA = "0x4645700", Offset = "0x4645700", VA = "0x4645700")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170001E3")]
		internal int Expiration
		{
			[Token(Token = "0x6000895")]
			[Address(RVA = "0x4645710", Offset = "0x4645710", VA = "0x4645710")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170001E4")]
		internal abstract bool HasExpired
		{
			[Token(Token = "0x6000897")]
			get;
		}

		[Token(Token = "0x6000893")]
		[Address(RVA = "0x46456D0", Offset = "0x46456D0", VA = "0x46456D0")]
		internal Timer(int durationMilliseconds)
		{
		}

		[Token(Token = "0x6000896")]
		internal abstract bool Cancel();

		[Token(Token = "0x6000898")]
		[Address(RVA = "0x4645720", Offset = "0x4645720", VA = "0x4645720", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000164")]
	internal delegate void Callback(Timer timer, int timeNoticed, object context);

	[Token(Token = "0x2000165")]
	private class TimerQueue : Queue
	{
		[Token(Token = "0x4000711")]
		[FieldOffset(Offset = "0x18")]
		private IntPtr m_ThisHandle;

		[Token(Token = "0x4000712")]
		[FieldOffset(Offset = "0x20")]
		private readonly TimerNode m_Timers;

		[Token(Token = "0x600089B")]
		[Address(RVA = "0x4643DF0", Offset = "0x4643DF0", VA = "0x4643DF0")]
		internal TimerQueue(int durationMilliseconds)
		{
		}

		[Token(Token = "0x600089C")]
		[Address(RVA = "0x4645890", Offset = "0x4645890", VA = "0x4645890", Slot = "4")]
		internal override Timer CreateTimer(Callback callback, object context)
		{
			return null;
		}

		[Token(Token = "0x600089D")]
		[Address(RVA = "0x4645340", Offset = "0x4645340", VA = "0x4645340")]
		internal bool Fire(out int nextExpiration)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000166")]
	private class InfiniteTimerQueue : Queue
	{
		[Token(Token = "0x600089E")]
		[Address(RVA = "0x4643DD0", Offset = "0x4643DD0", VA = "0x4643DD0")]
		internal InfiniteTimerQueue()
		{
		}

		[Token(Token = "0x600089F")]
		[Address(RVA = "0x4645E60", Offset = "0x4645E60", VA = "0x4645E60", Slot = "4")]
		internal override Timer CreateTimer(Callback callback, object context)
		{
			return null;
		}
	}

	[Token(Token = "0x2000167")]
	private class TimerNode : Timer
	{
		[Token(Token = "0x2000168")]
		private enum TimerState
		{
			[Token(Token = "0x400071A")]
			Ready,
			[Token(Token = "0x400071B")]
			Fired,
			[Token(Token = "0x400071C")]
			Cancelled,
			[Token(Token = "0x400071D")]
			Sentinel
		}

		[Token(Token = "0x4000713")]
		[FieldOffset(Offset = "0x18")]
		private TimerState m_TimerState;

		[Token(Token = "0x4000714")]
		[FieldOffset(Offset = "0x20")]
		private Callback m_Callback;

		[Token(Token = "0x4000715")]
		[FieldOffset(Offset = "0x28")]
		private object m_Context;

		[Token(Token = "0x4000716")]
		[FieldOffset(Offset = "0x30")]
		private object m_QueueLock;

		[Token(Token = "0x4000717")]
		[FieldOffset(Offset = "0x38")]
		private TimerNode next;

		[Token(Token = "0x4000718")]
		[FieldOffset(Offset = "0x40")]
		private TimerNode prev;

		[Token(Token = "0x170001E5")]
		internal override bool HasExpired
		{
			[Token(Token = "0x60008A2")]
			[Address(RVA = "0x4645ED0", Offset = "0x4645ED0", VA = "0x4645ED0", Slot = "6")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170001E6")]
		internal TimerNode Next
		{
			[Token(Token = "0x60008A3")]
			[Address(RVA = "0x4645EE0", Offset = "0x4645EE0", VA = "0x4645EE0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60008A4")]
			[Address(RVA = "0x4645EF0", Offset = "0x4645EF0", VA = "0x4645EF0")]
			set
			{
			}
		}

		[Token(Token = "0x170001E7")]
		internal TimerNode Prev
		{
			[Token(Token = "0x60008A5")]
			[Address(RVA = "0x4645F00", Offset = "0x4645F00", VA = "0x4645F00")]
			get
			{
				return null;
			}
			[Token(Token = "0x60008A6")]
			[Address(RVA = "0x4645F10", Offset = "0x4645F10", VA = "0x4645F10")]
			set
			{
			}
		}

		[Token(Token = "0x60008A0")]
		[Address(RVA = "0x4645AF0", Offset = "0x4645AF0", VA = "0x4645AF0")]
		internal TimerNode(Callback callback, object context, int durationMilliseconds, object queueLock)
		{
		}

		[Token(Token = "0x60008A1")]
		[Address(RVA = "0x4645860", Offset = "0x4645860", VA = "0x4645860")]
		internal TimerNode()
		{
		}

		[Token(Token = "0x60008A7")]
		[Address(RVA = "0x4645F20", Offset = "0x4645F20", VA = "0x4645F20", Slot = "5")]
		internal override bool Cancel()
		{
			return default(bool);
		}

		[Token(Token = "0x60008A8")]
		[Address(RVA = "0x4645B70", Offset = "0x4645B70", VA = "0x4645B70")]
		internal bool Fire()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000169")]
	private class InfiniteTimer : Timer
	{
		[Token(Token = "0x400071E")]
		[FieldOffset(Offset = "0x18")]
		private int cancelled;

		[Token(Token = "0x170001E8")]
		internal override bool HasExpired
		{
			[Token(Token = "0x60008AA")]
			[Address(RVA = "0x46460E0", Offset = "0x46460E0", VA = "0x46460E0", Slot = "6")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60008A9")]
		[Address(RVA = "0x4645EB0", Offset = "0x4645EB0", VA = "0x4645EB0")]
		internal InfiniteTimer()
		{
		}

		[Token(Token = "0x60008AB")]
		[Address(RVA = "0x46460F0", Offset = "0x46460F0", VA = "0x46460F0", Slot = "5")]
		internal override bool Cancel()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4000706")]
	[FieldOffset(Offset = "0x0")]
	private static LinkedList<WeakReference> s_Queues;

	[Token(Token = "0x4000707")]
	[FieldOffset(Offset = "0x8")]
	private static LinkedList<WeakReference> s_NewQueues;

	[Token(Token = "0x4000708")]
	[FieldOffset(Offset = "0x10")]
	private static int s_ThreadState;

	[Token(Token = "0x4000709")]
	[FieldOffset(Offset = "0x18")]
	private static AutoResetEvent s_ThreadReadyEvent;

	[Token(Token = "0x400070A")]
	[FieldOffset(Offset = "0x20")]
	private static ManualResetEvent s_ThreadShutdownEvent;

	[Token(Token = "0x400070B")]
	[FieldOffset(Offset = "0x28")]
	private static WaitHandle[] s_ThreadEvents;

	[Token(Token = "0x400070C")]
	[FieldOffset(Offset = "0x30")]
	private static int s_CacheScanIteration;

	[Token(Token = "0x400070D")]
	[FieldOffset(Offset = "0x38")]
	private static Hashtable s_QueuesCache;

	[Token(Token = "0x6000888")]
	[Address(RVA = "0x4643AE0", Offset = "0x4643AE0", VA = "0x4643AE0")]
	static TimerThread()
	{
	}

	[Token(Token = "0x6000889")]
	[Address(RVA = "0x463F740", Offset = "0x463F740", VA = "0x463F740")]
	internal static Queue CreateQueue(int durationMilliseconds)
	{
		return null;
	}

	[Token(Token = "0x600088A")]
	[Address(RVA = "0x4643EA0", Offset = "0x4643EA0", VA = "0x4643EA0")]
	internal static Queue GetOrCreateQueue(int durationMilliseconds)
	{
		return null;
	}

	[Token(Token = "0x600088B")]
	[Address(RVA = "0x4644990", Offset = "0x4644990", VA = "0x4644990")]
	private static void Prod()
	{
	}

	[Token(Token = "0x600088C")]
	[Address(RVA = "0x4644AC0", Offset = "0x4644AC0", VA = "0x4644AC0")]
	private static void ThreadProc()
	{
	}

	[Token(Token = "0x600088D")]
	[Address(RVA = "0x4645520", Offset = "0x4645520", VA = "0x4645520")]
	private static void StopTimerThread()
	{
	}

	[Token(Token = "0x600088E")]
	[Address(RVA = "0x4645500", Offset = "0x4645500", VA = "0x4645500")]
	private static bool IsTickBetween(int start, int end, int comparand)
	{
		return default(bool);
	}

	[Token(Token = "0x600088F")]
	[Address(RVA = "0x4645590", Offset = "0x4645590", VA = "0x4645590")]
	private static void OnDomainUnload(object sender, EventArgs e)
	{
	}
}
