// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TreeViewReorderableDragAndDropController
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200015A")]
internal class TreeViewReorderableDragAndDropController : BaseReorderableDragAndDropController
{
	[Token(Token = "0x200015B")]
	protected class DropData
	{
		[Token(Token = "0x40005FF")]
		[FieldOffset(Offset = "0x10")]
		public int[] expandedIdsBeforeDrag;

		[Token(Token = "0x4000600")]
		[FieldOffset(Offset = "0x18")]
		public int[] draggedIds;

		[Token(Token = "0x4000601")]
		[FieldOffset(Offset = "0x20")]
		public int lastItemId;

		[Token(Token = "0x4000602")]
		[FieldOffset(Offset = "0x24")]
		public float expandItemBeginTimerMs;

		[Token(Token = "0x4000603")]
		[FieldOffset(Offset = "0x28")]
		public Vector2 expandItemBeginPosition;

		[Token(Token = "0x60009A3")]
		[Address(RVA = "0x5025BD0", Offset = "0x5025BD0", VA = "0x5025BD0")]
		public DropData()
		{
		}
	}

	[Token(Token = "0x40005FB")]
	[FieldOffset(Offset = "0x28")]
	protected DropData m_DropData;

	[Token(Token = "0x40005FC")]
	[FieldOffset(Offset = "0x30")]
	protected readonly BaseTreeView m_TreeView;

	[Token(Token = "0x40005FD")]
	[FieldOffset(Offset = "0x38")]
	private IVisualElementScheduledItem m_ExpandDropItemScheduledItem;

	[Token(Token = "0x40005FE")]
	[FieldOffset(Offset = "0x40")]
	private Action m_ExpandDropItemCallback;

	[Token(Token = "0x6000999")]
	[Address(RVA = "0x5025B00", Offset = "0x5025B00", VA = "0x5025B00")]
	public TreeViewReorderableDragAndDropController(BaseTreeView view)
	{
	}

	[Token(Token = "0x600099A")]
	[Address(RVA = "0x5025BE0", Offset = "0x5025BE0", VA = "0x5025BE0", Slot = "17")]
	protected override int CompareId(int id1, int id2)
	{
		return default(int);
	}

	[Token(Token = "0x600099B")]
	[Address(RVA = "0x5026260", Offset = "0x5026260", VA = "0x5026260", Slot = "16")]
	public override StartDragArgs SetupDragAndDrop(IEnumerable<int> itemIds, bool skipText = false)
	{
		return default(StartDragArgs);
	}

	[Token(Token = "0x600099C")]
	[Address(RVA = "0x5026310", Offset = "0x5026310", VA = "0x5026310", Slot = "18")]
	public override DragVisualMode HandleDragAndDrop(IListDragAndDropArgs args)
	{
		return default(DragVisualMode);
	}

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x5026410", Offset = "0x5026410", VA = "0x5026410", Slot = "19")]
	public override void OnDrop(IListDragAndDropArgs args)
	{
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x5026FD0", Offset = "0x5026FD0", VA = "0x5026FD0", Slot = "20")]
	public override void DragCleanup()
	{
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x5027130", Offset = "0x5027130", VA = "0x5027130")]
	private void RestoreExpanded(List<int> ids)
	{
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x50274F0", Offset = "0x50274F0", VA = "0x50274F0", Slot = "21")]
	public override void HandleAutoExpand(ReusableCollectionItem item, Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x5027610", Offset = "0x5027610", VA = "0x5027610")]
	private void DelayExpandDropItem()
	{
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x5027880", Offset = "0x5027880", VA = "0x5027880")]
	private void ExpandDropItem()
	{
	}
}
