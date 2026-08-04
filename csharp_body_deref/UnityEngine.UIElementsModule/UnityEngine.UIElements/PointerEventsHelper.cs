// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PointerEventsHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001C0")]
internal static class PointerEventsHelper
{
	[Token(Token = "0x6000BAC")]
	internal static void SendEnterLeave<TLeaveEvent, TEnterEvent>(VisualElement previousTopElementUnderPointer, VisualElement currentTopElementUnderPointer, IPointerEvent triggerEvent, Vector2 position, int pointerId) where TLeaveEvent : PointerEventBase<TLeaveEvent>, new() where TEnterEvent : PointerEventBase<TEnterEvent>, new()
	{
	}

	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x502BBE0", Offset = "0x502BBE0", VA = "0x502BBE0")]
	internal static void SendOverOut(VisualElement previousTopElementUnderPointer, VisualElement currentTopElementUnderPointer, IPointerEvent triggerEvent, Vector2 position, int pointerId)
	{
	}
}
