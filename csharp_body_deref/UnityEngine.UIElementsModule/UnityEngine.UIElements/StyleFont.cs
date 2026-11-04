// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleFont
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000419")]
public struct StyleFont : IStyleValue<Font>, IEquatable<StyleFont>
{
	[Token(Token = "0x4000DC8")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private Font m_Value;

	[Token(Token = "0x4000DC9")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x170008CF")]
	public Font value
	{
		[Token(Token = "0x6002021")]
		[Address(RVA = "0x3111860", Offset = "0x310FE60", VA = "0x183111860", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002022")]
		[Address(RVA = "0x1C522C0", Offset = "0x1C508C0", VA = "0x181C522C0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008D0")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6002023")]
		[Address(RVA = "0xA50840", Offset = "0xA4EE40", VA = "0x180A50840", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6002024")]
		[Address(RVA = "0x57AF20", Offset = "0x579520", VA = "0x18057AF20", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6002025")]
	[Address(RVA = "0x3113EC0", Offset = "0x31124C0", VA = "0x183113EC0")]
	public StyleFont(Font v)
	{
	}

	[Token(Token = "0x6002026")]
	[Address(RVA = "0x1A221F0", Offset = "0x1A207F0", VA = "0x181A221F0")]
	public StyleFont(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002027")]
	[Address(RVA = "0x3113EB0", Offset = "0x31124B0", VA = "0x183113EB0")]
	internal StyleFont(Font v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002028")]
	[Address(RVA = "0x3113ED0", Offset = "0x31124D0", VA = "0x183113ED0")]
	public static bool operator ==(StyleFont lhs, StyleFont rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002029")]
	[Address(RVA = "0x3113F40", Offset = "0x3112540", VA = "0x183113F40")]
	public static implicit operator StyleFont(StyleKeyword keyword)
	{
		return default(StyleFont);
	}

	[Token(Token = "0x600202A")]
	[Address(RVA = "0x3113F80", Offset = "0x3112580", VA = "0x183113F80")]
	public static implicit operator StyleFont(Font v)
	{
		return default(StyleFont);
	}

	[Token(Token = "0x600202B")]
	[Address(RVA = "0x3113D40", Offset = "0x3112340", VA = "0x183113D40", Slot = "8")]
	public bool Equals(StyleFont other)
	{
		return default(bool);
	}

	[Token(Token = "0x600202C")]
	[Address(RVA = "0x3113C30", Offset = "0x3112230", VA = "0x183113C30", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600202D")]
	[Address(RVA = "0x3113DC0", Offset = "0x31123C0", VA = "0x183113DC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600202E")]
	[Address(RVA = "0x3113E50", Offset = "0x3112450", VA = "0x183113E50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
