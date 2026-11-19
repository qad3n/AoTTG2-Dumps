// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.EventDispatchUtilities
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x6C627F0", Offset = "0x6C617F0", VA = "0x6C627F0")]
	private static void PropagateEvent(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement target, bool isCapturingTarget)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C97")]
	[Address(RVA = "0x6C63D80", Offset = "0x6C62D80", VA = "0x6C63D80")]
	public static void SendEventDirectlyToTarget(EventBase evt, BaseVisualElementPanel panel, [NotNull] VisualElement target)
	{
	}

	[Token(Token = "0x6000C98")]
	[Address(RVA = "0x6C63DD0", Offset = "0x6C62DD0", VA = "0x6C63DD0")]
	public static void HandleEventAtTargetAndDefaultPhase(EventBase evt, BaseVisualElementPanel panel, VisualElement target)
	{
	}

	[Token(Token = "0x6000C99")]
	[Address(RVA = "0x6C63570", Offset = "0x6C62570", VA = "0x6C63570")]
	private static void HandleEventAcrossPropagationPath(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement target, bool isCapturingTarget)
	{
	}

	[Token(Token = "0x6000C9A")]
	[Address(RVA = "0x6C62930", Offset = "0x6C61930", VA = "0x6C62930")]
	private static void HandleEventAcrossPropagationPathWithCompatibilityEvent(EventBase evt, [NotNull] EventBase compatibilityEvt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement target, bool isCapturingTarget)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C9B")]
	[Address(RVA = "0x6C64560", Offset = "0x6C63560", VA = "0x6C64560")]
	private static void HandleEvent_DefaultActionAtTarget(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement element, bool disabled)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C9C")]
	[Address(RVA = "0x6C64640", Offset = "0x6C63640", VA = "0x6C64640")]
	private static void HandleEvent_DefaultAction(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement element, bool disabled)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C9D")]
	[Address(RVA = "0x6C64720", Offset = "0x6C63720", VA = "0x6C64720")]
	private static void HandleEvent_TrickleDownCallbacks(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement element)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C9E")]
	[Address(RVA = "0x6C64750", Offset = "0x6C63750", VA = "0x6C64750")]
	private static void HandleEvent_BubbleUpCallbacks(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement element)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C9F")]
	[Address(RVA = "0x6C64780", Offset = "0x6C63780", VA = "0x6C64780")]
	private static void HandleEvent_TrickleDownHandleEvent(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement element, bool disabled)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CA0")]
	[Address(RVA = "0x6C647C0", Offset = "0x6C637C0", VA = "0x6C647C0")]
	private static void HandleEvent_BubbleUpHandleEvent(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement element, bool disabled)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CA1")]
	[Address(RVA = "0x6C64800", Offset = "0x6C63800", VA = "0x6C64800")]
	private static void HandleEvent_BubbleUpAllDefaultActions(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement element, bool disabled, bool isCapturingTarget)
	{
	}

	[Token(Token = "0x6000CA2")]
	[Address(RVA = "0x6C641E0", Offset = "0x6C631E0", VA = "0x6C641E0")]
	private static bool Disabled([NotNull] EventBase evt, [NotNull] VisualElement target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA3")]
	[Address(RVA = "0x6C648E0", Offset = "0x6C638E0", VA = "0x6C648E0")]
	public static void DispatchToFocusedElementOrPanelRoot(EventBase evt, [NotNull] BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000CA4")]
	[Address(RVA = "0x6C64CB0", Offset = "0x6C63CB0", VA = "0x6C64CB0")]
	public static void DispatchToElementUnderPointerOrPanelRoot(EventBase evt, [NotNull] BaseVisualElementPanel panel, int pointerId, Vector2 position)
	{
	}

	[Token(Token = "0x6000CA5")]
	[Address(RVA = "0x6C64DE0", Offset = "0x6C63DE0", VA = "0x6C64DE0")]
	public static void DispatchToAssignedTarget(EventBase evt, [NotNull] BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000CA6")]
	[Address(RVA = "0x6C60BB0", Offset = "0x6C5FBB0", VA = "0x6C60BB0")]
	public static void DefaultDispatch(EventBase evt, [NotNull] BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000CA7")]
	[Address(RVA = "0x6C64E80", Offset = "0x6C63E80", VA = "0x6C64E80")]
	public static void DispatchToCapturingElementOrElementUnderPointer(EventBase evt, [NotNull] BaseVisualElementPanel panel, int pointerId, Vector2 position)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CA8")]
	[Address(RVA = "0x6C64EB0", Offset = "0x6C63EB0", VA = "0x6C64EB0")]
	private static bool DispatchToCapturingElement(EventBase evt, [NotNull] BaseVisualElementPanel panel, int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x6C65090", Offset = "0x6C64090", VA = "0x6C65090")]
	internal static void DispatchToPanelRoot(EventBase evt, [NotNull] BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x6C64C50", Offset = "0x6C63C50", VA = "0x6C64C50")]
	internal static void PropagateToRemainingIMGUIContainers(EventBase evt, [NotNull] VisualElement root)
	{
	}

	[Token(Token = "0x6000CAB")]
	[Address(RVA = "0x6C650F0", Offset = "0x6C640F0", VA = "0x6C650F0")]
	private static void PropagateToRemainingIMGUIContainerRecursive(EventBase evt, [NotNull] VisualElement root)
	{
	}
}
