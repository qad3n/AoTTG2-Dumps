using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x200005B")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint3x3 : IEquatable<uint3x3>, IFormattable
{
	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x0")]
	public uint3 c0;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0xC")]
	public uint3 c1;

	[Token(Token = "0x400014D")]
	[FieldOffset(Offset = "0x18")]
	public uint3 c2;

	[Token(Token = "0x400014E")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint3x3 identity;

	[Token(Token = "0x400014F")]
	[FieldOffset(Offset = "0x24")]
	public static readonly uint3x3 zero;

	[Token(Token = "0x17000A34")]
	public unsafe ref uint3 this[int index]
	{
		[Token(Token = "0x6002144")]
		[Address(RVA = "0x4763050", Offset = "0x4763050", VA = "0x4763050")]
		get
		{
			return ref *(uint3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020FF")]
	[Address(RVA = "0x47608B0", Offset = "0x47608B0", VA = "0x47608B0")]
	public uint3x3(uint3 c0, uint3 c1, uint3 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002100")]
	[Address(RVA = "0x47608D0", Offset = "0x47608D0", VA = "0x47608D0")]
	public uint3x3(uint m00, uint m01, uint m02, uint m10, uint m11, uint m12, uint m20, uint m21, uint m22)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002101")]
	[Address(RVA = "0x4760910", Offset = "0x4760910", VA = "0x4760910")]
	public uint3x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002102")]
	[Address(RVA = "0x4760940", Offset = "0x4760940", VA = "0x4760940")]
	public uint3x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002103")]
	[Address(RVA = "0x4760970", Offset = "0x4760970", VA = "0x4760970")]
	public uint3x3(bool3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002104")]
	[Address(RVA = "0x4760A00", Offset = "0x4760A00", VA = "0x4760A00")]
	public uint3x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002105")]
	[Address(RVA = "0x4760A30", Offset = "0x4760A30", VA = "0x4760A30")]
	public uint3x3(int3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002106")]
	[Address(RVA = "0x4760A60", Offset = "0x4760A60", VA = "0x4760A60")]
	public uint3x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002107")]
	[Address(RVA = "0x4760AA0", Offset = "0x4760AA0", VA = "0x4760AA0")]
	public uint3x3(float3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002108")]
	[Address(RVA = "0x4760B90", Offset = "0x4760B90", VA = "0x4760B90")]
	public uint3x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002109")]
	[Address(RVA = "0x4760BD0", Offset = "0x4760BD0", VA = "0x4760BD0")]
	public uint3x3(double3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600210A")]
	[Address(RVA = "0x4760CD0", Offset = "0x4760CD0", VA = "0x4760CD0")]
	public static implicit operator uint3x3(uint v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600210B")]
	[Address(RVA = "0x4760D00", Offset = "0x4760D00", VA = "0x4760D00")]
	public static explicit operator uint3x3(bool v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600210C")]
	[Address(RVA = "0x4760D30", Offset = "0x4760D30", VA = "0x4760D30")]
	public static explicit operator uint3x3(bool3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600210D")]
	[Address(RVA = "0x4760DC0", Offset = "0x4760DC0", VA = "0x4760DC0")]
	public static explicit operator uint3x3(int v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600210E")]
	[Address(RVA = "0x4760DF0", Offset = "0x4760DF0", VA = "0x4760DF0")]
	public static explicit operator uint3x3(int3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600210F")]
	[Address(RVA = "0x4760E30", Offset = "0x4760E30", VA = "0x4760E30")]
	public static explicit operator uint3x3(float v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002110")]
	[Address(RVA = "0x4760E70", Offset = "0x4760E70", VA = "0x4760E70")]
	public static explicit operator uint3x3(float3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002111")]
	[Address(RVA = "0x4760F60", Offset = "0x4760F60", VA = "0x4760F60")]
	public static explicit operator uint3x3(double v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002112")]
	[Address(RVA = "0x4760FA0", Offset = "0x4760FA0", VA = "0x4760FA0")]
	public static explicit operator uint3x3(double3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002113")]
	[Address(RVA = "0x47610A0", Offset = "0x47610A0", VA = "0x47610A0")]
	public static uint3x3 operator *(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002114")]
	[Address(RVA = "0x4761150", Offset = "0x4761150", VA = "0x4761150")]
	public static uint3x3 operator *(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002115")]
	[Address(RVA = "0x47611D0", Offset = "0x47611D0", VA = "0x47611D0")]
	public static uint3x3 operator *(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002116")]
	[Address(RVA = "0x4761250", Offset = "0x4761250", VA = "0x4761250")]
	public static uint3x3 operator +(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002117")]
	[Address(RVA = "0x47612F0", Offset = "0x47612F0", VA = "0x47612F0")]
	public static uint3x3 operator +(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002118")]
	[Address(RVA = "0x4761360", Offset = "0x4761360", VA = "0x4761360")]
	public static uint3x3 operator +(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002119")]
	[Address(RVA = "0x47613D0", Offset = "0x47613D0", VA = "0x47613D0")]
	public static uint3x3 operator -(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211A")]
	[Address(RVA = "0x4761470", Offset = "0x4761470", VA = "0x4761470")]
	public static uint3x3 operator -(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211B")]
	[Address(RVA = "0x47614F0", Offset = "0x47614F0", VA = "0x47614F0")]
	public static uint3x3 operator -(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211C")]
	[Address(RVA = "0x4761570", Offset = "0x4761570", VA = "0x4761570")]
	public static uint3x3 operator /(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211D")]
	[Address(RVA = "0x4761640", Offset = "0x4761640", VA = "0x4761640")]
	public static uint3x3 operator /(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211E")]
	[Address(RVA = "0x47616F0", Offset = "0x47616F0", VA = "0x47616F0")]
	public static uint3x3 operator /(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211F")]
	[Address(RVA = "0x4761790", Offset = "0x4761790", VA = "0x4761790")]
	public static uint3x3 operator %(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002120")]
	[Address(RVA = "0x4761860", Offset = "0x4761860", VA = "0x4761860")]
	public static uint3x3 operator %(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002121")]
	[Address(RVA = "0x4761910", Offset = "0x4761910", VA = "0x4761910")]
	public static uint3x3 operator %(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002122")]
	[Address(RVA = "0x47619B0", Offset = "0x47619B0", VA = "0x47619B0")]
	public static uint3x3 operator ++(uint3x3 val)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002123")]
	[Address(RVA = "0x4761A40", Offset = "0x4761A40", VA = "0x4761A40")]
	public static uint3x3 operator --(uint3x3 val)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002124")]
	[Address(RVA = "0x4761AD0", Offset = "0x4761AD0", VA = "0x4761AD0")]
	public static bool3x3 operator <(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002125")]
	[Address(RVA = "0x4761BC0", Offset = "0x4761BC0", VA = "0x4761BC0")]
	public static bool3x3 operator <(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002126")]
	[Address(RVA = "0x4761C90", Offset = "0x4761C90", VA = "0x4761C90")]
	public static bool3x3 operator <(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002127")]
	[Address(RVA = "0x4761D60", Offset = "0x4761D60", VA = "0x4761D60")]
	public static bool3x3 operator <=(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002128")]
	[Address(RVA = "0x4761E50", Offset = "0x4761E50", VA = "0x4761E50")]
	public static bool3x3 operator <=(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002129")]
	[Address(RVA = "0x4761F20", Offset = "0x4761F20", VA = "0x4761F20")]
	public static bool3x3 operator <=(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212A")]
	[Address(RVA = "0x4761FF0", Offset = "0x4761FF0", VA = "0x4761FF0")]
	public static bool3x3 operator >(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212B")]
	[Address(RVA = "0x47620E0", Offset = "0x47620E0", VA = "0x47620E0")]
	public static bool3x3 operator >(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212C")]
	[Address(RVA = "0x47621B0", Offset = "0x47621B0", VA = "0x47621B0")]
	public static bool3x3 operator >(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212D")]
	[Address(RVA = "0x4762280", Offset = "0x4762280", VA = "0x4762280")]
	public static bool3x3 operator >=(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212E")]
	[Address(RVA = "0x4762370", Offset = "0x4762370", VA = "0x4762370")]
	public static bool3x3 operator >=(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212F")]
	[Address(RVA = "0x4762440", Offset = "0x4762440", VA = "0x4762440")]
	public static bool3x3 operator >=(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002130")]
	[Address(RVA = "0x4762510", Offset = "0x4762510", VA = "0x4762510")]
	public static uint3x3 operator -(uint3x3 val)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002131")]
	[Address(RVA = "0x4762580", Offset = "0x4762580", VA = "0x4762580")]
	public static uint3x3 operator +(uint3x3 val)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002132")]
	[Address(RVA = "0x47625C0", Offset = "0x47625C0", VA = "0x47625C0")]
	public static uint3x3 operator <<(uint3x3 x, int n)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002133")]
	[Address(RVA = "0x4762640", Offset = "0x4762640", VA = "0x4762640")]
	public static uint3x3 operator >>(uint3x3 x, int n)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002134")]
	[Address(RVA = "0x47626C0", Offset = "0x47626C0", VA = "0x47626C0")]
	public static bool3x3 operator ==(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002135")]
	[Address(RVA = "0x47627B0", Offset = "0x47627B0", VA = "0x47627B0")]
	public static bool3x3 operator ==(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002136")]
	[Address(RVA = "0x4762880", Offset = "0x4762880", VA = "0x4762880")]
	public static bool3x3 operator ==(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002137")]
	[Address(RVA = "0x4762950", Offset = "0x4762950", VA = "0x4762950")]
	public static bool3x3 operator !=(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002138")]
	[Address(RVA = "0x4762A40", Offset = "0x4762A40", VA = "0x4762A40")]
	public static bool3x3 operator !=(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002139")]
	[Address(RVA = "0x4762B10", Offset = "0x4762B10", VA = "0x4762B10")]
	public static bool3x3 operator !=(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213A")]
	[Address(RVA = "0x4762BE0", Offset = "0x4762BE0", VA = "0x4762BE0")]
	public static uint3x3 operator ~(uint3x3 val)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213B")]
	[Address(RVA = "0x4762C30", Offset = "0x4762C30", VA = "0x4762C30")]
	public static uint3x3 operator &(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213C")]
	[Address(RVA = "0x4762C90", Offset = "0x4762C90", VA = "0x4762C90")]
	public static uint3x3 operator &(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213D")]
	[Address(RVA = "0x4762D10", Offset = "0x4762D10", VA = "0x4762D10")]
	public static uint3x3 operator &(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213E")]
	[Address(RVA = "0x4762D90", Offset = "0x4762D90", VA = "0x4762D90")]
	public static uint3x3 operator |(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213F")]
	[Address(RVA = "0x4762DF0", Offset = "0x4762DF0", VA = "0x4762DF0")]
	public static uint3x3 operator |(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002140")]
	[Address(RVA = "0x4762E70", Offset = "0x4762E70", VA = "0x4762E70")]
	public static uint3x3 operator |(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002141")]
	[Address(RVA = "0x4762EF0", Offset = "0x4762EF0", VA = "0x4762EF0")]
	public static uint3x3 operator ^(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002142")]
	[Address(RVA = "0x4762F50", Offset = "0x4762F50", VA = "0x4762F50")]
	public static uint3x3 operator ^(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002143")]
	[Address(RVA = "0x4762FD0", Offset = "0x4762FD0", VA = "0x4762FD0")]
	public static uint3x3 operator ^(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002145")]
	[Address(RVA = "0x4763060", Offset = "0x4763060", VA = "0x4763060", Slot = "4")]
	public bool Equals(uint3x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002146")]
	[Address(RVA = "0x47630C0", Offset = "0x47630C0", VA = "0x47630C0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002147")]
	[Address(RVA = "0x4763170", Offset = "0x4763170", VA = "0x4763170", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002148")]
	[Address(RVA = "0x4763220", Offset = "0x4763220", VA = "0x4763220", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002149")]
	[Address(RVA = "0x4763590", Offset = "0x4763590", VA = "0x4763590", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
