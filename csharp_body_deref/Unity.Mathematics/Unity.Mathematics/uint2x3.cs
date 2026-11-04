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
		[Address(RVA = "0x841B10", Offset = "0x840110", VA = "0x180841B10")]
		get
		{
			return ref *(uint2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA5")]
	[Address(RVA = "0x1A687C0", Offset = "0x1A66DC0", VA = "0x181A687C0")]
	public uint2x3(uint2 c0, uint2 c1, uint2 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA6")]
	[Address(RVA = "0x2A9C2C0", Offset = "0x2A9A8C0", VA = "0x182A9C2C0")]
	public uint2x3(uint m00, uint m01, uint m02, uint m10, uint m11, uint m12)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA7")]
	[Address(RVA = "0x2A9C230", Offset = "0x2A9A830", VA = "0x182A9C230")]
	public uint2x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA8")]
	[Address(RVA = "0x29C8E90", Offset = "0x29C7490", VA = "0x1829C8E90")]
	public uint2x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA9")]
	[Address(RVA = "0x2A9C110", Offset = "0x2A9A710", VA = "0x182A9C110")]
	public uint2x3(bool2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAA")]
	[Address(RVA = "0x2A9C230", Offset = "0x2A9A830", VA = "0x182A9C230")]
	public uint2x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAB")]
	[Address(RVA = "0x2A9C270", Offset = "0x2A9A870", VA = "0x182A9C270")]
	public uint2x3(int2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAC")]
	[Address(RVA = "0x29CDC10", Offset = "0x29CC210", VA = "0x1829CDC10")]
	public uint2x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAD")]
	[Address(RVA = "0x29CDAB0", Offset = "0x29CC0B0", VA = "0x1829CDAB0")]
	public uint2x3(float2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAE")]
	[Address(RVA = "0x29CDB70", Offset = "0x29CC170", VA = "0x1829CDB70")]
	public uint2x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAF")]
	[Address(RVA = "0x29CDCB0", Offset = "0x29CC2B0", VA = "0x1829CDCB0")]
	public uint2x3(double2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB0")]
	[Address(RVA = "0x29EA640", Offset = "0x29E8C40", VA = "0x1829EA640")]
	public static implicit operator uint2x3(uint v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB1")]
	[Address(RVA = "0x2A9CC80", Offset = "0x2A9B280", VA = "0x182A9CC80")]
	public static explicit operator uint2x3(bool v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB2")]
	[Address(RVA = "0x29EA6D0", Offset = "0x29E8CD0", VA = "0x1829EA6D0")]
	public static explicit operator uint2x3(bool2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB3")]
	[Address(RVA = "0x29EA640", Offset = "0x29E8C40", VA = "0x1829EA640")]
	public static explicit operator uint2x3(int v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB4")]
	[Address(RVA = "0x29EA5B0", Offset = "0x29E8BB0", VA = "0x1829EA5B0")]
	public static explicit operator uint2x3(int2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB5")]
	[Address(RVA = "0x2AB7BC0", Offset = "0x2AB61C0", VA = "0x182AB7BC0")]
	public static explicit operator uint2x3(float v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB6")]
	[Address(RVA = "0x2AB7C70", Offset = "0x2AB6270", VA = "0x182AB7C70")]
	public static explicit operator uint2x3(float2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB7")]
	[Address(RVA = "0x2AB7BF0", Offset = "0x2AB61F0", VA = "0x182AB7BF0")]
	public static explicit operator uint2x3(double v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB8")]
	[Address(RVA = "0x2AB7C20", Offset = "0x2AB6220", VA = "0x182AB7C20")]
	public static explicit operator uint2x3(double2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB9")]
	[Address(RVA = "0x2A9D6F0", Offset = "0x2A9BCF0", VA = "0x182A9D6F0")]
	public static uint2x3 operator *(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBA")]
	[Address(RVA = "0x2A9D5F0", Offset = "0x2A9BBF0", VA = "0x182A9D5F0")]
	public static uint2x3 operator *(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBB")]
	[Address(RVA = "0x2A9D670", Offset = "0x2A9BC70", VA = "0x182A9D670")]
	public static uint2x3 operator *(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBC")]
	[Address(RVA = "0x2A9C380", Offset = "0x2A9A980", VA = "0x182A9C380")]
	public static uint2x3 operator +(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBD")]
	[Address(RVA = "0x2A9C410", Offset = "0x2A9AA10", VA = "0x182A9C410")]
	public static uint2x3 operator +(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBE")]
	[Address(RVA = "0x2A9C310", Offset = "0x2A9A910", VA = "0x182A9C310")]
	public static uint2x3 operator +(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBF")]
	[Address(RVA = "0x2A9D900", Offset = "0x2A9BF00", VA = "0x182A9D900")]
	public static uint2x3 operator -(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC0")]
	[Address(RVA = "0x2A9D990", Offset = "0x2A9BF90", VA = "0x182A9D990")]
	public static uint2x3 operator -(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC1")]
	[Address(RVA = "0x2A9D880", Offset = "0x2A9BE80", VA = "0x182A9D880")]
	public static uint2x3 operator -(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC2")]
	[Address(RVA = "0x2AB79F0", Offset = "0x2AB5FF0", VA = "0x182AB79F0")]
	public static uint2x3 operator /(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC3")]
	[Address(RVA = "0x2AB7B30", Offset = "0x2AB6130", VA = "0x182AB7B30")]
	public static uint2x3 operator /(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC4")]
	[Address(RVA = "0x2AB7AA0", Offset = "0x2AB60A0", VA = "0x182AB7AA0")]
	public static uint2x3 operator /(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC5")]
	[Address(RVA = "0x2AB8280", Offset = "0x2AB6880", VA = "0x182AB8280")]
	public static uint2x3 operator %(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC6")]
	[Address(RVA = "0x2AB81F0", Offset = "0x2AB67F0", VA = "0x182AB81F0")]
	public static uint2x3 operator %(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC7")]
	[Address(RVA = "0x2AB8330", Offset = "0x2AB6930", VA = "0x182AB8330")]
	public static uint2x3 operator %(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC8")]
	[Address(RVA = "0x2A9CF50", Offset = "0x2A9B550", VA = "0x182A9CF50")]
	public static uint2x3 operator ++(uint2x3 val)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC9")]
	[Address(RVA = "0x2A9C780", Offset = "0x2A9AD80", VA = "0x182A9C780")]
	public static uint2x3 operator --(uint2x3 val)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCA")]
	[Address(RVA = "0x2AB8170", Offset = "0x2AB6770", VA = "0x182AB8170")]
	public static bool2x3 operator <(uint2x3 lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCB")]
	[Address(RVA = "0x2AB80A0", Offset = "0x2AB66A0", VA = "0x182AB80A0")]
	public static bool2x3 operator <(uint2x3 lhs, uint rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCC")]
	[Address(RVA = "0x2AB8110", Offset = "0x2AB6710", VA = "0x182AB8110")]
	public static bool2x3 operator <(uint lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCD")]
	[Address(RVA = "0x2AB7F50", Offset = "0x2AB6550", VA = "0x182AB7F50")]
	public static bool2x3 operator <=(uint2x3 lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCE")]
	[Address(RVA = "0x2AB7FD0", Offset = "0x2AB65D0", VA = "0x182AB7FD0")]
	public static bool2x3 operator <=(uint2x3 lhs, uint rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCF")]
	[Address(RVA = "0x2AB8040", Offset = "0x2AB6640", VA = "0x182AB8040")]
	public static bool2x3 operator <=(uint lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD0")]
	[Address(RVA = "0x2AB7E00", Offset = "0x2AB6400", VA = "0x182AB7E00")]
	public static bool2x3 operator >(uint2x3 lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD1")]
	[Address(RVA = "0x2AB7E80", Offset = "0x2AB6480", VA = "0x182AB7E80")]
	public static bool2x3 operator >(uint2x3 lhs, uint rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD2")]
	[Address(RVA = "0x2AB7EF0", Offset = "0x2AB64F0", VA = "0x182AB7EF0")]
	public static bool2x3 operator >(uint lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD3")]
	[Address(RVA = "0x2AB7D80", Offset = "0x2AB6380", VA = "0x182AB7D80")]
	public static bool2x3 operator >=(uint2x3 lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD4")]
	[Address(RVA = "0x2AB7D10", Offset = "0x2AB6310", VA = "0x182AB7D10")]
	public static bool2x3 operator >=(uint2x3 lhs, uint rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD5")]
	[Address(RVA = "0x2AB7CB0", Offset = "0x2AB62B0", VA = "0x182AB7CB0")]
	public static bool2x3 operator >=(uint lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD6")]
	[Address(RVA = "0x2A9DA10", Offset = "0x2A9C010", VA = "0x182A9DA10")]
	public static uint2x3 operator -(uint2x3 val)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD7")]
	[Address(RVA = "0x2A9DA80", Offset = "0x2A9C080", VA = "0x182A9DA80")]
	public static uint2x3 operator +(uint2x3 val)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD8")]
	[Address(RVA = "0x2A9D110", Offset = "0x2A9B710", VA = "0x182A9D110")]
	public static uint2x3 operator <<(uint2x3 x, int n)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD9")]
	[Address(RVA = "0x2AB83C0", Offset = "0x2AB69C0", VA = "0x182AB83C0")]
	public static uint2x3 operator >>(uint2x3 x, int n)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FDA")]
	[Address(RVA = "0x2A9C9B0", Offset = "0x2A9AFB0", VA = "0x182A9C9B0")]
	public static bool2x3 operator ==(uint2x3 lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FDB")]
	[Address(RVA = "0x2A9CA30", Offset = "0x2A9B030", VA = "0x182A9CA30")]
	public static bool2x3 operator ==(uint2x3 lhs, uint rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FDC")]
	[Address(RVA = "0x2A9CAA0", Offset = "0x2A9B0A0", VA = "0x182A9CAA0")]
	public static bool2x3 operator ==(uint lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FDD")]
	[Address(RVA = "0x2A9CFC0", Offset = "0x2A9B5C0", VA = "0x182A9CFC0")]
	public static bool2x3 operator !=(uint2x3 lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FDE")]
	[Address(RVA = "0x2A9D040", Offset = "0x2A9B640", VA = "0x182A9D040")]
	public static bool2x3 operator !=(uint2x3 lhs, uint rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FDF")]
	[Address(RVA = "0x2A9D0B0", Offset = "0x2A9B6B0", VA = "0x182A9D0B0")]
	public static bool2x3 operator !=(uint lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE0")]
	[Address(RVA = "0x2A9D790", Offset = "0x2A9BD90", VA = "0x182A9D790")]
	public static uint2x3 operator ~(uint2x3 val)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE1")]
	[Address(RVA = "0x2A9C480", Offset = "0x2A9AA80", VA = "0x182A9C480")]
	public static uint2x3 operator &(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE2")]
	[Address(RVA = "0x2A9C510", Offset = "0x2A9AB10", VA = "0x182A9C510")]
	public static uint2x3 operator &(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE3")]
	[Address(RVA = "0x2A9C590", Offset = "0x2A9AB90", VA = "0x182A9C590")]
	public static uint2x3 operator &(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE4")]
	[Address(RVA = "0x2A9C670", Offset = "0x2A9AC70", VA = "0x182A9C670")]
	public static uint2x3 operator |(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE5")]
	[Address(RVA = "0x2A9C700", Offset = "0x2A9AD00", VA = "0x182A9C700")]
	public static uint2x3 operator |(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE6")]
	[Address(RVA = "0x2A9C600", Offset = "0x2A9AC00", VA = "0x182A9C600")]
	public static uint2x3 operator |(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE7")]
	[Address(RVA = "0x2A9CBF0", Offset = "0x2A9B1F0", VA = "0x182A9CBF0")]
	public static uint2x3 operator ^(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE8")]
	[Address(RVA = "0x2A9CB70", Offset = "0x2A9B170", VA = "0x182A9CB70")]
	public static uint2x3 operator ^(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE9")]
	[Address(RVA = "0x2A9CB00", Offset = "0x2A9B100", VA = "0x182A9CB00")]
	public static uint2x3 operator ^(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FEB")]
	[Address(RVA = "0x2A9B8F0", Offset = "0x2A99EF0", VA = "0x182A9B8F0", Slot = "4")]
	public bool Equals(uint2x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FEC")]
	[Address(RVA = "0x2AB72E0", Offset = "0x2AB58E0", VA = "0x182AB72E0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FED")]
	[Address(RVA = "0x2AB73E0", Offset = "0x2AB59E0", VA = "0x182AB73E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FEE")]
	[Address(RVA = "0x2AB7470", Offset = "0x2AB5A70", VA = "0x182AB7470", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FEF")]
	[Address(RVA = "0x2AB7740", Offset = "0x2AB5D40", VA = "0x182AB7740", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
