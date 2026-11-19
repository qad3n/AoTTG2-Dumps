// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Timer
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000225")]
[ComVisible(true)]
public sealed class Timer : MarshalByRefObject, IDisposable
{
	[Token(Token = "0x2000226")]
	private struct TimerComparer : IComparer, IComparer<Timer>
	{
		[Token(Token = "0x60013A2")]
		[Address(RVA = "0x553FCB0", Offset = "0x553ECB0", VA = "0x553FCB0", Slot = "4")]
		private int System_002ECollections_002EIComparer_002ECompare(object x, object y)
		{
			return default(int);
		}

		[Token(Token = "0x60013A3")]
		[Address(RVA = "0x553FD70", Offset = "0x553ED70", VA = "0x553FD70", Slot = "5")]
		public int Compare(Timer tx, Timer ty)
		{
			return default(int);
		}
	}

	[Token(Token = "0x2000227")]
	private sealed class Scheduler
	{
		[Token(Token = "0x4000A02")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Scheduler instance;

		[Token(Token = "0x4000A03")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private bool needReSort;

		[Token(Token = "0x4000A04")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private List<Timer> list;

		[Token(Token = "0x4000A05")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private long current_next_run;

		[Token(Token = "0x4000A06")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private ManualResetEvent changed;

		[Token(Token = "0x170001D6")]
		public static Scheduler Instance
		{
			[Token(Token = "0x60013A7")]
			[Address(RVA = "0x55403E0", Offset = "0x553F3E0", VA = "0x55403E0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60013A4")]
		[Address(RVA = "0x553FDE0", Offset = "0x553EDE0", VA = "0x553FDE0")]
		private void InitScheduler()
		{
		}

		[Token(Token = "0x60013A5")]
		[Address(RVA = "0x553FED0", Offset = "0x553EED0", VA = "0x553FED0")]
		private void WakeupScheduler()
		{
		}

		[Token(Token = "0x60013A6")]
		[Address(RVA = "0x553FEF0", Offset = "0x553EEF0", VA = "0x553FEF0")]
		private void SchedulerThread()
		{
		}

		[Token(Token = "0x60013A8")]
		[Address(RVA = "0x5540450", Offset = "0x553F450", VA = "0x5540450")]
		private Scheduler()
		{
		}

		[Token(Token = "0x60013A9")]
		[Address(RVA = "0x553FA60", Offset = "0x553EA60", VA = "0x553FA60")]
		public void Remove(Timer timer)
		{
		}

		[Token(Token = "0x60013AA")]
		[Address(RVA = "0x553FB30", Offset = "0x553EB30", VA = "0x553FB30")]
		public void Change(Timer timer, long new_next_run)
		{
		}

		[Token(Token = "0x60013AB")]
		[Address(RVA = "0x5540510", Offset = "0x553F510", VA = "0x5540510")]
		private void Add(Timer timer)
		{
		}

		[Token(Token = "0x60013AC")]
		[Address(RVA = "0x55404F0", Offset = "0x553F4F0", VA = "0x55404F0")]
		private void InternalRemove(Timer timer)
		{
		}

		[Token(Token = "0x60013AD")]
		[Address(RVA = "0x55405F0", Offset = "0x553F5F0", VA = "0x55405F0")]
		private static void TimerCB(object o)
		{
		}

		[Token(Token = "0x60013AE")]
		[Address(RVA = "0x5540650", Offset = "0x553F650", VA = "0x5540650")]
		private void FireTimer(Timer timer)
		{
		}

		[Token(Token = "0x60013AF")]
		[Address(RVA = "0x5540020", Offset = "0x553F020", VA = "0x5540020")]
		private int RunSchedulerLoop()
		{
			return default(int);
		}
	}

	[Token(Token = "0x40009FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private TimerCallback callback;

	[Token(Token = "0x40009FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private object state;

	[Token(Token = "0x40009FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private long due_time_ms;

	[Token(Token = "0x40009FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private long period_ms;

	[Token(Token = "0x40009FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private long next_run;

	[Token(Token = "0x40009FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private bool disposed;

	[Token(Token = "0x4000A00")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
	private bool is_dead;

	[Token(Token = "0x4000A01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x42")]
	private bool is_added;

	[Token(Token = "0x170001D5")]
	private static Scheduler scheduler
	{
		[Token(Token = "0x6001398")]
		[Address(RVA = "0x553F420", Offset = "0x553E420", VA = "0x553F420")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001399")]
	[Address(RVA = "0x553F4D0", Offset = "0x553E4D0", VA = "0x553F4D0")]
	public Timer(TimerCallback callback, object state, int dueTime, int period)
	{
	}

	[Token(Token = "0x600139A")]
	[Address(RVA = "0x553F5C0", Offset = "0x553E5C0", VA = "0x553F5C0")]
	public Timer(TimerCallback callback, object state, TimeSpan dueTime, TimeSpan period)
	{
	}

	[Token(Token = "0x600139B")]
	[Address(RVA = "0x553F510", Offset = "0x553E510", VA = "0x553F510")]
	private void Init(TimerCallback callback, object state, long dueTime, long period)
	{
	}

	[Token(Token = "0x600139C")]
	[Address(RVA = "0x553F8D0", Offset = "0x553E8D0", VA = "0x553F8D0")]
	public bool Change(int dueTime, int period)
	{
		return default(bool);
	}

	[Token(Token = "0x600139D")]
	[Address(RVA = "0x553F8F0", Offset = "0x553E8F0", VA = "0x553F8F0")]
	public bool Change(TimeSpan dueTime, TimeSpan period)
	{
		return default(bool);
	}

	[Token(Token = "0x600139E")]
	[Address(RVA = "0x553F980", Offset = "0x553E980", VA = "0x553F980", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600139F")]
	[Address(RVA = "0x553F660", Offset = "0x553E660", VA = "0x553F660")]
	private bool Change(long dueTime, long period, bool first)
	{
		return default(bool);
	}

	[Token(Token = "0x60013A0")]
	[Address(RVA = "0x553FCA0", Offset = "0x553ECA0", VA = "0x553FCA0")]
	internal void KeepRootedWhileScheduled()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60013A1")]
	[Address(RVA = "0x553FB20", Offset = "0x553EB20", VA = "0x553FB20")]
	private static extern long GetTimeMonotonic();
}
