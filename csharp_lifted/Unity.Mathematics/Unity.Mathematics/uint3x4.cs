// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.uint3x4
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
[Token(Token = "0x200005B")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint3x4 : IEquatable<uint3x4>, IFormattable
{
	[Token(Token = "0x400015B")]
	[FieldOffset(Offset = "0x0")]
	public uint3 c0;

	[Token(Token = "0x400015C")]
	[FieldOffset(Offset = "0xC")]
	public uint3 c1;

	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0x18")]
	public uint3 c2;

	[Token(Token = "0x400015E")]
	[FieldOffset(Offset = "0x24")]
	public uint3 c3;

	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint3x4 zero;

	[Token(Token = "0x17000A35")]
	public unsafe ref uint3 this[int index]
	{
		[Token(Token = "0x60021E7")]
		[Address(RVA = "0x63FE040", Offset = "0x63FD040", VA = "0x63FE040")]
		get
		{
			return ref *(uint3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021A2")]
	[Address(RVA = "0x63FAD40", Offset = "0x63F9D40", VA = "0x63FAD40")]
	public uint3x4(uint3 c0, uint3 c1, uint3 c2, uint3 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021A3")]
	[Address(RVA = "0x63FAD70", Offset = "0x63F9D70", VA = "0x63FAD70")]
	public uint3x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13, uint m20, uint m21, uint m22, uint m23)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021A4")]
	[Address(RVA = "0x63FADD0", Offset = "0x63F9DD0", VA = "0x63FADD0")]
	public uint3x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021A5")]
	[Address(RVA = "0x63FAE00", Offset = "0x63F9E00", VA = "0x63FAE00")]
	public uint3x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021A6")]
	[Address(RVA = "0x63FAE30", Offset = "0x63F9E30", VA = "0x63FAE30")]
	public uint3x4(bool3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021A7")]
	[Address(RVA = "0x63FAEE0", Offset = "0x63F9EE0", VA = "0x63FAEE0")]
	public uint3x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021A8")]
	[Address(RVA = "0x63FAF10", Offset = "0x63F9F10", VA = "0x63FAF10")]
	public uint3x4(int3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021A9")]
	[Address(RVA = "0x63FAF50", Offset = "0x63F9F50", VA = "0x63FAF50")]
	public uint3x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021AA")]
	[Address(RVA = "0x63FAF90", Offset = "0x63F9F90", VA = "0x63FAF90")]
	public uint3x4(float3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021AB")]
	[Address(RVA = "0x63FB0C0", Offset = "0x63FA0C0", VA = "0x63FB0C0")]
	public uint3x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021AC")]
	[Address(RVA = "0x63FB100", Offset = "0x63FA100", VA = "0x63FB100")]
	public uint3x4(double3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021AD")]
	[Address(RVA = "0x63FB250", Offset = "0x63FA250", VA = "0x63FB250")]
	public static implicit operator uint3x4(uint v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021AE")]
	[Address(RVA = "0x63FB280", Offset = "0x63FA280", VA = "0x63FB280")]
	public static explicit operator uint3x4(bool v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021AF")]
	[Address(RVA = "0x63FB2C0", Offset = "0x63FA2C0", VA = "0x63FB2C0")]
	public static explicit operator uint3x4(bool3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021B0")]
	[Address(RVA = "0x63FB370", Offset = "0x63FA370", VA = "0x63FB370")]
	public static explicit operator uint3x4(int v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021B1")]
	[Address(RVA = "0x63FB3A0", Offset = "0x63FA3A0", VA = "0x63FB3A0")]
	public static explicit operator uint3x4(int3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021B2")]
	[Address(RVA = "0x63FB3F0", Offset = "0x63FA3F0", VA = "0x63FB3F0")]
	public static explicit operator uint3x4(float v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021B3")]
	[Address(RVA = "0x63FB430", Offset = "0x63FA430", VA = "0x63FB430")]
	public static explicit operator uint3x4(float3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021B4")]
	[Address(RVA = "0x63FB570", Offset = "0x63FA570", VA = "0x63FB570")]
	public static explicit operator uint3x4(double v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021B5")]
	[Address(RVA = "0x63FB5B0", Offset = "0x63FA5B0", VA = "0x63FB5B0")]
	public static explicit operator uint3x4(double3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021B6")]
	[Address(RVA = "0x63FB710", Offset = "0x63FA710", VA = "0x63FB710")]
	public static uint3x4 operator *(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021B7")]
	[Address(RVA = "0x63FB7F0", Offset = "0x63FA7F0", VA = "0x63FB7F0")]
	public static uint3x4 operator *(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021B8")]
	[Address(RVA = "0x63FB8A0", Offset = "0x63FA8A0", VA = "0x63FB8A0")]
	public static uint3x4 operator *(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021B9")]
	[Address(RVA = "0x63FB950", Offset = "0x63FA950", VA = "0x63FB950")]
	public static uint3x4 operator +(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021BA")]
	[Address(RVA = "0x63FBA20", Offset = "0x63FAA20", VA = "0x63FBA20")]
	public static uint3x4 operator +(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021BB")]
	[Address(RVA = "0x63FBAC0", Offset = "0x63FAAC0", VA = "0x63FBAC0")]
	public static uint3x4 operator +(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021BC")]
	[Address(RVA = "0x63FBB60", Offset = "0x63FAB60", VA = "0x63FBB60")]
	public static uint3x4 operator -(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021BD")]
	[Address(RVA = "0x63FBC30", Offset = "0x63FAC30", VA = "0x63FBC30")]
	public static uint3x4 operator -(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021BE")]
	[Address(RVA = "0x63FBCE0", Offset = "0x63FACE0", VA = "0x63FBCE0")]
	public static uint3x4 operator -(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021BF")]
	[Address(RVA = "0x63FBD90", Offset = "0x63FAD90", VA = "0x63FBD90")]
	public static uint3x4 operator /(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021C0")]
	[Address(RVA = "0x63FBEB0", Offset = "0x63FAEB0", VA = "0x63FBEB0")]
	public static uint3x4 operator /(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021C1")]
	[Address(RVA = "0x63FBFA0", Offset = "0x63FAFA0", VA = "0x63FBFA0")]
	public static uint3x4 operator /(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021C2")]
	[Address(RVA = "0x63FC080", Offset = "0x63FB080", VA = "0x63FC080")]
	public static uint3x4 operator %(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021C3")]
	[Address(RVA = "0x63FC1A0", Offset = "0x63FB1A0", VA = "0x63FC1A0")]
	public static uint3x4 operator %(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021C4")]
	[Address(RVA = "0x63FC290", Offset = "0x63FB290", VA = "0x63FC290")]
	public static uint3x4 operator %(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021C5")]
	[Address(RVA = "0x63FC370", Offset = "0x63FB370", VA = "0x63FC370")]
	public static uint3x4 operator ++(uint3x4 val)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021C6")]
	[Address(RVA = "0x63FC410", Offset = "0x63FB410", VA = "0x63FC410")]
	public static uint3x4 operator --(uint3x4 val)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021C7")]
	[Address(RVA = "0x63FC4B0", Offset = "0x63FB4B0", VA = "0x63FC4B0")]
	public static bool3x4 operator <(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021C8")]
	[Address(RVA = "0x63FC5F0", Offset = "0x63FB5F0", VA = "0x63FC5F0")]
	public static bool3x4 operator <(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021C9")]
	[Address(RVA = "0x63FC6F0", Offset = "0x63FB6F0", VA = "0x63FC6F0")]
	public static bool3x4 operator <(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021CA")]
	[Address(RVA = "0x63FC7F0", Offset = "0x63FB7F0", VA = "0x63FC7F0")]
	public static bool3x4 operator <=(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021CB")]
	[Address(RVA = "0x63FC930", Offset = "0x63FB930", VA = "0x63FC930")]
	public static bool3x4 operator <=(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021CC")]
	[Address(RVA = "0x63FCA30", Offset = "0x63FBA30", VA = "0x63FCA30")]
	public static bool3x4 operator <=(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021CD")]
	[Address(RVA = "0x63FCB30", Offset = "0x63FBB30", VA = "0x63FCB30")]
	public static bool3x4 operator >(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021CE")]
	[Address(RVA = "0x63FCC70", Offset = "0x63FBC70", VA = "0x63FCC70")]
	public static bool3x4 operator >(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021CF")]
	[Address(RVA = "0x63FCD70", Offset = "0x63FBD70", VA = "0x63FCD70")]
	public static bool3x4 operator >(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021D0")]
	[Address(RVA = "0x63FCE70", Offset = "0x63FBE70", VA = "0x63FCE70")]
	public static bool3x4 operator >=(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021D1")]
	[Address(RVA = "0x63FCFB0", Offset = "0x63FBFB0", VA = "0x63FCFB0")]
	public static bool3x4 operator >=(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021D2")]
	[Address(RVA = "0x63FD0B0", Offset = "0x63FC0B0", VA = "0x63FD0B0")]
	public static bool3x4 operator >=(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021D3")]
	[Address(RVA = "0x63FD1B0", Offset = "0x63FC1B0", VA = "0x63FD1B0")]
	public static uint3x4 operator -(uint3x4 val)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021D4")]
	[Address(RVA = "0x63FD240", Offset = "0x63FC240", VA = "0x63FD240")]
	public static uint3x4 operator +(uint3x4 val)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021D5")]
	[Address(RVA = "0x63FD290", Offset = "0x63FC290", VA = "0x63FD290")]
	public static uint3x4 operator <<(uint3x4 x, int n)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021D6")]
	[Address(RVA = "0x63FD340", Offset = "0x63FC340", VA = "0x63FD340")]
	public static uint3x4 operator >>(uint3x4 x, int n)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021D7")]
	[Address(RVA = "0x63FD3F0", Offset = "0x63FC3F0", VA = "0x63FD3F0")]
	public static bool3x4 operator ==(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021D8")]
	[Address(RVA = "0x63FD530", Offset = "0x63FC530", VA = "0x63FD530")]
	public static bool3x4 operator ==(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021D9")]
	[Address(RVA = "0x63FD630", Offset = "0x63FC630", VA = "0x63FD630")]
	public static bool3x4 operator ==(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021DA")]
	[Address(RVA = "0x63FD730", Offset = "0x63FC730", VA = "0x63FD730")]
	public static bool3x4 operator !=(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021DB")]
	[Address(RVA = "0x63FD870", Offset = "0x63FC870", VA = "0x63FD870")]
	public static bool3x4 operator !=(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021DC")]
	[Address(RVA = "0x63FD970", Offset = "0x63FC970", VA = "0x63FD970")]
	public static bool3x4 operator !=(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021DD")]
	[Address(RVA = "0x63FDA70", Offset = "0x63FCA70", VA = "0x63FDA70")]
	public static uint3x4 operator ~(uint3x4 val)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021DE")]
	[Address(RVA = "0x63FDAD0", Offset = "0x63FCAD0", VA = "0x63FDAD0")]
	public static uint3x4 operator &(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021DF")]
	[Address(RVA = "0x63FDB40", Offset = "0x63FCB40", VA = "0x63FDB40")]
	public static uint3x4 operator &(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021E0")]
	[Address(RVA = "0x63FDBF0", Offset = "0x63FCBF0", VA = "0x63FDBF0")]
	public static uint3x4 operator &(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021E1")]
	[Address(RVA = "0x63FDCA0", Offset = "0x63FCCA0", VA = "0x63FDCA0")]
	public static uint3x4 operator |(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021E2")]
	[Address(RVA = "0x63FDD10", Offset = "0x63FCD10", VA = "0x63FDD10")]
	public static uint3x4 operator |(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021E3")]
	[Address(RVA = "0x63FDDC0", Offset = "0x63FCDC0", VA = "0x63FDDC0")]
	public static uint3x4 operator |(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021E4")]
	[Address(RVA = "0x63FDE70", Offset = "0x63FCE70", VA = "0x63FDE70")]
	public static uint3x4 operator ^(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021E5")]
	[Address(RVA = "0x63FDEE0", Offset = "0x63FCEE0", VA = "0x63FDEE0")]
	public static uint3x4 operator ^(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021E6")]
	[Address(RVA = "0x63FDF90", Offset = "0x63FCF90", VA = "0x63FDF90")]
	public static uint3x4 operator ^(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021E8")]
	[Address(RVA = "0x63FE050", Offset = "0x63FD050", VA = "0x63FE050", Slot = "4")]
	public bool Equals(uint3x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60021E9")]
	[Address(RVA = "0x63FE0D0", Offset = "0x63FD0D0", VA = "0x63FE0D0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021EA")]
	[Address(RVA = "0x63FE1A0", Offset = "0x63FD1A0", VA = "0x63FE1A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021EB")]
	[Address(RVA = "0x63FE260", Offset = "0x63FD260", VA = "0x63FE260", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021EC")]
	[Address(RVA = "0x63FE6D0", Offset = "0x63FD6D0", VA = "0x63FE6D0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
