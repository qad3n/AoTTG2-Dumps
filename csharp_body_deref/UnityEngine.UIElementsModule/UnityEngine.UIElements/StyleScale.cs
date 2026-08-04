// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleScale
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200037F")]
public struct StyleScale : IStyleValue<Scale>, IEquatable<StyleScale>
{
	[Token(Token = "0x4000A8A")]
	[FieldOffset(Offset = "0x0")]
	private Scale m_Value;

	[Token(Token = "0x4000A8B")]
	[FieldOffset(Offset = "0x10")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x17000649")]
	public Scale value
	{
		[Token(Token = "0x60016B4")]
		[Address(RVA = "0x50AFC40", Offset = "0x50AFC40", VA = "0x50AFC40", Slot = "4")]
		get
		{
			return default(Scale);
		}
		[Token(Token = "0x60016B5")]
		[Address(RVA = "0x50AFC70", Offset = "0x50AFC70", VA = "0x50AFC70", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700064A")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x60016B6")]
		[Address(RVA = "0x50AFC80", Offset = "0x50AFC80", VA = "0x50AFC80", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x60016B7")]
		[Address(RVA = "0x50AFC90", Offset = "0x50AFC90", VA = "0x50AFC90", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x60016B8")]
	[Address(RVA = "0x50AFCA0", Offset = "0x50AFCA0", VA = "0x50AFCA0")]
	public StyleScale(Scale v)
	{
	}

	[Token(Token = "0x60016B9")]
	[Address(RVA = "0x50AFCC0", Offset = "0x50AFCC0", VA = "0x50AFCC0")]
	public StyleScale(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60016BA")]
	[Address(RVA = "0x50AFCB0", Offset = "0x50AFCB0", VA = "0x50AFCB0")]
	internal StyleScale(Scale v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60016BB")]
	[Address(RVA = "0x50AFCD0", Offset = "0x50AFCD0", VA = "0x50AFCD0")]
	public static bool operator ==(StyleScale lhs, StyleScale rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60016BC")]
	[Address(RVA = "0x50AFD40", Offset = "0x50AFD40", VA = "0x50AFD40")]
	public static implicit operator StyleScale(StyleKeyword keyword)
	{
		return default(StyleScale);
	}

	[Token(Token = "0x60016BD")]
	[Address(RVA = "0x50AFD50", Offset = "0x50AFD50", VA = "0x50AFD50")]
	public static implicit operator StyleScale(Scale v)
	{
		return default(StyleScale);
	}

	[Token(Token = "0x60016BE")]
	[Address(RVA = "0x50AFD70", Offset = "0x50AFD70", VA = "0x50AFD70", Slot = "8")]
	public bool Equals(StyleScale other)
	{
		return default(bool);
	}

	[Token(Token = "0x60016BF")]
	[Address(RVA = "0x50AFDE0", Offset = "0x50AFDE0", VA = "0x50AFDE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60016C0")]
	[Address(RVA = "0x50AFEA0", Offset = "0x50AFEA0", VA = "0x50AFEA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60016C1")]
	[Address(RVA = "0x50AFEF0", Offset = "0x50AFEF0", VA = "0x50AFEF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
