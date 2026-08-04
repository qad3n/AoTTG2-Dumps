// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.ShorthandApplicator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x200052F")]
internal static class ShorthandApplicator
{
	[Token(Token = "0x4001172")]
	[FieldOffset(Offset = "0x0")]
	private static List<TimeValue> s_TransitionDelayList;

	[Token(Token = "0x4001173")]
	[FieldOffset(Offset = "0x8")]
	private static List<TimeValue> s_TransitionDurationList;

	[Token(Token = "0x4001174")]
	[FieldOffset(Offset = "0x10")]
	private static List<StylePropertyName> s_TransitionPropertyList;

	[Token(Token = "0x4001175")]
	[FieldOffset(Offset = "0x18")]
	private static List<EasingFunction> s_TransitionTimingFunctionList;

	[Token(Token = "0x6001FC3")]
	[Address(RVA = "0x4FBFC20", Offset = "0x4FBFC20", VA = "0x4FBFC20")]
	public static void ApplyBackgroundPosition(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001FC4")]
	[Address(RVA = "0x4FC0440", Offset = "0x4FC0440", VA = "0x4FC0440")]
	public static void ApplyBorderColor(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001FC5")]
	[Address(RVA = "0x4FC0690", Offset = "0x4FC0690", VA = "0x4FC0690")]
	public static void ApplyBorderRadius(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001FC6")]
	[Address(RVA = "0x4FC08A0", Offset = "0x4FC08A0", VA = "0x4FC08A0")]
	public static void ApplyBorderWidth(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001FC7")]
	[Address(RVA = "0x4FC0AD0", Offset = "0x4FC0AD0", VA = "0x4FC0AD0")]
	public static void ApplyFlex(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001FC8")]
	[Address(RVA = "0x4FC0DC0", Offset = "0x4FC0DC0", VA = "0x4FC0DC0")]
	public static void ApplyMargin(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001FC9")]
	[Address(RVA = "0x4FC1000", Offset = "0x4FC1000", VA = "0x4FC1000")]
	public static void ApplyPadding(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001FCA")]
	[Address(RVA = "0x4FC1100", Offset = "0x4FC1100", VA = "0x4FC1100")]
	public static void ApplyTransition(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001FCB")]
	[Address(RVA = "0x4FC1D70", Offset = "0x4FC1D70", VA = "0x4FC1D70")]
	public static void ApplyUnityBackgroundScaleMode(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001FCC")]
	[Address(RVA = "0x4FC1F60", Offset = "0x4FC1F60", VA = "0x4FC1F60")]
	public static void ApplyUnityTextOutline(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001FCD")]
	[Address(RVA = "0x4FC0BA0", Offset = "0x4FC0BA0", VA = "0x4FC0BA0")]
	private static bool CompileFlexShorthand(StylePropertyReader reader, out float grow, out float shrink, out Length basis)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FCE")]
	[Address(RVA = "0x4FC0790", Offset = "0x4FC0790", VA = "0x4FC0790")]
	private static void CompileBorderRadius(StylePropertyReader reader, out Length top, out Length right, out Length bottom, out Length left)
	{
	}

	[Token(Token = "0x6001FCF")]
	[Address(RVA = "0x4FBFCF0", Offset = "0x4FBFCF0", VA = "0x4FBFCF0")]
	private static void CompileBackgroundPosition(StylePropertyReader reader, out BackgroundPosition backgroundPositionX, out BackgroundPosition backgroundPositionY)
	{
	}

	[Token(Token = "0x6001FD0")]
	[Address(RVA = "0x4FC1EC0", Offset = "0x4FC1EC0", VA = "0x4FC1EC0")]
	public static void CompileUnityBackgroundScaleMode(StylePropertyReader reader, out BackgroundPosition backgroundPositionX, out BackgroundPosition backgroundPositionY, out BackgroundRepeat backgroundRepeat, out BackgroundSize backgroundSize)
	{
	}

	[Token(Token = "0x6001FD1")]
	[Address(RVA = "0x4FC0EB0", Offset = "0x4FC0EB0", VA = "0x4FC0EB0")]
	private static void CompileBoxArea(StylePropertyReader reader, out Length top, out Length right, out Length bottom, out Length left)
	{
	}

	[Token(Token = "0x6001FD2")]
	[Address(RVA = "0x4FC0A10", Offset = "0x4FC0A10", VA = "0x4FC0A10")]
	private static void CompileBoxArea(StylePropertyReader reader, out float top, out float right, out float bottom, out float left)
	{
	}

	[Token(Token = "0x6001FD3")]
	[Address(RVA = "0x4FC0530", Offset = "0x4FC0530", VA = "0x4FC0530")]
	private static void CompileBoxArea(StylePropertyReader reader, out Color top, out Color right, out Color bottom, out Color left)
	{
	}

	[Token(Token = "0x6001FD4")]
	[Address(RVA = "0x4FC20D0", Offset = "0x4FC20D0", VA = "0x4FC20D0")]
	private static void CompileTextOutline(StylePropertyReader reader, out Color outlineColor, out float outlineWidth)
	{
	}

	[Token(Token = "0x6001FD5")]
	[Address(RVA = "0x4FC1250", Offset = "0x4FC1250", VA = "0x4FC1250")]
	private static void CompileTransition(StylePropertyReader reader, out List<TimeValue> outDelay, out List<TimeValue> outDuration, out List<StylePropertyName> outProperty, out List<EasingFunction> outTimingFunction)
	{
	}
}
