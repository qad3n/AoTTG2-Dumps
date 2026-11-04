// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.StyleSelectorHelper
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x1028B90", Offset = "0x1027190", VA = "0x181028B90")]
		public SelectorWorkItem(StyleSheet.OrderedSelectorType type, string input)
		{
		}
	}

	[Token(Token = "0x6002D94")]
	[Address(RVA = "0x31F5830", Offset = "0x31F3E30", VA = "0x1831F5830")]
	public static MatchResultInfo MatchesSelector(VisualElement element, StyleSelector selector)
	{
		return default(MatchResultInfo);
	}

	[Token(Token = "0x6002D95")]
	[Address(RVA = "0x31F5690", Offset = "0x31F3C90", VA = "0x1831F5690")]
	public static bool MatchRightToLeft(VisualElement element, StyleComplexSelector complexSelector, Action<VisualElement, MatchResultInfo> processResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D96")]
	[Address(RVA = "0x31F5B20", Offset = "0x31F4120", VA = "0x1831F5B20")]
	private static void TestSelectorLinkedList(StyleComplexSelector currentComplexSelector, List<SelectorMatchRecord> matchedSelectors, StyleMatchingContext context, ref SelectorMatchRecord record)
	{
	}

	[Token(Token = "0x6002D97")]
	[Address(RVA = "0x31F4B50", Offset = "0x31F3150", VA = "0x1831F4B50")]
	private static void FastLookup(IDictionary<string, StyleComplexSelector> table, List<SelectorMatchRecord> matchedSelectors, StyleMatchingContext context, string input, ref SelectorMatchRecord record)
	{
	}

	[Token(Token = "0x6002D98")]
	[Address(RVA = "0x31F4EB0", Offset = "0x31F34B0", VA = "0x1831F4EB0")]
	public static void FindMatches(StyleMatchingContext context, List<SelectorMatchRecord> matchedSelectors, int parentSheetIndex)
	{
	}
}
