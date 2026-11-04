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
		[Address(RVA = "0x841B50", Offset = "0x840150", VA = "0x180841B50")]
		get
		{
			return ref *(double4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600100D")]
	[Address(RVA = "0x2A6BC20", Offset = "0x2A6A220", VA = "0x182A6BC20")]
	public double4x3(double4 c0, double4 c1, double4 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600100E")]
	[Address(RVA = "0x2A6BB30", Offset = "0x2A6A130", VA = "0x182A6BB30")]
	public double4x3(double m00, double m01, double m02, double m10, double m11, double m12, double m20, double m21, double m22, double m30, double m31, double m32)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600100F")]
	[Address(RVA = "0x2A60800", Offset = "0x2A5EE00", VA = "0x182A60800")]
	public double4x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001010")]
	[Address(RVA = "0x29C71C0", Offset = "0x29C57C0", VA = "0x1829C71C0")]
	public double4x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001011")]
	[Address(RVA = "0x29C70B0", Offset = "0x29C56B0", VA = "0x1829C70B0")]
	public double4x3(bool4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001012")]
	[Address(RVA = "0x2A6BBB0", Offset = "0x2A6A1B0", VA = "0x182A6BBB0")]
	public double4x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001013")]
	[Address(RVA = "0x2A6B900", Offset = "0x2A69F00", VA = "0x182A6B900")]
	public double4x3(int4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001014")]
	[Address(RVA = "0x29C6FF0", Offset = "0x29C55F0", VA = "0x1829C6FF0")]
	public double4x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001015")]
	[Address(RVA = "0x2A6B9E0", Offset = "0x2A69FE0", VA = "0x182A6B9E0")]
	public double4x3(uint4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001016")]
	[Address(RVA = "0x2A6BAD0", Offset = "0x2A6A0D0", VA = "0x182A6BAD0")]
	public double4x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001017")]
	[Address(RVA = "0x2A6B8D0", Offset = "0x2A69ED0", VA = "0x182A6B8D0")]
	public double4x3(float4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001018")]
	[Address(RVA = "0x29D9C00", Offset = "0x29D8200", VA = "0x1829D9C00")]
	public static implicit operator double4x3(double v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001019")]
	[Address(RVA = "0x2A6C6E0", Offset = "0x2A6ACE0", VA = "0x182A6C6E0")]
	public static explicit operator double4x3(bool v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600101A")]
	[Address(RVA = "0x29DAD50", Offset = "0x29D9350", VA = "0x1829DAD50")]
	public static explicit operator double4x3(bool4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600101B")]
	[Address(RVA = "0x29DAE20", Offset = "0x29D9420", VA = "0x1829DAE20")]
	public static implicit operator double4x3(int v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600101C")]
	[Address(RVA = "0x29DAFA0", Offset = "0x29D95A0", VA = "0x1829DAFA0")]
	public static implicit operator double4x3(int4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600101D")]
	[Address(RVA = "0x2A6CBA0", Offset = "0x2A6B1A0", VA = "0x182A6CBA0")]
	public static implicit operator double4x3(uint v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600101E")]
	[Address(RVA = "0x29DAC50", Offset = "0x29D9250", VA = "0x1829DAC50")]
	public static implicit operator double4x3(uint4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600101F")]
	[Address(RVA = "0x29DB120", Offset = "0x29D9720", VA = "0x1829DB120")]
	public static implicit operator double4x3(float v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001020")]
	[Address(RVA = "0x29DB180", Offset = "0x29D9780", VA = "0x1829DB180")]
	public static implicit operator double4x3(float4x3 v)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001021")]
	[Address(RVA = "0x2A6DA10", Offset = "0x2A6C010", VA = "0x182A6DA10")]
	public static double4x3 operator *(double4x3 lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001022")]
	[Address(RVA = "0x2A6DB10", Offset = "0x2A6C110", VA = "0x182A6DB10")]
	public static double4x3 operator *(double4x3 lhs, double rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001023")]
	[Address(RVA = "0x2A6DBE0", Offset = "0x2A6C1E0", VA = "0x182A6DBE0")]
	public static double4x3 operator *(double lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001024")]
	[Address(RVA = "0x2A6BD30", Offset = "0x2A6A330", VA = "0x182A6BD30")]
	public static double4x3 operator +(double4x3 lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001025")]
	[Address(RVA = "0x2A6BC60", Offset = "0x2A6A260", VA = "0x182A6BC60")]
	public static double4x3 operator +(double4x3 lhs, double rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001026")]
	[Address(RVA = "0x2A6BE30", Offset = "0x2A6A430", VA = "0x182A6BE30")]
	public static double4x3 operator +(double lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001027")]
	[Address(RVA = "0x2A6DE90", Offset = "0x2A6C490", VA = "0x182A6DE90")]
	public static double4x3 operator -(double4x3 lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001028")]
	[Address(RVA = "0x2A6DDB0", Offset = "0x2A6C3B0", VA = "0x182A6DDB0")]
	public static double4x3 operator -(double4x3 lhs, double rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001029")]
	[Address(RVA = "0x2A6DCC0", Offset = "0x2A6C2C0", VA = "0x182A6DCC0")]
	public static double4x3 operator -(double lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600102A")]
	[Address(RVA = "0x2A6C050", Offset = "0x2A6A650", VA = "0x182A6C050")]
	public static double4x3 operator /(double4x3 lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600102B")]
	[Address(RVA = "0x2A6C150", Offset = "0x2A6A750", VA = "0x182A6C150")]
	public static double4x3 operator /(double4x3 lhs, double rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600102C")]
	[Address(RVA = "0x2A6C230", Offset = "0x2A6A830", VA = "0x182A6C230")]
	public static double4x3 operator /(double lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600102D")]
	[Address(RVA = "0x2A6D560", Offset = "0x2A6BB60", VA = "0x182A6D560")]
	public static double4x3 operator %(double4x3 lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600102E")]
	[Address(RVA = "0x2A6D6F0", Offset = "0x2A6BCF0", VA = "0x182A6D6F0")]
	public static double4x3 operator %(double4x3 lhs, double rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600102F")]
	[Address(RVA = "0x2A6D880", Offset = "0x2A6BE80", VA = "0x182A6D880")]
	public static double4x3 operator %(double lhs, double4x3 rhs)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001030")]
	[Address(RVA = "0x2A6CBE0", Offset = "0x2A6B1E0", VA = "0x182A6CBE0")]
	public static double4x3 operator ++(double4x3 val)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001031")]
	[Address(RVA = "0x2A6BF10", Offset = "0x2A6A510", VA = "0x182A6BF10")]
	public static double4x3 operator --(double4x3 val)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001032")]
	[Address(RVA = "0x2A6D320", Offset = "0x2A6B920", VA = "0x182A6D320")]
	public static bool4x3 operator <(double4x3 lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001033")]
	[Address(RVA = "0x2A6D400", Offset = "0x2A6BA00", VA = "0x182A6D400")]
	public static bool4x3 operator <(double4x3 lhs, double rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001034")]
	[Address(RVA = "0x2A6D490", Offset = "0x2A6BA90", VA = "0x182A6D490")]
	public static bool4x3 operator <(double lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001035")]
	[Address(RVA = "0x2A6D0E0", Offset = "0x2A6B6E0", VA = "0x182A6D0E0")]
	public static bool4x3 operator <=(double4x3 lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001036")]
	[Address(RVA = "0x2A6D1C0", Offset = "0x2A6B7C0", VA = "0x182A6D1C0")]
	public static bool4x3 operator <=(double4x3 lhs, double rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001037")]
	[Address(RVA = "0x2A6D250", Offset = "0x2A6B850", VA = "0x182A6D250")]
	public static bool4x3 operator <=(double lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001038")]
	[Address(RVA = "0x2A6CA20", Offset = "0x2A6B020", VA = "0x182A6CA20")]
	public static bool4x3 operator >(double4x3 lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001039")]
	[Address(RVA = "0x2A6C960", Offset = "0x2A6AF60", VA = "0x182A6C960")]
	public static bool4x3 operator >(double4x3 lhs, double rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600103A")]
	[Address(RVA = "0x2A6CB00", Offset = "0x2A6B100", VA = "0x182A6CB00")]
	public static bool4x3 operator >(double lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600103B")]
	[Address(RVA = "0x2A6C720", Offset = "0x2A6AD20", VA = "0x182A6C720")]
	public static bool4x3 operator >=(double4x3 lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600103C")]
	[Address(RVA = "0x2A6C800", Offset = "0x2A6AE00", VA = "0x182A6C800")]
	public static bool4x3 operator >=(double4x3 lhs, double rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600103D")]
	[Address(RVA = "0x2A6C8C0", Offset = "0x2A6AEC0", VA = "0x182A6C8C0")]
	public static bool4x3 operator >=(double lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600103E")]
	[Address(RVA = "0x2A6DF90", Offset = "0x2A6C590", VA = "0x182A6DF90")]
	public static double4x3 operator -(double4x3 val)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600103F")]
	[Address(RVA = "0x2A6E060", Offset = "0x2A6C660", VA = "0x182A6E060")]
	public static double4x3 operator +(double4x3 val)
	{
		return default(double4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001040")]
	[Address(RVA = "0x2A6C320", Offset = "0x2A6A920", VA = "0x182A6C320")]
	public static bool4x3 operator ==(double4x3 lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001041")]
	[Address(RVA = "0x2A6C480", Offset = "0x2A6AA80", VA = "0x182A6C480")]
	public static bool4x3 operator ==(double4x3 lhs, double rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001042")]
	[Address(RVA = "0x2A6C5C0", Offset = "0x2A6ABC0", VA = "0x182A6C5C0")]
	public static bool4x3 operator ==(double lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001043")]
	[Address(RVA = "0x2A6CD20", Offset = "0x2A6B320", VA = "0x182A6CD20")]
	public static bool4x3 operator !=(double4x3 lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001044")]
	[Address(RVA = "0x2A6CE80", Offset = "0x2A6B480", VA = "0x182A6CE80")]
	public static bool4x3 operator !=(double4x3 lhs, double rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001045")]
	[Address(RVA = "0x2A6CFC0", Offset = "0x2A6B5C0", VA = "0x182A6CFC0")]
	public static bool4x3 operator !=(double lhs, double4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001047")]
	[Address(RVA = "0x2A63DF0", Offset = "0x2A623F0", VA = "0x182A63DF0", Slot = "4")]
	public bool Equals(double4x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001048")]
	[Address(RVA = "0x2A6AD90", Offset = "0x2A69390", VA = "0x182A6AD90", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001049")]
	[Address(RVA = "0x2A6AE70", Offset = "0x2A69470", VA = "0x182A6AE70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600104A")]
	[Address(RVA = "0x2A6B390", Offset = "0x2A69990", VA = "0x182A6B390", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600104B")]
	[Address(RVA = "0x2A6AEC0", Offset = "0x2A694C0", VA = "0x182A6AEC0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
