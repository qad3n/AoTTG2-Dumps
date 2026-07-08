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
	[Address(RVA = "0x4C527C0", Offset = "0x4C527C0", VA = "0x4C527C0")]
	public static bool TryGetValue(long hash, out ComputedStyle data)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BE9")]
	[Address(RVA = "0x4C52860", Offset = "0x4C52860", VA = "0x4C52860")]
	public static void SetValue(long hash, ref ComputedStyle data)
	{
	}

	[Token(Token = "0x6001BEA")]
	[Address(RVA = "0x4C52960", Offset = "0x4C52960", VA = "0x4C52960")]
	public static bool TryGetValue(int hash, out StyleVariableContext data)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BEB")]
	[Address(RVA = "0x4C52A00", Offset = "0x4C52A00", VA = "0x4C52A00")]
	public static void SetValue(int hash, StyleVariableContext data)
	{
	}

	[Token(Token = "0x6001BEC")]
	[Address(RVA = "0x4C52AA0", Offset = "0x4C52AA0", VA = "0x4C52AA0")]
	public static bool TryGetValue(int hash, out ComputedTransitionProperty[] data)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BED")]
	[Address(RVA = "0x4C52B40", Offset = "0x4C52B40", VA = "0x4C52B40")]
	public static void SetValue(int hash, ComputedTransitionProperty[] data)
	{
	}
}
