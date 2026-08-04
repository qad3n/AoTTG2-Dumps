// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.double4x4
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
[Token(Token = "0x2000027")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double4x4 : IEquatable<double4x4>, IFormattable
{
	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x0")]
	public double4 c0;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x20")]
	public double4 c1;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x40")]
	public double4 c2;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x60")]
	public double4 c3;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double4x4 identity;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x80")]
	public static readonly double4x4 zero;

	[Token(Token = "0x170003DA")]
	public unsafe ref double4 this[int index]
	{
		[Token(Token = "0x6001012")]
		[Address(RVA = "0x4AABD20", Offset = "0x4AABD20", VA = "0x4AABD20")]
		get
		{
			return ref *(double4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FD9")]
	[Address(RVA = "0x4AA8920", Offset = "0x4AA8920", VA = "0x4AA8920")]
	public double4x4(double4 c0, double4 c1, double4 c2, double4 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FDA")]
	[Address(RVA = "0x4AA8970", Offset = "0x4AA8970", VA = "0x4AA8970")]
	public double4x4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23, double m30, double m31, double m32, double m33)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FDB")]
	[Address(RVA = "0x4AA8A00", Offset = "0x4AA8A00", VA = "0x4AA8A00")]
	public double4x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FDC")]
	[Address(RVA = "0x4AA8A50", Offset = "0x4AA8A50", VA = "0x4AA8A50")]
	public double4x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FDD")]
	[Address(RVA = "0x4AA8AC0", Offset = "0x4AA8AC0", VA = "0x4AA8AC0")]
	public double4x4(bool4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FDE")]
	[Address(RVA = "0x4AA8C80", Offset = "0x4AA8C80", VA = "0x4AA8C80")]
	public double4x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FDF")]
	[Address(RVA = "0x4AA8CE0", Offset = "0x4AA8CE0", VA = "0x4AA8CE0")]
	public double4x4(int4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE0")]
	[Address(RVA = "0x4AA8DE0", Offset = "0x4AA8DE0", VA = "0x4AA8DE0")]
	public double4x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE1")]
	[Address(RVA = "0x4AA8E40", Offset = "0x4AA8E40", VA = "0x4AA8E40")]
	public double4x4(uint4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE2")]
	[Address(RVA = "0x4AA8F60", Offset = "0x4AA8F60", VA = "0x4AA8F60")]
	public double4x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE3")]
	[Address(RVA = "0x4AA8FC0", Offset = "0x4AA8FC0", VA = "0x4AA8FC0")]
	public double4x4(float4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE4")]
	[Address(RVA = "0x4AA9010", Offset = "0x4AA9010", VA = "0x4AA9010")]
	public static implicit operator double4x4(double v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE5")]
	[Address(RVA = "0x4AA9070", Offset = "0x4AA9070", VA = "0x4AA9070")]
	public static explicit operator double4x4(bool v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE6")]
	[Address(RVA = "0x4AA90E0", Offset = "0x4AA90E0", VA = "0x4AA90E0")]
	public static explicit operator double4x4(bool4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE7")]
	[Address(RVA = "0x4AA9120", Offset = "0x4AA9120", VA = "0x4AA9120")]
	public static implicit operator double4x4(int v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE8")]
	[Address(RVA = "0x4AA9180", Offset = "0x4AA9180", VA = "0x4AA9180")]
	public static implicit operator double4x4(int4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE9")]
	[Address(RVA = "0x4AA9290", Offset = "0x4AA9290", VA = "0x4AA9290")]
	public static implicit operator double4x4(uint v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x4AA92F0", Offset = "0x4AA92F0", VA = "0x4AA92F0")]
	public static implicit operator double4x4(uint4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x4AA9420", Offset = "0x4AA9420", VA = "0x4AA9420")]
	public static implicit operator double4x4(float v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FEC")]
	[Address(RVA = "0x4AA9480", Offset = "0x4AA9480", VA = "0x4AA9480")]
	public static implicit operator double4x4(float4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FED")]
	[Address(RVA = "0x4AA94D0", Offset = "0x4AA94D0", VA = "0x4AA94D0")]
	public static double4x4 operator *(double4x4 lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FEE")]
	[Address(RVA = "0x4AA9580", Offset = "0x4AA9580", VA = "0x4AA9580")]
	public static double4x4 operator *(double4x4 lhs, double rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FEF")]
	[Address(RVA = "0x4AA9600", Offset = "0x4AA9600", VA = "0x4AA9600")]
	public static double4x4 operator *(double lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF0")]
	[Address(RVA = "0x4AA9680", Offset = "0x4AA9680", VA = "0x4AA9680")]
	public static double4x4 operator +(double4x4 lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF1")]
	[Address(RVA = "0x4AA9730", Offset = "0x4AA9730", VA = "0x4AA9730")]
	public static double4x4 operator +(double4x4 lhs, double rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x4AA97B0", Offset = "0x4AA97B0", VA = "0x4AA97B0")]
	public static double4x4 operator +(double lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF3")]
	[Address(RVA = "0x4AA9830", Offset = "0x4AA9830", VA = "0x4AA9830")]
	public static double4x4 operator -(double4x4 lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF4")]
	[Address(RVA = "0x4AA98E0", Offset = "0x4AA98E0", VA = "0x4AA98E0")]
	public static double4x4 operator -(double4x4 lhs, double rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF5")]
	[Address(RVA = "0x4AA9970", Offset = "0x4AA9970", VA = "0x4AA9970")]
	public static double4x4 operator -(double lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF6")]
	[Address(RVA = "0x4AA99F0", Offset = "0x4AA99F0", VA = "0x4AA99F0")]
	public static double4x4 operator /(double4x4 lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF7")]
	[Address(RVA = "0x4AA9AA0", Offset = "0x4AA9AA0", VA = "0x4AA9AA0")]
	public static double4x4 operator /(double4x4 lhs, double rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF8")]
	[Address(RVA = "0x4AA9B30", Offset = "0x4AA9B30", VA = "0x4AA9B30")]
	public static double4x4 operator /(double lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF9")]
	[Address(RVA = "0x4AA9BB0", Offset = "0x4AA9BB0", VA = "0x4AA9BB0")]
	public static double4x4 operator %(double4x4 lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FFA")]
	[Address(RVA = "0x4AA9F80", Offset = "0x4AA9F80", VA = "0x4AA9F80")]
	public static double4x4 operator %(double4x4 lhs, double rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FFB")]
	[Address(RVA = "0x4AAA280", Offset = "0x4AAA280", VA = "0x4AAA280")]
	public static double4x4 operator %(double lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FFC")]
	[Address(RVA = "0x4AAA580", Offset = "0x4AAA580", VA = "0x4AAA580")]
	public static double4x4 operator ++(double4x4 val)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FFD")]
	[Address(RVA = "0x4AAA630", Offset = "0x4AAA630", VA = "0x4AAA630")]
	public static double4x4 operator --(double4x4 val)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FFE")]
	[Address(RVA = "0x4AAA6E0", Offset = "0x4AAA6E0", VA = "0x4AAA6E0")]
	public static bool4x4 operator <(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FFF")]
	[Address(RVA = "0x4AAA860", Offset = "0x4AAA860", VA = "0x4AAA860")]
	public static bool4x4 operator <(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001000")]
	[Address(RVA = "0x4AAA960", Offset = "0x4AAA960", VA = "0x4AAA960")]
	public static bool4x4 operator <(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001001")]
	[Address(RVA = "0x4AAAA80", Offset = "0x4AAAA80", VA = "0x4AAAA80")]
	public static bool4x4 operator <=(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001002")]
	[Address(RVA = "0x4AAAC00", Offset = "0x4AAAC00", VA = "0x4AAAC00")]
	public static bool4x4 operator <=(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001003")]
	[Address(RVA = "0x4AAAD00", Offset = "0x4AAAD00", VA = "0x4AAAD00")]
	public static bool4x4 operator <=(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001004")]
	[Address(RVA = "0x4AAAE20", Offset = "0x4AAAE20", VA = "0x4AAAE20")]
	public static bool4x4 operator >(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001005")]
	[Address(RVA = "0x4AAAFA0", Offset = "0x4AAAFA0", VA = "0x4AAAFA0")]
	public static bool4x4 operator >(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001006")]
	[Address(RVA = "0x4AAB0C0", Offset = "0x4AAB0C0", VA = "0x4AAB0C0")]
	public static bool4x4 operator >(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001007")]
	[Address(RVA = "0x4AAB1C0", Offset = "0x4AAB1C0", VA = "0x4AAB1C0")]
	public static bool4x4 operator >=(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001008")]
	[Address(RVA = "0x4AAB340", Offset = "0x4AAB340", VA = "0x4AAB340")]
	public static bool4x4 operator >=(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001009")]
	[Address(RVA = "0x4AAB460", Offset = "0x4AAB460", VA = "0x4AAB460")]
	public static bool4x4 operator >=(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600100A")]
	[Address(RVA = "0x4AAB560", Offset = "0x4AAB560", VA = "0x4AAB560")]
	public static double4x4 operator -(double4x4 val)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600100B")]
	[Address(RVA = "0x4AAB5D0", Offset = "0x4AAB5D0", VA = "0x4AAB5D0")]
	public static double4x4 operator +(double4x4 val)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600100C")]
	[Address(RVA = "0x4AAB620", Offset = "0x4AAB620", VA = "0x4AAB620")]
	public static bool4x4 operator ==(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600100D")]
	[Address(RVA = "0x4AAB7A0", Offset = "0x4AAB7A0", VA = "0x4AAB7A0")]
	public static bool4x4 operator ==(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600100E")]
	[Address(RVA = "0x4AAB8A0", Offset = "0x4AAB8A0", VA = "0x4AAB8A0")]
	public static bool4x4 operator ==(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600100F")]
	[Address(RVA = "0x4AAB9A0", Offset = "0x4AAB9A0", VA = "0x4AAB9A0")]
	public static bool4x4 operator !=(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001010")]
	[Address(RVA = "0x4AABB20", Offset = "0x4AABB20", VA = "0x4AABB20")]
	public static bool4x4 operator !=(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001011")]
	[Address(RVA = "0x4AABC20", Offset = "0x4AABC20", VA = "0x4AABC20")]
	public static bool4x4 operator !=(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001013")]
	[Address(RVA = "0x4AABD30", Offset = "0x4AABD30", VA = "0x4AABD30", Slot = "4")]
	public bool Equals(double4x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001014")]
	[Address(RVA = "0x4AABE60", Offset = "0x4AABE60", VA = "0x4AABE60", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001015")]
	[Address(RVA = "0x4AABFF0", Offset = "0x4AABFF0", VA = "0x4AABFF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001016")]
	[Address(RVA = "0x4AAC230", Offset = "0x4AAC230", VA = "0x4AAC230", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001017")]
	[Address(RVA = "0x4AAC840", Offset = "0x4AAC840", VA = "0x4AAC840", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
