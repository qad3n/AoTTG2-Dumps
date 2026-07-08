using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200014E")]
internal interface IDragAndDropController<in TArgs>
{
	[Token(Token = "0x600095A")]
	bool CanStartDrag(IEnumerable<int> itemIds);

	[Token(Token = "0x600095B")]
	StartDragArgs SetupDragAndDrop(IEnumerable<int> itemIds, bool skipText = false);

	[Token(Token = "0x600095C")]
	DragVisualMode HandleDragAndDrop(TArgs args);

	[Token(Token = "0x600095D")]
	void OnDrop(TArgs args);

	[Token(Token = "0x600095E")]
	void DragCleanup()
	{
	}

	[Token(Token = "0x600095F")]
	void HandleAutoExpand(ReusableCollectionItem item, Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x6000960")]
	IEnumerable<int> GetSortedSelectedIds()
	{
		return null;
	}
}
