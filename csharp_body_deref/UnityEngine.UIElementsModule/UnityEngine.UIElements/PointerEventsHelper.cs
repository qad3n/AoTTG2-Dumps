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
	[Address(RVA = "0x4D042B0", Offset = "0x4D042B0", VA = "0x4D042B0")]
	internal static void SendOverOut(VisualElement previousTopElementUnderPointer, VisualElement currentTopElementUnderPointer, IPointerEvent triggerEvent, Vector2 position, int pointerId)
	{
	}
}
