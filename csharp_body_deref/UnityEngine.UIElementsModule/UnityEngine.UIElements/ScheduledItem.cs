// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ScheduledItem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002E4")]
internal abstract class ScheduledItem
{
	[Token(Token = "0x4000B40")]
	[FieldOffset(Offset = "0x10")]
	public Func<bool> timerUpdateStopCondition;

	[Token(Token = "0x4000B41")]
	[FieldOffset(Offset = "0x0")]
	public static readonly Func<bool> OnceCondition;

	[Token(Token = "0x4000B42")]
	[FieldOffset(Offset = "0x8")]
	public static readonly Func<bool> ForeverCondition;

	[Token(Token = "0x170003FE")]
	public long startMs
	{
		[Token(Token = "0x60013A7")]
		[Address(RVA = "0x6CC33C0", Offset = "0x6CC23C0", VA = "0x6CC33C0")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60013A8")]
		[Address(RVA = "0x6CC33D0", Offset = "0x6CC23D0", VA = "0x6CC33D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003FF")]
	public long delayMs
	{
		[Token(Token = "0x60013A9")]
		[Address(RVA = "0x6CC33E0", Offset = "0x6CC23E0", VA = "0x6CC33E0")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60013AA")]
		[Address(RVA = "0x6CC33F0", Offset = "0x6CC23F0", VA = "0x6CC33F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000400")]
	public long intervalMs
	{
		[Token(Token = "0x60013AB")]
		[Address(RVA = "0x6CC3400", Offset = "0x6CC2400", VA = "0x6CC3400")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60013AC")]
		[Address(RVA = "0x6CC3410", Offset = "0x6CC2410", VA = "0x6CC3410")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000401")]
	public long endTimeMs
	{
		[Token(Token = "0x60013AD")]
		[Address(RVA = "0x6CC3420", Offset = "0x6CC2420", VA = "0x6CC3420")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x60013AE")]
	[Address(RVA = "0x6CC3430", Offset = "0x6CC2430", VA = "0x6CC3430")]
	public ScheduledItem(long startMs)
	{
	}

	[Token(Token = "0x60013AF")]
	[Address(RVA = "0x6CC34A0", Offset = "0x6CC24A0", VA = "0x6CC34A0")]
	protected void ResetStartTime(long startMs)
	{
	}

	[Token(Token = "0x60013B0")]
	public abstract void PerformTimerUpdate(TimerState state);

	[Token(Token = "0x60013B1")]
	[Address(RVA = "0x6CC34B0", Offset = "0x6CC24B0", VA = "0x6CC34B0", Slot = "5")]
	internal virtual void OnItemUnscheduled()
	{
	}

	[Token(Token = "0x60013B2")]
	[Address(RVA = "0x6CC34C0", Offset = "0x6CC24C0", VA = "0x6CC34C0", Slot = "6")]
	public virtual bool ShouldUnschedule()
	{
		return default(bool);
	}
}
