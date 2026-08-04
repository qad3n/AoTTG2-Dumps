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
		[Address(RVA = "0x4A75020", Offset = "0x4A75020", VA = "0x4A75020")]
		get
		{
			return ref *(uint3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600214B")]
	[Address(RVA = "0x4A71D30", Offset = "0x4A71D30", VA = "0x4A71D30")]
	public uint3x4(uint3 c0, uint3 c1, uint3 c2, uint3 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600214C")]
	[Address(RVA = "0x4A71D60", Offset = "0x4A71D60", VA = "0x4A71D60")]
	public uint3x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13, uint m20, uint m21, uint m22, uint m23)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600214D")]
	[Address(RVA = "0x4A71DC0", Offset = "0x4A71DC0", VA = "0x4A71DC0")]
	public uint3x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600214E")]
	[Address(RVA = "0x4A71DF0", Offset = "0x4A71DF0", VA = "0x4A71DF0")]
	public uint3x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600214F")]
	[Address(RVA = "0x4A71E20", Offset = "0x4A71E20", VA = "0x4A71E20")]
	public uint3x4(bool3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002150")]
	[Address(RVA = "0x4A71ED0", Offset = "0x4A71ED0", VA = "0x4A71ED0")]
	public uint3x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002151")]
	[Address(RVA = "0x4A71F00", Offset = "0x4A71F00", VA = "0x4A71F00")]
	public uint3x4(int3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002152")]
	[Address(RVA = "0x4A71F40", Offset = "0x4A71F40", VA = "0x4A71F40")]
	public uint3x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002153")]
	[Address(RVA = "0x4A71F80", Offset = "0x4A71F80", VA = "0x4A71F80")]
	public uint3x4(float3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002154")]
	[Address(RVA = "0x4A720B0", Offset = "0x4A720B0", VA = "0x4A720B0")]
	public uint3x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002155")]
	[Address(RVA = "0x4A720F0", Offset = "0x4A720F0", VA = "0x4A720F0")]
	public uint3x4(double3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002156")]
	[Address(RVA = "0x4A72240", Offset = "0x4A72240", VA = "0x4A72240")]
	public static implicit operator uint3x4(uint v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002157")]
	[Address(RVA = "0x4A72270", Offset = "0x4A72270", VA = "0x4A72270")]
	public static explicit operator uint3x4(bool v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002158")]
	[Address(RVA = "0x4A722B0", Offset = "0x4A722B0", VA = "0x4A722B0")]
	public static explicit operator uint3x4(bool3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002159")]
	[Address(RVA = "0x4A72360", Offset = "0x4A72360", VA = "0x4A72360")]
	public static explicit operator uint3x4(int v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215A")]
	[Address(RVA = "0x4A72390", Offset = "0x4A72390", VA = "0x4A72390")]
	public static explicit operator uint3x4(int3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215B")]
	[Address(RVA = "0x4A723E0", Offset = "0x4A723E0", VA = "0x4A723E0")]
	public static explicit operator uint3x4(float v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215C")]
	[Address(RVA = "0x4A72420", Offset = "0x4A72420", VA = "0x4A72420")]
	public static explicit operator uint3x4(float3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215D")]
	[Address(RVA = "0x4A72570", Offset = "0x4A72570", VA = "0x4A72570")]
	public static explicit operator uint3x4(double v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215E")]
	[Address(RVA = "0x4A725B0", Offset = "0x4A725B0", VA = "0x4A725B0")]
	public static explicit operator uint3x4(double3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215F")]
	[Address(RVA = "0x4A72710", Offset = "0x4A72710", VA = "0x4A72710")]
	public static uint3x4 operator *(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002160")]
	[Address(RVA = "0x4A727F0", Offset = "0x4A727F0", VA = "0x4A727F0")]
	public static uint3x4 operator *(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002161")]
	[Address(RVA = "0x4A728A0", Offset = "0x4A728A0", VA = "0x4A728A0")]
	public static uint3x4 operator *(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002162")]
	[Address(RVA = "0x4A72950", Offset = "0x4A72950", VA = "0x4A72950")]
	public static uint3x4 operator +(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002163")]
	[Address(RVA = "0x4A72A20", Offset = "0x4A72A20", VA = "0x4A72A20")]
	public static uint3x4 operator +(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002164")]
	[Address(RVA = "0x4A72AC0", Offset = "0x4A72AC0", VA = "0x4A72AC0")]
	public static uint3x4 operator +(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002165")]
	[Address(RVA = "0x4A72B60", Offset = "0x4A72B60", VA = "0x4A72B60")]
	public static uint3x4 operator -(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002166")]
	[Address(RVA = "0x4A72C30", Offset = "0x4A72C30", VA = "0x4A72C30")]
	public static uint3x4 operator -(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002167")]
	[Address(RVA = "0x4A72CE0", Offset = "0x4A72CE0", VA = "0x4A72CE0")]
	public static uint3x4 operator -(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002168")]
	[Address(RVA = "0x4A72D90", Offset = "0x4A72D90", VA = "0x4A72D90")]
	public static uint3x4 operator /(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002169")]
	[Address(RVA = "0x4A72EB0", Offset = "0x4A72EB0", VA = "0x4A72EB0")]
	public static uint3x4 operator /(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216A")]
	[Address(RVA = "0x4A72FA0", Offset = "0x4A72FA0", VA = "0x4A72FA0")]
	public static uint3x4 operator /(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216B")]
	[Address(RVA = "0x4A73080", Offset = "0x4A73080", VA = "0x4A73080")]
	public static uint3x4 operator %(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216C")]
	[Address(RVA = "0x4A731A0", Offset = "0x4A731A0", VA = "0x4A731A0")]
	public static uint3x4 operator %(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216D")]
	[Address(RVA = "0x4A73290", Offset = "0x4A73290", VA = "0x4A73290")]
	public static uint3x4 operator %(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216E")]
	[Address(RVA = "0x4A73370", Offset = "0x4A73370", VA = "0x4A73370")]
	public static uint3x4 operator ++(uint3x4 val)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216F")]
	[Address(RVA = "0x4A73430", Offset = "0x4A73430", VA = "0x4A73430")]
	public static uint3x4 operator --(uint3x4 val)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002170")]
	[Address(RVA = "0x4A734F0", Offset = "0x4A734F0", VA = "0x4A734F0")]
	public static bool3x4 operator <(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002171")]
	[Address(RVA = "0x4A73630", Offset = "0x4A73630", VA = "0x4A73630")]
	public static bool3x4 operator <(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002172")]
	[Address(RVA = "0x4A73730", Offset = "0x4A73730", VA = "0x4A73730")]
	public static bool3x4 operator <(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002173")]
	[Address(RVA = "0x4A73830", Offset = "0x4A73830", VA = "0x4A73830")]
	public static bool3x4 operator <=(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002174")]
	[Address(RVA = "0x4A73970", Offset = "0x4A73970", VA = "0x4A73970")]
	public static bool3x4 operator <=(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002175")]
	[Address(RVA = "0x4A73A70", Offset = "0x4A73A70", VA = "0x4A73A70")]
	public static bool3x4 operator <=(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002176")]
	[Address(RVA = "0x4A73B70", Offset = "0x4A73B70", VA = "0x4A73B70")]
	public static bool3x4 operator >(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002177")]
	[Address(RVA = "0x4A73CB0", Offset = "0x4A73CB0", VA = "0x4A73CB0")]
	public static bool3x4 operator >(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002178")]
	[Address(RVA = "0x4A73DB0", Offset = "0x4A73DB0", VA = "0x4A73DB0")]
	public static bool3x4 operator >(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002179")]
	[Address(RVA = "0x4A73EB0", Offset = "0x4A73EB0", VA = "0x4A73EB0")]
	public static bool3x4 operator >=(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217A")]
	[Address(RVA = "0x4A73FF0", Offset = "0x4A73FF0", VA = "0x4A73FF0")]
	public static bool3x4 operator >=(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217B")]
	[Address(RVA = "0x4A740F0", Offset = "0x4A740F0", VA = "0x4A740F0")]
	public static bool3x4 operator >=(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217C")]
	[Address(RVA = "0x4A741F0", Offset = "0x4A741F0", VA = "0x4A741F0")]
	public static uint3x4 operator -(uint3x4 val)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217D")]
	[Address(RVA = "0x4A74280", Offset = "0x4A74280", VA = "0x4A74280")]
	public static uint3x4 operator +(uint3x4 val)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217E")]
	[Address(RVA = "0x4A742D0", Offset = "0x4A742D0", VA = "0x4A742D0")]
	public static uint3x4 operator <<(uint3x4 x, int n)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217F")]
	[Address(RVA = "0x4A74380", Offset = "0x4A74380", VA = "0x4A74380")]
	public static uint3x4 operator >>(uint3x4 x, int n)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002180")]
	[Address(RVA = "0x4A74430", Offset = "0x4A74430", VA = "0x4A74430")]
	public static bool3x4 operator ==(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002181")]
	[Address(RVA = "0x4A74570", Offset = "0x4A74570", VA = "0x4A74570")]
	public static bool3x4 operator ==(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002182")]
	[Address(RVA = "0x4A74670", Offset = "0x4A74670", VA = "0x4A74670")]
	public static bool3x4 operator ==(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002183")]
	[Address(RVA = "0x4A74770", Offset = "0x4A74770", VA = "0x4A74770")]
	public static bool3x4 operator !=(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002184")]
	[Address(RVA = "0x4A748B0", Offset = "0x4A748B0", VA = "0x4A748B0")]
	public static bool3x4 operator !=(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002185")]
	[Address(RVA = "0x4A749B0", Offset = "0x4A749B0", VA = "0x4A749B0")]
	public static bool3x4 operator !=(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002186")]
	[Address(RVA = "0x4A74AB0", Offset = "0x4A74AB0", VA = "0x4A74AB0")]
	public static uint3x4 operator ~(uint3x4 val)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002187")]
	[Address(RVA = "0x4A74B10", Offset = "0x4A74B10", VA = "0x4A74B10")]
	public static uint3x4 operator &(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002188")]
	[Address(RVA = "0x4A74B80", Offset = "0x4A74B80", VA = "0x4A74B80")]
	public static uint3x4 operator &(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002189")]
	[Address(RVA = "0x4A74C20", Offset = "0x4A74C20", VA = "0x4A74C20")]
	public static uint3x4 operator &(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218A")]
	[Address(RVA = "0x4A74CC0", Offset = "0x4A74CC0", VA = "0x4A74CC0")]
	public static uint3x4 operator |(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218B")]
	[Address(RVA = "0x4A74D30", Offset = "0x4A74D30", VA = "0x4A74D30")]
	public static uint3x4 operator |(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218C")]
	[Address(RVA = "0x4A74DD0", Offset = "0x4A74DD0", VA = "0x4A74DD0")]
	public static uint3x4 operator |(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218D")]
	[Address(RVA = "0x4A74E70", Offset = "0x4A74E70", VA = "0x4A74E70")]
	public static uint3x4 operator ^(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218E")]
	[Address(RVA = "0x4A74EE0", Offset = "0x4A74EE0", VA = "0x4A74EE0")]
	public static uint3x4 operator ^(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218F")]
	[Address(RVA = "0x4A74F80", Offset = "0x4A74F80", VA = "0x4A74F80")]
	public static uint3x4 operator ^(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002191")]
	[Address(RVA = "0x4A75030", Offset = "0x4A75030", VA = "0x4A75030", Slot = "4")]
	public bool Equals(uint3x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002192")]
	[Address(RVA = "0x4A750B0", Offset = "0x4A750B0", VA = "0x4A750B0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002193")]
	[Address(RVA = "0x4A75180", Offset = "0x4A75180", VA = "0x4A75180", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002194")]
	[Address(RVA = "0x4A75270", Offset = "0x4A75270", VA = "0x4A75270", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002195")]
	[Address(RVA = "0x4A756D0", Offset = "0x4A756D0", VA = "0x4A756D0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
