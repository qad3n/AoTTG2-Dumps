// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.uint4x2
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
[Token(Token = "0x200005E")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint4x2 : IEquatable<uint4x2>, IFormattable
{
	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x0")]
	public uint4 c0;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x10")]
	public uint4 c1;

	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint4x2 zero;

	[Token(Token = "0x17000B87")]
	public unsafe ref uint4 this[int index]
	{
		[Token(Token = "0x6002411")]
		[Address(RVA = "0x841B00", Offset = "0x840100", VA = "0x180841B00")]
		get
		{
			return ref *(uint4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023CC")]
	[Address(RVA = "0x547570", Offset = "0x545B70", VA = "0x180547570")]
	public uint4x2(uint4 c0, uint4 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023CD")]
	[Address(RVA = "0x2A3B260", Offset = "0x2A39860", VA = "0x182A3B260")]
	public uint4x2(uint m00, uint m01, uint m10, uint m11, uint m20, uint m21, uint m30, uint m31)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023CE")]
	[Address(RVA = "0x2A3B1C0", Offset = "0x2A397C0", VA = "0x182A3B1C0")]
	public uint4x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023CF")]
	[Address(RVA = "0x2A3B1E0", Offset = "0x2A397E0", VA = "0x182A3B1E0")]
	public uint4x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D0")]
	[Address(RVA = "0x2A3B290", Offset = "0x2A39890", VA = "0x182A3B290")]
	public uint4x2(bool4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D1")]
	[Address(RVA = "0x2A3B1C0", Offset = "0x2A397C0", VA = "0x182A3B1C0")]
	public uint4x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D2")]
	[Address(RVA = "0x2A3B220", Offset = "0x2A39820", VA = "0x182A3B220")]
	public uint4x2(int4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D3")]
	[Address(RVA = "0x29CEB40", Offset = "0x29CD140", VA = "0x1829CEB40")]
	public uint4x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D4")]
	[Address(RVA = "0x29CEBE0", Offset = "0x29CD1E0", VA = "0x1829CEBE0")]
	public uint4x2(float4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D5")]
	[Address(RVA = "0x29CEAA0", Offset = "0x29CD0A0", VA = "0x1829CEAA0")]
	public uint4x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D6")]
	[Address(RVA = "0x29CE9B0", Offset = "0x29CCFB0", VA = "0x1829CE9B0")]
	public uint4x2(double4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D7")]
	[Address(RVA = "0x29EBB30", Offset = "0x29EA130", VA = "0x1829EBB30")]
	public static implicit operator uint4x2(uint v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D8")]
	[Address(RVA = "0x29EBBD0", Offset = "0x29EA1D0", VA = "0x1829EBBD0")]
	public static explicit operator uint4x2(bool v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D9")]
	[Address(RVA = "0x29EBC90", Offset = "0x29EA290", VA = "0x1829EBC90")]
	public static explicit operator uint4x2(bool4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023DA")]
	[Address(RVA = "0x29EBB30", Offset = "0x29EA130", VA = "0x1829EBB30")]
	public static explicit operator uint4x2(int v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023DB")]
	[Address(RVA = "0x29EBB50", Offset = "0x29EA150", VA = "0x1829EBB50")]
	public static explicit operator uint4x2(int4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023DC")]
	[Address(RVA = "0x2A3BAD0", Offset = "0x2A3A0D0", VA = "0x182A3BAD0")]
	public static explicit operator uint4x2(float v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023DD")]
	[Address(RVA = "0x2A3BA10", Offset = "0x2A3A010", VA = "0x182A3BA10")]
	public static explicit operator uint4x2(float4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023DE")]
	[Address(RVA = "0x2A3BAA0", Offset = "0x2A3A0A0", VA = "0x182A3BAA0")]
	public static explicit operator uint4x2(double v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023DF")]
	[Address(RVA = "0x2A3BA50", Offset = "0x2A3A050", VA = "0x182A3BA50")]
	public static explicit operator uint4x2(double4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E0")]
	[Address(RVA = "0x2A3C420", Offset = "0x2A3AA20", VA = "0x182A3C420")]
	public static uint4x2 operator *(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E1")]
	[Address(RVA = "0x2A3C340", Offset = "0x2A3A940", VA = "0x182A3C340")]
	public static uint4x2 operator *(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E2")]
	[Address(RVA = "0x2A3C3B0", Offset = "0x2A3A9B0", VA = "0x182A3C3B0")]
	public static uint4x2 operator *(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E3")]
	[Address(RVA = "0x2A3B310", Offset = "0x2A39910", VA = "0x182A3B310")]
	public static uint4x2 operator +(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E4")]
	[Address(RVA = "0x2A3B400", Offset = "0x2A39A00", VA = "0x182A3B400")]
	public static uint4x2 operator +(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E5")]
	[Address(RVA = "0x2A3B380", Offset = "0x2A39980", VA = "0x182A3B380")]
	public static uint4x2 operator +(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E6")]
	[Address(RVA = "0x2A3C620", Offset = "0x2A3AC20", VA = "0x182A3C620")]
	public static uint4x2 operator -(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E7")]
	[Address(RVA = "0x2A3C540", Offset = "0x2A3AB40", VA = "0x182A3C540")]
	public static uint4x2 operator -(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E8")]
	[Address(RVA = "0x2A3C5B0", Offset = "0x2A3ABB0", VA = "0x182A3C5B0")]
	public static uint4x2 operator -(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E9")]
	[Address(RVA = "0x2A3B7A0", Offset = "0x2A39DA0", VA = "0x182A3B7A0")]
	public static uint4x2 operator /(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023EA")]
	[Address(RVA = "0x2A3B6A0", Offset = "0x2A39CA0", VA = "0x182A3B6A0")]
	public static uint4x2 operator /(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023EB")]
	[Address(RVA = "0x2A3B720", Offset = "0x2A39D20", VA = "0x182A3B720")]
	public static uint4x2 operator /(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023EC")]
	[Address(RVA = "0x2A3C240", Offset = "0x2A3A840", VA = "0x182A3C240")]
	public static uint4x2 operator %(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023ED")]
	[Address(RVA = "0x2A3C1C0", Offset = "0x2A3A7C0", VA = "0x182A3C1C0")]
	public static uint4x2 operator %(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023EE")]
	[Address(RVA = "0x2A3C2C0", Offset = "0x2A3A8C0", VA = "0x182A3C2C0")]
	public static uint4x2 operator %(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023EF")]
	[Address(RVA = "0x2A3BD60", Offset = "0x2A3A360", VA = "0x182A3BD60")]
	public static uint4x2 operator ++(uint4x2 val)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F0")]
	[Address(RVA = "0x2A3B620", Offset = "0x2A39C20", VA = "0x182A3B620")]
	public static uint4x2 operator --(uint4x2 val)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F1")]
	[Address(RVA = "0x2A3C0F0", Offset = "0x2A3A6F0", VA = "0x182A3C0F0")]
	public static bool4x2 operator <(uint4x2 lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F2")]
	[Address(RVA = "0x2A3C160", Offset = "0x2A3A760", VA = "0x182A3C160")]
	public static bool4x2 operator <(uint4x2 lhs, uint rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F3")]
	[Address(RVA = "0x2A3C090", Offset = "0x2A3A690", VA = "0x182A3C090")]
	public static bool4x2 operator <(uint lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F4")]
	[Address(RVA = "0x2A3C020", Offset = "0x2A3A620", VA = "0x182A3C020")]
	public static bool4x2 operator <=(uint4x2 lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F5")]
	[Address(RVA = "0x2A3BFC0", Offset = "0x2A3A5C0", VA = "0x182A3BFC0")]
	public static bool4x2 operator <=(uint4x2 lhs, uint rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F6")]
	[Address(RVA = "0x2A3BF60", Offset = "0x2A3A560", VA = "0x182A3BF60")]
	public static bool4x2 operator <=(uint lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F7")]
	[Address(RVA = "0x2A3BC90", Offset = "0x2A3A290", VA = "0x182A3BC90")]
	public static bool4x2 operator >(uint4x2 lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F8")]
	[Address(RVA = "0x2A3BD00", Offset = "0x2A3A300", VA = "0x182A3BD00")]
	public static bool4x2 operator >(uint4x2 lhs, uint rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F9")]
	[Address(RVA = "0x2A3BC30", Offset = "0x2A3A230", VA = "0x182A3BC30")]
	public static bool4x2 operator >(uint lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023FA")]
	[Address(RVA = "0x2A3BB00", Offset = "0x2A3A100", VA = "0x182A3BB00")]
	public static bool4x2 operator >=(uint4x2 lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023FB")]
	[Address(RVA = "0x2A3BB70", Offset = "0x2A3A170", VA = "0x182A3BB70")]
	public static bool4x2 operator >=(uint4x2 lhs, uint rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023FC")]
	[Address(RVA = "0x2A3BBD0", Offset = "0x2A3A1D0", VA = "0x182A3BBD0")]
	public static bool4x2 operator >=(uint lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023FD")]
	[Address(RVA = "0x2A3C690", Offset = "0x2A3AC90", VA = "0x182A3C690")]
	public static uint4x2 operator -(uint4x2 val)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023FE")]
	[Address(RVA = "0x2A3C6D0", Offset = "0x2A3ACD0", VA = "0x182A3C6D0")]
	public static uint4x2 operator +(uint4x2 val)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023FF")]
	[Address(RVA = "0x2A3BF10", Offset = "0x2A3A510", VA = "0x182A3BF10")]
	public static uint4x2 operator <<(uint4x2 x, int n)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002400")]
	[Address(RVA = "0x2A3C4D0", Offset = "0x2A3AAD0", VA = "0x182A3C4D0")]
	public static uint4x2 operator >>(uint4x2 x, int n)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002401")]
	[Address(RVA = "0x2A3B8E0", Offset = "0x2A39EE0", VA = "0x182A3B8E0")]
	public static bool4x2 operator ==(uint4x2 lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002402")]
	[Address(RVA = "0x2A3B880", Offset = "0x2A39E80", VA = "0x182A3B880")]
	public static bool4x2 operator ==(uint4x2 lhs, uint rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002403")]
	[Address(RVA = "0x2A3B820", Offset = "0x2A39E20", VA = "0x182A3B820")]
	public static bool4x2 operator ==(uint lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002404")]
	[Address(RVA = "0x2A3BE40", Offset = "0x2A3A440", VA = "0x182A3BE40")]
	public static bool4x2 operator !=(uint4x2 lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002405")]
	[Address(RVA = "0x2A3BEB0", Offset = "0x2A3A4B0", VA = "0x182A3BEB0")]
	public static bool4x2 operator !=(uint4x2 lhs, uint rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002406")]
	[Address(RVA = "0x2A3BDE0", Offset = "0x2A3A3E0", VA = "0x182A3BDE0")]
	public static bool4x2 operator !=(uint lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002407")]
	[Address(RVA = "0x2A3C490", Offset = "0x2A3AA90", VA = "0x182A3C490")]
	public static uint4x2 operator ~(uint4x2 val)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002408")]
	[Address(RVA = "0x2A3B520", Offset = "0x2A39B20", VA = "0x182A3B520")]
	public static uint4x2 operator &(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002409")]
	[Address(RVA = "0x2A3B480", Offset = "0x2A39A80", VA = "0x182A3B480")]
	public static uint4x2 operator &(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600240A")]
	[Address(RVA = "0x2A3B4D0", Offset = "0x2A39AD0", VA = "0x182A3B4D0")]
	public static uint4x2 operator &(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600240B")]
	[Address(RVA = "0x2A3B5A0", Offset = "0x2A39BA0", VA = "0x182A3B5A0")]
	public static uint4x2 operator |(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600240C")]
	[Address(RVA = "0x2A3B5E0", Offset = "0x2A39BE0", VA = "0x182A3B5E0")]
	public static uint4x2 operator |(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600240D")]
	[Address(RVA = "0x2A3B560", Offset = "0x2A39B60", VA = "0x182A3B560")]
	public static uint4x2 operator |(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600240E")]
	[Address(RVA = "0x2A3B950", Offset = "0x2A39F50", VA = "0x182A3B950")]
	public static uint4x2 operator ^(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600240F")]
	[Address(RVA = "0x2A3B9D0", Offset = "0x2A39FD0", VA = "0x182A3B9D0")]
	public static uint4x2 operator ^(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002410")]
	[Address(RVA = "0x2A3B990", Offset = "0x2A39F90", VA = "0x182A3B990")]
	public static uint4x2 operator ^(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002412")]
	[Address(RVA = "0x2A3A9E0", Offset = "0x2A38FE0", VA = "0x182A3A9E0", Slot = "4")]
	public bool Equals(uint4x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002413")]
	[Address(RVA = "0x2A3A8F0", Offset = "0x2A38EF0", VA = "0x182A3A8F0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002414")]
	[Address(RVA = "0x2A3AA40", Offset = "0x2A39040", VA = "0x182A3AA40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002415")]
	[Address(RVA = "0x2A3AAD0", Offset = "0x2A390D0", VA = "0x182A3AAD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002416")]
	[Address(RVA = "0x2A3AE60", Offset = "0x2A39460", VA = "0x182A3AE60", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
