// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleEnum
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000417")]
public struct StyleEnum<T> : IStyleValue<T>, IEquatable<StyleEnum<T>> where T : struct, IConvertible
{
	[Token(Token = "0x4000DC4")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private T m_Value;

	[Token(Token = "0x4000DC5")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x170008CB")]
	public T value
	{
		[Token(Token = "0x6002004")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6002005")]
		set
		{
		}
	}

	[Token(Token = "0x170008CC")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6002006")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6002007")]
		set
		{
		}
	}

	[Token(Token = "0x6002008")]
	public StyleEnum(T v)
	{
	}

	[Token(Token = "0x6002009")]
	public StyleEnum(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600200A")]
	internal StyleEnum(T v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600200B")]
	public static bool operator ==(StyleEnum<T> lhs, StyleEnum<T> rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600200C")]
	public static bool operator !=(StyleEnum<T> lhs, StyleEnum<T> rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600200D")]
	public static implicit operator StyleEnum<T>(StyleKeyword keyword)
	{
		return default(StyleEnum<T>);
	}

	[Token(Token = "0x600200E")]
	public static implicit operator StyleEnum<T>(T v)
	{
		return default(StyleEnum<T>);
	}

	[Token(Token = "0x600200F")]
	public bool Equals(StyleEnum<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002010")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002011")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002012")]
	public override string ToString()
	{
		return null;
	}
}
