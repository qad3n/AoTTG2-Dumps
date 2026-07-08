using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000377")]
public struct StyleEnum<T> : IStyleValue<T>, IEquatable<StyleEnum<T>> where T : struct, IConvertible
{
	[Token(Token = "0x4000A7A")]
	[FieldOffset(Offset = "0x0")]
	private T m_Value;

	[Token(Token = "0x4000A7B")]
	[FieldOffset(Offset = "0x0")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x17000639")]
	public T value
	{
		[Token(Token = "0x6001647")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6001648")]
		set
		{
		}
	}

	[Token(Token = "0x1700063A")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001649")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x600164A")]
		set
		{
		}
	}

	[Token(Token = "0x600164B")]
	public StyleEnum(T v)
	{
	}

	[Token(Token = "0x600164C")]
	public StyleEnum(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600164D")]
	internal StyleEnum(T v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600164E")]
	public static bool operator ==(StyleEnum<T> lhs, StyleEnum<T> rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600164F")]
	public static bool operator !=(StyleEnum<T> lhs, StyleEnum<T> rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001650")]
	public static implicit operator StyleEnum<T>(StyleKeyword keyword)
	{
		return default(StyleEnum<T>);
	}

	[Token(Token = "0x6001651")]
	public static implicit operator StyleEnum<T>(T v)
	{
		return default(StyleEnum<T>);
	}

	[Token(Token = "0x6001652")]
	public bool Equals(StyleEnum<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001653")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001654")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001655")]
	public override string ToString()
	{
		return null;
	}
}
