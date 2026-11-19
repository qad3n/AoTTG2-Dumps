// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleBackgroundSize
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000412")]
public struct StyleBackgroundSize : IStyleValue<BackgroundSize>, IEquatable<StyleBackgroundSize>
{
	[Token(Token = "0x4000DB9")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private BackgroundSize m_Value;

	[Token(Token = "0x4000DBA")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x170008C4")]
	public BackgroundSize value
	{
		[Token(Token = "0x6001FC9")]
		[Address(RVA = "0x6B12150", Offset = "0x6B11150", VA = "0x6B12150", Slot = "4")]
		get
		{
			return default(BackgroundSize);
		}
		[Token(Token = "0x6001FCA")]
		[Address(RVA = "0x6B12190", Offset = "0x6B11190", VA = "0x6B12190", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008C5")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001FCB")]
		[Address(RVA = "0x6B121B0", Offset = "0x6B111B0", VA = "0x6B121B0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001FCC")]
		[Address(RVA = "0x6B121C0", Offset = "0x6B111C0", VA = "0x6B121C0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001FCD")]
	[Address(RVA = "0x6B121D0", Offset = "0x6B111D0", VA = "0x6B121D0")]
	public StyleBackgroundSize(BackgroundSize v)
	{
	}

	[Token(Token = "0x6001FCE")]
	[Address(RVA = "0x6B12210", Offset = "0x6B11210", VA = "0x6B12210")]
	public StyleBackgroundSize(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FCF")]
	[Address(RVA = "0x6B121F0", Offset = "0x6B111F0", VA = "0x6B121F0")]
	internal StyleBackgroundSize(BackgroundSize v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FD0")]
	[Address(RVA = "0x6B12230", Offset = "0x6B11230", VA = "0x6B12230")]
	public static bool operator ==(StyleBackgroundSize lhs, StyleBackgroundSize rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FD1")]
	[Address(RVA = "0x6B12280", Offset = "0x6B11280", VA = "0x6B12280")]
	public static implicit operator StyleBackgroundSize(StyleKeyword keyword)
	{
		return default(StyleBackgroundSize);
	}

	[Token(Token = "0x6001FD2")]
	[Address(RVA = "0x6B122A0", Offset = "0x6B112A0", VA = "0x6B122A0")]
	public static implicit operator StyleBackgroundSize(BackgroundSize v)
	{
		return default(StyleBackgroundSize);
	}

	[Token(Token = "0x6001FD3")]
	[Address(RVA = "0x6B122C0", Offset = "0x6B112C0", VA = "0x6B122C0", Slot = "8")]
	public bool Equals(StyleBackgroundSize other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FD4")]
	[Address(RVA = "0x6B12330", Offset = "0x6B11330", VA = "0x6B12330", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FD5")]
	[Address(RVA = "0x6B12410", Offset = "0x6B11410", VA = "0x6B12410", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001FD6")]
	[Address(RVA = "0x6B12430", Offset = "0x6B11430", VA = "0x6B12430", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
