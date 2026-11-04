// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.float3x3
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
[Token(Token = "0x2000031")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float3x3 : IEquatable<float3x3>, IFormattable
{
	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x0")]
	public float3 c0;

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0xC")]
	public float3 c1;

	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x18")]
	public float3 c2;

	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float3x3 identity;

	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x24")]
	public static readonly float3x3 zero;

	[Token(Token = "0x17000472")]
	public unsafe ref float3 this[int index]
	{
		[Token(Token = "0x60012F5")]
		[Address(RVA = "0x841BD0", Offset = "0x8401D0", VA = "0x180841BD0")]
		get
		{
			return ref *(float3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BC")]
	[Address(RVA = "0x2A2F3B0", Offset = "0x2A2D9B0", VA = "0x182A2F3B0")]
	public float3x3(float3 c0, float3 c1, float3 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BD")]
	[Address(RVA = "0x2A7FB70", Offset = "0x2A7E170", VA = "0x182A7FB70")]
	public float3x3(float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BE")]
	[Address(RVA = "0x2A7FC50", Offset = "0x2A7E250", VA = "0x182A7FC50")]
	public float3x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x2A7FC10", Offset = "0x2A7E210", VA = "0x182A7FC10")]
	public float3x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x29C7940", Offset = "0x29C5F40", VA = "0x1829C7940")]
	public float3x3(bool3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C1")]
	[Address(RVA = "0x2A7FA90", Offset = "0x2A7E090", VA = "0x182A7FA90")]
	public float3x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C2")]
	[Address(RVA = "0x2A7F9E0", Offset = "0x2A7DFE0", VA = "0x182A7F9E0")]
	public float3x3(int3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C3")]
	[Address(RVA = "0x29C7890", Offset = "0x29C5E90", VA = "0x1829C7890")]
	public float3x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C4")]
	[Address(RVA = "0x2A7FC70", Offset = "0x2A7E270", VA = "0x182A7FC70")]
	public float3x3(uint3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C5")]
	[Address(RVA = "0x2A7FD50", Offset = "0x2A7E350", VA = "0x182A7FD50")]
	public float3x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C6")]
	[Address(RVA = "0x2A7FAF0", Offset = "0x2A7E0F0", VA = "0x182A7FAF0")]
	public float3x3(double3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C7")]
	[Address(RVA = "0x29E07C0", Offset = "0x29DEDC0", VA = "0x1829E07C0")]
	public static implicit operator float3x3(float v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C8")]
	[Address(RVA = "0x29E0780", Offset = "0x29DED80", VA = "0x1829E0780")]
	public static explicit operator float3x3(bool v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C9")]
	[Address(RVA = "0x29E0D30", Offset = "0x29DF330", VA = "0x1829E0D30")]
	public static explicit operator float3x3(bool3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012CA")]
	[Address(RVA = "0x29E0A10", Offset = "0x29DF010", VA = "0x1829E0A10")]
	public static implicit operator float3x3(int v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012CB")]
	[Address(RVA = "0x29E0880", Offset = "0x29DEE80", VA = "0x1829E0880")]
	public static implicit operator float3x3(int3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012CC")]
	[Address(RVA = "0x29E0BC0", Offset = "0x29DF1C0", VA = "0x1829E0BC0")]
	public static implicit operator float3x3(uint v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012CD")]
	[Address(RVA = "0x29E0AB0", Offset = "0x29DF0B0", VA = "0x1829E0AB0")]
	public static implicit operator float3x3(uint3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012CE")]
	[Address(RVA = "0x29E0CB0", Offset = "0x29DF2B0", VA = "0x1829E0CB0")]
	public static explicit operator float3x3(double v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012CF")]
	[Address(RVA = "0x29E07E0", Offset = "0x29DEDE0", VA = "0x1829E07E0")]
	public static explicit operator float3x3(double3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D0")]
	[Address(RVA = "0x2A81770", Offset = "0x2A7FD70", VA = "0x182A81770")]
	public static float3x3 operator *(float3x3 lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D1")]
	[Address(RVA = "0x2A818D0", Offset = "0x2A7FED0", VA = "0x182A818D0")]
	public static float3x3 operator *(float3x3 lhs, float rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D2")]
	[Address(RVA = "0x2A81820", Offset = "0x2A7FE20", VA = "0x182A81820")]
	public static float3x3 operator *(float lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D3")]
	[Address(RVA = "0x2A800F0", Offset = "0x2A7E6F0", VA = "0x182A800F0")]
	public static float3x3 operator +(float3x3 lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D4")]
	[Address(RVA = "0x2A80050", Offset = "0x2A7E650", VA = "0x182A80050")]
	public static float3x3 operator +(float3x3 lhs, float rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D5")]
	[Address(RVA = "0x2A801A0", Offset = "0x2A7E7A0", VA = "0x182A801A0")]
	public static float3x3 operator +(float lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D6")]
	[Address(RVA = "0x2A81970", Offset = "0x2A7FF70", VA = "0x182A81970")]
	public static float3x3 operator -(float3x3 lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D7")]
	[Address(RVA = "0x2A81A20", Offset = "0x2A80020", VA = "0x182A81A20")]
	public static float3x3 operator -(float3x3 lhs, float rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D8")]
	[Address(RVA = "0x2A81AD0", Offset = "0x2A800D0", VA = "0x182A81AD0")]
	public static float3x3 operator -(float lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D9")]
	[Address(RVA = "0x2A80330", Offset = "0x2A7E930", VA = "0x182A80330")]
	public static float3x3 operator /(float3x3 lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012DA")]
	[Address(RVA = "0x2A80490", Offset = "0x2A7EA90", VA = "0x182A80490")]
	public static float3x3 operator /(float3x3 lhs, float rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012DB")]
	[Address(RVA = "0x2A803E0", Offset = "0x2A7E9E0", VA = "0x182A803E0")]
	public static float3x3 operator /(float lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012DC")]
	[Address(RVA = "0x2A81500", Offset = "0x2A7FB00", VA = "0x182A81500")]
	public static float3x3 operator %(float3x3 lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012DD")]
	[Address(RVA = "0x2A81640", Offset = "0x2A7FC40", VA = "0x182A81640")]
	public static float3x3 operator %(float3x3 lhs, float rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012DE")]
	[Address(RVA = "0x2A813C0", Offset = "0x2A7F9C0", VA = "0x182A813C0")]
	public static float3x3 operator %(float lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012DF")]
	[Address(RVA = "0x2A80C30", Offset = "0x2A7F230", VA = "0x182A80C30")]
	public static float3x3 operator ++(float3x3 val)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E0")]
	[Address(RVA = "0x2A80250", Offset = "0x2A7E850", VA = "0x182A80250")]
	public static float3x3 operator --(float3x3 val)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E1")]
	[Address(RVA = "0x2A81310", Offset = "0x2A7F910", VA = "0x182A81310")]
	public static bool3x3 operator <(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E2")]
	[Address(RVA = "0x2A811F0", Offset = "0x2A7F7F0", VA = "0x182A811F0")]
	public static bool3x3 operator <(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E3")]
	[Address(RVA = "0x2A81260", Offset = "0x2A7F860", VA = "0x182A81260")]
	public static bool3x3 operator <(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E4")]
	[Address(RVA = "0x2A810D0", Offset = "0x2A7F6D0", VA = "0x182A810D0")]
	public static bool3x3 operator <=(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E5")]
	[Address(RVA = "0x2A81180", Offset = "0x2A7F780", VA = "0x182A81180")]
	public static bool3x3 operator <=(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E6")]
	[Address(RVA = "0x2A81020", Offset = "0x2A7F620", VA = "0x182A81020")]
	public static bool3x3 operator <=(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E7")]
	[Address(RVA = "0x2A80B00", Offset = "0x2A7F100", VA = "0x182A80B00")]
	public static bool3x3 operator >(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E8")]
	[Address(RVA = "0x2A80A60", Offset = "0x2A7F060", VA = "0x182A80A60")]
	public static bool3x3 operator >(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E9")]
	[Address(RVA = "0x2A80BB0", Offset = "0x2A7F1B0", VA = "0x182A80BB0")]
	public static bool3x3 operator >(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012EA")]
	[Address(RVA = "0x2A80930", Offset = "0x2A7EF30", VA = "0x182A80930")]
	public static bool3x3 operator >=(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012EB")]
	[Address(RVA = "0x2A80890", Offset = "0x2A7EE90", VA = "0x182A80890")]
	public static bool3x3 operator >=(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012EC")]
	[Address(RVA = "0x2A809E0", Offset = "0x2A7EFE0", VA = "0x182A809E0")]
	public static bool3x3 operator >=(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012ED")]
	[Address(RVA = "0x2A81B80", Offset = "0x2A80180", VA = "0x182A81B80")]
	public static float3x3 operator -(float3x3 val)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012EE")]
	[Address(RVA = "0x2A81C30", Offset = "0x2A80230", VA = "0x182A81C30")]
	public static float3x3 operator +(float3x3 val)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012EF")]
	[Address(RVA = "0x2A80730", Offset = "0x2A7ED30", VA = "0x182A80730")]
	public static bool3x3 operator ==(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F0")]
	[Address(RVA = "0x2A80630", Offset = "0x2A7EC30", VA = "0x182A80630")]
	public static bool3x3 operator ==(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F1")]
	[Address(RVA = "0x2A80540", Offset = "0x2A7EB40", VA = "0x182A80540")]
	public static bool3x3 operator ==(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F2")]
	[Address(RVA = "0x2A80F00", Offset = "0x2A7F500", VA = "0x182A80F00")]
	public static bool3x3 operator !=(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F3")]
	[Address(RVA = "0x2A80E00", Offset = "0x2A7F400", VA = "0x182A80E00")]
	public static bool3x3 operator !=(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F4")]
	[Address(RVA = "0x2A80D10", Offset = "0x2A7F310", VA = "0x182A80D10")]
	public static bool3x3 operator !=(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F6")]
	[Address(RVA = "0x2A7E290", Offset = "0x2A7C890", VA = "0x182A7E290", Slot = "4")]
	public bool Equals(float3x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60012F7")]
	[Address(RVA = "0x2A7E160", Offset = "0x2A7C760", VA = "0x182A7E160", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F8")]
	[Address(RVA = "0x2A7E830", Offset = "0x2A7CE30", VA = "0x182A7E830", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F9")]
	[Address(RVA = "0x2A7F1C0", Offset = "0x2A7D7C0", VA = "0x182A7F1C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012FA")]
	[Address(RVA = "0x2A7F5D0", Offset = "0x2A7DBD0", VA = "0x182A7F5D0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x60012FB")]
	[Address(RVA = "0x2A7FBD0", Offset = "0x2A7E1D0", VA = "0x182A7FBD0")]
	public float3x3(float4x4 f4x4)
	{
	}

	[Token(Token = "0x60012FC")]
	[Address(RVA = "0x2A7FDC0", Offset = "0x2A7E3C0", VA = "0x182A7FDC0")]
	public float3x3(quaternion q)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012FD")]
	[Address(RVA = "0x2A7DEB0", Offset = "0x2A7C4B0", VA = "0x182A7DEB0")]
	public static float3x3 AxisAngle(float3 axis, float angle)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012FE")]
	[Address(RVA = "0x2A747C0", Offset = "0x2A72DC0", VA = "0x182A747C0")]
	public static float3x3 EulerXYZ(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x2A74970", Offset = "0x2A72F70", VA = "0x182A74970")]
	public static float3x3 EulerXZY(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001300")]
	[Address(RVA = "0x2A74B30", Offset = "0x2A73130", VA = "0x182A74B30")]
	public static float3x3 EulerYXZ(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001301")]
	[Address(RVA = "0x2A74CE0", Offset = "0x2A732E0", VA = "0x182A74CE0")]
	public static float3x3 EulerYZX(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001302")]
	[Address(RVA = "0x2A74E90", Offset = "0x2A73490", VA = "0x182A74E90")]
	public static float3x3 EulerZXY(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001303")]
	[Address(RVA = "0x2A75020", Offset = "0x2A73620", VA = "0x182A75020")]
	public static float3x3 EulerZYX(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001304")]
	[Address(RVA = "0x2A7E310", Offset = "0x2A7C910", VA = "0x182A7E310")]
	public static float3x3 EulerXYZ(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001305")]
	[Address(RVA = "0x2A7E360", Offset = "0x2A7C960", VA = "0x182A7E360")]
	public static float3x3 EulerXZY(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001306")]
	[Address(RVA = "0x2A7E3B0", Offset = "0x2A7C9B0", VA = "0x182A7E3B0")]
	public static float3x3 EulerYXZ(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001307")]
	[Address(RVA = "0x2A7E400", Offset = "0x2A7CA00", VA = "0x182A7E400")]
	public static float3x3 EulerYZX(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001308")]
	[Address(RVA = "0x2A7E450", Offset = "0x2A7CA50", VA = "0x182A7E450")]
	public static float3x3 EulerZXY(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001309")]
	[Address(RVA = "0x2A7E4A0", Offset = "0x2A7CAA0", VA = "0x182A7E4A0")]
	public static float3x3 EulerZYX(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600130A")]
	[Address(RVA = "0x2A7E6C0", Offset = "0x2A7CCC0", VA = "0x182A7E6C0")]
	public static float3x3 Euler(float3 xyz, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600130B")]
	[Address(RVA = "0x2A7E4F0", Offset = "0x2A7CAF0", VA = "0x182A7E4F0")]
	public static float3x3 Euler(float x, float y, float z, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600130C")]
	[Address(RVA = "0x2A7EDA0", Offset = "0x2A7D3A0", VA = "0x182A7EDA0")]
	public static float3x3 RotateX(float angle)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600130D")]
	[Address(RVA = "0x2A7EEA0", Offset = "0x2A7D4A0", VA = "0x182A7EEA0")]
	public static float3x3 RotateY(float angle)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600130E")]
	[Address(RVA = "0x2A7EFB0", Offset = "0x2A7D5B0", VA = "0x182A7EFB0")]
	public static float3x3 RotateZ(float angle)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600130F")]
	[Address(RVA = "0x2A7F170", Offset = "0x2A7D770", VA = "0x182A7F170")]
	public static float3x3 Scale(float s)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001310")]
	[Address(RVA = "0x2A7F0C0", Offset = "0x2A7D6C0", VA = "0x182A7F0C0")]
	public static float3x3 Scale(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001311")]
	[Address(RVA = "0x2A7F110", Offset = "0x2A7D710", VA = "0x182A7F110")]
	public static float3x3 Scale(float3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001312")]
	[Address(RVA = "0x2A7EC30", Offset = "0x2A7D230", VA = "0x182A7EC30")]
	public static float3x3 LookRotation(float3 forward, float3 up)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001313")]
	[Address(RVA = "0x2A7E8F0", Offset = "0x2A7CEF0", VA = "0x182A7E8F0")]
	public static float3x3 LookRotationSafe(float3 forward, float3 up)
	{
		return default(float3x3);
	}

	[Token(Token = "0x6001314")]
	[Address(RVA = "0x2A80850", Offset = "0x2A7EE50", VA = "0x182A80850")]
	public static explicit operator float3x3(float4x4 f4x4)
	{
		return default(float3x3);
	}
}
