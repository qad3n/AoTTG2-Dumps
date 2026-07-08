using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000061")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint4x4 : IEquatable<uint4x4>, IFormattable
{
	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x0")]
	public uint4 c0;

	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x10")]
	public uint4 c1;

	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x20")]
	public uint4 c2;

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x30")]
	public uint4 c3;

	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint4x4 identity;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x40")]
	public static readonly uint4x4 zero;

	[Token(Token = "0x17000B89")]
	public unsafe ref uint4 this[int index]
	{
		[Token(Token = "0x6002450")]
		[Address(RVA = "0x4777050", Offset = "0x4777050", VA = "0x4777050")]
		get
		{
			return ref *(uint4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600240B")]
	[Address(RVA = "0x47730C0", Offset = "0x47730C0", VA = "0x47730C0")]
	public uint4x4(uint4 c0, uint4 c1, uint4 c2, uint4 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600240C")]
	[Address(RVA = "0x47730F0", Offset = "0x47730F0", VA = "0x47730F0")]
	public uint4x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13, uint m20, uint m21, uint m22, uint m23, uint m30, uint m31, uint m32, uint m33)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600240D")]
	[Address(RVA = "0x4773150", Offset = "0x4773150", VA = "0x4773150")]
	public uint4x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600240E")]
	[Address(RVA = "0x4773180", Offset = "0x4773180", VA = "0x4773180")]
	public uint4x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600240F")]
	[Address(RVA = "0x47731C0", Offset = "0x47731C0", VA = "0x47731C0")]
	public uint4x4(bool4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002410")]
	[Address(RVA = "0x47732A0", Offset = "0x47732A0", VA = "0x47732A0")]
	public uint4x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002411")]
	[Address(RVA = "0x47732D0", Offset = "0x47732D0", VA = "0x47732D0")]
	public uint4x4(int4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002412")]
	[Address(RVA = "0x4773300", Offset = "0x4773300", VA = "0x4773300")]
	public uint4x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002413")]
	[Address(RVA = "0x4773340", Offset = "0x4773340", VA = "0x4773340")]
	public uint4x4(float4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002414")]
	[Address(RVA = "0x47734F0", Offset = "0x47734F0", VA = "0x47734F0")]
	public uint4x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002415")]
	[Address(RVA = "0x4773530", Offset = "0x4773530", VA = "0x4773530")]
	public uint4x4(double4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002416")]
	[Address(RVA = "0x4773700", Offset = "0x4773700", VA = "0x4773700")]
	public static implicit operator uint4x4(uint v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002417")]
	[Address(RVA = "0x4773730", Offset = "0x4773730", VA = "0x4773730")]
	public static explicit operator uint4x4(bool v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002418")]
	[Address(RVA = "0x4773770", Offset = "0x4773770", VA = "0x4773770")]
	public static explicit operator uint4x4(bool4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002419")]
	[Address(RVA = "0x4773850", Offset = "0x4773850", VA = "0x4773850")]
	public static explicit operator uint4x4(int v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241A")]
	[Address(RVA = "0x4773880", Offset = "0x4773880", VA = "0x4773880")]
	public static explicit operator uint4x4(int4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241B")]
	[Address(RVA = "0x47738B0", Offset = "0x47738B0", VA = "0x47738B0")]
	public static explicit operator uint4x4(float v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241C")]
	[Address(RVA = "0x47738F0", Offset = "0x47738F0", VA = "0x47738F0")]
	public static explicit operator uint4x4(float4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241D")]
	[Address(RVA = "0x4773AB0", Offset = "0x4773AB0", VA = "0x4773AB0")]
	public static explicit operator uint4x4(double v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241E")]
	[Address(RVA = "0x4773AF0", Offset = "0x4773AF0", VA = "0x4773AF0")]
	public static explicit operator uint4x4(double4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241F")]
	[Address(RVA = "0x4773CD0", Offset = "0x4773CD0", VA = "0x4773CD0")]
	public static uint4x4 operator *(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002420")]
	[Address(RVA = "0x4773E20", Offset = "0x4773E20", VA = "0x4773E20")]
	public static uint4x4 operator *(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002421")]
	[Address(RVA = "0x4773F20", Offset = "0x4773F20", VA = "0x4773F20")]
	public static uint4x4 operator *(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002422")]
	[Address(RVA = "0x4774020", Offset = "0x4774020", VA = "0x4774020")]
	public static uint4x4 operator +(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002423")]
	[Address(RVA = "0x47740F0", Offset = "0x47740F0", VA = "0x47740F0")]
	public static uint4x4 operator +(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002424")]
	[Address(RVA = "0x47741B0", Offset = "0x47741B0", VA = "0x47741B0")]
	public static uint4x4 operator +(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002425")]
	[Address(RVA = "0x4774270", Offset = "0x4774270", VA = "0x4774270")]
	public static uint4x4 operator -(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002426")]
	[Address(RVA = "0x4774340", Offset = "0x4774340", VA = "0x4774340")]
	public static uint4x4 operator -(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002427")]
	[Address(RVA = "0x4774400", Offset = "0x4774400", VA = "0x4774400")]
	public static uint4x4 operator -(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002428")]
	[Address(RVA = "0x47744D0", Offset = "0x47744D0", VA = "0x47744D0")]
	public static uint4x4 operator /(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002429")]
	[Address(RVA = "0x4774690", Offset = "0x4774690", VA = "0x4774690")]
	public static uint4x4 operator /(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242A")]
	[Address(RVA = "0x47747E0", Offset = "0x47747E0", VA = "0x47747E0")]
	public static uint4x4 operator /(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242B")]
	[Address(RVA = "0x4774920", Offset = "0x4774920", VA = "0x4774920")]
	public static uint4x4 operator %(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242C")]
	[Address(RVA = "0x4774AE0", Offset = "0x4774AE0", VA = "0x4774AE0")]
	public static uint4x4 operator %(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242D")]
	[Address(RVA = "0x4774C30", Offset = "0x4774C30", VA = "0x4774C30")]
	public static uint4x4 operator %(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242E")]
	[Address(RVA = "0x4774D70", Offset = "0x4774D70", VA = "0x4774D70")]
	public static uint4x4 operator ++(uint4x4 val)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242F")]
	[Address(RVA = "0x4774E10", Offset = "0x4774E10", VA = "0x4774E10")]
	public static uint4x4 operator --(uint4x4 val)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002430")]
	[Address(RVA = "0x4774EB0", Offset = "0x4774EB0", VA = "0x4774EB0")]
	public static bool4x4 operator <(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002431")]
	[Address(RVA = "0x4775070", Offset = "0x4775070", VA = "0x4775070")]
	public static bool4x4 operator <(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002432")]
	[Address(RVA = "0x47751B0", Offset = "0x47751B0", VA = "0x47751B0")]
	public static bool4x4 operator <(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002433")]
	[Address(RVA = "0x47752F0", Offset = "0x47752F0", VA = "0x47752F0")]
	public static bool4x4 operator <=(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002434")]
	[Address(RVA = "0x47754B0", Offset = "0x47754B0", VA = "0x47754B0")]
	public static bool4x4 operator <=(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002435")]
	[Address(RVA = "0x47755F0", Offset = "0x47755F0", VA = "0x47755F0")]
	public static bool4x4 operator <=(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002436")]
	[Address(RVA = "0x4775730", Offset = "0x4775730", VA = "0x4775730")]
	public static bool4x4 operator >(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002437")]
	[Address(RVA = "0x47758F0", Offset = "0x47758F0", VA = "0x47758F0")]
	public static bool4x4 operator >(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002438")]
	[Address(RVA = "0x4775A30", Offset = "0x4775A30", VA = "0x4775A30")]
	public static bool4x4 operator >(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002439")]
	[Address(RVA = "0x4775B70", Offset = "0x4775B70", VA = "0x4775B70")]
	public static bool4x4 operator >=(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243A")]
	[Address(RVA = "0x4775D30", Offset = "0x4775D30", VA = "0x4775D30")]
	public static bool4x4 operator >=(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243B")]
	[Address(RVA = "0x4775E70", Offset = "0x4775E70", VA = "0x4775E70")]
	public static bool4x4 operator >=(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243C")]
	[Address(RVA = "0x4775FB0", Offset = "0x4775FB0", VA = "0x4775FB0")]
	public static uint4x4 operator -(uint4x4 val)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243D")]
	[Address(RVA = "0x4776040", Offset = "0x4776040", VA = "0x4776040")]
	public static uint4x4 operator +(uint4x4 val)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243E")]
	[Address(RVA = "0x4776070", Offset = "0x4776070", VA = "0x4776070")]
	public static uint4x4 operator <<(uint4x4 x, int n)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243F")]
	[Address(RVA = "0x4776160", Offset = "0x4776160", VA = "0x4776160")]
	public static uint4x4 operator >>(uint4x4 x, int n)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002440")]
	[Address(RVA = "0x4776250", Offset = "0x4776250", VA = "0x4776250")]
	public static bool4x4 operator ==(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002441")]
	[Address(RVA = "0x4776410", Offset = "0x4776410", VA = "0x4776410")]
	public static bool4x4 operator ==(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002442")]
	[Address(RVA = "0x4776550", Offset = "0x4776550", VA = "0x4776550")]
	public static bool4x4 operator ==(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002443")]
	[Address(RVA = "0x4776690", Offset = "0x4776690", VA = "0x4776690")]
	public static bool4x4 operator !=(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002444")]
	[Address(RVA = "0x4776850", Offset = "0x4776850", VA = "0x4776850")]
	public static bool4x4 operator !=(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002445")]
	[Address(RVA = "0x4776990", Offset = "0x4776990", VA = "0x4776990")]
	public static bool4x4 operator !=(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002446")]
	[Address(RVA = "0x4776AD0", Offset = "0x4776AD0", VA = "0x4776AD0")]
	public static uint4x4 operator ~(uint4x4 val)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002447")]
	[Address(RVA = "0x4776B10", Offset = "0x4776B10", VA = "0x4776B10")]
	public static uint4x4 operator &(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002448")]
	[Address(RVA = "0x4776B50", Offset = "0x4776B50", VA = "0x4776B50")]
	public static uint4x4 operator &(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002449")]
	[Address(RVA = "0x4776C10", Offset = "0x4776C10", VA = "0x4776C10")]
	public static uint4x4 operator &(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244A")]
	[Address(RVA = "0x4776CD0", Offset = "0x4776CD0", VA = "0x4776CD0")]
	public static uint4x4 operator |(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244B")]
	[Address(RVA = "0x4776D10", Offset = "0x4776D10", VA = "0x4776D10")]
	public static uint4x4 operator |(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244C")]
	[Address(RVA = "0x4776DD0", Offset = "0x4776DD0", VA = "0x4776DD0")]
	public static uint4x4 operator |(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244D")]
	[Address(RVA = "0x4776E90", Offset = "0x4776E90", VA = "0x4776E90")]
	public static uint4x4 operator ^(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244E")]
	[Address(RVA = "0x4776ED0", Offset = "0x4776ED0", VA = "0x4776ED0")]
	public static uint4x4 operator ^(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244F")]
	[Address(RVA = "0x4776F90", Offset = "0x4776F90", VA = "0x4776F90")]
	public static uint4x4 operator ^(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002451")]
	[Address(RVA = "0x4777060", Offset = "0x4777060", VA = "0x4777060", Slot = "4")]
	public bool Equals(uint4x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002452")]
	[Address(RVA = "0x4777110", Offset = "0x4777110", VA = "0x4777110", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002453")]
	[Address(RVA = "0x4777220", Offset = "0x4777220", VA = "0x4777220", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002454")]
	[Address(RVA = "0x4777390", Offset = "0x4777390", VA = "0x4777390", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002455")]
	[Address(RVA = "0x4777950", Offset = "0x4777950", VA = "0x4777950", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
