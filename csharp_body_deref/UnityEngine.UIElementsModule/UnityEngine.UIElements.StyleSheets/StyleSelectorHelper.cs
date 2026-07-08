using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x200053D")]
internal static class StyleSelectorHelper
{
	[Token(Token = "0x6002025")]
	[Address(RVA = "0x4CA46F0", Offset = "0x4CA46F0", VA = "0x4CA46F0")]
	public static MatchResultInfo MatchesSelector(VisualElement element, StyleSelector selector)
	{
		return default(MatchResultInfo);
	}

	[Token(Token = "0x6002026")]
	[Address(RVA = "0x4CA49E0", Offset = "0x4CA49E0", VA = "0x4CA49E0")]
	public static bool MatchRightToLeft(VisualElement element, StyleComplexSelector complexSelector, Action<VisualElement, MatchResultInfo> processResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6002027")]
	[Address(RVA = "0x4CA4C30", Offset = "0x4CA4C30", VA = "0x4CA4C30")]
	private static void FastLookup(IDictionary<string, StyleComplexSelector> table, List<SelectorMatchRecord> matchedSelectors, StyleMatchingContext context, string input, ref SelectorMatchRecord record)
	{
	}

	[Token(Token = "0x6002028")]
	[Address(RVA = "0x4CA4E90", Offset = "0x4CA4E90", VA = "0x4CA4E90")]
	public static void FindMatches(StyleMatchingContext context, List<SelectorMatchRecord> matchedSelectors, int parentSheetIndex)
	{
	}
}
