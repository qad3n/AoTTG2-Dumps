// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleBackgroundSize
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x3111AE0", Offset = "0x31100E0", VA = "0x183111AE0", Slot = "4")]
		get
		{
			return default(BackgroundSize);
		}
		[Token(Token = "0x6001FCA")]
		[Address(RVA = "0x3111AC0", Offset = "0x31100C0", VA = "0x183111AC0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008C5")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001FCB")]
		[Address(RVA = "0x152EFE0", Offset = "0x152D5E0", VA = "0x18152EFE0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001FCC")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001FCD")]
	[Address(RVA = "0x3111AC0", Offset = "0x31100C0", VA = "0x183111AC0")]
	public StyleBackgroundSize(BackgroundSize v)
	{
	}

	[Token(Token = "0x6001FCE")]
	[Address(RVA = "0x3111AB0", Offset = "0x31100B0", VA = "0x183111AB0")]
	public StyleBackgroundSize(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FCF")]
	[Address(RVA = "0x3111A90", Offset = "0x3110090", VA = "0x183111A90")]
	internal StyleBackgroundSize(BackgroundSize v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FD0")]
	[Address(RVA = "0x3111B10", Offset = "0x3110110", VA = "0x183111B10")]
	public static bool operator ==(StyleBackgroundSize lhs, StyleBackgroundSize rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FD1")]
	[Address(RVA = "0x3111B90", Offset = "0x3110190", VA = "0x183111B90")]
	public static implicit operator StyleBackgroundSize(StyleKeyword keyword)
	{
		return default(StyleBackgroundSize);
	}

	[Token(Token = "0x6001FD2")]
	[Address(RVA = "0x3111B60", Offset = "0x3110160", VA = "0x183111B60")]
	public static implicit operator StyleBackgroundSize(BackgroundSize v)
	{
		return default(StyleBackgroundSize);
	}

	[Token(Token = "0x6001FD3")]
	[Address(RVA = "0x31119B0", Offset = "0x310FFB0", VA = "0x1831119B0", Slot = "8")]
	public bool Equals(StyleBackgroundSize other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FD4")]
	[Address(RVA = "0x31118F0", Offset = "0x310FEF0", VA = "0x1831118F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FD5")]
	[Address(RVA = "0x3111A00", Offset = "0x3110000", VA = "0x183111A00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001FD6")]
	[Address(RVA = "0x3111A20", Offset = "0x3110020", VA = "0x183111A20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
