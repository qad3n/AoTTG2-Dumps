// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleRotate
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200037E")]
public struct StyleRotate : IStyleValue<Rotate>, IEquatable<StyleRotate>
{
	[Token(Token = "0x4000A88")]
	[FieldOffset(Offset = "0x0")]
	private Rotate m_Value;

	[Token(Token = "0x4000A89")]
	[FieldOffset(Offset = "0x18")]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x17000647")]
	public Rotate value
	{
		[Token(Token = "0x60016A6")]
		[Address(RVA = "0x50AF7D0", Offset = "0x50AF7D0", VA = "0x50AF7D0", Slot = "4")]
		get
		{
			return default(Rotate);
		}
		[Token(Token = "0x60016A7")]
		[Address(RVA = "0x50AF820", Offset = "0x50AF820", VA = "0x50AF820", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000648")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x60016A8")]
		[Address(RVA = "0x50AF840", Offset = "0x50AF840", VA = "0x50AF840", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x60016A9")]
		[Address(RVA = "0x50AF850", Offset = "0x50AF850", VA = "0x50AF850", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x60016AA")]
	[Address(RVA = "0x50AF860", Offset = "0x50AF860", VA = "0x50AF860")]
	public StyleRotate(Rotate v)
	{
	}

	[Token(Token = "0x60016AB")]
	[Address(RVA = "0x50AF8A0", Offset = "0x50AF8A0", VA = "0x50AF8A0")]
	public StyleRotate(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60016AC")]
	[Address(RVA = "0x50AF880", Offset = "0x50AF880", VA = "0x50AF880")]
	internal StyleRotate(Rotate v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x60016AD")]
	[Address(RVA = "0x50AF8C0", Offset = "0x50AF8C0", VA = "0x50AF8C0")]
	public static bool operator ==(StyleRotate lhs, StyleRotate rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60016AE")]
	[Address(RVA = "0x50AF990", Offset = "0x50AF990", VA = "0x50AF990")]
	public static implicit operator StyleRotate(StyleKeyword keyword)
	{
		return default(StyleRotate);
	}

	[Token(Token = "0x60016AF")]
	[Address(RVA = "0x50AF9B0", Offset = "0x50AF9B0", VA = "0x50AF9B0")]
	public static implicit operator StyleRotate(Rotate v)
	{
		return default(StyleRotate);
	}

	[Token(Token = "0x60016B0")]
	[Address(RVA = "0x50AF9D0", Offset = "0x50AF9D0", VA = "0x50AF9D0", Slot = "8")]
	public bool Equals(StyleRotate other)
	{
		return default(bool);
	}

	[Token(Token = "0x60016B1")]
	[Address(RVA = "0x50AFAA0", Offset = "0x50AFAA0", VA = "0x50AFAA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60016B2")]
	[Address(RVA = "0x50AFBB0", Offset = "0x50AFBB0", VA = "0x50AFBB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60016B3")]
	[Address(RVA = "0x50AFBD0", Offset = "0x50AFBD0", VA = "0x50AFBD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
