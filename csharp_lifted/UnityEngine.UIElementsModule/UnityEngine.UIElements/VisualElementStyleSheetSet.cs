// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualElementStyleSheetSet
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000551")]
[DefaultMember("Item")]
public struct VisualElementStyleSheetSet : IEquatable<VisualElementStyleSheetSet>
{
	[Token(Token = "0x40011FE")]
	[FieldOffset(Offset = "0x0")]
	private readonly VisualElement m_Element;

	[Token(Token = "0x17000A35")]
	public int count
	{
		[Token(Token = "0x6002823")]
		[Address(RVA = "0x6B6E980", Offset = "0x6B6D980", VA = "0x6B6E980")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600281F")]
	[Address(RVA = "0x6B6E970", Offset = "0x6B6D970", VA = "0x6B6E970")]
	internal VisualElementStyleSheetSet(VisualElement element)
	{
	}

	[Token(Token = "0x6002820")]
	[Address(RVA = "0x6B5DFD0", Offset = "0x6B5CFD0", VA = "0x6B5DFD0")]
	public void Add(StyleSheet styleSheet)
	{
	}

	[Token(Token = "0x6002821")]
	[Address(RVA = "0x6B6E9D0", Offset = "0x6B6D9D0", VA = "0x6B6E9D0")]
	public void Insert(int index, StyleSheet styleSheet)
	{
	}

	[Token(Token = "0x6002822")]
	[Address(RVA = "0x6B6EB60", Offset = "0x6B6DB60", VA = "0x6B6EB60")]
	public bool Remove(StyleSheet styleSheet)
	{
		return default(bool);
	}

	[Token(Token = "0x6002824")]
	[Address(RVA = "0x6B6ECA0", Offset = "0x6B6DCA0", VA = "0x6B6ECA0", Slot = "4")]
	public bool Equals(VisualElementStyleSheetSet other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002825")]
	[Address(RVA = "0x6B6ECB0", Offset = "0x6B6DCB0", VA = "0x6B6ECB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002826")]
	[Address(RVA = "0x6B6ED10", Offset = "0x6B6DD10", VA = "0x6B6ED10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
