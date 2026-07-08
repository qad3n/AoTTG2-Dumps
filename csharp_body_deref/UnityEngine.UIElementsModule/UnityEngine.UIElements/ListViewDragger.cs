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
		[Address(RVA = "0x4CF9080", Offset = "0x4CF9080", VA = "0x4CF9080", Slot = "4")]
		public bool Equals(DragPosition other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000987")]
		[Address(RVA = "0x4CFB7B0", Offset = "0x4CFB7B0", VA = "0x4CFB7B0", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000988")]
		[Address(RVA = "0x4CFB840", Offset = "0x4CFB840", VA = "0x4CFB840", Slot = "2")]
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
		[Address(RVA = "0x4CF63B0", Offset = "0x4CF63B0", VA = "0x4CF63B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B0")]
	protected ScrollView targetScrollView
	{
		[Token(Token = "0x600096F")]
		[Address(RVA = "0x4CF6410", Offset = "0x4CF6410", VA = "0x4CF6410")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B1")]
	public ICollectionDragAndDropController dragAndDropController
	{
		[Token(Token = "0x6000970")]
		[Address(RVA = "0x4CF6480", Offset = "0x4CF6480", VA = "0x4CF6480")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000971")]
		[Address(RVA = "0x4CF6490", Offset = "0x4CF6490", VA = "0x4CF6490")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000972")]
	[Address(RVA = "0x4CF64A0", Offset = "0x4CF64A0", VA = "0x4CF64A0")]
	public ListViewDragger(BaseVerticalCollectionView listView)
	{
	}

	[Token(Token = "0x6000973")]
	[Address(RVA = "0x4CF64C0", Offset = "0x4CF64C0", VA = "0x4CF64C0", Slot = "6")]
	protected override bool CanStartDrag(Vector3 pointerPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6000974")]
	[Address(RVA = "0x4CF6E40", Offset = "0x4CF6E40", VA = "0x4CF6E40", Slot = "7")]
	protected internal override StartDragArgs StartDrag(Vector3 pointerPosition)
	{
		return default(StartDragArgs);
	}

	[Token(Token = "0x6000975")]
	[Address(RVA = "0x4CF73F0", Offset = "0x4CF73F0", VA = "0x4CF73F0", Slot = "8")]
	protected internal override void UpdateDrag(Vector3 pointerPosition)
	{
	}

	[Token(Token = "0x6000976")]
	[Address(RVA = "0x4CF75F0", Offset = "0x4CF75F0", VA = "0x4CF75F0")]
	private DragVisualMode GetVisualMode(Vector3 pointerPosition, ref DragPosition dragPosition)
	{
		return default(DragVisualMode);
	}

	[Token(Token = "0x6000977")]
	[Address(RVA = "0x4CF8BD0", Offset = "0x4CF8BD0", VA = "0x4CF8BD0", Slot = "9")]
	protected internal override void OnDrop(Vector3 pointerPosition)
	{
	}

	[Token(Token = "0x6000978")]
	[Address(RVA = "0x4CF7800", Offset = "0x4CF7800", VA = "0x4CF7800")]
	internal void HandleDragAndScroll(Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x4CF7C10", Offset = "0x4CF7C10", VA = "0x4CF7C10")]
	private void HandleAutoExpansion(Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x4CF7CF0", Offset = "0x4CF7CF0", VA = "0x4CF7CF0")]
	private void ApplyDragAndDropUI(DragPosition dragPosition)
	{
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x4CF9C00", Offset = "0x4CF9C00", VA = "0x4CF9C00", Slot = "11")]
	protected virtual bool TryGetDragPosition(Vector2 pointerPosition, ref DragPosition dragPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x4CFA170", Offset = "0x4CFA170", VA = "0x4CFA170")]
	private void HandleTreePosition(Vector2 pointerPosition, ref DragPosition dragPosition)
	{
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x4CFA2B0", Offset = "0x4CFA2B0", VA = "0x4CFA2B0")]
	private void HandleSiblingInsertionAtAvailableDepthsAndChangeTargetIfNeeded(ref DragPosition dragPosition, Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x600097E")]
	[Address(RVA = "0x4CFA990", Offset = "0x4CFA990", VA = "0x4CFA990")]
	private void GetPreviousAndNextItemsIgnoringDraggedItems(int insertAtIndex, out int previousItemId, out int nextItemId)
	{
	}

	[Token(Token = "0x600097F")]
	[Address(RVA = "0x4CF89F0", Offset = "0x4CF89F0", VA = "0x4CF89F0")]
	protected DragAndDropArgs MakeDragAndDropArgs(DragPosition dragPosition)
	{
		return default(DragAndDropArgs);
	}

	[Token(Token = "0x6000980")]
	[Address(RVA = "0x4CFAD90", Offset = "0x4CFAD90", VA = "0x4CFAD90")]
	private float GetHoverBarTopPosition(ReusableCollectionItem item)
	{
		return default(float);
	}

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x4CF9BE0", Offset = "0x4CF9BE0", VA = "0x4CF9BE0")]
	private void PlaceHoverBarAtElement(ReusableCollectionItem item)
	{
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x4CF90E0", Offset = "0x4CF90E0", VA = "0x4CF90E0")]
	private void PlaceHoverBarAt(float top, float indentationPadding = -1f, float siblingBottom = -1f)
	{
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x4CFAE90", Offset = "0x4CFAE90", VA = "0x4CFAE90", Slot = "10")]
	protected override void ClearDragAndDropUI(bool dragCancelled)
	{
	}

	[Token(Token = "0x6000984")]
	[Address(RVA = "0x4CF69B0", Offset = "0x4CF69B0", VA = "0x4CF69B0")]
	protected ReusableCollectionItem GetRecycledItem(Vector3 pointerPosition)
	{
		return null;
	}
}
