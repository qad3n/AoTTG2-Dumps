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

[Serializable]
[Token(Token = "0x2000420")]
public struct StyleRotate : IStyleValue<Rotate>, IEquatable<StyleRotate>
{
	[Token(Token = "0x4000DD6")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private Rotate m_Value;

	[Token(Token = "0x4000DD7")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x170008DD")]
	public Rotate value
	{
		[Token(Token = "0x600208D")]
		[Address(RVA = "0x6B13C60", Offset = "0x6B12C60", VA = "0x6B13C60", Slot = "4")]
		get
		{
			return default(Rotate);
		}
		[Token(Token = "0x600208E")]
		[Address(RVA = "0x6B13DF0", Offset = "0x6B12DF0", VA = "0x6B13DF0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008DE")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x600208F")]
		[Address(RVA = "0x6B13E10", Offset = "0x6B12E10", VA = "0x6B13E10", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6002090")]
		[Address(RVA = "0x6B13E20", Offset = "0x6B12E20", VA = "0x6B13E20", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6002091")]
	[Address(RVA = "0x6B13E30", Offset = "0x6B12E30", VA = "0x6B13E30")]
	public StyleRotate(Rotate v)
	{
	}

	[Token(Token = "0x6002092")]
	[Address(RVA = "0x6B13E70", Offset = "0x6B12E70", VA = "0x6B13E70")]
	public StyleRotate(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002093")]
	[Address(RVA = "0x6B13E50", Offset = "0x6B12E50", VA = "0x6B13E50")]
	internal StyleRotate(Rotate v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002094")]
	[Address(RVA = "0x6B13E90", Offset = "0x6B12E90", VA = "0x6B13E90")]
	public static bool operator ==(StyleRotate lhs, StyleRotate rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002095")]
	[Address(RVA = "0x6B13FA0", Offset = "0x6B12FA0", VA = "0x6B13FA0")]
	public static implicit operator StyleRotate(StyleKeyword keyword)
	{
		return default(StyleRotate);
	}

	[Token(Token = "0x6002096")]
	[Address(RVA = "0x6B13FC0", Offset = "0x6B12FC0", VA = "0x6B13FC0")]
	public static implicit operator StyleRotate(Rotate v)
	{
		return default(StyleRotate);
	}

	[Token(Token = "0x6002097")]
	[Address(RVA = "0x6B13FE0", Offset = "0x6B12FE0", VA = "0x6B13FE0", Slot = "8")]
	public bool Equals(StyleRotate other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002098")]
	[Address(RVA = "0x6B140E0", Offset = "0x6B130E0", VA = "0x6B140E0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002099")]
	[Address(RVA = "0x6B14220", Offset = "0x6B13220", VA = "0x6B14220", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600209A")]
	[Address(RVA = "0x6B14240", Offset = "0x6B13240", VA = "0x6B14240", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
