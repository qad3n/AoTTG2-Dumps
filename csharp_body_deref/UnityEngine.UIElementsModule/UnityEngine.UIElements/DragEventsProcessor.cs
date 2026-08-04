// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DragEventsProcessor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000146")]
internal abstract class DragEventsProcessor
{
	[Token(Token = "0x2000147")]
	internal enum DragState
	{
		[Token(Token = "0x40005C8")]
		None,
		[Token(Token = "0x40005C9")]
		CanStartDrag,
		[Token(Token = "0x40005CA")]
		Dragging
	}

	[Token(Token = "0x40005C3")]
	[FieldOffset(Offset = "0x10")]
	private bool m_IsRegistered;

	[Token(Token = "0x40005C4")]
	[FieldOffset(Offset = "0x14")]
	private DragState m_DragState;

	[Token(Token = "0x40005C5")]
	[FieldOffset(Offset = "0x18")]
	private Vector3 m_Start;

	[Token(Token = "0x40005C6")]
	[FieldOffset(Offset = "0x28")]
	protected readonly VisualElement m_Target;

	[Token(Token = "0x17000199")]
	protected virtual bool supportsDragEvents
	{
		[Token(Token = "0x600092C")]
		[Address(RVA = "0x501C470", Offset = "0x501C470", VA = "0x501C470", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019A")]
	private bool useDragEvents
	{
		[Token(Token = "0x600092D")]
		[Address(RVA = "0x501C480", Offset = "0x501C480", VA = "0x501C480")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019B")]
	protected IDragAndDrop dragAndDrop
	{
		[Token(Token = "0x600092E")]
		[Address(RVA = "0x501C4C0", Offset = "0x501C4C0", VA = "0x501C4C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019C")]
	internal virtual bool isEditorContext
	{
		[Token(Token = "0x600092F")]
		[Address(RVA = "0x501C4E0", Offset = "0x501C4E0", VA = "0x501C4E0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x501C610", Offset = "0x501C610", VA = "0x501C610")]
	internal DragEventsProcessor(VisualElement target)
	{
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x501CA10", Offset = "0x501CA10", VA = "0x501CA10")]
	private void RegisterCallbacksFromTarget(AttachToPanelEvent evt)
	{
	}

	[Token(Token = "0x6000932")]
	[Address(RVA = "0x501C730", Offset = "0x501C730", VA = "0x501C730")]
	private void RegisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x6000933")]
	[Address(RVA = "0x501CA20", Offset = "0x501CA20", VA = "0x501CA20")]
	private void UnregisterCallbacksFromTarget(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x6000934")]
	[Address(RVA = "0x501CA30", Offset = "0x501CA30", VA = "0x501CA30")]
	internal void UnregisterCallbacksFromTarget(bool unregisterPanelEvents = false)
	{
	}

	[Token(Token = "0x6000935")]
	protected abstract bool CanStartDrag(Vector3 pointerPosition);

	[Token(Token = "0x6000936")]
	protected internal abstract StartDragArgs StartDrag(Vector3 pointerPosition);

	[Token(Token = "0x6000937")]
	protected internal abstract void UpdateDrag(Vector3 pointerPosition);

	[Token(Token = "0x6000938")]
	protected internal abstract void OnDrop(Vector3 pointerPosition);

	[Token(Token = "0x6000939")]
	protected abstract void ClearDragAndDropUI(bool dragCancelled);

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x501CE00", Offset = "0x501CE00", VA = "0x501CE00")]
	private void OnPointerDownEvent(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x501CEB0", Offset = "0x501CEB0", VA = "0x501CEB0")]
	internal void OnPointerUpEvent(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x501D2A0", Offset = "0x501D2A0", VA = "0x501D2A0")]
	private void OnPointerLeaveEvent(PointerLeaveEvent evt)
	{
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x501D2C0", Offset = "0x501D2C0", VA = "0x501D2C0")]
	private void OnPointerCancelEvent(PointerCancelEvent evt)
	{
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x501D420", Offset = "0x501D420", VA = "0x501D420")]
	private void OnPointerCapturedOut(PointerCaptureOutEvent evt)
	{
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x501D550", Offset = "0x501D550", VA = "0x501D550")]
	private void OnPointerMoveEvent(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x501D1A0", Offset = "0x501D1A0", VA = "0x501D1A0")]
	private DragEventsProcessor GetDropTarget(Vector2 position)
	{
		return null;
	}
}
