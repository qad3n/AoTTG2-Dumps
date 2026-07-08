using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000273")]
internal static class ComputedTransitionUtils
{
	[Token(Token = "0x400090F")]
	[FieldOffset(Offset = "0x0")]
	private static List<ComputedTransitionProperty> s_ComputedTransitionsBuffer;

	[Token(Token = "0x6001080")]
	[Address(RVA = "0x4D51E30", Offset = "0x4D51E30", VA = "0x4D51E30")]
	internal static void UpdateComputedTransitions(ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001081")]
	[Address(RVA = "0x4D52040", Offset = "0x4D52040", VA = "0x4D52040")]
	internal static bool HasTransitionProperty(this ref ComputedStyle computedStyle, StylePropertyId id)
	{
		return default(bool);
	}

	[Token(Token = "0x6001082")]
	[Address(RVA = "0x4D52100", Offset = "0x4D52100", VA = "0x4D52100")]
	internal static bool GetTransitionProperty(this ref ComputedStyle computedStyle, StylePropertyId id, out ComputedTransitionProperty result)
	{
		return default(bool);
	}

	[Token(Token = "0x6001083")]
	[Address(RVA = "0x4D51EA0", Offset = "0x4D51EA0", VA = "0x4D51EA0")]
	private static ComputedTransitionProperty[] GetOrComputeTransitionPropertyData(ref ComputedStyle computedStyle)
	{
		return null;
	}

	[Token(Token = "0x6001084")]
	[Address(RVA = "0x4D52230", Offset = "0x4D52230", VA = "0x4D52230")]
	private static int GetTransitionHashCode(ref ComputedStyle cs)
	{
		return default(int);
	}

	[Token(Token = "0x6001085")]
	[Address(RVA = "0x4D52AE0", Offset = "0x4D52AE0", VA = "0x4D52AE0")]
	internal static bool SameTransitionProperty(ref ComputedStyle x, ref ComputedStyle y)
	{
		return default(bool);
	}

	[Token(Token = "0x6001086")]
	[Address(RVA = "0x4D52BF0", Offset = "0x4D52BF0", VA = "0x4D52BF0")]
	private static bool SameTransitionProperty(List<StylePropertyName> a, List<StylePropertyName> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6001087")]
	[Address(RVA = "0x4D52CC0", Offset = "0x4D52CC0", VA = "0x4D52CC0")]
	private static bool SameTransitionProperty(List<TimeValue> a, List<TimeValue> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6001088")]
	[Address(RVA = "0x4D527A0", Offset = "0x4D527A0", VA = "0x4D527A0")]
	private static void ComputeTransitionPropertyData(ref ComputedStyle computedStyle, List<ComputedTransitionProperty> outData)
	{
	}

	[Token(Token = "0x6001089")]
	private static T GetWrappingTransitionData<T>(List<T> list, int i, T defaultValue)
	{
		return (T)null;
	}

	[Token(Token = "0x600108A")]
	[Address(RVA = "0x4D52D80", Offset = "0x4D52D80", VA = "0x4D52D80")]
	private static int ConvertTransitionTime(TimeValue time)
	{
		return default(int);
	}

	[Token(Token = "0x600108B")]
	[Address(RVA = "0x4D52EF0", Offset = "0x4D52EF0", VA = "0x4D52EF0")]
	private static Func<float, float> ConvertTransitionFunction(EasingMode mode)
	{
		return null;
	}
}
