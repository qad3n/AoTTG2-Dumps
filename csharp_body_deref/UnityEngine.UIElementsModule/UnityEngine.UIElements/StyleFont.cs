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

[Token(Token = "0x2000379")]
public struct StyleFont : IStyleValue<Font>, IEquatable<StyleFont>
{
	[Token(Token = "0x4000A7E")]
	[FieldOffset(Offset = "0x0")]
	private Font m_Value;

	[Token(Token = "0x4000A7F")]
	[FieldOffset(Offset = "0x8")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x1700063D")]
	public Font value
	{
		[Token(Token = "0x6001664")]
		[Address(RVA = "0x50AEDA0", Offset = "0x50AEDA0", VA = "0x50AEDA0", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001665")]
		[Address(RVA = "0x50AEDB0", Offset = "0x50AEDB0", VA = "0x50AEDB0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700063E")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001666")]
		[Address(RVA = "0x50AEDD0", Offset = "0x50AEDD0", VA = "0x50AEDD0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001667")]
		[Address(RVA = "0x50AEDE0", Offset = "0x50AEDE0", VA = "0x50AEDE0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001668")]
	[Address(RVA = "0x50AEDF0", Offset = "0x50AEDF0", VA = "0x50AEDF0")]
	public StyleFont(Font v)
	{
	}

	[Token(Token = "0x6001669")]
	[Address(RVA = "0x50AEE00", Offset = "0x50AEE00", VA = "0x50AEE00")]
	internal StyleFont(Font v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600166A")]
	[Address(RVA = "0x50AEE10", Offset = "0x50AEE10", VA = "0x50AEE10")]
	public static bool operator ==(StyleFont lhs, StyleFont rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600166B")]
	[Address(RVA = "0x50AEE90", Offset = "0x50AEE90", VA = "0x50AEE90")]
	public static implicit operator StyleFont(Font v)
	{
		return default(StyleFont);
	}

	[Token(Token = "0x600166C")]
	[Address(RVA = "0x50AEEC0", Offset = "0x50AEEC0", VA = "0x50AEEC0", Slot = "8")]
	public bool Equals(StyleFont other)
	{
		return default(bool);
	}

	[Token(Token = "0x600166D")]
	[Address(RVA = "0x50AEF40", Offset = "0x50AEF40", VA = "0x50AEF40", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600166E")]
	[Address(RVA = "0x50AEFF0", Offset = "0x50AEFF0", VA = "0x50AEFF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600166F")]
	[Address(RVA = "0x50AF070", Offset = "0x50AF070", VA = "0x50AF070", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
