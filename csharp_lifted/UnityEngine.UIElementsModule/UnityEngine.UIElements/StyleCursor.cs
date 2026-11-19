// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleCursor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000414")]
public struct StyleCursor : IStyleValue<Cursor>, IEquatable<StyleCursor>
{
	[Token(Token = "0x4000DBD")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private Cursor m_Value;

	[Token(Token = "0x4000DBE")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x170008C8")]
	public Cursor value
	{
		[Token(Token = "0x6001FE5")]
		[Address(RVA = "0x6B12770", Offset = "0x6B11770", VA = "0x6B12770", Slot = "4")]
		get
		{
			return default(Cursor);
		}
		[Token(Token = "0x6001FE6")]
		[Address(RVA = "0x6B127B0", Offset = "0x6B117B0", VA = "0x6B127B0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008C9")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001FE7")]
		[Address(RVA = "0x6B127E0", Offset = "0x6B117E0", VA = "0x6B127E0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001FE8")]
		[Address(RVA = "0x6B127F0", Offset = "0x6B117F0", VA = "0x6B127F0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001FE9")]
	[Address(RVA = "0x6B12800", Offset = "0x6B11800", VA = "0x6B12800")]
	public StyleCursor(Cursor v)
	{
	}

	[Token(Token = "0x6001FEA")]
	[Address(RVA = "0x6B12840", Offset = "0x6B11840", VA = "0x6B12840")]
	public StyleCursor(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FEB")]
	[Address(RVA = "0x6B12820", Offset = "0x6B11820", VA = "0x6B12820")]
	internal StyleCursor(Cursor v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FEC")]
	[Address(RVA = "0x6B12860", Offset = "0x6B11860", VA = "0x6B12860")]
	public static bool operator ==(StyleCursor lhs, StyleCursor rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FED")]
	[Address(RVA = "0x6B128B0", Offset = "0x6B118B0", VA = "0x6B128B0")]
	public static implicit operator StyleCursor(StyleKeyword keyword)
	{
		return default(StyleCursor);
	}

	[Token(Token = "0x6001FEE")]
	[Address(RVA = "0x6B128F0", Offset = "0x6B118F0", VA = "0x6B128F0")]
	public static implicit operator StyleCursor(Cursor v)
	{
		return default(StyleCursor);
	}

	[Token(Token = "0x6001FEF")]
	[Address(RVA = "0x6B12940", Offset = "0x6B11940", VA = "0x6B12940", Slot = "8")]
	public bool Equals(StyleCursor other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FF0")]
	[Address(RVA = "0x6B129C0", Offset = "0x6B119C0", VA = "0x6B129C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FF1")]
	[Address(RVA = "0x6B12A60", Offset = "0x6B11A60", VA = "0x6B12A60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001FF2")]
	[Address(RVA = "0x6B12A80", Offset = "0x6B11A80", VA = "0x6B12A80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
