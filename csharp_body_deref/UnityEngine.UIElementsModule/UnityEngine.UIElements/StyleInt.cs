using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200037B")]
public struct StyleInt : IStyleValue<int>, IEquatable<StyleInt>
{
	[Token(Token = "0x4000A82")]
	[FieldOffset(Offset = "0x0")]
	private int m_Value;

	[Token(Token = "0x4000A83")]
	[FieldOffset(Offset = "0x4")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x17000641")]
	public int value
	{
		[Token(Token = "0x600167E")]
		[Address(RVA = "0x4D87A30", Offset = "0x4D87A30", VA = "0x4D87A30", Slot = "4")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600167F")]
		[Address(RVA = "0x4D87A40", Offset = "0x4D87A40", VA = "0x4D87A40", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000642")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001680")]
		[Address(RVA = "0x4D87A50", Offset = "0x4D87A50", VA = "0x4D87A50", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001681")]
		[Address(RVA = "0x4D87A60", Offset = "0x4D87A60", VA = "0x4D87A60", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001682")]
	[Address(RVA = "0x4D87A70", Offset = "0x4D87A70", VA = "0x4D87A70")]
	public StyleInt(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001683")]
	[Address(RVA = "0x4D84C40", Offset = "0x4D84C40", VA = "0x4D84C40")]
	internal StyleInt(int v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001684")]
	[Address(RVA = "0x4D87A80", Offset = "0x4D87A80", VA = "0x4D87A80")]
	public static bool operator ==(StyleInt lhs, StyleInt rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001685")]
	[Address(RVA = "0x4D84C50", Offset = "0x4D84C50", VA = "0x4D84C50")]
	public static implicit operator StyleInt(StyleKeyword keyword)
	{
		return default(StyleInt);
	}

	[Token(Token = "0x6001686")]
	[Address(RVA = "0x4D87AA0", Offset = "0x4D87AA0", VA = "0x4D87AA0", Slot = "8")]
	public bool Equals(StyleInt other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001687")]
	[Address(RVA = "0x4D87AC0", Offset = "0x4D87AC0", VA = "0x4D87AC0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001688")]
	[Address(RVA = "0x4D87B30", Offset = "0x4D87B30", VA = "0x4D87B30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001689")]
	[Address(RVA = "0x4D87B40", Offset = "0x4D87B40", VA = "0x4D87B40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
