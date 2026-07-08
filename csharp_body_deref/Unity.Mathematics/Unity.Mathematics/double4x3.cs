using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000029")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double4x3 : IEquatable<double4x3>, IFormattable
{
	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x0")]
	public double4 c0;

	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0x20")]
	public double4 c1;

	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x40")]
	public double4 c2;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double4x3 zero;

	[Token(Token = "0x170003D9")]
	public unsafe ref double4 this[int index]
	{
		[Token(Token = "0x6000FFB")]
		[Address(RVA = "0x47A48B0", Offset = "0x47A48B0", VA = "0x47A48B0")]
		get
		{
			return ref *(double4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FC2")]
	[Address(RVA = "0x47A1F60", Offset = "0x47A1F60", VA = "0x47A1F60")]
	public double4x3(double4 c0, double4 c1, double4 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FC3")]
	[Address(RVA = "0x47A1FA0", Offset = "0x47A1FA0", VA = "0x47A1FA0")]
	public double4x3(double m00, double m01, double m02, double m10, double m11, double m12, double m20, double m21, double m22, double m30, double m31, double m32)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x47A2000", Offset = "0x47A2000", VA = "0x47A2000")]
	public double4x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x47A2040", Offset = "0x47A2040", VA = "0x47A2040")]
	public double4x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FC6")]
	[Address(RVA = "0x47A2090", Offset = "0x47A2090", VA = "0x47A2090")]
	public double4x3(bool4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FC7")]
	[Address(RVA = "0x47A21E0", Offset = "0x47A21E0", VA = "0x47A21E0")]
	public double4x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FC8")]
	[Address(RVA = "0x47A2220", Offset = "0x47A2220", VA = "0x47A2220")]
	public double4x3(int4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x47A22E0", Offset = "0x47A22E0", VA = "0x47A22E0")]
	public double4x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FCA")]
	[Address(RVA = "0x47A2330", Offset = "0x47A2330", VA = "0x47A2330")]
	public double4x3(uint4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FCB")]
	[Address(RVA = "0x47A2410", Offset = "0x47A2410", VA = "0x47A2410")]
	public double4x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FCC")]
	[Address(RVA = "0x47A2450", Offset = "0x47A2450", VA = "0x47A2450")]
	public double4x3(float4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FCD")]
	[Address(RVA = "0x47A2490", Offset = "0x47A2490", VA = "0x47A2490")]
	public static implicit operator double4x3(double v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FCE")]
	[Address(RVA = "0x47A24D0", Offset = "0x47A24D0", VA = "0x47A24D0")]
	public static explicit operator double4x3(bool v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FCF")]
	[Address(RVA = "0x47A2520", Offset = "0x47A2520", VA = "0x47A2520")]
	public static explicit operator double4x3(bool4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FD0")]
	[Address(RVA = "0x47A2680", Offset = "0x47A2680", VA = "0x47A2680")]
	public static implicit operator double4x3(int v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FD1")]
	[Address(RVA = "0x47A26D0", Offset = "0x47A26D0", VA = "0x47A26D0")]
	public static implicit operator double4x3(int4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FD2")]
	[Address(RVA = "0x47A2790", Offset = "0x47A2790", VA = "0x47A2790")]
	public static implicit operator double4x3(uint v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FD3")]
	[Address(RVA = "0x47A27E0", Offset = "0x47A27E0", VA = "0x47A27E0")]
	public static implicit operator double4x3(uint4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FD4")]
	[Address(RVA = "0x47A28C0", Offset = "0x47A28C0", VA = "0x47A28C0")]
	public static implicit operator double4x3(float v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FD5")]
	[Address(RVA = "0x47A2910", Offset = "0x47A2910", VA = "0x47A2910")]
	public static implicit operator double4x3(float4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FD6")]
	[Address(RVA = "0x47A2950", Offset = "0x47A2950", VA = "0x47A2950")]
	public static double4x3 operator *(double4x3 lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FD7")]
	[Address(RVA = "0x47A29D0", Offset = "0x47A29D0", VA = "0x47A29D0")]
	public static double4x3 operator *(double4x3 lhs, double rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FD8")]
	[Address(RVA = "0x47A2A30", Offset = "0x47A2A30", VA = "0x47A2A30")]
	public static double4x3 operator *(double lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FD9")]
	[Address(RVA = "0x47A2A90", Offset = "0x47A2A90", VA = "0x47A2A90")]
	public static double4x3 operator +(double4x3 lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FDA")]
	[Address(RVA = "0x47A2B10", Offset = "0x47A2B10", VA = "0x47A2B10")]
	public static double4x3 operator +(double4x3 lhs, double rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FDB")]
	[Address(RVA = "0x47A2B70", Offset = "0x47A2B70", VA = "0x47A2B70")]
	public static double4x3 operator +(double lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FDC")]
	[Address(RVA = "0x47A2BD0", Offset = "0x47A2BD0", VA = "0x47A2BD0")]
	public static double4x3 operator -(double4x3 lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FDD")]
	[Address(RVA = "0x47A2C50", Offset = "0x47A2C50", VA = "0x47A2C50")]
	public static double4x3 operator -(double4x3 lhs, double rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FDE")]
	[Address(RVA = "0x47A2CC0", Offset = "0x47A2CC0", VA = "0x47A2CC0")]
	public static double4x3 operator -(double lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FDF")]
	[Address(RVA = "0x47A2D20", Offset = "0x47A2D20", VA = "0x47A2D20")]
	public static double4x3 operator /(double4x3 lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE0")]
	[Address(RVA = "0x47A2DA0", Offset = "0x47A2DA0", VA = "0x47A2DA0")]
	public static double4x3 operator /(double4x3 lhs, double rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE1")]
	[Address(RVA = "0x47A2E10", Offset = "0x47A2E10", VA = "0x47A2E10")]
	public static double4x3 operator /(double lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE2")]
	[Address(RVA = "0x47A2E70", Offset = "0x47A2E70", VA = "0x47A2E70")]
	public static double4x3 operator %(double4x3 lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE3")]
	[Address(RVA = "0x47A3140", Offset = "0x47A3140", VA = "0x47A3140")]
	public static double4x3 operator %(double4x3 lhs, double rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE4")]
	[Address(RVA = "0x47A3370", Offset = "0x47A3370", VA = "0x47A3370")]
	public static double4x3 operator %(double lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE5")]
	[Address(RVA = "0x47A35A0", Offset = "0x47A35A0", VA = "0x47A35A0")]
	public static double4x3 operator ++(double4x3 val)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE6")]
	[Address(RVA = "0x47A3620", Offset = "0x47A3620", VA = "0x47A3620")]
	public static double4x3 operator --(double4x3 val)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE7")]
	[Address(RVA = "0x47A36A0", Offset = "0x47A36A0", VA = "0x47A36A0")]
	public static bool4x3 operator <(double4x3 lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE8")]
	[Address(RVA = "0x47A37D0", Offset = "0x47A37D0", VA = "0x47A37D0")]
	public static bool4x3 operator <(double4x3 lhs, double rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE9")]
	[Address(RVA = "0x47A3890", Offset = "0x47A3890", VA = "0x47A3890")]
	public static bool4x3 operator <(double lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x47A3970", Offset = "0x47A3970", VA = "0x47A3970")]
	public static bool4x3 operator <=(double4x3 lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x47A3AA0", Offset = "0x47A3AA0", VA = "0x47A3AA0")]
	public static bool4x3 operator <=(double4x3 lhs, double rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FEC")]
	[Address(RVA = "0x47A3B60", Offset = "0x47A3B60", VA = "0x47A3B60")]
	public static bool4x3 operator <=(double lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FED")]
	[Address(RVA = "0x47A3C40", Offset = "0x47A3C40", VA = "0x47A3C40")]
	public static bool4x3 operator >(double4x3 lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FEE")]
	[Address(RVA = "0x47A3D70", Offset = "0x47A3D70", VA = "0x47A3D70")]
	public static bool4x3 operator >(double4x3 lhs, double rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FEF")]
	[Address(RVA = "0x47A3E50", Offset = "0x47A3E50", VA = "0x47A3E50")]
	public static bool4x3 operator >(double lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF0")]
	[Address(RVA = "0x47A3F10", Offset = "0x47A3F10", VA = "0x47A3F10")]
	public static bool4x3 operator >=(double4x3 lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF1")]
	[Address(RVA = "0x47A4040", Offset = "0x47A4040", VA = "0x47A4040")]
	public static bool4x3 operator >=(double4x3 lhs, double rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x47A4120", Offset = "0x47A4120", VA = "0x47A4120")]
	public static bool4x3 operator >=(double lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF3")]
	[Address(RVA = "0x47A41E0", Offset = "0x47A41E0", VA = "0x47A41E0")]
	public static double4x3 operator -(double4x3 val)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF4")]
	[Address(RVA = "0x47A4230", Offset = "0x47A4230", VA = "0x47A4230")]
	public static double4x3 operator +(double4x3 val)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF5")]
	[Address(RVA = "0x47A4270", Offset = "0x47A4270", VA = "0x47A4270")]
	public static bool4x3 operator ==(double4x3 lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF6")]
	[Address(RVA = "0x47A43D0", Offset = "0x47A43D0", VA = "0x47A43D0")]
	public static bool4x3 operator ==(double4x3 lhs, double rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF7")]
	[Address(RVA = "0x47A44B0", Offset = "0x47A44B0", VA = "0x47A44B0")]
	public static bool4x3 operator ==(double lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF8")]
	[Address(RVA = "0x47A4590", Offset = "0x47A4590", VA = "0x47A4590")]
	public static bool4x3 operator !=(double4x3 lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF9")]
	[Address(RVA = "0x47A46F0", Offset = "0x47A46F0", VA = "0x47A46F0")]
	public static bool4x3 operator !=(double4x3 lhs, double rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FFA")]
	[Address(RVA = "0x47A47D0", Offset = "0x47A47D0", VA = "0x47A47D0")]
	public static bool4x3 operator !=(double lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FFC")]
	[Address(RVA = "0x47A48C0", Offset = "0x47A48C0", VA = "0x47A48C0", Slot = "4")]
	public bool Equals(double4x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FFD")]
	[Address(RVA = "0x47A4990", Offset = "0x47A4990", VA = "0x47A4990", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FFE")]
	[Address(RVA = "0x47A4AC0", Offset = "0x47A4AC0", VA = "0x47A4AC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FFF")]
	[Address(RVA = "0x47A4C70", Offset = "0x47A4C70", VA = "0x47A4C70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001000")]
	[Address(RVA = "0x47A5100", Offset = "0x47A5100", VA = "0x47A5100", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
