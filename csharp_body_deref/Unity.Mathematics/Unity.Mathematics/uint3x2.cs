using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x200005A")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint3x2 : IEquatable<uint3x2>, IFormattable
{
	[Token(Token = "0x4000148")]
	[FieldOffset(Offset = "0x0")]
	public uint3 c0;

	[Token(Token = "0x4000149")]
	[FieldOffset(Offset = "0xC")]
	public uint3 c1;

	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint3x2 zero;

	[Token(Token = "0x17000A33")]
	public unsafe ref uint3 this[int index]
	{
		[Token(Token = "0x60020F9")]
		[Address(RVA = "0x47602A0", Offset = "0x47602A0", VA = "0x47602A0")]
		get
		{
			return ref *(uint3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020B4")]
	[Address(RVA = "0x475E950", Offset = "0x475E950", VA = "0x475E950")]
	public uint3x2(uint3 c0, uint3 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020B5")]
	[Address(RVA = "0x475E960", Offset = "0x475E960", VA = "0x475E960")]
	public uint3x2(uint m00, uint m01, uint m10, uint m11, uint m20, uint m21)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020B6")]
	[Address(RVA = "0x475E980", Offset = "0x475E980", VA = "0x475E980")]
	public uint3x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020B7")]
	[Address(RVA = "0x475E9A0", Offset = "0x475E9A0", VA = "0x475E9A0")]
	public uint3x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020B8")]
	[Address(RVA = "0x475E9C0", Offset = "0x475E9C0", VA = "0x475E9C0")]
	public uint3x2(bool3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020B9")]
	[Address(RVA = "0x475EA20", Offset = "0x475EA20", VA = "0x475EA20")]
	public uint3x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020BA")]
	[Address(RVA = "0x475EA40", Offset = "0x475EA40", VA = "0x475EA40")]
	public uint3x2(int3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020BB")]
	[Address(RVA = "0x475EA60", Offset = "0x475EA60", VA = "0x475EA60")]
	public uint3x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020BC")]
	[Address(RVA = "0x475EA90", Offset = "0x475EA90", VA = "0x475EA90")]
	public uint3x2(float3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020BD")]
	[Address(RVA = "0x475EB30", Offset = "0x475EB30", VA = "0x475EB30")]
	public uint3x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020BE")]
	[Address(RVA = "0x475EB60", Offset = "0x475EB60", VA = "0x475EB60")]
	public uint3x2(double3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020BF")]
	[Address(RVA = "0x475EC10", Offset = "0x475EC10", VA = "0x475EC10")]
	public static implicit operator uint3x2(uint v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020C0")]
	[Address(RVA = "0x475EC30", Offset = "0x475EC30", VA = "0x475EC30")]
	public static explicit operator uint3x2(bool v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020C1")]
	[Address(RVA = "0x475EC60", Offset = "0x475EC60", VA = "0x475EC60")]
	public static explicit operator uint3x2(bool3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020C2")]
	[Address(RVA = "0x475ECC0", Offset = "0x475ECC0", VA = "0x475ECC0")]
	public static explicit operator uint3x2(int v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020C3")]
	[Address(RVA = "0x475ECE0", Offset = "0x475ECE0", VA = "0x475ECE0")]
	public static explicit operator uint3x2(int3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020C4")]
	[Address(RVA = "0x475ED10", Offset = "0x475ED10", VA = "0x475ED10")]
	public static explicit operator uint3x2(float v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020C5")]
	[Address(RVA = "0x475ED40", Offset = "0x475ED40", VA = "0x475ED40")]
	public static explicit operator uint3x2(float3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020C6")]
	[Address(RVA = "0x475EDE0", Offset = "0x475EDE0", VA = "0x475EDE0")]
	public static explicit operator uint3x2(double v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020C7")]
	[Address(RVA = "0x475EE10", Offset = "0x475EE10", VA = "0x475EE10")]
	public static explicit operator uint3x2(double3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020C8")]
	[Address(RVA = "0x475EEC0", Offset = "0x475EEC0", VA = "0x475EEC0")]
	public static uint3x2 operator *(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020C9")]
	[Address(RVA = "0x475EF30", Offset = "0x475EF30", VA = "0x475EF30")]
	public static uint3x2 operator *(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020CA")]
	[Address(RVA = "0x475EF90", Offset = "0x475EF90", VA = "0x475EF90")]
	public static uint3x2 operator *(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020CB")]
	[Address(RVA = "0x475EFF0", Offset = "0x475EFF0", VA = "0x475EFF0")]
	public static uint3x2 operator +(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020CC")]
	[Address(RVA = "0x475F060", Offset = "0x475F060", VA = "0x475F060")]
	public static uint3x2 operator +(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020CD")]
	[Address(RVA = "0x475F0B0", Offset = "0x475F0B0", VA = "0x475F0B0")]
	public static uint3x2 operator +(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020CE")]
	[Address(RVA = "0x475F100", Offset = "0x475F100", VA = "0x475F100")]
	public static uint3x2 operator -(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020CF")]
	[Address(RVA = "0x475F170", Offset = "0x475F170", VA = "0x475F170")]
	public static uint3x2 operator -(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020D0")]
	[Address(RVA = "0x475F1D0", Offset = "0x475F1D0", VA = "0x475F1D0")]
	public static uint3x2 operator -(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020D1")]
	[Address(RVA = "0x475F220", Offset = "0x475F220", VA = "0x475F220")]
	public static uint3x2 operator /(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020D2")]
	[Address(RVA = "0x475F2B0", Offset = "0x475F2B0", VA = "0x475F2B0")]
	public static uint3x2 operator /(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020D3")]
	[Address(RVA = "0x475F330", Offset = "0x475F330", VA = "0x475F330")]
	public static uint3x2 operator /(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020D4")]
	[Address(RVA = "0x475F3A0", Offset = "0x475F3A0", VA = "0x475F3A0")]
	public static uint3x2 operator %(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020D5")]
	[Address(RVA = "0x475F430", Offset = "0x475F430", VA = "0x475F430")]
	public static uint3x2 operator %(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020D6")]
	[Address(RVA = "0x475F4B0", Offset = "0x475F4B0", VA = "0x475F4B0")]
	public static uint3x2 operator %(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020D7")]
	[Address(RVA = "0x475F520", Offset = "0x475F520", VA = "0x475F520")]
	public static uint3x2 operator ++(uint3x2 val)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020D8")]
	[Address(RVA = "0x475F590", Offset = "0x475F590", VA = "0x475F590")]
	public static uint3x2 operator --(uint3x2 val)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020D9")]
	[Address(RVA = "0x475F5F0", Offset = "0x475F5F0", VA = "0x475F5F0")]
	public static bool3x2 operator <(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020DA")]
	[Address(RVA = "0x475F680", Offset = "0x475F680", VA = "0x475F680")]
	public static bool3x2 operator <(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020DB")]
	[Address(RVA = "0x475F6F0", Offset = "0x475F6F0", VA = "0x475F6F0")]
	public static bool3x2 operator <(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020DC")]
	[Address(RVA = "0x475F760", Offset = "0x475F760", VA = "0x475F760")]
	public static bool3x2 operator <=(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020DD")]
	[Address(RVA = "0x475F7F0", Offset = "0x475F7F0", VA = "0x475F7F0")]
	public static bool3x2 operator <=(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020DE")]
	[Address(RVA = "0x475F860", Offset = "0x475F860", VA = "0x475F860")]
	public static bool3x2 operator <=(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020DF")]
	[Address(RVA = "0x475F8D0", Offset = "0x475F8D0", VA = "0x475F8D0")]
	public static bool3x2 operator >(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020E0")]
	[Address(RVA = "0x475F960", Offset = "0x475F960", VA = "0x475F960")]
	public static bool3x2 operator >(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020E1")]
	[Address(RVA = "0x475F9D0", Offset = "0x475F9D0", VA = "0x475F9D0")]
	public static bool3x2 operator >(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020E2")]
	[Address(RVA = "0x475FA40", Offset = "0x475FA40", VA = "0x475FA40")]
	public static bool3x2 operator >=(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020E3")]
	[Address(RVA = "0x475FAD0", Offset = "0x475FAD0", VA = "0x475FAD0")]
	public static bool3x2 operator >=(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020E4")]
	[Address(RVA = "0x475FB40", Offset = "0x475FB40", VA = "0x475FB40")]
	public static bool3x2 operator >=(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020E5")]
	[Address(RVA = "0x475FBB0", Offset = "0x475FBB0", VA = "0x475FBB0")]
	public static uint3x2 operator -(uint3x2 val)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020E6")]
	[Address(RVA = "0x475FC00", Offset = "0x475FC00", VA = "0x475FC00")]
	public static uint3x2 operator +(uint3x2 val)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020E7")]
	[Address(RVA = "0x475FC30", Offset = "0x475FC30", VA = "0x475FC30")]
	public static uint3x2 operator <<(uint3x2 x, int n)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020E8")]
	[Address(RVA = "0x475FC90", Offset = "0x475FC90", VA = "0x475FC90")]
	public static uint3x2 operator >>(uint3x2 x, int n)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020E9")]
	[Address(RVA = "0x475FCF0", Offset = "0x475FCF0", VA = "0x475FCF0")]
	public static bool3x2 operator ==(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020EA")]
	[Address(RVA = "0x475FD80", Offset = "0x475FD80", VA = "0x475FD80")]
	public static bool3x2 operator ==(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020EB")]
	[Address(RVA = "0x475FDF0", Offset = "0x475FDF0", VA = "0x475FDF0")]
	public static bool3x2 operator ==(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020EC")]
	[Address(RVA = "0x475FE60", Offset = "0x475FE60", VA = "0x475FE60")]
	public static bool3x2 operator !=(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020ED")]
	[Address(RVA = "0x475FEF0", Offset = "0x475FEF0", VA = "0x475FEF0")]
	public static bool3x2 operator !=(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020EE")]
	[Address(RVA = "0x475FF60", Offset = "0x475FF60", VA = "0x475FF60")]
	public static bool3x2 operator !=(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020EF")]
	[Address(RVA = "0x475FFD0", Offset = "0x475FFD0", VA = "0x475FFD0")]
	public static uint3x2 operator ~(uint3x2 val)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020F0")]
	[Address(RVA = "0x4760000", Offset = "0x4760000", VA = "0x4760000")]
	public static uint3x2 operator &(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020F1")]
	[Address(RVA = "0x4760040", Offset = "0x4760040", VA = "0x4760040")]
	public static uint3x2 operator &(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020F2")]
	[Address(RVA = "0x4760090", Offset = "0x4760090", VA = "0x4760090")]
	public static uint3x2 operator &(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020F3")]
	[Address(RVA = "0x47600E0", Offset = "0x47600E0", VA = "0x47600E0")]
	public static uint3x2 operator |(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020F4")]
	[Address(RVA = "0x4760120", Offset = "0x4760120", VA = "0x4760120")]
	public static uint3x2 operator |(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020F5")]
	[Address(RVA = "0x4760170", Offset = "0x4760170", VA = "0x4760170")]
	public static uint3x2 operator |(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020F6")]
	[Address(RVA = "0x47601C0", Offset = "0x47601C0", VA = "0x47601C0")]
	public static uint3x2 operator ^(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020F7")]
	[Address(RVA = "0x4760200", Offset = "0x4760200", VA = "0x4760200")]
	public static uint3x2 operator ^(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020F8")]
	[Address(RVA = "0x4760250", Offset = "0x4760250", VA = "0x4760250")]
	public static uint3x2 operator ^(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020FA")]
	[Address(RVA = "0x47602B0", Offset = "0x47602B0", VA = "0x47602B0", Slot = "4")]
	public bool Equals(uint3x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60020FB")]
	[Address(RVA = "0x47602F0", Offset = "0x47602F0", VA = "0x47602F0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020FC")]
	[Address(RVA = "0x4760380", Offset = "0x4760380", VA = "0x4760380", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020FD")]
	[Address(RVA = "0x47603F0", Offset = "0x47603F0", VA = "0x47603F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020FE")]
	[Address(RVA = "0x4760660", Offset = "0x4760660", VA = "0x4760660", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
