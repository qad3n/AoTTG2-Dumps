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
	[Token(Token = "0x400025F")]
	[FieldOffset(Offset = "0x28")]
	private double interval;

	[Token(Token = "0x4000260")]
	[FieldOffset(Offset = "0x30")]
	private bool enabled;

	[Token(Token = "0x4000261")]
	[FieldOffset(Offset = "0x31")]
	private bool initializing;

	[Token(Token = "0x4000262")]
	[FieldOffset(Offset = "0x32")]
	private bool delayedEnable;

	[Token(Token = "0x4000263")]
	[FieldOffset(Offset = "0x38")]
	private ElapsedEventHandler onIntervalElapsed;

	[Token(Token = "0x4000264")]
	[FieldOffset(Offset = "0x40")]
	private bool autoReset;

	[Token(Token = "0x4000265")]
	[FieldOffset(Offset = "0x48")]
	private ISynchronizeInvoke synchronizingObject;

	[Token(Token = "0x4000266")]
	[FieldOffset(Offset = "0x50")]
	private bool disposed;

	[Token(Token = "0x4000267")]
	[FieldOffset(Offset = "0x58")]
	private System.Threading.Timer timer;

	[Token(Token = "0x4000268")]
	[FieldOffset(Offset = "0x60")]
	private TimerCallback callback;

	[Token(Token = "0x4000269")]
	[FieldOffset(Offset = "0x68")]
	private object cookie;

	[Token(Token = "0x17000088")]
	[DefaultValue(false)]
	[TimersDescription("Indicates whether the timer is enabled to fire events at a defined interval.")]
	[Category("Behavior")]
	public bool Enabled
	{
		[Token(Token = "0x60002A3")]
		[Address(RVA = "0x4900B00", Offset = "0x4900B00", VA = "0x4900B00")]
		set
		{
		}
	}

	[Token(Token = "0x17000089")]
	public override ISite Site
	{
		[Token(Token = "0x60002A9")]
		[Address(RVA = "0x4900EA0", Offset = "0x4900EA0", VA = "0x4900EA0", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002A8")]
		[Address(RVA = "0x4900E70", Offset = "0x4900E70", VA = "0x4900E70", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x1700008A")]
	[DefaultValue(null)]
	[Browsable(false)]
	[TimersDescription("The object used to marshal the event handler calls issued when an interval has elapsed.")]
	public ISynchronizeInvoke SynchronizingObject
	{
		[Token(Token = "0x60002AA")]
		[Address(RVA = "0x4900EB0", Offset = "0x4900EB0", VA = "0x4900EB0")]
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
		[Address(RVA = "0x4900D70", Offset = "0x4900D70", VA = "0x4900D70")]
		add
		{
		}
		[Token(Token = "0x60002A7")]
		[Address(RVA = "0x4900DF0", Offset = "0x4900DF0", VA = "0x4900DF0")]
		remove
		{
		}
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x49006B0", Offset = "0x49006B0", VA = "0x49006B0")]
	public Timer()
	{
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x4900770", Offset = "0x4900770", VA = "0x4900770")]
	public Timer(double interval)
	{
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x49008B0", Offset = "0x49008B0", VA = "0x49008B0")]
	private static int CalculateRoundedInterval(double interval, bool argumentCheck = false)
	{
		return default(int);
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x4900D30", Offset = "0x4900D30", VA = "0x4900D30")]
	private void UpdateTimer()
	{
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x4901070", Offset = "0x4901070", VA = "0x4901070", Slot = "16")]
	public void BeginInit()
	{
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x49010C0", Offset = "0x49010C0", VA = "0x49010C0")]
	public void Close()
	{
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x4901100", Offset = "0x4901100", VA = "0x4901100", Slot = "14")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x4901150", Offset = "0x4901150", VA = "0x4901150", Slot = "17")]
	public void EndInit()
	{
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x4901160", Offset = "0x4901160", VA = "0x4901160")]
	private void MyTimerCallback(object state)
	{
	}
}
