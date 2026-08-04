// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ElementUnderPointer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x502A250", Offset = "0x502A250", VA = "0x502A250")]
	internal VisualElement GetTopElementUnderPointer(int pointerId, out Vector2 pickPosition, out bool isTemporary)
	{
		return null;
	}

	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x502A2A0", Offset = "0x502A2A0", VA = "0x502A2A0")]
	internal VisualElement GetTopElementUnderPointer(int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x502A2D0", Offset = "0x502A2D0", VA = "0x502A2D0")]
	internal void SetElementUnderPointer(VisualElement newElementUnderPointer, int pointerId, Vector2 pointerPos)
	{
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x502A460", Offset = "0x502A460", VA = "0x502A460")]
	private Vector2 GetEventPointerPosition(EventBase triggerEvent)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x502A630", Offset = "0x502A630", VA = "0x502A630")]
	internal void SetTemporaryElementUnderPointer(VisualElement newElementUnderPointer, int pointerId, EventBase triggerEvent)
	{
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x502A8D0", Offset = "0x502A8D0", VA = "0x502A8D0")]
	internal void SetElementUnderPointer(VisualElement newElementUnderPointer, int pointerId, EventBase triggerEvent)
	{
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x502A640", Offset = "0x502A640", VA = "0x502A640")]
	private void SetElementUnderPointer(VisualElement newElementUnderPointer, int pointerId, EventBase triggerEvent, bool temporary)
	{
	}

	[Token(Token = "0x6000A0E")]
	[Address(RVA = "0x502A8E0", Offset = "0x502A8E0", VA = "0x502A8E0")]
	internal void CommitElementUnderPointers(EventDispatcher dispatcher, ContextType contextType)
	{
	}

	[Token(Token = "0x6000A0F")]
	[Address(RVA = "0x502C350", Offset = "0x502C350", VA = "0x502C350")]
	public ElementUnderPointer()
	{
	}
}
