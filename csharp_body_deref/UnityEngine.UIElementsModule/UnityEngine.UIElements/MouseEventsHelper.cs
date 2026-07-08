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
	[Address(RVA = "0x4D04670", Offset = "0x4D04670", VA = "0x4D04670")]
	internal static void SendMouseOverMouseOut(VisualElement previousTopElementUnderMouse, VisualElement currentTopElementUnderMouse, IMouseEvent triggerEvent, Vector2 mousePosition)
	{
	}
}
