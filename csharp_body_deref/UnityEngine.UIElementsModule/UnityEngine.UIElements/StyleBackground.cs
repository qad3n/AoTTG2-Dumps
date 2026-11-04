// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleBackground
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x3111F00", Offset = "0x3110500", VA = "0x183111F00", Slot = "4")]
		get
		{
			return default(Background);
		}
		[Token(Token = "0x6001F9C")]
		[Address(RVA = "0x3112060", Offset = "0x3110660", VA = "0x183112060", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008BF")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001F9D")]
		[Address(RVA = "0xE28270", Offset = "0xE26870", VA = "0x180E28270", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001F9E")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001F9F")]
	[Address(RVA = "0x3111DC0", Offset = "0x31103C0", VA = "0x183111DC0")]
	public StyleBackground(Background v)
	{
	}

	[Token(Token = "0x6001FA0")]
	[Address(RVA = "0x3111DE0", Offset = "0x31103E0", VA = "0x183111DE0")]
	public StyleBackground(Texture2D v)
	{
	}

	[Token(Token = "0x6001FA1")]
	[Address(RVA = "0x3111E70", Offset = "0x3110470", VA = "0x183111E70")]
	public StyleBackground(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FA2")]
	[Address(RVA = "0x3111D70", Offset = "0x3110370", VA = "0x183111D70")]
	internal StyleBackground(Texture2D v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FA3")]
	[Address(RVA = "0x3111E20", Offset = "0x3110420", VA = "0x183111E20")]
	internal StyleBackground(Sprite v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FA4")]
	[Address(RVA = "0x3111E90", Offset = "0x3110490", VA = "0x183111E90")]
	internal StyleBackground(VectorImage v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FA5")]
	[Address(RVA = "0x3111EE0", Offset = "0x31104E0", VA = "0x183111EE0")]
	internal StyleBackground(Background v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FA6")]
	[Address(RVA = "0x3111F30", Offset = "0x3110530", VA = "0x183111F30")]
	public static bool operator ==(StyleBackground lhs, StyleBackground rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FA7")]
	[Address(RVA = "0x3111FA0", Offset = "0x31105A0", VA = "0x183111FA0")]
	public static implicit operator StyleBackground(StyleKeyword keyword)
	{
		return default(StyleBackground);
	}

	[Token(Token = "0x6001FA8")]
	[Address(RVA = "0x3112000", Offset = "0x3110600", VA = "0x183112000")]
	public static implicit operator StyleBackground(Background v)
	{
		return default(StyleBackground);
	}

	[Token(Token = "0x6001FA9")]
	[Address(RVA = "0x3111BC0", Offset = "0x31101C0", VA = "0x183111BC0", Slot = "8")]
	public bool Equals(StyleBackground other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FAA")]
	[Address(RVA = "0x3111C10", Offset = "0x3110210", VA = "0x183111C10", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FAB")]
	[Address(RVA = "0x3111CD0", Offset = "0x31102D0", VA = "0x183111CD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001FAC")]
	[Address(RVA = "0x3111CF0", Offset = "0x31102F0", VA = "0x183111CF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
