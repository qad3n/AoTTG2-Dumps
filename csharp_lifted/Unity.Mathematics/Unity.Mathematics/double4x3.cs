// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.double4x3
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
public struct double4x3 : IEquatable<double4x3>, IFormattable
{
	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x0")]
	public double4 c0;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0x20")]
	public double4 c1;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x40")]
	public double4 c2;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double4x3 zero;

	[Token(Token = "0x170003D9")]
	public unsafe ref double4 this[int index]
	{
		[Token(Token = "0x6001046")]
		[Address(RVA = "0x643D1F0", Offset = "0x643C1F0", VA = "0x643D1F0")]
		get
		{
			return ref *(double4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600100D")]
	[Address(RVA = "0x643A710", Offset = "0x6439710", VA = "0x643A710")]
	public double4x3(double4 c0, double4 c1, double4 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600100E")]
	[Address(RVA = "0x643A750", Offset = "0x6439750", VA = "0x643A750")]
	public double4x3(double m00, double m01, double m02, double m10, double m11, double m12, double m20, double m21, double m22, double m30, double m31, double m32)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600100F")]
	[Address(RVA = "0x643A7B0", Offset = "0x64397B0", VA = "0x643A7B0")]
	public double4x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001010")]
	[Address(RVA = "0x643A7F0", Offset = "0x64397F0", VA = "0x643A7F0")]
	public double4x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001011")]
	[Address(RVA = "0x643A8B0", Offset = "0x64398B0", VA = "0x643A8B0")]
	public double4x3(bool4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001012")]
	[Address(RVA = "0x643A9B0", Offset = "0x64399B0", VA = "0x643A9B0")]
	public double4x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001013")]
	[Address(RVA = "0x643A9F0", Offset = "0x64399F0", VA = "0x643A9F0")]
	public double4x3(int4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001014")]
	[Address(RVA = "0x643AAB0", Offset = "0x6439AB0", VA = "0x643AAB0")]
	public double4x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001015")]
	[Address(RVA = "0x643AB00", Offset = "0x6439B00", VA = "0x643AB00")]
	public double4x3(uint4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001016")]
	[Address(RVA = "0x643ABE0", Offset = "0x6439BE0", VA = "0x643ABE0")]
	public double4x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001017")]
	[Address(RVA = "0x643AC20", Offset = "0x6439C20", VA = "0x643AC20")]
	public double4x3(float4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001018")]
	[Address(RVA = "0x643AC60", Offset = "0x6439C60", VA = "0x643AC60")]
	public static implicit operator double4x3(double v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001019")]
	[Address(RVA = "0x643ACA0", Offset = "0x6439CA0", VA = "0x643ACA0")]
	public static explicit operator double4x3(bool v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600101A")]
	[Address(RVA = "0x643AD40", Offset = "0x6439D40", VA = "0x643AD40")]
	public static explicit operator double4x3(bool4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600101B")]
	[Address(RVA = "0x643AE40", Offset = "0x6439E40", VA = "0x643AE40")]
	public static implicit operator double4x3(int v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600101C")]
	[Address(RVA = "0x643AE90", Offset = "0x6439E90", VA = "0x643AE90")]
	public static implicit operator double4x3(int4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600101D")]
	[Address(RVA = "0x643AF50", Offset = "0x6439F50", VA = "0x643AF50")]
	public static implicit operator double4x3(uint v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600101E")]
	[Address(RVA = "0x643AFA0", Offset = "0x6439FA0", VA = "0x643AFA0")]
	public static implicit operator double4x3(uint4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600101F")]
	[Address(RVA = "0x643B080", Offset = "0x643A080", VA = "0x643B080")]
	public static implicit operator double4x3(float v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001020")]
	[Address(RVA = "0x643B0D0", Offset = "0x643A0D0", VA = "0x643B0D0")]
	public static implicit operator double4x3(float4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001021")]
	[Address(RVA = "0x643B110", Offset = "0x643A110", VA = "0x643B110")]
	public static double4x3 operator *(double4x3 lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001022")]
	[Address(RVA = "0x643B190", Offset = "0x643A190", VA = "0x643B190")]
	public static double4x3 operator *(double4x3 lhs, double rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001023")]
	[Address(RVA = "0x643B1F0", Offset = "0x643A1F0", VA = "0x643B1F0")]
	public static double4x3 operator *(double lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001024")]
	[Address(RVA = "0x643B250", Offset = "0x643A250", VA = "0x643B250")]
	public static double4x3 operator +(double4x3 lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001025")]
	[Address(RVA = "0x643B2D0", Offset = "0x643A2D0", VA = "0x643B2D0")]
	public static double4x3 operator +(double4x3 lhs, double rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001026")]
	[Address(RVA = "0x643B330", Offset = "0x643A330", VA = "0x643B330")]
	public static double4x3 operator +(double lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001027")]
	[Address(RVA = "0x643B390", Offset = "0x643A390", VA = "0x643B390")]
	public static double4x3 operator -(double4x3 lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001028")]
	[Address(RVA = "0x643B410", Offset = "0x643A410", VA = "0x643B410")]
	public static double4x3 operator -(double4x3 lhs, double rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001029")]
	[Address(RVA = "0x643B480", Offset = "0x643A480", VA = "0x643B480")]
	public static double4x3 operator -(double lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600102A")]
	[Address(RVA = "0x643B4E0", Offset = "0x643A4E0", VA = "0x643B4E0")]
	public static double4x3 operator /(double4x3 lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600102B")]
	[Address(RVA = "0x643B560", Offset = "0x643A560", VA = "0x643B560")]
	public static double4x3 operator /(double4x3 lhs, double rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600102C")]
	[Address(RVA = "0x643B5D0", Offset = "0x643A5D0", VA = "0x643B5D0")]
	public static double4x3 operator /(double lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600102D")]
	[Address(RVA = "0x643B630", Offset = "0x643A630", VA = "0x643B630")]
	public static double4x3 operator %(double4x3 lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600102E")]
	[Address(RVA = "0x643B900", Offset = "0x643A900", VA = "0x643B900")]
	public static double4x3 operator %(double4x3 lhs, double rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600102F")]
	[Address(RVA = "0x643BB30", Offset = "0x643AB30", VA = "0x643BB30")]
	public static double4x3 operator %(double lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001030")]
	[Address(RVA = "0x643BD60", Offset = "0x643AD60", VA = "0x643BD60")]
	public static double4x3 operator ++(double4x3 val)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001031")]
	[Address(RVA = "0x643BDD0", Offset = "0x643ADD0", VA = "0x643BDD0")]
	public static double4x3 operator --(double4x3 val)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001032")]
	[Address(RVA = "0x643BE40", Offset = "0x643AE40", VA = "0x643BE40")]
	public static bool4x3 operator <(double4x3 lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001033")]
	[Address(RVA = "0x643BF70", Offset = "0x643AF70", VA = "0x643BF70")]
	public static bool4x3 operator <(double4x3 lhs, double rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001034")]
	[Address(RVA = "0x643C040", Offset = "0x643B040", VA = "0x643C040")]
	public static bool4x3 operator <(double lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001035")]
	[Address(RVA = "0x643C140", Offset = "0x643B140", VA = "0x643C140")]
	public static bool4x3 operator <=(double4x3 lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001036")]
	[Address(RVA = "0x643C270", Offset = "0x643B270", VA = "0x643C270")]
	public static bool4x3 operator <=(double4x3 lhs, double rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001037")]
	[Address(RVA = "0x643C340", Offset = "0x643B340", VA = "0x643C340")]
	public static bool4x3 operator <=(double lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001038")]
	[Address(RVA = "0x643C440", Offset = "0x643B440", VA = "0x643C440")]
	public static bool4x3 operator >(double4x3 lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001039")]
	[Address(RVA = "0x643C570", Offset = "0x643B570", VA = "0x643C570")]
	public static bool4x3 operator >(double4x3 lhs, double rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600103A")]
	[Address(RVA = "0x643C670", Offset = "0x643B670", VA = "0x643C670")]
	public static bool4x3 operator >(double lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600103B")]
	[Address(RVA = "0x643C740", Offset = "0x643B740", VA = "0x643C740")]
	public static bool4x3 operator >=(double4x3 lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600103C")]
	[Address(RVA = "0x643C870", Offset = "0x643B870", VA = "0x643C870")]
	public static bool4x3 operator >=(double4x3 lhs, double rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600103D")]
	[Address(RVA = "0x643C970", Offset = "0x643B970", VA = "0x643C970")]
	public static bool4x3 operator >=(double lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600103E")]
	[Address(RVA = "0x643CA40", Offset = "0x643BA40", VA = "0x643CA40")]
	public static double4x3 operator -(double4x3 val)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600103F")]
	[Address(RVA = "0x643CA90", Offset = "0x643BA90", VA = "0x643CA90")]
	public static double4x3 operator +(double4x3 val)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001040")]
	[Address(RVA = "0x643CAD0", Offset = "0x643BAD0", VA = "0x643CAD0")]
	public static bool4x3 operator ==(double4x3 lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001041")]
	[Address(RVA = "0x643CC20", Offset = "0x643BC20", VA = "0x643CC20")]
	public static bool4x3 operator ==(double4x3 lhs, double rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001042")]
	[Address(RVA = "0x643CD40", Offset = "0x643BD40", VA = "0x643CD40")]
	public static bool4x3 operator ==(double lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001043")]
	[Address(RVA = "0x643CE60", Offset = "0x643BE60", VA = "0x643CE60")]
	public static bool4x3 operator !=(double4x3 lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001044")]
	[Address(RVA = "0x643CFB0", Offset = "0x643BFB0", VA = "0x643CFB0")]
	public static bool4x3 operator !=(double4x3 lhs, double rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001045")]
	[Address(RVA = "0x643D0D0", Offset = "0x643C0D0", VA = "0x643D0D0")]
	public static bool4x3 operator !=(double lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001047")]
	[Address(RVA = "0x643D200", Offset = "0x643C200", VA = "0x643D200", Slot = "4")]
	public bool Equals(double4x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001048")]
	[Address(RVA = "0x643D2D0", Offset = "0x643C2D0", VA = "0x643D2D0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001049")]
	[Address(RVA = "0x643D400", Offset = "0x643C400", VA = "0x643D400", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600104A")]
	[Address(RVA = "0x643D570", Offset = "0x643C570", VA = "0x643D570", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600104B")]
	[Address(RVA = "0x643DA30", Offset = "0x643CA30", VA = "0x643DA30", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
