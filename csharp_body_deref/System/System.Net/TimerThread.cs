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
			[Address(RVA = "0x496A7C0", Offset = "0x496A7C0", VA = "0x496A7C0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000890")]
		[Address(RVA = "0x496A7A0", Offset = "0x496A7A0", VA = "0x496A7A0")]
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
			[Address(RVA = "0x496A800", Offset = "0x496A800", VA = "0x496A800")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170001E3")]
		internal int Expiration
		{
			[Token(Token = "0x6000895")]
			[Address(RVA = "0x496A810", Offset = "0x496A810", VA = "0x496A810")]
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
		[Address(RVA = "0x496A7D0", Offset = "0x496A7D0", VA = "0x496A7D0")]
		internal Timer(int durationMilliseconds)
		{
		}

		[Token(Token = "0x6000896")]
		internal abstract bool Cancel();

		[Token(Token = "0x6000898")]
		[Address(RVA = "0x496A820", Offset = "0x496A820", VA = "0x496A820", Slot = "4")]
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
		[Address(RVA = "0x4968EF0", Offset = "0x4968EF0", VA = "0x4968EF0")]
		internal TimerQueue(int durationMilliseconds)
		{
		}

		[Token(Token = "0x600089C")]
		[Address(RVA = "0x496A990", Offset = "0x496A990", VA = "0x496A990", Slot = "4")]
		internal override Timer CreateTimer(Callback callback, object context)
		{
			return null;
		}

		[Token(Token = "0x600089D")]
		[Address(RVA = "0x496A440", Offset = "0x496A440", VA = "0x496A440")]
		internal bool Fire(out int nextExpiration)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000166")]
	private class InfiniteTimerQueue : Queue
	{
		[Token(Token = "0x600089E")]
		[Address(RVA = "0x4968ED0", Offset = "0x4968ED0", VA = "0x4968ED0")]
		internal InfiniteTimerQueue()
		{
		}

		[Token(Token = "0x600089F")]
		[Address(RVA = "0x496AF60", Offset = "0x496AF60", VA = "0x496AF60", Slot = "4")]
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
			[Address(RVA = "0x496AFD0", Offset = "0x496AFD0", VA = "0x496AFD0", Slot = "6")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170001E6")]
		internal TimerNode Next
		{
			[Token(Token = "0x60008A3")]
			[Address(RVA = "0x496AFE0", Offset = "0x496AFE0", VA = "0x496AFE0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60008A4")]
			[Address(RVA = "0x496AFF0", Offset = "0x496AFF0", VA = "0x496AFF0")]
			set
			{
			}
		}

		[Token(Token = "0x170001E7")]
		internal TimerNode Prev
		{
			[Token(Token = "0x60008A5")]
			[Address(RVA = "0x496B000", Offset = "0x496B000", VA = "0x496B000")]
			get
			{
				return null;
			}
			[Token(Token = "0x60008A6")]
			[Address(RVA = "0x496B010", Offset = "0x496B010", VA = "0x496B010")]
			set
			{
			}
		}

		[Token(Token = "0x60008A0")]
		[Address(RVA = "0x496ABF0", Offset = "0x496ABF0", VA = "0x496ABF0")]
		internal TimerNode(Callback callback, object context, int durationMilliseconds, object queueLock)
		{
		}

		[Token(Token = "0x60008A1")]
		[Address(RVA = "0x496A960", Offset = "0x496A960", VA = "0x496A960")]
		internal TimerNode()
		{
		}

		[Token(Token = "0x60008A7")]
		[Address(RVA = "0x496B020", Offset = "0x496B020", VA = "0x496B020", Slot = "5")]
		internal override bool Cancel()
		{
			return default(bool);
		}

		[Token(Token = "0x60008A8")]
		[Address(RVA = "0x496AC70", Offset = "0x496AC70", VA = "0x496AC70")]
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
			[Address(RVA = "0x496B1E0", Offset = "0x496B1E0", VA = "0x496B1E0", Slot = "6")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60008A9")]
		[Address(RVA = "0x496AFB0", Offset = "0x496AFB0", VA = "0x496AFB0")]
		internal InfiniteTimer()
		{
		}

		[Token(Token = "0x60008AB")]
		[Address(RVA = "0x496B1F0", Offset = "0x496B1F0", VA = "0x496B1F0", Slot = "5")]
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
	[Address(RVA = "0x4968BE0", Offset = "0x4968BE0", VA = "0x4968BE0")]
	static TimerThread()
	{
	}

	[Token(Token = "0x6000889")]
	[Address(RVA = "0x4964840", Offset = "0x4964840", VA = "0x4964840")]
	internal static Queue CreateQueue(int durationMilliseconds)
	{
		return null;
	}

	[Token(Token = "0x600088A")]
	[Address(RVA = "0x4968FA0", Offset = "0x4968FA0", VA = "0x4968FA0")]
	internal static Queue GetOrCreateQueue(int durationMilliseconds)
	{
		return null;
	}

	[Token(Token = "0x600088B")]
	[Address(RVA = "0x4969A90", Offset = "0x4969A90", VA = "0x4969A90")]
	private static void Prod()
	{
	}

	[Token(Token = "0x600088C")]
	[Address(RVA = "0x4969BC0", Offset = "0x4969BC0", VA = "0x4969BC0")]
	private static void ThreadProc()
	{
	}

	[Token(Token = "0x600088D")]
	[Address(RVA = "0x496A620", Offset = "0x496A620", VA = "0x496A620")]
	private static void StopTimerThread()
	{
	}

	[Token(Token = "0x600088E")]
	[Address(RVA = "0x496A600", Offset = "0x496A600", VA = "0x496A600")]
	private static bool IsTickBetween(int start, int end, int comparand)
	{
		return default(bool);
	}

	[Token(Token = "0x600088F")]
	[Address(RVA = "0x496A690", Offset = "0x496A690", VA = "0x496A690")]
	private static void OnDomainUnload(object sender, EventArgs e)
	{
	}
}
