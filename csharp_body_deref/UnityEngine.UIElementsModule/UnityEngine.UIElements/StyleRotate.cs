using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200037E")]
public struct StyleRotate : IStyleValue<Rotate>, IEquatable<StyleRotate>
{
	[Token(Token = "0x4000A88")]
	[FieldOffset(Offset = "0x0")]
	private Rotate m_Value;

	[Token(Token = "0x4000A89")]
	[FieldOffset(Offset = "0x18")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x17000647")]
	public Rotate value
	{
		[Token(Token = "0x60016A6")]
		[Address(RVA = "0x4D87EA0", Offset = "0x4D87EA0", VA = "0x4D87EA0", Slot = "4")]
		get
		{
			return default(Rotate);
		}
		[Token(Token = "0x60016A7")]
		[Address(RVA = "0x4D87EF0", Offset = "0x4D87EF0", VA = "0x4D87EF0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000648")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x60016A8")]
		[Address(RVA = "0x4D87F10", Offset = "0x4D87F10", VA = "0x4D87F10", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x60016A9")]
		[Address(RVA = "0x4D87F20", Offset = "0x4D87F20", VA = "0x4D87F20", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x60016AA")]
	[Address(RVA = "0x4D87F30", Offset = "0x4D87F30", VA = "0x4D87F30")]
	public StyleRotate(Rotate v)
	{
	}

	[Token(Token = "0x60016AB")]
	[Address(RVA = "0x4D87F70", Offset = "0x4D87F70", VA = "0x4D87F70")]
	public StyleRotate(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60016AC")]
	[Address(RVA = "0x4D87F50", Offset = "0x4D87F50", VA = "0x4D87F50")]
	internal StyleRotate(Rotate v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60016AD")]
	[Address(RVA = "0x4D87F90", Offset = "0x4D87F90", VA = "0x4D87F90")]
	public static bool operator ==(StyleRotate lhs, StyleRotate rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60016AE")]
	[Address(RVA = "0x4D88060", Offset = "0x4D88060", VA = "0x4D88060")]
	public static implicit operator StyleRotate(StyleKeyword keyword)
	{
		return default(StyleRotate);
	}

	[Token(Token = "0x60016AF")]
	[Address(RVA = "0x4D88080", Offset = "0x4D88080", VA = "0x4D88080")]
	public static implicit operator StyleRotate(Rotate v)
	{
		return default(StyleRotate);
	}

	[Token(Token = "0x60016B0")]
	[Address(RVA = "0x4D880A0", Offset = "0x4D880A0", VA = "0x4D880A0", Slot = "8")]
	public bool Equals(StyleRotate other)
	{
		return default(bool);
	}

	[Token(Token = "0x60016B1")]
	[Address(RVA = "0x4D88170", Offset = "0x4D88170", VA = "0x4D88170", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60016B2")]
	[Address(RVA = "0x4D88280", Offset = "0x4D88280", VA = "0x4D88280", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60016B3")]
	[Address(RVA = "0x4D882A0", Offset = "0x4D882A0", VA = "0x4D882A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
