// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.float3x2
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
[Token(Token = "0x2000030")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float3x2 : IEquatable<float3x2>, IFormattable
{
	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x0")]
	public float3 c0;

	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0xC")]
	public float3 c1;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float3x2 zero;

	[Token(Token = "0x17000471")]
	public unsafe ref float3 this[int index]
	{
		[Token(Token = "0x60012B6")]
		[Address(RVA = "0x644D1E0", Offset = "0x644C1E0", VA = "0x644D1E0")]
		get
		{
			return ref *(float3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600127D")]
	[Address(RVA = "0x644BC40", Offset = "0x644AC40", VA = "0x644BC40")]
	public float3x2(float3 c0, float3 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600127E")]
	[Address(RVA = "0x644BC60", Offset = "0x644AC60", VA = "0x644BC60")]
	public float3x2(float m00, float m01, float m10, float m11, float m20, float m21)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600127F")]
	[Address(RVA = "0x644BC80", Offset = "0x644AC80", VA = "0x644BC80")]
	public float3x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001280")]
	[Address(RVA = "0x644BCA0", Offset = "0x644ACA0", VA = "0x644BCA0")]
	public float3x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001281")]
	[Address(RVA = "0x644BCE0", Offset = "0x644ACE0", VA = "0x644BCE0")]
	public float3x2(bool3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001282")]
	[Address(RVA = "0x644BD90", Offset = "0x644AD90", VA = "0x644BD90")]
	public float3x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001283")]
	[Address(RVA = "0x644BDB0", Offset = "0x644ADB0", VA = "0x644BDB0")]
	public float3x2(int3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001284")]
	[Address(RVA = "0x644BE00", Offset = "0x644AE00", VA = "0x644BE00")]
	public float3x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001285")]
	[Address(RVA = "0x644BE20", Offset = "0x644AE20", VA = "0x644BE20")]
	public float3x2(uint3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001286")]
	[Address(RVA = "0x644BE80", Offset = "0x644AE80", VA = "0x644BE80")]
	public float3x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001287")]
	[Address(RVA = "0x644BEA0", Offset = "0x644AEA0", VA = "0x644BEA0")]
	public float3x2(double3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001288")]
	[Address(RVA = "0x644BEE0", Offset = "0x644AEE0", VA = "0x644BEE0")]
	public static implicit operator float3x2(float v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001289")]
	[Address(RVA = "0x644BF00", Offset = "0x644AF00", VA = "0x644BF00")]
	public static explicit operator float3x2(bool v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128A")]
	[Address(RVA = "0x644BF40", Offset = "0x644AF40", VA = "0x644BF40")]
	public static explicit operator float3x2(bool3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128B")]
	[Address(RVA = "0x644BFF0", Offset = "0x644AFF0", VA = "0x644BFF0")]
	public static implicit operator float3x2(int v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128C")]
	[Address(RVA = "0x644C010", Offset = "0x644B010", VA = "0x644C010")]
	public static implicit operator float3x2(int3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128D")]
	[Address(RVA = "0x644C060", Offset = "0x644B060", VA = "0x644C060")]
	public static implicit operator float3x2(uint v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128E")]
	[Address(RVA = "0x644C090", Offset = "0x644B090", VA = "0x644C090")]
	public static implicit operator float3x2(uint3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128F")]
	[Address(RVA = "0x644C0F0", Offset = "0x644B0F0", VA = "0x644C0F0")]
	public static explicit operator float3x2(double v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001290")]
	[Address(RVA = "0x644C110", Offset = "0x644B110", VA = "0x644C110")]
	public static explicit operator float3x2(double3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001291")]
	[Address(RVA = "0x644C150", Offset = "0x644B150", VA = "0x644C150")]
	public static float3x2 operator *(float3x2 lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001292")]
	[Address(RVA = "0x644C1A0", Offset = "0x644B1A0", VA = "0x644C1A0")]
	public static float3x2 operator *(float3x2 lhs, float rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001293")]
	[Address(RVA = "0x644C1E0", Offset = "0x644B1E0", VA = "0x644C1E0")]
	public static float3x2 operator *(float lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001294")]
	[Address(RVA = "0x644C220", Offset = "0x644B220", VA = "0x644C220")]
	public static float3x2 operator +(float3x2 lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001295")]
	[Address(RVA = "0x644C270", Offset = "0x644B270", VA = "0x644C270")]
	public static float3x2 operator +(float3x2 lhs, float rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001296")]
	[Address(RVA = "0x644C2B0", Offset = "0x644B2B0", VA = "0x644C2B0")]
	public static float3x2 operator +(float lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001297")]
	[Address(RVA = "0x644C2F0", Offset = "0x644B2F0", VA = "0x644C2F0")]
	public static float3x2 operator -(float3x2 lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001298")]
	[Address(RVA = "0x644C340", Offset = "0x644B340", VA = "0x644C340")]
	public static float3x2 operator -(float3x2 lhs, float rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001299")]
	[Address(RVA = "0x644C380", Offset = "0x644B380", VA = "0x644C380")]
	public static float3x2 operator -(float lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129A")]
	[Address(RVA = "0x644C3C0", Offset = "0x644B3C0", VA = "0x644C3C0")]
	public static float3x2 operator /(float3x2 lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129B")]
	[Address(RVA = "0x644C410", Offset = "0x644B410", VA = "0x644C410")]
	public static float3x2 operator /(float3x2 lhs, float rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129C")]
	[Address(RVA = "0x644C450", Offset = "0x644B450", VA = "0x644C450")]
	public static float3x2 operator /(float lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129D")]
	[Address(RVA = "0x644C490", Offset = "0x644B490", VA = "0x644C490")]
	public static float3x2 operator %(float3x2 lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129E")]
	[Address(RVA = "0x644C5D0", Offset = "0x644B5D0", VA = "0x644C5D0")]
	public static float3x2 operator %(float3x2 lhs, float rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129F")]
	[Address(RVA = "0x644C6D0", Offset = "0x644B6D0", VA = "0x644C6D0")]
	public static float3x2 operator %(float lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A0")]
	[Address(RVA = "0x644C7D0", Offset = "0x644B7D0", VA = "0x644C7D0")]
	public static float3x2 operator ++(float3x2 val)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A1")]
	[Address(RVA = "0x644C820", Offset = "0x644B820", VA = "0x644C820")]
	public static float3x2 operator --(float3x2 val)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A2")]
	[Address(RVA = "0x644C870", Offset = "0x644B870", VA = "0x644C870")]
	public static bool3x2 operator <(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A3")]
	[Address(RVA = "0x644C900", Offset = "0x644B900", VA = "0x644C900")]
	public static bool3x2 operator <(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A4")]
	[Address(RVA = "0x644C970", Offset = "0x644B970", VA = "0x644C970")]
	public static bool3x2 operator <(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A5")]
	[Address(RVA = "0x644C9E0", Offset = "0x644B9E0", VA = "0x644C9E0")]
	public static bool3x2 operator <=(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A6")]
	[Address(RVA = "0x644CA70", Offset = "0x644BA70", VA = "0x644CA70")]
	public static bool3x2 operator <=(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A7")]
	[Address(RVA = "0x644CAE0", Offset = "0x644BAE0", VA = "0x644CAE0")]
	public static bool3x2 operator <=(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A8")]
	[Address(RVA = "0x644CB50", Offset = "0x644BB50", VA = "0x644CB50")]
	public static bool3x2 operator >(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x644CBE0", Offset = "0x644BBE0", VA = "0x644CBE0")]
	public static bool3x2 operator >(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012AA")]
	[Address(RVA = "0x644CC50", Offset = "0x644BC50", VA = "0x644CC50")]
	public static bool3x2 operator >(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012AB")]
	[Address(RVA = "0x644CCC0", Offset = "0x644BCC0", VA = "0x644CCC0")]
	public static bool3x2 operator >=(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012AC")]
	[Address(RVA = "0x644CD50", Offset = "0x644BD50", VA = "0x644CD50")]
	public static bool3x2 operator >=(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012AD")]
	[Address(RVA = "0x644CDC0", Offset = "0x644BDC0", VA = "0x644CDC0")]
	public static bool3x2 operator >=(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012AE")]
	[Address(RVA = "0x644CE30", Offset = "0x644BE30", VA = "0x644CE30")]
	public static float3x2 operator -(float3x2 val)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012AF")]
	[Address(RVA = "0x644CE70", Offset = "0x644BE70", VA = "0x644CE70")]
	public static float3x2 operator +(float3x2 val)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B0")]
	[Address(RVA = "0x644CEA0", Offset = "0x644BEA0", VA = "0x644CEA0")]
	public static bool3x2 operator ==(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B1")]
	[Address(RVA = "0x644CF40", Offset = "0x644BF40", VA = "0x644CF40")]
	public static bool3x2 operator ==(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B2")]
	[Address(RVA = "0x644CFC0", Offset = "0x644BFC0", VA = "0x644CFC0")]
	public static bool3x2 operator ==(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B3")]
	[Address(RVA = "0x644D040", Offset = "0x644C040", VA = "0x644D040")]
	public static bool3x2 operator !=(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B4")]
	[Address(RVA = "0x644D0E0", Offset = "0x644C0E0", VA = "0x644D0E0")]
	public static bool3x2 operator !=(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B5")]
	[Address(RVA = "0x644D160", Offset = "0x644C160", VA = "0x644D160")]
	public static bool3x2 operator !=(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B7")]
	[Address(RVA = "0x644D1F0", Offset = "0x644C1F0", VA = "0x644D1F0", Slot = "4")]
	public bool Equals(float3x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60012B8")]
	[Address(RVA = "0x644D260", Offset = "0x644C260", VA = "0x644D260", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B9")]
	[Address(RVA = "0x644D320", Offset = "0x644C320", VA = "0x644D320", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BA")]
	[Address(RVA = "0x644D380", Offset = "0x644C380", VA = "0x644D380", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BB")]
	[Address(RVA = "0x644D610", Offset = "0x644C610", VA = "0x644D610", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
