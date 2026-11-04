// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.EventDispatchUtilities
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using JetBrains.Annotations;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001D2")]
internal static class EventDispatchUtilities
{
	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C96")]
	[Address(RVA = "0x325EF10", Offset = "0x325D510", VA = "0x18325EF10")]
	private static void PropagateEvent(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement target, bool isCapturingTarget)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C97")]
	[Address(RVA = "0x325F460", Offset = "0x325DA60", VA = "0x18325F460")]
	public static void SendEventDirectlyToTarget(EventBase evt, BaseVisualElementPanel panel, [NotNull] VisualElement target)
	{
	}

	[Token(Token = "0x6000C98")]
	[Address(RVA = "0x325E7F0", Offset = "0x325CDF0", VA = "0x18325E7F0")]
	public static void HandleEventAtTargetAndDefaultPhase(EventBase evt, BaseVisualElementPanel panel, VisualElement target)
	{
	}

	[Token(Token = "0x6000C99")]
	[Address(RVA = "0x325E060", Offset = "0x325C660", VA = "0x18325E060")]
	private static void HandleEventAcrossPropagationPath(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement target, bool isCapturingTarget)
	{
	}

	[Token(Token = "0x6000C9A")]
	[Address(RVA = "0x325D3F0", Offset = "0x325B9F0", VA = "0x18325D3F0")]
	private static void HandleEventAcrossPropagationPathWithCompatibilityEvent(EventBase evt, [NotNull] EventBase compatibilityEvt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement target, bool isCapturingTarget)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C9B")]
	[Address(RVA = "0x325ECF0", Offset = "0x325D2F0", VA = "0x18325ECF0")]
	private static void HandleEvent_DefaultActionAtTarget(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement element, bool disabled)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C9C")]
	[Address(RVA = "0x325EDB0", Offset = "0x325D3B0", VA = "0x18325EDB0")]
	private static void HandleEvent_DefaultAction(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement element, bool disabled)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C9D")]
	[Address(RVA = "0x325EE70", Offset = "0x325D470", VA = "0x18325EE70")]
	private static void HandleEvent_TrickleDownCallbacks(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement element)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C9E")]
	[Address(RVA = "0x325EC50", Offset = "0x325D250", VA = "0x18325EC50")]
	private static void HandleEvent_BubbleUpCallbacks(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement element)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C9F")]
	[Address(RVA = "0x325EEB0", Offset = "0x325D4B0", VA = "0x18325EEB0")]
	private static void HandleEvent_TrickleDownHandleEvent(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement element, bool disabled)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CA0")]
	[Address(RVA = "0x325EC90", Offset = "0x325D290", VA = "0x18325EC90")]
	private static void HandleEvent_BubbleUpHandleEvent(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement element, bool disabled)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CA1")]
	[Address(RVA = "0x3255D30", Offset = "0x3254330", VA = "0x183255D30")]
	private static void HandleEvent_BubbleUpAllDefaultActions(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement element, bool disabled, bool isCapturingTarget)
	{
	}

	[Token(Token = "0x6000CA2")]
	[Address(RVA = "0x325CBA0", Offset = "0x325B1A0", VA = "0x18325CBA0")]
	private static bool Disabled([NotNull] EventBase evt, [NotNull] VisualElement target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA3")]
	[Address(RVA = "0x325D110", Offset = "0x325B710", VA = "0x18325D110")]
	public static void DispatchToFocusedElementOrPanelRoot(EventBase evt, [NotNull] BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000CA4")]
	[Address(RVA = "0x325D010", Offset = "0x325B610", VA = "0x18325D010")]
	public static void DispatchToElementUnderPointerOrPanelRoot(EventBase evt, [NotNull] BaseVisualElementPanel panel, int pointerId, Vector2 position)
	{
	}

	[Token(Token = "0x6000CA5")]
	[Address(RVA = "0x325CBE0", Offset = "0x325B1E0", VA = "0x18325CBE0")]
	public static void DispatchToAssignedTarget(EventBase evt, [NotNull] BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000CA6")]
	[Address(RVA = "0x325B770", Offset = "0x3259D70", VA = "0x18325B770")]
	public static void DefaultDispatch(EventBase evt, [NotNull] BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000CA7")]
	[Address(RVA = "0x325CC90", Offset = "0x325B290", VA = "0x18325CC90")]
	public static void DispatchToCapturingElementOrElementUnderPointer(EventBase evt, [NotNull] BaseVisualElementPanel panel, int pointerId, Vector2 position)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CA8")]
	[Address(RVA = "0x325CE60", Offset = "0x325B460", VA = "0x18325CE60")]
	private static bool DispatchToCapturingElement(EventBase evt, [NotNull] BaseVisualElementPanel panel, int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x325D370", Offset = "0x325B970", VA = "0x18325D370")]
	internal static void DispatchToPanelRoot(EventBase evt, [NotNull] BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x325F3F0", Offset = "0x325D9F0", VA = "0x18325F3F0")]
	internal static void PropagateToRemainingIMGUIContainers(EventBase evt, [NotNull] VisualElement root)
	{
	}

	[Token(Token = "0x6000CAB")]
	[Address(RVA = "0x325F010", Offset = "0x325D610", VA = "0x18325F010")]
	private static void PropagateToRemainingIMGUIContainerRecursive(EventBase evt, [NotNull] VisualElement root)
	{
	}
}
