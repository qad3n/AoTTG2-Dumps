using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000030")]
internal class DynamicHeightVirtualizationController<T> : VerticalVirtualizationController<T> where T : ReusableCollectionItem, new()
{
	[Token(Token = "0x2000031")]
	private readonly struct ContentHeightCacheInfo
	{
		[Token(Token = "0x4000092")]
		[FieldOffset(Offset = "0x0")]
		public readonly float sum;

		[Token(Token = "0x4000093")]
		[FieldOffset(Offset = "0x0")]
		public readonly int count;

		[Token(Token = "0x600019F")]
		public ContentHeightCacheInfo(float sum, int count)
		{
		}
	}

	[Token(Token = "0x2000032")]
	private enum VirtualizationChange
	{
		[Token(Token = "0x4000095")]
		None,
		[Token(Token = "0x4000096")]
		Resize,
		[Token(Token = "0x4000097")]
		Scroll,
		[Token(Token = "0x4000098")]
		ForcedScroll
	}

	[Token(Token = "0x2000033")]
	private enum ScrollDirection
	{
		[Token(Token = "0x400009A")]
		Idle,
		[Token(Token = "0x400009B")]
		Up,
		[Token(Token = "0x400009C")]
		Down
	}

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x0")]
	private int m_HighestCachedIndex;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x0")]
	private readonly Dictionary<int, float> m_ItemHeightCache;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x0")]
	private readonly Dictionary<int, ContentHeightCacheInfo> m_ContentHeightCache;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x0")]
	private readonly HashSet<int> m_WaitingCache;

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x0")]
	private int m_ForcedFirstVisibleItem;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x0")]
	private int m_ForcedLastVisibleItem;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x0")]
	private bool m_StickToBottom;

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x0")]
	private VirtualizationChange m_LastChange;

	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x0")]
	private ScrollDirection m_ScrollDirection;

	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x0")]
	private Vector2 m_DelayedScrollOffset;

	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x0")]
	private float m_AccumulatedHeight;

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x0")]
	private float m_MinimumItemHeight;

	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x0")]
	private Action m_FillCallback;

	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0x0")]
	private Action m_ScrollCallback;

	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x0")]
	private Action m_ScrollResetCallback;

	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x0")]
	private Action<ReusableCollectionItem> m_GeometryChangedCallback;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x0")]
	private IVisualElementScheduledItem m_ScheduledItem;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x0")]
	private IVisualElementScheduledItem m_ScrollScheduledItem;

	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x0")]
	private IVisualElementScheduledItem m_ScrollResetScheduledItem;

	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0x0")]
	private Predicate<int> m_IndexOutOfBoundsPredicate;

	[Token(Token = "0x17000035")]
	private float defaultExpectedHeight
	{
		[Token(Token = "0x6000172")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000036")]
	private float contentPadding
	{
		[Token(Token = "0x6000173")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000174")]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	private float contentHeight
	{
		[Token(Token = "0x6000175")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000176")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	private int anchoredIndex
	{
		[Token(Token = "0x6000177")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000178")]
		set
		{
		}
	}

	[Token(Token = "0x17000039")]
	private float anchorOffset
	{
		[Token(Token = "0x6000179")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600017A")]
		set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	private float viewportMaxOffset
	{
		[Token(Token = "0x600017B")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700003B")]
	protected override bool alwaysRebindOnRefresh
	{
		[Token(Token = "0x600017C")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600017D")]
	public DynamicHeightVirtualizationController(BaseVerticalCollectionView collectionView)
	{
	}

	[Token(Token = "0x600017E")]
	public override void Refresh(bool rebuild)
	{
	}

	[Token(Token = "0x600017F")]
	public override void ScrollToItem(int index)
	{
	}

	[Token(Token = "0x6000180")]
	public override void Resize(Vector2 size)
	{
	}

	[Token(Token = "0x6000181")]
	public override void OnScroll(Vector2 scrollOffset)
	{
	}

	[Token(Token = "0x6000182")]
	private void OnScrollUpdate()
	{
	}

	[Token(Token = "0x6000183")]
	private void CycleItems(int firstIndex)
	{
	}

	[Token(Token = "0x6000184")]
	private bool NeedsFill()
	{
		return default(bool);
	}

	[Token(Token = "0x6000185")]
	private void Fill()
	{
	}

	[Token(Token = "0x6000186")]
	private void UpdateScrollViewContainer(float previousHeight, float newHeight)
	{
	}

	[Token(Token = "0x6000187")]
	private void ApplyScrollViewUpdate(bool dimensionsOnly = false)
	{
	}

	[Token(Token = "0x6000188")]
	private void UpdateAnchor()
	{
	}

	[Token(Token = "0x6000189")]
	private void ScheduleFill()
	{
	}

	[Token(Token = "0x600018A")]
	private void ScheduleScroll()
	{
	}

	[Token(Token = "0x600018B")]
	private void ScheduleScrollDirectionReset()
	{
	}

	[Token(Token = "0x600018C")]
	private void ResetScroll()
	{
	}

	[Token(Token = "0x600018D")]
	public override int GetIndexFromPosition(Vector2 position)
	{
		return default(int);
	}

	[Token(Token = "0x600018E")]
	public override float GetExpectedItemHeight(int index)
	{
		return default(float);
	}

	[Token(Token = "0x600018F")]
	private int GetFirstVisibleItem(float offset)
	{
		return default(int);
	}

	[Token(Token = "0x6000190")]
	public override float GetExpectedContentHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6000191")]
	private float GetContentHeightForIndex(int lastIndex)
	{
		return default(float);
	}

	[Token(Token = "0x6000192")]
	private ContentHeightCacheInfo GetCachedContentHeight(int index)
	{
		return default(ContentHeightCacheInfo);
	}

	[Token(Token = "0x6000193")]
	private void RegisterItemHeight(int index, float height)
	{
	}

	[Token(Token = "0x6000194")]
	private void UnregisterItemHeight(int index)
	{
	}

	[Token(Token = "0x6000195")]
	private void CleanItemHeightCache()
	{
	}

	[Token(Token = "0x6000196")]
	private void OnRecycledItemGeometryChanged(ReusableCollectionItem item)
	{
	}

	[Token(Token = "0x6000197")]
	private bool UpdateRegisteredHeight(ReusableCollectionItem item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000198")]
	internal override T GetOrMakeItemAtIndex(int activeItemIndex = -1, int scrollViewIndex = -1)
	{
		return null;
	}

	[Token(Token = "0x6000199")]
	internal override void ReleaseItem(int activeItemsIndex)
	{
	}

	[Token(Token = "0x600019A")]
	internal override void StartDragItem(ReusableCollectionItem item)
	{
	}

	[Token(Token = "0x600019B")]
	internal override void EndDrag(int dropIndex)
	{
	}

	[Token(Token = "0x600019C")]
	private void HideItem(int activeItemsIndex)
	{
	}

	[Token(Token = "0x600019D")]
	private void MarkWaitingForLayout(T item)
	{
	}

	[Token(Token = "0x600019E")]
	private bool IsIndexOutOfBounds(int i)
	{
		return default(bool);
	}
}
