// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.float4x3
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
[Token(Token = "0x2000035")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float4x3 : IEquatable<float4x3>, IFormattable
{
	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x0")]
	public float4 c0;

	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x10")]
	public float4 c1;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x20")]
	public float4 c2;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float4x3 zero;

	[Token(Token = "0x170005C6")]
	public unsafe ref float4 this[int index]
	{
		[Token(Token = "0x6001533")]
		[Address(RVA = "0x4ACC320", Offset = "0x4ACC320", VA = "0x4ACC320")]
		get
		{
			return ref *(float4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014FA")]
	[Address(RVA = "0x4AC9B70", Offset = "0x4AC9B70", VA = "0x4AC9B70")]
	public float4x3(float4 c0, float4 c1, float4 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014FB")]
	[Address(RVA = "0x4AC9B90", Offset = "0x4AC9B90", VA = "0x4AC9B90")]
	public float4x3(float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22, float m30, float m31, float m32)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014FC")]
	[Address(RVA = "0x4AC9BF0", Offset = "0x4AC9BF0", VA = "0x4AC9BF0")]
	public float4x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014FD")]
	[Address(RVA = "0x4AC9C00", Offset = "0x4AC9C00", VA = "0x4AC9C00")]
	public float4x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014FE")]
	[Address(RVA = "0x4AC9C20", Offset = "0x4AC9C20", VA = "0x4AC9C20")]
	public float4x3(bool4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014FF")]
	[Address(RVA = "0x4AC9DA0", Offset = "0x4AC9DA0", VA = "0x4AC9DA0")]
	public float4x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001500")]
	[Address(RVA = "0x4AC9DC0", Offset = "0x4AC9DC0", VA = "0x4AC9DC0")]
	public float4x3(int4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001501")]
	[Address(RVA = "0x4AC9E70", Offset = "0x4AC9E70", VA = "0x4AC9E70")]
	public float4x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001502")]
	[Address(RVA = "0x4AC9E90", Offset = "0x4AC9E90", VA = "0x4AC9E90")]
	public float4x3(uint4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001503")]
	[Address(RVA = "0x4AC9F80", Offset = "0x4AC9F80", VA = "0x4AC9F80")]
	public float4x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001504")]
	[Address(RVA = "0x4AC9FA0", Offset = "0x4AC9FA0", VA = "0x4AC9FA0")]
	public float4x3(double4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001505")]
	[Address(RVA = "0x4AC9FE0", Offset = "0x4AC9FE0", VA = "0x4AC9FE0")]
	public static implicit operator float4x3(float v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001506")]
	[Address(RVA = "0x4ACA000", Offset = "0x4ACA000", VA = "0x4ACA000")]
	public static explicit operator float4x3(bool v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001507")]
	[Address(RVA = "0x4ACA030", Offset = "0x4ACA030", VA = "0x4ACA030")]
	public static explicit operator float4x3(bool4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001508")]
	[Address(RVA = "0x4ACA1B0", Offset = "0x4ACA1B0", VA = "0x4ACA1B0")]
	public static implicit operator float4x3(int v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001509")]
	[Address(RVA = "0x4ACA1D0", Offset = "0x4ACA1D0", VA = "0x4ACA1D0")]
	public static implicit operator float4x3(int4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600150A")]
	[Address(RVA = "0x4ACA280", Offset = "0x4ACA280", VA = "0x4ACA280")]
	public static implicit operator float4x3(uint v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600150B")]
	[Address(RVA = "0x4ACA2A0", Offset = "0x4ACA2A0", VA = "0x4ACA2A0")]
	public static implicit operator float4x3(uint4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600150C")]
	[Address(RVA = "0x4ACA3A0", Offset = "0x4ACA3A0", VA = "0x4ACA3A0")]
	public static explicit operator float4x3(double v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600150D")]
	[Address(RVA = "0x4ACA3C0", Offset = "0x4ACA3C0", VA = "0x4ACA3C0")]
	public static explicit operator float4x3(double4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600150E")]
	[Address(RVA = "0x4ACA410", Offset = "0x4ACA410", VA = "0x4ACA410")]
	public static float4x3 operator *(float4x3 lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600150F")]
	[Address(RVA = "0x4ACA490", Offset = "0x4ACA490", VA = "0x4ACA490")]
	public static float4x3 operator *(float4x3 lhs, float rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001510")]
	[Address(RVA = "0x4ACA4F0", Offset = "0x4ACA4F0", VA = "0x4ACA4F0")]
	public static float4x3 operator *(float lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001511")]
	[Address(RVA = "0x4ACA550", Offset = "0x4ACA550", VA = "0x4ACA550")]
	public static float4x3 operator +(float4x3 lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001512")]
	[Address(RVA = "0x4ACA5D0", Offset = "0x4ACA5D0", VA = "0x4ACA5D0")]
	public static float4x3 operator +(float4x3 lhs, float rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001513")]
	[Address(RVA = "0x4ACA630", Offset = "0x4ACA630", VA = "0x4ACA630")]
	public static float4x3 operator +(float lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001514")]
	[Address(RVA = "0x4ACA690", Offset = "0x4ACA690", VA = "0x4ACA690")]
	public static float4x3 operator -(float4x3 lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001515")]
	[Address(RVA = "0x4ACA710", Offset = "0x4ACA710", VA = "0x4ACA710")]
	public static float4x3 operator -(float4x3 lhs, float rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001516")]
	[Address(RVA = "0x4ACA770", Offset = "0x4ACA770", VA = "0x4ACA770")]
	public static float4x3 operator -(float lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001517")]
	[Address(RVA = "0x4ACA7E0", Offset = "0x4ACA7E0", VA = "0x4ACA7E0")]
	public static float4x3 operator /(float4x3 lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001518")]
	[Address(RVA = "0x4ACA860", Offset = "0x4ACA860", VA = "0x4ACA860")]
	public static float4x3 operator /(float4x3 lhs, float rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001519")]
	[Address(RVA = "0x4ACA8C0", Offset = "0x4ACA8C0", VA = "0x4ACA8C0")]
	public static float4x3 operator /(float lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600151A")]
	[Address(RVA = "0x4ACA930", Offset = "0x4ACA930", VA = "0x4ACA930")]
	public static float4x3 operator %(float4x3 lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600151B")]
	[Address(RVA = "0x4ACAB80", Offset = "0x4ACAB80", VA = "0x4ACAB80")]
	public static float4x3 operator %(float4x3 lhs, float rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600151C")]
	[Address(RVA = "0x4ACAD60", Offset = "0x4ACAD60", VA = "0x4ACAD60")]
	public static float4x3 operator %(float lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600151D")]
	[Address(RVA = "0x4ACAF40", Offset = "0x4ACAF40", VA = "0x4ACAF40")]
	public static float4x3 operator ++(float4x3 val)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600151E")]
	[Address(RVA = "0x4ACAFA0", Offset = "0x4ACAFA0", VA = "0x4ACAFA0")]
	public static float4x3 operator --(float4x3 val)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600151F")]
	[Address(RVA = "0x4ACB000", Offset = "0x4ACB000", VA = "0x4ACB000")]
	public static bool4x3 operator <(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001520")]
	[Address(RVA = "0x4ACB120", Offset = "0x4ACB120", VA = "0x4ACB120")]
	public static bool4x3 operator <(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001521")]
	[Address(RVA = "0x4ACB200", Offset = "0x4ACB200", VA = "0x4ACB200")]
	public static bool4x3 operator <(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001522")]
	[Address(RVA = "0x4ACB2F0", Offset = "0x4ACB2F0", VA = "0x4ACB2F0")]
	public static bool4x3 operator <=(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001523")]
	[Address(RVA = "0x4ACB410", Offset = "0x4ACB410", VA = "0x4ACB410")]
	public static bool4x3 operator <=(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001524")]
	[Address(RVA = "0x4ACB4F0", Offset = "0x4ACB4F0", VA = "0x4ACB4F0")]
	public static bool4x3 operator <=(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001525")]
	[Address(RVA = "0x4ACB5E0", Offset = "0x4ACB5E0", VA = "0x4ACB5E0")]
	public static bool4x3 operator >(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001526")]
	[Address(RVA = "0x4ACB700", Offset = "0x4ACB700", VA = "0x4ACB700")]
	public static bool4x3 operator >(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001527")]
	[Address(RVA = "0x4ACB7F0", Offset = "0x4ACB7F0", VA = "0x4ACB7F0")]
	public static bool4x3 operator >(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001528")]
	[Address(RVA = "0x4ACB8D0", Offset = "0x4ACB8D0", VA = "0x4ACB8D0")]
	public static bool4x3 operator >=(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001529")]
	[Address(RVA = "0x4ACB9F0", Offset = "0x4ACB9F0", VA = "0x4ACB9F0")]
	public static bool4x3 operator >=(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600152A")]
	[Address(RVA = "0x4ACBAE0", Offset = "0x4ACBAE0", VA = "0x4ACBAE0")]
	public static bool4x3 operator >=(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600152B")]
	[Address(RVA = "0x4ACBBC0", Offset = "0x4ACBBC0", VA = "0x4ACBBC0")]
	public static float4x3 operator -(float4x3 val)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600152C")]
	[Address(RVA = "0x4ACBC20", Offset = "0x4ACBC20", VA = "0x4ACBC20")]
	public static float4x3 operator +(float4x3 val)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600152D")]
	[Address(RVA = "0x4ACBC40", Offset = "0x4ACBC40", VA = "0x4ACBC40")]
	public static bool4x3 operator ==(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600152E")]
	[Address(RVA = "0x4ACBDB0", Offset = "0x4ACBDB0", VA = "0x4ACBDB0")]
	public static bool4x3 operator ==(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600152F")]
	[Address(RVA = "0x4ACBEB0", Offset = "0x4ACBEB0", VA = "0x4ACBEB0")]
	public static bool4x3 operator ==(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001530")]
	[Address(RVA = "0x4ACBFB0", Offset = "0x4ACBFB0", VA = "0x4ACBFB0")]
	public static bool4x3 operator !=(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001531")]
	[Address(RVA = "0x4ACC120", Offset = "0x4ACC120", VA = "0x4ACC120")]
	public static bool4x3 operator !=(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001532")]
	[Address(RVA = "0x4ACC220", Offset = "0x4ACC220", VA = "0x4ACC220")]
	public static bool4x3 operator !=(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001534")]
	[Address(RVA = "0x4ACC330", Offset = "0x4ACC330", VA = "0x4ACC330", Slot = "4")]
	public bool Equals(float4x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001535")]
	[Address(RVA = "0x4ACC430", Offset = "0x4ACC430", VA = "0x4ACC430", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001536")]
	[Address(RVA = "0x4ACC580", Offset = "0x4ACC580", VA = "0x4ACC580", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001537")]
	[Address(RVA = "0x4ACC700", Offset = "0x4ACC700", VA = "0x4ACC700", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001538")]
	[Address(RVA = "0x4ACCB60", Offset = "0x4ACCB60", VA = "0x4ACCB60", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
