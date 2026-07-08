using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000378")]
public struct StyleFloat : IStyleValue<float>, IEquatable<StyleFloat>
{
	[Token(Token = "0x4000A7C")]
	[FieldOffset(Offset = "0x0")]
	private float m_Value;

	[Token(Token = "0x4000A7D")]
	[FieldOffset(Offset = "0x4")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x1700063B")]
	public float value
	{
		[Token(Token = "0x6001656")]
		[Address(RVA = "0x4D872B0", Offset = "0x4D872B0", VA = "0x4D872B0", Slot = "4")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001657")]
		[Address(RVA = "0x4D872C0", Offset = "0x4D872C0", VA = "0x4D872C0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700063C")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001658")]
		[Address(RVA = "0x4D872D0", Offset = "0x4D872D0", VA = "0x4D872D0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001659")]
		[Address(RVA = "0x4D872E0", Offset = "0x4D872E0", VA = "0x4D872E0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x600165A")]
	[Address(RVA = "0x4D872F0", Offset = "0x4D872F0", VA = "0x4D872F0")]
	public StyleFloat(float v)
	{
	}

	[Token(Token = "0x600165B")]
	[Address(RVA = "0x4D87300", Offset = "0x4D87300", VA = "0x4D87300")]
	public StyleFloat(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600165C")]
	[Address(RVA = "0x4D84BD0", Offset = "0x4D84BD0", VA = "0x4D84BD0")]
	internal StyleFloat(float v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600165D")]
	[Address(RVA = "0x4D87310", Offset = "0x4D87310", VA = "0x4D87310")]
	public static bool operator ==(StyleFloat lhs, StyleFloat rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600165E")]
	[Address(RVA = "0x4D84BE0", Offset = "0x4D84BE0", VA = "0x4D84BE0")]
	public static implicit operator StyleFloat(StyleKeyword keyword)
	{
		return default(StyleFloat);
	}

	[Token(Token = "0x600165F")]
	[Address(RVA = "0x4D87340", Offset = "0x4D87340", VA = "0x4D87340")]
	public static implicit operator StyleFloat(float v)
	{
		return default(StyleFloat);
	}

	[Token(Token = "0x6001660")]
	[Address(RVA = "0x4D87350", Offset = "0x4D87350", VA = "0x4D87350", Slot = "8")]
	public bool Equals(StyleFloat other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001661")]
	[Address(RVA = "0x4D87370", Offset = "0x4D87370", VA = "0x4D87370", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001662")]
	[Address(RVA = "0x4D873E0", Offset = "0x4D873E0", VA = "0x4D873E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001663")]
	[Address(RVA = "0x4D87400", Offset = "0x4D87400", VA = "0x4D87400", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
