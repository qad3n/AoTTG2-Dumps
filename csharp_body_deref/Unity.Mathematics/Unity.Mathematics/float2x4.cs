// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.float2x4
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
[Token(Token = "0x200002D")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float2x4 : IEquatable<float2x4>, IFormattable
{
	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x0")]
	public float2 c0;

	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x8")]
	public float2 c1;

	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x10")]
	public float2 c2;

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x18")]
	public float2 c3;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float2x4 zero;

	[Token(Token = "0x170003FA")]
	public unsafe ref float2 this[int index]
	{
		[Token(Token = "0x60011AD")]
		[Address(RVA = "0x6449A20", Offset = "0x6448A20", VA = "0x6449A20")]
		get
		{
			return ref *(float2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001174")]
	[Address(RVA = "0x6448050", Offset = "0x6447050", VA = "0x6448050")]
	public float2x4(float2 c0, float2 c1, float2 c2, float2 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001175")]
	[Address(RVA = "0x6448060", Offset = "0x6447060", VA = "0x6448060")]
	public float2x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001176")]
	[Address(RVA = "0x6448090", Offset = "0x6447090", VA = "0x6448090")]
	public float2x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001177")]
	[Address(RVA = "0x64480A0", Offset = "0x64470A0", VA = "0x64480A0")]
	public float2x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001178")]
	[Address(RVA = "0x64480D0", Offset = "0x64470D0", VA = "0x64480D0")]
	public float2x4(bool2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001179")]
	[Address(RVA = "0x6448170", Offset = "0x6447170", VA = "0x6448170")]
	public float2x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600117A")]
	[Address(RVA = "0x6448180", Offset = "0x6447180", VA = "0x6448180")]
	public float2x4(int2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600117B")]
	[Address(RVA = "0x6448200", Offset = "0x6447200", VA = "0x6448200")]
	public float2x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600117C")]
	[Address(RVA = "0x6448220", Offset = "0x6447220", VA = "0x6448220")]
	public float2x4(uint2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600117D")]
	[Address(RVA = "0x64482B0", Offset = "0x64472B0", VA = "0x64482B0")]
	public float2x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600117E")]
	[Address(RVA = "0x64482C0", Offset = "0x64472C0", VA = "0x64482C0")]
	public float2x4(double2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600117F")]
	[Address(RVA = "0x64482F0", Offset = "0x64472F0", VA = "0x64482F0")]
	public static implicit operator float2x4(float v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001180")]
	[Address(RVA = "0x6448300", Offset = "0x6447300", VA = "0x6448300")]
	public static explicit operator float2x4(bool v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001181")]
	[Address(RVA = "0x6448330", Offset = "0x6447330", VA = "0x6448330")]
	public static explicit operator float2x4(bool2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001182")]
	[Address(RVA = "0x64483E0", Offset = "0x64473E0", VA = "0x64483E0")]
	public static implicit operator float2x4(int v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001183")]
	[Address(RVA = "0x6448400", Offset = "0x6447400", VA = "0x6448400")]
	public static implicit operator float2x4(int2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001184")]
	[Address(RVA = "0x6448470", Offset = "0x6447470", VA = "0x6448470")]
	public static implicit operator float2x4(uint v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001185")]
	[Address(RVA = "0x6448490", Offset = "0x6447490", VA = "0x6448490")]
	public static implicit operator float2x4(uint2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001186")]
	[Address(RVA = "0x6448510", Offset = "0x6447510", VA = "0x6448510")]
	public static explicit operator float2x4(double v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001187")]
	[Address(RVA = "0x6448530", Offset = "0x6447530", VA = "0x6448530")]
	public static explicit operator float2x4(double2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001188")]
	[Address(RVA = "0x6448560", Offset = "0x6447560", VA = "0x6448560")]
	public static float2x4 operator *(float2x4 lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001189")]
	[Address(RVA = "0x64485B0", Offset = "0x64475B0", VA = "0x64485B0")]
	public static float2x4 operator *(float2x4 lhs, float rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600118A")]
	[Address(RVA = "0x64485F0", Offset = "0x64475F0", VA = "0x64485F0")]
	public static float2x4 operator *(float lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600118B")]
	[Address(RVA = "0x6448630", Offset = "0x6447630", VA = "0x6448630")]
	public static float2x4 operator +(float2x4 lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600118C")]
	[Address(RVA = "0x6448680", Offset = "0x6447680", VA = "0x6448680")]
	public static float2x4 operator +(float2x4 lhs, float rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600118D")]
	[Address(RVA = "0x64486C0", Offset = "0x64476C0", VA = "0x64486C0")]
	public static float2x4 operator +(float lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600118E")]
	[Address(RVA = "0x6448700", Offset = "0x6447700", VA = "0x6448700")]
	public static float2x4 operator -(float2x4 lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600118F")]
	[Address(RVA = "0x6448750", Offset = "0x6447750", VA = "0x6448750")]
	public static float2x4 operator -(float2x4 lhs, float rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001190")]
	[Address(RVA = "0x6448790", Offset = "0x6447790", VA = "0x6448790")]
	public static float2x4 operator -(float lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001191")]
	[Address(RVA = "0x64487E0", Offset = "0x64477E0", VA = "0x64487E0")]
	public static float2x4 operator /(float2x4 lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001192")]
	[Address(RVA = "0x6448830", Offset = "0x6447830", VA = "0x6448830")]
	public static float2x4 operator /(float2x4 lhs, float rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001193")]
	[Address(RVA = "0x6448870", Offset = "0x6447870", VA = "0x6448870")]
	public static float2x4 operator /(float lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001194")]
	[Address(RVA = "0x64488C0", Offset = "0x64478C0", VA = "0x64488C0")]
	public static float2x4 operator %(float2x4 lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001195")]
	[Address(RVA = "0x6448A20", Offset = "0x6447A20", VA = "0x6448A20")]
	public static float2x4 operator %(float2x4 lhs, float rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001196")]
	[Address(RVA = "0x6448B50", Offset = "0x6447B50", VA = "0x6448B50")]
	public static float2x4 operator %(float lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001197")]
	[Address(RVA = "0x6448C80", Offset = "0x6447C80", VA = "0x6448C80")]
	public static float2x4 operator ++(float2x4 val)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001198")]
	[Address(RVA = "0x6448CC0", Offset = "0x6447CC0", VA = "0x6448CC0")]
	public static float2x4 operator --(float2x4 val)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001199")]
	[Address(RVA = "0x6448D00", Offset = "0x6447D00", VA = "0x6448D00")]
	public static bool2x4 operator <(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600119A")]
	[Address(RVA = "0x6448DC0", Offset = "0x6447DC0", VA = "0x6448DC0")]
	public static bool2x4 operator <(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600119B")]
	[Address(RVA = "0x6448E60", Offset = "0x6447E60", VA = "0x6448E60")]
	public static bool2x4 operator <(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600119C")]
	[Address(RVA = "0x6448F00", Offset = "0x6447F00", VA = "0x6448F00")]
	public static bool2x4 operator <=(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600119D")]
	[Address(RVA = "0x6448FC0", Offset = "0x6447FC0", VA = "0x6448FC0")]
	public static bool2x4 operator <=(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600119E")]
	[Address(RVA = "0x6449060", Offset = "0x6448060", VA = "0x6449060")]
	public static bool2x4 operator <=(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600119F")]
	[Address(RVA = "0x6449100", Offset = "0x6448100", VA = "0x6449100")]
	public static bool2x4 operator >(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A0")]
	[Address(RVA = "0x64491C0", Offset = "0x64481C0", VA = "0x64491C0")]
	public static bool2x4 operator >(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A1")]
	[Address(RVA = "0x6449260", Offset = "0x6448260", VA = "0x6449260")]
	public static bool2x4 operator >(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A2")]
	[Address(RVA = "0x6449300", Offset = "0x6448300", VA = "0x6449300")]
	public static bool2x4 operator >=(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A3")]
	[Address(RVA = "0x64493C0", Offset = "0x64483C0", VA = "0x64493C0")]
	public static bool2x4 operator >=(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x6449460", Offset = "0x6448460", VA = "0x6449460")]
	public static bool2x4 operator >=(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A5")]
	[Address(RVA = "0x6449500", Offset = "0x6448500", VA = "0x6449500")]
	public static float2x4 operator -(float2x4 val)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A6")]
	[Address(RVA = "0x6449540", Offset = "0x6448540", VA = "0x6449540")]
	public static float2x4 operator +(float2x4 val)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A7")]
	[Address(RVA = "0x6449560", Offset = "0x6448560", VA = "0x6449560")]
	public static bool2x4 operator ==(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A8")]
	[Address(RVA = "0x6449640", Offset = "0x6448640", VA = "0x6449640")]
	public static bool2x4 operator ==(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A9")]
	[Address(RVA = "0x6449700", Offset = "0x6448700", VA = "0x6449700")]
	public static bool2x4 operator ==(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011AA")]
	[Address(RVA = "0x64497C0", Offset = "0x64487C0", VA = "0x64497C0")]
	public static bool2x4 operator !=(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011AB")]
	[Address(RVA = "0x64498A0", Offset = "0x64488A0", VA = "0x64498A0")]
	public static bool2x4 operator !=(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011AC")]
	[Address(RVA = "0x6449960", Offset = "0x6448960", VA = "0x6449960")]
	public static bool2x4 operator !=(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011AE")]
	[Address(RVA = "0x6449A30", Offset = "0x6448A30", VA = "0x6449A30", Slot = "4")]
	public bool Equals(float2x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60011AF")]
	[Address(RVA = "0x6449AC0", Offset = "0x6448AC0", VA = "0x6449AC0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011B0")]
	[Address(RVA = "0x6449BB0", Offset = "0x6448BB0", VA = "0x6449BB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011B1")]
	[Address(RVA = "0x6449C40", Offset = "0x6448C40", VA = "0x6449C40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011B2")]
	[Address(RVA = "0x6449F90", Offset = "0x6448F90", VA = "0x6449F90", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
