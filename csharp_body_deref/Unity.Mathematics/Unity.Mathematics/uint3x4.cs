using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x200005C")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint3x4 : IEquatable<uint3x4>, IFormattable
{
	[Token(Token = "0x4000150")]
	[FieldOffset(Offset = "0x0")]
	public uint3 c0;

	[Token(Token = "0x4000151")]
	[FieldOffset(Offset = "0xC")]
	public uint3 c1;

	[Token(Token = "0x4000152")]
	[FieldOffset(Offset = "0x18")]
	public uint3 c2;

	[Token(Token = "0x4000153")]
	[FieldOffset(Offset = "0x24")]
	public uint3 c3;

	[Token(Token = "0x4000154")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint3x4 zero;

	[Token(Token = "0x17000A35")]
	public unsafe ref uint3 this[int index]
	{
		[Token(Token = "0x6002190")]
		[Address(RVA = "0x4766C10", Offset = "0x4766C10", VA = "0x4766C10")]
		get
		{
			return ref *(uint3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600214B")]
	[Address(RVA = "0x4763920", Offset = "0x4763920", VA = "0x4763920")]
	public uint3x4(uint3 c0, uint3 c1, uint3 c2, uint3 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600214C")]
	[Address(RVA = "0x4763950", Offset = "0x4763950", VA = "0x4763950")]
	public uint3x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13, uint m20, uint m21, uint m22, uint m23)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600214D")]
	[Address(RVA = "0x47639B0", Offset = "0x47639B0", VA = "0x47639B0")]
	public uint3x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600214E")]
	[Address(RVA = "0x47639E0", Offset = "0x47639E0", VA = "0x47639E0")]
	public uint3x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600214F")]
	[Address(RVA = "0x4763A10", Offset = "0x4763A10", VA = "0x4763A10")]
	public uint3x4(bool3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002150")]
	[Address(RVA = "0x4763AC0", Offset = "0x4763AC0", VA = "0x4763AC0")]
	public uint3x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002151")]
	[Address(RVA = "0x4763AF0", Offset = "0x4763AF0", VA = "0x4763AF0")]
	public uint3x4(int3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002152")]
	[Address(RVA = "0x4763B30", Offset = "0x4763B30", VA = "0x4763B30")]
	public uint3x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002153")]
	[Address(RVA = "0x4763B70", Offset = "0x4763B70", VA = "0x4763B70")]
	public uint3x4(float3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002154")]
	[Address(RVA = "0x4763CA0", Offset = "0x4763CA0", VA = "0x4763CA0")]
	public uint3x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002155")]
	[Address(RVA = "0x4763CE0", Offset = "0x4763CE0", VA = "0x4763CE0")]
	public uint3x4(double3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002156")]
	[Address(RVA = "0x4763E30", Offset = "0x4763E30", VA = "0x4763E30")]
	public static implicit operator uint3x4(uint v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002157")]
	[Address(RVA = "0x4763E60", Offset = "0x4763E60", VA = "0x4763E60")]
	public static explicit operator uint3x4(bool v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002158")]
	[Address(RVA = "0x4763EA0", Offset = "0x4763EA0", VA = "0x4763EA0")]
	public static explicit operator uint3x4(bool3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002159")]
	[Address(RVA = "0x4763F50", Offset = "0x4763F50", VA = "0x4763F50")]
	public static explicit operator uint3x4(int v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215A")]
	[Address(RVA = "0x4763F80", Offset = "0x4763F80", VA = "0x4763F80")]
	public static explicit operator uint3x4(int3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215B")]
	[Address(RVA = "0x4763FD0", Offset = "0x4763FD0", VA = "0x4763FD0")]
	public static explicit operator uint3x4(float v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215C")]
	[Address(RVA = "0x4764010", Offset = "0x4764010", VA = "0x4764010")]
	public static explicit operator uint3x4(float3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215D")]
	[Address(RVA = "0x4764160", Offset = "0x4764160", VA = "0x4764160")]
	public static explicit operator uint3x4(double v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215E")]
	[Address(RVA = "0x47641A0", Offset = "0x47641A0", VA = "0x47641A0")]
	public static explicit operator uint3x4(double3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215F")]
	[Address(RVA = "0x4764300", Offset = "0x4764300", VA = "0x4764300")]
	public static uint3x4 operator *(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002160")]
	[Address(RVA = "0x47643E0", Offset = "0x47643E0", VA = "0x47643E0")]
	public static uint3x4 operator *(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002161")]
	[Address(RVA = "0x4764490", Offset = "0x4764490", VA = "0x4764490")]
	public static uint3x4 operator *(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002162")]
	[Address(RVA = "0x4764540", Offset = "0x4764540", VA = "0x4764540")]
	public static uint3x4 operator +(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002163")]
	[Address(RVA = "0x4764610", Offset = "0x4764610", VA = "0x4764610")]
	public static uint3x4 operator +(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002164")]
	[Address(RVA = "0x47646B0", Offset = "0x47646B0", VA = "0x47646B0")]
	public static uint3x4 operator +(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002165")]
	[Address(RVA = "0x4764750", Offset = "0x4764750", VA = "0x4764750")]
	public static uint3x4 operator -(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002166")]
	[Address(RVA = "0x4764820", Offset = "0x4764820", VA = "0x4764820")]
	public static uint3x4 operator -(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002167")]
	[Address(RVA = "0x47648D0", Offset = "0x47648D0", VA = "0x47648D0")]
	public static uint3x4 operator -(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002168")]
	[Address(RVA = "0x4764980", Offset = "0x4764980", VA = "0x4764980")]
	public static uint3x4 operator /(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002169")]
	[Address(RVA = "0x4764AA0", Offset = "0x4764AA0", VA = "0x4764AA0")]
	public static uint3x4 operator /(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216A")]
	[Address(RVA = "0x4764B90", Offset = "0x4764B90", VA = "0x4764B90")]
	public static uint3x4 operator /(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216B")]
	[Address(RVA = "0x4764C70", Offset = "0x4764C70", VA = "0x4764C70")]
	public static uint3x4 operator %(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216C")]
	[Address(RVA = "0x4764D90", Offset = "0x4764D90", VA = "0x4764D90")]
	public static uint3x4 operator %(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216D")]
	[Address(RVA = "0x4764E80", Offset = "0x4764E80", VA = "0x4764E80")]
	public static uint3x4 operator %(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216E")]
	[Address(RVA = "0x4764F60", Offset = "0x4764F60", VA = "0x4764F60")]
	public static uint3x4 operator ++(uint3x4 val)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216F")]
	[Address(RVA = "0x4765020", Offset = "0x4765020", VA = "0x4765020")]
	public static uint3x4 operator --(uint3x4 val)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002170")]
	[Address(RVA = "0x47650E0", Offset = "0x47650E0", VA = "0x47650E0")]
	public static bool3x4 operator <(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002171")]
	[Address(RVA = "0x4765220", Offset = "0x4765220", VA = "0x4765220")]
	public static bool3x4 operator <(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002172")]
	[Address(RVA = "0x4765320", Offset = "0x4765320", VA = "0x4765320")]
	public static bool3x4 operator <(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002173")]
	[Address(RVA = "0x4765420", Offset = "0x4765420", VA = "0x4765420")]
	public static bool3x4 operator <=(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002174")]
	[Address(RVA = "0x4765560", Offset = "0x4765560", VA = "0x4765560")]
	public static bool3x4 operator <=(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002175")]
	[Address(RVA = "0x4765660", Offset = "0x4765660", VA = "0x4765660")]
	public static bool3x4 operator <=(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002176")]
	[Address(RVA = "0x4765760", Offset = "0x4765760", VA = "0x4765760")]
	public static bool3x4 operator >(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002177")]
	[Address(RVA = "0x47658A0", Offset = "0x47658A0", VA = "0x47658A0")]
	public static bool3x4 operator >(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002178")]
	[Address(RVA = "0x47659A0", Offset = "0x47659A0", VA = "0x47659A0")]
	public static bool3x4 operator >(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002179")]
	[Address(RVA = "0x4765AA0", Offset = "0x4765AA0", VA = "0x4765AA0")]
	public static bool3x4 operator >=(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217A")]
	[Address(RVA = "0x4765BE0", Offset = "0x4765BE0", VA = "0x4765BE0")]
	public static bool3x4 operator >=(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217B")]
	[Address(RVA = "0x4765CE0", Offset = "0x4765CE0", VA = "0x4765CE0")]
	public static bool3x4 operator >=(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217C")]
	[Address(RVA = "0x4765DE0", Offset = "0x4765DE0", VA = "0x4765DE0")]
	public static uint3x4 operator -(uint3x4 val)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217D")]
	[Address(RVA = "0x4765E70", Offset = "0x4765E70", VA = "0x4765E70")]
	public static uint3x4 operator +(uint3x4 val)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217E")]
	[Address(RVA = "0x4765EC0", Offset = "0x4765EC0", VA = "0x4765EC0")]
	public static uint3x4 operator <<(uint3x4 x, int n)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217F")]
	[Address(RVA = "0x4765F70", Offset = "0x4765F70", VA = "0x4765F70")]
	public static uint3x4 operator >>(uint3x4 x, int n)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002180")]
	[Address(RVA = "0x4766020", Offset = "0x4766020", VA = "0x4766020")]
	public static bool3x4 operator ==(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002181")]
	[Address(RVA = "0x4766160", Offset = "0x4766160", VA = "0x4766160")]
	public static bool3x4 operator ==(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002182")]
	[Address(RVA = "0x4766260", Offset = "0x4766260", VA = "0x4766260")]
	public static bool3x4 operator ==(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002183")]
	[Address(RVA = "0x4766360", Offset = "0x4766360", VA = "0x4766360")]
	public static bool3x4 operator !=(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002184")]
	[Address(RVA = "0x47664A0", Offset = "0x47664A0", VA = "0x47664A0")]
	public static bool3x4 operator !=(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002185")]
	[Address(RVA = "0x47665A0", Offset = "0x47665A0", VA = "0x47665A0")]
	public static bool3x4 operator !=(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002186")]
	[Address(RVA = "0x47666A0", Offset = "0x47666A0", VA = "0x47666A0")]
	public static uint3x4 operator ~(uint3x4 val)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002187")]
	[Address(RVA = "0x4766700", Offset = "0x4766700", VA = "0x4766700")]
	public static uint3x4 operator &(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002188")]
	[Address(RVA = "0x4766770", Offset = "0x4766770", VA = "0x4766770")]
	public static uint3x4 operator &(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002189")]
	[Address(RVA = "0x4766810", Offset = "0x4766810", VA = "0x4766810")]
	public static uint3x4 operator &(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218A")]
	[Address(RVA = "0x47668B0", Offset = "0x47668B0", VA = "0x47668B0")]
	public static uint3x4 operator |(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218B")]
	[Address(RVA = "0x4766920", Offset = "0x4766920", VA = "0x4766920")]
	public static uint3x4 operator |(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218C")]
	[Address(RVA = "0x47669C0", Offset = "0x47669C0", VA = "0x47669C0")]
	public static uint3x4 operator |(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218D")]
	[Address(RVA = "0x4766A60", Offset = "0x4766A60", VA = "0x4766A60")]
	public static uint3x4 operator ^(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218E")]
	[Address(RVA = "0x4766AD0", Offset = "0x4766AD0", VA = "0x4766AD0")]
	public static uint3x4 operator ^(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218F")]
	[Address(RVA = "0x4766B70", Offset = "0x4766B70", VA = "0x4766B70")]
	public static uint3x4 operator ^(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002191")]
	[Address(RVA = "0x4766C20", Offset = "0x4766C20", VA = "0x4766C20", Slot = "4")]
	public bool Equals(uint3x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002192")]
	[Address(RVA = "0x4766CA0", Offset = "0x4766CA0", VA = "0x4766CA0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002193")]
	[Address(RVA = "0x4766D70", Offset = "0x4766D70", VA = "0x4766D70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002194")]
	[Address(RVA = "0x4766E60", Offset = "0x4766E60", VA = "0x4766E60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002195")]
	[Address(RVA = "0x47672C0", Offset = "0x47672C0", VA = "0x47672C0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
