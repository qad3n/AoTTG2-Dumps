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

[Token(Token = "0x20002F7")]
internal static class ComputedTransitionUtils
{
	[Token(Token = "0x4000B80")]
	[FieldOffset(Offset = "0x0")]
	private static List<ComputedTransitionProperty> s_ComputedTransitionsBuffer;

	[Token(Token = "0x60014A0")]
	[Address(RVA = "0x6CC5990", Offset = "0x6CC4990", VA = "0x6CC5990")]
	internal static void UpdateComputedTransitions(ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x60014A1")]
	[Address(RVA = "0x6CC5BA0", Offset = "0x6CC4BA0", VA = "0x6CC5BA0")]
	internal static bool HasTransitionProperty(this ref ComputedStyle computedStyle, StylePropertyId id)
	{
		return default(bool);
	}

	[Token(Token = "0x60014A2")]
	[Address(RVA = "0x6CC5C60", Offset = "0x6CC4C60", VA = "0x6CC5C60")]
	internal static bool GetTransitionProperty(this ref ComputedStyle computedStyle, StylePropertyId id, out ComputedTransitionProperty result)
	{
		return default(bool);
	}

	[Token(Token = "0x60014A3")]
	[Address(RVA = "0x6CC5A00", Offset = "0x6CC4A00", VA = "0x6CC5A00")]
	private static ComputedTransitionProperty[] GetOrComputeTransitionPropertyData(ref ComputedStyle computedStyle)
	{
		return null;
	}

	[Token(Token = "0x60014A4")]
	[Address(RVA = "0x6CC5D70", Offset = "0x6CC4D70", VA = "0x6CC5D70")]
	private static int GetTransitionHashCode(ref ComputedStyle cs)
	{
		return default(int);
	}

	[Token(Token = "0x60014A5")]
	[Address(RVA = "0x6CC6580", Offset = "0x6CC5580", VA = "0x6CC6580")]
	internal static bool SameTransitionProperty(ref ComputedStyle x, ref ComputedStyle y)
	{
		return default(bool);
	}

	[Token(Token = "0x60014A6")]
	[Address(RVA = "0x6CC6690", Offset = "0x6CC5690", VA = "0x6CC6690")]
	private static bool SameTransitionProperty(List<StylePropertyName> a, List<StylePropertyName> b)
	{
		return default(bool);
	}

	[Token(Token = "0x60014A7")]
	[Address(RVA = "0x6CC6760", Offset = "0x6CC5760", VA = "0x6CC6760")]
	private static bool SameTransitionProperty(List<TimeValue> a, List<TimeValue> b)
	{
		return default(bool);
	}

	[Token(Token = "0x60014A8")]
	[Address(RVA = "0x6CC6280", Offset = "0x6CC5280", VA = "0x6CC6280")]
	private static void ComputeTransitionPropertyData(ref ComputedStyle computedStyle, List<ComputedTransitionProperty> outData)
	{
	}

	[Token(Token = "0x60014A9")]
	private static T GetWrappingTransitionData<T>(List<T> list, int i, T defaultValue)
	{
		return (T)null;
	}

	[Token(Token = "0x60014AA")]
	[Address(RVA = "0x6CC6820", Offset = "0x6CC5820", VA = "0x6CC6820")]
	private static int ConvertTransitionTime(TimeValue time)
	{
		return default(int);
	}

	[Token(Token = "0x60014AB")]
	[Address(RVA = "0x6CC6990", Offset = "0x6CC5990", VA = "0x6CC6990")]
	private static Func<float, float> ConvertTransitionFunction(EasingMode mode)
	{
		return null;
	}
}
