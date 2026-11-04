// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DynamicHeightVirtualizationController
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000062")]
internal class DynamicHeightVirtualizationController<T> : VerticalVirtualizationController<T> where T : ReusableCollectionItem, new()
{
	[Token(Token = "0x2000063")]
	private readonly struct ContentHeightCacheInfo
	{
		[Token(Token = "0x400014F")]
		[FieldOffset(Offset = "0x0")]
		public readonly float sum;

		[Token(Token = "0x4000150")]
		[FieldOffset(Offset = "0x0")]
		public readonly int count;

		[Token(Token = "0x60002EA")]
		public ContentHeightCacheInfo(float sum, int count)
		{
		}
	}

	[Token(Token = "0x2000064")]
	private enum VirtualizationChange
	{
		[Token(Token = "0x4000152")]
		None,
		[Token(Token = "0x4000153")]
		Resize,
		[Token(Token = "0x4000154")]
		Scroll,
		[Token(Token = "0x4000155")]
		ForcedScroll
	}

	[Token(Token = "0x2000065")]
	private enum ScrollDirection
	{
		[Token(Token = "0x4000157")]
		Idle,
		[Token(Token = "0x4000158")]
		Up,
		[Token(Token = "0x4000159")]
		Down
	}

	[Token(Token = "0x4000139")]
	[FieldOffset(Offset = "0x0")]
	private int m_HighestCachedIndex;

	[Token(Token = "0x400013A")]
	[FieldOffset(Offset = "0x0")]
	private readonly Dictionary<int, float> m_ItemHeightCache;

	[Token(Token = "0x400013B")]
	[FieldOffset(Offset = "0x0")]
	private readonly Dictionary<int, ContentHeightCacheInfo> m_ContentHeightCache;

	[Token(Token = "0x400013C")]
	[FieldOffset(Offset = "0x0")]
	private readonly HashSet<int> m_WaitingCache;

	[Token(Token = "0x400013D")]
	[FieldOffset(Offset = "0x0")]
	private int? m_ScrolledToItemIndex;

	[Token(Token = "0x400013E")]
	[FieldOffset(Offset = "0x0")]
	private int m_ForcedFirstVisibleItem;

	[Token(Token = "0x400013F")]
	[FieldOffset(Offset = "0x0")]
	private int m_ForcedLastVisibleItem;

	[Token(Token = "0x4000140")]
	[FieldOffset(Offset = "0x0")]
	private bool m_StickToBottom;

	[Token(Token = "0x4000141")]
	[FieldOffset(Offset = "0x0")]
	private VirtualizationChange m_LastChange;

	[Token(Token = "0x4000142")]
	[FieldOffset(Offset = "0x0")]
	private ScrollDirection m_ScrollDirection;

	[Token(Token = "0x4000143")]
	[FieldOffset(Offset = "0x0")]
	private Vector2 m_DelayedScrollOffset;

	[Token(Token = "0x4000144")]
	[FieldOffset(Offset = "0x0")]
	private float m_AccumulatedHeight;

	[Token(Token = "0x4000145")]
	[FieldOffset(Offset = "0x0")]
	private float m_MinimumItemHeight;

	[Token(Token = "0x4000146")]
	[FieldOffset(Offset = "0x0")]
	private Action m_FillCallback;

	[Token(Token = "0x4000147")]
	[FieldOffset(Offset = "0x0")]
	private Action m_ScrollResetCallback;

	[Token(Token = "0x4000148")]
	[FieldOffset(Offset = "0x0")]
	private Action<ReusableCollectionItem> m_GeometryChangedCallback;

	[Token(Token = "0x4000149")]
	[FieldOffset(Offset = "0x0")]
	private IVisualElementScheduledItem m_ScheduledItem;

	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x0")]
	private IVisualElementScheduledItem m_ScrollResetScheduledItem;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x0")]
	private IVisualElementScheduledItem m_RefreshScrollOffsetScheduledItem;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0x0")]
	private Predicate<int> m_IndexOutOfBoundsPredicate;

	[Token(Token = "0x400014D")]
	[FieldOffset(Offset = "0x0")]
	private bool m_FillExecuted;

	[Token(Token = "0x400014E")]
	[FieldOffset(Offset = "0x0")]
	private long m_TimeSinceFillScheduledMs;

	[Token(Token = "0x17000076")]
	private float defaultExpectedHeight
	{
		[Token(Token = "0x60002BA")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000077")]
	private float contentPadding
	{
		[Token(Token = "0x60002BB")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002BC")]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	private float contentHeight
	{
		[Token(Token = "0x60002BD")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002BE")]
		set
		{
		}
	}

	[Token(Token = "0x17000079")]
	private int anchoredIndex
	{
		[Token(Token = "0x60002BF")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	private float anchorOffset
	{
		[Token(Token = "0x60002C1")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002C2")]
		set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	private float viewportMaxOffset
	{
		[Token(Token = "0x60002C3")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700007C")]
	protected override bool alwaysRebindOnRefresh
	{
		[Token(Token = "0x60002C4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002C5")]
	public DynamicHeightVirtualizationController(BaseVerticalCollectionView collectionView)
	{
	}

	[Token(Token = "0x60002C6")]
	private void OnGeometryChangedEvent(GeometryChangedEvent _)
	{
	}

	[Token(Token = "0x60002C7")]
	public override void Refresh(bool rebuild)
	{
	}

	[Token(Token = "0x60002C8")]
	public override void ScrollToItem(int index)
	{
	}

	[Token(Token = "0x60002C9")]
	public override void Resize(Vector2 size)
	{
	}

	[Token(Token = "0x60002CA")]
	public override void OnScroll(Vector2 scrollOffset)
	{
	}

	[Token(Token = "0x60002CB")]
	private void OnDetachFromPanelEvent(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x60002CC")]
	protected override void OnScrollUpdate()
	{
	}

	[Token(Token = "0x60002CD")]
	private void CycleItems(int firstIndex)
	{
	}

	[Token(Token = "0x60002CE")]
	private bool NeedsFill()
	{
		return default(bool);
	}

	[Token(Token = "0x60002CF")]
	private void Fill()
	{
	}

	[Token(Token = "0x60002D0")]
	private void UpdateScrollViewContainer(float previousHeight, float newHeight)
	{
	}

	[Token(Token = "0x60002D1")]
	private void ApplyScrollViewUpdate(bool dimensionsOnly = false)
	{
	}

	[Token(Token = "0x60002D2")]
	private void UpdateAnchor()
	{
	}

	[Token(Token = "0x60002D3")]
	private void ScheduleFill()
	{
	}

	[Token(Token = "0x60002D4")]
	private void ScheduleScrollDirectionReset()
	{
	}

	[Token(Token = "0x60002D5")]
	private void ResetScroll()
	{
	}

	[Token(Token = "0x60002D6")]
	public override int GetIndexFromPosition(Vector2 position)
	{
		return default(int);
	}

	[Token(Token = "0x60002D7")]
	public override float GetExpectedItemHeight(int index)
	{
		return default(float);
	}

	[Token(Token = "0x60002D8")]
	private int GetFirstVisibleItem(float offset)
	{
		return default(int);
	}

	[Token(Token = "0x60002D9")]
	public override float GetExpectedContentHeight()
	{
		return default(float);
	}

	[Token(Token = "0x60002DA")]
	private float GetContentHeightForIndex(int lastIndex)
	{
		return default(float);
	}

	[Token(Token = "0x60002DB")]
	private ContentHeightCacheInfo GetCachedContentHeight(int index)
	{
		return default(ContentHeightCacheInfo);
	}

	[Token(Token = "0x60002DC")]
	private void RegisterItemHeight(int index, float height)
	{
	}

	[Token(Token = "0x60002DD")]
	private void UnregisterItemHeight(int index)
	{
	}

	[Token(Token = "0x60002DE")]
	private void CleanItemHeightCache()
	{
	}

	[Token(Token = "0x60002DF")]
	private void OnRecycledItemGeometryChanged(ReusableCollectionItem item)
	{
	}

	[Token(Token = "0x60002E0")]
	private bool UpdateRegisteredHeight(ReusableCollectionItem item)
	{
		return default(bool);
	}

	[Token(Token = "0x60002E1")]
	internal override T GetOrMakeItemAtIndex(int activeItemIndex = -1, int scrollViewIndex = -1)
	{
		return null;
	}

	[Token(Token = "0x60002E2")]
	internal override void ReleaseItem(int activeItemsIndex)
	{
	}

	[Token(Token = "0x60002E3")]
	internal override void StartDragItem(ReusableCollectionItem item)
	{
	}

	[Token(Token = "0x60002E4")]
	internal override void EndDrag(int dropIndex)
	{
	}

	[Token(Token = "0x60002E5")]
	private void HideItem(int activeItemsIndex)
	{
	}

	[Token(Token = "0x60002E6")]
	private void MarkWaitingForLayout(T item)
	{
	}

	[Token(Token = "0x60002E7")]
	private bool IsIndexOutOfBounds(int i)
	{
		return default(bool);
	}

	[Token(Token = "0x60002E8")]
	private void RefreshScrollOffset()
	{
	}
}
