// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DragEventsProcessor
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000217")]
	private bool useDragEvents
	{
		[Token(Token = "0x6000B1D")]
		[Address(RVA = "0x32413D0", Offset = "0x323F9D0", VA = "0x1832413D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000218")]
	protected IDragAndDrop dragAndDrop
	{
		[Token(Token = "0x6000B1E")]
		[Address(RVA = "0x32412D0", Offset = "0x323F8D0", VA = "0x1832412D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000219")]
	internal virtual bool isEditorContext
	{
		[Token(Token = "0x6000B1F")]
		[Address(RVA = "0x3241300", Offset = "0x323F900", VA = "0x183241300", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x32411A0", Offset = "0x323F7A0", VA = "0x1832411A0")]
	internal DragEventsProcessor(VisualElement target)
	{
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x3240D20", Offset = "0x323F320", VA = "0x183240D20")]
	private void RegisterCallbacksFromTarget(AttachToPanelEvent evt)
	{
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x3240980", Offset = "0x323EF80", VA = "0x183240980")]
	private void RegisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x3241190", Offset = "0x323F790", VA = "0x183241190")]
	private void UnregisterCallbacksFromTarget(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x3240D30", Offset = "0x323F330", VA = "0x183240D30")]
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
	[Address(RVA = "0x32402C0", Offset = "0x323E8C0", VA = "0x1832402C0")]
	private void OnPointerDownEvent(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x32406F0", Offset = "0x323ECF0", VA = "0x1832406F0")]
	private void OnPointerOutEvent(PointerOutEvent evt)
	{
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x3240790", Offset = "0x323ED90", VA = "0x183240790")]
	internal void OnPointerUpEvent(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x3240390", Offset = "0x323E990", VA = "0x183240390")]
	private void OnPointerLeaveEvent(PointerLeaveEvent evt)
	{
	}

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x3240250", Offset = "0x323E850", VA = "0x183240250")]
	private void OnPointerCancelEvent(PointerCancelEvent evt)
	{
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x32402B0", Offset = "0x323E8B0", VA = "0x1832402B0")]
	private void OnPointerCapturedOut(PointerCaptureOutEvent evt)
	{
	}

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x32401D0", Offset = "0x323E7D0", VA = "0x1832401D0")]
	private void OnGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x323FF10", Offset = "0x323E510", VA = "0x18323FF10")]
	private void CancelDragAndDrop(int releaseCapturePointerId = -1)
	{
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x32403B0", Offset = "0x323E9B0", VA = "0x1832403B0")]
	private void OnPointerMoveEvent(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x3240010", Offset = "0x323E610", VA = "0x183240010")]
	private DragEventsProcessor GetDropTarget(Vector2 position)
	{
		return null;
	}
}
