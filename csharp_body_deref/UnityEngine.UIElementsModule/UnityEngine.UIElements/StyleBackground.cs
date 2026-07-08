using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200036F")]
public struct StyleBackground : IStyleValue<Background>, IEquatable<StyleBackground>
{
	[Token(Token = "0x4000A69")]
	[FieldOffset(Offset = "0x0")]
	private Background m_Value;

	[Token(Token = "0x4000A6A")]
	[FieldOffset(Offset = "0x20")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x1700062C")]
	public Background value
	{
		[Token(Token = "0x60015F0")]
		[Address(RVA = "0x4D860D0", Offset = "0x4D860D0", VA = "0x4D860D0", Slot = "4")]
		get
		{
			return default(Background);
		}
		[Token(Token = "0x60015F1")]
		[Address(RVA = "0x4D86110", Offset = "0x4D86110", VA = "0x4D86110", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700062D")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x60015F2")]
		[Address(RVA = "0x4D86140", Offset = "0x4D86140", VA = "0x4D86140", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x60015F3")]
		[Address(RVA = "0x4D86150", Offset = "0x4D86150", VA = "0x4D86150", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x60015F4")]
	[Address(RVA = "0x4D86160", Offset = "0x4D86160", VA = "0x4D86160")]
	public StyleBackground(Texture2D v)
	{
	}

	[Token(Token = "0x60015F5")]
	[Address(RVA = "0x4D86200", Offset = "0x4D86200", VA = "0x4D86200")]
	public StyleBackground(Sprite v)
	{
	}

	[Token(Token = "0x60015F6")]
	[Address(RVA = "0x4D862A0", Offset = "0x4D862A0", VA = "0x4D862A0")]
	public StyleBackground(VectorImage v)
	{
	}

	[Token(Token = "0x60015F7")]
	[Address(RVA = "0x4D861B0", Offset = "0x4D861B0", VA = "0x4D861B0")]
	internal StyleBackground(Texture2D v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60015F8")]
	[Address(RVA = "0x4D86250", Offset = "0x4D86250", VA = "0x4D86250")]
	internal StyleBackground(Sprite v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60015F9")]
	[Address(RVA = "0x4D862F0", Offset = "0x4D862F0", VA = "0x4D862F0")]
	internal StyleBackground(VectorImage v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60015FA")]
	[Address(RVA = "0x4D86340", Offset = "0x4D86340", VA = "0x4D86340")]
	internal StyleBackground(Background v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60015FB")]
	[Address(RVA = "0x4D86360", Offset = "0x4D86360", VA = "0x4D86360")]
	public static bool operator ==(StyleBackground lhs, StyleBackground rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015FC")]
	[Address(RVA = "0x4D863B0", Offset = "0x4D863B0", VA = "0x4D863B0", Slot = "8")]
	public bool Equals(StyleBackground other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015FD")]
	[Address(RVA = "0x4D86450", Offset = "0x4D86450", VA = "0x4D86450", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015FE")]
	[Address(RVA = "0x4D86550", Offset = "0x4D86550", VA = "0x4D86550", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60015FF")]
	[Address(RVA = "0x4D86570", Offset = "0x4D86570", VA = "0x4D86570", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
