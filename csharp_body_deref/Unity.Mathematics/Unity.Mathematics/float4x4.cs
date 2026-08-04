// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.float4x4
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;
using UnityEngine;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000036")]
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
		[Token(Token = "0x6001572")]
		[Address(RVA = "0x4AD0260", Offset = "0x4AD0260", VA = "0x4AD0260")]
		get
		{
			return ref *(float4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001539")]
	[Address(RVA = "0x4ACCF80", Offset = "0x4ACCF80", VA = "0x4ACCF80")]
	public float4x4(float4 c0, float4 c1, float4 c2, float4 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153A")]
	[Address(RVA = "0x4ACCFA0", Offset = "0x4ACCFA0", VA = "0x4ACCFA0")]
	public float4x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153B")]
	[Address(RVA = "0x4ACD030", Offset = "0x4ACD030", VA = "0x4ACD030")]
	public float4x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153C")]
	[Address(RVA = "0x4ACD050", Offset = "0x4ACD050", VA = "0x4ACD050")]
	public float4x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153D")]
	[Address(RVA = "0x4ACD080", Offset = "0x4ACD080", VA = "0x4ACD080")]
	public float4x4(bool4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153E")]
	[Address(RVA = "0x4ACD270", Offset = "0x4ACD270", VA = "0x4ACD270")]
	public float4x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153F")]
	[Address(RVA = "0x4ACD290", Offset = "0x4ACD290", VA = "0x4ACD290")]
	public float4x4(int4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001540")]
	[Address(RVA = "0x4ACD370", Offset = "0x4ACD370", VA = "0x4ACD370")]
	public float4x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001541")]
	[Address(RVA = "0x4ACD390", Offset = "0x4ACD390", VA = "0x4ACD390")]
	public float4x4(uint4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001542")]
	[Address(RVA = "0x4ACD4E0", Offset = "0x4ACD4E0", VA = "0x4ACD4E0")]
	public float4x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001543")]
	[Address(RVA = "0x4ACD500", Offset = "0x4ACD500", VA = "0x4ACD500")]
	public float4x4(double4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001544")]
	[Address(RVA = "0x4ACD560", Offset = "0x4ACD560", VA = "0x4ACD560")]
	public static implicit operator float4x4(float v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001545")]
	[Address(RVA = "0x4ACD580", Offset = "0x4ACD580", VA = "0x4ACD580")]
	public static explicit operator float4x4(bool v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001546")]
	[Address(RVA = "0x4ACD5B0", Offset = "0x4ACD5B0", VA = "0x4ACD5B0")]
	public static explicit operator float4x4(bool4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001547")]
	[Address(RVA = "0x4ACD7B0", Offset = "0x4ACD7B0", VA = "0x4ACD7B0")]
	public static implicit operator float4x4(int v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001548")]
	[Address(RVA = "0x4ACD7D0", Offset = "0x4ACD7D0", VA = "0x4ACD7D0")]
	public static implicit operator float4x4(int4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001549")]
	[Address(RVA = "0x4ACD8C0", Offset = "0x4ACD8C0", VA = "0x4ACD8C0")]
	public static implicit operator float4x4(uint v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154A")]
	[Address(RVA = "0x4ACD8F0", Offset = "0x4ACD8F0", VA = "0x4ACD8F0")]
	public static implicit operator float4x4(uint4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154B")]
	[Address(RVA = "0x4ACDA40", Offset = "0x4ACDA40", VA = "0x4ACDA40")]
	public static explicit operator float4x4(double v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154C")]
	[Address(RVA = "0x4ACDA60", Offset = "0x4ACDA60", VA = "0x4ACDA60")]
	public static explicit operator float4x4(double4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154D")]
	[Address(RVA = "0x4ACDAC0", Offset = "0x4ACDAC0", VA = "0x4ACDAC0")]
	public static float4x4 operator *(float4x4 lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154E")]
	[Address(RVA = "0x4ACDB60", Offset = "0x4ACDB60", VA = "0x4ACDB60")]
	public static float4x4 operator *(float4x4 lhs, float rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154F")]
	[Address(RVA = "0x4ACDBD0", Offset = "0x4ACDBD0", VA = "0x4ACDBD0")]
	public static float4x4 operator *(float lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001550")]
	[Address(RVA = "0x4ACDC40", Offset = "0x4ACDC40", VA = "0x4ACDC40")]
	public static float4x4 operator +(float4x4 lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001551")]
	[Address(RVA = "0x4ACDCE0", Offset = "0x4ACDCE0", VA = "0x4ACDCE0")]
	public static float4x4 operator +(float4x4 lhs, float rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001552")]
	[Address(RVA = "0x4ACDD50", Offset = "0x4ACDD50", VA = "0x4ACDD50")]
	public static float4x4 operator +(float lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001553")]
	[Address(RVA = "0x4ACDDC0", Offset = "0x4ACDDC0", VA = "0x4ACDDC0")]
	public static float4x4 operator -(float4x4 lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001554")]
	[Address(RVA = "0x4ACDE60", Offset = "0x4ACDE60", VA = "0x4ACDE60")]
	public static float4x4 operator -(float4x4 lhs, float rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001555")]
	[Address(RVA = "0x4ACDED0", Offset = "0x4ACDED0", VA = "0x4ACDED0")]
	public static float4x4 operator -(float lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001556")]
	[Address(RVA = "0x4ACDF50", Offset = "0x4ACDF50", VA = "0x4ACDF50")]
	public static float4x4 operator /(float4x4 lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001557")]
	[Address(RVA = "0x4ACDFF0", Offset = "0x4ACDFF0", VA = "0x4ACDFF0")]
	public static float4x4 operator /(float4x4 lhs, float rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001558")]
	[Address(RVA = "0x4ACE060", Offset = "0x4ACE060", VA = "0x4ACE060")]
	public static float4x4 operator /(float lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001559")]
	[Address(RVA = "0x4ACE0E0", Offset = "0x4ACE0E0", VA = "0x4ACE0E0")]
	public static float4x4 operator %(float4x4 lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600155A")]
	[Address(RVA = "0x4ACE400", Offset = "0x4ACE400", VA = "0x4ACE400")]
	public static float4x4 operator %(float4x4 lhs, float rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600155B")]
	[Address(RVA = "0x4ACE680", Offset = "0x4ACE680", VA = "0x4ACE680")]
	public static float4x4 operator %(float lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600155C")]
	[Address(RVA = "0x4ACE900", Offset = "0x4ACE900", VA = "0x4ACE900")]
	public static float4x4 operator ++(float4x4 val)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600155D")]
	[Address(RVA = "0x4ACE980", Offset = "0x4ACE980", VA = "0x4ACE980")]
	public static float4x4 operator --(float4x4 val)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600155E")]
	[Address(RVA = "0x4ACEA00", Offset = "0x4ACEA00", VA = "0x4ACEA00")]
	public static bool4x4 operator <(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600155F")]
	[Address(RVA = "0x4ACEBA0", Offset = "0x4ACEBA0", VA = "0x4ACEBA0")]
	public static bool4x4 operator <(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001560")]
	[Address(RVA = "0x4ACECC0", Offset = "0x4ACECC0", VA = "0x4ACECC0")]
	public static bool4x4 operator <(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001561")]
	[Address(RVA = "0x4ACEE00", Offset = "0x4ACEE00", VA = "0x4ACEE00")]
	public static bool4x4 operator <=(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001562")]
	[Address(RVA = "0x4ACEFA0", Offset = "0x4ACEFA0", VA = "0x4ACEFA0")]
	public static bool4x4 operator <=(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001563")]
	[Address(RVA = "0x4ACF0C0", Offset = "0x4ACF0C0", VA = "0x4ACF0C0")]
	public static bool4x4 operator <=(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001564")]
	[Address(RVA = "0x4ACF200", Offset = "0x4ACF200", VA = "0x4ACF200")]
	public static bool4x4 operator >(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001565")]
	[Address(RVA = "0x4ACF3A0", Offset = "0x4ACF3A0", VA = "0x4ACF3A0")]
	public static bool4x4 operator >(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001566")]
	[Address(RVA = "0x4ACF4E0", Offset = "0x4ACF4E0", VA = "0x4ACF4E0")]
	public static bool4x4 operator >(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001567")]
	[Address(RVA = "0x4ACF600", Offset = "0x4ACF600", VA = "0x4ACF600")]
	public static bool4x4 operator >=(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001568")]
	[Address(RVA = "0x4ACF7A0", Offset = "0x4ACF7A0", VA = "0x4ACF7A0")]
	public static bool4x4 operator >=(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001569")]
	[Address(RVA = "0x4ACF8E0", Offset = "0x4ACF8E0", VA = "0x4ACF8E0")]
	public static bool4x4 operator >=(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156A")]
	[Address(RVA = "0x4ACFA00", Offset = "0x4ACFA00", VA = "0x4ACFA00")]
	public static float4x4 operator -(float4x4 val)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156B")]
	[Address(RVA = "0x4ACFA70", Offset = "0x4ACFA70", VA = "0x4ACFA70")]
	public static float4x4 operator +(float4x4 val)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156C")]
	[Address(RVA = "0x4ACFAA0", Offset = "0x4ACFAA0", VA = "0x4ACFAA0")]
	public static bool4x4 operator ==(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156D")]
	[Address(RVA = "0x4ACFC40", Offset = "0x4ACFC40", VA = "0x4ACFC40")]
	public static bool4x4 operator ==(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156E")]
	[Address(RVA = "0x4ACFD60", Offset = "0x4ACFD60", VA = "0x4ACFD60")]
	public static bool4x4 operator ==(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156F")]
	[Address(RVA = "0x4ACFE80", Offset = "0x4ACFE80", VA = "0x4ACFE80")]
	public static bool4x4 operator !=(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001570")]
	[Address(RVA = "0x4AD0020", Offset = "0x4AD0020", VA = "0x4AD0020")]
	public static bool4x4 operator !=(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001571")]
	[Address(RVA = "0x4AD0140", Offset = "0x4AD0140", VA = "0x4AD0140")]
	public static bool4x4 operator !=(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001573")]
	[Address(RVA = "0x4AD0270", Offset = "0x4AD0270", VA = "0x4AD0270", Slot = "4")]
	public bool Equals(float4x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001574")]
	[Address(RVA = "0x4AD03D0", Offset = "0x4AD03D0", VA = "0x4AD03D0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001575")]
	[Address(RVA = "0x4AD0590", Offset = "0x4AD0590", VA = "0x4AD0590", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001576")]
	[Address(RVA = "0x4AD07A0", Offset = "0x4AD07A0", VA = "0x4AD07A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001577")]
	[Address(RVA = "0x4AD0D60", Offset = "0x4AD0D60", VA = "0x4AD0D60", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6001578")]
	[Address(RVA = "0x4AD12D0", Offset = "0x4AD12D0", VA = "0x4AD12D0")]
	public static implicit operator float4x4(Matrix4x4 m)
	{
		return default(float4x4);
	}

	[Token(Token = "0x6001579")]
	[Address(RVA = "0x4AD1380", Offset = "0x4AD1380", VA = "0x4AD1380")]
	public static implicit operator Matrix4x4(float4x4 m)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x600157A")]
	[Address(RVA = "0x4AD13E0", Offset = "0x4AD13E0", VA = "0x4AD13E0")]
	public float4x4(float3x3 rotation, float3 translation)
	{
	}

	[Token(Token = "0x600157B")]
	[Address(RVA = "0x4AD1430", Offset = "0x4AD1430", VA = "0x4AD1430")]
	public float4x4(quaternion rotation, float3 translation)
	{
	}

	[Token(Token = "0x600157C")]
	[Address(RVA = "0x4AD14C0", Offset = "0x4AD14C0", VA = "0x4AD14C0")]
	public float4x4(RigidTransform transform)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600157D")]
	[Address(RVA = "0x4AD1550", Offset = "0x4AD1550", VA = "0x4AD1550")]
	public static float4x4 AxisAngle(float3 axis, float angle)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600157E")]
	[Address(RVA = "0x4AD1770", Offset = "0x4AD1770", VA = "0x4AD1770")]
	public static float4x4 EulerXYZ(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600157F")]
	[Address(RVA = "0x4AD1890", Offset = "0x4AD1890", VA = "0x4AD1890")]
	public static float4x4 EulerXZY(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001580")]
	[Address(RVA = "0x4AD19A0", Offset = "0x4AD19A0", VA = "0x4AD19A0")]
	public static float4x4 EulerYXZ(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001581")]
	[Address(RVA = "0x4AD1AD0", Offset = "0x4AD1AD0", VA = "0x4AD1AD0")]
	public static float4x4 EulerYZX(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001582")]
	[Address(RVA = "0x4AD1BE0", Offset = "0x4AD1BE0", VA = "0x4AD1BE0")]
	public static float4x4 EulerZXY(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001583")]
	[Address(RVA = "0x4AD1D10", Offset = "0x4AD1D10", VA = "0x4AD1D10")]
	public static float4x4 EulerZYX(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001584")]
	[Address(RVA = "0x4AD1E30", Offset = "0x4AD1E30", VA = "0x4AD1E30")]
	public static float4x4 EulerXYZ(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001585")]
	[Address(RVA = "0x4AD1F60", Offset = "0x4AD1F60", VA = "0x4AD1F60")]
	public static float4x4 EulerXZY(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001586")]
	[Address(RVA = "0x4AD2080", Offset = "0x4AD2080", VA = "0x4AD2080")]
	public static float4x4 EulerYXZ(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001587")]
	[Address(RVA = "0x4AD21B0", Offset = "0x4AD21B0", VA = "0x4AD21B0")]
	public static float4x4 EulerYZX(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001588")]
	[Address(RVA = "0x4AD22D0", Offset = "0x4AD22D0", VA = "0x4AD22D0")]
	public static float4x4 EulerZXY(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001589")]
	[Address(RVA = "0x4AD2400", Offset = "0x4AD2400", VA = "0x4AD2400")]
	public static float4x4 EulerZYX(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158A")]
	[Address(RVA = "0x4AD2530", Offset = "0x4AD2530", VA = "0x4AD2530")]
	public static float4x4 Euler(float3 xyz, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158B")]
	[Address(RVA = "0x4AD2BC0", Offset = "0x4AD2BC0", VA = "0x4AD2BC0")]
	public static float4x4 Euler(float x, float y, float z, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158C")]
	[Address(RVA = "0x4AD2C10", Offset = "0x4AD2C10", VA = "0x4AD2C10")]
	public static float4x4 RotateX(float angle)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158D")]
	[Address(RVA = "0x4AD2D40", Offset = "0x4AD2D40", VA = "0x4AD2D40")]
	public static float4x4 RotateY(float angle)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158E")]
	[Address(RVA = "0x4AD2E80", Offset = "0x4AD2E80", VA = "0x4AD2E80")]
	public static float4x4 RotateZ(float angle)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158F")]
	[Address(RVA = "0x4AD2FB0", Offset = "0x4AD2FB0", VA = "0x4AD2FB0")]
	public static float4x4 Scale(float s)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001590")]
	[Address(RVA = "0x4AD2FE0", Offset = "0x4AD2FE0", VA = "0x4AD2FE0")]
	public static float4x4 Scale(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001591")]
	[Address(RVA = "0x4AD3010", Offset = "0x4AD3010", VA = "0x4AD3010")]
	public static float4x4 Scale(float3 scales)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001592")]
	[Address(RVA = "0x4AD3040", Offset = "0x4AD3040", VA = "0x4AD3040")]
	public static float4x4 Translate(float3 vector)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001593")]
	[Address(RVA = "0x4AD3090", Offset = "0x4AD3090", VA = "0x4AD3090")]
	public static float4x4 LookAt(float3 eye, float3 target, float3 up)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001594")]
	[Address(RVA = "0x4AD3330", Offset = "0x4AD3330", VA = "0x4AD3330")]
	public static float4x4 Ortho(float width, float height, float near, float far)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001595")]
	[Address(RVA = "0x4AD33B0", Offset = "0x4AD33B0", VA = "0x4AD33B0")]
	public static float4x4 OrthoOffCenter(float left, float right, float bottom, float top, float near, float far)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001596")]
	[Address(RVA = "0x4AD3460", Offset = "0x4AD3460", VA = "0x4AD3460")]
	public static float4x4 PerspectiveFov(float verticalFov, float aspect, float near, float far)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001597")]
	[Address(RVA = "0x4AD3560", Offset = "0x4AD3560", VA = "0x4AD3560")]
	public static float4x4 PerspectiveOffCenter(float left, float right, float bottom, float top, float near, float far)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001598")]
	[Address(RVA = "0x4AD3620", Offset = "0x4AD3620", VA = "0x4AD3620")]
	public static float4x4 TRS(float3 translation, quaternion rotation, float3 scale)
	{
		return default(float4x4);
	}
}
