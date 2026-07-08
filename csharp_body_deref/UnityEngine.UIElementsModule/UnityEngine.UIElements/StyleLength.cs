using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200037C")]
public struct StyleLength : IStyleValue<Length>, IEquatable<StyleLength>
{
	[Token(Token = "0x4000A84")]
	[FieldOffset(Offset = "0x0")]
	private Length m_Value;

	[Token(Token = "0x4000A85")]
	[FieldOffset(Offset = "0x8")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x17000643")]
	public Length value
	{
		[Token(Token = "0x600168A")]
		[Address(RVA = "0x4D87BB0", Offset = "0x4D87BB0", VA = "0x4D87BB0", Slot = "4")]
		get
		{
			return default(Length);
		}
		[Token(Token = "0x600168B")]
		[Address(RVA = "0x4D87BD0", Offset = "0x4D87BD0", VA = "0x4D87BD0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000644")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x600168C")]
		[Address(RVA = "0x4D87C10", Offset = "0x4D87C10", VA = "0x4D87C10", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x600168D")]
		[Address(RVA = "0x4D87C20", Offset = "0x4D87C20", VA = "0x4D87C20", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x600168E")]
	[Address(RVA = "0x4D87C60", Offset = "0x4D87C60", VA = "0x4D87C60")]
	public StyleLength(float v)
	{
	}

	[Token(Token = "0x600168F")]
	[Address(RVA = "0x4D87CA0", Offset = "0x4D87CA0", VA = "0x4D87CA0")]
	public StyleLength(Length v)
	{
	}

	[Token(Token = "0x6001690")]
	[Address(RVA = "0x4D87CC0", Offset = "0x4D87CC0", VA = "0x4D87CC0")]
	public StyleLength(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001691")]
	[Address(RVA = "0x4D84B50", Offset = "0x4D84B50", VA = "0x4D84B50")]
	internal StyleLength(Length v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001692")]
	[Address(RVA = "0x4D87CD0", Offset = "0x4D87CD0", VA = "0x4D87CD0")]
	public static bool operator ==(StyleLength lhs, StyleLength rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001693")]
	[Address(RVA = "0x4D84B70", Offset = "0x4D84B70", VA = "0x4D84B70")]
	public static implicit operator StyleLength(StyleKeyword keyword)
	{
		return default(StyleLength);
	}

	[Token(Token = "0x6001694")]
	[Address(RVA = "0x4D87D00", Offset = "0x4D87D00", VA = "0x4D87D00")]
	public static implicit operator StyleLength(float v)
	{
		return default(StyleLength);
	}

	[Token(Token = "0x6001695")]
	[Address(RVA = "0x4D87D30", Offset = "0x4D87D30", VA = "0x4D87D30")]
	public static implicit operator StyleLength(Length v)
	{
		return default(StyleLength);
	}

	[Token(Token = "0x6001696")]
	[Address(RVA = "0x4D87D50", Offset = "0x4D87D50", VA = "0x4D87D50", Slot = "8")]
	public bool Equals(StyleLength other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001697")]
	[Address(RVA = "0x4D87D80", Offset = "0x4D87D80", VA = "0x4D87D80", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001698")]
	[Address(RVA = "0x4D87E10", Offset = "0x4D87E10", VA = "0x4D87E10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001699")]
	[Address(RVA = "0x4D87E30", Offset = "0x4D87E30", VA = "0x4D87E30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
