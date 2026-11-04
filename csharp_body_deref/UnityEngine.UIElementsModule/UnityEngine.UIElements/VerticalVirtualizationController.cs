// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VerticalVirtualizationController
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Pool;

namespace UnityEngine.UIElements;

[Token(Token = "0x200006D")]
internal abstract class VerticalVirtualizationController<T> : CollectionVirtualizationController where T : ReusableCollectionItem, new()
{
	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0x0")]
	private readonly UnityEngine.Pool.ObjectPool<T> m_Pool;

	[Token(Token = "0x4000178")]
	[FieldOffset(Offset = "0x0")]
	protected BaseVerticalCollectionView m_CollectionView;

	[Token(Token = "0x4000179")]
	[FieldOffset(Offset = "0x0")]
	protected List<T> m_ActiveItems;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x0")]
	protected T m_DraggedItem;

	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x0")]
	private int? m_DeferredScrollToItemIndex;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x0")]
	private readonly Action m_PerformDeferredScrollToItem;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x0")]
	private IVisualElementScheduledItem m_ScheduleDeferredScrollToItem;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x0")]
	private IVisualElementScheduledItem m_ScrollScheduledItem;

	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0x0")]
	private Action m_ScrollCallback;

	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0x0")]
	private int m_LastFocusedElementIndex;

	[Token(Token = "0x4000181")]
	[FieldOffset(Offset = "0x0")]
	private List<int> m_LastFocusedElementTreeChildIndexes;

	[Token(Token = "0x4000182")]
	[FieldOffset(Offset = "0x0")]
	protected readonly Func<T, bool> m_VisibleItemPredicateDelegate;

	[Token(Token = "0x4000183")]
	[FieldOffset(Offset = "0x0")]
	protected List<T> m_ScrollInsertionList;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0x0")]
	private VisualElement m_EmptyRows;

	[Token(Token = "0x17000089")]
	public override IEnumerable<ReusableCollectionItem> activeItems
	{
		[Token(Token = "0x6000334")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008A")]
	internal int itemsCount
	{
		[Token(Token = "0x6000335")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008B")]
	internal T firstVisibleItem
	{
		[Token(Token = "0x6000337")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008C")]
	internal T lastVisibleItem
	{
		[Token(Token = "0x6000338")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008D")]
	public override int visibleItemCount
	{
		[Token(Token = "0x6000339")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008E")]
	protected SerializedVirtualizationData serializedData
	{
		[Token(Token = "0x600033A")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008F")]
	public override int firstVisibleIndex
	{
		[Token(Token = "0x600033B")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600033C")]
		protected set
		{
		}
	}

	[Token(Token = "0x17000090")]
	protected virtual bool alwaysRebindOnRefresh
	{
		[Token(Token = "0x600033D")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000336")]
	protected virtual bool VisibleItemPredicate(T i)
	{
		return default(bool);
	}

	[Token(Token = "0x600033E")]
	protected VerticalVirtualizationController(BaseVerticalCollectionView collectionView)
	{
	}

	[Token(Token = "0x600033F")]
	public override void Refresh(bool rebuild)
	{
	}

	[Token(Token = "0x6000340")]
	public override void UnbindAll()
	{
	}

	[Token(Token = "0x6000341")]
	protected void Setup(T recycledItem, int newIndex)
	{
	}

	[Token(Token = "0x6000342")]
	private bool IsContentContainerPanelDirtied()
	{
		return default(bool);
	}

	[Token(Token = "0x6000343")]
	private bool ShouldStopDeferredScrollTo()
	{
		return default(bool);
	}

	[Token(Token = "0x6000344")]
	protected bool ShouldDeferScrollToItem(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000345")]
	protected void ScheduleDeferredScrollToItem()
	{
	}

	[Token(Token = "0x6000346")]
	private void PerformDeferredScrollToItem()
	{
	}

	[Token(Token = "0x6000347")]
	protected void StopDeferredScrollToItem()
	{
	}

	[Token(Token = "0x6000348")]
	private void OnDetachFromPanelEvent(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x6000349")]
	public override void OnFocusIn(VisualElement leafTarget)
	{
	}

	[Token(Token = "0x600034A")]
	public override void OnFocusOut(VisualElement willFocus)
	{
	}

	[Token(Token = "0x600034B")]
	private void HandleFocus(ReusableCollectionItem recycledItem, int previousIndex)
	{
	}

	[Token(Token = "0x600034C")]
	public override void UpdateBackground()
	{
	}

	[Token(Token = "0x600034D")]
	internal override void StartDragItem(ReusableCollectionItem item)
	{
	}

	[Token(Token = "0x600034E")]
	internal override void EndDrag(int dropIndex)
	{
	}

	[Token(Token = "0x600034F")]
	internal virtual T GetOrMakeItemAtIndex(int activeItemIndex = -1, int scrollViewIndex = -1)
	{
		return null;
	}

	[Token(Token = "0x6000350")]
	internal virtual void ReleaseItem(int activeItemsIndex)
	{
	}

	[Token(Token = "0x6000351")]
	private void OnDestroyItem(ReusableCollectionItem item)
	{
	}

	[Token(Token = "0x6000352")]
	protected virtual void OnScrollUpdate()
	{
	}

	[Token(Token = "0x6000353")]
	protected int GetDraggedIndex()
	{
		return default(int);
	}

	[Token(Token = "0x6000354")]
	protected void ScheduleScroll()
	{
	}
}
