using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;
using UnityEngine;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000039")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float4x4 : IEquatable<float4x4>, IFormattable
{
	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x0")]
	public float4 c0;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x10")]
	public float4 c1;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x20")]
	public float4 c2;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x30")]
	public float4 c3;

	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float4x4 identity;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x40")]
	public static readonly float4x4 zero;

	[Token(Token = "0x170005C7")]
	public unsafe ref float4 this[int index]
	{
		[Token(Token = "0x600159A")]
		[Address(RVA = "0x47CC5B0", Offset = "0x47CC5B0", VA = "0x47CC5B0")]
		get
		{
			return ref *(float4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001561")]
	[Address(RVA = "0x47C92D0", Offset = "0x47C92D0", VA = "0x47C92D0")]
	public float4x4(float4 c0, float4 c1, float4 c2, float4 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001562")]
	[Address(RVA = "0x47C92F0", Offset = "0x47C92F0", VA = "0x47C92F0")]
	public float4x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001563")]
	[Address(RVA = "0x47C9380", Offset = "0x47C9380", VA = "0x47C9380")]
	public float4x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001564")]
	[Address(RVA = "0x47C93A0", Offset = "0x47C93A0", VA = "0x47C93A0")]
	public float4x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001565")]
	[Address(RVA = "0x47C93D0", Offset = "0x47C93D0", VA = "0x47C93D0")]
	public float4x4(bool4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001566")]
	[Address(RVA = "0x47C95C0", Offset = "0x47C95C0", VA = "0x47C95C0")]
	public float4x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001567")]
	[Address(RVA = "0x47C95E0", Offset = "0x47C95E0", VA = "0x47C95E0")]
	public float4x4(int4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001568")]
	[Address(RVA = "0x47C96C0", Offset = "0x47C96C0", VA = "0x47C96C0")]
	public float4x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001569")]
	[Address(RVA = "0x47C96E0", Offset = "0x47C96E0", VA = "0x47C96E0")]
	public float4x4(uint4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156A")]
	[Address(RVA = "0x47C9830", Offset = "0x47C9830", VA = "0x47C9830")]
	public float4x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156B")]
	[Address(RVA = "0x47C9850", Offset = "0x47C9850", VA = "0x47C9850")]
	public float4x4(double4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156C")]
	[Address(RVA = "0x47C98B0", Offset = "0x47C98B0", VA = "0x47C98B0")]
	public static implicit operator float4x4(float v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156D")]
	[Address(RVA = "0x47C98D0", Offset = "0x47C98D0", VA = "0x47C98D0")]
	public static explicit operator float4x4(bool v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156E")]
	[Address(RVA = "0x47C9900", Offset = "0x47C9900", VA = "0x47C9900")]
	public static explicit operator float4x4(bool4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156F")]
	[Address(RVA = "0x47C9B00", Offset = "0x47C9B00", VA = "0x47C9B00")]
	public static implicit operator float4x4(int v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001570")]
	[Address(RVA = "0x47C9B20", Offset = "0x47C9B20", VA = "0x47C9B20")]
	public static implicit operator float4x4(int4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001571")]
	[Address(RVA = "0x47C9C10", Offset = "0x47C9C10", VA = "0x47C9C10")]
	public static implicit operator float4x4(uint v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001572")]
	[Address(RVA = "0x47C9C40", Offset = "0x47C9C40", VA = "0x47C9C40")]
	public static implicit operator float4x4(uint4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001573")]
	[Address(RVA = "0x47C9D90", Offset = "0x47C9D90", VA = "0x47C9D90")]
	public static explicit operator float4x4(double v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001574")]
	[Address(RVA = "0x47C9DB0", Offset = "0x47C9DB0", VA = "0x47C9DB0")]
	public static explicit operator float4x4(double4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001575")]
	[Address(RVA = "0x47C9E10", Offset = "0x47C9E10", VA = "0x47C9E10")]
	public static float4x4 operator *(float4x4 lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001576")]
	[Address(RVA = "0x47C9EB0", Offset = "0x47C9EB0", VA = "0x47C9EB0")]
	public static float4x4 operator *(float4x4 lhs, float rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001577")]
	[Address(RVA = "0x47C9F20", Offset = "0x47C9F20", VA = "0x47C9F20")]
	public static float4x4 operator *(float lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001578")]
	[Address(RVA = "0x47C9F90", Offset = "0x47C9F90", VA = "0x47C9F90")]
	public static float4x4 operator +(float4x4 lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001579")]
	[Address(RVA = "0x47CA030", Offset = "0x47CA030", VA = "0x47CA030")]
	public static float4x4 operator +(float4x4 lhs, float rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600157A")]
	[Address(RVA = "0x47CA0A0", Offset = "0x47CA0A0", VA = "0x47CA0A0")]
	public static float4x4 operator +(float lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600157B")]
	[Address(RVA = "0x47CA110", Offset = "0x47CA110", VA = "0x47CA110")]
	public static float4x4 operator -(float4x4 lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600157C")]
	[Address(RVA = "0x47CA1B0", Offset = "0x47CA1B0", VA = "0x47CA1B0")]
	public static float4x4 operator -(float4x4 lhs, float rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600157D")]
	[Address(RVA = "0x47CA220", Offset = "0x47CA220", VA = "0x47CA220")]
	public static float4x4 operator -(float lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600157E")]
	[Address(RVA = "0x47CA2A0", Offset = "0x47CA2A0", VA = "0x47CA2A0")]
	public static float4x4 operator /(float4x4 lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600157F")]
	[Address(RVA = "0x47CA340", Offset = "0x47CA340", VA = "0x47CA340")]
	public static float4x4 operator /(float4x4 lhs, float rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001580")]
	[Address(RVA = "0x47CA3B0", Offset = "0x47CA3B0", VA = "0x47CA3B0")]
	public static float4x4 operator /(float lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001581")]
	[Address(RVA = "0x47CA430", Offset = "0x47CA430", VA = "0x47CA430")]
	public static float4x4 operator %(float4x4 lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001582")]
	[Address(RVA = "0x47CA750", Offset = "0x47CA750", VA = "0x47CA750")]
	public static float4x4 operator %(float4x4 lhs, float rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001583")]
	[Address(RVA = "0x47CA9D0", Offset = "0x47CA9D0", VA = "0x47CA9D0")]
	public static float4x4 operator %(float lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001584")]
	[Address(RVA = "0x47CAC50", Offset = "0x47CAC50", VA = "0x47CAC50")]
	public static float4x4 operator ++(float4x4 val)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001585")]
	[Address(RVA = "0x47CACD0", Offset = "0x47CACD0", VA = "0x47CACD0")]
	public static float4x4 operator --(float4x4 val)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001586")]
	[Address(RVA = "0x47CAD50", Offset = "0x47CAD50", VA = "0x47CAD50")]
	public static bool4x4 operator <(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001587")]
	[Address(RVA = "0x47CAEF0", Offset = "0x47CAEF0", VA = "0x47CAEF0")]
	public static bool4x4 operator <(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001588")]
	[Address(RVA = "0x47CB010", Offset = "0x47CB010", VA = "0x47CB010")]
	public static bool4x4 operator <(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001589")]
	[Address(RVA = "0x47CB150", Offset = "0x47CB150", VA = "0x47CB150")]
	public static bool4x4 operator <=(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158A")]
	[Address(RVA = "0x47CB2F0", Offset = "0x47CB2F0", VA = "0x47CB2F0")]
	public static bool4x4 operator <=(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158B")]
	[Address(RVA = "0x47CB410", Offset = "0x47CB410", VA = "0x47CB410")]
	public static bool4x4 operator <=(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158C")]
	[Address(RVA = "0x47CB550", Offset = "0x47CB550", VA = "0x47CB550")]
	public static bool4x4 operator >(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158D")]
	[Address(RVA = "0x47CB6F0", Offset = "0x47CB6F0", VA = "0x47CB6F0")]
	public static bool4x4 operator >(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158E")]
	[Address(RVA = "0x47CB830", Offset = "0x47CB830", VA = "0x47CB830")]
	public static bool4x4 operator >(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158F")]
	[Address(RVA = "0x47CB950", Offset = "0x47CB950", VA = "0x47CB950")]
	public static bool4x4 operator >=(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001590")]
	[Address(RVA = "0x47CBAF0", Offset = "0x47CBAF0", VA = "0x47CBAF0")]
	public static bool4x4 operator >=(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001591")]
	[Address(RVA = "0x47CBC30", Offset = "0x47CBC30", VA = "0x47CBC30")]
	public static bool4x4 operator >=(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001592")]
	[Address(RVA = "0x47CBD50", Offset = "0x47CBD50", VA = "0x47CBD50")]
	public static float4x4 operator -(float4x4 val)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001593")]
	[Address(RVA = "0x47CBDC0", Offset = "0x47CBDC0", VA = "0x47CBDC0")]
	public static float4x4 operator +(float4x4 val)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001594")]
	[Address(RVA = "0x47CBDF0", Offset = "0x47CBDF0", VA = "0x47CBDF0")]
	public static bool4x4 operator ==(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001595")]
	[Address(RVA = "0x47CBF90", Offset = "0x47CBF90", VA = "0x47CBF90")]
	public static bool4x4 operator ==(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001596")]
	[Address(RVA = "0x47CC0B0", Offset = "0x47CC0B0", VA = "0x47CC0B0")]
	public static bool4x4 operator ==(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001597")]
	[Address(RVA = "0x47CC1D0", Offset = "0x47CC1D0", VA = "0x47CC1D0")]
	public static bool4x4 operator !=(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001598")]
	[Address(RVA = "0x47CC370", Offset = "0x47CC370", VA = "0x47CC370")]
	public static bool4x4 operator !=(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001599")]
	[Address(RVA = "0x47CC490", Offset = "0x47CC490", VA = "0x47CC490")]
	public static bool4x4 operator !=(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600159B")]
	[Address(RVA = "0x47CC5C0", Offset = "0x47CC5C0", VA = "0x47CC5C0", Slot = "4")]
	public bool Equals(float4x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600159C")]
	[Address(RVA = "0x47CC720", Offset = "0x47CC720", VA = "0x47CC720", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600159D")]
	[Address(RVA = "0x47CC8E0", Offset = "0x47CC8E0", VA = "0x47CC8E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600159E")]
	[Address(RVA = "0x47CCAF0", Offset = "0x47CCAF0", VA = "0x47CCAF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600159F")]
	[Address(RVA = "0x47CD0B0", Offset = "0x47CD0B0", VA = "0x47CD0B0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x60015A0")]
	[Address(RVA = "0x47CD620", Offset = "0x47CD620", VA = "0x47CD620")]
	public static implicit operator float4x4(Matrix4x4 m)
	{
		return default(float4x4);
	}

	[Token(Token = "0x60015A1")]
	[Address(RVA = "0x47CD6D0", Offset = "0x47CD6D0", VA = "0x47CD6D0")]
	public static implicit operator Matrix4x4(float4x4 m)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60015A2")]
	[Address(RVA = "0x47CD730", Offset = "0x47CD730", VA = "0x47CD730")]
	public float4x4(float3x3 rotation, float3 translation)
	{
	}

	[Token(Token = "0x60015A3")]
	[Address(RVA = "0x47CD780", Offset = "0x47CD780", VA = "0x47CD780")]
	public float4x4(quaternion rotation, float3 translation)
	{
	}

	[Token(Token = "0x60015A4")]
	[Address(RVA = "0x47CD810", Offset = "0x47CD810", VA = "0x47CD810")]
	public float4x4(RigidTransform transform)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A5")]
	[Address(RVA = "0x47CD8A0", Offset = "0x47CD8A0", VA = "0x47CD8A0")]
	public static float4x4 AxisAngle(float3 axis, float angle)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A6")]
	[Address(RVA = "0x47CDAC0", Offset = "0x47CDAC0", VA = "0x47CDAC0")]
	public static float4x4 EulerXYZ(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A7")]
	[Address(RVA = "0x47CDBE0", Offset = "0x47CDBE0", VA = "0x47CDBE0")]
	public static float4x4 EulerXZY(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A8")]
	[Address(RVA = "0x47CDCF0", Offset = "0x47CDCF0", VA = "0x47CDCF0")]
	public static float4x4 EulerYXZ(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A9")]
	[Address(RVA = "0x47CDE20", Offset = "0x47CDE20", VA = "0x47CDE20")]
	public static float4x4 EulerYZX(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015AA")]
	[Address(RVA = "0x47CDF30", Offset = "0x47CDF30", VA = "0x47CDF30")]
	public static float4x4 EulerZXY(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015AB")]
	[Address(RVA = "0x47CE060", Offset = "0x47CE060", VA = "0x47CE060")]
	public static float4x4 EulerZYX(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015AC")]
	[Address(RVA = "0x47CE180", Offset = "0x47CE180", VA = "0x47CE180")]
	public static float4x4 EulerXYZ(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015AD")]
	[Address(RVA = "0x47CE2B0", Offset = "0x47CE2B0", VA = "0x47CE2B0")]
	public static float4x4 EulerXZY(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015AE")]
	[Address(RVA = "0x47CE3D0", Offset = "0x47CE3D0", VA = "0x47CE3D0")]
	public static float4x4 EulerYXZ(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015AF")]
	[Address(RVA = "0x47CE500", Offset = "0x47CE500", VA = "0x47CE500")]
	public static float4x4 EulerYZX(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B0")]
	[Address(RVA = "0x47CE620", Offset = "0x47CE620", VA = "0x47CE620")]
	public static float4x4 EulerZXY(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B1")]
	[Address(RVA = "0x47CE750", Offset = "0x47CE750", VA = "0x47CE750")]
	public static float4x4 EulerZYX(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B2")]
	[Address(RVA = "0x47CE880", Offset = "0x47CE880", VA = "0x47CE880")]
	public static float4x4 Euler(float3 xyz, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B3")]
	[Address(RVA = "0x47CEF10", Offset = "0x47CEF10", VA = "0x47CEF10")]
	public static float4x4 Euler(float x, float y, float z, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B4")]
	[Address(RVA = "0x47CEF60", Offset = "0x47CEF60", VA = "0x47CEF60")]
	public static float4x4 RotateX(float angle)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B5")]
	[Address(RVA = "0x47CF090", Offset = "0x47CF090", VA = "0x47CF090")]
	public static float4x4 RotateY(float angle)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B6")]
	[Address(RVA = "0x47CF1D0", Offset = "0x47CF1D0", VA = "0x47CF1D0")]
	public static float4x4 RotateZ(float angle)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B7")]
	[Address(RVA = "0x47CF300", Offset = "0x47CF300", VA = "0x47CF300")]
	public static float4x4 Scale(float s)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B8")]
	[Address(RVA = "0x47CF330", Offset = "0x47CF330", VA = "0x47CF330")]
	public static float4x4 Scale(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B9")]
	[Address(RVA = "0x47CF360", Offset = "0x47CF360", VA = "0x47CF360")]
	public static float4x4 Scale(float3 scales)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015BA")]
	[Address(RVA = "0x47CF390", Offset = "0x47CF390", VA = "0x47CF390")]
	public static float4x4 Translate(float3 vector)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015BB")]
	[Address(RVA = "0x47CF3E0", Offset = "0x47CF3E0", VA = "0x47CF3E0")]
	public static float4x4 LookAt(float3 eye, float3 target, float3 up)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015BC")]
	[Address(RVA = "0x47CF680", Offset = "0x47CF680", VA = "0x47CF680")]
	public static float4x4 Ortho(float width, float height, float near, float far)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015BD")]
	[Address(RVA = "0x47CF700", Offset = "0x47CF700", VA = "0x47CF700")]
	public static float4x4 OrthoOffCenter(float left, float right, float bottom, float top, float near, float far)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015BE")]
	[Address(RVA = "0x47CF7B0", Offset = "0x47CF7B0", VA = "0x47CF7B0")]
	public static float4x4 PerspectiveFov(float verticalFov, float aspect, float near, float far)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015BF")]
	[Address(RVA = "0x47CF8B0", Offset = "0x47CF8B0", VA = "0x47CF8B0")]
	public static float4x4 PerspectiveOffCenter(float left, float right, float bottom, float top, float near, float far)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C0")]
	[Address(RVA = "0x47CF970", Offset = "0x47CF970", VA = "0x47CF970")]
	public static float4x4 TRS(float3 translation, quaternion rotation, float3 scale)
	{
		return default(float4x4);
	}
}
