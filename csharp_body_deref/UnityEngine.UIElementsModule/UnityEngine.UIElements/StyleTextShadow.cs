// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleTextShadow
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000422")]
public struct StyleTextShadow : IStyleValue<TextShadow>, IEquatable<StyleTextShadow>
{
	[Token(Token = "0x4000DDA")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x4000DDB")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private TextShadow m_Value;

	[Token(Token = "0x170008E1")]
	public TextShadow value
	{
		[Token(Token = "0x60020A9")]
		[Address(RVA = "0x311BE60", Offset = "0x311A460", VA = "0x18311BE60", Slot = "4")]
		get
		{
			return default(TextShadow);
		}
		[Token(Token = "0x60020AA")]
		[Address(RVA = "0x311BE20", Offset = "0x311A420", VA = "0x18311BE20", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008E2")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x60020AB")]
		[Address(RVA = "0xD18930", Offset = "0xD16F30", VA = "0x180D18930", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x60020AC")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x60020AD")]
	[Address(RVA = "0x311BE20", Offset = "0x311A420", VA = "0x18311BE20")]
	public StyleTextShadow(TextShadow v)
	{
	}

	[Token(Token = "0x60020AE")]
	[Address(RVA = "0x311BDF0", Offset = "0x311A3F0", VA = "0x18311BDF0")]
	public StyleTextShadow(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60020AF")]
	[Address(RVA = "0x311BE40", Offset = "0x311A440", VA = "0x18311BE40")]
	internal StyleTextShadow(TextShadow v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60020B0")]
	[Address(RVA = "0x311BEA0", Offset = "0x311A4A0", VA = "0x18311BEA0")]
	public static bool operator ==(StyleTextShadow lhs, StyleTextShadow rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60020B1")]
	[Address(RVA = "0x311BF20", Offset = "0x311A520", VA = "0x18311BF20")]
	public static implicit operator StyleTextShadow(StyleKeyword keyword)
	{
		return default(StyleTextShadow);
	}

	[Token(Token = "0x60020B2")]
	[Address(RVA = "0x311BF60", Offset = "0x311A560", VA = "0x18311BF60")]
	public static implicit operator StyleTextShadow(TextShadow v)
	{
		return default(StyleTextShadow);
	}

	[Token(Token = "0x60020B3")]
	[Address(RVA = "0x311BCE0", Offset = "0x311A2E0", VA = "0x18311BCE0", Slot = "8")]
	public bool Equals(StyleTextShadow other)
	{
		return default(bool);
	}

	[Token(Token = "0x60020B4")]
	[Address(RVA = "0x311BC10", Offset = "0x311A210", VA = "0x18311BC10", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60020B5")]
	[Address(RVA = "0x311BD40", Offset = "0x311A340", VA = "0x18311BD40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60020B6")]
	[Address(RVA = "0x311BD80", Offset = "0x311A380", VA = "0x18311BD80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
