// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ComputedTransitionUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x5079760", Offset = "0x5079760", VA = "0x5079760")]
	internal static void UpdateComputedTransitions(ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x6001081")]
	[Address(RVA = "0x5079970", Offset = "0x5079970", VA = "0x5079970")]
	internal static bool HasTransitionProperty(this ref ComputedStyle computedStyle, StylePropertyId id)
	{
		return default(bool);
	}

	[Token(Token = "0x6001082")]
	[Address(RVA = "0x5079A30", Offset = "0x5079A30", VA = "0x5079A30")]
	internal static bool GetTransitionProperty(this ref ComputedStyle computedStyle, StylePropertyId id, out ComputedTransitionProperty result)
	{
		return default(bool);
	}

	[Token(Token = "0x6001083")]
	[Address(RVA = "0x50797D0", Offset = "0x50797D0", VA = "0x50797D0")]
	private static ComputedTransitionProperty[] GetOrComputeTransitionPropertyData(ref ComputedStyle computedStyle)
	{
		return null;
	}

	[Token(Token = "0x6001084")]
	[Address(RVA = "0x5079B60", Offset = "0x5079B60", VA = "0x5079B60")]
	private static int GetTransitionHashCode(ref ComputedStyle cs)
	{
		return default(int);
	}

	[Token(Token = "0x6001085")]
	[Address(RVA = "0x507A410", Offset = "0x507A410", VA = "0x507A410")]
	internal static bool SameTransitionProperty(ref ComputedStyle x, ref ComputedStyle y)
	{
		return default(bool);
	}

	[Token(Token = "0x6001086")]
	[Address(RVA = "0x507A520", Offset = "0x507A520", VA = "0x507A520")]
	private static bool SameTransitionProperty(List<StylePropertyName> a, List<StylePropertyName> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6001087")]
	[Address(RVA = "0x507A5F0", Offset = "0x507A5F0", VA = "0x507A5F0")]
	private static bool SameTransitionProperty(List<TimeValue> a, List<TimeValue> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6001088")]
	[Address(RVA = "0x507A0D0", Offset = "0x507A0D0", VA = "0x507A0D0")]
	private static void ComputeTransitionPropertyData(ref ComputedStyle computedStyle, List<ComputedTransitionProperty> outData)
	{
	}

	[Token(Token = "0x6001089")]
	private static T GetWrappingTransitionData<T>(List<T> list, int i, T defaultValue)
	{
		return (T)null;
	}

	[Token(Token = "0x600108A")]
	[Address(RVA = "0x507A6B0", Offset = "0x507A6B0", VA = "0x507A6B0")]
	private static int ConvertTransitionTime(TimeValue time)
	{
		return default(int);
	}

	[Token(Token = "0x600108B")]
	[Address(RVA = "0x507A820", Offset = "0x507A820", VA = "0x507A820")]
	private static Func<float, float> ConvertTransitionFunction(EasingMode mode)
	{
		return null;
	}
}
