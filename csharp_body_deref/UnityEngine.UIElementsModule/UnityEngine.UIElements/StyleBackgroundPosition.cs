using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000370")]
public struct StyleBackgroundPosition : IStyleValue<BackgroundPosition>, IEquatable<StyleBackgroundPosition>
{
	[Token(Token = "0x4000A6B")]
	[FieldOffset(Offset = "0x0")]
	private BackgroundPosition m_Value;

	[Token(Token = "0x4000A6C")]
	[FieldOffset(Offset = "0xC")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x1700062E")]
	public BackgroundPosition value
	{
		[Token(Token = "0x6001600")]
		[Address(RVA = "0x4D865F0", Offset = "0x4D865F0", VA = "0x4D865F0", Slot = "4")]
		get
		{
			return default(BackgroundPosition);
		}
		[Token(Token = "0x6001601")]
		[Address(RVA = "0x4D86610", Offset = "0x4D86610", VA = "0x4D86610", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700062F")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001602")]
		[Address(RVA = "0x4D86620", Offset = "0x4D86620", VA = "0x4D86620", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001603")]
		[Address(RVA = "0x4D86630", Offset = "0x4D86630", VA = "0x4D86630", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001604")]
	[Address(RVA = "0x4D86640", Offset = "0x4D86640", VA = "0x4D86640")]
	public static bool operator ==(StyleBackgroundPosition lhs, StyleBackgroundPosition rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001605")]
	[Address(RVA = "0x4D86660", Offset = "0x4D86660", VA = "0x4D86660", Slot = "8")]
	public bool Equals(StyleBackgroundPosition other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001606")]
	[Address(RVA = "0x4D86690", Offset = "0x4D86690", VA = "0x4D86690", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001607")]
	[Address(RVA = "0x4D86710", Offset = "0x4D86710", VA = "0x4D86710", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001608")]
	[Address(RVA = "0x4D86730", Offset = "0x4D86730", VA = "0x4D86730", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
