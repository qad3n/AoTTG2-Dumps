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
		[Address(RVA = "0x4CF4B40", Offset = "0x4CF4B40", VA = "0x4CF4B40", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019A")]
	private bool useDragEvents
	{
		[Token(Token = "0x600092D")]
		[Address(RVA = "0x4CF4B50", Offset = "0x4CF4B50", VA = "0x4CF4B50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019B")]
	protected IDragAndDrop dragAndDrop
	{
		[Token(Token = "0x600092E")]
		[Address(RVA = "0x4CF4B90", Offset = "0x4CF4B90", VA = "0x4CF4B90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019C")]
	internal virtual bool isEditorContext
	{
		[Token(Token = "0x600092F")]
		[Address(RVA = "0x4CF4BB0", Offset = "0x4CF4BB0", VA = "0x4CF4BB0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x4CF4CE0", Offset = "0x4CF4CE0", VA = "0x4CF4CE0")]
	internal DragEventsProcessor(VisualElement target)
	{
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x4CF50E0", Offset = "0x4CF50E0", VA = "0x4CF50E0")]
	private void RegisterCallbacksFromTarget(AttachToPanelEvent evt)
	{
	}

	[Token(Token = "0x6000932")]
	[Address(RVA = "0x4CF4E00", Offset = "0x4CF4E00", VA = "0x4CF4E00")]
	private void RegisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x6000933")]
	[Address(RVA = "0x4CF50F0", Offset = "0x4CF50F0", VA = "0x4CF50F0")]
	private void UnregisterCallbacksFromTarget(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x6000934")]
	[Address(RVA = "0x4CF5100", Offset = "0x4CF5100", VA = "0x4CF5100")]
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
	[Address(RVA = "0x4CF54D0", Offset = "0x4CF54D0", VA = "0x4CF54D0")]
	private void OnPointerDownEvent(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x4CF5580", Offset = "0x4CF5580", VA = "0x4CF5580")]
	internal void OnPointerUpEvent(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x4CF5970", Offset = "0x4CF5970", VA = "0x4CF5970")]
	private void OnPointerLeaveEvent(PointerLeaveEvent evt)
	{
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x4CF5990", Offset = "0x4CF5990", VA = "0x4CF5990")]
	private void OnPointerCancelEvent(PointerCancelEvent evt)
	{
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x4CF5AF0", Offset = "0x4CF5AF0", VA = "0x4CF5AF0")]
	private void OnPointerCapturedOut(PointerCaptureOutEvent evt)
	{
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x4CF5C20", Offset = "0x4CF5C20", VA = "0x4CF5C20")]
	private void OnPointerMoveEvent(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x4CF5870", Offset = "0x4CF5870", VA = "0x4CF5870")]
	private DragEventsProcessor GetDropTarget(Vector2 position)
	{
		return null;
	}
}
