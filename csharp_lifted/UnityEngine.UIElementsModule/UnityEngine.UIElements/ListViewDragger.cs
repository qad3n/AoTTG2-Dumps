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

[Token(Token = "0x200019A")]
internal class ListViewDragger : DragEventsProcessor
{
	[Token(Token = "0x200019B")]
	internal struct DragPosition : IEquatable<DragPosition>
	{
		[Token(Token = "0x400071D")]
		[FieldOffset(Offset = "0x0")]
		public int insertAtIndex;

		[Token(Token = "0x400071E")]
		[FieldOffset(Offset = "0x4")]
		public int parentId;

		[Token(Token = "0x400071F")]
		[FieldOffset(Offset = "0x8")]
		public int childIndex;

		[Token(Token = "0x4000720")]
		[FieldOffset(Offset = "0x10")]
		public ReusableCollectionItem recycledItem;

		[Token(Token = "0x4000721")]
		[FieldOffset(Offset = "0x18")]
		public DragAndDropPosition dropPosition;

		[Token(Token = "0x6000B82")]
		[Address(RVA = "0x6C54C90", Offset = "0x6C53C90", VA = "0x6C54C90", Slot = "4")]
		public bool Equals(DragPosition other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000B83")]
		[Address(RVA = "0x6C57670", Offset = "0x6C56670", VA = "0x6C57670", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000B84")]
		[Address(RVA = "0x6C57700", Offset = "0x6C56700", VA = "0x6C57700", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000715")]
	[FieldOffset(Offset = "0x30")]
	private DragPosition m_LastDragPosition;

	[Token(Token = "0x4000716")]
	[FieldOffset(Offset = "0x50")]
	private VisualElement m_DragHoverBar;

	[Token(Token = "0x4000717")]
	[FieldOffset(Offset = "0x58")]
	private VisualElement m_DragHoverItemMarker;

	[Token(Token = "0x4000718")]
	[FieldOffset(Offset = "0x60")]
	private VisualElement m_DragHoverSiblingMarker;

	[Token(Token = "0x4000719")]
	[FieldOffset(Offset = "0x68")]
	private float m_LeftIndentation;

	[Token(Token = "0x400071A")]
	[FieldOffset(Offset = "0x6C")]
	private float m_SiblingBottom;

	[Token(Token = "0x400071B")]
	[FieldOffset(Offset = "0x70")]
	private bool m_Enabled;

	[Token(Token = "0x17000230")]
	protected BaseVerticalCollectionView targetView
	{
		[Token(Token = "0x6000B67")]
		[Address(RVA = "0x6C517E0", Offset = "0x6C507E0", VA = "0x6C517E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000231")]
	protected ScrollView targetScrollView
	{
		[Token(Token = "0x6000B68")]
		[Address(RVA = "0x6C51840", Offset = "0x6C50840", VA = "0x6C51840")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000232")]
	public ICollectionDragAndDropController dragAndDropController
	{
		[Token(Token = "0x6000B69")]
		[Address(RVA = "0x6C518B0", Offset = "0x6C508B0", VA = "0x6C518B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B6A")]
		[Address(RVA = "0x6C518C0", Offset = "0x6C508C0", VA = "0x6C518C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000233")]
	internal bool enabled
	{
		[Token(Token = "0x6000B6B")]
		[Address(RVA = "0x6C518D0", Offset = "0x6C508D0", VA = "0x6C518D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B6C")]
		[Address(RVA = "0x6C518E0", Offset = "0x6C508E0", VA = "0x6C518E0")]
		set
		{
		}
	}

	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x6C51D50", Offset = "0x6C50D50", VA = "0x6C51D50")]
	public ListViewDragger(BaseVerticalCollectionView listView)
	{
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x6C51D70", Offset = "0x6C50D70", VA = "0x6C51D70", Slot = "6")]
	protected override bool CanStartDrag(Vector3 pointerPosition, EventModifiers modifiers)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x6C52860", Offset = "0x6C51860", VA = "0x6C52860", Slot = "7")]
	protected internal override StartDragArgs StartDrag(Vector3 pointerPosition, EventModifiers modifiers)
	{
		return default(StartDragArgs);
	}

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x6C52F20", Offset = "0x6C51F20", VA = "0x6C52F20", Slot = "8")]
	protected internal override void UpdateDrag(Vector3 pointerPosition, EventModifiers modifiers)
	{
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x6C53110", Offset = "0x6C52110", VA = "0x6C53110")]
	private DragVisualMode GetVisualMode(Vector3 pointerPosition, EventModifiers modifiers, ref DragPosition dragPosition)
	{
		return default(DragVisualMode);
	}

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x6C54660", Offset = "0x6C53660", VA = "0x6C54660", Slot = "9")]
	protected internal override void OnDrop(Vector3 pointerPosition, EventModifiers modifiers)
	{
	}

	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x6C53330", Offset = "0x6C52330", VA = "0x6C53330")]
	internal void HandleDragAndScroll(Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x6C537E0", Offset = "0x6C527E0", VA = "0x6C537E0")]
	private void HandleAutoExpansion(Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x6C538C0", Offset = "0x6C528C0", VA = "0x6C538C0")]
	private void ApplyDragAndDropUI(DragPosition dragPosition)
	{
	}

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x6C55830", Offset = "0x6C54830", VA = "0x6C55830", Slot = "11")]
	protected virtual bool TryGetDragPosition(Vector2 pointerPosition, ref DragPosition dragPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x6C55FC0", Offset = "0x6C54FC0", VA = "0x6C55FC0")]
	private void HandleTreePosition(Vector2 pointerPosition, ref DragPosition dragPosition)
	{
	}

	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x6C560F0", Offset = "0x6C550F0", VA = "0x6C560F0")]
	private void HandleSiblingInsertionAtAvailableDepthsAndChangeTargetIfNeeded(ref DragPosition dragPosition, Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x6C56870", Offset = "0x6C55870", VA = "0x6C56870")]
	private void GetPreviousAndNextItemsIgnoringDraggedItems(int insertAtIndex, out int previousItemId, out int nextItemId)
	{
	}

	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x6C54480", Offset = "0x6C53480", VA = "0x6C54480")]
	protected DragAndDropArgs MakeDragAndDropArgs(DragPosition dragPosition, EventModifiers modifiers)
	{
		return default(DragAndDropArgs);
	}

	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x6C56C70", Offset = "0x6C55C70", VA = "0x6C56C70")]
	private float GetHoverBarTopPosition(ReusableCollectionItem item)
	{
		return default(float);
	}

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x6C55810", Offset = "0x6C54810", VA = "0x6C55810")]
	private void PlaceHoverBarAtElement(ReusableCollectionItem item)
	{
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x6C54CF0", Offset = "0x6C53CF0", VA = "0x6C54CF0")]
	private void PlaceHoverBarAt(float top, float indentationPadding = -1f, float siblingBottom = -1f)
	{
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x6C56DC0", Offset = "0x6C55DC0", VA = "0x6C56DC0", Slot = "10")]
	protected override void ClearDragAndDropUI(bool dragCancelled)
	{
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x6C52390", Offset = "0x6C51390", VA = "0x6C52390")]
	protected ReusableCollectionItem GetRecycledItem(Vector3 pointerPosition)
	{
		return null;
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x6C54B30", Offset = "0x6C53B30", VA = "0x6C54B30")]
	private bool IsDraggingDisabled()
	{
		return default(bool);
	}
}
