// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.int3x4
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
[Token(Token = "0x2000048")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int3x4 : IEquatable<int3x4>, IFormattable
{
	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x0")]
	public int3 c0;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0xC")]
	public int3 c1;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x18")]
	public int3 c2;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x24")]
	public int3 c3;

	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int3x4 zero;

	[Token(Token = "0x17000848")]
	public unsafe ref int3 this[int index]
	{
		[Token(Token = "0x6001B9A")]
		[Address(RVA = "0x841BD0", Offset = "0x8401D0", VA = "0x180841BD0")]
		get
		{
			return ref *(int3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B55")]
	[Address(RVA = "0x2A31E20", Offset = "0x2A30420", VA = "0x182A31E20")]
	public int3x4(int3 c0, int3 c1, int3 c2, int3 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B56")]
	[Address(RVA = "0x2A31CC0", Offset = "0x2A302C0", VA = "0x182A31CC0")]
	public int3x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13, int m20, int m21, int m22, int m23)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B57")]
	[Address(RVA = "0x2A31C90", Offset = "0x2A30290", VA = "0x182A31C90")]
	public int3x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B58")]
	[Address(RVA = "0x2A31C30", Offset = "0x2A30230", VA = "0x182A31C30")]
	public int3x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B59")]
	[Address(RVA = "0x2A31D90", Offset = "0x2A30390", VA = "0x182A31D90")]
	public int3x4(bool3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B5A")]
	[Address(RVA = "0x2A31C90", Offset = "0x2A30290", VA = "0x182A31C90")]
	public int3x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B5B")]
	[Address(RVA = "0x2A31D10", Offset = "0x2A30310", VA = "0x182A31D10")]
	public int3x4(uint3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B5C")]
	[Address(RVA = "0x2AA4E10", Offset = "0x2AA3410", VA = "0x182AA4E10")]
	public int3x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B5D")]
	[Address(RVA = "0x2AA4DB0", Offset = "0x2AA33B0", VA = "0x182AA4DB0")]
	public int3x4(float3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B5E")]
	[Address(RVA = "0x2AA4E70", Offset = "0x2AA3470", VA = "0x182AA4E70")]
	public int3x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B5F")]
	[Address(RVA = "0x2AA4ED0", Offset = "0x2AA34D0", VA = "0x182AA4ED0")]
	public int3x4(double3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B60")]
	[Address(RVA = "0x29EB680", Offset = "0x29E9C80", VA = "0x1829EB680")]
	public static implicit operator int3x4(int v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B61")]
	[Address(RVA = "0x29EB4A0", Offset = "0x29E9AA0", VA = "0x1829EB4A0")]
	public static explicit operator int3x4(bool v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B62")]
	[Address(RVA = "0x29EB590", Offset = "0x29E9B90", VA = "0x1829EB590")]
	public static explicit operator int3x4(bool3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B63")]
	[Address(RVA = "0x29EB680", Offset = "0x29E9C80", VA = "0x1829EB680")]
	public static explicit operator int3x4(uint v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B64")]
	[Address(RVA = "0x29EB860", Offset = "0x29E9E60", VA = "0x1829EB860")]
	public static explicit operator int3x4(uint3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B65")]
	[Address(RVA = "0x29EB7B0", Offset = "0x29E9DB0", VA = "0x1829EB7B0")]
	public static explicit operator int3x4(float v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B66")]
	[Address(RVA = "0x29EB6B0", Offset = "0x29E9CB0", VA = "0x1829EB6B0")]
	public static explicit operator int3x4(float3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B67")]
	[Address(RVA = "0x29EB750", Offset = "0x29E9D50", VA = "0x1829EB750")]
	public static explicit operator int3x4(double v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B68")]
	[Address(RVA = "0x29EB500", Offset = "0x29E9B00", VA = "0x1829EB500")]
	public static explicit operator int3x4(double3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B69")]
	[Address(RVA = "0x2A33C40", Offset = "0x2A32240", VA = "0x182A33C40")]
	public static int3x4 operator *(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B6A")]
	[Address(RVA = "0x2A33D10", Offset = "0x2A32310", VA = "0x182A33D10")]
	public static int3x4 operator *(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B6B")]
	[Address(RVA = "0x2A33B80", Offset = "0x2A32180", VA = "0x182A33B80")]
	public static int3x4 operator *(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B6C")]
	[Address(RVA = "0x2AA4FE0", Offset = "0x2AA35E0", VA = "0x182AA4FE0")]
	public static int3x4 operator +(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B6D")]
	[Address(RVA = "0x2AA4F30", Offset = "0x2AA3530", VA = "0x182AA4F30")]
	public static int3x4 operator +(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B6E")]
	[Address(RVA = "0x2AA5080", Offset = "0x2AA3680", VA = "0x182AA5080")]
	public static int3x4 operator +(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B6F")]
	[Address(RVA = "0x2AA60D0", Offset = "0x2AA46D0", VA = "0x182AA60D0")]
	public static int3x4 operator -(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B70")]
	[Address(RVA = "0x2AA6030", Offset = "0x2AA4630", VA = "0x182AA6030")]
	public static int3x4 operator -(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B71")]
	[Address(RVA = "0x2AA5F90", Offset = "0x2AA4590", VA = "0x182AA5F90")]
	public static int3x4 operator -(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B72")]
	[Address(RVA = "0x2AA5130", Offset = "0x2AA3730", VA = "0x182AA5130")]
	public static int3x4 operator /(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B73")]
	[Address(RVA = "0x2AA5210", Offset = "0x2AA3810", VA = "0x182AA5210")]
	public static int3x4 operator /(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B74")]
	[Address(RVA = "0x2AA52E0", Offset = "0x2AA38E0", VA = "0x182AA52E0")]
	public static int3x4 operator /(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B75")]
	[Address(RVA = "0x2AA5D40", Offset = "0x2AA4340", VA = "0x182AA5D40")]
	public static int3x4 operator %(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B76")]
	[Address(RVA = "0x2AA5C70", Offset = "0x2AA4270", VA = "0x182AA5C70")]
	public static int3x4 operator %(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B77")]
	[Address(RVA = "0x2AA5E20", Offset = "0x2AA4420", VA = "0x182AA5E20")]
	public static int3x4 operator %(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B78")]
	[Address(RVA = "0x2A330D0", Offset = "0x2A316D0", VA = "0x182A330D0")]
	public static int3x4 operator ++(int3x4 val)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B79")]
	[Address(RVA = "0x2A32490", Offset = "0x2A30A90", VA = "0x182A32490")]
	public static int3x4 operator --(int3x4 val)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B7A")]
	[Address(RVA = "0x2AA5AF0", Offset = "0x2AA40F0", VA = "0x182AA5AF0")]
	public static bool3x4 operator <(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B7B")]
	[Address(RVA = "0x2AA5BC0", Offset = "0x2AA41C0", VA = "0x182AA5BC0")]
	public static bool3x4 operator <(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B7C")]
	[Address(RVA = "0x2AA5A40", Offset = "0x2AA4040", VA = "0x182AA5A40")]
	public static bool3x4 operator <(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B7D")]
	[Address(RVA = "0x2AA5970", Offset = "0x2AA3F70", VA = "0x182AA5970")]
	public static bool3x4 operator <=(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B7E")]
	[Address(RVA = "0x2AA58C0", Offset = "0x2AA3EC0", VA = "0x182AA58C0")]
	public static bool3x4 operator <=(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B7F")]
	[Address(RVA = "0x2AA5810", Offset = "0x2AA3E10", VA = "0x182AA5810")]
	public static bool3x4 operator <=(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B80")]
	[Address(RVA = "0x2AA5740", Offset = "0x2AA3D40", VA = "0x182AA5740")]
	public static bool3x4 operator >(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B81")]
	[Address(RVA = "0x2AA55E0", Offset = "0x2AA3BE0", VA = "0x182AA55E0")]
	public static bool3x4 operator >(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B82")]
	[Address(RVA = "0x2AA5690", Offset = "0x2AA3C90", VA = "0x182AA5690")]
	public static bool3x4 operator >(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B83")]
	[Address(RVA = "0x2AA5460", Offset = "0x2AA3A60", VA = "0x182AA5460")]
	public static bool3x4 operator >=(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B84")]
	[Address(RVA = "0x2AA53B0", Offset = "0x2AA39B0", VA = "0x182AA53B0")]
	public static bool3x4 operator >=(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B85")]
	[Address(RVA = "0x2AA5530", Offset = "0x2AA3B30", VA = "0x182AA5530")]
	public static bool3x4 operator >=(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B86")]
	[Address(RVA = "0x2A34160", Offset = "0x2A32760", VA = "0x182A34160")]
	public static int3x4 operator -(int3x4 val)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B87")]
	[Address(RVA = "0x2A341F0", Offset = "0x2A327F0", VA = "0x182A341F0")]
	public static int3x4 operator +(int3x4 val)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B88")]
	[Address(RVA = "0x2A333E0", Offset = "0x2A319E0", VA = "0x182A333E0")]
	public static int3x4 operator <<(int3x4 x, int n)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B89")]
	[Address(RVA = "0x2AA5EF0", Offset = "0x2AA44F0", VA = "0x182AA5EF0")]
	public static int3x4 operator >>(int3x4 x, int n)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B8A")]
	[Address(RVA = "0x2A328C0", Offset = "0x2A30EC0", VA = "0x182A328C0")]
	public static bool3x4 operator ==(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B8B")]
	[Address(RVA = "0x2A32810", Offset = "0x2A30E10", VA = "0x182A32810")]
	public static bool3x4 operator ==(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B8C")]
	[Address(RVA = "0x2A32990", Offset = "0x2A30F90", VA = "0x182A32990")]
	public static bool3x4 operator ==(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B8D")]
	[Address(RVA = "0x2A331B0", Offset = "0x2A317B0", VA = "0x182A331B0")]
	public static bool3x4 operator !=(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B8E")]
	[Address(RVA = "0x2A33330", Offset = "0x2A31930", VA = "0x182A33330")]
	public static bool3x4 operator !=(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B8F")]
	[Address(RVA = "0x2A33280", Offset = "0x2A31880", VA = "0x182A33280")]
	public static bool3x4 operator !=(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B90")]
	[Address(RVA = "0x2A33DD0", Offset = "0x2A323D0", VA = "0x182A33DD0")]
	public static int3x4 operator ~(int3x4 val)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B91")]
	[Address(RVA = "0x2A32230", Offset = "0x2A30830", VA = "0x182A32230")]
	public static int3x4 operator &(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B92")]
	[Address(RVA = "0x2A320F0", Offset = "0x2A306F0", VA = "0x182A320F0")]
	public static int3x4 operator &(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B93")]
	[Address(RVA = "0x2A32190", Offset = "0x2A30790", VA = "0x182A32190")]
	public static int3x4 operator &(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B94")]
	[Address(RVA = "0x2A32400", Offset = "0x2A30A00", VA = "0x182A32400")]
	public static int3x4 operator |(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B95")]
	[Address(RVA = "0x2A322C0", Offset = "0x2A308C0", VA = "0x182A322C0")]
	public static int3x4 operator |(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B96")]
	[Address(RVA = "0x2A32360", Offset = "0x2A30960", VA = "0x182A32360")]
	public static int3x4 operator |(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B97")]
	[Address(RVA = "0x2A32B80", Offset = "0x2A31180", VA = "0x182A32B80")]
	public static int3x4 operator ^(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B98")]
	[Address(RVA = "0x2A32A40", Offset = "0x2A31040", VA = "0x182A32A40")]
	public static int3x4 operator ^(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B99")]
	[Address(RVA = "0x2A32AE0", Offset = "0x2A310E0", VA = "0x182A32AE0")]
	public static int3x4 operator ^(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B9B")]
	[Address(RVA = "0x2A310C0", Offset = "0x2A2F6C0", VA = "0x182A310C0", Slot = "4")]
	public bool Equals(int3x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B9C")]
	[Address(RVA = "0x2AA41A0", Offset = "0x2AA27A0", VA = "0x182AA41A0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B9D")]
	[Address(RVA = "0x2AA42D0", Offset = "0x2AA28D0", VA = "0x182AA42D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B9E")]
	[Address(RVA = "0x2AA43D0", Offset = "0x2AA29D0", VA = "0x182AA43D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B9F")]
	[Address(RVA = "0x2AA48E0", Offset = "0x2AA2EE0", VA = "0x182AA48E0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
