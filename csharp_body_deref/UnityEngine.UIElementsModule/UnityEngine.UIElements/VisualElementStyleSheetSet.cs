using System;
using System.Reflection;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000478")]
[DefaultMember("Item")]
public struct VisualElementStyleSheetSet : IEquatable<VisualElementStyleSheetSet>
{
	[Token(Token = "0x4000D66")]
	[FieldOffset(Offset = "0x0")]
	private readonly VisualElement m_Element;

	[Token(Token = "0x6001BC3")]
	[Address(RVA = "0x4C50E10", Offset = "0x4C50E10", VA = "0x4C50E10")]
	internal VisualElementStyleSheetSet(VisualElement element)
	{
	}

	[Token(Token = "0x6001BC4")]
	[Address(RVA = "0x4C4B390", Offset = "0x4C4B390", VA = "0x4C4B390")]
	public void Add(StyleSheet styleSheet)
	{
	}

	[Token(Token = "0x6001BC5")]
	[Address(RVA = "0x4C50E20", Offset = "0x4C50E20", VA = "0x4C50E20")]
	public bool Remove(StyleSheet styleSheet)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BC6")]
	[Address(RVA = "0x4C50F60", Offset = "0x4C50F60", VA = "0x4C50F60", Slot = "4")]
	public bool Equals(VisualElementStyleSheetSet other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BC7")]
	[Address(RVA = "0x4C50F70", Offset = "0x4C50F70", VA = "0x4C50F70", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BC8")]
	[Address(RVA = "0x4C50FD0", Offset = "0x4C50FD0", VA = "0x4C50FD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
