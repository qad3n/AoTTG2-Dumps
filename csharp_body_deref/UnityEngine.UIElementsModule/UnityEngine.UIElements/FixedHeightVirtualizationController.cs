// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.FixedHeightVirtualizationController
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000067")]
internal class FixedHeightVirtualizationController<T> : VerticalVirtualizationController<T> where T : ReusableCollectionItem, new()
{
	[Token(Token = "0x400015C")]
	[FieldOffset(Offset = "0x0")]
	private int? m_ScrolledToItemIndex;

	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0x0")]
	private bool m_ForcedScroll;

	[Token(Token = "0x1700007D")]
	private float resolvedItemHeight
	{
		[Token(Token = "0x60002EB")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60002EC")]
	protected override bool VisibleItemPredicate(T i)
	{
		return default(bool);
	}

	[Token(Token = "0x60002ED")]
	public FixedHeightVirtualizationController(BaseVerticalCollectionView collectionView)
	{
	}

	[Token(Token = "0x60002EE")]
	private void OnGeometryChangedEvent(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x60002EF")]
	public override int GetIndexFromPosition(Vector2 position)
	{
		return default(int);
	}

	[Token(Token = "0x60002F0")]
	public override float GetExpectedItemHeight(int index)
	{
		return default(float);
	}

	[Token(Token = "0x60002F1")]
	public override float GetExpectedContentHeight()
	{
		return default(float);
	}

	[Token(Token = "0x60002F2")]
	public override void ScrollToItem(int index)
	{
	}

	[Token(Token = "0x60002F3")]
	public override void Resize(Vector2 size)
	{
	}

	[Token(Token = "0x60002F4")]
	public override void OnScroll(Vector2 scrollOffset)
	{
	}

	[Token(Token = "0x60002F5")]
	protected override void OnScrollUpdate()
	{
	}

	[Token(Token = "0x60002F6")]
	internal override T GetOrMakeItemAtIndex(int activeItemIndex = -1, int scrollViewIndex = -1)
	{
		return null;
	}

	[Token(Token = "0x60002F7")]
	internal override void EndDrag(int dropIndex)
	{
	}
}
