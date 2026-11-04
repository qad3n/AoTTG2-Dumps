// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleScale
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000421")]
public struct StyleScale : IStyleValue<Scale>, IEquatable<StyleScale>
{
	[Token(Token = "0x4000DD8")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private Scale m_Value;

	[Token(Token = "0x4000DD9")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x170008DF")]
	public Scale value
	{
		[Token(Token = "0x600209B")]
		[Address(RVA = "0x31181A0", Offset = "0x31167A0", VA = "0x1831181A0", Slot = "4")]
		get
		{
			return default(Scale);
		}
		[Token(Token = "0x600209C")]
		[Address(RVA = "0x1AB4580", Offset = "0x1AB2B80", VA = "0x181AB4580", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008E0")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x600209D")]
		[Address(RVA = "0x1CBB700", Offset = "0x1CB9D00", VA = "0x181CBB700", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x600209E")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x600209F")]
	[Address(RVA = "0x1AB4580", Offset = "0x1AB2B80", VA = "0x181AB4580")]
	public StyleScale(Scale v)
	{
	}

	[Token(Token = "0x60020A0")]
	[Address(RVA = "0x3118190", Offset = "0x3116790", VA = "0x183118190")]
	public StyleScale(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60020A1")]
	[Address(RVA = "0x1028C90", Offset = "0x1027290", VA = "0x181028C90")]
	internal StyleScale(Scale v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60020A2")]
	[Address(RVA = "0x31182F0", Offset = "0x31168F0", VA = "0x1831182F0")]
	public static bool operator ==(StyleScale lhs, StyleScale rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60020A3")]
	[Address(RVA = "0x3112360", Offset = "0x3110960", VA = "0x183112360")]
	public static implicit operator StyleScale(StyleKeyword keyword)
	{
		return default(StyleScale);
	}

	[Token(Token = "0x60020A4")]
	[Address(RVA = "0x3112370", Offset = "0x3110970", VA = "0x183112370")]
	public static implicit operator StyleScale(Scale v)
	{
		return default(StyleScale);
	}

	[Token(Token = "0x60020A5")]
	[Address(RVA = "0x3117F80", Offset = "0x3116580", VA = "0x183117F80", Slot = "8")]
	public bool Equals(StyleScale other)
	{
		return default(bool);
	}

	[Token(Token = "0x60020A6")]
	[Address(RVA = "0x3117FE0", Offset = "0x31165E0", VA = "0x183117FE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60020A7")]
	[Address(RVA = "0x31180C0", Offset = "0x31166C0", VA = "0x1831180C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60020A8")]
	[Address(RVA = "0x3118120", Offset = "0x3116720", VA = "0x183118120", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
