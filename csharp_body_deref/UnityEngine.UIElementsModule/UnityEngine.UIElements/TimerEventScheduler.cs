// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TimerEventScheduler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002E6")]
internal class TimerEventScheduler
{
	[Token(Token = "0x4000B48")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<ScheduledItem> m_ScheduledItems;

	[Token(Token = "0x4000B49")]
	[FieldOffset(Offset = "0x18")]
	private bool m_TransactionMode;

	[Token(Token = "0x4000B4A")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<ScheduledItem> m_ScheduleTransactions;

	[Token(Token = "0x4000B4B")]
	[FieldOffset(Offset = "0x28")]
	private readonly HashSet<ScheduledItem> m_UnscheduleTransactions;

	[Token(Token = "0x4000B4C")]
	[FieldOffset(Offset = "0x30")]
	internal bool disableThrottling;

	[Token(Token = "0x4000B4D")]
	[FieldOffset(Offset = "0x34")]
	private int m_LastUpdatedIndex;

	[Token(Token = "0x4000B4E")]
	[FieldOffset(Offset = "0x38")]
	private BaseVisualElementPanel panel;

	[Token(Token = "0x4000B4F")]
	[FieldOffset(Offset = "0x40")]
	private long frameCount;

	[Token(Token = "0x17000402")]
	public long FrameCount
	{
		[Token(Token = "0x60013BD")]
		[Address(RVA = "0x6CC3B40", Offset = "0x6CC2B40", VA = "0x6CC3B40")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60013BE")]
		[Address(RVA = "0x6CC3B50", Offset = "0x6CC2B50", VA = "0x6CC3B50")]
		set
		{
		}
	}

	[Token(Token = "0x60013B8")]
	[Address(RVA = "0x6CB4210", Offset = "0x6CB3210", VA = "0x6CB4210")]
	public TimerEventScheduler(BaseVisualElementPanel p)
	{
	}

	[Token(Token = "0x60013B9")]
	[Address(RVA = "0x6CC36A0", Offset = "0x6CC26A0", VA = "0x6CC36A0")]
	public void Schedule(ScheduledItem item)
	{
	}

	[Token(Token = "0x60013BA")]
	[Address(RVA = "0x6CC3860", Offset = "0x6CC2860", VA = "0x6CC3860")]
	private bool RemovedScheduledItemAt(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60013BB")]
	[Address(RVA = "0x6CC38D0", Offset = "0x6CC28D0", VA = "0x6CC38D0")]
	public void Unschedule(ScheduledItem item)
	{
	}

	[Token(Token = "0x60013BC")]
	[Address(RVA = "0x6CC3A70", Offset = "0x6CC2A70", VA = "0x6CC3A70")]
	private bool PrivateUnSchedule(ScheduledItem sItem)
	{
		return default(bool);
	}

	[Token(Token = "0x60013BF")]
	[Address(RVA = "0x6CB7740", Offset = "0x6CB6740", VA = "0x6CB7740")]
	public void UpdateScheduledEvents()
	{
	}
}
