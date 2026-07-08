using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000033")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float3x3 : IEquatable<float3x3>, IFormattable
{
	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0x0")]
	public float3 c0;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0xC")]
	public float3 c1;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x18")]
	public float3 c2;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float3x3 identity;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x24")]
	public static readonly float3x3 zero;

	[Token(Token = "0x17000472")]
	public unsafe ref float3 this[int index]
	{
		[Token(Token = "0x60012AA")]
		[Address(RVA = "0x47B72A0", Offset = "0x47B72A0", VA = "0x47B72A0")]
		get
		{
			return ref *(float3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001271")]
	[Address(RVA = "0x47B51A0", Offset = "0x47B51A0", VA = "0x47B51A0")]
	public float3x3(float3 c0, float3 c1, float3 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001272")]
	[Address(RVA = "0x47B51C0", Offset = "0x47B51C0", VA = "0x47B51C0")]
	public float3x3(float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001273")]
	[Address(RVA = "0x47B5200", Offset = "0x47B5200", VA = "0x47B5200")]
	public float3x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001274")]
	[Address(RVA = "0x47B5230", Offset = "0x47B5230", VA = "0x47B5230")]
	public float3x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001275")]
	[Address(RVA = "0x47B5270", Offset = "0x47B5270", VA = "0x47B5270")]
	public float3x3(bool3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001276")]
	[Address(RVA = "0x47B53A0", Offset = "0x47B53A0", VA = "0x47B53A0")]
	public float3x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001277")]
	[Address(RVA = "0x47B53D0", Offset = "0x47B53D0", VA = "0x47B53D0")]
	public float3x3(int3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001278")]
	[Address(RVA = "0x47B5450", Offset = "0x47B5450", VA = "0x47B5450")]
	public float3x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001279")]
	[Address(RVA = "0x47B5480", Offset = "0x47B5480", VA = "0x47B5480")]
	public float3x3(uint3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600127A")]
	[Address(RVA = "0x47B5540", Offset = "0x47B5540", VA = "0x47B5540")]
	public float3x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600127B")]
	[Address(RVA = "0x47B5570", Offset = "0x47B5570", VA = "0x47B5570")]
	public float3x3(double3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600127C")]
	[Address(RVA = "0x47B55D0", Offset = "0x47B55D0", VA = "0x47B55D0")]
	public static implicit operator float3x3(float v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600127D")]
	[Address(RVA = "0x47B5600", Offset = "0x47B5600", VA = "0x47B5600")]
	public static explicit operator float3x3(bool v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600127E")]
	[Address(RVA = "0x47B5640", Offset = "0x47B5640", VA = "0x47B5640")]
	public static explicit operator float3x3(bool3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600127F")]
	[Address(RVA = "0x47B5780", Offset = "0x47B5780", VA = "0x47B5780")]
	public static implicit operator float3x3(int v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001280")]
	[Address(RVA = "0x47B57B0", Offset = "0x47B57B0", VA = "0x47B57B0")]
	public static implicit operator float3x3(int3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001281")]
	[Address(RVA = "0x47B5830", Offset = "0x47B5830", VA = "0x47B5830")]
	public static implicit operator float3x3(uint v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001282")]
	[Address(RVA = "0x47B5860", Offset = "0x47B5860", VA = "0x47B5860")]
	public static implicit operator float3x3(uint3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001283")]
	[Address(RVA = "0x47B5920", Offset = "0x47B5920", VA = "0x47B5920")]
	public static explicit operator float3x3(double v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001284")]
	[Address(RVA = "0x47B5950", Offset = "0x47B5950", VA = "0x47B5950")]
	public static explicit operator float3x3(double3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001285")]
	[Address(RVA = "0x47B59B0", Offset = "0x47B59B0", VA = "0x47B59B0")]
	public static float3x3 operator *(float3x3 lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001286")]
	[Address(RVA = "0x47B5A20", Offset = "0x47B5A20", VA = "0x47B5A20")]
	public static float3x3 operator *(float3x3 lhs, float rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001287")]
	[Address(RVA = "0x47B5A80", Offset = "0x47B5A80", VA = "0x47B5A80")]
	public static float3x3 operator *(float lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001288")]
	[Address(RVA = "0x47B5AE0", Offset = "0x47B5AE0", VA = "0x47B5AE0")]
	public static float3x3 operator +(float3x3 lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001289")]
	[Address(RVA = "0x47B5B50", Offset = "0x47B5B50", VA = "0x47B5B50")]
	public static float3x3 operator +(float3x3 lhs, float rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128A")]
	[Address(RVA = "0x47B5BB0", Offset = "0x47B5BB0", VA = "0x47B5BB0")]
	public static float3x3 operator +(float lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128B")]
	[Address(RVA = "0x47B5C10", Offset = "0x47B5C10", VA = "0x47B5C10")]
	public static float3x3 operator -(float3x3 lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128C")]
	[Address(RVA = "0x47B5C80", Offset = "0x47B5C80", VA = "0x47B5C80")]
	public static float3x3 operator -(float3x3 lhs, float rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128D")]
	[Address(RVA = "0x47B5CE0", Offset = "0x47B5CE0", VA = "0x47B5CE0")]
	public static float3x3 operator -(float lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128E")]
	[Address(RVA = "0x47B5D40", Offset = "0x47B5D40", VA = "0x47B5D40")]
	public static float3x3 operator /(float3x3 lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128F")]
	[Address(RVA = "0x47B5DB0", Offset = "0x47B5DB0", VA = "0x47B5DB0")]
	public static float3x3 operator /(float3x3 lhs, float rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001290")]
	[Address(RVA = "0x47B5E10", Offset = "0x47B5E10", VA = "0x47B5E10")]
	public static float3x3 operator /(float lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001291")]
	[Address(RVA = "0x47B5E70", Offset = "0x47B5E70", VA = "0x47B5E70")]
	public static float3x3 operator %(float3x3 lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001292")]
	[Address(RVA = "0x47B6060", Offset = "0x47B6060", VA = "0x47B6060")]
	public static float3x3 operator %(float3x3 lhs, float rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001293")]
	[Address(RVA = "0x47B61F0", Offset = "0x47B61F0", VA = "0x47B61F0")]
	public static float3x3 operator %(float lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001294")]
	[Address(RVA = "0x47B6380", Offset = "0x47B6380", VA = "0x47B6380")]
	public static float3x3 operator ++(float3x3 val)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001295")]
	[Address(RVA = "0x47B6400", Offset = "0x47B6400", VA = "0x47B6400")]
	public static float3x3 operator --(float3x3 val)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001296")]
	[Address(RVA = "0x47B6480", Offset = "0x47B6480", VA = "0x47B6480")]
	public static bool3x3 operator <(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001297")]
	[Address(RVA = "0x47B6550", Offset = "0x47B6550", VA = "0x47B6550")]
	public static bool3x3 operator <(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001298")]
	[Address(RVA = "0x47B65F0", Offset = "0x47B65F0", VA = "0x47B65F0")]
	public static bool3x3 operator <(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001299")]
	[Address(RVA = "0x47B6690", Offset = "0x47B6690", VA = "0x47B6690")]
	public static bool3x3 operator <=(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129A")]
	[Address(RVA = "0x47B6760", Offset = "0x47B6760", VA = "0x47B6760")]
	public static bool3x3 operator <=(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129B")]
	[Address(RVA = "0x47B6800", Offset = "0x47B6800", VA = "0x47B6800")]
	public static bool3x3 operator <=(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129C")]
	[Address(RVA = "0x47B68A0", Offset = "0x47B68A0", VA = "0x47B68A0")]
	public static bool3x3 operator >(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129D")]
	[Address(RVA = "0x47B6970", Offset = "0x47B6970", VA = "0x47B6970")]
	public static bool3x3 operator >(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129E")]
	[Address(RVA = "0x47B6A10", Offset = "0x47B6A10", VA = "0x47B6A10")]
	public static bool3x3 operator >(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129F")]
	[Address(RVA = "0x47B6AB0", Offset = "0x47B6AB0", VA = "0x47B6AB0")]
	public static bool3x3 operator >=(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A0")]
	[Address(RVA = "0x47B6B80", Offset = "0x47B6B80", VA = "0x47B6B80")]
	public static bool3x3 operator >=(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A1")]
	[Address(RVA = "0x47B6C20", Offset = "0x47B6C20", VA = "0x47B6C20")]
	public static bool3x3 operator >=(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A2")]
	[Address(RVA = "0x47B6CC0", Offset = "0x47B6CC0", VA = "0x47B6CC0")]
	public static float3x3 operator -(float3x3 val)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A3")]
	[Address(RVA = "0x47B6D20", Offset = "0x47B6D20", VA = "0x47B6D20")]
	public static float3x3 operator +(float3x3 val)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A4")]
	[Address(RVA = "0x47B6D60", Offset = "0x47B6D60", VA = "0x47B6D60")]
	public static bool3x3 operator ==(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A5")]
	[Address(RVA = "0x47B6E60", Offset = "0x47B6E60", VA = "0x47B6E60")]
	public static bool3x3 operator ==(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A6")]
	[Address(RVA = "0x47B6F30", Offset = "0x47B6F30", VA = "0x47B6F30")]
	public static bool3x3 operator ==(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A7")]
	[Address(RVA = "0x47B7000", Offset = "0x47B7000", VA = "0x47B7000")]
	public static bool3x3 operator !=(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A8")]
	[Address(RVA = "0x47B7100", Offset = "0x47B7100", VA = "0x47B7100")]
	public static bool3x3 operator !=(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x47B71D0", Offset = "0x47B71D0", VA = "0x47B71D0")]
	public static bool3x3 operator !=(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012AB")]
	[Address(RVA = "0x47B72B0", Offset = "0x47B72B0", VA = "0x47B72B0", Slot = "4")]
	public bool Equals(float3x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60012AC")]
	[Address(RVA = "0x47B7360", Offset = "0x47B7360", VA = "0x47B7360", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012AD")]
	[Address(RVA = "0x47B7460", Offset = "0x47B7460", VA = "0x47B7460", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012AE")]
	[Address(RVA = "0x47B7540", Offset = "0x47B7540", VA = "0x47B7540", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012AF")]
	[Address(RVA = "0x47B78B0", Offset = "0x47B78B0", VA = "0x47B78B0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x60012B0")]
	[Address(RVA = "0x47B7BF0", Offset = "0x47B7BF0", VA = "0x47B7BF0")]
	public float3x3(float4x4 f4x4)
	{
	}

	[Token(Token = "0x60012B1")]
	[Address(RVA = "0x47B7C20", Offset = "0x47B7C20", VA = "0x47B7C20")]
	public float3x3(quaternion q)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B2")]
	[Address(RVA = "0x47B7D70", Offset = "0x47B7D70", VA = "0x47B7D70")]
	public static float3x3 AxisAngle(float3 axis, float angle)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B3")]
	[Address(RVA = "0x47B7F50", Offset = "0x47B7F50", VA = "0x47B7F50")]
	public static float3x3 EulerXYZ(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B4")]
	[Address(RVA = "0x47B8060", Offset = "0x47B8060", VA = "0x47B8060")]
	public static float3x3 EulerXZY(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B5")]
	[Address(RVA = "0x47B8160", Offset = "0x47B8160", VA = "0x47B8160")]
	public static float3x3 EulerYXZ(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B6")]
	[Address(RVA = "0x47B8270", Offset = "0x47B8270", VA = "0x47B8270")]
	public static float3x3 EulerYZX(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B7")]
	[Address(RVA = "0x47B8370", Offset = "0x47B8370", VA = "0x47B8370")]
	public static float3x3 EulerZXY(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B8")]
	[Address(RVA = "0x47B8480", Offset = "0x47B8480", VA = "0x47B8480")]
	public static float3x3 EulerZYX(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B9")]
	[Address(RVA = "0x47B8590", Offset = "0x47B8590", VA = "0x47B8590")]
	public static float3x3 EulerXYZ(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BA")]
	[Address(RVA = "0x47B86A0", Offset = "0x47B86A0", VA = "0x47B86A0")]
	public static float3x3 EulerXZY(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BB")]
	[Address(RVA = "0x47B87A0", Offset = "0x47B87A0", VA = "0x47B87A0")]
	public static float3x3 EulerYXZ(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BC")]
	[Address(RVA = "0x47B88B0", Offset = "0x47B88B0", VA = "0x47B88B0")]
	public static float3x3 EulerYZX(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BD")]
	[Address(RVA = "0x47B89B0", Offset = "0x47B89B0", VA = "0x47B89B0")]
	public static float3x3 EulerZXY(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BE")]
	[Address(RVA = "0x47B8AC0", Offset = "0x47B8AC0", VA = "0x47B8AC0")]
	public static float3x3 EulerZYX(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x47B8BD0", Offset = "0x47B8BD0", VA = "0x47B8BD0")]
	public static float3x3 Euler(float3 xyz, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x47B9200", Offset = "0x47B9200", VA = "0x47B9200")]
	public static float3x3 Euler(float x, float y, float z, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C1")]
	[Address(RVA = "0x47B9240", Offset = "0x47B9240", VA = "0x47B9240")]
	public static float3x3 RotateX(float angle)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C2")]
	[Address(RVA = "0x47B9360", Offset = "0x47B9360", VA = "0x47B9360")]
	public static float3x3 RotateY(float angle)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C3")]
	[Address(RVA = "0x47B9490", Offset = "0x47B9490", VA = "0x47B9490")]
	public static float3x3 RotateZ(float angle)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C4")]
	[Address(RVA = "0x47B95B0", Offset = "0x47B95B0", VA = "0x47B95B0")]
	public static float3x3 Scale(float s)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C5")]
	[Address(RVA = "0x47B95E0", Offset = "0x47B95E0", VA = "0x47B95E0")]
	public static float3x3 Scale(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C6")]
	[Address(RVA = "0x47B9610", Offset = "0x47B9610", VA = "0x47B9610")]
	public static float3x3 Scale(float3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C7")]
	[Address(RVA = "0x47B9650", Offset = "0x47B9650", VA = "0x47B9650")]
	public static float3x3 LookRotation(float3 forward, float3 up)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C8")]
	[Address(RVA = "0x47B97F0", Offset = "0x47B97F0", VA = "0x47B97F0")]
	public static float3x3 LookRotationSafe(float3 forward, float3 up)
	{
		return default(float3x3);
	}

	[Token(Token = "0x60012C9")]
	[Address(RVA = "0x47B9CC0", Offset = "0x47B9CC0", VA = "0x47B9CC0")]
	public static explicit operator float3x3(float4x4 f4x4)
	{
		return default(float3x3);
	}
}
