// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleList
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x200041D")]
public struct StyleList<T> : IStyleValue<List<T>>, IEquatable<StyleList<T>>
{
	[Token(Token = "0x4000DD0")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x4000DD1")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private List<T> m_Value;

	[Token(Token = "0x170008D7")]
	public List<T> value
	{
		[Token(Token = "0x600205E")]
		get
		{
			return null;
		}
		[Token(Token = "0x600205F")]
		set
		{
		}
	}

	[Token(Token = "0x170008D8")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6002060")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6002061")]
		set
		{
		}
	}

	[Token(Token = "0x6002062")]
	public StyleList(List<T> v)
	{
	}

	[Token(Token = "0x6002063")]
	public StyleList(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002064")]
	internal StyleList(List<T> v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002065")]
	public static bool operator ==(StyleList<T> lhs, StyleList<T> rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002066")]
	public static implicit operator StyleList<T>(StyleKeyword keyword)
	{
		return default(StyleList<T>);
	}

	[Token(Token = "0x6002067")]
	public static implicit operator StyleList<T>(List<T> v)
	{
		return default(StyleList<T>);
	}

	[Token(Token = "0x6002068")]
	public bool Equals(StyleList<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002069")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600206A")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600206B")]
	public override string ToString()
	{
		return null;
	}
}
