using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000261")]
internal abstract class ScheduledItem
{
	[Token(Token = "0x40008D2")]
	[FieldOffset(Offset = "0x10")]
	public Func<bool> timerUpdateStopCondition;

	[Token(Token = "0x40008D3")]
	[FieldOffset(Offset = "0x0")]
	public static readonly Func<bool> OnceCondition;

	[Token(Token = "0x40008D4")]
	[FieldOffset(Offset = "0x8")]
	public static readonly Func<bool> ForeverCondition;

	[Token(Token = "0x17000308")]
	public long startMs
	{
		[Token(Token = "0x6000FB3")]
		[Address(RVA = "0x4D4FC30", Offset = "0x4D4FC30", VA = "0x4D4FC30")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000FB4")]
		[Address(RVA = "0x4D4FC40", Offset = "0x4D4FC40", VA = "0x4D4FC40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000309")]
	public long delayMs
	{
		[Token(Token = "0x6000FB5")]
		[Address(RVA = "0x4D4FC50", Offset = "0x4D4FC50", VA = "0x4D4FC50")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000FB6")]
		[Address(RVA = "0x4D4FC60", Offset = "0x4D4FC60", VA = "0x4D4FC60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700030A")]
	public long intervalMs
	{
		[Token(Token = "0x6000FB7")]
		[Address(RVA = "0x4D4FC70", Offset = "0x4D4FC70", VA = "0x4D4FC70")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000FB8")]
		[Address(RVA = "0x4D4FC80", Offset = "0x4D4FC80", VA = "0x4D4FC80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700030B")]
	public long endTimeMs
	{
		[Token(Token = "0x6000FB9")]
		[Address(RVA = "0x4D4FC90", Offset = "0x4D4FC90", VA = "0x4D4FC90")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000FBA")]
	[Address(RVA = "0x4D4FCA0", Offset = "0x4D4FCA0", VA = "0x4D4FCA0")]
	public ScheduledItem()
	{
	}

	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x4D4FD50", Offset = "0x4D4FD50", VA = "0x4D4FD50")]
	protected void ResetStartTime()
	{
	}

	[Token(Token = "0x6000FBC")]
	public abstract void PerformTimerUpdate(TimerState state);

	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x4D4FDA0", Offset = "0x4D4FDA0", VA = "0x4D4FDA0", Slot = "5")]
	internal virtual void OnItemUnscheduled()
	{
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x4D4FDB0", Offset = "0x4D4FDB0", VA = "0x4D4FDB0", Slot = "6")]
	public virtual bool ShouldUnschedule()
	{
		return default(bool);
	}
}
