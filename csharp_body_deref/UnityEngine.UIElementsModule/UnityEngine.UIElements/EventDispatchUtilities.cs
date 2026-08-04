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

[Token(Token = "0x200018D")]
internal static class EventDispatchUtilities
{
	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A8A")]
	[Address(RVA = "0x502E120", Offset = "0x502E120", VA = "0x502E120")]
	private static void PropagateEvent(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement target)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x502ED00", Offset = "0x502ED00", VA = "0x502ED00")]
	private static void HandleEventAtTargetPhase(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement target)
	{
	}

	[Token(Token = "0x6000A8C")]
	[Address(RVA = "0x502EDF0", Offset = "0x502EDF0", VA = "0x502EDF0")]
	public static void HandleEventAtTargetAndDefaultPhase(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement target)
	{
	}

	[Token(Token = "0x6000A8D")]
	[Address(RVA = "0x502E3A0", Offset = "0x502E3A0", VA = "0x502E3A0")]
	private static void HandleEventAcrossPropagationPath(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement leafTarget, [NotNull] PropagationPaths path)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A8E")]
	[Address(RVA = "0x502EF10", Offset = "0x502EF10", VA = "0x502EF10")]
	private static void PropagateEvent_DefaultAction(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement target, [NotNull] PropagationPaths path)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A8F")]
	[Address(RVA = "0x502F100", Offset = "0x502F100", VA = "0x502F100")]
	private static void HandleEvent_DefaultActionAtTarget(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement target)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x502F210", Offset = "0x502F210", VA = "0x502F210")]
	private static void HandleEvent_DefaultAction(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement target)
	{
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x502F320", Offset = "0x502F320", VA = "0x502F320")]
	public static void DispatchToFocusedElementOrPanelRoot(EventBase evt, [NotNull] BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x502F500", Offset = "0x502F500", VA = "0x502F500")]
	public static void DispatchToElementUnderPointerOrPanelRoot(EventBase evt, [NotNull] BaseVisualElementPanel panel, int pointerId, Vector2 position)
	{
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x502F590", Offset = "0x502F590", VA = "0x502F590")]
	public static void DispatchToCachedElementUnderPointerOrPanelRoot(EventBase evt, [NotNull] BaseVisualElementPanel panel, int pointerId, Vector2 position)
	{
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x502F610", Offset = "0x502F610", VA = "0x502F610")]
	public static void DispatchToAssignedTarget(EventBase evt, [NotNull] BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x502C690", Offset = "0x502C690", VA = "0x502C690")]
	public static void DefaultDispatch(EventBase evt, [NotNull] BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x502F6B0", Offset = "0x502F6B0", VA = "0x502F6B0")]
	public static void DispatchToCapturingElementOrElementUnderPointer(EventBase evt, [NotNull] BaseVisualElementPanel panel, int pointerId, Vector2 position)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A97")]
	[Address(RVA = "0x502F760", Offset = "0x502F760", VA = "0x502F760")]
	private static bool DispatchToCapturingElement(EventBase evt, [NotNull] BaseVisualElementPanel panel, int pointerId, Vector2 position)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A98")]
	[Address(RVA = "0x502FAB0", Offset = "0x502FAB0", VA = "0x502FAB0")]
	internal static void DispatchToPanelRoot(EventBase evt, [NotNull] BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x502FB10", Offset = "0x502FB10", VA = "0x502FB10")]
	internal static void PropagateToRemainingIMGUIContainers(EventBase evt, [NotNull] VisualElement root)
	{
	}

	[Token(Token = "0x6000A9A")]
	[Address(RVA = "0x502FB70", Offset = "0x502FB70", VA = "0x502FB70")]
	private static void PropagateToRemainingIMGUIContainerRecursive(EventBase evt, [NotNull] VisualElement root)
	{
	}
}
