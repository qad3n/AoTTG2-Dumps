// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleCache
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x200055B")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal static class StyleCache
{
	[Token(Token = "0x4001226")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<long, ComputedStyle> s_ComputedStyleCache;

	[Token(Token = "0x4001227")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<int, StyleVariableContext> s_StyleVariableContextCache;

	[Token(Token = "0x4001228")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<int, ComputedTransitionProperty[]> s_ComputedTransitionsCache;

	[Token(Token = "0x6002857")]
	[Address(RVA = "0x6B72700", Offset = "0x6B71700", VA = "0x6B72700")]
	public static bool TryGetValue(long hash, out ComputedStyle data)
	{
		return default(bool);
	}

	[Token(Token = "0x6002858")]
	[Address(RVA = "0x6B727A0", Offset = "0x6B717A0", VA = "0x6B727A0")]
	public static void SetValue(long hash, ref ComputedStyle data)
	{
	}

	[Token(Token = "0x6002859")]
	[Address(RVA = "0x6B728F0", Offset = "0x6B718F0", VA = "0x6B728F0")]
	public static bool TryGetValue(int hash, out StyleVariableContext data)
	{
		return default(bool);
	}

	[Token(Token = "0x600285A")]
	[Address(RVA = "0x6B72990", Offset = "0x6B71990", VA = "0x6B72990")]
	public static void SetValue(int hash, StyleVariableContext data)
	{
	}

	[Token(Token = "0x600285B")]
	[Address(RVA = "0x6B72A30", Offset = "0x6B71A30", VA = "0x6B72A30")]
	public static bool TryGetValue(int hash, out ComputedTransitionProperty[] data)
	{
		return default(bool);
	}

	[Token(Token = "0x600285C")]
	[Address(RVA = "0x6B72AD0", Offset = "0x6B71AD0", VA = "0x6B72AD0")]
	public static void SetValue(int hash, ComputedTransitionProperty[] data)
	{
	}

	[Token(Token = "0x600285D")]
	[Address(RVA = "0x6B72B70", Offset = "0x6B71B70", VA = "0x6B72B70")]
	public static void ClearStyleCache()
	{
	}
}
