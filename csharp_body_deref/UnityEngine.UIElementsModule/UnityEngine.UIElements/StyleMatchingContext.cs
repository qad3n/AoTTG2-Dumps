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
using UnityEngine.Bindings;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Token(Token = "0x200055D")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal class StyleMatchingContext
{
	[Token(Token = "0x4001232")]
	[FieldOffset(Offset = "0x10")]
	private List<StyleSheet> m_StyleSheetStack;

	[Token(Token = "0x4001233")]
	[FieldOffset(Offset = "0x18")]
	public StyleVariableContext variableContext;

	[Token(Token = "0x4001234")]
	[FieldOffset(Offset = "0x20")]
	public VisualElement currentElement;

	[Token(Token = "0x4001235")]
	[FieldOffset(Offset = "0x28")]
	public Action<VisualElement, MatchResultInfo> processResult;

	[Token(Token = "0x4001236")]
	[FieldOffset(Offset = "0x30")]
	public AncestorFilter ancestorFilter;

	[Token(Token = "0x17000A3C")]
	public int styleSheetCount
	{
		[Token(Token = "0x6002868")]
		[Address(RVA = "0x315E490", Offset = "0x315CA90", VA = "0x18315E490")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002869")]
	[Address(RVA = "0x315E370", Offset = "0x315C970", VA = "0x18315E370")]
	public StyleMatchingContext(Action<VisualElement, MatchResultInfo> processResult)
	{
	}

	[Token(Token = "0x600286A")]
	[Address(RVA = "0x315E1C0", Offset = "0x315C7C0", VA = "0x18315E1C0")]
	public void AddStyleSheet(StyleSheet sheet)
	{
	}

	[Token(Token = "0x600286B")]
	[Address(RVA = "0x315E300", Offset = "0x315C900", VA = "0x18315E300")]
	public void RemoveStyleSheetRange(int index, int count)
	{
	}

	[Token(Token = "0x600286C")]
	[Address(RVA = "0x315E2A0", Offset = "0x315C8A0", VA = "0x18315E2A0")]
	public StyleSheet GetStyleSheetAt(int index)
	{
		return null;
	}
}
