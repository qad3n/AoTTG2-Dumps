using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000382")]
public struct StyleTransformOrigin : IStyleValue<TransformOrigin>, IEquatable<StyleTransformOrigin>
{
	[Token(Token = "0x4000A90")]
	[FieldOffset(Offset = "0x0")]
	private TransformOrigin m_Value;

	[Token(Token = "0x4000A91")]
	[FieldOffset(Offset = "0x14")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x1700064F")]
	public TransformOrigin value
	{
		[Token(Token = "0x60016DE")]
		[Address(RVA = "0x4D88DE0", Offset = "0x4D88DE0", VA = "0x4D88DE0", Slot = "4")]
		get
		{
			return default(TransformOrigin);
		}
		[Token(Token = "0x60016DF")]
		[Address(RVA = "0x4D88E30", Offset = "0x4D88E30", VA = "0x4D88E30", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000650")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x60016E0")]
		[Address(RVA = "0x4D88E50", Offset = "0x4D88E50", VA = "0x4D88E50", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x60016E1")]
		[Address(RVA = "0x4D88E60", Offset = "0x4D88E60", VA = "0x4D88E60", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x60016E2")]
	[Address(RVA = "0x4D88E70", Offset = "0x4D88E70", VA = "0x4D88E70")]
	public StyleTransformOrigin(TransformOrigin v)
	{
	}

	[Token(Token = "0x60016E3")]
	[Address(RVA = "0x4D88EB0", Offset = "0x4D88EB0", VA = "0x4D88EB0")]
	public StyleTransformOrigin(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60016E4")]
	[Address(RVA = "0x4D88E90", Offset = "0x4D88E90", VA = "0x4D88E90")]
	internal StyleTransformOrigin(TransformOrigin v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60016E5")]
	[Address(RVA = "0x4D88ED0", Offset = "0x4D88ED0", VA = "0x4D88ED0")]
	public static bool operator ==(StyleTransformOrigin lhs, StyleTransformOrigin rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60016E6")]
	[Address(RVA = "0x4D88F40", Offset = "0x4D88F40", VA = "0x4D88F40")]
	public static implicit operator StyleTransformOrigin(StyleKeyword keyword)
	{
		return default(StyleTransformOrigin);
	}

	[Token(Token = "0x60016E7")]
	[Address(RVA = "0x4D88F60", Offset = "0x4D88F60", VA = "0x4D88F60")]
	public static implicit operator StyleTransformOrigin(TransformOrigin v)
	{
		return default(StyleTransformOrigin);
	}

	[Token(Token = "0x60016E8")]
	[Address(RVA = "0x4D88F80", Offset = "0x4D88F80", VA = "0x4D88F80", Slot = "8")]
	public bool Equals(StyleTransformOrigin other)
	{
		return default(bool);
	}

	[Token(Token = "0x60016E9")]
	[Address(RVA = "0x4D89000", Offset = "0x4D89000", VA = "0x4D89000", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60016EA")]
	[Address(RVA = "0x4D890D0", Offset = "0x4D890D0", VA = "0x4D890D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60016EB")]
	[Address(RVA = "0x4D89130", Offset = "0x4D89130", VA = "0x4D89130", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
