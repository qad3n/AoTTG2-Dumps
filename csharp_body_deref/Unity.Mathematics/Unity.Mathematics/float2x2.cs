// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.float2x2
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
[Token(Token = "0x200002B")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float2x2 : IEquatable<float2x2>, IFormattable
{
	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x0")]
	public float2 c0;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x8")]
	public float2 c1;

	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float2x2 identity;

	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x10")]
	public static readonly float2x2 zero;

	[Token(Token = "0x170003F8")]
	public unsafe ref float2 this[int index]
	{
		[Token(Token = "0x600112A")]
		[Address(RVA = "0x841B10", Offset = "0x840110", VA = "0x180841B10")]
		get
		{
			return ref *(float2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F1")]
	[Address(RVA = "0xB546F0", Offset = "0xB52CF0", VA = "0x180B546F0")]
	public float2x2(float2 c0, float2 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F2")]
	[Address(RVA = "0x2A76E20", Offset = "0x2A75420", VA = "0x182A76E20")]
	public float2x2(float m00, float m01, float m10, float m11)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F3")]
	[Address(RVA = "0x298BB40", Offset = "0x298A140", VA = "0x18298BB40")]
	public float2x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F4")]
	[Address(RVA = "0x2A76CE0", Offset = "0x2A752E0", VA = "0x182A76CE0")]
	public float2x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F5")]
	[Address(RVA = "0x2A76D90", Offset = "0x2A75390", VA = "0x182A76D90")]
	public float2x2(bool2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F6")]
	[Address(RVA = "0x2A76DF0", Offset = "0x2A753F0", VA = "0x182A76DF0")]
	public float2x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F7")]
	[Address(RVA = "0x2A76E80", Offset = "0x2A75480", VA = "0x182A76E80")]
	public float2x2(int2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F8")]
	[Address(RVA = "0x2A76EC0", Offset = "0x2A754C0", VA = "0x182A76EC0")]
	public float2x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F9")]
	[Address(RVA = "0x2A76D00", Offset = "0x2A75300", VA = "0x182A76D00")]
	public float2x2(uint2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010FA")]
	[Address(RVA = "0x2A76D60", Offset = "0x2A75360", VA = "0x182A76D60")]
	public float2x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010FB")]
	[Address(RVA = "0x2A76E40", Offset = "0x2A75440", VA = "0x182A76E40")]
	public float2x2(double2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010FC")]
	[Address(RVA = "0x2989E90", Offset = "0x2988490", VA = "0x182989E90")]
	public static implicit operator float2x2(float v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010FD")]
	[Address(RVA = "0x29DF670", Offset = "0x29DDC70", VA = "0x1829DF670")]
	public static explicit operator float2x2(bool v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010FE")]
	[Address(RVA = "0x29DF6A0", Offset = "0x29DDCA0", VA = "0x1829DF6A0")]
	public static explicit operator float2x2(bool2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010FF")]
	[Address(RVA = "0x29DF520", Offset = "0x29DDB20", VA = "0x1829DF520")]
	public static implicit operator float2x2(int v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001100")]
	[Address(RVA = "0x29DF610", Offset = "0x29DDC10", VA = "0x1829DF610")]
	public static implicit operator float2x2(int2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001101")]
	[Address(RVA = "0x29DF590", Offset = "0x29DDB90", VA = "0x1829DF590")]
	public static implicit operator float2x2(uint v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001102")]
	[Address(RVA = "0x29DF490", Offset = "0x29DDA90", VA = "0x1829DF490")]
	public static implicit operator float2x2(uint2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001103")]
	[Address(RVA = "0x29DF5E0", Offset = "0x29DDBE0", VA = "0x1829DF5E0")]
	public static explicit operator float2x2(double v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001104")]
	[Address(RVA = "0x29DF550", Offset = "0x29DDB50", VA = "0x1829DF550")]
	public static explicit operator float2x2(double2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001105")]
	[Address(RVA = "0x2A77810", Offset = "0x2A75E10", VA = "0x182A77810")]
	public static float2x2 operator *(float2x2 lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001106")]
	[Address(RVA = "0x29C7CF0", Offset = "0x29C62F0", VA = "0x1829C7CF0")]
	public static float2x2 operator *(float2x2 lhs, float rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001107")]
	[Address(RVA = "0x2A77860", Offset = "0x2A75E60", VA = "0x182A77860")]
	public static float2x2 operator *(float lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001108")]
	[Address(RVA = "0x2A76F10", Offset = "0x2A75510", VA = "0x182A76F10")]
	public static float2x2 operator +(float2x2 lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001109")]
	[Address(RVA = "0x2A76F80", Offset = "0x2A75580", VA = "0x182A76F80")]
	public static float2x2 operator +(float2x2 lhs, float rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110A")]
	[Address(RVA = "0x2A76F60", Offset = "0x2A75560", VA = "0x182A76F60")]
	public static float2x2 operator +(float lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110B")]
	[Address(RVA = "0x2A778E0", Offset = "0x2A75EE0", VA = "0x182A778E0")]
	public static float2x2 operator -(float2x2 lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110C")]
	[Address(RVA = "0x2A778C0", Offset = "0x2A75EC0", VA = "0x182A778C0")]
	public static float2x2 operator -(float2x2 lhs, float rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110D")]
	[Address(RVA = "0x2A77880", Offset = "0x2A75E80", VA = "0x182A77880")]
	public static float2x2 operator -(float lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110E")]
	[Address(RVA = "0x2A76FF0", Offset = "0x2A755F0", VA = "0x182A76FF0")]
	public static float2x2 operator /(float2x2 lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110F")]
	[Address(RVA = "0x2A77080", Offset = "0x2A75680", VA = "0x182A77080")]
	public static float2x2 operator /(float2x2 lhs, float rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001110")]
	[Address(RVA = "0x2A77040", Offset = "0x2A75640", VA = "0x182A77040")]
	public static float2x2 operator /(float lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001111")]
	[Address(RVA = "0x29E36C0", Offset = "0x29E1CC0", VA = "0x1829E36C0")]
	public static float2x2 operator %(float2x2 lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001112")]
	[Address(RVA = "0x2A77710", Offset = "0x2A75D10", VA = "0x182A77710")]
	public static float2x2 operator %(float2x2 lhs, float rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001113")]
	[Address(RVA = "0x2A77790", Offset = "0x2A75D90", VA = "0x182A77790")]
	public static float2x2 operator %(float lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001114")]
	[Address(RVA = "0x2A773B0", Offset = "0x2A759B0", VA = "0x182A773B0")]
	public static float2x2 operator ++(float2x2 val)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001115")]
	[Address(RVA = "0x2A76FA0", Offset = "0x2A755A0", VA = "0x182A76FA0")]
	public static float2x2 operator --(float2x2 val)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001116")]
	[Address(RVA = "0x2A77680", Offset = "0x2A75C80", VA = "0x182A77680")]
	public static bool2x2 operator <(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001117")]
	[Address(RVA = "0x2A776D0", Offset = "0x2A75CD0", VA = "0x182A776D0")]
	public static bool2x2 operator <(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001118")]
	[Address(RVA = "0x2A77630", Offset = "0x2A75C30", VA = "0x182A77630")]
	public static bool2x2 operator <(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001119")]
	[Address(RVA = "0x2A775A0", Offset = "0x2A75BA0", VA = "0x182A775A0")]
	public static bool2x2 operator <=(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111A")]
	[Address(RVA = "0x2A775F0", Offset = "0x2A75BF0", VA = "0x182A775F0")]
	public static bool2x2 operator <=(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111B")]
	[Address(RVA = "0x2A77550", Offset = "0x2A75B50", VA = "0x182A77550")]
	public static bool2x2 operator <=(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111C")]
	[Address(RVA = "0x2A77310", Offset = "0x2A75910", VA = "0x182A77310")]
	public static bool2x2 operator >(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111D")]
	[Address(RVA = "0x2A77360", Offset = "0x2A75960", VA = "0x182A77360")]
	public static bool2x2 operator >(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111E")]
	[Address(RVA = "0x2A772D0", Offset = "0x2A758D0", VA = "0x182A772D0")]
	public static bool2x2 operator >(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111F")]
	[Address(RVA = "0x2A77240", Offset = "0x2A75840", VA = "0x182A77240")]
	public static bool2x2 operator >=(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001120")]
	[Address(RVA = "0x2A771F0", Offset = "0x2A757F0", VA = "0x182A771F0")]
	public static bool2x2 operator >=(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001121")]
	[Address(RVA = "0x2A77290", Offset = "0x2A75890", VA = "0x182A77290")]
	public static bool2x2 operator >=(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001122")]
	[Address(RVA = "0x2A3A8C0", Offset = "0x2A38EC0", VA = "0x182A3A8C0")]
	public static float2x2 operator -(float2x2 val)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001123")]
	[Address(RVA = "0x29E19B0", Offset = "0x29DFFB0", VA = "0x1829E19B0")]
	public static float2x2 operator +(float2x2 val)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001124")]
	[Address(RVA = "0x2A770A0", Offset = "0x2A756A0", VA = "0x182A770A0")]
	public static bool2x2 operator ==(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001125")]
	[Address(RVA = "0x2A77120", Offset = "0x2A75720", VA = "0x182A77120")]
	public static bool2x2 operator ==(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001126")]
	[Address(RVA = "0x2A77190", Offset = "0x2A75790", VA = "0x182A77190")]
	public static bool2x2 operator ==(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001127")]
	[Address(RVA = "0x2A77400", Offset = "0x2A75A00", VA = "0x182A77400")]
	public static bool2x2 operator !=(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001128")]
	[Address(RVA = "0x2A774E0", Offset = "0x2A75AE0", VA = "0x182A774E0")]
	public static bool2x2 operator !=(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001129")]
	[Address(RVA = "0x2A77480", Offset = "0x2A75A80", VA = "0x182A77480")]
	public static bool2x2 operator !=(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600112B")]
	[Address(RVA = "0x25B49C0", Offset = "0x25B2FC0", VA = "0x1825B49C0", Slot = "4")]
	public bool Equals(float2x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600112C")]
	[Address(RVA = "0x2A76620", Offset = "0x2A74C20", VA = "0x182A76620", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600112D")]
	[Address(RVA = "0x2A766D0", Offset = "0x2A74CD0", VA = "0x182A766D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600112E")]
	[Address(RVA = "0x2A76A90", Offset = "0x2A75090", VA = "0x182A76A90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600112F")]
	[Address(RVA = "0x2A768A0", Offset = "0x2A74EA0", VA = "0x182A768A0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001130")]
	[Address(RVA = "0x2A76720", Offset = "0x2A74D20", VA = "0x182A76720")]
	public static float2x2 Rotate(float angle)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001131")]
	[Address(RVA = "0x2A76830", Offset = "0x2A74E30", VA = "0x182A76830")]
	public static float2x2 Scale(float s)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001132")]
	[Address(RVA = "0x2A76800", Offset = "0x2A74E00", VA = "0x182A76800")]
	public static float2x2 Scale(float x, float y)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001133")]
	[Address(RVA = "0x2A76860", Offset = "0x2A74E60", VA = "0x182A76860")]
	public static float2x2 Scale(float2 v)
	{
		return default(float2x2);
	}
}
