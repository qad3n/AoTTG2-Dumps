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
		[Address(RVA = "0x6B142B0", Offset = "0x6B132B0", VA = "0x6B142B0", Slot = "4")]
		get
		{
			return default(Scale);
		}
		[Token(Token = "0x600209C")]
		[Address(RVA = "0x6B143A0", Offset = "0x6B133A0", VA = "0x6B143A0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008E0")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x600209D")]
		[Address(RVA = "0x6B143B0", Offset = "0x6B133B0", VA = "0x6B143B0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x600209E")]
		[Address(RVA = "0x6B143C0", Offset = "0x6B133C0", VA = "0x6B143C0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x600209F")]
	[Address(RVA = "0x6B143D0", Offset = "0x6B133D0", VA = "0x6B143D0")]
	public StyleScale(Scale v)
	{
	}

	[Token(Token = "0x60020A0")]
	[Address(RVA = "0x6B143F0", Offset = "0x6B133F0", VA = "0x6B143F0")]
	public StyleScale(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60020A1")]
	[Address(RVA = "0x6B143E0", Offset = "0x6B133E0", VA = "0x6B143E0")]
	internal StyleScale(Scale v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60020A2")]
	[Address(RVA = "0x6B14400", Offset = "0x6B13400", VA = "0x6B14400")]
	public static bool operator ==(StyleScale lhs, StyleScale rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60020A3")]
	[Address(RVA = "0x6B14470", Offset = "0x6B13470", VA = "0x6B14470")]
	public static implicit operator StyleScale(StyleKeyword keyword)
	{
		return default(StyleScale);
	}

	[Token(Token = "0x60020A4")]
	[Address(RVA = "0x6B14480", Offset = "0x6B13480", VA = "0x6B14480")]
	public static implicit operator StyleScale(Scale v)
	{
		return default(StyleScale);
	}

	[Token(Token = "0x60020A5")]
	[Address(RVA = "0x6B144A0", Offset = "0x6B134A0", VA = "0x6B144A0", Slot = "8")]
	public bool Equals(StyleScale other)
	{
		return default(bool);
	}

	[Token(Token = "0x60020A6")]
	[Address(RVA = "0x6B144F0", Offset = "0x6B134F0", VA = "0x6B144F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60020A7")]
	[Address(RVA = "0x6B14590", Offset = "0x6B13590", VA = "0x6B14590", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60020A8")]
	[Address(RVA = "0x6B145E0", Offset = "0x6B135E0", VA = "0x6B145E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
