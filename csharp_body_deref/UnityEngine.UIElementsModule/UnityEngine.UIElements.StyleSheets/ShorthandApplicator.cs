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
	[Address(RVA = "0x4C982F0", Offset = "0x4C982F0", VA = "0x4C982F0")]
	public static void ApplyBackgroundPosition(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001FC4")]
	[Address(RVA = "0x4C98B10", Offset = "0x4C98B10", VA = "0x4C98B10")]
	public static void ApplyBorderColor(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001FC5")]
	[Address(RVA = "0x4C98D60", Offset = "0x4C98D60", VA = "0x4C98D60")]
	public static void ApplyBorderRadius(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001FC6")]
	[Address(RVA = "0x4C98F70", Offset = "0x4C98F70", VA = "0x4C98F70")]
	public static void ApplyBorderWidth(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001FC7")]
	[Address(RVA = "0x4C991A0", Offset = "0x4C991A0", VA = "0x4C991A0")]
	public static void ApplyFlex(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001FC8")]
	[Address(RVA = "0x4C99490", Offset = "0x4C99490", VA = "0x4C99490")]
	public static void ApplyMargin(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001FC9")]
	[Address(RVA = "0x4C996D0", Offset = "0x4C996D0", VA = "0x4C996D0")]
	public static void ApplyPadding(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001FCA")]
	[Address(RVA = "0x4C997D0", Offset = "0x4C997D0", VA = "0x4C997D0")]
	public static void ApplyTransition(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001FCB")]
	[Address(RVA = "0x4C9A440", Offset = "0x4C9A440", VA = "0x4C9A440")]
	public static void ApplyUnityBackgroundScaleMode(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001FCC")]
	[Address(RVA = "0x4C9A630", Offset = "0x4C9A630", VA = "0x4C9A630")]
	public static void ApplyUnityTextOutline(StylePropertyReader reader, ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001FCD")]
	[Address(RVA = "0x4C99270", Offset = "0x4C99270", VA = "0x4C99270")]
	private static bool CompileFlexShorthand(StylePropertyReader reader, out float grow, out float shrink, out Length basis)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FCE")]
	[Address(RVA = "0x4C98E60", Offset = "0x4C98E60", VA = "0x4C98E60")]
	private static void CompileBorderRadius(StylePropertyReader reader, out Length top, out Length right, out Length bottom, out Length left)
	{
	}

	[Token(Token = "0x6001FCF")]
	[Address(RVA = "0x4C983C0", Offset = "0x4C983C0", VA = "0x4C983C0")]
	private static void CompileBackgroundPosition(StylePropertyReader reader, out BackgroundPosition backgroundPositionX, out BackgroundPosition backgroundPositionY)
	{
	}

	[Token(Token = "0x6001FD0")]
	[Address(RVA = "0x4C9A590", Offset = "0x4C9A590", VA = "0x4C9A590")]
	public static void CompileUnityBackgroundScaleMode(StylePropertyReader reader, out BackgroundPosition backgroundPositionX, out BackgroundPosition backgroundPositionY, out BackgroundRepeat backgroundRepeat, out BackgroundSize backgroundSize)
	{
	}

	[Token(Token = "0x6001FD1")]
	[Address(RVA = "0x4C99580", Offset = "0x4C99580", VA = "0x4C99580")]
	private static void CompileBoxArea(StylePropertyReader reader, out Length top, out Length right, out Length bottom, out Length left)
	{
	}

	[Token(Token = "0x6001FD2")]
	[Address(RVA = "0x4C990E0", Offset = "0x4C990E0", VA = "0x4C990E0")]
	private static void CompileBoxArea(StylePropertyReader reader, out float top, out float right, out float bottom, out float left)
	{
	}

	[Token(Token = "0x6001FD3")]
	[Address(RVA = "0x4C98C00", Offset = "0x4C98C00", VA = "0x4C98C00")]
	private static void CompileBoxArea(StylePropertyReader reader, out Color top, out Color right, out Color bottom, out Color left)
	{
	}

	[Token(Token = "0x6001FD4")]
	[Address(RVA = "0x4C9A7A0", Offset = "0x4C9A7A0", VA = "0x4C9A7A0")]
	private static void CompileTextOutline(StylePropertyReader reader, out Color outlineColor, out float outlineWidth)
	{
	}

	[Token(Token = "0x6001FD5")]
	[Address(RVA = "0x4C99920", Offset = "0x4C99920", VA = "0x4C99920")]
	private static void CompileTransition(StylePropertyReader reader, out List<TimeValue> outDelay, out List<TimeValue> outDuration, out List<StylePropertyName> outProperty, out List<EasingFunction> outTimingFunction)
	{
	}
}
