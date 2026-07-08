using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x200005F")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint4x2 : IEquatable<uint4x2>, IFormattable
{
	[Token(Token = "0x400015E")]
	[FieldOffset(Offset = "0x0")]
	public uint4 c0;

	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0x10")]
	public uint4 c1;

	[Token(Token = "0x4000160")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint4x2 zero;

	[Token(Token = "0x17000B87")]
	public unsafe ref uint4 this[int index]
	{
		[Token(Token = "0x60023BA")]
		[Address(RVA = "0x476EE00", Offset = "0x476EE00", VA = "0x476EE00")]
		get
		{
			return ref *(uint4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002375")]
	[Address(RVA = "0x476CCC0", Offset = "0x476CCC0", VA = "0x476CCC0")]
	public uint4x2(uint4 c0, uint4 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002376")]
	[Address(RVA = "0x476CCD0", Offset = "0x476CCD0", VA = "0x476CCD0")]
	public uint4x2(uint m00, uint m01, uint m10, uint m11, uint m20, uint m21, uint m30, uint m31)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002377")]
	[Address(RVA = "0x476CD00", Offset = "0x476CD00", VA = "0x476CD00")]
	public uint4x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002378")]
	[Address(RVA = "0x476CD20", Offset = "0x476CD20", VA = "0x476CD20")]
	public uint4x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002379")]
	[Address(RVA = "0x476CD50", Offset = "0x476CD50", VA = "0x476CD50")]
	public uint4x2(bool4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600237A")]
	[Address(RVA = "0x476CDC0", Offset = "0x476CDC0", VA = "0x476CDC0")]
	public uint4x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600237B")]
	[Address(RVA = "0x476CDE0", Offset = "0x476CDE0", VA = "0x476CDE0")]
	public uint4x2(int4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600237C")]
	[Address(RVA = "0x476CE00", Offset = "0x476CE00", VA = "0x476CE00")]
	public uint4x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600237D")]
	[Address(RVA = "0x476CE30", Offset = "0x476CE30", VA = "0x476CE30")]
	public uint4x2(float4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600237E")]
	[Address(RVA = "0x476CF10", Offset = "0x476CF10", VA = "0x476CF10")]
	public uint4x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600237F")]
	[Address(RVA = "0x476CF40", Offset = "0x476CF40", VA = "0x476CF40")]
	public uint4x2(double4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002380")]
	[Address(RVA = "0x476D030", Offset = "0x476D030", VA = "0x476D030")]
	public static implicit operator uint4x2(uint v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002381")]
	[Address(RVA = "0x476D050", Offset = "0x476D050", VA = "0x476D050")]
	public static explicit operator uint4x2(bool v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002382")]
	[Address(RVA = "0x476D080", Offset = "0x476D080", VA = "0x476D080")]
	public static explicit operator uint4x2(bool4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002383")]
	[Address(RVA = "0x476D100", Offset = "0x476D100", VA = "0x476D100")]
	public static explicit operator uint4x2(int v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002384")]
	[Address(RVA = "0x476D120", Offset = "0x476D120", VA = "0x476D120")]
	public static explicit operator uint4x2(int4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002385")]
	[Address(RVA = "0x476D140", Offset = "0x476D140", VA = "0x476D140")]
	public static explicit operator uint4x2(float v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002386")]
	[Address(RVA = "0x476D170", Offset = "0x476D170", VA = "0x476D170")]
	public static explicit operator uint4x2(float4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002387")]
	[Address(RVA = "0x476D250", Offset = "0x476D250", VA = "0x476D250")]
	public static explicit operator uint4x2(double v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002388")]
	[Address(RVA = "0x476D280", Offset = "0x476D280", VA = "0x476D280")]
	public static explicit operator uint4x2(double4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002389")]
	[Address(RVA = "0x476D370", Offset = "0x476D370", VA = "0x476D370")]
	public static uint4x2 operator *(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600238A")]
	[Address(RVA = "0x476D410", Offset = "0x476D410", VA = "0x476D410")]
	public static uint4x2 operator *(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600238B")]
	[Address(RVA = "0x476D490", Offset = "0x476D490", VA = "0x476D490")]
	public static uint4x2 operator *(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600238C")]
	[Address(RVA = "0x476D510", Offset = "0x476D510", VA = "0x476D510")]
	public static uint4x2 operator +(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600238D")]
	[Address(RVA = "0x476D580", Offset = "0x476D580", VA = "0x476D580")]
	public static uint4x2 operator +(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600238E")]
	[Address(RVA = "0x476D5F0", Offset = "0x476D5F0", VA = "0x476D5F0")]
	public static uint4x2 operator +(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600238F")]
	[Address(RVA = "0x476D660", Offset = "0x476D660", VA = "0x476D660")]
	public static uint4x2 operator -(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002390")]
	[Address(RVA = "0x476D6D0", Offset = "0x476D6D0", VA = "0x476D6D0")]
	public static uint4x2 operator -(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002391")]
	[Address(RVA = "0x476D740", Offset = "0x476D740", VA = "0x476D740")]
	public static uint4x2 operator -(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002392")]
	[Address(RVA = "0x476D7B0", Offset = "0x476D7B0", VA = "0x476D7B0")]
	public static uint4x2 operator /(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002393")]
	[Address(RVA = "0x476D880", Offset = "0x476D880", VA = "0x476D880")]
	public static uint4x2 operator /(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002394")]
	[Address(RVA = "0x476D930", Offset = "0x476D930", VA = "0x476D930")]
	public static uint4x2 operator /(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002395")]
	[Address(RVA = "0x476D9D0", Offset = "0x476D9D0", VA = "0x476D9D0")]
	public static uint4x2 operator %(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002396")]
	[Address(RVA = "0x476DAA0", Offset = "0x476DAA0", VA = "0x476DAA0")]
	public static uint4x2 operator %(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002397")]
	[Address(RVA = "0x476DB50", Offset = "0x476DB50", VA = "0x476DB50")]
	public static uint4x2 operator %(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002398")]
	[Address(RVA = "0x476DBF0", Offset = "0x476DBF0", VA = "0x476DBF0")]
	public static uint4x2 operator ++(uint4x2 val)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002399")]
	[Address(RVA = "0x476DC40", Offset = "0x476DC40", VA = "0x476DC40")]
	public static uint4x2 operator --(uint4x2 val)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600239A")]
	[Address(RVA = "0x476DC90", Offset = "0x476DC90", VA = "0x476DC90")]
	public static bool4x2 operator <(uint4x2 lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600239B")]
	[Address(RVA = "0x476DD70", Offset = "0x476DD70", VA = "0x476DD70")]
	public static bool4x2 operator <(uint4x2 lhs, uint rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600239C")]
	[Address(RVA = "0x476DE10", Offset = "0x476DE10", VA = "0x476DE10")]
	public static bool4x2 operator <(uint lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600239D")]
	[Address(RVA = "0x476DEB0", Offset = "0x476DEB0", VA = "0x476DEB0")]
	public static bool4x2 operator <=(uint4x2 lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600239E")]
	[Address(RVA = "0x476DF90", Offset = "0x476DF90", VA = "0x476DF90")]
	public static bool4x2 operator <=(uint4x2 lhs, uint rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600239F")]
	[Address(RVA = "0x476E030", Offset = "0x476E030", VA = "0x476E030")]
	public static bool4x2 operator <=(uint lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023A0")]
	[Address(RVA = "0x476E0D0", Offset = "0x476E0D0", VA = "0x476E0D0")]
	public static bool4x2 operator >(uint4x2 lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023A1")]
	[Address(RVA = "0x476E1B0", Offset = "0x476E1B0", VA = "0x476E1B0")]
	public static bool4x2 operator >(uint4x2 lhs, uint rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023A2")]
	[Address(RVA = "0x476E250", Offset = "0x476E250", VA = "0x476E250")]
	public static bool4x2 operator >(uint lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023A3")]
	[Address(RVA = "0x476E2F0", Offset = "0x476E2F0", VA = "0x476E2F0")]
	public static bool4x2 operator >=(uint4x2 lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023A4")]
	[Address(RVA = "0x476E3D0", Offset = "0x476E3D0", VA = "0x476E3D0")]
	public static bool4x2 operator >=(uint4x2 lhs, uint rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023A5")]
	[Address(RVA = "0x476E470", Offset = "0x476E470", VA = "0x476E470")]
	public static bool4x2 operator >=(uint lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023A6")]
	[Address(RVA = "0x476E510", Offset = "0x476E510", VA = "0x476E510")]
	public static uint4x2 operator -(uint4x2 val)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023A7")]
	[Address(RVA = "0x476E570", Offset = "0x476E570", VA = "0x476E570")]
	public static uint4x2 operator +(uint4x2 val)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023A8")]
	[Address(RVA = "0x476E590", Offset = "0x476E590", VA = "0x476E590")]
	public static uint4x2 operator <<(uint4x2 x, int n)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023A9")]
	[Address(RVA = "0x476E610", Offset = "0x476E610", VA = "0x476E610")]
	public static uint4x2 operator >>(uint4x2 x, int n)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023AA")]
	[Address(RVA = "0x476E690", Offset = "0x476E690", VA = "0x476E690")]
	public static bool4x2 operator ==(uint4x2 lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023AB")]
	[Address(RVA = "0x476E770", Offset = "0x476E770", VA = "0x476E770")]
	public static bool4x2 operator ==(uint4x2 lhs, uint rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023AC")]
	[Address(RVA = "0x476E810", Offset = "0x476E810", VA = "0x476E810")]
	public static bool4x2 operator ==(uint lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023AD")]
	[Address(RVA = "0x476E8B0", Offset = "0x476E8B0", VA = "0x476E8B0")]
	public static bool4x2 operator !=(uint4x2 lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023AE")]
	[Address(RVA = "0x476E990", Offset = "0x476E990", VA = "0x476E990")]
	public static bool4x2 operator !=(uint4x2 lhs, uint rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023AF")]
	[Address(RVA = "0x476EA30", Offset = "0x476EA30", VA = "0x476EA30")]
	public static bool4x2 operator !=(uint lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023B0")]
	[Address(RVA = "0x476EAD0", Offset = "0x476EAD0", VA = "0x476EAD0")]
	public static uint4x2 operator ~(uint4x2 val)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023B1")]
	[Address(RVA = "0x476EB00", Offset = "0x476EB00", VA = "0x476EB00")]
	public static uint4x2 operator &(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023B2")]
	[Address(RVA = "0x476EB20", Offset = "0x476EB20", VA = "0x476EB20")]
	public static uint4x2 operator &(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023B3")]
	[Address(RVA = "0x476EB90", Offset = "0x476EB90", VA = "0x476EB90")]
	public static uint4x2 operator &(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023B4")]
	[Address(RVA = "0x476EC00", Offset = "0x476EC00", VA = "0x476EC00")]
	public static uint4x2 operator |(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023B5")]
	[Address(RVA = "0x476EC20", Offset = "0x476EC20", VA = "0x476EC20")]
	public static uint4x2 operator |(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023B6")]
	[Address(RVA = "0x476EC90", Offset = "0x476EC90", VA = "0x476EC90")]
	public static uint4x2 operator |(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023B7")]
	[Address(RVA = "0x476ED00", Offset = "0x476ED00", VA = "0x476ED00")]
	public static uint4x2 operator ^(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023B8")]
	[Address(RVA = "0x476ED20", Offset = "0x476ED20", VA = "0x476ED20")]
	public static uint4x2 operator ^(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023B9")]
	[Address(RVA = "0x476ED90", Offset = "0x476ED90", VA = "0x476ED90")]
	public static uint4x2 operator ^(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023BB")]
	[Address(RVA = "0x476EE10", Offset = "0x476EE10", VA = "0x476EE10", Slot = "4")]
	public bool Equals(uint4x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60023BC")]
	[Address(RVA = "0x476EE70", Offset = "0x476EE70", VA = "0x476EE70", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023BD")]
	[Address(RVA = "0x476EF20", Offset = "0x476EF20", VA = "0x476EF20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023BE")]
	[Address(RVA = "0x476EFD0", Offset = "0x476EFD0", VA = "0x476EFD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023BF")]
	[Address(RVA = "0x476F2F0", Offset = "0x476F2F0", VA = "0x476F2F0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
