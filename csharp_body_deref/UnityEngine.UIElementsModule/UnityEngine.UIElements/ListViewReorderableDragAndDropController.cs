// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ListViewReorderableDragAndDropController
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200019E")]
internal class ListViewReorderableDragAndDropController : BaseReorderableDragAndDropController
{
	[Token(Token = "0x400072A")]
	[FieldOffset(Offset = "0x28")]
	protected readonly BaseListView m_ListView;

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x3248730", Offset = "0x3246D30", VA = "0x183248730")]
	public ListViewReorderableDragAndDropController(BaseListView view)
	{
	}

	[Token(Token = "0x6000B93")]
	[Address(RVA = "0x32483C0", Offset = "0x32469C0", VA = "0x1832483C0", Slot = "19")]
	public override DragVisualMode HandleDragAndDrop(IListDragAndDropArgs args)
	{
		return default(DragVisualMode);
	}

	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x3248490", Offset = "0x3246A90", VA = "0x183248490", Slot = "20")]
	public override void OnDrop(IListDragAndDropArgs args)
	{
	}
}
