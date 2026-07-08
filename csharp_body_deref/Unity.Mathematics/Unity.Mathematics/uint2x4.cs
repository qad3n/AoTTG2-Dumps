using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000057")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint2x4 : IEquatable<uint2x4>, IFormattable
{
	[Token(Token = "0x400013C")]
	[FieldOffset(Offset = "0x0")]
	public uint2 c0;

	[Token(Token = "0x400013D")]
	[FieldOffset(Offset = "0x8")]
	public uint2 c1;

	[Token(Token = "0x400013E")]
	[FieldOffset(Offset = "0x10")]
	public uint2 c2;

	[Token(Token = "0x400013F")]
	[FieldOffset(Offset = "0x18")]
	public uint2 c3;

	[Token(Token = "0x4000140")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint2x4 zero;

	[Token(Token = "0x170009BC")]
	public unsafe ref uint2 this[int index]
	{
		[Token(Token = "0x6001FDE")]
		[Address(RVA = "0x4808850", Offset = "0x4808850", VA = "0x4808850")]
		get
		{
			return ref *(uint2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F99")]
	[Address(RVA = "0x4806770", Offset = "0x4806770", VA = "0x4806770")]
	public uint2x4(uint2 c0, uint2 c1, uint2 c2, uint2 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F9A")]
	[Address(RVA = "0x4806780", Offset = "0x4806780", VA = "0x4806780")]
	public uint2x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F9B")]
	[Address(RVA = "0x48067D0", Offset = "0x48067D0", VA = "0x48067D0")]
	public uint2x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F9C")]
	[Address(RVA = "0x48067F0", Offset = "0x48067F0", VA = "0x48067F0")]
	public uint2x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F9D")]
	[Address(RVA = "0x4806820", Offset = "0x4806820", VA = "0x4806820")]
	public uint2x4(bool2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F9E")]
	[Address(RVA = "0x4806890", Offset = "0x4806890", VA = "0x4806890")]
	public uint2x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F9F")]
	[Address(RVA = "0x48068B0", Offset = "0x48068B0", VA = "0x48068B0")]
	public uint2x4(int2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA0")]
	[Address(RVA = "0x48068D0", Offset = "0x48068D0", VA = "0x48068D0")]
	public uint2x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA1")]
	[Address(RVA = "0x4806900", Offset = "0x4806900", VA = "0x4806900")]
	public uint2x4(float2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA2")]
	[Address(RVA = "0x48069D0", Offset = "0x48069D0", VA = "0x48069D0")]
	public uint2x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA3")]
	[Address(RVA = "0x4806A00", Offset = "0x4806A00", VA = "0x4806A00")]
	public uint2x4(double2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA4")]
	[Address(RVA = "0x4806AE0", Offset = "0x4806AE0", VA = "0x4806AE0")]
	public static implicit operator uint2x4(uint v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA5")]
	[Address(RVA = "0x4806B00", Offset = "0x4806B00", VA = "0x4806B00")]
	public static explicit operator uint2x4(bool v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA6")]
	[Address(RVA = "0x4806B30", Offset = "0x4806B30", VA = "0x4806B30")]
	public static explicit operator uint2x4(bool2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA7")]
	[Address(RVA = "0x4806BB0", Offset = "0x4806BB0", VA = "0x4806BB0")]
	public static explicit operator uint2x4(int v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA8")]
	[Address(RVA = "0x4806BD0", Offset = "0x4806BD0", VA = "0x4806BD0")]
	public static explicit operator uint2x4(int2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA9")]
	[Address(RVA = "0x4806BF0", Offset = "0x4806BF0", VA = "0x4806BF0")]
	public static explicit operator uint2x4(float v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAA")]
	[Address(RVA = "0x4806C20", Offset = "0x4806C20", VA = "0x4806C20")]
	public static explicit operator uint2x4(float2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAB")]
	[Address(RVA = "0x4806D00", Offset = "0x4806D00", VA = "0x4806D00")]
	public static explicit operator uint2x4(double v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAC")]
	[Address(RVA = "0x4806D30", Offset = "0x4806D30", VA = "0x4806D30")]
	public static explicit operator uint2x4(double2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAD")]
	[Address(RVA = "0x4806E20", Offset = "0x4806E20", VA = "0x4806E20")]
	public static uint2x4 operator *(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAE")]
	[Address(RVA = "0x4806EC0", Offset = "0x4806EC0", VA = "0x4806EC0")]
	public static uint2x4 operator *(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAF")]
	[Address(RVA = "0x4806F40", Offset = "0x4806F40", VA = "0x4806F40")]
	public static uint2x4 operator *(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB0")]
	[Address(RVA = "0x4806FC0", Offset = "0x4806FC0", VA = "0x4806FC0")]
	public static uint2x4 operator +(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB1")]
	[Address(RVA = "0x4807030", Offset = "0x4807030", VA = "0x4807030")]
	public static uint2x4 operator +(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB2")]
	[Address(RVA = "0x48070A0", Offset = "0x48070A0", VA = "0x48070A0")]
	public static uint2x4 operator +(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB3")]
	[Address(RVA = "0x4807110", Offset = "0x4807110", VA = "0x4807110")]
	public static uint2x4 operator -(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB4")]
	[Address(RVA = "0x4807180", Offset = "0x4807180", VA = "0x4807180")]
	public static uint2x4 operator -(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB5")]
	[Address(RVA = "0x48071F0", Offset = "0x48071F0", VA = "0x48071F0")]
	public static uint2x4 operator -(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB6")]
	[Address(RVA = "0x4807260", Offset = "0x4807260", VA = "0x4807260")]
	public static uint2x4 operator /(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB7")]
	[Address(RVA = "0x4807320", Offset = "0x4807320", VA = "0x4807320")]
	public static uint2x4 operator /(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB8")]
	[Address(RVA = "0x48073C0", Offset = "0x48073C0", VA = "0x48073C0")]
	public static uint2x4 operator /(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB9")]
	[Address(RVA = "0x4807460", Offset = "0x4807460", VA = "0x4807460")]
	public static uint2x4 operator %(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBA")]
	[Address(RVA = "0x4807520", Offset = "0x4807520", VA = "0x4807520")]
	public static uint2x4 operator %(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBB")]
	[Address(RVA = "0x48075C0", Offset = "0x48075C0", VA = "0x48075C0")]
	public static uint2x4 operator %(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBC")]
	[Address(RVA = "0x4807660", Offset = "0x4807660", VA = "0x4807660")]
	public static uint2x4 operator ++(uint2x4 val)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBD")]
	[Address(RVA = "0x48076D0", Offset = "0x48076D0", VA = "0x48076D0")]
	public static uint2x4 operator --(uint2x4 val)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBE")]
	[Address(RVA = "0x4807740", Offset = "0x4807740", VA = "0x4807740")]
	public static bool2x4 operator <(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBF")]
	[Address(RVA = "0x4807810", Offset = "0x4807810", VA = "0x4807810")]
	public static bool2x4 operator <(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC0")]
	[Address(RVA = "0x48078B0", Offset = "0x48078B0", VA = "0x48078B0")]
	public static bool2x4 operator <(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC1")]
	[Address(RVA = "0x4807950", Offset = "0x4807950", VA = "0x4807950")]
	public static bool2x4 operator <=(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC2")]
	[Address(RVA = "0x4807A20", Offset = "0x4807A20", VA = "0x4807A20")]
	public static bool2x4 operator <=(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC3")]
	[Address(RVA = "0x4807AC0", Offset = "0x4807AC0", VA = "0x4807AC0")]
	public static bool2x4 operator <=(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC4")]
	[Address(RVA = "0x4807B60", Offset = "0x4807B60", VA = "0x4807B60")]
	public static bool2x4 operator >(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC5")]
	[Address(RVA = "0x4807C30", Offset = "0x4807C30", VA = "0x4807C30")]
	public static bool2x4 operator >(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC6")]
	[Address(RVA = "0x4807CD0", Offset = "0x4807CD0", VA = "0x4807CD0")]
	public static bool2x4 operator >(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC7")]
	[Address(RVA = "0x4807D70", Offset = "0x4807D70", VA = "0x4807D70")]
	public static bool2x4 operator >=(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC8")]
	[Address(RVA = "0x4807E40", Offset = "0x4807E40", VA = "0x4807E40")]
	public static bool2x4 operator >=(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC9")]
	[Address(RVA = "0x4807EE0", Offset = "0x4807EE0", VA = "0x4807EE0")]
	public static bool2x4 operator >=(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCA")]
	[Address(RVA = "0x4807F80", Offset = "0x4807F80", VA = "0x4807F80")]
	public static uint2x4 operator -(uint2x4 val)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCB")]
	[Address(RVA = "0x4807FE0", Offset = "0x4807FE0", VA = "0x4807FE0")]
	public static uint2x4 operator +(uint2x4 val)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCC")]
	[Address(RVA = "0x4808000", Offset = "0x4808000", VA = "0x4808000")]
	public static uint2x4 operator <<(uint2x4 x, int n)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCD")]
	[Address(RVA = "0x4808080", Offset = "0x4808080", VA = "0x4808080")]
	public static uint2x4 operator >>(uint2x4 x, int n)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCE")]
	[Address(RVA = "0x4808100", Offset = "0x4808100", VA = "0x4808100")]
	public static bool2x4 operator ==(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCF")]
	[Address(RVA = "0x48081D0", Offset = "0x48081D0", VA = "0x48081D0")]
	public static bool2x4 operator ==(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD0")]
	[Address(RVA = "0x4808270", Offset = "0x4808270", VA = "0x4808270")]
	public static bool2x4 operator ==(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD1")]
	[Address(RVA = "0x4808310", Offset = "0x4808310", VA = "0x4808310")]
	public static bool2x4 operator !=(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD2")]
	[Address(RVA = "0x48083E0", Offset = "0x48083E0", VA = "0x48083E0")]
	public static bool2x4 operator !=(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD3")]
	[Address(RVA = "0x4808480", Offset = "0x4808480", VA = "0x4808480")]
	public static bool2x4 operator !=(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD4")]
	[Address(RVA = "0x4808520", Offset = "0x4808520", VA = "0x4808520")]
	public static uint2x4 operator ~(uint2x4 val)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD5")]
	[Address(RVA = "0x4808550", Offset = "0x4808550", VA = "0x4808550")]
	public static uint2x4 operator &(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD6")]
	[Address(RVA = "0x4808570", Offset = "0x4808570", VA = "0x4808570")]
	public static uint2x4 operator &(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD7")]
	[Address(RVA = "0x48085E0", Offset = "0x48085E0", VA = "0x48085E0")]
	public static uint2x4 operator &(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD8")]
	[Address(RVA = "0x4808650", Offset = "0x4808650", VA = "0x4808650")]
	public static uint2x4 operator |(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD9")]
	[Address(RVA = "0x4808670", Offset = "0x4808670", VA = "0x4808670")]
	public static uint2x4 operator |(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FDA")]
	[Address(RVA = "0x48086E0", Offset = "0x48086E0", VA = "0x48086E0")]
	public static uint2x4 operator |(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FDB")]
	[Address(RVA = "0x4808750", Offset = "0x4808750", VA = "0x4808750")]
	public static uint2x4 operator ^(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FDC")]
	[Address(RVA = "0x4808770", Offset = "0x4808770", VA = "0x4808770")]
	public static uint2x4 operator ^(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FDD")]
	[Address(RVA = "0x48087E0", Offset = "0x48087E0", VA = "0x48087E0")]
	public static uint2x4 operator ^(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FDF")]
	[Address(RVA = "0x4808860", Offset = "0x4808860", VA = "0x4808860", Slot = "4")]
	public bool Equals(uint2x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FE0")]
	[Address(RVA = "0x48088C0", Offset = "0x48088C0", VA = "0x48088C0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE1")]
	[Address(RVA = "0x4808970", Offset = "0x4808970", VA = "0x4808970", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE2")]
	[Address(RVA = "0x4808A20", Offset = "0x4808A20", VA = "0x4808A20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE3")]
	[Address(RVA = "0x4808D40", Offset = "0x4808D40", VA = "0x4808D40", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
