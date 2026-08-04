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
	[Address(RVA = "0x50778C0", Offset = "0x50778C0", VA = "0x50778C0", Slot = "5")]
	public void Schedule(ScheduledItem item)
	{
	}

	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x5077A80", Offset = "0x5077A80", VA = "0x5077A80")]
	private bool RemovedScheduledItemAt(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC6")]
	[Address(RVA = "0x5077AF0", Offset = "0x5077AF0", VA = "0x5077AF0", Slot = "4")]
	public void Unschedule(ScheduledItem item)
	{
	}

	[Token(Token = "0x6000FC7")]
	[Address(RVA = "0x5077C90", Offset = "0x5077C90", VA = "0x5077C90")]
	private bool PrivateUnSchedule(ScheduledItem sItem)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC8")]
	[Address(RVA = "0x5077D60", Offset = "0x5077D60", VA = "0x5077D60", Slot = "6")]
	public void UpdateScheduledEvents()
	{
	}

	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x5078150", Offset = "0x5078150", VA = "0x5078150")]
	public TimerEventScheduler()
	{
	}
}
