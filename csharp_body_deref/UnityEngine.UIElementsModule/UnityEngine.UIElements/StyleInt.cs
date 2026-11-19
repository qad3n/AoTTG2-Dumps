// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleInt
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x200041B")]
public struct StyleInt : IStyleValue<int>, IEquatable<StyleInt>
{
	[Token(Token = "0x4000DCC")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private int m_Value;

	[Token(Token = "0x4000DCD")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x170008D3")]
	public int value
	{
		[Token(Token = "0x6002040")]
		[Address(RVA = "0x6B13290", Offset = "0x6B12290", VA = "0x6B13290", Slot = "4")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002041")]
		[Address(RVA = "0x6B132A0", Offset = "0x6B122A0", VA = "0x6B132A0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008D4")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6002042")]
		[Address(RVA = "0x6B132B0", Offset = "0x6B122B0", VA = "0x6B132B0", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6002043")]
		[Address(RVA = "0x6B132C0", Offset = "0x6B122C0", VA = "0x6B132C0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6002044")]
	[Address(RVA = "0x6B132D0", Offset = "0x6B122D0", VA = "0x6B132D0")]
	public StyleInt(int v)
	{
	}

	[Token(Token = "0x6002045")]
	[Address(RVA = "0x6B132E0", Offset = "0x6B122E0", VA = "0x6B132E0")]
	public StyleInt(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002046")]
	[Address(RVA = "0x6B0DE60", Offset = "0x6B0CE60", VA = "0x6B0DE60")]
	internal StyleInt(int v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002047")]
	[Address(RVA = "0x6B132F0", Offset = "0x6B122F0", VA = "0x6B132F0")]
	public static bool operator ==(StyleInt lhs, StyleInt rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002048")]
	[Address(RVA = "0x6B0DE70", Offset = "0x6B0CE70", VA = "0x6B0DE70")]
	public static implicit operator StyleInt(StyleKeyword keyword)
	{
		return default(StyleInt);
	}

	[Token(Token = "0x6002049")]
	[Address(RVA = "0x6B13300", Offset = "0x6B12300", VA = "0x6B13300")]
	public static implicit operator StyleInt(int v)
	{
		return default(StyleInt);
	}

	[Token(Token = "0x600204A")]
	[Address(RVA = "0x6B13310", Offset = "0x6B12310", VA = "0x6B13310", Slot = "8")]
	public bool Equals(StyleInt other)
	{
		return default(bool);
	}

	[Token(Token = "0x600204B")]
	[Address(RVA = "0x6B13320", Offset = "0x6B12320", VA = "0x6B13320", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600204C")]
	[Address(RVA = "0x6B13380", Offset = "0x6B12380", VA = "0x6B13380", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600204D")]
	[Address(RVA = "0x6B13390", Offset = "0x6B12390", VA = "0x6B13390", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
