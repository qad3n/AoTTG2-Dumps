// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.uint2x3
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
[Token(Token = "0x2000055")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint2x3 : IEquatable<uint2x3>, IFormattable
{
	[Token(Token = "0x4000143")]
	[FieldOffset(Offset = "0x0")]
	public uint2 c0;

	[Token(Token = "0x4000144")]
	[FieldOffset(Offset = "0x8")]
	public uint2 c1;

	[Token(Token = "0x4000145")]
	[FieldOffset(Offset = "0x10")]
	public uint2 c2;

	[Token(Token = "0x4000146")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint2x3 zero;

	[Token(Token = "0x170009BB")]
	public unsafe ref uint2 this[int index]
	{
		[Token(Token = "0x6001FEA")]
		[Address(RVA = "0x649FDF0", Offset = "0x649EDF0", VA = "0x649FDF0")]
		get
		{
			return ref *(uint2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA5")]
	[Address(RVA = "0x649E3F0", Offset = "0x649D3F0", VA = "0x649E3F0")]
	public uint2x3(uint2 c0, uint2 c1, uint2 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA6")]
	[Address(RVA = "0x649E400", Offset = "0x649D400", VA = "0x649E400")]
	public uint2x3(uint m00, uint m01, uint m02, uint m10, uint m11, uint m12)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA7")]
	[Address(RVA = "0x649E430", Offset = "0x649D430", VA = "0x649E430")]
	public uint2x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA8")]
	[Address(RVA = "0x649E450", Offset = "0x649D450", VA = "0x649E450")]
	public uint2x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA9")]
	[Address(RVA = "0x649E470", Offset = "0x649D470", VA = "0x649E470")]
	public uint2x3(bool2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAA")]
	[Address(RVA = "0x649E4D0", Offset = "0x649D4D0", VA = "0x649E4D0")]
	public uint2x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAB")]
	[Address(RVA = "0x649E4F0", Offset = "0x649D4F0", VA = "0x649E4F0")]
	public uint2x3(int2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAC")]
	[Address(RVA = "0x649E510", Offset = "0x649D510", VA = "0x649E510")]
	public uint2x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAD")]
	[Address(RVA = "0x649E540", Offset = "0x649D540", VA = "0x649E540")]
	public uint2x3(float2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAE")]
	[Address(RVA = "0x649E610", Offset = "0x649D610", VA = "0x649E610")]
	public uint2x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAF")]
	[Address(RVA = "0x649E640", Offset = "0x649D640", VA = "0x649E640")]
	public uint2x3(double2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB0")]
	[Address(RVA = "0x649E720", Offset = "0x649D720", VA = "0x649E720")]
	public static implicit operator uint2x3(uint v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB1")]
	[Address(RVA = "0x649E740", Offset = "0x649D740", VA = "0x649E740")]
	public static explicit operator uint2x3(bool v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB2")]
	[Address(RVA = "0x649E770", Offset = "0x649D770", VA = "0x649E770")]
	public static explicit operator uint2x3(bool2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB3")]
	[Address(RVA = "0x649E7D0", Offset = "0x649D7D0", VA = "0x649E7D0")]
	public static explicit operator uint2x3(int v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB4")]
	[Address(RVA = "0x649E7F0", Offset = "0x649D7F0", VA = "0x649E7F0")]
	public static explicit operator uint2x3(int2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB5")]
	[Address(RVA = "0x649E810", Offset = "0x649D810", VA = "0x649E810")]
	public static explicit operator uint2x3(float v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB6")]
	[Address(RVA = "0x649E840", Offset = "0x649D840", VA = "0x649E840")]
	public static explicit operator uint2x3(float2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB7")]
	[Address(RVA = "0x649E910", Offset = "0x649D910", VA = "0x649E910")]
	public static explicit operator uint2x3(double v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB8")]
	[Address(RVA = "0x649E940", Offset = "0x649D940", VA = "0x649E940")]
	public static explicit operator uint2x3(double2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB9")]
	[Address(RVA = "0x649EA30", Offset = "0x649DA30", VA = "0x649EA30")]
	public static uint2x3 operator *(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBA")]
	[Address(RVA = "0x649EAB0", Offset = "0x649DAB0", VA = "0x649EAB0")]
	public static uint2x3 operator *(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBB")]
	[Address(RVA = "0x649EB10", Offset = "0x649DB10", VA = "0x649EB10")]
	public static uint2x3 operator *(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBC")]
	[Address(RVA = "0x649EB70", Offset = "0x649DB70", VA = "0x649EB70")]
	public static uint2x3 operator +(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBD")]
	[Address(RVA = "0x649EBF0", Offset = "0x649DBF0", VA = "0x649EBF0")]
	public static uint2x3 operator +(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBE")]
	[Address(RVA = "0x649EC20", Offset = "0x649DC20", VA = "0x649EC20")]
	public static uint2x3 operator +(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBF")]
	[Address(RVA = "0x649EC50", Offset = "0x649DC50", VA = "0x649EC50")]
	public static uint2x3 operator -(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC0")]
	[Address(RVA = "0x649ECD0", Offset = "0x649DCD0", VA = "0x649ECD0")]
	public static uint2x3 operator -(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC1")]
	[Address(RVA = "0x649ED10", Offset = "0x649DD10", VA = "0x649ED10")]
	public static uint2x3 operator -(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC2")]
	[Address(RVA = "0x649ED50", Offset = "0x649DD50", VA = "0x649ED50")]
	public static uint2x3 operator /(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC3")]
	[Address(RVA = "0x649EDE0", Offset = "0x649DDE0", VA = "0x649EDE0")]
	public static uint2x3 operator /(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC4")]
	[Address(RVA = "0x649EE60", Offset = "0x649DE60", VA = "0x649EE60")]
	public static uint2x3 operator /(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC5")]
	[Address(RVA = "0x649EED0", Offset = "0x649DED0", VA = "0x649EED0")]
	public static uint2x3 operator %(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC6")]
	[Address(RVA = "0x649EF60", Offset = "0x649DF60", VA = "0x649EF60")]
	public static uint2x3 operator %(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC7")]
	[Address(RVA = "0x649EFE0", Offset = "0x649DFE0", VA = "0x649EFE0")]
	public static uint2x3 operator %(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC8")]
	[Address(RVA = "0x649F050", Offset = "0x649E050", VA = "0x649F050")]
	public static uint2x3 operator ++(uint2x3 val)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC9")]
	[Address(RVA = "0x649F0B0", Offset = "0x649E0B0", VA = "0x649F0B0")]
	public static uint2x3 operator --(uint2x3 val)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCA")]
	[Address(RVA = "0x649F100", Offset = "0x649E100", VA = "0x649F100")]
	public static bool2x3 operator <(uint2x3 lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCB")]
	[Address(RVA = "0x649F1A0", Offset = "0x649E1A0", VA = "0x649F1A0")]
	public static bool2x3 operator <(uint2x3 lhs, uint rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCC")]
	[Address(RVA = "0x649F220", Offset = "0x649E220", VA = "0x649F220")]
	public static bool2x3 operator <(uint lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCD")]
	[Address(RVA = "0x649F2A0", Offset = "0x649E2A0", VA = "0x649F2A0")]
	public static bool2x3 operator <=(uint2x3 lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCE")]
	[Address(RVA = "0x649F340", Offset = "0x649E340", VA = "0x649F340")]
	public static bool2x3 operator <=(uint2x3 lhs, uint rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCF")]
	[Address(RVA = "0x649F3C0", Offset = "0x649E3C0", VA = "0x649F3C0")]
	public static bool2x3 operator <=(uint lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD0")]
	[Address(RVA = "0x649F440", Offset = "0x649E440", VA = "0x649F440")]
	public static bool2x3 operator >(uint2x3 lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD1")]
	[Address(RVA = "0x649F4E0", Offset = "0x649E4E0", VA = "0x649F4E0")]
	public static bool2x3 operator >(uint2x3 lhs, uint rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD2")]
	[Address(RVA = "0x649F560", Offset = "0x649E560", VA = "0x649F560")]
	public static bool2x3 operator >(uint lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD3")]
	[Address(RVA = "0x649F5E0", Offset = "0x649E5E0", VA = "0x649F5E0")]
	public static bool2x3 operator >=(uint2x3 lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD4")]
	[Address(RVA = "0x649F680", Offset = "0x649E680", VA = "0x649F680")]
	public static bool2x3 operator >=(uint2x3 lhs, uint rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD5")]
	[Address(RVA = "0x649F700", Offset = "0x649E700", VA = "0x649F700")]
	public static bool2x3 operator >=(uint lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD6")]
	[Address(RVA = "0x649F780", Offset = "0x649E780", VA = "0x649F780")]
	public static uint2x3 operator -(uint2x3 val)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD7")]
	[Address(RVA = "0x649F7D0", Offset = "0x649E7D0", VA = "0x649F7D0")]
	public static uint2x3 operator +(uint2x3 val)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD8")]
	[Address(RVA = "0x649F7F0", Offset = "0x649E7F0", VA = "0x649F7F0")]
	public static uint2x3 operator <<(uint2x3 x, int n)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD9")]
	[Address(RVA = "0x649F850", Offset = "0x649E850", VA = "0x649F850")]
	public static uint2x3 operator >>(uint2x3 x, int n)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FDA")]
	[Address(RVA = "0x649F8B0", Offset = "0x649E8B0", VA = "0x649F8B0")]
	public static bool2x3 operator ==(uint2x3 lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FDB")]
	[Address(RVA = "0x649F950", Offset = "0x649E950", VA = "0x649F950")]
	public static bool2x3 operator ==(uint2x3 lhs, uint rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FDC")]
	[Address(RVA = "0x649F9D0", Offset = "0x649E9D0", VA = "0x649F9D0")]
	public static bool2x3 operator ==(uint lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FDD")]
	[Address(RVA = "0x649FA50", Offset = "0x649EA50", VA = "0x649FA50")]
	public static bool2x3 operator !=(uint2x3 lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FDE")]
	[Address(RVA = "0x649FAF0", Offset = "0x649EAF0", VA = "0x649FAF0")]
	public static bool2x3 operator !=(uint2x3 lhs, uint rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FDF")]
	[Address(RVA = "0x649FB70", Offset = "0x649EB70", VA = "0x649FB70")]
	public static bool2x3 operator !=(uint lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE0")]
	[Address(RVA = "0x649FBF0", Offset = "0x649EBF0", VA = "0x649FBF0")]
	public static uint2x3 operator ~(uint2x3 val)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE1")]
	[Address(RVA = "0x649FC10", Offset = "0x649EC10", VA = "0x649FC10")]
	public static uint2x3 operator &(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE2")]
	[Address(RVA = "0x649FC30", Offset = "0x649EC30", VA = "0x649FC30")]
	public static uint2x3 operator &(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE3")]
	[Address(RVA = "0x649FC70", Offset = "0x649EC70", VA = "0x649FC70")]
	public static uint2x3 operator &(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE4")]
	[Address(RVA = "0x649FCB0", Offset = "0x649ECB0", VA = "0x649FCB0")]
	public static uint2x3 operator |(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE5")]
	[Address(RVA = "0x649FCD0", Offset = "0x649ECD0", VA = "0x649FCD0")]
	public static uint2x3 operator |(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE6")]
	[Address(RVA = "0x649FD10", Offset = "0x649ED10", VA = "0x649FD10")]
	public static uint2x3 operator |(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE7")]
	[Address(RVA = "0x649FD50", Offset = "0x649ED50", VA = "0x649FD50")]
	public static uint2x3 operator ^(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE8")]
	[Address(RVA = "0x649FD70", Offset = "0x649ED70", VA = "0x649FD70")]
	public static uint2x3 operator ^(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE9")]
	[Address(RVA = "0x649FDB0", Offset = "0x649EDB0", VA = "0x649FDB0")]
	public static uint2x3 operator ^(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FEB")]
	[Address(RVA = "0x649FE00", Offset = "0x649EE00", VA = "0x649FE00", Slot = "4")]
	public bool Equals(uint2x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FEC")]
	[Address(RVA = "0x649FE40", Offset = "0x649EE40", VA = "0x649FE40", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FED")]
	[Address(RVA = "0x649FED0", Offset = "0x649EED0", VA = "0x649FED0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FEE")]
	[Address(RVA = "0x649FF40", Offset = "0x649EF40", VA = "0x649FF40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FEF")]
	[Address(RVA = "0x64A01C0", Offset = "0x649F1C0", VA = "0x64A01C0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
