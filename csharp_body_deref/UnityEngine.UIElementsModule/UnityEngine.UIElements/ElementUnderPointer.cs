using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200017C")]
internal class ElementUnderPointer
{
	[Token(Token = "0x4000638")]
	[FieldOffset(Offset = "0x10")]
	private VisualElement[] m_PendingTopElementUnderPointer;

	[Token(Token = "0x4000639")]
	[FieldOffset(Offset = "0x18")]
	private VisualElement[] m_TopElementUnderPointer;

	[Token(Token = "0x400063A")]
	[FieldOffset(Offset = "0x20")]
	private IPointerEvent[] m_TriggerPointerEvent;

	[Token(Token = "0x400063B")]
	[FieldOffset(Offset = "0x28")]
	private IMouseEvent[] m_TriggerMouseEvent;

	[Token(Token = "0x400063C")]
	[FieldOffset(Offset = "0x30")]
	private Vector2[] m_PickingPointerPositions;

	[Token(Token = "0x400063D")]
	[FieldOffset(Offset = "0x38")]
	private bool[] m_IsPickingPointerTemporaries;

	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x4D02920", Offset = "0x4D02920", VA = "0x4D02920")]
	internal VisualElement GetTopElementUnderPointer(int pointerId, out Vector2 pickPosition, out bool isTemporary)
	{
		return null;
	}

	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x4D02970", Offset = "0x4D02970", VA = "0x4D02970")]
	internal VisualElement GetTopElementUnderPointer(int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x4D029A0", Offset = "0x4D029A0", VA = "0x4D029A0")]
	internal void SetElementUnderPointer(VisualElement newElementUnderPointer, int pointerId, Vector2 pointerPos)
	{
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x4D02B30", Offset = "0x4D02B30", VA = "0x4D02B30")]
	private Vector2 GetEventPointerPosition(EventBase triggerEvent)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x4D02D00", Offset = "0x4D02D00", VA = "0x4D02D00")]
	internal void SetTemporaryElementUnderPointer(VisualElement newElementUnderPointer, int pointerId, EventBase triggerEvent)
	{
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x4D02FA0", Offset = "0x4D02FA0", VA = "0x4D02FA0")]
	internal void SetElementUnderPointer(VisualElement newElementUnderPointer, int pointerId, EventBase triggerEvent)
	{
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x4D02D10", Offset = "0x4D02D10", VA = "0x4D02D10")]
	private void SetElementUnderPointer(VisualElement newElementUnderPointer, int pointerId, EventBase triggerEvent, bool temporary)
	{
	}

	[Token(Token = "0x6000A0E")]
	[Address(RVA = "0x4D02FB0", Offset = "0x4D02FB0", VA = "0x4D02FB0")]
	internal void CommitElementUnderPointers(EventDispatcher dispatcher, ContextType contextType)
	{
	}

	[Token(Token = "0x6000A0F")]
	[Address(RVA = "0x4D04A20", Offset = "0x4D04A20", VA = "0x4D04A20")]
	public ElementUnderPointer()
	{
	}
}
