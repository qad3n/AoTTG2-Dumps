using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000159")]
internal class ListViewReorderableDragAndDropController : BaseReorderableDragAndDropController
{
	[Token(Token = "0x40005FA")]
	[FieldOffset(Offset = "0x28")]
	protected readonly BaseListView m_ListView;

	[Token(Token = "0x6000996")]
	[Address(RVA = "0x4CFDD40", Offset = "0x4CFDD40", VA = "0x4CFDD40")]
	public ListViewReorderableDragAndDropController(BaseListView view)
	{
	}

	[Token(Token = "0x6000997")]
	[Address(RVA = "0x4CFDD70", Offset = "0x4CFDD70", VA = "0x4CFDD70", Slot = "18")]
	public override DragVisualMode HandleDragAndDrop(IListDragAndDropArgs args)
	{
		return default(DragVisualMode);
	}

	[Token(Token = "0x6000998")]
	[Address(RVA = "0x4CFDED0", Offset = "0x4CFDED0", VA = "0x4CFDED0", Slot = "19")]
	public override void OnDrop(IListDragAndDropArgs args)
	{
	}
}
