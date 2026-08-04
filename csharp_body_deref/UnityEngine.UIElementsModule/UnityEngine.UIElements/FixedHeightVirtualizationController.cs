// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.FixedHeightVirtualizationController
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000034")]
internal class FixedHeightVirtualizationController<T> : VerticalVirtualizationController<T> where T : ReusableCollectionItem, new()
{
	[Token(Token = "0x1700003C")]
	private float resolvedItemHeight
	{
		[Token(Token = "0x60001A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60001A1")]
	protected override bool VisibleItemPredicate(T i)
	{
		return default(bool);
	}

	[Token(Token = "0x60001A2")]
	public FixedHeightVirtualizationController(BaseVerticalCollectionView collectionView)
	{
	}

	[Token(Token = "0x60001A3")]
	public override int GetIndexFromPosition(Vector2 position)
	{
		return default(int);
	}

	[Token(Token = "0x60001A4")]
	public override float GetExpectedItemHeight(int index)
	{
		return default(float);
	}

	[Token(Token = "0x60001A5")]
	public override float GetExpectedContentHeight()
	{
		return default(float);
	}

	[Token(Token = "0x60001A6")]
	public override void ScrollToItem(int index)
	{
	}

	[Token(Token = "0x60001A7")]
	public override void Resize(Vector2 size)
	{
	}

	[Token(Token = "0x60001A8")]
	public override void OnScroll(Vector2 scrollOffset)
	{
	}

	[Token(Token = "0x60001A9")]
	internal override T GetOrMakeItemAtIndex(int activeItemIndex = -1, int scrollViewIndex = -1)
	{
		return null;
	}

	[Token(Token = "0x60001AA")]
	internal override void EndDrag(int dropIndex)
	{
	}
}
