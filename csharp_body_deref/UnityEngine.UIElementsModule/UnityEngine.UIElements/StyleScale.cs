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
		[Address(RVA = "0x4D88310", Offset = "0x4D88310", VA = "0x4D88310", Slot = "4")]
		get
		{
			return default(Scale);
		}
		[Token(Token = "0x60016B5")]
		[Address(RVA = "0x4D88340", Offset = "0x4D88340", VA = "0x4D88340", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700064A")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x60016B6")]
		[Address(RVA = "0x4D88350", Offset = "0x4D88350", VA = "0x4D88350", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x60016B7")]
		[Address(RVA = "0x4D88360", Offset = "0x4D88360", VA = "0x4D88360", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x60016B8")]
	[Address(RVA = "0x4D88370", Offset = "0x4D88370", VA = "0x4D88370")]
	public StyleScale(Scale v)
	{
	}

	[Token(Token = "0x60016B9")]
	[Address(RVA = "0x4D88390", Offset = "0x4D88390", VA = "0x4D88390")]
	public StyleScale(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60016BA")]
	[Address(RVA = "0x4D88380", Offset = "0x4D88380", VA = "0x4D88380")]
	internal StyleScale(Scale v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60016BB")]
	[Address(RVA = "0x4D883A0", Offset = "0x4D883A0", VA = "0x4D883A0")]
	public static bool operator ==(StyleScale lhs, StyleScale rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60016BC")]
	[Address(RVA = "0x4D88410", Offset = "0x4D88410", VA = "0x4D88410")]
	public static implicit operator StyleScale(StyleKeyword keyword)
	{
		return default(StyleScale);
	}

	[Token(Token = "0x60016BD")]
	[Address(RVA = "0x4D88420", Offset = "0x4D88420", VA = "0x4D88420")]
	public static implicit operator StyleScale(Scale v)
	{
		return default(StyleScale);
	}

	[Token(Token = "0x60016BE")]
	[Address(RVA = "0x4D88440", Offset = "0x4D88440", VA = "0x4D88440", Slot = "8")]
	public bool Equals(StyleScale other)
	{
		return default(bool);
	}

	[Token(Token = "0x60016BF")]
	[Address(RVA = "0x4D884B0", Offset = "0x4D884B0", VA = "0x4D884B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60016C0")]
	[Address(RVA = "0x4D88570", Offset = "0x4D88570", VA = "0x4D88570", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60016C1")]
	[Address(RVA = "0x4D885C0", Offset = "0x4D885C0", VA = "0x4D885C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
