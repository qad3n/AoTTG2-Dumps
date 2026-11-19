// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleFloat
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000418")]
public struct StyleFloat : IStyleValue<float>, IEquatable<StyleFloat>
{
	[Token(Token = "0x4000DC6")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private float m_Value;

	[Token(Token = "0x4000DC7")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private StyleKeyword m_Keyword;

	[Token(Token = "0x170008CD")]
	public float value
	{
		[Token(Token = "0x6002013")]
		[Address(RVA = "0x6B12AF0", Offset = "0x6B11AF0", VA = "0x6B12AF0", Slot = "4")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002014")]
		[Address(RVA = "0x6B12B00", Offset = "0x6B11B00", VA = "0x6B12B00", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170008CE")]
	public StyleKeyword keyword
	{
		[Token(Token = "0x6002015")]
		[Address(RVA = "0x6B12B10", Offset = "0x6B11B10", VA = "0x6B12B10", Slot = "6")]
		get
		{
			return default(StyleKeyword);
		}
		[Token(Token = "0x6002016")]
		[Address(RVA = "0x6B12B20", Offset = "0x6B11B20", VA = "0x6B12B20", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6002017")]
	[Address(RVA = "0x6B12B30", Offset = "0x6B11B30", VA = "0x6B12B30")]
	public StyleFloat(float v)
	{
	}

	[Token(Token = "0x6002018")]
	[Address(RVA = "0x6B12B40", Offset = "0x6B11B40", VA = "0x6B12B40")]
	public StyleFloat(StyleKeyword keyword)
	{
	}

	[Token(Token = "0x6002019")]
	[Address(RVA = "0x6B0DDF0", Offset = "0x6B0CDF0", VA = "0x6B0DDF0")]
	internal StyleFloat(float v, StyleKeyword keyword)
	{
	}

	[Token(Token = "0x600201A")]
	[Address(RVA = "0x6B12B50", Offset = "0x6B11B50", VA = "0x6B12B50")]
	public static bool operator ==(StyleFloat lhs, StyleFloat rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600201B")]
	[Address(RVA = "0x6B0DE00", Offset = "0x6B0CE00", VA = "0x6B0DE00")]
	public static implicit operator StyleFloat(StyleKeyword keyword)
	{
		return default(StyleFloat);
	}

	[Token(Token = "0x600201C")]
	[Address(RVA = "0x6B12B80", Offset = "0x6B11B80", VA = "0x6B12B80")]
	public static implicit operator StyleFloat(float v)
	{
		return default(StyleFloat);
	}

	[Token(Token = "0x600201D")]
	[Address(RVA = "0x6B12B90", Offset = "0x6B11B90", VA = "0x6B12B90", Slot = "8")]
	public bool Equals(StyleFloat other)
	{
		return default(bool);
	}

	[Token(Token = "0x600201E")]
	[Address(RVA = "0x6B12BB0", Offset = "0x6B11BB0", VA = "0x6B12BB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600201F")]
	[Address(RVA = "0x6B12C20", Offset = "0x6B11C20", VA = "0x6B12C20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002020")]
	[Address(RVA = "0x6B12C40", Offset = "0x6B11C40", VA = "0x6B12C40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
