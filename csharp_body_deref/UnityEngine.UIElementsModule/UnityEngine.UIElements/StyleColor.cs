using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000373")]
public struct StyleColor : IStyleValue<Color>, IEquatable<StyleColor>
{
	[Token(Token = "0x4000A71")]
	[FieldOffset(Offset = "0x0")]
	private Color m_Value;

	[Token(Token = "0x4000A72")]
	[FieldOffset(Offset = "0x10")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x17000634")]
	public Color value
	{
		[Token(Token = "0x600161E")]
		[Address(RVA = "0x4D86C30", Offset = "0x4D86C30", VA = "0x4D86C30", Slot = "4")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600161F")]
		[Address(RVA = "0x4D86C50", Offset = "0x4D86C50", VA = "0x4D86C50", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000635")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001620")]
		[Address(RVA = "0x4D86C60", Offset = "0x4D86C60", VA = "0x4D86C60", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001621")]
		[Address(RVA = "0x4D86C70", Offset = "0x4D86C70", VA = "0x4D86C70", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001622")]
	[Address(RVA = "0x4D86C80", Offset = "0x4D86C80", VA = "0x4D86C80")]
	public StyleColor(Color v)
	{
	}

	[Token(Token = "0x6001623")]
	[Address(RVA = "0x4D86C90", Offset = "0x4D86C90", VA = "0x4D86C90")]
	internal StyleColor(Color v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001624")]
	[Address(RVA = "0x4D86CA0", Offset = "0x4D86CA0", VA = "0x4D86CA0")]
	public static bool operator ==(StyleColor lhs, StyleColor rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001625")]
	[Address(RVA = "0x4D86D10", Offset = "0x4D86D10", VA = "0x4D86D10")]
	public static implicit operator StyleColor(Color v)
	{
		return default(StyleColor);
	}

	[Token(Token = "0x6001626")]
	[Address(RVA = "0x4D86D30", Offset = "0x4D86D30", VA = "0x4D86D30", Slot = "8")]
	public bool Equals(StyleColor other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001627")]
	[Address(RVA = "0x4D86DA0", Offset = "0x4D86DA0", VA = "0x4D86DA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001628")]
	[Address(RVA = "0x4D86E50", Offset = "0x4D86E50", VA = "0x4D86E50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001629")]
	[Address(RVA = "0x4D86ED0", Offset = "0x4D86ED0", VA = "0x4D86ED0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
