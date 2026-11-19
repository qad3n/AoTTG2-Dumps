// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleColor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000413")]
public struct StyleColor : IStyleValue<Color>, IEquatable<StyleColor>
{
	[Token(Token = "0x4000DBB")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private Color m_Value;

	[Token(Token = "0x4000DBC")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x170008C6")]
	public Color value
	{
		[Token(Token = "0x6001FD7")]
		[Address(RVA = "0x6B124A0", Offset = "0x6B114A0", VA = "0x6B124A0", Slot = "4")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6001FD8")]
		[Address(RVA = "0x6B124C0", Offset = "0x6B114C0", VA = "0x6B124C0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008C7")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001FD9")]
		[Address(RVA = "0x6B124D0", Offset = "0x6B114D0", VA = "0x6B124D0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001FDA")]
		[Address(RVA = "0x6B124E0", Offset = "0x6B114E0", VA = "0x6B124E0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001FDB")]
	[Address(RVA = "0x6B124F0", Offset = "0x6B114F0", VA = "0x6B124F0")]
	public StyleColor(Color v)
	{
	}

	[Token(Token = "0x6001FDC")]
	[Address(RVA = "0x6B12500", Offset = "0x6B11500", VA = "0x6B12500")]
	public StyleColor(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FDD")]
	[Address(RVA = "0x6B0DEF0", Offset = "0x6B0CEF0", VA = "0x6B0DEF0")]
	internal StyleColor(Color v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FDE")]
	[Address(RVA = "0x6B12510", Offset = "0x6B11510", VA = "0x6B12510")]
	public static bool operator ==(StyleColor lhs, StyleColor rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FDF")]
	[Address(RVA = "0x6B0DF00", Offset = "0x6B0CF00", VA = "0x6B0DF00")]
	public static implicit operator StyleColor(StyleKeyword keyword)
	{
		return default(StyleColor);
	}

	[Token(Token = "0x6001FE0")]
	[Address(RVA = "0x6B12570", Offset = "0x6B11570", VA = "0x6B12570")]
	public static implicit operator StyleColor(Color v)
	{
		return default(StyleColor);
	}

	[Token(Token = "0x6001FE1")]
	[Address(RVA = "0x6B12590", Offset = "0x6B11590", VA = "0x6B12590", Slot = "8")]
	public bool Equals(StyleColor other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FE2")]
	[Address(RVA = "0x6B125F0", Offset = "0x6B115F0", VA = "0x6B125F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FE3")]
	[Address(RVA = "0x6B126A0", Offset = "0x6B116A0", VA = "0x6B126A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001FE4")]
	[Address(RVA = "0x6B12700", Offset = "0x6B11700", VA = "0x6B12700", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
