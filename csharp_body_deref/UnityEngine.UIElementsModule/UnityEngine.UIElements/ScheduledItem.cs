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
		[Address(RVA = "0x5077560", Offset = "0x5077560", VA = "0x5077560")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000FB4")]
		[Address(RVA = "0x5077570", Offset = "0x5077570", VA = "0x5077570")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000309")]
	public long delayMs
	{
		[Token(Token = "0x6000FB5")]
		[Address(RVA = "0x5077580", Offset = "0x5077580", VA = "0x5077580")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000FB6")]
		[Address(RVA = "0x5077590", Offset = "0x5077590", VA = "0x5077590")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700030A")]
	public long intervalMs
	{
		[Token(Token = "0x6000FB7")]
		[Address(RVA = "0x50775A0", Offset = "0x50775A0", VA = "0x50775A0")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000FB8")]
		[Address(RVA = "0x50775B0", Offset = "0x50775B0", VA = "0x50775B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700030B")]
	public long endTimeMs
	{
		[Token(Token = "0x6000FB9")]
		[Address(RVA = "0x50775C0", Offset = "0x50775C0", VA = "0x50775C0")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000FBA")]
	[Address(RVA = "0x50775D0", Offset = "0x50775D0", VA = "0x50775D0")]
	public ScheduledItem()
	{
	}

	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x5077680", Offset = "0x5077680", VA = "0x5077680")]
	protected void ResetStartTime()
	{
	}

	[Token(Token = "0x6000FBC")]
	public abstract void PerformTimerUpdate(TimerState state);

	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x50776D0", Offset = "0x50776D0", VA = "0x50776D0", Slot = "5")]
	internal virtual void OnItemUnscheduled()
	{
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x50776E0", Offset = "0x50776E0", VA = "0x50776E0", Slot = "6")]
	public virtual bool ShouldUnschedule()
	{
		return default(bool);
	}
}
