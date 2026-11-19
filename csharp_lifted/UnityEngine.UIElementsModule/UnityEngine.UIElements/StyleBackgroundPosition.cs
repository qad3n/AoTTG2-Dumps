// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleBackgroundPosition
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6B11DA0", Offset = "0x6B10DA0", VA = "0x6B11DA0", Slot = "4")]
		get
		{
			return default(BackgroundPosition);
		}
		[Token(Token = "0x6001FAE")]
		[Address(RVA = "0x6B11DC0", Offset = "0x6B10DC0", VA = "0x6B11DC0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008C1")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001FAF")]
		[Address(RVA = "0x6B11DD0", Offset = "0x6B10DD0", VA = "0x6B11DD0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001FB0")]
		[Address(RVA = "0x6B11DE0", Offset = "0x6B10DE0", VA = "0x6B11DE0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001FB1")]
	[Address(RVA = "0x6B0E340", Offset = "0x6B0D340", VA = "0x6B0E340")]
	public StyleBackgroundPosition(BackgroundPosition v)
	{
	}

	[Token(Token = "0x6001FB2")]
	[Address(RVA = "0x6B11E00", Offset = "0x6B10E00", VA = "0x6B11E00")]
	public StyleBackgroundPosition(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FB3")]
	[Address(RVA = "0x6B11DF0", Offset = "0x6B10DF0", VA = "0x6B11DF0")]
	internal StyleBackgroundPosition(BackgroundPosition v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FB4")]
	[Address(RVA = "0x6B11E20", Offset = "0x6B10E20", VA = "0x6B11E20")]
	public static bool operator ==(StyleBackgroundPosition lhs, StyleBackgroundPosition rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FB5")]
	[Address(RVA = "0x6B0E350", Offset = "0x6B0D350", VA = "0x6B0E350")]
	public static implicit operator StyleBackgroundPosition(StyleKeyword keyword)
	{
		return default(StyleBackgroundPosition);
	}

	[Token(Token = "0x6001FB6")]
	[Address(RVA = "0x6B11E40", Offset = "0x6B10E40", VA = "0x6B11E40")]
	public static implicit operator StyleBackgroundPosition(BackgroundPosition v)
	{
		return default(StyleBackgroundPosition);
	}

	[Token(Token = "0x6001FB7")]
	[Address(RVA = "0x6B11E50", Offset = "0x6B10E50", VA = "0x6B11E50", Slot = "8")]
	public bool Equals(StyleBackgroundPosition other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FB8")]
	[Address(RVA = "0x6B11E80", Offset = "0x6B10E80", VA = "0x6B11E80", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FB9")]
	[Address(RVA = "0x6B11F00", Offset = "0x6B10F00", VA = "0x6B11F00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001FBA")]
	[Address(RVA = "0x6B11F20", Offset = "0x6B10F20", VA = "0x6B11F20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
