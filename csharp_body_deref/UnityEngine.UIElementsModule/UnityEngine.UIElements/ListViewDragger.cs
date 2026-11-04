// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ListViewDragger
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x32414D0", Offset = "0x323FAD0", VA = "0x1832414D0", Slot = "4")]
		public bool Equals(DragPosition other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000B83")]
		[Address(RVA = "0x3241420", Offset = "0x323FA20", VA = "0x183241420", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000B84")]
		[Address(RVA = "0x3241530", Offset = "0x323FB30", VA = "0x183241530", Slot = "2")]
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
		[Address(RVA = "0x3248040", Offset = "0x3246640", VA = "0x183248040")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000231")]
	protected ScrollView targetScrollView
	{
		[Token(Token = "0x6000B68")]
		[Address(RVA = "0x3248010", Offset = "0x3246610", VA = "0x183248010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000232")]
	public ICollectionDragAndDropController dragAndDropController
	{
		[Token(Token = "0x6000B69")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B6A")]
		[Address(RVA = "0xCDB690", Offset = "0xCD9C90", VA = "0x180CDB690")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000233")]
	internal bool enabled
	{
		[Token(Token = "0x6000B6B")]
		[Address(RVA = "0xABD390", Offset = "0xABB990", VA = "0x180ABD390")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B6C")]
		[Address(RVA = "0x32480C0", Offset = "0x32466C0", VA = "0x1832480C0")]
		set
		{
		}
	}

	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x3243C60", Offset = "0x3242260", VA = "0x183243C60")]
	public ListViewDragger(BaseVerticalCollectionView listView)
	{
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x32448A0", Offset = "0x3242EA0", VA = "0x1832448A0", Slot = "6")]
	protected override bool CanStartDrag(Vector3 pointerPosition, EventModifiers modifiers)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x32471A0", Offset = "0x32457A0", VA = "0x1832471A0", Slot = "7")]
	protected internal override StartDragArgs StartDrag(Vector3 pointerPosition, EventModifiers modifiers)
	{
		return default(StartDragArgs);
	}

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x3247B50", Offset = "0x3246150", VA = "0x183247B50", Slot = "8")]
	protected internal override void UpdateDrag(Vector3 pointerPosition, EventModifiers modifiers)
	{
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x32455C0", Offset = "0x3243BC0", VA = "0x1832455C0")]
	private DragVisualMode GetVisualMode(Vector3 pointerPosition, EventModifiers modifiers, ref DragPosition dragPosition)
	{
		return default(DragVisualMode);
	}

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x3246680", Offset = "0x3244C80", VA = "0x183246680", Slot = "9")]
	protected internal override void OnDrop(Vector3 pointerPosition, EventModifiers modifiers)
	{
	}

	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x3245880", Offset = "0x3243E80", VA = "0x183245880")]
	internal void HandleDragAndScroll(Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x3245770", Offset = "0x3243D70", VA = "0x183245770")]
	private void HandleAutoExpansion(Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x32440E0", Offset = "0x32426E0", VA = "0x1832440E0")]
	private void ApplyDragAndDropUI(DragPosition dragPosition)
	{
	}

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x3247570", Offset = "0x3245B70", VA = "0x183247570", Slot = "11")]
	protected virtual bool TryGetDragPosition(Vector2 pointerPosition, ref DragPosition dragPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x3246360", Offset = "0x3244960", VA = "0x183246360")]
	private void HandleTreePosition(Vector2 pointerPosition, ref DragPosition dragPosition)
	{
	}

	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x3245B80", Offset = "0x3244180", VA = "0x183245B80")]
	private void HandleSiblingInsertionAtAvailableDepthsAndChangeTargetIfNeeded(ref DragPosition dragPosition, Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x3245130", Offset = "0x3243730", VA = "0x183245130")]
	private void GetPreviousAndNextItemsIgnoringDraggedItems(int insertAtIndex, out int previousItemId, out int nextItemId)
	{
	}

	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x3246530", Offset = "0x3244B30", VA = "0x183246530")]
	protected DragAndDropArgs MakeDragAndDropArgs(DragPosition dragPosition, EventModifiers modifiers)
	{
		return default(DragAndDropArgs);
	}

	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x3245010", Offset = "0x3243610", VA = "0x183245010")]
	private float GetHoverBarTopPosition(ReusableCollectionItem item)
	{
		return default(float);
	}

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x3246920", Offset = "0x3244F20", VA = "0x183246920")]
	private void PlaceHoverBarAtElement(ReusableCollectionItem item)
	{
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x3246A70", Offset = "0x3245070", VA = "0x183246A70")]
	private void PlaceHoverBarAt(float top, float indentationPadding = -1f, float siblingBottom = -1f)
	{
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x3244C40", Offset = "0x3243240", VA = "0x183244C40", Slot = "10")]
	protected override void ClearDragAndDropUI(bool dragCancelled)
	{
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x3245300", Offset = "0x3243900", VA = "0x183245300")]
	protected ReusableCollectionItem GetRecycledItem(Vector3 pointerPosition)
	{
		return null;
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x3246480", Offset = "0x3244A80", VA = "0x183246480")]
	private bool IsDraggingDisabled()
	{
		return default(bool);
	}
}
