// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TimerEventScheduler
// Update status: CHANGED in this game update
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
		[Address(RVA = "0xAD2BF0", Offset = "0xAD11F0", VA = "0x180AD2BF0")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60013BE")]
		[Address(RVA = "0xE8F710", Offset = "0xE8DD10", VA = "0x180E8F710")]
		set
		{
		}
	}

	[Token(Token = "0x60013B8")]
	[Address(RVA = "0x32B83D0", Offset = "0x32B69D0", VA = "0x1832B83D0")]
	public TimerEventScheduler(BaseVisualElementPanel p)
	{
	}

	[Token(Token = "0x60013B9")]
	[Address(RVA = "0x32B79A0", Offset = "0x32B5FA0", VA = "0x1832B79A0")]
	public void Schedule(ScheduledItem item)
	{
	}

	[Token(Token = "0x60013BA")]
	[Address(RVA = "0x32B7930", Offset = "0x32B5F30", VA = "0x1832B7930")]
	private bool RemovedScheduledItemAt(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60013BB")]
	[Address(RVA = "0x32B7B80", Offset = "0x32B6180", VA = "0x1832B7B80")]
	public void Unschedule(ScheduledItem item)
	{
	}

	[Token(Token = "0x60013BC")]
	[Address(RVA = "0x32B7850", Offset = "0x32B5E50", VA = "0x1832B7850")]
	private bool PrivateUnSchedule(ScheduledItem sItem)
	{
		return default(bool);
	}

	[Token(Token = "0x60013BF")]
	[Address(RVA = "0x32B7DF0", Offset = "0x32B63F0", VA = "0x1832B7DF0")]
	public void UpdateScheduledEvents()
	{
	}
}
