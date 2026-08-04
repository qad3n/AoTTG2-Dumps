// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MouseEventsHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001BF")]
internal static class MouseEventsHelper
{
	[Token(Token = "0x6000BAA")]
	internal static void SendEnterLeave<TLeaveEvent, TEnterEvent>(VisualElement previousTopElementUnderMouse, VisualElement currentTopElementUnderMouse, IMouseEvent triggerEvent, Vector2 mousePosition) where TLeaveEvent : MouseEventBase<TLeaveEvent>, new() where TEnterEvent : MouseEventBase<TEnterEvent>, new()
	{
	}

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x502BFA0", Offset = "0x502BFA0", VA = "0x502BFA0")]
	internal static void SendMouseOverMouseOut(VisualElement previousTopElementUnderMouse, VisualElement currentTopElementUnderMouse, IMouseEvent triggerEvent, Vector2 mousePosition)
	{
	}
}
