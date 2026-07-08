using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200037D")]
public struct StyleList<T> : IStyleValue<List<T>>, IEquatable<StyleList<T>>
{
	[Token(Token = "0x4000A86")]
	[FieldOffset(Offset = "0x0")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x4000A87")]
	[FieldOffset(Offset = "0x0")]
	private List<T> m_Value;

	[Token(Token = "0x17000645")]
	public List<T> value
	{
		[Token(Token = "0x600169A")]
		get
		{
			return null;
		}
		[Token(Token = "0x600169B")]
		set
		{
		}
	}

	[Token(Token = "0x17000646")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x600169C")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x600169D")]
		set
		{
		}
	}

	[Token(Token = "0x600169E")]
	public StyleList(List<T> v)
	{
	}

	[Token(Token = "0x600169F")]
	internal StyleList(List<T> v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60016A0")]
	public static bool operator ==(StyleList<T> lhs, StyleList<T> rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60016A1")]
	public static implicit operator StyleList<T>(List<T> v)
	{
		return default(StyleList<T>);
	}

	[Token(Token = "0x60016A2")]
	public bool Equals(StyleList<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x60016A3")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60016A4")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60016A5")]
	public override string ToString()
	{
		return null;
	}
}
