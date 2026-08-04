// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleMatchingContext
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
		[Address(RVA = "0x4F7B590", Offset = "0x4F7B590", VA = "0x4F7B590")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001BF9")]
	[Address(RVA = "0x4F7B5D0", Offset = "0x4F7B5D0", VA = "0x4F7B5D0")]
	public StyleMatchingContext(Action<VisualElement, MatchResultInfo> processResult)
	{
	}

	[Token(Token = "0x6001BFA")]
	[Address(RVA = "0x4F7B6F0", Offset = "0x4F7B6F0", VA = "0x4F7B6F0")]
	public void AddStyleSheet(StyleSheet sheet)
	{
	}

	[Token(Token = "0x6001BFB")]
	[Address(RVA = "0x4F7B7C0", Offset = "0x4F7B7C0", VA = "0x4F7B7C0")]
	public void RemoveStyleSheetRange(int index, int count)
	{
	}

	[Token(Token = "0x6001BFC")]
	[Address(RVA = "0x4F7B810", Offset = "0x4F7B810", VA = "0x4F7B810")]
	public StyleSheet GetStyleSheetAt(int index)
	{
		return null;
	}
}
