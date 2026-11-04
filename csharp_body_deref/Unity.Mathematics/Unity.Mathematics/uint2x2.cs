// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.uint2x2
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
[Token(Token = "0x2000054")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint2x2 : IEquatable<uint2x2>, IFormattable
{
	[Token(Token = "0x400013F")]
	[FieldOffset(Offset = "0x0")]
	public uint2 c0;

	[Token(Token = "0x4000140")]
	[FieldOffset(Offset = "0x8")]
	public uint2 c1;

	[Token(Token = "0x4000141")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint2x2 identity;

	[Token(Token = "0x4000142")]
	[FieldOffset(Offset = "0x10")]
	public static readonly uint2x2 zero;

	[Token(Token = "0x170009BA")]
	public unsafe ref uint2 this[int index]
	{
		[Token(Token = "0x6001F9E")]
		[Address(RVA = "0x841B10", Offset = "0x840110", VA = "0x180841B10")]
		get
		{
			return ref *(uint2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F59")]
	[Address(RVA = "0xB546F0", Offset = "0xB52CF0", VA = "0x180B546F0")]
	public uint2x2(uint2 c0, uint2 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F5A")]
	[Address(RVA = "0x2A9A820", Offset = "0x2A98E20", VA = "0x182A9A820")]
	public uint2x2(uint m00, uint m01, uint m10, uint m11)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F5B")]
	[Address(RVA = "0x2A9A6D0", Offset = "0x2A98CD0", VA = "0x182A9A6D0")]
	public uint2x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F5C")]
	[Address(RVA = "0x2A9A7C0", Offset = "0x2A98DC0", VA = "0x182A9A7C0")]
	public uint2x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F5D")]
	[Address(RVA = "0x2A9A700", Offset = "0x2A98D00", VA = "0x182A9A700")]
	public uint2x2(bool2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F5E")]
	[Address(RVA = "0x2A9A6D0", Offset = "0x2A98CD0", VA = "0x182A9A6D0")]
	public uint2x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F5F")]
	[Address(RVA = "0x2A9A850", Offset = "0x2A98E50", VA = "0x182A9A850")]
	public uint2x2(int2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F60")]
	[Address(RVA = "0x29CD9D0", Offset = "0x29CBFD0", VA = "0x1829CD9D0")]
	public uint2x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F61")]
	[Address(RVA = "0x2AB6AE0", Offset = "0x2AB50E0", VA = "0x182AB6AE0")]
	public uint2x2(float2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F62")]
	[Address(RVA = "0x29CDA40", Offset = "0x29CC040", VA = "0x1829CDA40")]
	public uint2x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F63")]
	[Address(RVA = "0x2AB6B70", Offset = "0x2AB5170", VA = "0x182AB6B70")]
	public uint2x2(double2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F64")]
	[Address(RVA = "0x29EA330", Offset = "0x29E8930", VA = "0x1829EA330")]
	public static implicit operator uint2x2(uint v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F65")]
	[Address(RVA = "0x29EA4B0", Offset = "0x29E8AB0", VA = "0x1829EA4B0")]
	public static explicit operator uint2x2(bool v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F66")]
	[Address(RVA = "0x29EA290", Offset = "0x29E8890", VA = "0x1829EA290")]
	public static explicit operator uint2x2(bool2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F67")]
	[Address(RVA = "0x29EA330", Offset = "0x29E8930", VA = "0x1829EA330")]
	public static explicit operator uint2x2(int v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F68")]
	[Address(RVA = "0x29EA420", Offset = "0x29E8A20", VA = "0x1829EA420")]
	public static explicit operator uint2x2(int2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F69")]
	[Address(RVA = "0x2A0E340", Offset = "0x2A0C940", VA = "0x182A0E340")]
	public static explicit operator uint2x2(float v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F6A")]
	[Address(RVA = "0x2A0E4B0", Offset = "0x2A0CAB0", VA = "0x182A0E4B0")]
	public static explicit operator uint2x2(float2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F6B")]
	[Address(RVA = "0x2A0E3B0", Offset = "0x2A0C9B0", VA = "0x182A0E3B0")]
	public static explicit operator uint2x2(double v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F6C")]
	[Address(RVA = "0x2A0E420", Offset = "0x2A0CA20", VA = "0x182A0E420")]
	public static explicit operator uint2x2(double2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F6D")]
	[Address(RVA = "0x2A9B5C0", Offset = "0x2A99BC0", VA = "0x182A9B5C0")]
	public static uint2x2 operator *(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F6E")]
	[Address(RVA = "0x2A9B670", Offset = "0x2A99C70", VA = "0x182A9B670")]
	public static uint2x2 operator *(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F6F")]
	[Address(RVA = "0x2A9B620", Offset = "0x2A99C20", VA = "0x182A9B620")]
	public static uint2x2 operator *(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F70")]
	[Address(RVA = "0x2A9A8E0", Offset = "0x2A98EE0", VA = "0x182A9A8E0")]
	public static uint2x2 operator +(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F71")]
	[Address(RVA = "0x2A9A940", Offset = "0x2A98F40", VA = "0x182A9A940")]
	public static uint2x2 operator +(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F72")]
	[Address(RVA = "0x2A9A890", Offset = "0x2A98E90", VA = "0x182A9A890")]
	public static uint2x2 operator +(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F73")]
	[Address(RVA = "0x2A9B7B0", Offset = "0x2A99DB0", VA = "0x182A9B7B0")]
	public static uint2x2 operator -(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F74")]
	[Address(RVA = "0x2A9B810", Offset = "0x2A99E10", VA = "0x182A9B810")]
	public static uint2x2 operator -(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F75")]
	[Address(RVA = "0x2A9B760", Offset = "0x2A99D60", VA = "0x182A9B760")]
	public static uint2x2 operator -(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F76")]
	[Address(RVA = "0x2AB6C00", Offset = "0x2AB5200", VA = "0x182AB6C00")]
	public static uint2x2 operator /(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F77")]
	[Address(RVA = "0x2AB6C80", Offset = "0x2AB5280", VA = "0x182AB6C80")]
	public static uint2x2 operator /(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F78")]
	[Address(RVA = "0x2AB6CE0", Offset = "0x2AB52E0", VA = "0x182AB6CE0")]
	public static uint2x2 operator /(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F79")]
	[Address(RVA = "0x2AB71A0", Offset = "0x2AB57A0", VA = "0x182AB71A0")]
	public static uint2x2 operator %(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F7A")]
	[Address(RVA = "0x2AB7140", Offset = "0x2AB5740", VA = "0x182AB7140")]
	public static uint2x2 operator %(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F7B")]
	[Address(RVA = "0x2AB7220", Offset = "0x2AB5820", VA = "0x182AB7220")]
	public static uint2x2 operator %(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F7C")]
	[Address(RVA = "0x2A9B0F0", Offset = "0x2A996F0", VA = "0x182A9B0F0")]
	public static uint2x2 operator ++(uint2x2 val)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F7D")]
	[Address(RVA = "0x2A9AB70", Offset = "0x2A99170", VA = "0x182A9AB70")]
	public static uint2x2 operator --(uint2x2 val)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F7E")]
	[Address(RVA = "0x2AB7090", Offset = "0x2AB5690", VA = "0x182AB7090")]
	public static bool2x2 operator <(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F7F")]
	[Address(RVA = "0x2AB70F0", Offset = "0x2AB56F0", VA = "0x182AB70F0")]
	public static bool2x2 operator <(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F80")]
	[Address(RVA = "0x2AB7040", Offset = "0x2AB5640", VA = "0x182AB7040")]
	public static bool2x2 operator <(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F81")]
	[Address(RVA = "0x2AB6FE0", Offset = "0x2AB55E0", VA = "0x182AB6FE0")]
	public static bool2x2 operator <=(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F82")]
	[Address(RVA = "0x2AB6F90", Offset = "0x2AB5590", VA = "0x182AB6F90")]
	public static bool2x2 operator <=(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F83")]
	[Address(RVA = "0x2AB6F40", Offset = "0x2AB5540", VA = "0x182AB6F40")]
	public static bool2x2 operator <=(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F84")]
	[Address(RVA = "0x2AB6EE0", Offset = "0x2AB54E0", VA = "0x182AB6EE0")]
	public static bool2x2 operator >(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F85")]
	[Address(RVA = "0x2AB6E90", Offset = "0x2AB5490", VA = "0x182AB6E90")]
	public static bool2x2 operator >(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F86")]
	[Address(RVA = "0x2AB6E40", Offset = "0x2AB5440", VA = "0x182AB6E40")]
	public static bool2x2 operator >(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F87")]
	[Address(RVA = "0x2AB6D40", Offset = "0x2AB5340", VA = "0x182AB6D40")]
	public static bool2x2 operator >=(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F88")]
	[Address(RVA = "0x2AB6DA0", Offset = "0x2AB53A0", VA = "0x182AB6DA0")]
	public static bool2x2 operator >=(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F89")]
	[Address(RVA = "0x2AB6DF0", Offset = "0x2AB53F0", VA = "0x182AB6DF0")]
	public static bool2x2 operator >=(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F8A")]
	[Address(RVA = "0x2A9B860", Offset = "0x2A99E60", VA = "0x182A9B860")]
	public static uint2x2 operator -(uint2x2 val)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F8B")]
	[Address(RVA = "0x2A9B8B0", Offset = "0x2A99EB0", VA = "0x182A9B8B0")]
	public static uint2x2 operator +(uint2x2 val)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F8C")]
	[Address(RVA = "0x2A9B240", Offset = "0x2A99840", VA = "0x182A9B240")]
	public static uint2x2 operator <<(uint2x2 x, int n)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F8D")]
	[Address(RVA = "0x2AB7280", Offset = "0x2AB5880", VA = "0x182AB7280")]
	public static uint2x2 operator >>(uint2x2 x, int n)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F8E")]
	[Address(RVA = "0x2A9AD40", Offset = "0x2A99340", VA = "0x182A9AD40")]
	public static bool2x2 operator ==(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F8F")]
	[Address(RVA = "0x2A9ADA0", Offset = "0x2A993A0", VA = "0x182A9ADA0")]
	public static bool2x2 operator ==(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F90")]
	[Address(RVA = "0x2A9ACF0", Offset = "0x2A992F0", VA = "0x182A9ACF0")]
	public static bool2x2 operator ==(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F91")]
	[Address(RVA = "0x2A9B140", Offset = "0x2A99740", VA = "0x182A9B140")]
	public static bool2x2 operator !=(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F92")]
	[Address(RVA = "0x2A9B1F0", Offset = "0x2A997F0", VA = "0x182A9B1F0")]
	public static bool2x2 operator !=(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F93")]
	[Address(RVA = "0x2A9B1A0", Offset = "0x2A997A0", VA = "0x182A9B1A0")]
	public static bool2x2 operator !=(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F94")]
	[Address(RVA = "0x2A9B6C0", Offset = "0x2A99CC0", VA = "0x182A9B6C0")]
	public static uint2x2 operator ~(uint2x2 val)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F95")]
	[Address(RVA = "0x2A9AA30", Offset = "0x2A99030", VA = "0x182A9AA30")]
	public static uint2x2 operator &(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F96")]
	[Address(RVA = "0x2A9A9E0", Offset = "0x2A98FE0", VA = "0x182A9A9E0")]
	public static uint2x2 operator &(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F97")]
	[Address(RVA = "0x2A9A990", Offset = "0x2A98F90", VA = "0x182A9A990")]
	public static uint2x2 operator &(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F98")]
	[Address(RVA = "0x2A9AA80", Offset = "0x2A99080", VA = "0x182A9AA80")]
	public static uint2x2 operator |(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F99")]
	[Address(RVA = "0x2A9AB20", Offset = "0x2A99120", VA = "0x182A9AB20")]
	public static uint2x2 operator |(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F9A")]
	[Address(RVA = "0x2A9AAD0", Offset = "0x2A990D0", VA = "0x182A9AAD0")]
	public static uint2x2 operator |(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F9B")]
	[Address(RVA = "0x2A9AE40", Offset = "0x2A99440", VA = "0x182A9AE40")]
	public static uint2x2 operator ^(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F9C")]
	[Address(RVA = "0x2A9ADF0", Offset = "0x2A993F0", VA = "0x182A9ADF0")]
	public static uint2x2 operator ^(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F9D")]
	[Address(RVA = "0x2A9AEA0", Offset = "0x2A994A0", VA = "0x182A9AEA0")]
	public static uint2x2 operator ^(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F9F")]
	[Address(RVA = "0x2A9A0F0", Offset = "0x2A986F0", VA = "0x182A9A0F0", Slot = "4")]
	public bool Equals(uint2x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FA0")]
	[Address(RVA = "0x2AB6590", Offset = "0x2AB4B90", VA = "0x182AB6590", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA1")]
	[Address(RVA = "0x2AB6640", Offset = "0x2AB4C40", VA = "0x182AB6640", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA2")]
	[Address(RVA = "0x2AB6880", Offset = "0x2AB4E80", VA = "0x182AB6880", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA3")]
	[Address(RVA = "0x2AB6690", Offset = "0x2AB4C90", VA = "0x182AB6690", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
