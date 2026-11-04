// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.FilterParameter
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000301")]
public struct FilterParameter : IEquatable<FilterParameter>
{
	[Token(Token = "0x4000BC4")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private FilterParameterType m_Type;

	[Token(Token = "0x4000BC5")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private float m_FloatValue;

	[Token(Token = "0x4000BC6")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private Color m_ColorValue;

	[Token(Token = "0x17000475")]
	public FilterParameterType type
	{
		[Token(Token = "0x60014E2")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		get
		{
			return default(FilterParameterType);
		}
		[Token(Token = "0x60014E3")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		set
		{
		}
	}

	[Token(Token = "0x17000476")]
	public float floatValue
	{
		[Token(Token = "0x60014E4")]
		[Address(RVA = "0x562BB0", Offset = "0x5611B0", VA = "0x180562BB0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60014E5")]
		[Address(RVA = "0x2CDDC90", Offset = "0x2CDC290", VA = "0x182CDDC90")]
		set
		{
		}
	}

	[Token(Token = "0x17000477")]
	public Color colorValue
	{
		[Token(Token = "0x60014E6")]
		[Address(RVA = "0xADC2D0", Offset = "0xADA8D0", VA = "0x180ADC2D0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60014E7")]
		[Address(RVA = "0x1B040E0", Offset = "0x1B026E0", VA = "0x181B040E0")]
		set
		{
		}
	}

	[Token(Token = "0x60014E8")]
	[Address(RVA = "0x32AE1C0", Offset = "0x32AC7C0", VA = "0x1832AE1C0")]
	public static bool operator ==(FilterParameter a, FilterParameter b)
	{
		return default(bool);
	}

	[Token(Token = "0x60014E9")]
	[Address(RVA = "0x32AE240", Offset = "0x32AC840", VA = "0x1832AE240")]
	public static bool operator !=(FilterParameter a, FilterParameter b)
	{
		return default(bool);
	}

	[Token(Token = "0x60014EA")]
	[Address(RVA = "0x32ADEC0", Offset = "0x32AC4C0", VA = "0x1832ADEC0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60014EB")]
	[Address(RVA = "0x32AE010", Offset = "0x32AC610", VA = "0x1832AE010", Slot = "4")]
	public bool Equals(FilterParameter other)
	{
		return default(bool);
	}

	[Token(Token = "0x60014EC")]
	[Address(RVA = "0x32AE090", Offset = "0x32AC690", VA = "0x1832AE090", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60014ED")]
	[Address(RVA = "0x32AE130", Offset = "0x32AC730", VA = "0x1832AE130", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
