using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200040F")]
public struct UQueryBuilder<T> : IEquatable<UQueryBuilder<T>> where T : VisualElement
{
	[Token(Token = "0x4000C62")]
	[FieldOffset(Offset = "0x0")]
	private List<StyleSelector> m_StyleSelectors;

	[Token(Token = "0x4000C63")]
	[FieldOffset(Offset = "0x0")]
	private List<StyleSelectorPart> m_Parts;

	[Token(Token = "0x4000C64")]
	[FieldOffset(Offset = "0x0")]
	private VisualElement m_Element;

	[Token(Token = "0x4000C65")]
	[FieldOffset(Offset = "0x0")]
	private List<RuleMatcher> m_Matchers;

	[Token(Token = "0x4000C66")]
	[FieldOffset(Offset = "0x0")]
	private StyleSelectorRelationship m_Relationship;

	[Token(Token = "0x4000C67")]
	[FieldOffset(Offset = "0x0")]
	private int pseudoStatesMask;

	[Token(Token = "0x4000C68")]
	[FieldOffset(Offset = "0x0")]
	private int negatedPseudoStatesMask;

	[Token(Token = "0x17000706")]
	private List<StyleSelector> styleSelectors
	{
		[Token(Token = "0x6001A57")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000707")]
	private List<StyleSelectorPart> parts
	{
		[Token(Token = "0x6001A58")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001A59")]
	public UQueryBuilder(VisualElement visualElement)
	{
	}

	[Token(Token = "0x6001A5A")]
	public UQueryBuilder<T> Class(string classname)
	{
		return default(UQueryBuilder<T>);
	}

	[Token(Token = "0x6001A5B")]
	public UQueryBuilder<T> Name(string id)
	{
		return default(UQueryBuilder<T>);
	}

	[Token(Token = "0x6001A5C")]
	internal UQueryBuilder<T> SingleBaseType()
	{
		return default(UQueryBuilder<T>);
	}

	[Token(Token = "0x6001A5D")]
	private void AddClass(string c)
	{
	}

	[Token(Token = "0x6001A5E")]
	private void AddName(string id)
	{
	}

	[Token(Token = "0x6001A5F")]
	private void AddPseudoStatesRuleIfNecessasy()
	{
	}

	[Token(Token = "0x6001A60")]
	private void FinishSelector()
	{
	}

	[Token(Token = "0x6001A61")]
	private bool CurrentSelectorEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x6001A62")]
	private void FinishCurrentSelector()
	{
	}

	[Token(Token = "0x6001A63")]
	public UQueryState<T> Build()
	{
		return default(UQueryState<T>);
	}

	[Token(Token = "0x6001A64")]
	public bool Equals(UQueryBuilder<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A65")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A66")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
