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
		[Address(RVA = "0x4D889F0", Offset = "0x4D889F0", VA = "0x4D889F0", Slot = "4")]
		get
		{
			return default(TextShadow);
		}
		[Token(Token = "0x60016D1")]
		[Address(RVA = "0x4D88A30", Offset = "0x4D88A30", VA = "0x4D88A30", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700064E")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x60016D2")]
		[Address(RVA = "0x4D88A50", Offset = "0x4D88A50", VA = "0x4D88A50", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x60016D3")]
		[Address(RVA = "0x4D88A60", Offset = "0x4D88A60", VA = "0x4D88A60", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x60016D4")]
	[Address(RVA = "0x4D88A70", Offset = "0x4D88A70", VA = "0x4D88A70")]
	public StyleTextShadow(TextShadow v)
	{
	}

	[Token(Token = "0x60016D5")]
	[Address(RVA = "0x4D88AB0", Offset = "0x4D88AB0", VA = "0x4D88AB0")]
	public StyleTextShadow(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60016D6")]
	[Address(RVA = "0x4D88A90", Offset = "0x4D88A90", VA = "0x4D88A90")]
	internal StyleTextShadow(TextShadow v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60016D7")]
	[Address(RVA = "0x4D88AC0", Offset = "0x4D88AC0", VA = "0x4D88AC0")]
	public static bool operator ==(StyleTextShadow lhs, StyleTextShadow rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60016D8")]
	[Address(RVA = "0x4D88B80", Offset = "0x4D88B80", VA = "0x4D88B80")]
	public static implicit operator StyleTextShadow(StyleKeyword keyword)
	{
		return default(StyleTextShadow);
	}

	[Token(Token = "0x60016D9")]
	[Address(RVA = "0x4D88BA0", Offset = "0x4D88BA0", VA = "0x4D88BA0")]
	public static implicit operator StyleTextShadow(TextShadow v)
	{
		return default(StyleTextShadow);
	}

	[Token(Token = "0x60016DA")]
	[Address(RVA = "0x4D88BC0", Offset = "0x4D88BC0", VA = "0x4D88BC0", Slot = "8")]
	public bool Equals(StyleTextShadow other)
	{
		return default(bool);
	}

	[Token(Token = "0x60016DB")]
	[Address(RVA = "0x4D88C40", Offset = "0x4D88C40", VA = "0x4D88C40", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60016DC")]
	[Address(RVA = "0x4D88D30", Offset = "0x4D88D30", VA = "0x4D88D30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60016DD")]
	[Address(RVA = "0x4D88D70", Offset = "0x4D88D70", VA = "0x4D88D70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
