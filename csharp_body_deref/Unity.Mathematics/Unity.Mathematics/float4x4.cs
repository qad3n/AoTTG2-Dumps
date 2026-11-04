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
[Token(Token = "0x2000037")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float4x4 : IEquatable<float4x4>, IFormattable
{
	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x0")]
	public float4 c0;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x10")]
	public float4 c1;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x20")]
	public float4 c2;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x30")]
	public float4 c3;

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float4x4 identity;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x40")]
	public static readonly float4x4 zero;

	[Token(Token = "0x170005C7")]
	public unsafe ref float4 this[int index]
	{
		[Token(Token = "0x60015E5")]
		[Address(RVA = "0x841B00", Offset = "0x840100", VA = "0x180841B00")]
		get
		{
			return ref *(float4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015AC")]
	[Address(RVA = "0x2A401B0", Offset = "0x2A3E7B0", VA = "0x182A401B0")]
	public float4x4(float4 c0, float4 c1, float4 c2, float4 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015AD")]
	[Address(RVA = "0x2A90900", Offset = "0x2A8EF00", VA = "0x182A90900")]
	public float4x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015AE")]
	[Address(RVA = "0x2A90B20", Offset = "0x2A8F120", VA = "0x182A90B20")]
	public float4x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015AF")]
	[Address(RVA = "0x2A909F0", Offset = "0x2A8EFF0", VA = "0x182A909F0")]
	public float4x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B0")]
	[Address(RVA = "0x29C80B0", Offset = "0x29C66B0", VA = "0x1829C80B0")]
	public float4x4(bool4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B1")]
	[Address(RVA = "0x2A909B0", Offset = "0x2A8EFB0", VA = "0x182A909B0")]
	public float4x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B2")]
	[Address(RVA = "0x2A90B40", Offset = "0x2A8F140", VA = "0x182A90B40")]
	public float4x4(int4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B3")]
	[Address(RVA = "0x29C82F0", Offset = "0x29C68F0", VA = "0x1829C82F0")]
	public float4x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B4")]
	[Address(RVA = "0x29C8420", Offset = "0x29C6A20", VA = "0x1829C8420")]
	public float4x4(uint4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B5")]
	[Address(RVA = "0x29C8220", Offset = "0x29C6820", VA = "0x1829C8220")]
	public float4x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B6")]
	[Address(RVA = "0x2A90A40", Offset = "0x2A8F040", VA = "0x182A90A40")]
	public float4x4(double4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B7")]
	[Address(RVA = "0x29E2890", Offset = "0x29E0E90", VA = "0x1829E2890")]
	public static implicit operator float4x4(float v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B8")]
	[Address(RVA = "0x29E2DC0", Offset = "0x29E13C0", VA = "0x1829E2DC0")]
	public static explicit operator float4x4(bool v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B9")]
	[Address(RVA = "0x29E2ED0", Offset = "0x29E14D0", VA = "0x1829E2ED0")]
	public static explicit operator float4x4(bool4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015BA")]
	[Address(RVA = "0x29E2E10", Offset = "0x29E1410", VA = "0x1829E2E10")]
	public static implicit operator float4x4(int v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015BB")]
	[Address(RVA = "0x29E2670", Offset = "0x29E0C70", VA = "0x1829E2670")]
	public static implicit operator float4x4(int4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015BC")]
	[Address(RVA = "0x2A91C50", Offset = "0x2A90250", VA = "0x182A91C50")]
	public static implicit operator float4x4(uint v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015BD")]
	[Address(RVA = "0x2A91D40", Offset = "0x2A90340", VA = "0x182A91D40")]
	public static implicit operator float4x4(uint4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015BE")]
	[Address(RVA = "0x2A91640", Offset = "0x2A8FC40", VA = "0x182A91640")]
	public static explicit operator float4x4(double v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015BF")]
	[Address(RVA = "0x29E2930", Offset = "0x29E0F30", VA = "0x1829E2930")]
	public static explicit operator float4x4(double4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C0")]
	[Address(RVA = "0x2A93040", Offset = "0x2A91640", VA = "0x182A93040")]
	public static float4x4 operator *(float4x4 lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C1")]
	[Address(RVA = "0x2A92F60", Offset = "0x2A91560", VA = "0x182A92F60")]
	public static float4x4 operator *(float4x4 lhs, float rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C2")]
	[Address(RVA = "0x2A92E70", Offset = "0x2A91470", VA = "0x182A92E70")]
	public static float4x4 operator *(float lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C3")]
	[Address(RVA = "0x2A90D40", Offset = "0x2A8F340", VA = "0x182A90D40")]
	public static float4x4 operator +(float4x4 lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C4")]
	[Address(RVA = "0x2A90C60", Offset = "0x2A8F260", VA = "0x182A90C60")]
	public static float4x4 operator +(float4x4 lhs, float rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C5")]
	[Address(RVA = "0x2A90B70", Offset = "0x2A8F170", VA = "0x182A90B70")]
	public static float4x4 operator +(float lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C6")]
	[Address(RVA = "0x2A932D0", Offset = "0x2A918D0", VA = "0x182A932D0")]
	public static float4x4 operator -(float4x4 lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C7")]
	[Address(RVA = "0x2A93280", Offset = "0x2A91880", VA = "0x182A93280")]
	public static float4x4 operator -(float4x4 lhs, float rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C8")]
	[Address(RVA = "0x2A93170", Offset = "0x2A91770", VA = "0x182A93170")]
	public static float4x4 operator -(float lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C9")]
	[Address(RVA = "0x2A91040", Offset = "0x2A8F640", VA = "0x182A91040")]
	public static float4x4 operator /(float4x4 lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015CA")]
	[Address(RVA = "0x2A90FF0", Offset = "0x2A8F5F0", VA = "0x182A90FF0")]
	public static float4x4 operator /(float4x4 lhs, float rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015CB")]
	[Address(RVA = "0x2A90EE0", Offset = "0x2A8F4E0", VA = "0x182A90EE0")]
	public static float4x4 operator /(float lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015CC")]
	[Address(RVA = "0x2A92AA0", Offset = "0x2A910A0", VA = "0x182A92AA0")]
	public static float4x4 operator %(float4x4 lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015CD")]
	[Address(RVA = "0x2A92C90", Offset = "0x2A91290", VA = "0x182A92C90")]
	public static float4x4 operator %(float4x4 lhs, float rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015CE")]
	[Address(RVA = "0x2A928C0", Offset = "0x2A90EC0", VA = "0x182A928C0")]
	public static float4x4 operator %(float lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015CF")]
	[Address(RVA = "0x2A91DA0", Offset = "0x2A903A0", VA = "0x182A91DA0")]
	public static float4x4 operator ++(float4x4 val)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D0")]
	[Address(RVA = "0x2A90E70", Offset = "0x2A8F470", VA = "0x182A90E70")]
	public static float4x4 operator --(float4x4 val)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D1")]
	[Address(RVA = "0x2A927A0", Offset = "0x2A90DA0", VA = "0x182A927A0")]
	public static bool4x4 operator <(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D2")]
	[Address(RVA = "0x2A926E0", Offset = "0x2A90CE0", VA = "0x182A926E0")]
	public static bool4x4 operator <(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D3")]
	[Address(RVA = "0x2A925D0", Offset = "0x2A90BD0", VA = "0x182A925D0")]
	public static bool4x4 operator <(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D4")]
	[Address(RVA = "0x2A924B0", Offset = "0x2A90AB0", VA = "0x182A924B0")]
	public static bool4x4 operator <=(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D5")]
	[Address(RVA = "0x2A923F0", Offset = "0x2A909F0", VA = "0x182A923F0")]
	public static bool4x4 operator <=(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D6")]
	[Address(RVA = "0x2A922E0", Offset = "0x2A908E0", VA = "0x182A922E0")]
	public static bool4x4 operator <=(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D7")]
	[Address(RVA = "0x2A91960", Offset = "0x2A8FF60", VA = "0x182A91960")]
	public static bool4x4 operator >(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D8")]
	[Address(RVA = "0x2A91B50", Offset = "0x2A90150", VA = "0x182A91B50")]
	public static bool4x4 operator >(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D9")]
	[Address(RVA = "0x2A91A80", Offset = "0x2A90080", VA = "0x182A91A80")]
	public static bool4x4 operator >(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015DA")]
	[Address(RVA = "0x2A91770", Offset = "0x2A8FD70", VA = "0x182A91770")]
	public static bool4x4 operator >=(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015DB")]
	[Address(RVA = "0x2A91670", Offset = "0x2A8FC70", VA = "0x182A91670")]
	public static bool4x4 operator >=(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015DC")]
	[Address(RVA = "0x2A91890", Offset = "0x2A8FE90", VA = "0x182A91890")]
	public static bool4x4 operator >=(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015DD")]
	[Address(RVA = "0x2A93400", Offset = "0x2A91A00", VA = "0x182A93400")]
	public static float4x4 operator -(float4x4 val)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015DE")]
	[Address(RVA = "0x2A91CF0", Offset = "0x2A902F0", VA = "0x182A91CF0")]
	public static float4x4 operator +(float4x4 val)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015DF")]
	[Address(RVA = "0x2A91310", Offset = "0x2A8F910", VA = "0x182A91310")]
	public static bool4x4 operator ==(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015E0")]
	[Address(RVA = "0x2A91170", Offset = "0x2A8F770", VA = "0x182A91170")]
	public static bool4x4 operator ==(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015E1")]
	[Address(RVA = "0x2A914D0", Offset = "0x2A8FAD0", VA = "0x182A914D0")]
	public static bool4x4 operator ==(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015E2")]
	[Address(RVA = "0x2A91F80", Offset = "0x2A90580", VA = "0x182A91F80")]
	public static bool4x4 operator !=(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015E3")]
	[Address(RVA = "0x2A92140", Offset = "0x2A90740", VA = "0x182A92140")]
	public static bool4x4 operator !=(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015E4")]
	[Address(RVA = "0x2A91E10", Offset = "0x2A90410", VA = "0x182A91E10")]
	public static bool4x4 operator !=(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015E6")]
	[Address(RVA = "0x2A86B20", Offset = "0x2A85120", VA = "0x182A86B20", Slot = "4")]
	public bool Equals(float4x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015E7")]
	[Address(RVA = "0x2A8E400", Offset = "0x2A8CA00", VA = "0x182A8E400", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015E8")]
	[Address(RVA = "0x2A8EA80", Offset = "0x2A8D080", VA = "0x182A8EA80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015E9")]
	[Address(RVA = "0x2A8F8C0", Offset = "0x2A8DEC0", VA = "0x182A8F8C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015EA")]
	[Address(RVA = "0x2A8FFA0", Offset = "0x2A8E5A0", VA = "0x182A8FFA0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x60015EB")]
	[Address(RVA = "0x2A91CF0", Offset = "0x2A902F0", VA = "0x182A91CF0")]
	public static implicit operator float4x4(Matrix4x4 m)
	{
		return default(float4x4);
	}

	[Token(Token = "0x60015EC")]
	[Address(RVA = "0x2A91C80", Offset = "0x2A90280", VA = "0x182A91C80")]
	public static implicit operator Matrix4x4(float4x4 m)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60015ED")]
	[Address(RVA = "0x2A906E0", Offset = "0x2A8ECE0", VA = "0x182A906E0")]
	public float4x4(float3x3 rotation, float3 translation)
	{
	}

	[Token(Token = "0x60015EE")]
	[Address(RVA = "0x2A90740", Offset = "0x2A8ED40", VA = "0x182A90740")]
	public float4x4(quaternion rotation, float3 translation)
	{
	}

	[Token(Token = "0x60015EF")]
	[Address(RVA = "0x2A90810", Offset = "0x2A8EE10", VA = "0x182A90810")]
	public float4x4(RigidTransform transform)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015F0")]
	[Address(RVA = "0x2A8E080", Offset = "0x2A8C680", VA = "0x182A8E080")]
	public static float4x4 AxisAngle(float3 axis, float angle)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015F1")]
	[Address(RVA = "0x2A86C30", Offset = "0x2A85230", VA = "0x182A86C30")]
	public static float4x4 EulerXYZ(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015F2")]
	[Address(RVA = "0x2A86E40", Offset = "0x2A85440", VA = "0x182A86E40")]
	public static float4x4 EulerXZY(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015F3")]
	[Address(RVA = "0x2A87040", Offset = "0x2A85640", VA = "0x182A87040")]
	public static float4x4 EulerYXZ(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015F4")]
	[Address(RVA = "0x2A87240", Offset = "0x2A85840", VA = "0x182A87240")]
	public static float4x4 EulerYZX(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015F5")]
	[Address(RVA = "0x2A87450", Offset = "0x2A85A50", VA = "0x182A87450")]
	public static float4x4 EulerZXY(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015F6")]
	[Address(RVA = "0x2A87630", Offset = "0x2A85C30", VA = "0x182A87630")]
	public static float4x4 EulerZYX(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015F7")]
	[Address(RVA = "0x2A8E4B0", Offset = "0x2A8CAB0", VA = "0x182A8E4B0")]
	public static float4x4 EulerXYZ(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015F8")]
	[Address(RVA = "0x2A8E510", Offset = "0x2A8CB10", VA = "0x182A8E510")]
	public static float4x4 EulerXZY(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015F9")]
	[Address(RVA = "0x2A8E570", Offset = "0x2A8CB70", VA = "0x182A8E570")]
	public static float4x4 EulerYXZ(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015FA")]
	[Address(RVA = "0x2A8E5D0", Offset = "0x2A8CBD0", VA = "0x182A8E5D0")]
	public static float4x4 EulerYZX(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015FB")]
	[Address(RVA = "0x2A8E630", Offset = "0x2A8CC30", VA = "0x182A8E630")]
	public static float4x4 EulerZXY(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015FC")]
	[Address(RVA = "0x2A8E690", Offset = "0x2A8CC90", VA = "0x182A8E690")]
	public static float4x4 EulerZYX(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015FD")]
	[Address(RVA = "0x2A8E8F0", Offset = "0x2A8CEF0", VA = "0x182A8E8F0")]
	public static float4x4 Euler(float3 xyz, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015FE")]
	[Address(RVA = "0x2A8E6F0", Offset = "0x2A8CCF0", VA = "0x182A8E6F0")]
	public static float4x4 Euler(float x, float y, float z, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015FF")]
	[Address(RVA = "0x2A8F1D0", Offset = "0x2A8D7D0", VA = "0x182A8F1D0")]
	public static float4x4 RotateX(float angle)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001600")]
	[Address(RVA = "0x2A8F300", Offset = "0x2A8D900", VA = "0x182A8F300")]
	public static float4x4 RotateY(float angle)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001601")]
	[Address(RVA = "0x2A8F440", Offset = "0x2A8DA40", VA = "0x182A8F440")]
	public static float4x4 RotateZ(float angle)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001602")]
	[Address(RVA = "0x2A8F5F0", Offset = "0x2A8DBF0", VA = "0x182A8F5F0")]
	public static float4x4 Scale(float s)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001603")]
	[Address(RVA = "0x2A8F580", Offset = "0x2A8DB80", VA = "0x182A8F580")]
	public static float4x4 Scale(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001604")]
	[Address(RVA = "0x2A8F660", Offset = "0x2A8DC60", VA = "0x182A8F660")]
	public static float4x4 Scale(float3 scales)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001605")]
	[Address(RVA = "0x2A90600", Offset = "0x2A8EC00", VA = "0x182A90600")]
	public static float4x4 Translate(float3 vector)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001606")]
	[Address(RVA = "0x2A8EAC0", Offset = "0x2A8D0C0", VA = "0x182A8EAC0")]
	public static float4x4 LookAt(float3 eye, float3 target, float3 up)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001607")]
	[Address(RVA = "0x2A8EE20", Offset = "0x2A8D420", VA = "0x182A8EE20")]
	public static float4x4 Ortho(float width, float height, float near, float far)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001608")]
	[Address(RVA = "0x2A8ECA0", Offset = "0x2A8D2A0", VA = "0x182A8ECA0")]
	public static float4x4 OrthoOffCenter(float left, float right, float bottom, float top, float near, float far)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001609")]
	[Address(RVA = "0x2A8EF10", Offset = "0x2A8D510", VA = "0x182A8EF10")]
	public static float4x4 PerspectiveFov(float verticalFov, float aspect, float near, float far)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600160A")]
	[Address(RVA = "0x2A8F060", Offset = "0x2A8D660", VA = "0x182A8F060")]
	public static float4x4 PerspectiveOffCenter(float left, float right, float bottom, float top, float near, float far)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600160B")]
	[Address(RVA = "0x2A8F6E0", Offset = "0x2A8DCE0", VA = "0x182A8F6E0")]
	public static float4x4 TRS(float3 translation, quaternion rotation, float3 scale)
	{
		return default(float4x4);
	}
}
