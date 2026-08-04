// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleTranslate
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000380")]
public struct StyleTranslate : IStyleValue<Translate>, IEquatable<StyleTranslate>
{
	[Token(Token = "0x4000A8C")]
	[FieldOffset(Offset = "0x0")]
	private Translate m_Value;

	[Token(Token = "0x4000A8D")]
	[FieldOffset(Offset = "0x18")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x1700064B")]
	public Translate value
	{
		[Token(Token = "0x60016C2")]
		[Address(RVA = "0x50AFF60", Offset = "0x50AFF60", VA = "0x50AFF60", Slot = "4")]
		get
		{
			return default(Translate);
		}
		[Token(Token = "0x60016C3")]
		[Address(RVA = "0x50AFFB0", Offset = "0x50AFFB0", VA = "0x50AFFB0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700064C")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x60016C4")]
		[Address(RVA = "0x50AFFD0", Offset = "0x50AFFD0", VA = "0x50AFFD0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x60016C5")]
		[Address(RVA = "0x50AFFE0", Offset = "0x50AFFE0", VA = "0x50AFFE0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x60016C6")]
	[Address(RVA = "0x50AFFF0", Offset = "0x50AFFF0", VA = "0x50AFFF0")]
	public StyleTranslate(Translate v)
	{
	}

	[Token(Token = "0x60016C7")]
	[Address(RVA = "0x50B0030", Offset = "0x50B0030", VA = "0x50B0030")]
	public StyleTranslate(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60016C8")]
	[Address(RVA = "0x50B0010", Offset = "0x50B0010", VA = "0x50B0010")]
	internal StyleTranslate(Translate v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60016C9")]
	[Address(RVA = "0x50B0050", Offset = "0x50B0050", VA = "0x50B0050")]
	public static bool operator ==(StyleTranslate lhs, StyleTranslate rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60016CA")]
	[Address(RVA = "0x50B00C0", Offset = "0x50B00C0", VA = "0x50B00C0")]
	public static implicit operator StyleTranslate(StyleKeyword keyword)
	{
		return default(StyleTranslate);
	}

	[Token(Token = "0x60016CB")]
	[Address(RVA = "0x50B00E0", Offset = "0x50B00E0", VA = "0x50B00E0")]
	public static implicit operator StyleTranslate(Translate v)
	{
		return default(StyleTranslate);
	}

	[Token(Token = "0x60016CC")]
	[Address(RVA = "0x50B0100", Offset = "0x50B0100", VA = "0x50B0100", Slot = "8")]
	public bool Equals(StyleTranslate other)
	{
		return default(bool);
	}

	[Token(Token = "0x60016CD")]
	[Address(RVA = "0x50B0180", Offset = "0x50B0180", VA = "0x50B0180", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60016CE")]
	[Address(RVA = "0x50B0250", Offset = "0x50B0250", VA = "0x50B0250", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60016CF")]
	[Address(RVA = "0x50B02B0", Offset = "0x50B02B0", VA = "0x50B02B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
