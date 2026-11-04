// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleColor
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x31122C0", Offset = "0x31108C0", VA = "0x1831122C0", Slot = "4")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6001FD8")]
		[Address(RVA = "0x1AB4580", Offset = "0x1AB2B80", VA = "0x181AB4580", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008C7")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001FD9")]
		[Address(RVA = "0x1CBB700", Offset = "0x1CB9D00", VA = "0x181CBB700", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001FDA")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001FDB")]
	[Address(RVA = "0x1AB4580", Offset = "0x1AB2B80", VA = "0x181AB4580")]
	public StyleColor(Color v)
	{
	}

	[Token(Token = "0x6001FDC")]
	[Address(RVA = "0x31122B0", Offset = "0x31108B0", VA = "0x1831122B0")]
	public StyleColor(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FDD")]
	[Address(RVA = "0x1028C90", Offset = "0x1027290", VA = "0x181028C90")]
	internal StyleColor(Color v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FDE")]
	[Address(RVA = "0x3112300", Offset = "0x3110900", VA = "0x183112300")]
	public static bool operator ==(StyleColor lhs, StyleColor rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FDF")]
	[Address(RVA = "0x3112360", Offset = "0x3110960", VA = "0x183112360")]
	public static implicit operator StyleColor(StyleKeyword keyword)
	{
		return default(StyleColor);
	}

	[Token(Token = "0x6001FE0")]
	[Address(RVA = "0x3112370", Offset = "0x3110970", VA = "0x183112370")]
	public static implicit operator StyleColor(Color v)
	{
		return default(StyleColor);
	}

	[Token(Token = "0x6001FE1")]
	[Address(RVA = "0x3112090", Offset = "0x3110690", VA = "0x183112090", Slot = "8")]
	public bool Equals(StyleColor other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FE2")]
	[Address(RVA = "0x3112100", Offset = "0x3110700", VA = "0x183112100", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FE3")]
	[Address(RVA = "0x31121E0", Offset = "0x31107E0", VA = "0x1831121E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001FE4")]
	[Address(RVA = "0x3112240", Offset = "0x3110840", VA = "0x183112240", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
