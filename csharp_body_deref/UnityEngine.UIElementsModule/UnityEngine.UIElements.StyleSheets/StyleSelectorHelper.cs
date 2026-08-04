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

[Token(Token = "0x200053D")]
internal static class StyleSelectorHelper
{
	[Token(Token = "0x6002025")]
	[Address(RVA = "0x4FCC020", Offset = "0x4FCC020", VA = "0x4FCC020")]
	public static MatchResultInfo MatchesSelector(VisualElement element, StyleSelector selector)
	{
		return default(MatchResultInfo);
	}

	[Token(Token = "0x6002026")]
	[Address(RVA = "0x4FCC310", Offset = "0x4FCC310", VA = "0x4FCC310")]
	public static bool MatchRightToLeft(VisualElement element, StyleComplexSelector complexSelector, Action<VisualElement, MatchResultInfo> processResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6002027")]
	[Address(RVA = "0x4FCC560", Offset = "0x4FCC560", VA = "0x4FCC560")]
	private static void FastLookup(IDictionary<string, StyleComplexSelector> table, List<SelectorMatchRecord> matchedSelectors, StyleMatchingContext context, string input, ref SelectorMatchRecord record)
	{
	}

	[Token(Token = "0x6002028")]
	[Address(RVA = "0x4FCC7C0", Offset = "0x4FCC7C0", VA = "0x4FCC7C0")]
	public static void FindMatches(StyleMatchingContext context, List<SelectorMatchRecord> matchedSelectors, int parentSheetIndex)
	{
	}
}
