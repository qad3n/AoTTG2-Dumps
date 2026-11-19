// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleTranslate
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000424")]
public struct StyleTranslate : IStyleValue<Translate>, IEquatable<StyleTranslate>
{
	[Token(Token = "0x4000DDE")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private Translate m_Value;

	[Token(Token = "0x4000DDF")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x170008E5")]
	public Translate value
	{
		[Token(Token = "0x60020C5")]
		[Address(RVA = "0x6B14E90", Offset = "0x6B13E90", VA = "0x6B14E90", Slot = "4")]
		get
		{
			return default(Translate);
		}
		[Token(Token = "0x60020C6")]
		[Address(RVA = "0x6B14F80", Offset = "0x6B13F80", VA = "0x6B14F80", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008E6")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x60020C7")]
		[Address(RVA = "0x6B14FA0", Offset = "0x6B13FA0", VA = "0x6B14FA0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x60020C8")]
		[Address(RVA = "0x6B14FB0", Offset = "0x6B13FB0", VA = "0x6B14FB0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x60020C9")]
	[Address(RVA = "0x6B14FC0", Offset = "0x6B13FC0", VA = "0x6B14FC0")]
	public StyleTranslate(Translate v)
	{
	}

	[Token(Token = "0x60020CA")]
	[Address(RVA = "0x6B15000", Offset = "0x6B14000", VA = "0x6B15000")]
	public StyleTranslate(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60020CB")]
	[Address(RVA = "0x6B14FE0", Offset = "0x6B13FE0", VA = "0x6B14FE0")]
	internal StyleTranslate(Translate v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60020CC")]
	[Address(RVA = "0x6B15020", Offset = "0x6B14020", VA = "0x6B15020")]
	public static bool operator ==(StyleTranslate lhs, StyleTranslate rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60020CD")]
	[Address(RVA = "0x6B150E0", Offset = "0x6B140E0", VA = "0x6B150E0")]
	public static implicit operator StyleTranslate(StyleKeyword keyword)
	{
		return default(StyleTranslate);
	}

	[Token(Token = "0x60020CE")]
	[Address(RVA = "0x6B15100", Offset = "0x6B14100", VA = "0x6B15100")]
	public static implicit operator StyleTranslate(Translate v)
	{
		return default(StyleTranslate);
	}

	[Token(Token = "0x60020CF")]
	[Address(RVA = "0x6B15120", Offset = "0x6B14120", VA = "0x6B15120")]
	public static implicit operator StyleTranslate(Vector3 v)
	{
		return default(StyleTranslate);
	}

	[Token(Token = "0x60020D0")]
	[Address(RVA = "0x6B151B0", Offset = "0x6B141B0", VA = "0x6B151B0", Slot = "8")]
	public bool Equals(StyleTranslate other)
	{
		return default(bool);
	}

	[Token(Token = "0x60020D1")]
	[Address(RVA = "0x6B15220", Offset = "0x6B14220", VA = "0x6B15220", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60020D2")]
	[Address(RVA = "0x6B152E0", Offset = "0x6B142E0", VA = "0x6B152E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60020D3")]
	[Address(RVA = "0x6B153A0", Offset = "0x6B143A0", VA = "0x6B153A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
