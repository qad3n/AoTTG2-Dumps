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

[Token(Token = "0x2000381")]
public struct StyleTextShadow : IStyleValue<TextShadow>, IEquatable<StyleTextShadow>
{
	[Token(Token = "0x4000A8E")]
	[FieldOffset(Offset = "0x0")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x4000A8F")]
	[FieldOffset(Offset = "0x4")]
	private TextShadow m_Value;

	[Token(Token = "0x1700064D")]
	public TextShadow value
	{
		[Token(Token = "0x60016D0")]
		[Address(RVA = "0x50B0320", Offset = "0x50B0320", VA = "0x50B0320", Slot = "4")]
		get
		{
			return default(TextShadow);
		}
		[Token(Token = "0x60016D1")]
		[Address(RVA = "0x50B0360", Offset = "0x50B0360", VA = "0x50B0360", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700064E")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x60016D2")]
		[Address(RVA = "0x50B0380", Offset = "0x50B0380", VA = "0x50B0380", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x60016D3")]
		[Address(RVA = "0x50B0390", Offset = "0x50B0390", VA = "0x50B0390", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x60016D4")]
	[Address(RVA = "0x50B03A0", Offset = "0x50B03A0", VA = "0x50B03A0")]
	public StyleTextShadow(TextShadow v)
	{
	}

	[Token(Token = "0x60016D5")]
	[Address(RVA = "0x50B03E0", Offset = "0x50B03E0", VA = "0x50B03E0")]
	public StyleTextShadow(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60016D6")]
	[Address(RVA = "0x50B03C0", Offset = "0x50B03C0", VA = "0x50B03C0")]
	internal StyleTextShadow(TextShadow v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60016D7")]
	[Address(RVA = "0x50B03F0", Offset = "0x50B03F0", VA = "0x50B03F0")]
	public static bool operator ==(StyleTextShadow lhs, StyleTextShadow rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60016D8")]
	[Address(RVA = "0x50B04B0", Offset = "0x50B04B0", VA = "0x50B04B0")]
	public static implicit operator StyleTextShadow(StyleKeyword keyword)
	{
		return default(StyleTextShadow);
	}

	[Token(Token = "0x60016D9")]
	[Address(RVA = "0x50B04D0", Offset = "0x50B04D0", VA = "0x50B04D0")]
	public static implicit operator StyleTextShadow(TextShadow v)
	{
		return default(StyleTextShadow);
	}

	[Token(Token = "0x60016DA")]
	[Address(RVA = "0x50B04F0", Offset = "0x50B04F0", VA = "0x50B04F0", Slot = "8")]
	public bool Equals(StyleTextShadow other)
	{
		return default(bool);
	}

	[Token(Token = "0x60016DB")]
	[Address(RVA = "0x50B0570", Offset = "0x50B0570", VA = "0x50B0570", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60016DC")]
	[Address(RVA = "0x50B0660", Offset = "0x50B0660", VA = "0x50B0660", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60016DD")]
	[Address(RVA = "0x50B06A0", Offset = "0x50B06A0", VA = "0x50B06A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
