// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleBackground
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x200040F")]
public struct StyleBackground : IStyleValue<Background>, IEquatable<StyleBackground>
{
	[Token(Token = "0x4000DB3")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private Background m_Value;

	[Token(Token = "0x4000DB4")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x170008BE")]
	public Background value
	{
		[Token(Token = "0x6001F9B")]
		[Address(RVA = "0x6B119E0", Offset = "0x6B109E0", VA = "0x6B119E0", Slot = "4")]
		get
		{
			return default(Background);
		}
		[Token(Token = "0x6001F9C")]
		[Address(RVA = "0x6B11A20", Offset = "0x6B10A20", VA = "0x6B11A20", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008BF")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001F9D")]
		[Address(RVA = "0x6B11A50", Offset = "0x6B10A50", VA = "0x6B11A50", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001F9E")]
		[Address(RVA = "0x6B11A60", Offset = "0x6B10A60", VA = "0x6B11A60", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001F9F")]
	[Address(RVA = "0x6B11A70", Offset = "0x6B10A70", VA = "0x6B11A70")]
	public StyleBackground(Background v)
	{
	}

	[Token(Token = "0x6001FA0")]
	[Address(RVA = "0x6B11AB0", Offset = "0x6B10AB0", VA = "0x6B11AB0")]
	public StyleBackground(Texture2D v)
	{
	}

	[Token(Token = "0x6001FA1")]
	[Address(RVA = "0x6B11AF0", Offset = "0x6B10AF0", VA = "0x6B11AF0")]
	public StyleBackground(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FA2")]
	[Address(RVA = "0x6B0E1F0", Offset = "0x6B0D1F0", VA = "0x6B0E1F0")]
	internal StyleBackground(Texture2D v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FA3")]
	[Address(RVA = "0x6B0E230", Offset = "0x6B0D230", VA = "0x6B0E230")]
	internal StyleBackground(Sprite v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FA4")]
	[Address(RVA = "0x6B0E270", Offset = "0x6B0D270", VA = "0x6B0E270")]
	internal StyleBackground(VectorImage v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FA5")]
	[Address(RVA = "0x6B11A90", Offset = "0x6B10A90", VA = "0x6B11A90")]
	internal StyleBackground(Background v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FA6")]
	[Address(RVA = "0x6B11B10", Offset = "0x6B10B10", VA = "0x6B11B10")]
	public static bool operator ==(StyleBackground lhs, StyleBackground rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FA7")]
	[Address(RVA = "0x6B0E2B0", Offset = "0x6B0D2B0", VA = "0x6B0E2B0")]
	public static implicit operator StyleBackground(StyleKeyword keyword)
	{
		return default(StyleBackground);
	}

	[Token(Token = "0x6001FA8")]
	[Address(RVA = "0x6B11B60", Offset = "0x6B10B60", VA = "0x6B11B60")]
	public static implicit operator StyleBackground(Background v)
	{
		return default(StyleBackground);
	}

	[Token(Token = "0x6001FA9")]
	[Address(RVA = "0x6B11BB0", Offset = "0x6B10BB0", VA = "0x6B11BB0", Slot = "8")]
	public bool Equals(StyleBackground other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FAA")]
	[Address(RVA = "0x6B11C50", Offset = "0x6B10C50", VA = "0x6B11C50", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FAB")]
	[Address(RVA = "0x6B11D00", Offset = "0x6B10D00", VA = "0x6B11D00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001FAC")]
	[Address(RVA = "0x6B11D20", Offset = "0x6B10D20", VA = "0x6B11D20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
