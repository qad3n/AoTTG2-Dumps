// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VerticalVirtualizationController
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Pool;

namespace UnityEngine.UIElements;

[Token(Token = "0x200003A")]
internal abstract class VerticalVirtualizationController<T> : CollectionVirtualizationController where T : ReusableCollectionItem, new()
{
	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x0")]
	private readonly UnityEngine.Pool.ObjectPool<T> m_Pool;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x0")]
	protected BaseVerticalCollectionView m_CollectionView;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x0")]
	protected List<T> m_ActiveItems;

	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0x0")]
	protected T m_DraggedItem;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x0")]
	private int m_LastFocusedElementIndex;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x0")]
	private List<int> m_LastFocusedElementTreeChildIndexes;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x0")]
	protected readonly Func<T, bool> m_VisibleItemPredicateDelegate;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x0")]
	protected List<T> m_ScrollInsertionList;

	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x0")]
	private VisualElement m_EmptyRows;

	[Token(Token = "0x17000047")]
	public override IEnumerable<ReusableCollectionItem> activeItems
	{
		[Token(Token = "0x60001E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000048")]
	internal int itemsCount
	{
		[Token(Token = "0x60001E1")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000049")]
	internal T firstVisibleItem
	{
		[Token(Token = "0x60001E3")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004A")]
	internal T lastVisibleItem
	{
		[Token(Token = "0x60001E4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004B")]
	public override int visibleItemCount
	{
		[Token(Token = "0x60001E5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700004C")]
	protected SerializedVirtualizationData serializedData
	{
		[Token(Token = "0x60001E6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004D")]
	public override int firstVisibleIndex
	{
		[Token(Token = "0x60001E7")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001E8")]
		protected set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	protected float lastHeight
	{
		[Token(Token = "0x60001E9")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700004F")]
	protected virtual bool alwaysRebindOnRefresh
	{
		[Token(Token = "0x60001EA")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001E2")]
	protected virtual bool VisibleItemPredicate(T i)
	{
		return default(bool);
	}

	[Token(Token = "0x60001EB")]
	protected VerticalVirtualizationController(BaseVerticalCollectionView collectionView)
	{
	}

	[Token(Token = "0x60001EC")]
	public override void Refresh(bool rebuild)
	{
	}

	[Token(Token = "0x60001ED")]
	protected void Setup(T recycledItem, int newIndex)
	{
	}

	[Token(Token = "0x60001EE")]
	public override void OnFocus(VisualElement leafTarget)
	{
	}

	[Token(Token = "0x60001EF")]
	public override void OnBlur(VisualElement willFocus)
	{
	}

	[Token(Token = "0x60001F0")]
	private void HandleFocus(ReusableCollectionItem recycledItem, int previousIndex)
	{
	}

	[Token(Token = "0x60001F1")]
	public override void UpdateBackground()
	{
	}

	[Token(Token = "0x60001F2")]
	internal override void StartDragItem(ReusableCollectionItem item)
	{
	}

	[Token(Token = "0x60001F3")]
	internal override void EndDrag(int dropIndex)
	{
	}

	[Token(Token = "0x60001F4")]
	internal virtual T GetOrMakeItemAtIndex(int activeItemIndex = -1, int scrollViewIndex = -1)
	{
		return null;
	}

	[Token(Token = "0x60001F5")]
	internal virtual void ReleaseItem(int activeItemsIndex)
	{
	}

	[Token(Token = "0x60001F6")]
	protected int GetDraggedIndex()
	{
		return default(int);
	}
}
