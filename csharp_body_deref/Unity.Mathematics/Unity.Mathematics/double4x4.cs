using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x200002A")]
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
		[Token(Token = "0x600103A")]
		[Address(RVA = "0x47A8920", Offset = "0x47A8920", VA = "0x47A8920")]
		get
		{
			return ref *(double4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001001")]
	[Address(RVA = "0x47A5520", Offset = "0x47A5520", VA = "0x47A5520")]
	public double4x4(double4 c0, double4 c1, double4 c2, double4 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001002")]
	[Address(RVA = "0x47A5570", Offset = "0x47A5570", VA = "0x47A5570")]
	public double4x4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23, double m30, double m31, double m32, double m33)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001003")]
	[Address(RVA = "0x47A5600", Offset = "0x47A5600", VA = "0x47A5600")]
	public double4x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001004")]
	[Address(RVA = "0x47A5650", Offset = "0x47A5650", VA = "0x47A5650")]
	public double4x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001005")]
	[Address(RVA = "0x47A56C0", Offset = "0x47A56C0", VA = "0x47A56C0")]
	public double4x4(bool4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001006")]
	[Address(RVA = "0x47A5880", Offset = "0x47A5880", VA = "0x47A5880")]
	public double4x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001007")]
	[Address(RVA = "0x47A58E0", Offset = "0x47A58E0", VA = "0x47A58E0")]
	public double4x4(int4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001008")]
	[Address(RVA = "0x47A59E0", Offset = "0x47A59E0", VA = "0x47A59E0")]
	public double4x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001009")]
	[Address(RVA = "0x47A5A40", Offset = "0x47A5A40", VA = "0x47A5A40")]
	public double4x4(uint4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600100A")]
	[Address(RVA = "0x47A5B60", Offset = "0x47A5B60", VA = "0x47A5B60")]
	public double4x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600100B")]
	[Address(RVA = "0x47A5BC0", Offset = "0x47A5BC0", VA = "0x47A5BC0")]
	public double4x4(float4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600100C")]
	[Address(RVA = "0x47A5C10", Offset = "0x47A5C10", VA = "0x47A5C10")]
	public static implicit operator double4x4(double v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600100D")]
	[Address(RVA = "0x47A5C70", Offset = "0x47A5C70", VA = "0x47A5C70")]
	public static explicit operator double4x4(bool v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600100E")]
	[Address(RVA = "0x47A5CE0", Offset = "0x47A5CE0", VA = "0x47A5CE0")]
	public static explicit operator double4x4(bool4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600100F")]
	[Address(RVA = "0x47A5D20", Offset = "0x47A5D20", VA = "0x47A5D20")]
	public static implicit operator double4x4(int v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001010")]
	[Address(RVA = "0x47A5D80", Offset = "0x47A5D80", VA = "0x47A5D80")]
	public static implicit operator double4x4(int4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001011")]
	[Address(RVA = "0x47A5E90", Offset = "0x47A5E90", VA = "0x47A5E90")]
	public static implicit operator double4x4(uint v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001012")]
	[Address(RVA = "0x47A5EF0", Offset = "0x47A5EF0", VA = "0x47A5EF0")]
	public static implicit operator double4x4(uint4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001013")]
	[Address(RVA = "0x47A6020", Offset = "0x47A6020", VA = "0x47A6020")]
	public static implicit operator double4x4(float v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001014")]
	[Address(RVA = "0x47A6080", Offset = "0x47A6080", VA = "0x47A6080")]
	public static implicit operator double4x4(float4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001015")]
	[Address(RVA = "0x47A60D0", Offset = "0x47A60D0", VA = "0x47A60D0")]
	public static double4x4 operator *(double4x4 lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001016")]
	[Address(RVA = "0x47A6180", Offset = "0x47A6180", VA = "0x47A6180")]
	public static double4x4 operator *(double4x4 lhs, double rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001017")]
	[Address(RVA = "0x47A6200", Offset = "0x47A6200", VA = "0x47A6200")]
	public static double4x4 operator *(double lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001018")]
	[Address(RVA = "0x47A6280", Offset = "0x47A6280", VA = "0x47A6280")]
	public static double4x4 operator +(double4x4 lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001019")]
	[Address(RVA = "0x47A6330", Offset = "0x47A6330", VA = "0x47A6330")]
	public static double4x4 operator +(double4x4 lhs, double rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600101A")]
	[Address(RVA = "0x47A63B0", Offset = "0x47A63B0", VA = "0x47A63B0")]
	public static double4x4 operator +(double lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600101B")]
	[Address(RVA = "0x47A6430", Offset = "0x47A6430", VA = "0x47A6430")]
	public static double4x4 operator -(double4x4 lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600101C")]
	[Address(RVA = "0x47A64E0", Offset = "0x47A64E0", VA = "0x47A64E0")]
	public static double4x4 operator -(double4x4 lhs, double rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600101D")]
	[Address(RVA = "0x47A6570", Offset = "0x47A6570", VA = "0x47A6570")]
	public static double4x4 operator -(double lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600101E")]
	[Address(RVA = "0x47A65F0", Offset = "0x47A65F0", VA = "0x47A65F0")]
	public static double4x4 operator /(double4x4 lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600101F")]
	[Address(RVA = "0x47A66A0", Offset = "0x47A66A0", VA = "0x47A66A0")]
	public static double4x4 operator /(double4x4 lhs, double rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001020")]
	[Address(RVA = "0x47A6730", Offset = "0x47A6730", VA = "0x47A6730")]
	public static double4x4 operator /(double lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001021")]
	[Address(RVA = "0x47A67B0", Offset = "0x47A67B0", VA = "0x47A67B0")]
	public static double4x4 operator %(double4x4 lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001022")]
	[Address(RVA = "0x47A6B80", Offset = "0x47A6B80", VA = "0x47A6B80")]
	public static double4x4 operator %(double4x4 lhs, double rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001023")]
	[Address(RVA = "0x47A6E80", Offset = "0x47A6E80", VA = "0x47A6E80")]
	public static double4x4 operator %(double lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001024")]
	[Address(RVA = "0x47A7180", Offset = "0x47A7180", VA = "0x47A7180")]
	public static double4x4 operator ++(double4x4 val)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001025")]
	[Address(RVA = "0x47A7230", Offset = "0x47A7230", VA = "0x47A7230")]
	public static double4x4 operator --(double4x4 val)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001026")]
	[Address(RVA = "0x47A72E0", Offset = "0x47A72E0", VA = "0x47A72E0")]
	public static bool4x4 operator <(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001027")]
	[Address(RVA = "0x47A7460", Offset = "0x47A7460", VA = "0x47A7460")]
	public static bool4x4 operator <(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001028")]
	[Address(RVA = "0x47A7560", Offset = "0x47A7560", VA = "0x47A7560")]
	public static bool4x4 operator <(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001029")]
	[Address(RVA = "0x47A7680", Offset = "0x47A7680", VA = "0x47A7680")]
	public static bool4x4 operator <=(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600102A")]
	[Address(RVA = "0x47A7800", Offset = "0x47A7800", VA = "0x47A7800")]
	public static bool4x4 operator <=(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600102B")]
	[Address(RVA = "0x47A7900", Offset = "0x47A7900", VA = "0x47A7900")]
	public static bool4x4 operator <=(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600102C")]
	[Address(RVA = "0x47A7A20", Offset = "0x47A7A20", VA = "0x47A7A20")]
	public static bool4x4 operator >(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600102D")]
	[Address(RVA = "0x47A7BA0", Offset = "0x47A7BA0", VA = "0x47A7BA0")]
	public static bool4x4 operator >(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600102E")]
	[Address(RVA = "0x47A7CC0", Offset = "0x47A7CC0", VA = "0x47A7CC0")]
	public static bool4x4 operator >(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600102F")]
	[Address(RVA = "0x47A7DC0", Offset = "0x47A7DC0", VA = "0x47A7DC0")]
	public static bool4x4 operator >=(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001030")]
	[Address(RVA = "0x47A7F40", Offset = "0x47A7F40", VA = "0x47A7F40")]
	public static bool4x4 operator >=(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001031")]
	[Address(RVA = "0x47A8060", Offset = "0x47A8060", VA = "0x47A8060")]
	public static bool4x4 operator >=(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001032")]
	[Address(RVA = "0x47A8160", Offset = "0x47A8160", VA = "0x47A8160")]
	public static double4x4 operator -(double4x4 val)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001033")]
	[Address(RVA = "0x47A81D0", Offset = "0x47A81D0", VA = "0x47A81D0")]
	public static double4x4 operator +(double4x4 val)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001034")]
	[Address(RVA = "0x47A8220", Offset = "0x47A8220", VA = "0x47A8220")]
	public static bool4x4 operator ==(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001035")]
	[Address(RVA = "0x47A83A0", Offset = "0x47A83A0", VA = "0x47A83A0")]
	public static bool4x4 operator ==(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001036")]
	[Address(RVA = "0x47A84A0", Offset = "0x47A84A0", VA = "0x47A84A0")]
	public static bool4x4 operator ==(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001037")]
	[Address(RVA = "0x47A85A0", Offset = "0x47A85A0", VA = "0x47A85A0")]
	public static bool4x4 operator !=(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001038")]
	[Address(RVA = "0x47A8720", Offset = "0x47A8720", VA = "0x47A8720")]
	public static bool4x4 operator !=(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001039")]
	[Address(RVA = "0x47A8820", Offset = "0x47A8820", VA = "0x47A8820")]
	public static bool4x4 operator !=(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600103B")]
	[Address(RVA = "0x47A8930", Offset = "0x47A8930", VA = "0x47A8930", Slot = "4")]
	public bool Equals(double4x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600103C")]
	[Address(RVA = "0x47A8A60", Offset = "0x47A8A60", VA = "0x47A8A60", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600103D")]
	[Address(RVA = "0x47A8BF0", Offset = "0x47A8BF0", VA = "0x47A8BF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600103E")]
	[Address(RVA = "0x47A8E30", Offset = "0x47A8E30", VA = "0x47A8E30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600103F")]
	[Address(RVA = "0x47A9440", Offset = "0x47A9440", VA = "0x47A9440", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
