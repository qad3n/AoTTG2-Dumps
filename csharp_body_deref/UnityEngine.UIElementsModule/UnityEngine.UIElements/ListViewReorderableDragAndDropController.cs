// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ListViewReorderableDragAndDropController
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000159")]
internal class ListViewReorderableDragAndDropController : BaseReorderableDragAndDropController
{
	[Token(Token = "0x40005FA")]
	[FieldOffset(Offset = "0x28")]
	protected readonly BaseListView m_ListView;

	[Token(Token = "0x6000996")]
	[Address(RVA = "0x5025670", Offset = "0x5025670", VA = "0x5025670")]
	public ListViewReorderableDragAndDropController(BaseListView view)
	{
	}

	[Token(Token = "0x6000997")]
	[Address(RVA = "0x50256A0", Offset = "0x50256A0", VA = "0x50256A0", Slot = "18")]
	public override DragVisualMode HandleDragAndDrop(IListDragAndDropArgs args)
	{
		return default(DragVisualMode);
	}

	[Token(Token = "0x6000998")]
	[Address(RVA = "0x5025800", Offset = "0x5025800", VA = "0x5025800", Slot = "19")]
	public override void OnDrop(IListDragAndDropArgs args)
	{
	}
}
