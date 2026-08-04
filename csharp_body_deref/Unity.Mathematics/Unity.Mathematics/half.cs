// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.half
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000037")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct half : IEquatable<half>, IFormattable
{
	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x0")]
	public ushort value;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x0")]
	public static readonly half zero;

	[Token(Token = "0x170005C8")]
	public static float MaxValue
	{
		[Token(Token = "0x600159A")]
		[Address(RVA = "0x4AD5B30", Offset = "0x4AD5B30", VA = "0x4AD5B30")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170005C9")]
	public static float MinValue
	{
		[Token(Token = "0x600159B")]
		[Address(RVA = "0x4AD5B40", Offset = "0x4AD5B40", VA = "0x4AD5B40")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170005CA")]
	public static half MaxValueAsHalf
	{
		[Token(Token = "0x600159C")]
		[Address(RVA = "0x4AD5B50", Offset = "0x4AD5B50", VA = "0x4AD5B50")]
		get
		{
			return default(half);
		}
	}

	[Token(Token = "0x170005CB")]
	public static half MinValueAsHalf
	{
		[Token(Token = "0x600159D")]
		[Address(RVA = "0x4AD5B60", Offset = "0x4AD5B60", VA = "0x4AD5B60")]
		get
		{
			return default(half);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600159E")]
	[Address(RVA = "0x4AD5B70", Offset = "0x4AD5B70", VA = "0x4AD5B70")]
	public half(half x)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600159F")]
	[Address(RVA = "0x4AD5B80", Offset = "0x4AD5B80", VA = "0x4AD5B80")]
	public half(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A0")]
	[Address(RVA = "0x4AD5BE0", Offset = "0x4AD5BE0", VA = "0x4AD5BE0")]
	public half(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A1")]
	[Address(RVA = "0x4AD5C40", Offset = "0x4AD5C40", VA = "0x4AD5C40")]
	public static explicit operator half(float v)
	{
		return default(half);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A2")]
	[Address(RVA = "0x4AD5CA0", Offset = "0x4AD5CA0", VA = "0x4AD5CA0")]
	public static explicit operator half(double v)
	{
		return default(half);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A3")]
	[Address(RVA = "0x4AD5D00", Offset = "0x4AD5D00", VA = "0x4AD5D00")]
	public static implicit operator float(half d)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A4")]
	[Address(RVA = "0x4AD5D60", Offset = "0x4AD5D60", VA = "0x4AD5D60")]
	public static implicit operator double(half d)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A5")]
	[Address(RVA = "0x4AD5DC0", Offset = "0x4AD5DC0", VA = "0x4AD5DC0")]
	public static bool operator ==(half lhs, half rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A6")]
	[Address(RVA = "0x4AD5DD0", Offset = "0x4AD5DD0", VA = "0x4AD5DD0")]
	public static bool operator !=(half lhs, half rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A7")]
	[Address(RVA = "0x4AD5DE0", Offset = "0x4AD5DE0", VA = "0x4AD5DE0", Slot = "4")]
	public bool Equals(half rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015A8")]
	[Address(RVA = "0x4AD5DF0", Offset = "0x4AD5DF0", VA = "0x4AD5DF0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A9")]
	[Address(RVA = "0x4AD5E50", Offset = "0x4AD5E50", VA = "0x4AD5E50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015AA")]
	[Address(RVA = "0x4AD5E60", Offset = "0x4AD5E60", VA = "0x4AD5E60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015AB")]
	[Address(RVA = "0x4AD5ED0", Offset = "0x4AD5ED0", VA = "0x4AD5ED0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
