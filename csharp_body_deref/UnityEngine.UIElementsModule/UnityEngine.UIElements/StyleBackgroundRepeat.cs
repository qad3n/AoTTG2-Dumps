// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleBackgroundRepeat
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000411")]
public struct StyleBackgroundRepeat : IStyleValue<BackgroundRepeat>, IEquatable<StyleBackgroundRepeat>
{
	[Token(Token = "0x4000DB7")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private BackgroundRepeat m_Value;

	[Token(Token = "0x4000DB8")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x170008C2")]
	public BackgroundRepeat value
	{
		[Token(Token = "0x6001FBB")]
		[Address(RVA = "0x6B11F90", Offset = "0x6B10F90", VA = "0x6B11F90", Slot = "4")]
		get
		{
			return default(BackgroundRepeat);
		}
		[Token(Token = "0x6001FBC")]
		[Address(RVA = "0x6B11FB0", Offset = "0x6B10FB0", VA = "0x6B11FB0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008C3")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6001FBD")]
		[Address(RVA = "0x6B11FC0", Offset = "0x6B10FC0", VA = "0x6B11FC0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6001FBE")]
		[Address(RVA = "0x6B11FD0", Offset = "0x6B10FD0", VA = "0x6B11FD0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6001FBF")]
	[Address(RVA = "0x6B0E3A0", Offset = "0x6B0D3A0", VA = "0x6B0E3A0")]
	public StyleBackgroundRepeat(BackgroundRepeat v)
	{
	}

	[Token(Token = "0x6001FC0")]
	[Address(RVA = "0x6B11FF0", Offset = "0x6B10FF0", VA = "0x6B11FF0")]
	public StyleBackgroundRepeat(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FC1")]
	[Address(RVA = "0x6B11FE0", Offset = "0x6B10FE0", VA = "0x6B11FE0")]
	internal StyleBackgroundRepeat(BackgroundRepeat v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6001FC2")]
	[Address(RVA = "0x6B12000", Offset = "0x6B11000", VA = "0x6B12000")]
	public static bool operator ==(StyleBackgroundRepeat lhs, StyleBackgroundRepeat rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FC3")]
	[Address(RVA = "0x6B0E3B0", Offset = "0x6B0D3B0", VA = "0x6B0E3B0")]
	public static implicit operator StyleBackgroundRepeat(StyleKeyword keyword)
	{
		return default(StyleBackgroundRepeat);
	}

	[Token(Token = "0x6001FC4")]
	[Address(RVA = "0x6B12020", Offset = "0x6B11020", VA = "0x6B12020")]
	public static implicit operator StyleBackgroundRepeat(BackgroundRepeat v)
	{
		return default(StyleBackgroundRepeat);
	}

	[Token(Token = "0x6001FC5")]
	[Address(RVA = "0x6B12030", Offset = "0x6B11030", VA = "0x6B12030", Slot = "8")]
	public bool Equals(StyleBackgroundRepeat other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FC6")]
	[Address(RVA = "0x6B12050", Offset = "0x6B11050", VA = "0x6B12050", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FC7")]
	[Address(RVA = "0x6B120C0", Offset = "0x6B110C0", VA = "0x6B120C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001FC8")]
	[Address(RVA = "0x6B120E0", Offset = "0x6B110E0", VA = "0x6B120E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
