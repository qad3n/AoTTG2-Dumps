// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.ShorthandApplicator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x2000626")]
[UnityEngine.Bindings.VisibleToOtherModules]
internal static class ShorthandApplicator
{
	[Token(Token = "0x400170E")]
	[FieldOffset(Offset = "0x0")]
	private static List<TimeValue> s_TransitionDelayList;

	[Token(Token = "0x400170F")]
	[FieldOffset(Offset = "0x8")]
	private static List<TimeValue> s_TransitionDurationList;

	[Token(Token = "0x4001710")]
	[FieldOffset(Offset = "0x10")]
	private static List<StylePropertyName> s_TransitionPropertyList;

	[Token(Token = "0x4001711")]
	[FieldOffset(Offset = "0x18")]
	private static List<EasingFunction> s_TransitionTimingFunctionList;

	[Token(Token = "0x6002D1C")]
	[Address(RVA = "0x6BC9470", Offset = "0x6BC8470", VA = "0x6BC9470")]
	public static void ApplyBackgroundPosition(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6002D1D")]
	[Address(RVA = "0x6BC9C80", Offset = "0x6BC8C80", VA = "0x6BC9C80")]
	public static void ApplyBorderColor(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6002D1E")]
	[Address(RVA = "0x6BC9ED0", Offset = "0x6BC8ED0", VA = "0x6BC9ED0")]
	public static void ApplyBorderRadius(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6002D1F")]
	[Address(RVA = "0x6BCA0E0", Offset = "0x6BC90E0", VA = "0x6BCA0E0")]
	public static void ApplyBorderWidth(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6002D20")]
	[Address(RVA = "0x6BCA340", Offset = "0x6BC9340", VA = "0x6BCA340")]
	public static void ApplyFlex(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6002D21")]
	[Address(RVA = "0x6BCA620", Offset = "0x6BC9620", VA = "0x6BCA620")]
	public static void ApplyMargin(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6002D22")]
	[Address(RVA = "0x6BCA860", Offset = "0x6BC9860", VA = "0x6BCA860")]
	public static void ApplyPadding(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6002D23")]
	[Address(RVA = "0x6BCA960", Offset = "0x6BC9960", VA = "0x6BCA960")]
	public static void ApplyTransition(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6002D24")]
	[Address(RVA = "0x6BCB4C0", Offset = "0x6BCA4C0", VA = "0x6BCB4C0")]
	public static void ApplyUnityBackgroundScaleMode(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6002D25")]
	[Address(RVA = "0x6BCB690", Offset = "0x6BCA690", VA = "0x6BCB690")]
	public static void ApplyUnityTextOutline(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6002D26")]
	[Address(RVA = "0x6BCA410", Offset = "0x6BC9410", VA = "0x6BCA410")]
	private static bool CompileFlexShorthand(StylePropertyReader reader, out float grow, out float shrink, out Length basis)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D27")]
	[Address(RVA = "0x6BC9FD0", Offset = "0x6BC8FD0", VA = "0x6BC9FD0")]
	private static void CompileBorderRadius(StylePropertyReader reader, out Length top, out Length right, out Length bottom, out Length left)
	{
	}

	[Token(Token = "0x6002D28")]
	[Address(RVA = "0x6BC9540", Offset = "0x6BC8540", VA = "0x6BC9540")]
	private static void CompileBackgroundPosition(StylePropertyReader reader, out BackgroundPosition backgroundPositionX, out BackgroundPosition backgroundPositionY)
	{
	}

	[Token(Token = "0x6002D29")]
	[Address(RVA = "0x6BCB600", Offset = "0x6BCA600", VA = "0x6BCB600")]
	public static void CompileUnityBackgroundScaleMode(StylePropertyReader reader, out BackgroundPosition backgroundPositionX, out BackgroundPosition backgroundPositionY, out BackgroundRepeat backgroundRepeat, out BackgroundSize backgroundSize)
	{
	}

	[Token(Token = "0x6002D2A")]
	[Address(RVA = "0x6BCA710", Offset = "0x6BC9710", VA = "0x6BCA710")]
	private static void CompileBoxArea(StylePropertyReader reader, out Length top, out Length right, out Length bottom, out Length left)
	{
	}

	[Token(Token = "0x6002D2B")]
	[Address(RVA = "0x6BCA270", Offset = "0x6BC9270", VA = "0x6BCA270")]
	private static void CompileBoxArea(StylePropertyReader reader, out float top, out float right, out float bottom, out float left)
	{
	}

	[Token(Token = "0x6002D2C")]
	[Address(RVA = "0x6BC9D70", Offset = "0x6BC8D70", VA = "0x6BC9D70")]
	private static void CompileBoxArea(StylePropertyReader reader, out Color top, out Color right, out Color bottom, out Color left)
	{
	}

	[Token(Token = "0x6002D2D")]
	[Address(RVA = "0x6BCB810", Offset = "0x6BCA810", VA = "0x6BCB810")]
	private static void CompileTextOutline(StylePropertyReader reader, out Color outlineColor, out float outlineWidth)
	{
	}

	[Token(Token = "0x6002D2E")]
	[Address(RVA = "0x6BCAAB0", Offset = "0x6BC9AB0", VA = "0x6BCAAB0")]
	private static void CompileTransition(StylePropertyReader reader, out List<TimeValue> outDelay, out List<TimeValue> outDuration, out List<StylePropertyName> outProperty, out List<EasingFunction> outTimingFunction)
	{
	}
}
