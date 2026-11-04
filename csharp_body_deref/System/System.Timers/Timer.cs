// ==================== AoTTG2 cross-reference ====================
// Type: System.Timers.Timer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Threading;
using Il2CppDummyDll;

namespace System.Timers;

[Token(Token = "0x20000D9")]
[DefaultProperty("Interval")]
[DefaultEvent("Elapsed")]
public class Timer : Component, ISupportInitialize
{
	[Token(Token = "0x400032F")]
	[FieldOffset(Offset = "0x28")]
	private double interval;

	[Token(Token = "0x4000330")]
	[FieldOffset(Offset = "0x30")]
	private bool enabled;

	[Token(Token = "0x4000331")]
	[FieldOffset(Offset = "0x31")]
	private bool initializing;

	[Token(Token = "0x4000332")]
	[FieldOffset(Offset = "0x32")]
	private bool delayedEnable;

	[Token(Token = "0x4000333")]
	[FieldOffset(Offset = "0x38")]
	private ElapsedEventHandler onIntervalElapsed;

	[Token(Token = "0x4000334")]
	[FieldOffset(Offset = "0x40")]
	private bool autoReset;

	[Token(Token = "0x4000335")]
	[FieldOffset(Offset = "0x48")]
	private ISynchronizeInvoke synchronizingObject;

	[Token(Token = "0x4000336")]
	[FieldOffset(Offset = "0x50")]
	private bool disposed;

	[Token(Token = "0x4000337")]
	[FieldOffset(Offset = "0x58")]
	private System.Threading.Timer timer;

	[Token(Token = "0x4000338")]
	[FieldOffset(Offset = "0x60")]
	private TimerCallback callback;

	[Token(Token = "0x4000339")]
	[FieldOffset(Offset = "0x68")]
	private object cookie;

	[Token(Token = "0x170000B7")]
	[DefaultValue(false)]
	[Category("Behavior")]
	[TimersDescription("Indicates whether the timer is enabled to fire events at a defined interval.")]
	public bool Enabled
	{
		[Token(Token = "0x6000457")]
		[Address(RVA = "0x2860530", Offset = "0x285EB30", VA = "0x182860530")]
		set
		{
		}
	}

	[Token(Token = "0x170000B8")]
	public override ISite Site
	{
		[Token(Token = "0x600045D")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x600045C")]
		[Address(RVA = "0x2860790", Offset = "0x285ED90", VA = "0x182860790", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x170000B9")]
	[TimersDescription("The object used to marshal the event handler calls issued when an interval has elapsed.")]
	[DefaultValue(null)]
	[Browsable(false)]
	public ISynchronizeInvoke SynchronizingObject
	{
		[Token(Token = "0x600045E")]
		[Address(RVA = "0x28602C0", Offset = "0x285E8C0", VA = "0x1828602C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000001")]
	[TimersDescription("Occurs when the Interval has elapsed.")]
	[Category("Behavior")]
	public event ElapsedEventHandler Elapsed
	{
		[Token(Token = "0x600045A")]
		[Address(RVA = "0x2860220", Offset = "0x285E820", VA = "0x182860220")]
		add
		{
		}
		[Token(Token = "0x600045B")]
		[Address(RVA = "0x2860490", Offset = "0x285EA90", VA = "0x182860490")]
		remove
		{
		}
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x2860160", Offset = "0x285E760", VA = "0x182860160")]
	public Timer()
	{
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x285FF80", Offset = "0x285E580", VA = "0x18285FF80")]
	public Timer(double interval)
	{
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x285F9A0", Offset = "0x285DFA0", VA = "0x18285F9A0")]
	private static int CalculateRoundedInterval(double interval, bool argumentCheck = false)
	{
		return default(int);
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x285FF30", Offset = "0x285E530", VA = "0x18285FF30")]
	private void UpdateTimer()
	{
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x285F950", Offset = "0x285DF50", VA = "0x18285F950", Slot = "16")]
	public void BeginInit()
	{
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x285FB80", Offset = "0x285E180", VA = "0x18285FB80")]
	public void Close()
	{
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x285FBD0", Offset = "0x285E1D0", VA = "0x18285FBD0", Slot = "14")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x285FC30", Offset = "0x285E230", VA = "0x18285FC30", Slot = "17")]
	public void EndInit()
	{
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x285FC40", Offset = "0x285E240", VA = "0x18285FC40")]
	private void MyTimerCallback(object state)
	{
	}
}
