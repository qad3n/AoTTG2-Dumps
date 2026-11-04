// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UQueryBuilder
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20004D6")]
public struct UQueryBuilder<T> : IEquatable<UQueryBuilder<T>> where T : VisualElement
{
	[Token(Token = "0x40010AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private List<StyleSelector> m_StyleSelectors;

	[Token(Token = "0x40010AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private List<StyleSelectorPart> m_Parts;

	[Token(Token = "0x40010AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private VisualElement m_Element;

	[Token(Token = "0x40010AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private List<RuleMatcher> m_Matchers;

	[Token(Token = "0x40010B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private StyleSelectorRelationship m_Relationship;

	[Token(Token = "0x40010B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private int pseudoStatesMask;

	[Token(Token = "0x40010B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private int negatedPseudoStatesMask;

	[Token(Token = "0x170009D4")]
	private List<StyleSelector> styleSelectors
	{
		[Token(Token = "0x6002610")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009D5")]
	private List<StyleSelectorPart> parts
	{
		[Token(Token = "0x6002611")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002612")]
	public UQueryBuilder(VisualElement visualElement)
	{
	}

	[Token(Token = "0x6002613")]
	public UQueryBuilder<T> Class(string classname)
	{
		return default(UQueryBuilder<T>);
	}

	[Token(Token = "0x6002614")]
	public UQueryBuilder<T> Name(string id)
	{
		return default(UQueryBuilder<T>);
	}

	[Token(Token = "0x6002615")]
	public UQueryBuilder<T2> OfType<T2>([Optional] string name, params string[] classes) where T2 : VisualElement
	{
		return default(UQueryBuilder<T2>);
	}

	[Token(Token = "0x6002616")]
	public UQueryBuilder<T2> OfType<T2>([Optional] string name, [Optional] string className) where T2 : VisualElement
	{
		return default(UQueryBuilder<T2>);
	}

	[Token(Token = "0x6002617")]
	internal UQueryBuilder<T> SingleBaseType()
	{
		return default(UQueryBuilder<T>);
	}

	[Token(Token = "0x6002618")]
	private void AddClass(string c)
	{
	}

	[Token(Token = "0x6002619")]
	private void AddClasses(params string[] classes)
	{
	}

	[Token(Token = "0x600261A")]
	private void AddName(string id)
	{
	}

	[Token(Token = "0x600261B")]
	private void AddType<T2>() where T2 : VisualElement
	{
	}

	[Token(Token = "0x600261C")]
	private UQueryBuilder<T2> AddRelationship<T2>(StyleSelectorRelationship relationship) where T2 : VisualElement
	{
		return default(UQueryBuilder<T2>);
	}

	[Token(Token = "0x600261D")]
	private void AddPseudoStatesRuleIfNecessasy()
	{
	}

	[Token(Token = "0x600261E")]
	private void FinishSelector()
	{
	}

	[Token(Token = "0x600261F")]
	private bool CurrentSelectorEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x6002620")]
	private void FinishCurrentSelector()
	{
	}

	[Token(Token = "0x6002621")]
	public UQueryState<T> Build()
	{
		return default(UQueryState<T>);
	}

	[Token(Token = "0x6002622")]
	public List<T> ToList()
	{
		return null;
	}

	[Token(Token = "0x6002623")]
	public void ForEach(Action<T> funcCall)
	{
	}

	[Token(Token = "0x6002624")]
	public bool Equals(UQueryBuilder<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002625")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002626")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
