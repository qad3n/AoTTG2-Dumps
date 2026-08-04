// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ListViewDragger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000155")]
internal class ListViewDragger : DragEventsProcessor
{
	[Token(Token = "0x2000156")]
	internal struct DragPosition : IEquatable<DragPosition>
	{
		[Token(Token = "0x40005ED")]
		[FieldOffset(Offset = "0x0")]
		public int insertAtIndex;

		[Token(Token = "0x40005EE")]
		[FieldOffset(Offset = "0x4")]
		public int parentId;

		[Token(Token = "0x40005EF")]
		[FieldOffset(Offset = "0x8")]
		public int childIndex;

		[Token(Token = "0x40005F0")]
		[FieldOffset(Offset = "0x10")]
		public ReusableCollectionItem recycledItem;

		[Token(Token = "0x40005F1")]
		[FieldOffset(Offset = "0x18")]
		public DragAndDropPosition dropPosition;

		[Token(Token = "0x6000986")]
		[Address(RVA = "0x50209B0", Offset = "0x50209B0", VA = "0x50209B0", Slot = "4")]
		public bool Equals(DragPosition other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000987")]
		[Address(RVA = "0x50230E0", Offset = "0x50230E0", VA = "0x50230E0", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000988")]
		[Address(RVA = "0x5023170", Offset = "0x5023170", VA = "0x5023170", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}
	}

	[Token(Token = "0x40005E6")]
	[FieldOffset(Offset = "0x30")]
	private DragPosition m_LastDragPosition;

	[Token(Token = "0x40005E7")]
	[FieldOffset(Offset = "0x50")]
	private VisualElement m_DragHoverBar;

	[Token(Token = "0x40005E8")]
	[FieldOffset(Offset = "0x58")]
	private VisualElement m_DragHoverItemMarker;

	[Token(Token = "0x40005E9")]
	[FieldOffset(Offset = "0x60")]
	private VisualElement m_DragHoverSiblingMarker;

	[Token(Token = "0x40005EA")]
	[FieldOffset(Offset = "0x68")]
	private float m_LeftIndentation;

	[Token(Token = "0x40005EB")]
	[FieldOffset(Offset = "0x6C")]
	private float m_SiblingBottom;

	[Token(Token = "0x170001AF")]
	protected BaseVerticalCollectionView targetView
	{
		[Token(Token = "0x600096E")]
		[Address(RVA = "0x501DCE0", Offset = "0x501DCE0", VA = "0x501DCE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B0")]
	protected ScrollView targetScrollView
	{
		[Token(Token = "0x600096F")]
		[Address(RVA = "0x501DD40", Offset = "0x501DD40", VA = "0x501DD40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B1")]
	public ICollectionDragAndDropController dragAndDropController
	{
		[Token(Token = "0x6000970")]
		[Address(RVA = "0x501DDB0", Offset = "0x501DDB0", VA = "0x501DDB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000971")]
		[Address(RVA = "0x501DDC0", Offset = "0x501DDC0", VA = "0x501DDC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000972")]
	[Address(RVA = "0x501DDD0", Offset = "0x501DDD0", VA = "0x501DDD0")]
	public ListViewDragger(BaseVerticalCollectionView listView)
	{
	}

	[Token(Token = "0x6000973")]
	[Address(RVA = "0x501DDF0", Offset = "0x501DDF0", VA = "0x501DDF0", Slot = "6")]
	protected override bool CanStartDrag(Vector3 pointerPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6000974")]
	[Address(RVA = "0x501E770", Offset = "0x501E770", VA = "0x501E770", Slot = "7")]
	protected internal override StartDragArgs StartDrag(Vector3 pointerPosition)
	{
		return default(StartDragArgs);
	}

	[Token(Token = "0x6000975")]
	[Address(RVA = "0x501ED20", Offset = "0x501ED20", VA = "0x501ED20", Slot = "8")]
	protected internal override void UpdateDrag(Vector3 pointerPosition)
	{
	}

	[Token(Token = "0x6000976")]
	[Address(RVA = "0x501EF20", Offset = "0x501EF20", VA = "0x501EF20")]
	private DragVisualMode GetVisualMode(Vector3 pointerPosition, ref DragPosition dragPosition)
	{
		return default(DragVisualMode);
	}

	[Token(Token = "0x6000977")]
	[Address(RVA = "0x5020500", Offset = "0x5020500", VA = "0x5020500", Slot = "9")]
	protected internal override void OnDrop(Vector3 pointerPosition)
	{
	}

	[Token(Token = "0x6000978")]
	[Address(RVA = "0x501F130", Offset = "0x501F130", VA = "0x501F130")]
	internal void HandleDragAndScroll(Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x501F540", Offset = "0x501F540", VA = "0x501F540")]
	private void HandleAutoExpansion(Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x501F620", Offset = "0x501F620", VA = "0x501F620")]
	private void ApplyDragAndDropUI(DragPosition dragPosition)
	{
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x5021530", Offset = "0x5021530", VA = "0x5021530", Slot = "11")]
	protected virtual bool TryGetDragPosition(Vector2 pointerPosition, ref DragPosition dragPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x5021AA0", Offset = "0x5021AA0", VA = "0x5021AA0")]
	private void HandleTreePosition(Vector2 pointerPosition, ref DragPosition dragPosition)
	{
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x5021BE0", Offset = "0x5021BE0", VA = "0x5021BE0")]
	private void HandleSiblingInsertionAtAvailableDepthsAndChangeTargetIfNeeded(ref DragPosition dragPosition, Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x600097E")]
	[Address(RVA = "0x50222C0", Offset = "0x50222C0", VA = "0x50222C0")]
	private void GetPreviousAndNextItemsIgnoringDraggedItems(int insertAtIndex, out int previousItemId, out int nextItemId)
	{
	}

	[Token(Token = "0x600097F")]
	[Address(RVA = "0x5020320", Offset = "0x5020320", VA = "0x5020320")]
	protected DragAndDropArgs MakeDragAndDropArgs(DragPosition dragPosition)
	{
		return default(DragAndDropArgs);
	}

	[Token(Token = "0x6000980")]
	[Address(RVA = "0x50226C0", Offset = "0x50226C0", VA = "0x50226C0")]
	private float GetHoverBarTopPosition(ReusableCollectionItem item)
	{
		return default(float);
	}

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x5021510", Offset = "0x5021510", VA = "0x5021510")]
	private void PlaceHoverBarAtElement(ReusableCollectionItem item)
	{
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x5020A10", Offset = "0x5020A10", VA = "0x5020A10")]
	private void PlaceHoverBarAt(float top, float indentationPadding = -1f, float siblingBottom = -1f)
	{
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x50227C0", Offset = "0x50227C0", VA = "0x50227C0", Slot = "10")]
	protected override void ClearDragAndDropUI(bool dragCancelled)
	{
	}

	[Token(Token = "0x6000984")]
	[Address(RVA = "0x501E2E0", Offset = "0x501E2E0", VA = "0x501E2E0")]
	protected ReusableCollectionItem GetRecycledItem(Vector3 pointerPosition)
	{
		return null;
	}
}
