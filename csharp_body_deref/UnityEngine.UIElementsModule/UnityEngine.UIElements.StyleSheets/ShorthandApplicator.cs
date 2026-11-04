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
	[Address(RVA = "0x31C3330", Offset = "0x31C1930", VA = "0x1831C3330")]
	public static void ApplyBackgroundPosition(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6002D1D")]
	[Address(RVA = "0x31C3400", Offset = "0x31C1A00", VA = "0x1831C3400")]
	public static void ApplyBorderColor(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6002D1E")]
	[Address(RVA = "0x31C3970", Offset = "0x31C1F70", VA = "0x1831C3970")]
	public static void ApplyBorderRadius(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6002D1F")]
	[Address(RVA = "0x31C3B50", Offset = "0x31C2150", VA = "0x1831C3B50")]
	public static void ApplyBorderWidth(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6002D20")]
	[Address(RVA = "0x31C3DE0", Offset = "0x31C23E0", VA = "0x1831C3DE0")]
	public static void ApplyFlex(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6002D21")]
	[Address(RVA = "0x31C3EC0", Offset = "0x31C24C0", VA = "0x1831C3EC0")]
	public static void ApplyMargin(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6002D22")]
	[Address(RVA = "0x31C4090", Offset = "0x31C2690", VA = "0x1831C4090")]
	public static void ApplyPadding(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6002D23")]
	[Address(RVA = "0x31C4270", Offset = "0x31C2870", VA = "0x1831C4270")]
	public static void ApplyTransition(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6002D24")]
	[Address(RVA = "0x31C43C0", Offset = "0x31C29C0", VA = "0x1831C43C0")]
	public static void ApplyUnityBackgroundScaleMode(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6002D25")]
	[Address(RVA = "0x31C4540", Offset = "0x31C2B40", VA = "0x1831C4540")]
	public static void ApplyUnityTextOutline(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6002D26")]
	[Address(RVA = "0x31C53D0", Offset = "0x31C39D0", VA = "0x1831C53D0")]
	private static bool CompileFlexShorthand(StylePropertyReader reader, out float grow, out float shrink, out Length basis)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D27")]
	[Address(RVA = "0x31C4DB0", Offset = "0x31C33B0", VA = "0x1831C4DB0")]
	private static void CompileBorderRadius(StylePropertyReader reader, out Length top, out Length right, out Length bottom, out Length left)
	{
	}

	[Token(Token = "0x6002D28")]
	[Address(RVA = "0x31C46D0", Offset = "0x31C2CD0", VA = "0x1831C46D0")]
	private static void CompileBackgroundPosition(StylePropertyReader reader, out BackgroundPosition backgroundPositionX, out BackgroundPosition backgroundPositionY)
	{
	}

	[Token(Token = "0x6002D29")]
	[Address(RVA = "0x31C60D0", Offset = "0x31C46D0", VA = "0x1831C60D0")]
	public static void CompileUnityBackgroundScaleMode(StylePropertyReader reader, out BackgroundPosition backgroundPositionX, out BackgroundPosition backgroundPositionY, out BackgroundRepeat backgroundRepeat, out BackgroundSize backgroundSize)
	{
	}

	[Token(Token = "0x6002D2A")]
	[Address(RVA = "0x31C5260", Offset = "0x31C3860", VA = "0x1831C5260")]
	private static void CompileBoxArea(StylePropertyReader reader, out Length top, out Length right, out Length bottom, out Length left)
	{
	}

	[Token(Token = "0x6002D2B")]
	[Address(RVA = "0x31C5090", Offset = "0x31C3690", VA = "0x1831C5090")]
	private static void CompileBoxArea(StylePropertyReader reader, out float top, out float right, out float bottom, out float left)
	{
	}

	[Token(Token = "0x6002D2C")]
	[Address(RVA = "0x31C4ED0", Offset = "0x31C34D0", VA = "0x1831C4ED0")]
	private static void CompileBoxArea(StylePropertyReader reader, out Color top, out Color right, out Color bottom, out Color left)
	{
	}

	[Token(Token = "0x6002D2D")]
	[Address(RVA = "0x31C55E0", Offset = "0x31C3BE0", VA = "0x1831C55E0")]
	private static void CompileTextOutline(StylePropertyReader reader, out Color outlineColor, out float outlineWidth)
	{
	}

	[Token(Token = "0x6002D2E")]
	[Address(RVA = "0x31C5680", Offset = "0x31C3C80", VA = "0x1831C5680")]
	private static void CompileTransition(StylePropertyReader reader, out List<TimeValue> outDelay, out List<TimeValue> outDuration, out List<StylePropertyName> outProperty, out List<EasingFunction> outTimingFunction)
	{
	}
}
