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

[Token(Token = "0x200021C")]
[ComVisible(true)]
public sealed class Timer : MarshalByRefObject, IDisposable
{
	[Token(Token = "0x200021D")]
	private struct TimerComparer : IComparer, IComparer<Timer>
	{
		[Token(Token = "0x600135A")]
		[Address(RVA = "0x3D3D420", Offset = "0x3D3D420", VA = "0x3D3D420", Slot = "4")]
		private int System_002ECollections_002EIComparer_002ECompare(object x, object y)
		{
			return default(int);
		}

		[Token(Token = "0x600135B")]
		[Address(RVA = "0x3D3D4F0", Offset = "0x3D3D4F0", VA = "0x3D3D4F0", Slot = "5")]
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
			[Address(RVA = "0x3D3DB10", Offset = "0x3D3DB10", VA = "0x3D3DB10")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600135C")]
		[Address(RVA = "0x3D3D560", Offset = "0x3D3D560", VA = "0x3D3D560")]
		private void InitScheduler()
		{
		}

		[Token(Token = "0x600135D")]
		[Address(RVA = "0x3D3D650", Offset = "0x3D3D650", VA = "0x3D3D650")]
		private void WakeupScheduler()
		{
		}

		[Token(Token = "0x600135E")]
		[Address(RVA = "0x3D3D670", Offset = "0x3D3D670", VA = "0x3D3D670")]
		private void SchedulerThread()
		{
		}

		[Token(Token = "0x6001360")]
		[Address(RVA = "0x3D3DB80", Offset = "0x3D3DB80", VA = "0x3D3DB80")]
		private Scheduler()
		{
		}

		[Token(Token = "0x6001361")]
		[Address(RVA = "0x3D3D190", Offset = "0x3D3D190", VA = "0x3D3D190")]
		public void Remove(Timer timer)
		{
		}

		[Token(Token = "0x6001362")]
		[Address(RVA = "0x3D3D270", Offset = "0x3D3D270", VA = "0x3D3D270")]
		public void Change(Timer timer, long new_next_run)
		{
		}

		[Token(Token = "0x6001363")]
		[Address(RVA = "0x3D3DC40", Offset = "0x3D3DC40", VA = "0x3D3DC40")]
		private void Add(Timer timer)
		{
		}

		[Token(Token = "0x6001364")]
		[Address(RVA = "0x3D3DC20", Offset = "0x3D3DC20", VA = "0x3D3DC20")]
		private void InternalRemove(Timer timer)
		{
		}

		[Token(Token = "0x6001365")]
		[Address(RVA = "0x3D3DD30", Offset = "0x3D3DD30", VA = "0x3D3DD30")]
		private static void TimerCB(object o)
		{
		}

		[Token(Token = "0x6001366")]
		[Address(RVA = "0x3D3DD90", Offset = "0x3D3DD90", VA = "0x3D3DD90")]
		private void FireTimer(Timer timer)
		{
		}

		[Token(Token = "0x6001367")]
		[Address(RVA = "0x3D3D7C0", Offset = "0x3D3D7C0", VA = "0x3D3D7C0")]
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
		[Address(RVA = "0x3D3CB50", Offset = "0x3D3CB50", VA = "0x3D3CB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001351")]
	[Address(RVA = "0x3D3CC00", Offset = "0x3D3CC00", VA = "0x3D3CC00")]
	public Timer(TimerCallback callback, object state, int dueTime, int period)
	{
	}

	[Token(Token = "0x6001352")]
	[Address(RVA = "0x3D3CCF0", Offset = "0x3D3CCF0", VA = "0x3D3CCF0")]
	public Timer(TimerCallback callback, object state, TimeSpan dueTime, TimeSpan period)
	{
	}

	[Token(Token = "0x6001353")]
	[Address(RVA = "0x3D3CC40", Offset = "0x3D3CC40", VA = "0x3D3CC40")]
	private void Init(TimerCallback callback, object state, long dueTime, long period)
	{
	}

	[Token(Token = "0x6001354")]
	[Address(RVA = "0x3D3D000", Offset = "0x3D3D000", VA = "0x3D3D000")]
	public bool Change(int dueTime, int period)
	{
		return default(bool);
	}

	[Token(Token = "0x6001355")]
	[Address(RVA = "0x3D3D020", Offset = "0x3D3D020", VA = "0x3D3D020")]
	public bool Change(TimeSpan dueTime, TimeSpan period)
	{
		return default(bool);
	}

	[Token(Token = "0x6001356")]
	[Address(RVA = "0x3D3D0B0", Offset = "0x3D3D0B0", VA = "0x3D3D0B0", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001357")]
	[Address(RVA = "0x3D3CD90", Offset = "0x3D3CD90", VA = "0x3D3CD90")]
	private bool Change(long dueTime, long period, bool first)
	{
		return default(bool);
	}

	[Token(Token = "0x6001358")]
	[Address(RVA = "0x3D3D410", Offset = "0x3D3D410", VA = "0x3D3D410")]
	internal void KeepRootedWhileScheduled()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001359")]
	[Address(RVA = "0x3D3D260", Offset = "0x3D3D260", VA = "0x3D3D260")]
	private static extern long GetTimeMonotonic();
}
