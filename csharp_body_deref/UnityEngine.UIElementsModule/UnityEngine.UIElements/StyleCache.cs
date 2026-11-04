// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleCache
// Update status: CHANGED in this game update
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
	[Address(RVA = "0x315DFE0", Offset = "0x315C5E0", VA = "0x18315DFE0")]
	public static bool TryGetValue(long hash, out ComputedStyle data)
	{
		return default(bool);
	}

	[Token(Token = "0x6002858")]
	[Address(RVA = "0x315DC50", Offset = "0x315C250", VA = "0x18315DC50")]
	public static void SetValue(long hash, ref ComputedStyle data)
	{
	}

	[Token(Token = "0x6002859")]
	[Address(RVA = "0x315DEC0", Offset = "0x315C4C0", VA = "0x18315DEC0")]
	public static bool TryGetValue(int hash, out StyleVariableContext data)
	{
		return default(bool);
	}

	[Token(Token = "0x600285A")]
	[Address(RVA = "0x315DDA0", Offset = "0x315C3A0", VA = "0x18315DDA0")]
	public static void SetValue(int hash, StyleVariableContext data)
	{
	}

	[Token(Token = "0x600285B")]
	[Address(RVA = "0x315DF50", Offset = "0x315C550", VA = "0x18315DF50")]
	public static bool TryGetValue(int hash, out ComputedTransitionProperty[] data)
	{
		return default(bool);
	}

	[Token(Token = "0x600285C")]
	[Address(RVA = "0x315DE30", Offset = "0x315C430", VA = "0x18315DE30")]
	public static void SetValue(int hash, ComputedTransitionProperty[] data)
	{
	}

	[Token(Token = "0x600285D")]
	[Address(RVA = "0x315D980", Offset = "0x315BF80", VA = "0x18315D980")]
	public static void ClearStyleCache()
	{
	}
}
