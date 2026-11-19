// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleTextShadow
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000422")]
public struct StyleTextShadow : IStyleValue<TextShadow>, IEquatable<StyleTextShadow>
{
	[Token(Token = "0x4000DDA")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x4000DDB")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private TextShadow m_Value;

	[Token(Token = "0x170008E1")]
	public TextShadow value
	{
		[Token(Token = "0x60020A9")]
		[Address(RVA = "0x6B14650", Offset = "0x6B13650", VA = "0x6B14650", Slot = "4")]
		get
		{
			return default(TextShadow);
		}
		[Token(Token = "0x60020AA")]
		[Address(RVA = "0x6B14690", Offset = "0x6B13690", VA = "0x6B14690", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008E2")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x60020AB")]
		[Address(RVA = "0x6B146B0", Offset = "0x6B136B0", VA = "0x6B146B0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x60020AC")]
		[Address(RVA = "0x6B146C0", Offset = "0x6B136C0", VA = "0x6B146C0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x60020AD")]
	[Address(RVA = "0x6B146D0", Offset = "0x6B136D0", VA = "0x6B146D0")]
	public StyleTextShadow(TextShadow v)
	{
	}

	[Token(Token = "0x60020AE")]
	[Address(RVA = "0x6B14710", Offset = "0x6B13710", VA = "0x6B14710")]
	public StyleTextShadow(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60020AF")]
	[Address(RVA = "0x6B146F0", Offset = "0x6B136F0", VA = "0x6B146F0")]
	internal StyleTextShadow(TextShadow v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60020B0")]
	[Address(RVA = "0x6B14720", Offset = "0x6B13720", VA = "0x6B14720")]
	public static bool operator ==(StyleTextShadow lhs, StyleTextShadow rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60020B1")]
	[Address(RVA = "0x6B147E0", Offset = "0x6B137E0", VA = "0x6B147E0")]
	public static implicit operator StyleTextShadow(StyleKeyword keyword)
	{
		return default(StyleTextShadow);
	}

	[Token(Token = "0x60020B2")]
	[Address(RVA = "0x6B14800", Offset = "0x6B13800", VA = "0x6B14800")]
	public static implicit operator StyleTextShadow(TextShadow v)
	{
		return default(StyleTextShadow);
	}

	[Token(Token = "0x60020B3")]
	[Address(RVA = "0x6B14820", Offset = "0x6B13820", VA = "0x6B14820", Slot = "8")]
	public bool Equals(StyleTextShadow other)
	{
		return default(bool);
	}

	[Token(Token = "0x60020B4")]
	[Address(RVA = "0x6B148A0", Offset = "0x6B138A0", VA = "0x6B148A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60020B5")]
	[Address(RVA = "0x6B14960", Offset = "0x6B13960", VA = "0x6B14960", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60020B6")]
	[Address(RVA = "0x6B149A0", Offset = "0x6B139A0", VA = "0x6B149A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
