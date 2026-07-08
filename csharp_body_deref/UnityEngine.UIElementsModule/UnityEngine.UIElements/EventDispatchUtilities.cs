using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using JetBrains.Annotations;

namespace UnityEngine.UIElements;

[Token(Token = "0x200018D")]
internal static class EventDispatchUtilities
{
	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A8A")]
	[Address(RVA = "0x4D067F0", Offset = "0x4D067F0", VA = "0x4D067F0")]
	private static void PropagateEvent(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement target)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x4D073D0", Offset = "0x4D073D0", VA = "0x4D073D0")]
	private static void HandleEventAtTargetPhase(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement target)
	{
	}

	[Token(Token = "0x6000A8C")]
	[Address(RVA = "0x4D074C0", Offset = "0x4D074C0", VA = "0x4D074C0")]
	public static void HandleEventAtTargetAndDefaultPhase(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement target)
	{
	}

	[Token(Token = "0x6000A8D")]
	[Address(RVA = "0x4D06A70", Offset = "0x4D06A70", VA = "0x4D06A70")]
	private static void HandleEventAcrossPropagationPath(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement leafTarget, [NotNull] PropagationPaths path)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A8E")]
	[Address(RVA = "0x4D075E0", Offset = "0x4D075E0", VA = "0x4D075E0")]
	private static void PropagateEvent_DefaultAction(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement target, [NotNull] PropagationPaths path)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A8F")]
	[Address(RVA = "0x4D077D0", Offset = "0x4D077D0", VA = "0x4D077D0")]
	private static void HandleEvent_DefaultActionAtTarget(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement target)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x4D078E0", Offset = "0x4D078E0", VA = "0x4D078E0")]
	private static void HandleEvent_DefaultAction(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement target)
	{
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x4D079F0", Offset = "0x4D079F0", VA = "0x4D079F0")]
	public static void DispatchToFocusedElementOrPanelRoot(EventBase evt, [NotNull] BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x4D07BD0", Offset = "0x4D07BD0", VA = "0x4D07BD0")]
	public static void DispatchToElementUnderPointerOrPanelRoot(EventBase evt, [NotNull] BaseVisualElementPanel panel, int pointerId, Vector2 position)
	{
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x4D07C60", Offset = "0x4D07C60", VA = "0x4D07C60")]
	public static void DispatchToCachedElementUnderPointerOrPanelRoot(EventBase evt, [NotNull] BaseVisualElementPanel panel, int pointerId, Vector2 position)
	{
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x4D07CE0", Offset = "0x4D07CE0", VA = "0x4D07CE0")]
	public static void DispatchToAssignedTarget(EventBase evt, [NotNull] BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x4D04D60", Offset = "0x4D04D60", VA = "0x4D04D60")]
	public static void DefaultDispatch(EventBase evt, [NotNull] BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x4D07D80", Offset = "0x4D07D80", VA = "0x4D07D80")]
	public static void DispatchToCapturingElementOrElementUnderPointer(EventBase evt, [NotNull] BaseVisualElementPanel panel, int pointerId, Vector2 position)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A97")]
	[Address(RVA = "0x4D07E30", Offset = "0x4D07E30", VA = "0x4D07E30")]
	private static bool DispatchToCapturingElement(EventBase evt, [NotNull] BaseVisualElementPanel panel, int pointerId, Vector2 position)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A98")]
	[Address(RVA = "0x4D08180", Offset = "0x4D08180", VA = "0x4D08180")]
	internal static void DispatchToPanelRoot(EventBase evt, [NotNull] BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x4D081E0", Offset = "0x4D081E0", VA = "0x4D081E0")]
	internal static void PropagateToRemainingIMGUIContainers(EventBase evt, [NotNull] VisualElement root)
	{
	}

	[Token(Token = "0x6000A9A")]
	[Address(RVA = "0x4D08240", Offset = "0x4D08240", VA = "0x4D08240")]
	private static void PropagateToRemainingIMGUIContainerRecursive(EventBase evt, [NotNull] VisualElement root)
	{
	}
}
