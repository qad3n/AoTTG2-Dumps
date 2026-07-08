using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000374")]
public struct StyleCursor : IStyleValue<Cursor>, IEquatable<StyleCursor>
{
	[Token(Token = "0x4000A73")]
	[FieldOffset(Offset = "0x0")]
	private Cursor m_Value;

	[Token(Token = "0x4000A74")]
	[FieldOffset(Offset = "0x18")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x17000636")]
	public Cursor value
	{
		[Token(Token = "0x600162A")]
		[Address(RVA = "0x4D86F40", Offset = "0x4D86F40", VA = "0x4D86F40", Slot = "4")]
		get
		{
			return default(Cursor);
		}
		[Token(Token = "0x600162B")]
		[Address(RVA = "0x4D86F90", Offset = "0x4D86F90", VA = "0x4D86F90", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000637")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x600162C")]
		[Address(RVA = "0x4D86FC0", Offset = "0x4D86FC0", VA = "0x4D86FC0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x600162D")]
		[Address(RVA = "0x4D86FD0", Offset = "0x4D86FD0", VA = "0x4D86FD0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x600162E")]
	[Address(RVA = "0x4D86FE0", Offset = "0x4D86FE0", VA = "0x4D86FE0")]
	public StyleCursor(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600162F")]
	[Address(RVA = "0x4D87000", Offset = "0x4D87000", VA = "0x4D87000")]
	internal StyleCursor(Cursor v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001630")]
	[Address(RVA = "0x4D87020", Offset = "0x4D87020", VA = "0x4D87020")]
	public static bool operator ==(StyleCursor lhs, StyleCursor rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001631")]
	[Address(RVA = "0x4D87070", Offset = "0x4D87070", VA = "0x4D87070")]
	public static implicit operator StyleCursor(StyleKeyword keyword)
	{
		return default(StyleCursor);
	}

	[Token(Token = "0x6001632")]
	[Address(RVA = "0x4D870D0", Offset = "0x4D870D0", VA = "0x4D870D0", Slot = "8")]
	public bool Equals(StyleCursor other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001633")]
	[Address(RVA = "0x4D87150", Offset = "0x4D87150", VA = "0x4D87150", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001634")]
	[Address(RVA = "0x4D87220", Offset = "0x4D87220", VA = "0x4D87220", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001635")]
	[Address(RVA = "0x4D87240", Offset = "0x4D87240", VA = "0x4D87240", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
