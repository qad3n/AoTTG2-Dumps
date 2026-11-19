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
[Token(Token = "0x2000028")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double4x4 : IEquatable<double4x4>, IFormattable
{
	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x0")]
	public double4 c0;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x20")]
	public double4 c1;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x40")]
	public double4 c2;

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x60")]
	public double4 c3;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double4x4 identity;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x80")]
	public static readonly double4x4 zero;

	[Token(Token = "0x170003DA")]
	public unsafe ref double4 this[int index]
	{
		[Token(Token = "0x6001085")]
		[Address(RVA = "0x6441870", Offset = "0x6440870", VA = "0x6441870")]
		get
		{
			return ref *(double4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600104C")]
	[Address(RVA = "0x643DE50", Offset = "0x643CE50", VA = "0x643DE50")]
	public double4x4(double4 c0, double4 c1, double4 c2, double4 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600104D")]
	[Address(RVA = "0x643DEA0", Offset = "0x643CEA0", VA = "0x643DEA0")]
	public double4x4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23, double m30, double m31, double m32, double m33)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600104E")]
	[Address(RVA = "0x643DF30", Offset = "0x643CF30", VA = "0x643DF30")]
	public double4x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600104F")]
	[Address(RVA = "0x643DF80", Offset = "0x643CF80", VA = "0x643DF80")]
	public double4x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001050")]
	[Address(RVA = "0x643E070", Offset = "0x643D070", VA = "0x643E070")]
	public double4x4(bool4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001051")]
	[Address(RVA = "0x643E1B0", Offset = "0x643D1B0", VA = "0x643E1B0")]
	public double4x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001052")]
	[Address(RVA = "0x643E210", Offset = "0x643D210", VA = "0x643E210")]
	public double4x4(int4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001053")]
	[Address(RVA = "0x643E310", Offset = "0x643D310", VA = "0x643E310")]
	public double4x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001054")]
	[Address(RVA = "0x643E370", Offset = "0x643D370", VA = "0x643E370")]
	public double4x4(uint4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001055")]
	[Address(RVA = "0x643E490", Offset = "0x643D490", VA = "0x643E490")]
	public double4x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001056")]
	[Address(RVA = "0x643E4F0", Offset = "0x643D4F0", VA = "0x643E4F0")]
	public double4x4(float4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001057")]
	[Address(RVA = "0x643E540", Offset = "0x643D540", VA = "0x643E540")]
	public static implicit operator double4x4(double v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001058")]
	[Address(RVA = "0x643E5A0", Offset = "0x643D5A0", VA = "0x643E5A0")]
	public static explicit operator double4x4(bool v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001059")]
	[Address(RVA = "0x643E660", Offset = "0x643D660", VA = "0x643E660")]
	public static explicit operator double4x4(bool4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600105A")]
	[Address(RVA = "0x643E7B0", Offset = "0x643D7B0", VA = "0x643E7B0")]
	public static implicit operator double4x4(int v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600105B")]
	[Address(RVA = "0x643E810", Offset = "0x643D810", VA = "0x643E810")]
	public static implicit operator double4x4(int4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600105C")]
	[Address(RVA = "0x643E920", Offset = "0x643D920", VA = "0x643E920")]
	public static implicit operator double4x4(uint v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600105D")]
	[Address(RVA = "0x643E980", Offset = "0x643D980", VA = "0x643E980")]
	public static implicit operator double4x4(uint4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600105E")]
	[Address(RVA = "0x643EAB0", Offset = "0x643DAB0", VA = "0x643EAB0")]
	public static implicit operator double4x4(float v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600105F")]
	[Address(RVA = "0x643EB10", Offset = "0x643DB10", VA = "0x643EB10")]
	public static implicit operator double4x4(float4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001060")]
	[Address(RVA = "0x643EB60", Offset = "0x643DB60", VA = "0x643EB60")]
	public static double4x4 operator *(double4x4 lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001061")]
	[Address(RVA = "0x643EC10", Offset = "0x643DC10", VA = "0x643EC10")]
	public static double4x4 operator *(double4x4 lhs, double rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001062")]
	[Address(RVA = "0x643EC90", Offset = "0x643DC90", VA = "0x643EC90")]
	public static double4x4 operator *(double lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001063")]
	[Address(RVA = "0x643ED10", Offset = "0x643DD10", VA = "0x643ED10")]
	public static double4x4 operator +(double4x4 lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001064")]
	[Address(RVA = "0x643EDC0", Offset = "0x643DDC0", VA = "0x643EDC0")]
	public static double4x4 operator +(double4x4 lhs, double rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001065")]
	[Address(RVA = "0x643EE40", Offset = "0x643DE40", VA = "0x643EE40")]
	public static double4x4 operator +(double lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001066")]
	[Address(RVA = "0x643EEC0", Offset = "0x643DEC0", VA = "0x643EEC0")]
	public static double4x4 operator -(double4x4 lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001067")]
	[Address(RVA = "0x643EF70", Offset = "0x643DF70", VA = "0x643EF70")]
	public static double4x4 operator -(double4x4 lhs, double rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001068")]
	[Address(RVA = "0x643EFF0", Offset = "0x643DFF0", VA = "0x643EFF0")]
	public static double4x4 operator -(double lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001069")]
	[Address(RVA = "0x643F070", Offset = "0x643E070", VA = "0x643F070")]
	public static double4x4 operator /(double4x4 lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600106A")]
	[Address(RVA = "0x643F120", Offset = "0x643E120", VA = "0x643F120")]
	public static double4x4 operator /(double4x4 lhs, double rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600106B")]
	[Address(RVA = "0x643F1A0", Offset = "0x643E1A0", VA = "0x643F1A0")]
	public static double4x4 operator /(double lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600106C")]
	[Address(RVA = "0x643F220", Offset = "0x643E220", VA = "0x643F220")]
	public static double4x4 operator %(double4x4 lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600106D")]
	[Address(RVA = "0x643F5F0", Offset = "0x643E5F0", VA = "0x643F5F0")]
	public static double4x4 operator %(double4x4 lhs, double rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600106E")]
	[Address(RVA = "0x643F8F0", Offset = "0x643E8F0", VA = "0x643F8F0")]
	public static double4x4 operator %(double lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600106F")]
	[Address(RVA = "0x643FBF0", Offset = "0x643EBF0", VA = "0x643FBF0")]
	public static double4x4 operator ++(double4x4 val)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001070")]
	[Address(RVA = "0x643FC70", Offset = "0x643EC70", VA = "0x643FC70")]
	public static double4x4 operator --(double4x4 val)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001071")]
	[Address(RVA = "0x643FCF0", Offset = "0x643ECF0", VA = "0x643FCF0")]
	public static bool4x4 operator <(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001072")]
	[Address(RVA = "0x643FEA0", Offset = "0x643EEA0", VA = "0x643FEA0")]
	public static bool4x4 operator <(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001073")]
	[Address(RVA = "0x643FFC0", Offset = "0x643EFC0", VA = "0x643FFC0")]
	public static bool4x4 operator <(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001074")]
	[Address(RVA = "0x6440120", Offset = "0x643F120", VA = "0x6440120")]
	public static bool4x4 operator <=(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001075")]
	[Address(RVA = "0x64402D0", Offset = "0x643F2D0", VA = "0x64402D0")]
	public static bool4x4 operator <=(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001076")]
	[Address(RVA = "0x64403F0", Offset = "0x643F3F0", VA = "0x64403F0")]
	public static bool4x4 operator <=(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001077")]
	[Address(RVA = "0x6440550", Offset = "0x643F550", VA = "0x6440550")]
	public static bool4x4 operator >(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001078")]
	[Address(RVA = "0x6440700", Offset = "0x643F700", VA = "0x6440700")]
	public static bool4x4 operator >(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001079")]
	[Address(RVA = "0x6440860", Offset = "0x643F860", VA = "0x6440860")]
	public static bool4x4 operator >(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600107A")]
	[Address(RVA = "0x6440980", Offset = "0x643F980", VA = "0x6440980")]
	public static bool4x4 operator >=(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600107B")]
	[Address(RVA = "0x6440B30", Offset = "0x643FB30", VA = "0x6440B30")]
	public static bool4x4 operator >=(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600107C")]
	[Address(RVA = "0x6440C90", Offset = "0x643FC90", VA = "0x6440C90")]
	public static bool4x4 operator >=(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600107D")]
	[Address(RVA = "0x6440DB0", Offset = "0x643FDB0", VA = "0x6440DB0")]
	public static double4x4 operator -(double4x4 val)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600107E")]
	[Address(RVA = "0x6440E20", Offset = "0x643FE20", VA = "0x6440E20")]
	public static double4x4 operator +(double4x4 val)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600107F")]
	[Address(RVA = "0x6440E70", Offset = "0x643FE70", VA = "0x6440E70")]
	public static bool4x4 operator ==(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001080")]
	[Address(RVA = "0x6441050", Offset = "0x6440050", VA = "0x6441050")]
	public static bool4x4 operator ==(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001081")]
	[Address(RVA = "0x64411E0", Offset = "0x64401E0", VA = "0x64411E0")]
	public static bool4x4 operator ==(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001082")]
	[Address(RVA = "0x6441370", Offset = "0x6440370", VA = "0x6441370")]
	public static bool4x4 operator !=(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001083")]
	[Address(RVA = "0x6441550", Offset = "0x6440550", VA = "0x6441550")]
	public static bool4x4 operator !=(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001084")]
	[Address(RVA = "0x64416E0", Offset = "0x64406E0", VA = "0x64416E0")]
	public static bool4x4 operator !=(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001086")]
	[Address(RVA = "0x6441880", Offset = "0x6440880", VA = "0x6441880", Slot = "4")]
	public bool Equals(double4x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001087")]
	[Address(RVA = "0x64419B0", Offset = "0x64409B0", VA = "0x64419B0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001088")]
	[Address(RVA = "0x6441B40", Offset = "0x6440B40", VA = "0x6441B40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001089")]
	[Address(RVA = "0x6441D20", Offset = "0x6440D20", VA = "0x6441D20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600108A")]
	[Address(RVA = "0x6442360", Offset = "0x6441360", VA = "0x6442360", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
