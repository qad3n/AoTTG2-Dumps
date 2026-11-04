// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleBackgroundPosition
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000410")]
public struct StyleBackgroundPosition : IStyleValue<BackgroundPosition>, IEquatable<StyleBackgroundPosition>
{
	[Token(Token = "0x4000DB5")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private BackgroundPosition m_Value;

	[Token(Token = "0x4000DB6")]
	[FieldOffset(Offset = "0xC")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x170008C0")]
	public BackgroundPosition value
	{
		[Token(Token = "0x6001FAD")]
		[Address(RVA = "0x31115F0", Offset = "0x310FBF0", VA = "0x1831115F0", Slot = "4")]
		get
		{
			return default(BackgroundPosition);
		}
		[Token(Token = "0x6001FAE")]
		[Address(RVA = "0x31115D0", Offset = "0x310FBD0", VA = "0x1831115D0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008C1")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001FAF")]
		[Address(RVA = "0xAC8B50", Offset = "0xAC7150", VA = "0x180AC8B50", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001FB0")]
		[Address(RVA = "0x57AF30", Offset = "0x579530", VA = "0x18057AF30", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001FB1")]
	[Address(RVA = "0x31115D0", Offset = "0x310FBD0", VA = "0x1831115D0")]
	public StyleBackgroundPosition(BackgroundPosition v)
	{
	}

	[Token(Token = "0x6001FB2")]
	[Address(RVA = "0x31115C0", Offset = "0x310FBC0", VA = "0x1831115C0")]
	public StyleBackgroundPosition(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FB3")]
	[Address(RVA = "0x180F450", Offset = "0x180DA50", VA = "0x18180F450")]
	internal StyleBackgroundPosition(BackgroundPosition v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FB4")]
	[Address(RVA = "0x3111620", Offset = "0x310FC20", VA = "0x183111620")]
	public static bool operator ==(StyleBackgroundPosition lhs, StyleBackgroundPosition rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FB5")]
	[Address(RVA = "0x31116A0", Offset = "0x310FCA0", VA = "0x1831116A0")]
	public static implicit operator StyleBackgroundPosition(StyleKeyword keyword)
	{
		return default(StyleBackgroundPosition);
	}

	[Token(Token = "0x6001FB6")]
	[Address(RVA = "0x3111670", Offset = "0x310FC70", VA = "0x183111670")]
	public static implicit operator StyleBackgroundPosition(BackgroundPosition v)
	{
		return default(StyleBackgroundPosition);
	}

	[Token(Token = "0x6001FB7")]
	[Address(RVA = "0x31114F0", Offset = "0x310FAF0", VA = "0x1831114F0", Slot = "8")]
	public bool Equals(StyleBackgroundPosition other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FB8")]
	[Address(RVA = "0x3111430", Offset = "0x310FA30", VA = "0x183111430", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FB9")]
	[Address(RVA = "0x3111540", Offset = "0x310FB40", VA = "0x183111540", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001FBA")]
	[Address(RVA = "0x3111560", Offset = "0x310FB60", VA = "0x183111560", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
