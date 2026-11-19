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

[Token(Token = "0x20002AA")]
internal static class TimerThread
{
	[Token(Token = "0x20002AB")]
	internal abstract class Queue
	{
		[Token(Token = "0x4000A55")]
		[FieldOffset(Offset = "0x10")]
		private readonly int m_DurationMilliseconds;

		[Token(Token = "0x17000407")]
		internal int Duration
		{
			[Token(Token = "0x6001293")]
			[Address(RVA = "0x62B1D30", Offset = "0x62B0D30", VA = "0x62B1D30")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6001292")]
		[Address(RVA = "0x62B1D10", Offset = "0x62B0D10", VA = "0x62B1D10")]
		internal Queue(int durationMilliseconds)
		{
		}

		[Token(Token = "0x6001294")]
		internal abstract Timer CreateTimer(Callback callback, object context);
	}

	[Token(Token = "0x20002AC")]
	internal abstract class Timer : IDisposable
	{
		[Token(Token = "0x4000A56")]
		[FieldOffset(Offset = "0x10")]
		private readonly int m_StartTimeMilliseconds;

		[Token(Token = "0x4000A57")]
		[FieldOffset(Offset = "0x14")]
		private readonly int m_DurationMilliseconds;

		[Token(Token = "0x17000408")]
		internal int StartTime
		{
			[Token(Token = "0x6001296")]
			[Address(RVA = "0x62B1D70", Offset = "0x62B0D70", VA = "0x62B1D70")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000409")]
		internal int Expiration
		{
			[Token(Token = "0x6001297")]
			[Address(RVA = "0x62B1D80", Offset = "0x62B0D80", VA = "0x62B1D80")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700040A")]
		internal abstract bool HasExpired
		{
			[Token(Token = "0x6001299")]
			get;
		}

		[Token(Token = "0x6001295")]
		[Address(RVA = "0x62B1D40", Offset = "0x62B0D40", VA = "0x62B1D40")]
		internal Timer(int durationMilliseconds)
		{
		}

		[Token(Token = "0x6001298")]
		internal abstract bool Cancel();

		[Token(Token = "0x600129A")]
		[Address(RVA = "0x62B1D90", Offset = "0x62B0D90", VA = "0x62B1D90", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x20002AD")]
	internal delegate void Callback(Timer timer, int timeNoticed, object context);

	[Token(Token = "0x20002AE")]
	private class TimerQueue : Queue
	{
		[Token(Token = "0x4000A58")]
		[FieldOffset(Offset = "0x18")]
		private IntPtr m_ThisHandle;

		[Token(Token = "0x4000A59")]
		[FieldOffset(Offset = "0x20")]
		private readonly TimerNode m_Timers;

		[Token(Token = "0x600129D")]
		[Address(RVA = "0x62B05E0", Offset = "0x62AF5E0", VA = "0x62B05E0")]
		internal TimerQueue(int durationMilliseconds)
		{
		}

		[Token(Token = "0x600129E")]
		[Address(RVA = "0x62B1F00", Offset = "0x62B0F00", VA = "0x62B1F00", Slot = "4")]
		internal override Timer CreateTimer(Callback callback, object context)
		{
			return null;
		}

		[Token(Token = "0x600129F")]
		[Address(RVA = "0x62B19C0", Offset = "0x62B09C0", VA = "0x62B19C0")]
		internal bool Fire(out int nextExpiration)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20002AF")]
	private class InfiniteTimerQueue : Queue
	{
		[Token(Token = "0x60012A0")]
		[Address(RVA = "0x62B05C0", Offset = "0x62AF5C0", VA = "0x62B05C0")]
		internal InfiniteTimerQueue()
		{
		}

		[Token(Token = "0x60012A1")]
		[Address(RVA = "0x62B24A0", Offset = "0x62B14A0", VA = "0x62B24A0", Slot = "4")]
		internal override Timer CreateTimer(Callback callback, object context)
		{
			return null;
		}
	}

	[Token(Token = "0x20002B0")]
	private class TimerNode : Timer
	{
		[Token(Token = "0x20002B1")]
		private enum TimerState
		{
			[Token(Token = "0x4000A61")]
			Ready,
			[Token(Token = "0x4000A62")]
			Fired,
			[Token(Token = "0x4000A63")]
			Cancelled,
			[Token(Token = "0x4000A64")]
			Sentinel
		}

		[Token(Token = "0x4000A5A")]
		[FieldOffset(Offset = "0x18")]
		private TimerState m_TimerState;

		[Token(Token = "0x4000A5B")]
		[FieldOffset(Offset = "0x20")]
		private Callback m_Callback;

		[Token(Token = "0x4000A5C")]
		[FieldOffset(Offset = "0x28")]
		private object m_Context;

		[Token(Token = "0x4000A5D")]
		[FieldOffset(Offset = "0x30")]
		private object m_QueueLock;

		[Token(Token = "0x4000A5E")]
		[FieldOffset(Offset = "0x38")]
		private TimerNode next;

		[Token(Token = "0x4000A5F")]
		[FieldOffset(Offset = "0x40")]
		private TimerNode prev;

		[Token(Token = "0x1700040B")]
		internal override bool HasExpired
		{
			[Token(Token = "0x60012A4")]
			[Address(RVA = "0x62B2510", Offset = "0x62B1510", VA = "0x62B2510", Slot = "6")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700040C")]
		internal TimerNode Next
		{
			[Token(Token = "0x60012A5")]
			[Address(RVA = "0x62B2520", Offset = "0x62B1520", VA = "0x62B2520")]
			get
			{
				return null;
			}
			[Token(Token = "0x60012A6")]
			[Address(RVA = "0x62B2530", Offset = "0x62B1530", VA = "0x62B2530")]
			set
			{
			}
		}

		[Token(Token = "0x1700040D")]
		internal TimerNode Prev
		{
			[Token(Token = "0x60012A7")]
			[Address(RVA = "0x62B2540", Offset = "0x62B1540", VA = "0x62B2540")]
			get
			{
				return null;
			}
			[Token(Token = "0x60012A8")]
			[Address(RVA = "0x62B2550", Offset = "0x62B1550", VA = "0x62B2550")]
			set
			{
			}
		}

		[Token(Token = "0x60012A2")]
		[Address(RVA = "0x62B2150", Offset = "0x62B1150", VA = "0x62B2150")]
		internal TimerNode(Callback callback, object context, int durationMilliseconds, object queueLock)
		{
		}

		[Token(Token = "0x60012A3")]
		[Address(RVA = "0x62B1ED0", Offset = "0x62B0ED0", VA = "0x62B1ED0")]
		internal TimerNode()
		{
		}

		[Token(Token = "0x60012A9")]
		[Address(RVA = "0x62B2560", Offset = "0x62B1560", VA = "0x62B2560", Slot = "5")]
		internal override bool Cancel()
		{
			return default(bool);
		}

		[Token(Token = "0x60012AA")]
		[Address(RVA = "0x62B21D0", Offset = "0x62B11D0", VA = "0x62B21D0")]
		internal bool Fire()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20002B2")]
	private class InfiniteTimer : Timer
	{
		[Token(Token = "0x4000A65")]
		[FieldOffset(Offset = "0x18")]
		private int cancelled;

		[Token(Token = "0x1700040E")]
		internal override bool HasExpired
		{
			[Token(Token = "0x60012AC")]
			[Address(RVA = "0x62B26E0", Offset = "0x62B16E0", VA = "0x62B26E0", Slot = "6")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60012AB")]
		[Address(RVA = "0x62B24F0", Offset = "0x62B14F0", VA = "0x62B24F0")]
		internal InfiniteTimer()
		{
		}

		[Token(Token = "0x60012AD")]
		[Address(RVA = "0x62B26F0", Offset = "0x62B16F0", VA = "0x62B26F0", Slot = "5")]
		internal override bool Cancel()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4000A4D")]
	[FieldOffset(Offset = "0x0")]
	private static LinkedList<WeakReference> s_Queues;

	[Token(Token = "0x4000A4E")]
	[FieldOffset(Offset = "0x8")]
	private static LinkedList<WeakReference> s_NewQueues;

	[Token(Token = "0x4000A4F")]
	[FieldOffset(Offset = "0x10")]
	private static int s_ThreadState;

	[Token(Token = "0x4000A50")]
	[FieldOffset(Offset = "0x18")]
	private static AutoResetEvent s_ThreadReadyEvent;

	[Token(Token = "0x4000A51")]
	[FieldOffset(Offset = "0x20")]
	private static ManualResetEvent s_ThreadShutdownEvent;

	[Token(Token = "0x4000A52")]
	[FieldOffset(Offset = "0x28")]
	private static WaitHandle[] s_ThreadEvents;

	[Token(Token = "0x4000A53")]
	[FieldOffset(Offset = "0x30")]
	private static int s_CacheScanIteration;

	[Token(Token = "0x4000A54")]
	[FieldOffset(Offset = "0x38")]
	private static Hashtable s_QueuesCache;

	[Token(Token = "0x600128A")]
	[Address(RVA = "0x62B02D0", Offset = "0x62AF2D0", VA = "0x62B02D0")]
	static TimerThread()
	{
	}

	[Token(Token = "0x600128B")]
	[Address(RVA = "0x62AC270", Offset = "0x62AB270", VA = "0x62AC270")]
	internal static Queue CreateQueue(int durationMilliseconds)
	{
		return null;
	}

	[Token(Token = "0x600128C")]
	[Address(RVA = "0x62B0690", Offset = "0x62AF690", VA = "0x62B0690")]
	internal static Queue GetOrCreateQueue(int durationMilliseconds)
	{
		return null;
	}

	[Token(Token = "0x600128D")]
	[Address(RVA = "0x62B1070", Offset = "0x62B0070", VA = "0x62B1070")]
	private static void Prod()
	{
	}

	[Token(Token = "0x600128E")]
	[Address(RVA = "0x62B11A0", Offset = "0x62B01A0", VA = "0x62B11A0")]
	private static void ThreadProc()
	{
	}

	[Token(Token = "0x600128F")]
	[Address(RVA = "0x62B1B90", Offset = "0x62B0B90", VA = "0x62B1B90")]
	private static void StopTimerThread()
	{
	}

	[Token(Token = "0x6001290")]
	[Address(RVA = "0x62B1B70", Offset = "0x62B0B70", VA = "0x62B1B70")]
	private static bool IsTickBetween(int start, int end, int comparand)
	{
		return default(bool);
	}

	[Token(Token = "0x6001291")]
	[Address(RVA = "0x62B1C00", Offset = "0x62B0C00", VA = "0x62B1C00")]
	private static void OnDomainUnload(object sender, EventArgs e)
	{
	}
}
