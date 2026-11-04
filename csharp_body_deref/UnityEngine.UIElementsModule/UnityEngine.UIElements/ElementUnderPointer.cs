// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ElementUnderPointer
// Update status: CHANGED in this game update
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
	[Address(RVA = "0x325B3B0", Offset = "0x32599B0", VA = "0x18325B3B0")]
	public ElementUnderPointer()
	{
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x325AE90", Offset = "0x3259490", VA = "0x18325AE90")]
	internal VisualElement GetTopElementUnderPointer(int pointerId, out Vector2 pickPosition, out bool isTemporary)
	{
		return null;
	}

	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x277EF80", Offset = "0x277D580", VA = "0x18277EF80")]
	internal VisualElement GetTopElementUnderPointer(int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x325AF10", Offset = "0x3259510", VA = "0x18325AF10")]
	internal void RemoveElementUnderPointer(VisualElement elementToRemove)
	{
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x325B210", Offset = "0x3259810", VA = "0x18325B210")]
	internal void SetElementUnderPointer(VisualElement newElementUnderPointer, int pointerId, Vector2 pointerPos)
	{
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x325ACD0", Offset = "0x32592D0", VA = "0x18325ACD0")]
	private Vector2 GetEventPointerPosition(EventBase triggerEvent)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x325B390", Offset = "0x3259990", VA = "0x18325B390")]
	internal void SetTemporaryElementUnderPointer(VisualElement newElementUnderPointer, int pointerId, EventBase triggerEvent)
	{
	}

	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x325B1F0", Offset = "0x32597F0", VA = "0x18325B1F0")]
	internal void SetElementUnderPointer(VisualElement newElementUnderPointer, int pointerId, EventBase triggerEvent)
	{
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x325AF90", Offset = "0x3259590", VA = "0x18325AF90")]
	private void SetElementUnderPointer(VisualElement newElementUnderPointer, int pointerId, EventBase triggerEvent, bool temporary)
	{
	}

	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x325A7B0", Offset = "0x3258DB0", VA = "0x18325A7B0")]
	internal bool CommitElementUnderPointers(EventDispatcher dispatcher, ContextType contextType)
	{
		return default(bool);
	}
}
