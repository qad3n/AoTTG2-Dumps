// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleCursor
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x3113500", Offset = "0x3111B00", VA = "0x183113500", Slot = "4")]
		get
		{
			return default(Cursor);
		}
		[Token(Token = "0x6001FE6")]
		[Address(RVA = "0x3113640", Offset = "0x3111C40", VA = "0x183113640", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008C9")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001FE7")]
		[Address(RVA = "0xB3E0C0", Offset = "0xB3C6C0", VA = "0x180B3E0C0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001FE8")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001FE9")]
	[Address(RVA = "0x31134E0", Offset = "0x3111AE0", VA = "0x1831134E0")]
	public StyleCursor(Cursor v)
	{
	}

	[Token(Token = "0x6001FEA")]
	[Address(RVA = "0x31134A0", Offset = "0x3111AA0", VA = "0x1831134A0")]
	public StyleCursor(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FEB")]
	[Address(RVA = "0x31134C0", Offset = "0x3111AC0", VA = "0x1831134C0")]
	internal StyleCursor(Cursor v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FEC")]
	[Address(RVA = "0x3113530", Offset = "0x3111B30", VA = "0x183113530")]
	public static bool operator ==(StyleCursor lhs, StyleCursor rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FED")]
	[Address(RVA = "0x31135E0", Offset = "0x3111BE0", VA = "0x1831135E0")]
	public static implicit operator StyleCursor(StyleKeyword keyword)
	{
		return default(StyleCursor);
	}

	[Token(Token = "0x6001FEE")]
	[Address(RVA = "0x3113580", Offset = "0x3111B80", VA = "0x183113580")]
	public static implicit operator StyleCursor(Cursor v)
	{
		return default(StyleCursor);
	}

	[Token(Token = "0x6001FEF")]
	[Address(RVA = "0x3113300", Offset = "0x3111900", VA = "0x183113300", Slot = "8")]
	public bool Equals(StyleCursor other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FF0")]
	[Address(RVA = "0x3113350", Offset = "0x3111950", VA = "0x183113350", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FF1")]
	[Address(RVA = "0x3113410", Offset = "0x3111A10", VA = "0x183113410", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001FF2")]
	[Address(RVA = "0x3113430", Offset = "0x3111A30", VA = "0x183113430", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
