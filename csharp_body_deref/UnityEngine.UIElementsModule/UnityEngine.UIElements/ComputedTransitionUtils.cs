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
	[Address(RVA = "0x32AC8B0", Offset = "0x32AAEB0", VA = "0x1832AC8B0")]
	internal static void UpdateComputedTransitions(ref ComputedStyle computedStyle)
	{
	}

	[Token(Token = "0x60014A1")]
	[Address(RVA = "0x32AC3C0", Offset = "0x32AA9C0", VA = "0x1832AC3C0")]
	internal static bool HasTransitionProperty(this ref ComputedStyle computedStyle, StylePropertyId id)
	{
		return default(bool);
	}

	[Token(Token = "0x60014A2")]
	[Address(RVA = "0x32AC2B0", Offset = "0x32AA8B0", VA = "0x1832AC2B0")]
	internal static bool GetTransitionProperty(this ref ComputedStyle computedStyle, StylePropertyId id, out ComputedTransitionProperty result)
	{
		return default(bool);
	}

	[Token(Token = "0x60014A3")]
	[Address(RVA = "0x32ABC70", Offset = "0x32AA270", VA = "0x1832ABC70")]
	private static ComputedTransitionProperty[] GetOrComputeTransitionPropertyData(ref ComputedStyle computedStyle)
	{
		return null;
	}

	[Token(Token = "0x60014A4")]
	[Address(RVA = "0x32ABE30", Offset = "0x32AA430", VA = "0x1832ABE30")]
	private static int GetTransitionHashCode(ref ComputedStyle cs)
	{
		return default(int);
	}

	[Token(Token = "0x60014A5")]
	[Address(RVA = "0x32AC5B0", Offset = "0x32AABB0", VA = "0x1832AC5B0")]
	internal static bool SameTransitionProperty(ref ComputedStyle x, ref ComputedStyle y)
	{
		return default(bool);
	}

	[Token(Token = "0x60014A6")]
	[Address(RVA = "0x32AC480", Offset = "0x32AAA80", VA = "0x1832AC480")]
	private static bool SameTransitionProperty(List<StylePropertyName> a, List<StylePropertyName> b)
	{
		return default(bool);
	}

	[Token(Token = "0x60014A7")]
	[Address(RVA = "0x32AC7B0", Offset = "0x32AADB0", VA = "0x1832AC7B0")]
	private static bool SameTransitionProperty(List<TimeValue> a, List<TimeValue> b)
	{
		return default(bool);
	}

	[Token(Token = "0x60014A8")]
	[Address(RVA = "0x32AA8E0", Offset = "0x32A8EE0", VA = "0x1832AA8E0")]
	private static void ComputeTransitionPropertyData(ref ComputedStyle computedStyle, List<ComputedTransitionProperty> outData)
	{
	}

	[Token(Token = "0x60014A9")]
	private static T GetWrappingTransitionData<T>(List<T> list, int i, T defaultValue)
	{
		return (T)null;
	}

	[Token(Token = "0x60014AA")]
	[Address(RVA = "0x32ABC40", Offset = "0x32AA240", VA = "0x1832ABC40")]
	private static int ConvertTransitionTime(TimeValue time)
	{
		return default(int);
	}

	[Token(Token = "0x60014AB")]
	[Address(RVA = "0x32AAC30", Offset = "0x32A9230", VA = "0x1832AAC30")]
	private static Func<float, float> ConvertTransitionFunction(EasingMode mode)
	{
		return null;
	}
}
