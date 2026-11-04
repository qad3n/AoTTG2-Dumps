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
		[Address(RVA = "0x841BD0", Offset = "0x8401D0", VA = "0x180841BD0")]
		get
		{
			return ref *(uint3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021A2")]
	[Address(RVA = "0x2A31E20", Offset = "0x2A30420", VA = "0x182A31E20")]
	public uint3x4(uint3 c0, uint3 c1, uint3 c2, uint3 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021A3")]
	[Address(RVA = "0x2A31CC0", Offset = "0x2A302C0", VA = "0x182A31CC0")]
	public uint3x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13, uint m20, uint m21, uint m22, uint m23)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021A4")]
	[Address(RVA = "0x2A31C90", Offset = "0x2A30290", VA = "0x182A31C90")]
	public uint3x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021A5")]
	[Address(RVA = "0x2A31C30", Offset = "0x2A30230", VA = "0x182A31C30")]
	public uint3x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021A6")]
	[Address(RVA = "0x2A31D90", Offset = "0x2A30390", VA = "0x182A31D90")]
	public uint3x4(bool3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021A7")]
	[Address(RVA = "0x2A31C90", Offset = "0x2A30290", VA = "0x182A31C90")]
	public uint3x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021A8")]
	[Address(RVA = "0x2A31D10", Offset = "0x2A30310", VA = "0x182A31D10")]
	public uint3x4(int3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021A9")]
	[Address(RVA = "0x29CE6B0", Offset = "0x29CCCB0", VA = "0x1829CE6B0")]
	public uint3x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021AA")]
	[Address(RVA = "0x29CE870", Offset = "0x29CCE70", VA = "0x1829CE870")]
	public uint3x4(float3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021AB")]
	[Address(RVA = "0x29CE790", Offset = "0x29CCD90", VA = "0x1829CE790")]
	public uint3x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021AC")]
	[Address(RVA = "0x29CE560", Offset = "0x29CCB60", VA = "0x1829CE560")]
	public uint3x4(double3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021AD")]
	[Address(RVA = "0x29EB680", Offset = "0x29E9C80", VA = "0x1829EB680")]
	public static implicit operator uint3x4(uint v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021AE")]
	[Address(RVA = "0x29EB4A0", Offset = "0x29E9AA0", VA = "0x1829EB4A0")]
	public static explicit operator uint3x4(bool v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021AF")]
	[Address(RVA = "0x29EB590", Offset = "0x29E9B90", VA = "0x1829EB590")]
	public static explicit operator uint3x4(bool3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021B0")]
	[Address(RVA = "0x29EB680", Offset = "0x29E9C80", VA = "0x1829EB680")]
	public static explicit operator uint3x4(int v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021B1")]
	[Address(RVA = "0x29EB860", Offset = "0x29E9E60", VA = "0x1829EB860")]
	public static explicit operator uint3x4(int3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021B2")]
	[Address(RVA = "0x2A32C40", Offset = "0x2A31240", VA = "0x182A32C40")]
	public static explicit operator uint3x4(float v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021B3")]
	[Address(RVA = "0x2A0F470", Offset = "0x2A0DA70", VA = "0x182A0F470")]
	public static explicit operator uint3x4(float3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021B4")]
	[Address(RVA = "0x2A32C10", Offset = "0x2A31210", VA = "0x182A32C10")]
	public static explicit operator uint3x4(double v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021B5")]
	[Address(RVA = "0x2A0F400", Offset = "0x2A0DA00", VA = "0x182A0F400")]
	public static explicit operator uint3x4(double3x4 v)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021B6")]
	[Address(RVA = "0x2A33C40", Offset = "0x2A32240", VA = "0x182A33C40")]
	public static uint3x4 operator *(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021B7")]
	[Address(RVA = "0x2A33D10", Offset = "0x2A32310", VA = "0x182A33D10")]
	public static uint3x4 operator *(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021B8")]
	[Address(RVA = "0x2A33B80", Offset = "0x2A32180", VA = "0x182A33B80")]
	public static uint3x4 operator *(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021B9")]
	[Address(RVA = "0x2A31E70", Offset = "0x2A30470", VA = "0x182A31E70")]
	public static uint3x4 operator +(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021BA")]
	[Address(RVA = "0x2A31F30", Offset = "0x2A30530", VA = "0x182A31F30")]
	public static uint3x4 operator +(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021BB")]
	[Address(RVA = "0x2A32010", Offset = "0x2A30610", VA = "0x182A32010")]
	public static uint3x4 operator +(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021BC")]
	[Address(RVA = "0x2A340A0", Offset = "0x2A326A0", VA = "0x182A340A0")]
	public static uint3x4 operator -(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021BD")]
	[Address(RVA = "0x2A33F00", Offset = "0x2A32500", VA = "0x182A33F00")]
	public static uint3x4 operator -(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021BE")]
	[Address(RVA = "0x2A33FD0", Offset = "0x2A325D0", VA = "0x182A33FD0")]
	public static uint3x4 operator -(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021BF")]
	[Address(RVA = "0x2A32730", Offset = "0x2A30D30", VA = "0x182A32730")]
	public static uint3x4 operator /(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021C0")]
	[Address(RVA = "0x2A32650", Offset = "0x2A30C50", VA = "0x182A32650")]
	public static uint3x4 operator /(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021C1")]
	[Address(RVA = "0x2A32570", Offset = "0x2A30B70", VA = "0x182A32570")]
	public static uint3x4 operator /(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021C2")]
	[Address(RVA = "0x2A338E0", Offset = "0x2A31EE0", VA = "0x182A338E0")]
	public static uint3x4 operator %(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021C3")]
	[Address(RVA = "0x2A339C0", Offset = "0x2A31FC0", VA = "0x182A339C0")]
	public static uint3x4 operator %(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021C4")]
	[Address(RVA = "0x2A33AA0", Offset = "0x2A320A0", VA = "0x182A33AA0")]
	public static uint3x4 operator %(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021C5")]
	[Address(RVA = "0x2A330D0", Offset = "0x2A316D0", VA = "0x182A330D0")]
	public static uint3x4 operator ++(uint3x4 val)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021C6")]
	[Address(RVA = "0x2A32490", Offset = "0x2A30A90", VA = "0x182A32490")]
	public static uint3x4 operator --(uint3x4 val)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021C7")]
	[Address(RVA = "0x2A33810", Offset = "0x2A31E10", VA = "0x182A33810")]
	public static bool3x4 operator <(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021C8")]
	[Address(RVA = "0x2A336B0", Offset = "0x2A31CB0", VA = "0x182A336B0")]
	public static bool3x4 operator <(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021C9")]
	[Address(RVA = "0x2A33760", Offset = "0x2A31D60", VA = "0x182A33760")]
	public static bool3x4 operator <(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021CA")]
	[Address(RVA = "0x2A33480", Offset = "0x2A31A80", VA = "0x182A33480")]
	public static bool3x4 operator <=(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021CB")]
	[Address(RVA = "0x2A33550", Offset = "0x2A31B50", VA = "0x182A33550")]
	public static bool3x4 operator <=(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021CC")]
	[Address(RVA = "0x2A33600", Offset = "0x2A31C00", VA = "0x182A33600")]
	public static bool3x4 operator <=(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021CD")]
	[Address(RVA = "0x2A32EA0", Offset = "0x2A314A0", VA = "0x182A32EA0")]
	public static bool3x4 operator >(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021CE")]
	[Address(RVA = "0x2A32F70", Offset = "0x2A31570", VA = "0x182A32F70")]
	public static bool3x4 operator >(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021CF")]
	[Address(RVA = "0x2A33020", Offset = "0x2A31620", VA = "0x182A33020")]
	public static bool3x4 operator >(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021D0")]
	[Address(RVA = "0x2A32D20", Offset = "0x2A31320", VA = "0x182A32D20")]
	public static bool3x4 operator >=(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021D1")]
	[Address(RVA = "0x2A32C70", Offset = "0x2A31270", VA = "0x182A32C70")]
	public static bool3x4 operator >=(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021D2")]
	[Address(RVA = "0x2A32DF0", Offset = "0x2A313F0", VA = "0x182A32DF0")]
	public static bool3x4 operator >=(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021D3")]
	[Address(RVA = "0x2A34160", Offset = "0x2A32760", VA = "0x182A34160")]
	public static uint3x4 operator -(uint3x4 val)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021D4")]
	[Address(RVA = "0x2A341F0", Offset = "0x2A327F0", VA = "0x182A341F0")]
	public static uint3x4 operator +(uint3x4 val)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021D5")]
	[Address(RVA = "0x2A333E0", Offset = "0x2A319E0", VA = "0x182A333E0")]
	public static uint3x4 operator <<(uint3x4 x, int n)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021D6")]
	[Address(RVA = "0x2A33E50", Offset = "0x2A32450", VA = "0x182A33E50")]
	public static uint3x4 operator >>(uint3x4 x, int n)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021D7")]
	[Address(RVA = "0x2A328C0", Offset = "0x2A30EC0", VA = "0x182A328C0")]
	public static bool3x4 operator ==(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021D8")]
	[Address(RVA = "0x2A32810", Offset = "0x2A30E10", VA = "0x182A32810")]
	public static bool3x4 operator ==(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021D9")]
	[Address(RVA = "0x2A32990", Offset = "0x2A30F90", VA = "0x182A32990")]
	public static bool3x4 operator ==(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021DA")]
	[Address(RVA = "0x2A331B0", Offset = "0x2A317B0", VA = "0x182A331B0")]
	public static bool3x4 operator !=(uint3x4 lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021DB")]
	[Address(RVA = "0x2A33330", Offset = "0x2A31930", VA = "0x182A33330")]
	public static bool3x4 operator !=(uint3x4 lhs, uint rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021DC")]
	[Address(RVA = "0x2A33280", Offset = "0x2A31880", VA = "0x182A33280")]
	public static bool3x4 operator !=(uint lhs, uint3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021DD")]
	[Address(RVA = "0x2A33DD0", Offset = "0x2A323D0", VA = "0x182A33DD0")]
	public static uint3x4 operator ~(uint3x4 val)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021DE")]
	[Address(RVA = "0x2A32230", Offset = "0x2A30830", VA = "0x182A32230")]
	public static uint3x4 operator &(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021DF")]
	[Address(RVA = "0x2A320F0", Offset = "0x2A306F0", VA = "0x182A320F0")]
	public static uint3x4 operator &(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021E0")]
	[Address(RVA = "0x2A32190", Offset = "0x2A30790", VA = "0x182A32190")]
	public static uint3x4 operator &(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021E1")]
	[Address(RVA = "0x2A32400", Offset = "0x2A30A00", VA = "0x182A32400")]
	public static uint3x4 operator |(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021E2")]
	[Address(RVA = "0x2A322C0", Offset = "0x2A308C0", VA = "0x182A322C0")]
	public static uint3x4 operator |(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021E3")]
	[Address(RVA = "0x2A32360", Offset = "0x2A30960", VA = "0x182A32360")]
	public static uint3x4 operator |(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021E4")]
	[Address(RVA = "0x2A32B80", Offset = "0x2A31180", VA = "0x182A32B80")]
	public static uint3x4 operator ^(uint3x4 lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021E5")]
	[Address(RVA = "0x2A32A40", Offset = "0x2A31040", VA = "0x182A32A40")]
	public static uint3x4 operator ^(uint3x4 lhs, uint rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021E6")]
	[Address(RVA = "0x2A32AE0", Offset = "0x2A310E0", VA = "0x182A32AE0")]
	public static uint3x4 operator ^(uint lhs, uint3x4 rhs)
	{
		return default(uint3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021E8")]
	[Address(RVA = "0x2A310C0", Offset = "0x2A2F6C0", VA = "0x182A310C0", Slot = "4")]
	public bool Equals(uint3x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60021E9")]
	[Address(RVA = "0x2A30F90", Offset = "0x2A2F590", VA = "0x182A30F90", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021EA")]
	[Address(RVA = "0x2A31170", Offset = "0x2A2F770", VA = "0x182A31170", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021EB")]
	[Address(RVA = "0x2A31720", Offset = "0x2A2FD20", VA = "0x182A31720", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021EC")]
	[Address(RVA = "0x2A31250", Offset = "0x2A2F850", VA = "0x182A31250", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
