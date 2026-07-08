using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000380")]
public struct StyleTranslate : IStyleValue<Translate>, IEquatable<StyleTranslate>
{
	[Token(Token = "0x4000A8C")]
	[FieldOffset(Offset = "0x0")]
	private Translate m_Value;

	[Token(Token = "0x4000A8D")]
	[FieldOffset(Offset = "0x18")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x1700064B")]
	public Translate value
	{
		[Token(Token = "0x60016C2")]
		[Address(RVA = "0x4D88630", Offset = "0x4D88630", VA = "0x4D88630", Slot = "4")]
		get
		{
			return default(Translate);
		}
		[Token(Token = "0x60016C3")]
		[Address(RVA = "0x4D88680", Offset = "0x4D88680", VA = "0x4D88680", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700064C")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x60016C4")]
		[Address(RVA = "0x4D886A0", Offset = "0x4D886A0", VA = "0x4D886A0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x60016C5")]
		[Address(RVA = "0x4D886B0", Offset = "0x4D886B0", VA = "0x4D886B0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x60016C6")]
	[Address(RVA = "0x4D886C0", Offset = "0x4D886C0", VA = "0x4D886C0")]
	public StyleTranslate(Translate v)
	{
	}

	[Token(Token = "0x60016C7")]
	[Address(RVA = "0x4D88700", Offset = "0x4D88700", VA = "0x4D88700")]
	public StyleTranslate(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60016C8")]
	[Address(RVA = "0x4D886E0", Offset = "0x4D886E0", VA = "0x4D886E0")]
	internal StyleTranslate(Translate v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60016C9")]
	[Address(RVA = "0x4D88720", Offset = "0x4D88720", VA = "0x4D88720")]
	public static bool operator ==(StyleTranslate lhs, StyleTranslate rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60016CA")]
	[Address(RVA = "0x4D88790", Offset = "0x4D88790", VA = "0x4D88790")]
	public static implicit operator StyleTranslate(StyleKeyword keyword)
	{
		return default(StyleTranslate);
	}

	[Token(Token = "0x60016CB")]
	[Address(RVA = "0x4D887B0", Offset = "0x4D887B0", VA = "0x4D887B0")]
	public static implicit operator StyleTranslate(Translate v)
	{
		return default(StyleTranslate);
	}

	[Token(Token = "0x60016CC")]
	[Address(RVA = "0x4D887D0", Offset = "0x4D887D0", VA = "0x4D887D0", Slot = "8")]
	public bool Equals(StyleTranslate other)
	{
		return default(bool);
	}

	[Token(Token = "0x60016CD")]
	[Address(RVA = "0x4D88850", Offset = "0x4D88850", VA = "0x4D88850", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60016CE")]
	[Address(RVA = "0x4D88920", Offset = "0x4D88920", VA = "0x4D88920", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60016CF")]
	[Address(RVA = "0x4D88980", Offset = "0x4D88980", VA = "0x4D88980", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
