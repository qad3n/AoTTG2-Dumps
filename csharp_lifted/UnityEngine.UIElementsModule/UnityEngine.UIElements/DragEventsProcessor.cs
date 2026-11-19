// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DragEventsProcessor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200018B")]
internal abstract class DragEventsProcessor
{
	[Token(Token = "0x200018C")]
	internal enum DragState
	{
		[Token(Token = "0x40006F2")]
		None,
		[Token(Token = "0x40006F3")]
		CanStartDrag,
		[Token(Token = "0x40006F4")]
		Dragging
	}

	[Token(Token = "0x40006EC")]
	[FieldOffset(Offset = "0x10")]
	private bool m_IsRegistered;

	[Token(Token = "0x40006ED")]
	[FieldOffset(Offset = "0x14")]
	private DragState m_DragState;

	[Token(Token = "0x40006EE")]
	[FieldOffset(Offset = "0x18")]
	private Vector3 m_Start;

	[Token(Token = "0x40006EF")]
	[FieldOffset(Offset = "0x24")]
	private bool m_PendingPerformDrag;

	[Token(Token = "0x40006F0")]
	[FieldOffset(Offset = "0x28")]
	protected readonly VisualElement m_Target;

	[Token(Token = "0x17000216")]
	protected virtual bool supportsDragEvents
	{
		[Token(Token = "0x6000B1C")]
		[Address(RVA = "0x6C4FE10", Offset = "0x6C4EE10", VA = "0x6C4FE10", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000217")]
	private bool useDragEvents
	{
		[Token(Token = "0x6000B1D")]
		[Address(RVA = "0x6C4FE20", Offset = "0x6C4EE20", VA = "0x6C4FE20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000218")]
	protected IDragAndDrop dragAndDrop
	{
		[Token(Token = "0x6000B1E")]
		[Address(RVA = "0x6C4FE60", Offset = "0x6C4EE60", VA = "0x6C4FE60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000219")]
	internal virtual bool isEditorContext
	{
		[Token(Token = "0x6000B1F")]
		[Address(RVA = "0x6C4FE80", Offset = "0x6C4EE80", VA = "0x6C4FE80", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x6C4FFB0", Offset = "0x6C4EFB0", VA = "0x6C4FFB0")]
	internal DragEventsProcessor(VisualElement target)
	{
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x6C504A0", Offset = "0x6C4F4A0", VA = "0x6C504A0")]
	private void RegisterCallbacksFromTarget(AttachToPanelEvent evt)
	{
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x6C500E0", Offset = "0x6C4F0E0", VA = "0x6C500E0")]
	private void RegisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x6C504B0", Offset = "0x6C4F4B0", VA = "0x6C504B0")]
	private void UnregisterCallbacksFromTarget(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x6C504C0", Offset = "0x6C4F4C0", VA = "0x6C504C0")]
	internal void UnregisterCallbacksFromTarget(bool unregisterPanelEvents = false)
	{
	}

	[Token(Token = "0x6000B25")]
	protected abstract bool CanStartDrag(Vector3 pointerPosition, EventModifiers modifiers);

	[Token(Token = "0x6000B26")]
	protected internal abstract StartDragArgs StartDrag(Vector3 pointerPosition, EventModifiers modifiers);

	[Token(Token = "0x6000B27")]
	protected internal abstract void UpdateDrag(Vector3 pointerPosition, EventModifiers modifiers);

	[Token(Token = "0x6000B28")]
	protected internal abstract void OnDrop(Vector3 pointerPosition, EventModifiers modifiers);

	[Token(Token = "0x6000B29")]
	protected abstract void ClearDragAndDropUI(bool dragCancelled);

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x6C50970", Offset = "0x6C4F970", VA = "0x6C50970")]
	private void OnPointerDownEvent(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x6C50A30", Offset = "0x6C4FA30", VA = "0x6C50A30")]
	private void OnPointerOutEvent(PointerOutEvent evt)
	{
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x6C50AD0", Offset = "0x6C4FAD0", VA = "0x6C50AD0")]
	internal void OnPointerUpEvent(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x6C50E90", Offset = "0x6C4FE90", VA = "0x6C50E90")]
	private void OnPointerLeaveEvent(PointerLeaveEvent evt)
	{
	}

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x6C50EB0", Offset = "0x6C4FEB0", VA = "0x6C50EB0")]
	private void OnPointerCancelEvent(PointerCancelEvent evt)
	{
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x6C51060", Offset = "0x6C50060", VA = "0x6C51060")]
	private void OnPointerCapturedOut(PointerCaptureOutEvent evt)
	{
	}

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x6C51070", Offset = "0x6C50070", VA = "0x6C51070")]
	private void OnGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x6C50F00", Offset = "0x6C4FF00", VA = "0x6C50F00")]
	private void CancelDragAndDrop(int releaseCapturePointerId = -1)
	{
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x6C51150", Offset = "0x6C50150", VA = "0x6C51150")]
	private void OnPointerMoveEvent(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x6C50CE0", Offset = "0x6C4FCE0", VA = "0x6C50CE0")]
	private DragEventsProcessor GetDropTarget(Vector2 position)
	{
		return null;
	}
}
