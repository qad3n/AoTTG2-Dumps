using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000482")]
internal class StyleMatchingContext
{
	[Token(Token = "0x4000D90")]
	[FieldOffset(Offset = "0x10")]
	private List<StyleSheet> m_StyleSheetStack;

	[Token(Token = "0x4000D91")]
	[FieldOffset(Offset = "0x18")]
	public StyleVariableContext variableContext;

	[Token(Token = "0x4000D92")]
	[FieldOffset(Offset = "0x20")]
	public VisualElement currentElement;

	[Token(Token = "0x4000D93")]
	[FieldOffset(Offset = "0x28")]
	public Action<VisualElement, MatchResultInfo> processResult;

	[Token(Token = "0x4000D94")]
	[FieldOffset(Offset = "0x30")]
	public AncestorFilter ancestorFilter;

	[Token(Token = "0x17000754")]
	public int styleSheetCount
	{
		[Token(Token = "0x6001BF8")]
		[Address(RVA = "0x4C53C60", Offset = "0x4C53C60", VA = "0x4C53C60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001BF9")]
	[Address(RVA = "0x4C53CA0", Offset = "0x4C53CA0", VA = "0x4C53CA0")]
	public StyleMatchingContext(Action<VisualElement, MatchResultInfo> processResult)
	{
	}

	[Token(Token = "0x6001BFA")]
	[Address(RVA = "0x4C53DC0", Offset = "0x4C53DC0", VA = "0x4C53DC0")]
	public void AddStyleSheet(StyleSheet sheet)
	{
	}

	[Token(Token = "0x6001BFB")]
	[Address(RVA = "0x4C53E90", Offset = "0x4C53E90", VA = "0x4C53E90")]
	public void RemoveStyleSheetRange(int index, int count)
	{
	}

	[Token(Token = "0x6001BFC")]
	[Address(RVA = "0x4C53EE0", Offset = "0x4C53EE0", VA = "0x4C53EE0")]
	public StyleSheet GetStyleSheetAt(int index)
	{
		return null;
	}
}
