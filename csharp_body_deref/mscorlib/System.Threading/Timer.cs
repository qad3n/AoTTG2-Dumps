using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x200021C")]
[ComVisible(true)]
public sealed class Timer : MarshalByRefObject, IDisposable
{
	[Token(Token = "0x200021D")]
	private struct TimerComparer : IComparer, IComparer<Timer>
	{
		[Token(Token = "0x600135A")]
		[Address(RVA = "0x5057900", Offset = "0x5057900", VA = "0x5057900", Slot = "4")]
		private int System_002ECollections_002EIComparer_002ECompare(object x, object y)
		{
			return default(int);
		}

		[Token(Token = "0x600135B")]
		[Address(RVA = "0x50579D0", Offset = "0x50579D0", VA = "0x50579D0", Slot = "5")]
		public int Compare(Timer tx, Timer ty)
		{
			return default(int);
		}
	}

	[Token(Token = "0x200021E")]
	private sealed class Scheduler
	{
		[Token(Token = "0x4000A47")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Scheduler instance;

		[Token(Token = "0x4000A48")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private bool needReSort;

		[Token(Token = "0x4000A49")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private List<Timer> list;

		[Token(Token = "0x4000A4A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private long current_next_run;

		[Token(Token = "0x4000A4B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private ManualResetEvent changed;

		[Token(Token = "0x170001D3")]
		public static Scheduler Instance
		{
			[Token(Token = "0x600135F")]
			[Address(RVA = "0x5057FF0", Offset = "0x5057FF0", VA = "0x5057FF0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600135C")]
		[Address(RVA = "0x5057A40", Offset = "0x5057A40", VA = "0x5057A40")]
		private void InitScheduler()
		{
		}

		[Token(Token = "0x600135D")]
		[Address(RVA = "0x5057B30", Offset = "0x5057B30", VA = "0x5057B30")]
		private void WakeupScheduler()
		{
		}

		[Token(Token = "0x600135E")]
		[Address(RVA = "0x5057B50", Offset = "0x5057B50", VA = "0x5057B50")]
		private void SchedulerThread()
		{
		}

		[Token(Token = "0x6001360")]
		[Address(RVA = "0x5058060", Offset = "0x5058060", VA = "0x5058060")]
		private Scheduler()
		{
		}

		[Token(Token = "0x6001361")]
		[Address(RVA = "0x5057670", Offset = "0x5057670", VA = "0x5057670")]
		public void Remove(Timer timer)
		{
		}

		[Token(Token = "0x6001362")]
		[Address(RVA = "0x5057750", Offset = "0x5057750", VA = "0x5057750")]
		public void Change(Timer timer, long new_next_run)
		{
		}

		[Token(Token = "0x6001363")]
		[Address(RVA = "0x5058120", Offset = "0x5058120", VA = "0x5058120")]
		private void Add(Timer timer)
		{
		}

		[Token(Token = "0x6001364")]
		[Address(RVA = "0x5058100", Offset = "0x5058100", VA = "0x5058100")]
		private void InternalRemove(Timer timer)
		{
		}

		[Token(Token = "0x6001365")]
		[Address(RVA = "0x5058210", Offset = "0x5058210", VA = "0x5058210")]
		private static void TimerCB(object o)
		{
		}

		[Token(Token = "0x6001366")]
		[Address(RVA = "0x5058270", Offset = "0x5058270", VA = "0x5058270")]
		private void FireTimer(Timer timer)
		{
		}

		[Token(Token = "0x6001367")]
		[Address(RVA = "0x5057CA0", Offset = "0x5057CA0", VA = "0x5057CA0")]
		private int RunSchedulerLoop()
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000A3E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private TimerCallback callback;

	[Token(Token = "0x4000A3F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private object state;

	[Token(Token = "0x4000A40")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private long due_time_ms;

	[Token(Token = "0x4000A41")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private long period_ms;

	[Token(Token = "0x4000A42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private long next_run;

	[Token(Token = "0x4000A43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private bool disposed;

	[Token(Token = "0x4000A44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
	private bool is_dead;

	[Token(Token = "0x4000A45")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x42")]
	private bool is_added;

	[Token(Token = "0x4000A46")]
	private const long MaxValue = 4294967294L;

	[Token(Token = "0x170001D2")]
	private static Scheduler scheduler
	{
		[Token(Token = "0x6001350")]
		[Address(RVA = "0x5057030", Offset = "0x5057030", VA = "0x5057030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001351")]
	[Address(RVA = "0x50570E0", Offset = "0x50570E0", VA = "0x50570E0")]
	public Timer(TimerCallback callback, object state, int dueTime, int period)
	{
	}

	[Token(Token = "0x6001352")]
	[Address(RVA = "0x50571D0", Offset = "0x50571D0", VA = "0x50571D0")]
	public Timer(TimerCallback callback, object state, TimeSpan dueTime, TimeSpan period)
	{
	}

	[Token(Token = "0x6001353")]
	[Address(RVA = "0x5057120", Offset = "0x5057120", VA = "0x5057120")]
	private void Init(TimerCallback callback, object state, long dueTime, long period)
	{
	}

	[Token(Token = "0x6001354")]
	[Address(RVA = "0x50574E0", Offset = "0x50574E0", VA = "0x50574E0")]
	public bool Change(int dueTime, int period)
	{
		return default(bool);
	}

	[Token(Token = "0x6001355")]
	[Address(RVA = "0x5057500", Offset = "0x5057500", VA = "0x5057500")]
	public bool Change(TimeSpan dueTime, TimeSpan period)
	{
		return default(bool);
	}

	[Token(Token = "0x6001356")]
	[Address(RVA = "0x5057590", Offset = "0x5057590", VA = "0x5057590", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001357")]
	[Address(RVA = "0x5057270", Offset = "0x5057270", VA = "0x5057270")]
	private bool Change(long dueTime, long period, bool first)
	{
		return default(bool);
	}

	[Token(Token = "0x6001358")]
	[Address(RVA = "0x50578F0", Offset = "0x50578F0", VA = "0x50578F0")]
	internal void KeepRootedWhileScheduled()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001359")]
	[Address(RVA = "0x5057740", Offset = "0x5057740", VA = "0x5057740")]
	private static extern long GetTimeMonotonic();
}
