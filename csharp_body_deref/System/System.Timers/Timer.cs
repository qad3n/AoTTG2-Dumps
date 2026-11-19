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

[Token(Token = "0x200009A")]
[DefaultEvent("Elapsed")]
[DefaultProperty("Interval")]
public class Timer : Component, ISupportInitialize
{
	[Token(Token = "0x4000260")]
	[FieldOffset(Offset = "0x28")]
	private double interval;

	[Token(Token = "0x4000261")]
	[FieldOffset(Offset = "0x30")]
	private bool enabled;

	[Token(Token = "0x4000262")]
	[FieldOffset(Offset = "0x31")]
	private bool initializing;

	[Token(Token = "0x4000263")]
	[FieldOffset(Offset = "0x32")]
	private bool delayedEnable;

	[Token(Token = "0x4000264")]
	[FieldOffset(Offset = "0x38")]
	private ElapsedEventHandler onIntervalElapsed;

	[Token(Token = "0x4000265")]
	[FieldOffset(Offset = "0x40")]
	private bool autoReset;

	[Token(Token = "0x4000266")]
	[FieldOffset(Offset = "0x48")]
	private ISynchronizeInvoke synchronizingObject;

	[Token(Token = "0x4000267")]
	[FieldOffset(Offset = "0x50")]
	private bool disposed;

	[Token(Token = "0x4000268")]
	[FieldOffset(Offset = "0x58")]
	private System.Threading.Timer timer;

	[Token(Token = "0x4000269")]
	[FieldOffset(Offset = "0x60")]
	private TimerCallback callback;

	[Token(Token = "0x400026A")]
	[FieldOffset(Offset = "0x68")]
	private object cookie;

	[Token(Token = "0x17000088")]
	[TimersDescription("Indicates whether the timer is enabled to fire events at a defined interval.")]
	[Category("Behavior")]
	[DefaultValue(false)]
	public bool Enabled
	{
		[Token(Token = "0x60002A3")]
		[Address(RVA = "0x61DD2E0", Offset = "0x61DC2E0", VA = "0x61DD2E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000089")]
	public override ISite Site
	{
		[Token(Token = "0x60002A9")]
		[Address(RVA = "0x61DD670", Offset = "0x61DC670", VA = "0x61DD670", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002A8")]
		[Address(RVA = "0x61DD640", Offset = "0x61DC640", VA = "0x61DD640", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x1700008A")]
	[Browsable(false)]
	[TimersDescription("The object used to marshal the event handler calls issued when an interval has elapsed.")]
	[DefaultValue(null)]
	public ISynchronizeInvoke SynchronizingObject
	{
		[Token(Token = "0x60002AA")]
		[Address(RVA = "0x61DD680", Offset = "0x61DC680", VA = "0x61DD680")]
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
		[Token(Token = "0x60002A6")]
		[Address(RVA = "0x61DD540", Offset = "0x61DC540", VA = "0x61DD540")]
		add
		{
		}
		[Token(Token = "0x60002A7")]
		[Address(RVA = "0x61DD5C0", Offset = "0x61DC5C0", VA = "0x61DD5C0")]
		remove
		{
		}
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x61DCEC0", Offset = "0x61DBEC0", VA = "0x61DCEC0")]
	public Timer()
	{
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x61DCF80", Offset = "0x61DBF80", VA = "0x61DCF80")]
	public Timer(double interval)
	{
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x61DD0C0", Offset = "0x61DC0C0", VA = "0x61DD0C0")]
	private static int CalculateRoundedInterval(double interval, bool argumentCheck = false)
	{
		return default(int);
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x61DD500", Offset = "0x61DC500", VA = "0x61DD500")]
	private void UpdateTimer()
	{
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x61DD840", Offset = "0x61DC840", VA = "0x61DD840", Slot = "16")]
	public void BeginInit()
	{
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x61DD890", Offset = "0x61DC890", VA = "0x61DD890")]
	public void Close()
	{
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x61DD8D0", Offset = "0x61DC8D0", VA = "0x61DD8D0", Slot = "14")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x61DD920", Offset = "0x61DC920", VA = "0x61DD920", Slot = "17")]
	public void EndInit()
	{
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x61DD930", Offset = "0x61DC930", VA = "0x61DD930")]
	private void MyTimerCallback(object state)
	{
	}
}
