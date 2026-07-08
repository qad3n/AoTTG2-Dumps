using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000372")]
public struct StyleBackgroundSize : IStyleValue<BackgroundSize>, IEquatable<StyleBackgroundSize>
{
	[Token(Token = "0x4000A6F")]
	[FieldOffset(Offset = "0x0")]
	private BackgroundSize m_Value;

	[Token(Token = "0x4000A70")]
	[FieldOffset(Offset = "0x14")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x17000632")]
	public BackgroundSize value
	{
		[Token(Token = "0x6001612")]
		[Address(RVA = "0x4D86920", Offset = "0x4D86920", VA = "0x4D86920", Slot = "4")]
		get
		{
			return default(BackgroundSize);
		}
		[Token(Token = "0x6001613")]
		[Address(RVA = "0x4D86970", Offset = "0x4D86970", VA = "0x4D86970", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000633")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001614")]
		[Address(RVA = "0x4D86990", Offset = "0x4D86990", VA = "0x4D86990", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001615")]
		[Address(RVA = "0x4D869A0", Offset = "0x4D869A0", VA = "0x4D869A0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001616")]
	[Address(RVA = "0x4D869B0", Offset = "0x4D869B0", VA = "0x4D869B0")]
	public StyleBackgroundSize(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001617")]
	[Address(RVA = "0x4D869D0", Offset = "0x4D869D0", VA = "0x4D869D0")]
	internal StyleBackgroundSize(BackgroundSize v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001618")]
	[Address(RVA = "0x4D869F0", Offset = "0x4D869F0", VA = "0x4D869F0")]
	public static bool operator ==(StyleBackgroundSize lhs, StyleBackgroundSize rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001619")]
	[Address(RVA = "0x4D86A40", Offset = "0x4D86A40", VA = "0x4D86A40")]
	public static implicit operator StyleBackgroundSize(StyleKeyword keyword)
	{
		return default(StyleBackgroundSize);
	}

	[Token(Token = "0x600161A")]
	[Address(RVA = "0x4D86A60", Offset = "0x4D86A60", VA = "0x4D86A60", Slot = "8")]
	public bool Equals(StyleBackgroundSize other)
	{
		return default(bool);
	}

	[Token(Token = "0x600161B")]
	[Address(RVA = "0x4D86AD0", Offset = "0x4D86AD0", VA = "0x4D86AD0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600161C")]
	[Address(RVA = "0x4D86BA0", Offset = "0x4D86BA0", VA = "0x4D86BA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600161D")]
	[Address(RVA = "0x4D86BC0", Offset = "0x4D86BC0", VA = "0x4D86BC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
