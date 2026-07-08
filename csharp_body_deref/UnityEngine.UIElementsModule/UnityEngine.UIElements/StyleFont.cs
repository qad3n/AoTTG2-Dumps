using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000379")]
public struct StyleFont : IStyleValue<Font>, IEquatable<StyleFont>
{
	[Token(Token = "0x4000A7E")]
	[FieldOffset(Offset = "0x0")]
	private Font m_Value;

	[Token(Token = "0x4000A7F")]
	[FieldOffset(Offset = "0x8")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x1700063D")]
	public Font value
	{
		[Token(Token = "0x6001664")]
		[Address(RVA = "0x4D87470", Offset = "0x4D87470", VA = "0x4D87470", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001665")]
		[Address(RVA = "0x4D87480", Offset = "0x4D87480", VA = "0x4D87480", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700063E")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001666")]
		[Address(RVA = "0x4D874A0", Offset = "0x4D874A0", VA = "0x4D874A0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001667")]
		[Address(RVA = "0x4D874B0", Offset = "0x4D874B0", VA = "0x4D874B0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001668")]
	[Address(RVA = "0x4D874C0", Offset = "0x4D874C0", VA = "0x4D874C0")]
	public StyleFont(Font v)
	{
	}

	[Token(Token = "0x6001669")]
	[Address(RVA = "0x4D874D0", Offset = "0x4D874D0", VA = "0x4D874D0")]
	internal StyleFont(Font v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600166A")]
	[Address(RVA = "0x4D874E0", Offset = "0x4D874E0", VA = "0x4D874E0")]
	public static bool operator ==(StyleFont lhs, StyleFont rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600166B")]
	[Address(RVA = "0x4D87560", Offset = "0x4D87560", VA = "0x4D87560")]
	public static implicit operator StyleFont(Font v)
	{
		return default(StyleFont);
	}

	[Token(Token = "0x600166C")]
	[Address(RVA = "0x4D87590", Offset = "0x4D87590", VA = "0x4D87590", Slot = "8")]
	public bool Equals(StyleFont other)
	{
		return default(bool);
	}

	[Token(Token = "0x600166D")]
	[Address(RVA = "0x4D87610", Offset = "0x4D87610", VA = "0x4D87610", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600166E")]
	[Address(RVA = "0x4D876C0", Offset = "0x4D876C0", VA = "0x4D876C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600166F")]
	[Address(RVA = "0x4D87740", Offset = "0x4D87740", VA = "0x4D87740", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
