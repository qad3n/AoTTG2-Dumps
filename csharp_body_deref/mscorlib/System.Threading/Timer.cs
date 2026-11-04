// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Timer
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x200024D")]
[ComVisible(true)]
public sealed class Timer : MarshalByRefObject, IDisposable
{
	[Token(Token = "0x200024E")]
	private struct TimerComparer : IComparer, IComparer<Timer>
	{
		[Token(Token = "0x60013CB")]
		[Address(RVA = "0x1BC3950", Offset = "0x1BC1F50", VA = "0x181BC3950", Slot = "4")]
		private int System_002ECollections_002EIComparer_002ECompare(object x, object y)
		{
			return default(int);
		}

		[Token(Token = "0x60013CC")]
		[Address(RVA = "0x1BC38E0", Offset = "0x1BC1EE0", VA = "0x181BC38E0", Slot = "5")]
		public int Compare(Timer tx, Timer ty)
		{
			return default(int);
		}
	}

	[Token(Token = "0x200024F")]
	private sealed class Scheduler
	{
		[Token(Token = "0x4000AA4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Scheduler instance;

		[Token(Token = "0x4000AA5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private bool needReSort;

		[Token(Token = "0x4000AA6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private List<Timer> list;

		[Token(Token = "0x4000AA7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private long current_next_run;

		[Token(Token = "0x4000AA8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private ManualResetEvent changed;

		[Token(Token = "0x170001D7")]
		public static Scheduler Instance
		{
			[Token(Token = "0x60013D0")]
			[Address(RVA = "0x1BB39A0", Offset = "0x1BB1FA0", VA = "0x181BB39A0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60013CD")]
		[Address(RVA = "0x1BB2E90", Offset = "0x1BB1490", VA = "0x181BB2E90")]
		private void InitScheduler()
		{
		}

		[Token(Token = "0x60013CE")]
		[Address(RVA = "0x1BB37F0", Offset = "0x1BB1DF0", VA = "0x181BB37F0")]
		private void WakeupScheduler()
		{
		}

		[Token(Token = "0x60013CF")]
		[Address(RVA = "0x1BB3550", Offset = "0x1BB1B50", VA = "0x181BB3550")]
		private void SchedulerThread()
		{
		}

		[Token(Token = "0x60013D1")]
		[Address(RVA = "0x1BB3900", Offset = "0x1BB1F00", VA = "0x181BB3900")]
		private Scheduler()
		{
		}

		[Token(Token = "0x60013D2")]
		[Address(RVA = "0x1BB3090", Offset = "0x1BB1690", VA = "0x181BB3090")]
		public void Remove(Timer timer)
		{
		}

		[Token(Token = "0x60013D3")]
		[Address(RVA = "0x1BB2B20", Offset = "0x1BB1120", VA = "0x181BB2B20")]
		public void Change(Timer timer, long new_next_run)
		{
		}

		[Token(Token = "0x60013D4")]
		[Address(RVA = "0x1BB2A30", Offset = "0x1BB1030", VA = "0x181BB2A30")]
		private void Add(Timer timer)
		{
		}

		[Token(Token = "0x60013D5")]
		[Address(RVA = "0x1BB3060", Offset = "0x1BB1660", VA = "0x181BB3060")]
		private void InternalRemove(Timer timer)
		{
		}

		[Token(Token = "0x60013D6")]
		[Address(RVA = "0x1BB3780", Offset = "0x1BB1D80", VA = "0x181BB3780")]
		private static void TimerCB(object o)
		{
		}

		[Token(Token = "0x60013D7")]
		[Address(RVA = "0x1BB2DD0", Offset = "0x1BB13D0", VA = "0x181BB2DD0")]
		private void FireTimer(Timer timer)
		{
		}

		[Token(Token = "0x60013D8")]
		[Address(RVA = "0x1BB3190", Offset = "0x1BB1790", VA = "0x181BB3190")]
		private int RunSchedulerLoop()
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000A9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private TimerCallback callback;

	[Token(Token = "0x4000A9D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private object state;

	[Token(Token = "0x4000A9E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private long due_time_ms;

	[Token(Token = "0x4000A9F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private long period_ms;

	[Token(Token = "0x4000AA0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private long next_run;

	[Token(Token = "0x4000AA1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private bool disposed;

	[Token(Token = "0x4000AA2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
	private bool is_dead;

	[Token(Token = "0x4000AA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x42")]
	private bool is_added;

	[Token(Token = "0x170001D6")]
	private static Scheduler scheduler
	{
		[Token(Token = "0x60013C1")]
		[Address(RVA = "0x1BC4070", Offset = "0x1BC2670", VA = "0x181BC4070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60013C2")]
	[Address(RVA = "0x1BC3E80", Offset = "0x1BC2480", VA = "0x181BC3E80")]
	public Timer(TimerCallback callback, object state, int dueTime, int period)
	{
	}

	[Token(Token = "0x60013C3")]
	[Address(RVA = "0x1BC3F40", Offset = "0x1BC2540", VA = "0x181BC3F40")]
	public Timer(TimerCallback callback, object state, TimeSpan dueTime, TimeSpan period)
	{
	}

	[Token(Token = "0x60013C4")]
	[Address(RVA = "0x1BC3DC0", Offset = "0x1BC23C0", VA = "0x181BC3DC0")]
	private void Init(TimerCallback callback, object state, long dueTime, long period)
	{
	}

	[Token(Token = "0x60013C5")]
	[Address(RVA = "0x1BC3CC0", Offset = "0x1BC22C0", VA = "0x181BC3CC0")]
	public bool Change(int dueTime, int period)
	{
		return default(bool);
	}

	[Token(Token = "0x60013C6")]
	[Address(RVA = "0x1BC3CE0", Offset = "0x1BC22E0", VA = "0x181BC3CE0")]
	public bool Change(TimeSpan dueTime, TimeSpan period)
	{
		return default(bool);
	}

	[Token(Token = "0x60013C7")]
	[Address(RVA = "0x1BC3D70", Offset = "0x1BC2370", VA = "0x181BC3D70", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60013C8")]
	[Address(RVA = "0x1BC3A50", Offset = "0x1BC2050", VA = "0x181BC3A50")]
	private bool Change(long dueTime, long period, bool first)
	{
		return default(bool);
	}

	[Token(Token = "0x60013C9")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal void KeepRootedWhileScheduled()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60013CA")]
	[Address(RVA = "0x1BC3DB0", Offset = "0x1BC23B0", VA = "0x181BC3DB0")]
	private static extern long GetTimeMonotonic();
}
