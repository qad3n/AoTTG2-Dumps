// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleCache
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000480")]
internal static class StyleCache
{
	[Token(Token = "0x4000D84")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<long, ComputedStyle> s_ComputedStyleCache;

	[Token(Token = "0x4000D85")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<int, StyleVariableContext> s_StyleVariableContextCache;

	[Token(Token = "0x4000D86")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<int, ComputedTransitionProperty[]> s_ComputedTransitionsCache;

	[Token(Token = "0x6001BE8")]
	[Address(RVA = "0x4F7A0F0", Offset = "0x4F7A0F0", VA = "0x4F7A0F0")]
	public static bool TryGetValue(long hash, out ComputedStyle data)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BE9")]
	[Address(RVA = "0x4F7A190", Offset = "0x4F7A190", VA = "0x4F7A190")]
	public static void SetValue(long hash, ref ComputedStyle data)
	{
	}

	[Token(Token = "0x6001BEA")]
	[Address(RVA = "0x4F7A290", Offset = "0x4F7A290", VA = "0x4F7A290")]
	public static bool TryGetValue(int hash, out StyleVariableContext data)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BEB")]
	[Address(RVA = "0x4F7A330", Offset = "0x4F7A330", VA = "0x4F7A330")]
	public static void SetValue(int hash, StyleVariableContext data)
	{
	}

	[Token(Token = "0x6001BEC")]
	[Address(RVA = "0x4F7A3D0", Offset = "0x4F7A3D0", VA = "0x4F7A3D0")]
	public static bool TryGetValue(int hash, out ComputedTransitionProperty[] data)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BED")]
	[Address(RVA = "0x4F7A470", Offset = "0x4F7A470", VA = "0x4F7A470")]
	public static void SetValue(int hash, ComputedTransitionProperty[] data)
	{
	}
}
