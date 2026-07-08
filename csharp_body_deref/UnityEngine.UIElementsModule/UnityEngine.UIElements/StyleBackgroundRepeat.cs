using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000371")]
public struct StyleBackgroundRepeat : IStyleValue<BackgroundRepeat>, IEquatable<StyleBackgroundRepeat>
{
	[Token(Token = "0x4000A6D")]
	[FieldOffset(Offset = "0x0")]
	private BackgroundRepeat m_Value;

	[Token(Token = "0x4000A6E")]
	[FieldOffset(Offset = "0x8")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x17000630")]
	public BackgroundRepeat value
	{
		[Token(Token = "0x6001609")]
		[Address(RVA = "0x4D867A0", Offset = "0x4D867A0", VA = "0x4D867A0", Slot = "4")]
		get
		{
			return default(BackgroundRepeat);
		}
		[Token(Token = "0x600160A")]
		[Address(RVA = "0x4D867B0", Offset = "0x4D867B0", VA = "0x4D867B0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000631")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x600160B")]
		[Address(RVA = "0x4D867C0", Offset = "0x4D867C0", VA = "0x4D867C0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x600160C")]
		[Address(RVA = "0x4D867D0", Offset = "0x4D867D0", VA = "0x4D867D0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x600160D")]
	[Address(RVA = "0x4D867E0", Offset = "0x4D867E0", VA = "0x4D867E0")]
	public static bool operator ==(StyleBackgroundRepeat lhs, StyleBackgroundRepeat rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600160E")]
	[Address(RVA = "0x4D86800", Offset = "0x4D86800", VA = "0x4D86800", Slot = "8")]
	public bool Equals(StyleBackgroundRepeat other)
	{
		return default(bool);
	}

	[Token(Token = "0x600160F")]
	[Address(RVA = "0x4D86820", Offset = "0x4D86820", VA = "0x4D86820", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001610")]
	[Address(RVA = "0x4D86890", Offset = "0x4D86890", VA = "0x4D86890", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001611")]
	[Address(RVA = "0x4D868B0", Offset = "0x4D868B0", VA = "0x4D868B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
