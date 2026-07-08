using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000263")]
internal class TimerEventScheduler : IScheduler
{
	[Token(Token = "0x40008DA")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<ScheduledItem> m_ScheduledItems;

	[Token(Token = "0x40008DB")]
	[FieldOffset(Offset = "0x18")]
	private bool m_TransactionMode;

	[Token(Token = "0x40008DC")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<ScheduledItem> m_ScheduleTransactions;

	[Token(Token = "0x40008DD")]
	[FieldOffset(Offset = "0x28")]
	private readonly HashSet<ScheduledItem> m_UnscheduleTransactions;

	[Token(Token = "0x40008DE")]
	[FieldOffset(Offset = "0x30")]
	internal bool disableThrottling;

	[Token(Token = "0x40008DF")]
	[FieldOffset(Offset = "0x34")]
	private int m_LastUpdatedIndex;

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x4D4FF90", Offset = "0x4D4FF90", VA = "0x4D4FF90", Slot = "5")]
	public void Schedule(ScheduledItem item)
	{
	}

	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x4D50150", Offset = "0x4D50150", VA = "0x4D50150")]
	private bool RemovedScheduledItemAt(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC6")]
	[Address(RVA = "0x4D501C0", Offset = "0x4D501C0", VA = "0x4D501C0", Slot = "4")]
	public void Unschedule(ScheduledItem item)
	{
	}

	[Token(Token = "0x6000FC7")]
	[Address(RVA = "0x4D50360", Offset = "0x4D50360", VA = "0x4D50360")]
	private bool PrivateUnSchedule(ScheduledItem sItem)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC8")]
	[Address(RVA = "0x4D50430", Offset = "0x4D50430", VA = "0x4D50430", Slot = "6")]
	public void UpdateScheduledEvents()
	{
	}

	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x4D50820", Offset = "0x4D50820", VA = "0x4D50820")]
	public TimerEventScheduler()
	{
	}
}
