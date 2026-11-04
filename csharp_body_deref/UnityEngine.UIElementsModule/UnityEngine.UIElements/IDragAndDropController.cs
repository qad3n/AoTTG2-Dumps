// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IDragAndDropController
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000193")]
internal interface IDragAndDropController<in TArgs>
{
	[Token(Token = "0x6000B4F")]
	bool CanStartDrag(IEnumerable<int> itemIds);

	[Token(Token = "0x6000B50")]
	StartDragArgs SetupDragAndDrop(IEnumerable<int> itemIds, bool skipText = false);

	[Token(Token = "0x6000B51")]
	DragVisualMode HandleDragAndDrop(TArgs args);

	[Token(Token = "0x6000B52")]
	void OnDrop(TArgs args);

	[Token(Token = "0x6000B53")]
	void DragCleanup()
	{
	}

	[Token(Token = "0x6000B54")]
	void HandleAutoExpand(ReusableCollectionItem item, Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x6000B55")]
	IEnumerable<int> GetSortedSelectedIds()
	{
		return null;
	}
}
