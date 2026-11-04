// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ScheduledItem
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60013A8")]
		[Address(RVA = "0x111C9B0", Offset = "0x111AFB0", VA = "0x18111C9B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003FF")]
	public long delayMs
	{
		[Token(Token = "0x60013A9")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60013AA")]
		[Address(RVA = "0x1112310", Offset = "0x1110910", VA = "0x181112310")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000400")]
	public long intervalMs
	{
		[Token(Token = "0x60013AB")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60013AC")]
		[Address(RVA = "0x325B9B0", Offset = "0x3259FB0", VA = "0x18325B9B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000401")]
	public long endTimeMs
	{
		[Token(Token = "0x60013AD")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x60013AE")]
	[Address(RVA = "0x32B6490", Offset = "0x32B4A90", VA = "0x1832B6490")]
	public ScheduledItem(long startMs)
	{
	}

	[Token(Token = "0x60013AF")]
	[Address(RVA = "0x111C9B0", Offset = "0x111AFB0", VA = "0x18111C9B0")]
	protected void ResetStartTime(long startMs)
	{
	}

	[Token(Token = "0x60013B0")]
	public abstract void PerformTimerUpdate(TimerState state);

	[Token(Token = "0x60013B1")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	internal virtual void OnItemUnscheduled()
	{
	}

	[Token(Token = "0x60013B2")]
	[Address(RVA = "0x32B6320", Offset = "0x32B4920", VA = "0x1832B6320", Slot = "6")]
	public virtual bool ShouldUnschedule()
	{
		return default(bool);
	}
}
