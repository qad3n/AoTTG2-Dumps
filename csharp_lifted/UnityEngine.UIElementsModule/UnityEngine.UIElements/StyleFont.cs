// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleFont
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6B12CB0", Offset = "0x6B11CB0", VA = "0x6B12CB0", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002022")]
		[Address(RVA = "0x6B12CC0", Offset = "0x6B11CC0", VA = "0x6B12CC0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008D0")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6002023")]
		[Address(RVA = "0x6B12CE0", Offset = "0x6B11CE0", VA = "0x6B12CE0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6002024")]
		[Address(RVA = "0x6B12CF0", Offset = "0x6B11CF0", VA = "0x6B12CF0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6002025")]
	[Address(RVA = "0x6B12D00", Offset = "0x6B11D00", VA = "0x6B12D00")]
	public StyleFont(Font v)
	{
	}

	[Token(Token = "0x6002026")]
	[Address(RVA = "0x6B12D10", Offset = "0x6B11D10", VA = "0x6B12D10")]
	public StyleFont(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002027")]
	[Address(RVA = "0x6B0E490", Offset = "0x6B0D490", VA = "0x6B0E490")]
	internal StyleFont(Font v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002028")]
	[Address(RVA = "0x6B12D30", Offset = "0x6B11D30", VA = "0x6B12D30")]
	public static bool operator ==(StyleFont lhs, StyleFont rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002029")]
	[Address(RVA = "0x6B0E4A0", Offset = "0x6B0D4A0", VA = "0x6B0E4A0")]
	public static implicit operator StyleFont(StyleKeyword keyword)
	{
		return default(StyleFont);
	}

	[Token(Token = "0x600202A")]
	[Address(RVA = "0x6B12DB0", Offset = "0x6B11DB0", VA = "0x6B12DB0")]
	public static implicit operator StyleFont(Font v)
	{
		return default(StyleFont);
	}

	[Token(Token = "0x600202B")]
	[Address(RVA = "0x6B12DE0", Offset = "0x6B11DE0", VA = "0x6B12DE0", Slot = "8")]
	public bool Equals(StyleFont other)
	{
		return default(bool);
	}

	[Token(Token = "0x600202C")]
	[Address(RVA = "0x6B12E60", Offset = "0x6B11E60", VA = "0x6B12E60", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600202D")]
	[Address(RVA = "0x6B12F10", Offset = "0x6B11F10", VA = "0x6B12F10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600202E")]
	[Address(RVA = "0x6B12F90", Offset = "0x6B11F90", VA = "0x6B12F90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
