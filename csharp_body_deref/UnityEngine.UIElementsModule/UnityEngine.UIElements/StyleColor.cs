// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleColor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x50AE560", Offset = "0x50AE560", VA = "0x50AE560", Slot = "4")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600161F")]
		[Address(RVA = "0x50AE580", Offset = "0x50AE580", VA = "0x50AE580", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000635")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001620")]
		[Address(RVA = "0x50AE590", Offset = "0x50AE590", VA = "0x50AE590", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001621")]
		[Address(RVA = "0x50AE5A0", Offset = "0x50AE5A0", VA = "0x50AE5A0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001622")]
	[Address(RVA = "0x50AE5B0", Offset = "0x50AE5B0", VA = "0x50AE5B0")]
	public StyleColor(Color v)
	{
	}

	[Token(Token = "0x6001623")]
	[Address(RVA = "0x50AE5C0", Offset = "0x50AE5C0", VA = "0x50AE5C0")]
	internal StyleColor(Color v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001624")]
	[Address(RVA = "0x50AE5D0", Offset = "0x50AE5D0", VA = "0x50AE5D0")]
	public static bool operator ==(StyleColor lhs, StyleColor rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001625")]
	[Address(RVA = "0x50AE640", Offset = "0x50AE640", VA = "0x50AE640")]
	public static implicit operator StyleColor(Color v)
	{
		return default(StyleColor);
	}

	[Token(Token = "0x6001626")]
	[Address(RVA = "0x50AE660", Offset = "0x50AE660", VA = "0x50AE660", Slot = "8")]
	public bool Equals(StyleColor other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001627")]
	[Address(RVA = "0x50AE6D0", Offset = "0x50AE6D0", VA = "0x50AE6D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001628")]
	[Address(RVA = "0x50AE780", Offset = "0x50AE780", VA = "0x50AE780", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001629")]
	[Address(RVA = "0x50AE800", Offset = "0x50AE800", VA = "0x50AE800", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
