// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.uint3x3
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
[Token(Token = "0x200005A")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint3x3 : IEquatable<uint3x3>, IFormattable
{
	[Token(Token = "0x4000156")]
	[FieldOffset(Offset = "0x0")]
	public uint3 c0;

	[Token(Token = "0x4000157")]
	[FieldOffset(Offset = "0xC")]
	public uint3 c1;

	[Token(Token = "0x4000158")]
	[FieldOffset(Offset = "0x18")]
	public uint3 c2;

	[Token(Token = "0x4000159")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint3x3 identity;

	[Token(Token = "0x400015A")]
	[FieldOffset(Offset = "0x24")]
	public static readonly uint3x3 zero;

	[Token(Token = "0x17000A34")]
	public unsafe ref uint3 this[int index]
	{
		[Token(Token = "0x600219B")]
		[Address(RVA = "0x63FA490", Offset = "0x63F9490", VA = "0x63FA490")]
		get
		{
			return ref *(uint3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002156")]
	[Address(RVA = "0x63F7D70", Offset = "0x63F6D70", VA = "0x63F7D70")]
	public uint3x3(uint3 c0, uint3 c1, uint3 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002157")]
	[Address(RVA = "0x63F7D90", Offset = "0x63F6D90", VA = "0x63F7D90")]
	public uint3x3(uint m00, uint m01, uint m02, uint m10, uint m11, uint m12, uint m20, uint m21, uint m22)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002158")]
	[Address(RVA = "0x63F7DD0", Offset = "0x63F6DD0", VA = "0x63F7DD0")]
	public uint3x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002159")]
	[Address(RVA = "0x63F7E00", Offset = "0x63F6E00", VA = "0x63F7E00")]
	public uint3x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215A")]
	[Address(RVA = "0x63F7E30", Offset = "0x63F6E30", VA = "0x63F7E30")]
	public uint3x3(bool3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215B")]
	[Address(RVA = "0x63F7EC0", Offset = "0x63F6EC0", VA = "0x63F7EC0")]
	public uint3x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215C")]
	[Address(RVA = "0x63F7EF0", Offset = "0x63F6EF0", VA = "0x63F7EF0")]
	public uint3x3(int3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215D")]
	[Address(RVA = "0x63F7F20", Offset = "0x63F6F20", VA = "0x63F7F20")]
	public uint3x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215E")]
	[Address(RVA = "0x63F7F60", Offset = "0x63F6F60", VA = "0x63F7F60")]
	public uint3x3(float3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215F")]
	[Address(RVA = "0x63F8050", Offset = "0x63F7050", VA = "0x63F8050")]
	public uint3x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002160")]
	[Address(RVA = "0x63F8090", Offset = "0x63F7090", VA = "0x63F8090")]
	public uint3x3(double3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002161")]
	[Address(RVA = "0x63F8190", Offset = "0x63F7190", VA = "0x63F8190")]
	public static implicit operator uint3x3(uint v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002162")]
	[Address(RVA = "0x63F81C0", Offset = "0x63F71C0", VA = "0x63F81C0")]
	public static explicit operator uint3x3(bool v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002163")]
	[Address(RVA = "0x63F81F0", Offset = "0x63F71F0", VA = "0x63F81F0")]
	public static explicit operator uint3x3(bool3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002164")]
	[Address(RVA = "0x63F8280", Offset = "0x63F7280", VA = "0x63F8280")]
	public static explicit operator uint3x3(int v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002165")]
	[Address(RVA = "0x63F82B0", Offset = "0x63F72B0", VA = "0x63F82B0")]
	public static explicit operator uint3x3(int3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002166")]
	[Address(RVA = "0x63F82F0", Offset = "0x63F72F0", VA = "0x63F82F0")]
	public static explicit operator uint3x3(float v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002167")]
	[Address(RVA = "0x63F8330", Offset = "0x63F7330", VA = "0x63F8330")]
	public static explicit operator uint3x3(float3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002168")]
	[Address(RVA = "0x63F8420", Offset = "0x63F7420", VA = "0x63F8420")]
	public static explicit operator uint3x3(double v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002169")]
	[Address(RVA = "0x63F8460", Offset = "0x63F7460", VA = "0x63F8460")]
	public static explicit operator uint3x3(double3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216A")]
	[Address(RVA = "0x63F8560", Offset = "0x63F7560", VA = "0x63F8560")]
	public static uint3x3 operator *(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216B")]
	[Address(RVA = "0x63F8610", Offset = "0x63F7610", VA = "0x63F8610")]
	public static uint3x3 operator *(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216C")]
	[Address(RVA = "0x63F8690", Offset = "0x63F7690", VA = "0x63F8690")]
	public static uint3x3 operator *(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216D")]
	[Address(RVA = "0x63F8710", Offset = "0x63F7710", VA = "0x63F8710")]
	public static uint3x3 operator +(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216E")]
	[Address(RVA = "0x63F87B0", Offset = "0x63F77B0", VA = "0x63F87B0")]
	public static uint3x3 operator +(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216F")]
	[Address(RVA = "0x63F8820", Offset = "0x63F7820", VA = "0x63F8820")]
	public static uint3x3 operator +(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002170")]
	[Address(RVA = "0x63F8890", Offset = "0x63F7890", VA = "0x63F8890")]
	public static uint3x3 operator -(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002171")]
	[Address(RVA = "0x63F8930", Offset = "0x63F7930", VA = "0x63F8930")]
	public static uint3x3 operator -(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002172")]
	[Address(RVA = "0x63F89B0", Offset = "0x63F79B0", VA = "0x63F89B0")]
	public static uint3x3 operator -(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002173")]
	[Address(RVA = "0x63F8A30", Offset = "0x63F7A30", VA = "0x63F8A30")]
	public static uint3x3 operator /(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002174")]
	[Address(RVA = "0x63F8B00", Offset = "0x63F7B00", VA = "0x63F8B00")]
	public static uint3x3 operator /(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002175")]
	[Address(RVA = "0x63F8BB0", Offset = "0x63F7BB0", VA = "0x63F8BB0")]
	public static uint3x3 operator /(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002176")]
	[Address(RVA = "0x63F8C50", Offset = "0x63F7C50", VA = "0x63F8C50")]
	public static uint3x3 operator %(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002177")]
	[Address(RVA = "0x63F8D20", Offset = "0x63F7D20", VA = "0x63F8D20")]
	public static uint3x3 operator %(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002178")]
	[Address(RVA = "0x63F8DD0", Offset = "0x63F7DD0", VA = "0x63F8DD0")]
	public static uint3x3 operator %(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002179")]
	[Address(RVA = "0x63F8E70", Offset = "0x63F7E70", VA = "0x63F8E70")]
	public static uint3x3 operator ++(uint3x3 val)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217A")]
	[Address(RVA = "0x63F8EF0", Offset = "0x63F7EF0", VA = "0x63F8EF0")]
	public static uint3x3 operator --(uint3x3 val)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217B")]
	[Address(RVA = "0x63F8F70", Offset = "0x63F7F70", VA = "0x63F8F70")]
	public static bool3x3 operator <(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217C")]
	[Address(RVA = "0x63F9060", Offset = "0x63F8060", VA = "0x63F9060")]
	public static bool3x3 operator <(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217D")]
	[Address(RVA = "0x63F9130", Offset = "0x63F8130", VA = "0x63F9130")]
	public static bool3x3 operator <(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217E")]
	[Address(RVA = "0x63F9200", Offset = "0x63F8200", VA = "0x63F9200")]
	public static bool3x3 operator <=(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217F")]
	[Address(RVA = "0x63F92F0", Offset = "0x63F82F0", VA = "0x63F92F0")]
	public static bool3x3 operator <=(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002180")]
	[Address(RVA = "0x63F93B0", Offset = "0x63F83B0", VA = "0x63F93B0")]
	public static bool3x3 operator <=(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002181")]
	[Address(RVA = "0x63F9470", Offset = "0x63F8470", VA = "0x63F9470")]
	public static bool3x3 operator >(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002182")]
	[Address(RVA = "0x63F9560", Offset = "0x63F8560", VA = "0x63F9560")]
	public static bool3x3 operator >(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002183")]
	[Address(RVA = "0x63F9630", Offset = "0x63F8630", VA = "0x63F9630")]
	public static bool3x3 operator >(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002184")]
	[Address(RVA = "0x63F9700", Offset = "0x63F8700", VA = "0x63F9700")]
	public static bool3x3 operator >=(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002185")]
	[Address(RVA = "0x63F97F0", Offset = "0x63F87F0", VA = "0x63F97F0")]
	public static bool3x3 operator >=(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002186")]
	[Address(RVA = "0x63F98B0", Offset = "0x63F88B0", VA = "0x63F98B0")]
	public static bool3x3 operator >=(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002187")]
	[Address(RVA = "0x63F9970", Offset = "0x63F8970", VA = "0x63F9970")]
	public static uint3x3 operator -(uint3x3 val)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002188")]
	[Address(RVA = "0x63F99E0", Offset = "0x63F89E0", VA = "0x63F99E0")]
	public static uint3x3 operator +(uint3x3 val)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002189")]
	[Address(RVA = "0x63F9A20", Offset = "0x63F8A20", VA = "0x63F9A20")]
	public static uint3x3 operator <<(uint3x3 x, int n)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218A")]
	[Address(RVA = "0x63F9AA0", Offset = "0x63F8AA0", VA = "0x63F9AA0")]
	public static uint3x3 operator >>(uint3x3 x, int n)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218B")]
	[Address(RVA = "0x63F9B20", Offset = "0x63F8B20", VA = "0x63F9B20")]
	public static bool3x3 operator ==(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218C")]
	[Address(RVA = "0x63F9C10", Offset = "0x63F8C10", VA = "0x63F9C10")]
	public static bool3x3 operator ==(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218D")]
	[Address(RVA = "0x63F9CE0", Offset = "0x63F8CE0", VA = "0x63F9CE0")]
	public static bool3x3 operator ==(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218E")]
	[Address(RVA = "0x63F9DB0", Offset = "0x63F8DB0", VA = "0x63F9DB0")]
	public static bool3x3 operator !=(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218F")]
	[Address(RVA = "0x63F9EA0", Offset = "0x63F8EA0", VA = "0x63F9EA0")]
	public static bool3x3 operator !=(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002190")]
	[Address(RVA = "0x63F9F60", Offset = "0x63F8F60", VA = "0x63F9F60")]
	public static bool3x3 operator !=(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002191")]
	[Address(RVA = "0x63FA020", Offset = "0x63F9020", VA = "0x63FA020")]
	public static uint3x3 operator ~(uint3x3 val)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002192")]
	[Address(RVA = "0x63FA070", Offset = "0x63F9070", VA = "0x63FA070")]
	public static uint3x3 operator &(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002193")]
	[Address(RVA = "0x63FA0D0", Offset = "0x63F90D0", VA = "0x63FA0D0")]
	public static uint3x3 operator &(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002194")]
	[Address(RVA = "0x63FA150", Offset = "0x63F9150", VA = "0x63FA150")]
	public static uint3x3 operator &(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002195")]
	[Address(RVA = "0x63FA1D0", Offset = "0x63F91D0", VA = "0x63FA1D0")]
	public static uint3x3 operator |(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002196")]
	[Address(RVA = "0x63FA230", Offset = "0x63F9230", VA = "0x63FA230")]
	public static uint3x3 operator |(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002197")]
	[Address(RVA = "0x63FA2B0", Offset = "0x63F92B0", VA = "0x63FA2B0")]
	public static uint3x3 operator |(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002198")]
	[Address(RVA = "0x63FA330", Offset = "0x63F9330", VA = "0x63FA330")]
	public static uint3x3 operator ^(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002199")]
	[Address(RVA = "0x63FA390", Offset = "0x63F9390", VA = "0x63FA390")]
	public static uint3x3 operator ^(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600219A")]
	[Address(RVA = "0x63FA410", Offset = "0x63F9410", VA = "0x63FA410")]
	public static uint3x3 operator ^(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600219C")]
	[Address(RVA = "0x63FA4A0", Offset = "0x63F94A0", VA = "0x63FA4A0", Slot = "4")]
	public bool Equals(uint3x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600219D")]
	[Address(RVA = "0x63FA500", Offset = "0x63F9500", VA = "0x63FA500", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600219E")]
	[Address(RVA = "0x63FA5B0", Offset = "0x63F95B0", VA = "0x63FA5B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600219F")]
	[Address(RVA = "0x63FA640", Offset = "0x63F9640", VA = "0x63FA640", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021A0")]
	[Address(RVA = "0x63FA9B0", Offset = "0x63F99B0", VA = "0x63FA9B0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
