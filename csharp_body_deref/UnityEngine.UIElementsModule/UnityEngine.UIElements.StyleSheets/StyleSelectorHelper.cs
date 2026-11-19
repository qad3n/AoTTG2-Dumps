// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.StyleSelectorHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x2000635")]
internal static class StyleSelectorHelper
{
	[Token(Token = "0x2000636")]
	private struct SelectorWorkItem
	{
		[Token(Token = "0x40017C3")]
		[FieldOffset(Offset = "0x0")]
		public StyleSheet.OrderedSelectorType type;

		[Token(Token = "0x40017C4")]
		[FieldOffset(Offset = "0x8")]
		public string input;

		[Token(Token = "0x6002D99")]
		[Address(RVA = "0x6BF68E0", Offset = "0x6BF58E0", VA = "0x6BF68E0")]
		public SelectorWorkItem(StyleSheet.OrderedSelectorType type, string input)
		{
		}
	}

	[Token(Token = "0x6002D94")]
	[Address(RVA = "0x6BF58D0", Offset = "0x6BF48D0", VA = "0x6BF58D0")]
	public static MatchResultInfo MatchesSelector(VisualElement element, StyleSelector selector)
	{
		return default(MatchResultInfo);
	}

	[Token(Token = "0x6002D95")]
	[Address(RVA = "0x6BF5BC0", Offset = "0x6BF4BC0", VA = "0x6BF5BC0")]
	public static bool MatchRightToLeft(VisualElement element, StyleComplexSelector complexSelector, Action<VisualElement, MatchResultInfo> processResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D96")]
	[Address(RVA = "0x6BF5DE0", Offset = "0x6BF4DE0", VA = "0x6BF5DE0")]
	private static void TestSelectorLinkedList(StyleComplexSelector currentComplexSelector, List<SelectorMatchRecord> matchedSelectors, StyleMatchingContext context, ref SelectorMatchRecord record)
	{
	}

	[Token(Token = "0x6002D97")]
	[Address(RVA = "0x6BF5FD0", Offset = "0x6BF4FD0", VA = "0x6BF5FD0")]
	private static void FastLookup(IDictionary<string, StyleComplexSelector> table, List<SelectorMatchRecord> matchedSelectors, StyleMatchingContext context, string input, ref SelectorMatchRecord record)
	{
	}

	[Token(Token = "0x6002D98")]
	[Address(RVA = "0x6BF60C0", Offset = "0x6BF50C0", VA = "0x6BF60C0")]
	public static void FindMatches(StyleMatchingContext context, List<SelectorMatchRecord> matchedSelectors, int parentSheetIndex)
	{
	}
}
