// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ElementUnderPointer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001C0")]
internal class ElementUnderPointer
{
	[Token(Token = "0x400076F")]
	[FieldOffset(Offset = "0x10")]
	private VisualElement[] m_PendingTopElementUnderPointer;

	[Token(Token = "0x4000770")]
	[FieldOffset(Offset = "0x18")]
	private VisualElement[] m_TopElementUnderPointer;

	[Token(Token = "0x4000771")]
	[FieldOffset(Offset = "0x20")]
	private IPointerOrMouseEvent[] m_TriggerEvent;

	[Token(Token = "0x4000772")]
	[FieldOffset(Offset = "0x28")]
	private Vector2[] m_PickingPointerPositions;

	[Token(Token = "0x4000773")]
	[FieldOffset(Offset = "0x30")]
	private readonly bool[] m_IsPrimaryPointer;

	[Token(Token = "0x4000774")]
	[FieldOffset(Offset = "0x38")]
	private bool[] m_IsPickingPointerTemporaries;

	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x6C5F3B0", Offset = "0x6C5E3B0", VA = "0x6C5F3B0")]
	public ElementUnderPointer()
	{
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x6C5F5E0", Offset = "0x6C5E5E0", VA = "0x6C5F5E0")]
	internal VisualElement GetTopElementUnderPointer(int pointerId, out Vector2 pickPosition, out bool isTemporary)
	{
		return null;
	}

	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x6C5F640", Offset = "0x6C5E640", VA = "0x6C5F640")]
	internal VisualElement GetTopElementUnderPointer(int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x6C5F670", Offset = "0x6C5E670", VA = "0x6C5F670")]
	internal void RemoveElementUnderPointer(VisualElement elementToRemove)
	{
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x6C5F6F0", Offset = "0x6C5E6F0", VA = "0x6C5F6F0")]
	internal void SetElementUnderPointer(VisualElement newElementUnderPointer, int pointerId, Vector2 pointerPos)
	{
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x6C5F860", Offset = "0x6C5E860", VA = "0x6C5F860")]
	private Vector2 GetEventPointerPosition(EventBase triggerEvent)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x6C5FA30", Offset = "0x6C5EA30", VA = "0x6C5FA30")]
	internal void SetTemporaryElementUnderPointer(VisualElement newElementUnderPointer, int pointerId, EventBase triggerEvent)
	{
	}

	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x6C5F6E0", Offset = "0x6C5E6E0", VA = "0x6C5F6E0")]
	internal void SetElementUnderPointer(VisualElement newElementUnderPointer, int pointerId, EventBase triggerEvent)
	{
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x6C5FA40", Offset = "0x6C5EA40", VA = "0x6C5FA40")]
	private void SetElementUnderPointer(VisualElement newElementUnderPointer, int pointerId, EventBase triggerEvent, bool temporary)
	{
	}

	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x6C5FCE0", Offset = "0x6C5ECE0", VA = "0x6C5FCE0")]
	internal bool CommitElementUnderPointers(EventDispatcher dispatcher, ContextType contextType)
	{
		return default(bool);
	}
}
