using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200002F")]
internal abstract class CollectionVirtualizationController
{
	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x10")]
	protected readonly ScrollView m_ScrollView;

	[Token(Token = "0x17000032")]
	public abstract int firstVisibleIndex
	{
		[Token(Token = "0x6000161")]
		get;
		[Token(Token = "0x6000162")]
		protected set;
	}

	[Token(Token = "0x17000033")]
	public abstract int visibleItemCount
	{
		[Token(Token = "0x6000163")]
		get;
	}

	[Token(Token = "0x17000034")]
	public abstract IEnumerable<ReusableCollectionItem> activeItems
	{
		[Token(Token = "0x600016F")]
		get;
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x4BF5E00", Offset = "0x4BF5E00", VA = "0x4BF5E00")]
	protected CollectionVirtualizationController(ScrollView scrollView)
	{
	}

	[Token(Token = "0x6000165")]
	public abstract void Refresh(bool rebuild);

	[Token(Token = "0x6000166")]
	public abstract void ScrollToItem(int id);

	[Token(Token = "0x6000167")]
	public abstract void Resize(Vector2 size);

	[Token(Token = "0x6000168")]
	public abstract void OnScroll(Vector2 offset);

	[Token(Token = "0x6000169")]
	public abstract int GetIndexFromPosition(Vector2 position);

	[Token(Token = "0x600016A")]
	public abstract float GetExpectedItemHeight(int index);

	[Token(Token = "0x600016B")]
	public abstract float GetExpectedContentHeight();

	[Token(Token = "0x600016C")]
	public abstract void OnFocus(VisualElement leafTarget);

	[Token(Token = "0x600016D")]
	public abstract void OnBlur(VisualElement willFocus);

	[Token(Token = "0x600016E")]
	public abstract void UpdateBackground();

	[Token(Token = "0x6000170")]
	internal abstract void StartDragItem(ReusableCollectionItem item);

	[Token(Token = "0x6000171")]
	internal abstract void EndDrag(int dropIndex);
}
