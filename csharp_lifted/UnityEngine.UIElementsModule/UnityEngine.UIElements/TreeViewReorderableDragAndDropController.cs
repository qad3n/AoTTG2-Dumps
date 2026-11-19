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

[Token(Token = "0x200019F")]
internal class TreeViewReorderableDragAndDropController : BaseReorderableDragAndDropController
{
	[Token(Token = "0x20001A0")]
	protected class DropData
	{
		[Token(Token = "0x400072F")]
		[FieldOffset(Offset = "0x10")]
		public int[] expandedIdsBeforeDrag;

		[Token(Token = "0x4000730")]
		[FieldOffset(Offset = "0x18")]
		public int[] draggedIds;

		[Token(Token = "0x4000731")]
		[FieldOffset(Offset = "0x20")]
		public int lastItemId;

		[Token(Token = "0x4000732")]
		[FieldOffset(Offset = "0x24")]
		public float expandItemBeginTimerMs;

		[Token(Token = "0x4000733")]
		[FieldOffset(Offset = "0x28")]
		public Vector2 expandItemBeginPosition;

		[Token(Token = "0x6000BA0")]
		[Address(RVA = "0x6C5A2E0", Offset = "0x6C592E0", VA = "0x6C5A2E0")]
		public DropData()
		{
		}
	}

	[Token(Token = "0x400072B")]
	[FieldOffset(Offset = "0x28")]
	protected DropData m_DropData;

	[Token(Token = "0x400072C")]
	[FieldOffset(Offset = "0x30")]
	protected readonly BaseTreeView m_TreeView;

	[Token(Token = "0x400072D")]
	[FieldOffset(Offset = "0x38")]
	private IVisualElementScheduledItem m_ExpandDropItemScheduledItem;

	[Token(Token = "0x400072E")]
	[FieldOffset(Offset = "0x40")]
	private Action m_ExpandDropItemCallback;

	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x6C5A210", Offset = "0x6C59210", VA = "0x6C5A210")]
	public TreeViewReorderableDragAndDropController(BaseTreeView view)
	{
	}

	[Token(Token = "0x6000B96")]
	[Address(RVA = "0x6C5A2F0", Offset = "0x6C592F0", VA = "0x6C5A2F0", Slot = "18")]
	protected override int CompareId(int id1, int id2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B97")]
	[Address(RVA = "0x6C5A9A0", Offset = "0x6C599A0", VA = "0x6C5A9A0", Slot = "17")]
	public override StartDragArgs SetupDragAndDrop(IEnumerable<int> itemIds, bool skipText = false)
	{
		return default(StartDragArgs);
	}

	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x6C5AB50", Offset = "0x6C59B50", VA = "0x6C5AB50", Slot = "19")]
	public override DragVisualMode HandleDragAndDrop(IListDragAndDropArgs args)
	{
		return default(DragVisualMode);
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x6C5AC50", Offset = "0x6C59C50", VA = "0x6C5AC50", Slot = "16")]
	public override bool CanDrop()
	{
		return default(bool);
	}

	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x6C5AC60", Offset = "0x6C59C60", VA = "0x6C5AC60", Slot = "20")]
	public override void OnDrop(IListDragAndDropArgs args)
	{
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x6C5B500", Offset = "0x6C5A500", VA = "0x6C5B500", Slot = "21")]
	public override void DragCleanup()
	{
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x6C5B660", Offset = "0x6C5A660", VA = "0x6C5B660")]
	private void RestoreExpanded(List<int> ids)
	{
	}

	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x6C5BA30", Offset = "0x6C5AA30", VA = "0x6C5BA30", Slot = "22")]
	public override void HandleAutoExpand(ReusableCollectionItem item, Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x6C5BC30", Offset = "0x6C5AC30", VA = "0x6C5BC30")]
	private void DelayExpandDropItem()
	{
	}

	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x6C5BEA0", Offset = "0x6C5AEA0", VA = "0x6C5BEA0")]
	private void ExpandDropItem()
	{
	}
}
