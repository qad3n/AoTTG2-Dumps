// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.FilterParameter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000302")]
public struct FilterParameter : IEquatable<FilterParameter>
{
	[Token(Token = "0x4000BC8")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private FilterParameterType m_Type;

	[Token(Token = "0x4000BC9")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private float m_FloatValue;

	[Token(Token = "0x4000BCA")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private Color m_ColorValue;

	[Token(Token = "0x17000479")]
	public FilterParameterType type
	{
		[Token(Token = "0x60014F3")]
		[Address(RVA = "0x6AB2710", Offset = "0x6AB1710", VA = "0x6AB2710")]
		get
		{
			return default(FilterParameterType);
		}
		[Token(Token = "0x60014F4")]
		[Address(RVA = "0x6AB2720", Offset = "0x6AB1720", VA = "0x6AB2720")]
		set
		{
		}
	}

	[Token(Token = "0x1700047A")]
	public float floatValue
	{
		[Token(Token = "0x60014F5")]
		[Address(RVA = "0x6AB2730", Offset = "0x6AB1730", VA = "0x6AB2730")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60014F6")]
		[Address(RVA = "0x6AB2740", Offset = "0x6AB1740", VA = "0x6AB2740")]
		set
		{
		}
	}

	[Token(Token = "0x1700047B")]
	public Color colorValue
	{
		[Token(Token = "0x60014F7")]
		[Address(RVA = "0x6AB2750", Offset = "0x6AB1750", VA = "0x6AB2750")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60014F8")]
		[Address(RVA = "0x6AB2760", Offset = "0x6AB1760", VA = "0x6AB2760")]
		set
		{
		}
	}

	[Token(Token = "0x60014F9")]
	[Address(RVA = "0x6AB2770", Offset = "0x6AB1770", VA = "0x6AB2770")]
	public static bool operator ==(FilterParameter a, FilterParameter b)
	{
		return default(bool);
	}

	[Token(Token = "0x60014FA")]
	[Address(RVA = "0x6AB27F0", Offset = "0x6AB17F0", VA = "0x6AB27F0")]
	public static bool operator !=(FilterParameter a, FilterParameter b)
	{
		return default(bool);
	}

	[Token(Token = "0x60014FB")]
	[Address(RVA = "0x6AB2870", Offset = "0x6AB1870", VA = "0x6AB2870", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60014FC")]
	[Address(RVA = "0x6AB2940", Offset = "0x6AB1940", VA = "0x6AB2940", Slot = "4")]
	public bool Equals(FilterParameter other)
	{
		return default(bool);
	}

	[Token(Token = "0x60014FD")]
	[Address(RVA = "0x6AB29B0", Offset = "0x6AB19B0", VA = "0x6AB29B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60014FE")]
	[Address(RVA = "0x6AB2A40", Offset = "0x6AB1A40", VA = "0x6AB2A40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
