// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.uint3x2
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
public struct uint3x2 : IEquatable<uint3x2>, IFormattable
{
	[Token(Token = "0x4000148")]
	[FieldOffset(Offset = "0x0")]
	public uint3 c0;

	[Token(Token = "0x4000149")]
	[FieldOffset(Offset = "0xC")]
	public uint3 c1;

	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint3x2 zero;

	[Token(Token = "0x17000A33")]
	public unsafe ref uint3 this[int index]
	{
		[Token(Token = "0x60020F9")]
		[Address(RVA = "0x4B2C1D0", Offset = "0x4B2C1D0", VA = "0x4B2C1D0")]
		get
		{
			return ref *(uint3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020B4")]
	[Address(RVA = "0x4B2A880", Offset = "0x4B2A880", VA = "0x4B2A880")]
	public uint3x2(uint3 c0, uint3 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020B5")]
	[Address(RVA = "0x4B2A890", Offset = "0x4B2A890", VA = "0x4B2A890")]
	public uint3x2(uint m00, uint m01, uint m10, uint m11, uint m20, uint m21)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020B6")]
	[Address(RVA = "0x4B2A8B0", Offset = "0x4B2A8B0", VA = "0x4B2A8B0")]
	public uint3x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020B7")]
	[Address(RVA = "0x4B2A8D0", Offset = "0x4B2A8D0", VA = "0x4B2A8D0")]
	public uint3x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020B8")]
	[Address(RVA = "0x4B2A8F0", Offset = "0x4B2A8F0", VA = "0x4B2A8F0")]
	public uint3x2(bool3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020B9")]
	[Address(RVA = "0x4B2A950", Offset = "0x4B2A950", VA = "0x4B2A950")]
	public uint3x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020BA")]
	[Address(RVA = "0x4B2A970", Offset = "0x4B2A970", VA = "0x4B2A970")]
	public uint3x2(int3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020BB")]
	[Address(RVA = "0x4B2A990", Offset = "0x4B2A990", VA = "0x4B2A990")]
	public uint3x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020BC")]
	[Address(RVA = "0x4B2A9C0", Offset = "0x4B2A9C0", VA = "0x4B2A9C0")]
	public uint3x2(float3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020BD")]
	[Address(RVA = "0x4B2AA60", Offset = "0x4B2AA60", VA = "0x4B2AA60")]
	public uint3x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020BE")]
	[Address(RVA = "0x4B2AA90", Offset = "0x4B2AA90", VA = "0x4B2AA90")]
	public uint3x2(double3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020BF")]
	[Address(RVA = "0x4B2AB40", Offset = "0x4B2AB40", VA = "0x4B2AB40")]
	public static implicit operator uint3x2(uint v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020C0")]
	[Address(RVA = "0x4B2AB60", Offset = "0x4B2AB60", VA = "0x4B2AB60")]
	public static explicit operator uint3x2(bool v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020C1")]
	[Address(RVA = "0x4B2AB90", Offset = "0x4B2AB90", VA = "0x4B2AB90")]
	public static explicit operator uint3x2(bool3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020C2")]
	[Address(RVA = "0x4B2ABF0", Offset = "0x4B2ABF0", VA = "0x4B2ABF0")]
	public static explicit operator uint3x2(int v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020C3")]
	[Address(RVA = "0x4B2AC10", Offset = "0x4B2AC10", VA = "0x4B2AC10")]
	public static explicit operator uint3x2(int3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020C4")]
	[Address(RVA = "0x4B2AC40", Offset = "0x4B2AC40", VA = "0x4B2AC40")]
	public static explicit operator uint3x2(float v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020C5")]
	[Address(RVA = "0x4B2AC70", Offset = "0x4B2AC70", VA = "0x4B2AC70")]
	public static explicit operator uint3x2(float3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020C6")]
	[Address(RVA = "0x4B2AD10", Offset = "0x4B2AD10", VA = "0x4B2AD10")]
	public static explicit operator uint3x2(double v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020C7")]
	[Address(RVA = "0x4B2AD40", Offset = "0x4B2AD40", VA = "0x4B2AD40")]
	public static explicit operator uint3x2(double3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020C8")]
	[Address(RVA = "0x4B2ADF0", Offset = "0x4B2ADF0", VA = "0x4B2ADF0")]
	public static uint3x2 operator *(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020C9")]
	[Address(RVA = "0x4B2AE60", Offset = "0x4B2AE60", VA = "0x4B2AE60")]
	public static uint3x2 operator *(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020CA")]
	[Address(RVA = "0x4B2AEC0", Offset = "0x4B2AEC0", VA = "0x4B2AEC0")]
	public static uint3x2 operator *(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020CB")]
	[Address(RVA = "0x4B2AF20", Offset = "0x4B2AF20", VA = "0x4B2AF20")]
	public static uint3x2 operator +(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020CC")]
	[Address(RVA = "0x4B2AF90", Offset = "0x4B2AF90", VA = "0x4B2AF90")]
	public static uint3x2 operator +(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020CD")]
	[Address(RVA = "0x4B2AFE0", Offset = "0x4B2AFE0", VA = "0x4B2AFE0")]
	public static uint3x2 operator +(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020CE")]
	[Address(RVA = "0x4B2B030", Offset = "0x4B2B030", VA = "0x4B2B030")]
	public static uint3x2 operator -(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020CF")]
	[Address(RVA = "0x4B2B0A0", Offset = "0x4B2B0A0", VA = "0x4B2B0A0")]
	public static uint3x2 operator -(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020D0")]
	[Address(RVA = "0x4B2B100", Offset = "0x4B2B100", VA = "0x4B2B100")]
	public static uint3x2 operator -(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020D1")]
	[Address(RVA = "0x4B2B150", Offset = "0x4B2B150", VA = "0x4B2B150")]
	public static uint3x2 operator /(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020D2")]
	[Address(RVA = "0x4B2B1E0", Offset = "0x4B2B1E0", VA = "0x4B2B1E0")]
	public static uint3x2 operator /(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020D3")]
	[Address(RVA = "0x4B2B260", Offset = "0x4B2B260", VA = "0x4B2B260")]
	public static uint3x2 operator /(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020D4")]
	[Address(RVA = "0x4B2B2D0", Offset = "0x4B2B2D0", VA = "0x4B2B2D0")]
	public static uint3x2 operator %(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020D5")]
	[Address(RVA = "0x4B2B360", Offset = "0x4B2B360", VA = "0x4B2B360")]
	public static uint3x2 operator %(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020D6")]
	[Address(RVA = "0x4B2B3E0", Offset = "0x4B2B3E0", VA = "0x4B2B3E0")]
	public static uint3x2 operator %(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020D7")]
	[Address(RVA = "0x4B2B450", Offset = "0x4B2B450", VA = "0x4B2B450")]
	public static uint3x2 operator ++(uint3x2 val)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020D8")]
	[Address(RVA = "0x4B2B4C0", Offset = "0x4B2B4C0", VA = "0x4B2B4C0")]
	public static uint3x2 operator --(uint3x2 val)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020D9")]
	[Address(RVA = "0x4B2B520", Offset = "0x4B2B520", VA = "0x4B2B520")]
	public static bool3x2 operator <(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020DA")]
	[Address(RVA = "0x4B2B5B0", Offset = "0x4B2B5B0", VA = "0x4B2B5B0")]
	public static bool3x2 operator <(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020DB")]
	[Address(RVA = "0x4B2B620", Offset = "0x4B2B620", VA = "0x4B2B620")]
	public static bool3x2 operator <(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020DC")]
	[Address(RVA = "0x4B2B690", Offset = "0x4B2B690", VA = "0x4B2B690")]
	public static bool3x2 operator <=(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020DD")]
	[Address(RVA = "0x4B2B720", Offset = "0x4B2B720", VA = "0x4B2B720")]
	public static bool3x2 operator <=(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020DE")]
	[Address(RVA = "0x4B2B790", Offset = "0x4B2B790", VA = "0x4B2B790")]
	public static bool3x2 operator <=(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020DF")]
	[Address(RVA = "0x4B2B800", Offset = "0x4B2B800", VA = "0x4B2B800")]
	public static bool3x2 operator >(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020E0")]
	[Address(RVA = "0x4B2B890", Offset = "0x4B2B890", VA = "0x4B2B890")]
	public static bool3x2 operator >(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020E1")]
	[Address(RVA = "0x4B2B900", Offset = "0x4B2B900", VA = "0x4B2B900")]
	public static bool3x2 operator >(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020E2")]
	[Address(RVA = "0x4B2B970", Offset = "0x4B2B970", VA = "0x4B2B970")]
	public static bool3x2 operator >=(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020E3")]
	[Address(RVA = "0x4B2BA00", Offset = "0x4B2BA00", VA = "0x4B2BA00")]
	public static bool3x2 operator >=(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020E4")]
	[Address(RVA = "0x4B2BA70", Offset = "0x4B2BA70", VA = "0x4B2BA70")]
	public static bool3x2 operator >=(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020E5")]
	[Address(RVA = "0x4B2BAE0", Offset = "0x4B2BAE0", VA = "0x4B2BAE0")]
	public static uint3x2 operator -(uint3x2 val)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020E6")]
	[Address(RVA = "0x4B2BB30", Offset = "0x4B2BB30", VA = "0x4B2BB30")]
	public static uint3x2 operator +(uint3x2 val)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020E7")]
	[Address(RVA = "0x4B2BB60", Offset = "0x4B2BB60", VA = "0x4B2BB60")]
	public static uint3x2 operator <<(uint3x2 x, int n)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020E8")]
	[Address(RVA = "0x4B2BBC0", Offset = "0x4B2BBC0", VA = "0x4B2BBC0")]
	public static uint3x2 operator >>(uint3x2 x, int n)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020E9")]
	[Address(RVA = "0x4B2BC20", Offset = "0x4B2BC20", VA = "0x4B2BC20")]
	public static bool3x2 operator ==(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020EA")]
	[Address(RVA = "0x4B2BCB0", Offset = "0x4B2BCB0", VA = "0x4B2BCB0")]
	public static bool3x2 operator ==(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020EB")]
	[Address(RVA = "0x4B2BD20", Offset = "0x4B2BD20", VA = "0x4B2BD20")]
	public static bool3x2 operator ==(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020EC")]
	[Address(RVA = "0x4B2BD90", Offset = "0x4B2BD90", VA = "0x4B2BD90")]
	public static bool3x2 operator !=(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020ED")]
	[Address(RVA = "0x4B2BE20", Offset = "0x4B2BE20", VA = "0x4B2BE20")]
	public static bool3x2 operator !=(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020EE")]
	[Address(RVA = "0x4B2BE90", Offset = "0x4B2BE90", VA = "0x4B2BE90")]
	public static bool3x2 operator !=(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020EF")]
	[Address(RVA = "0x4B2BF00", Offset = "0x4B2BF00", VA = "0x4B2BF00")]
	public static uint3x2 operator ~(uint3x2 val)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020F0")]
	[Address(RVA = "0x4B2BF30", Offset = "0x4B2BF30", VA = "0x4B2BF30")]
	public static uint3x2 operator &(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020F1")]
	[Address(RVA = "0x4B2BF70", Offset = "0x4B2BF70", VA = "0x4B2BF70")]
	public static uint3x2 operator &(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020F2")]
	[Address(RVA = "0x4B2BFC0", Offset = "0x4B2BFC0", VA = "0x4B2BFC0")]
	public static uint3x2 operator &(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020F3")]
	[Address(RVA = "0x4B2C010", Offset = "0x4B2C010", VA = "0x4B2C010")]
	public static uint3x2 operator |(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020F4")]
	[Address(RVA = "0x4B2C050", Offset = "0x4B2C050", VA = "0x4B2C050")]
	public static uint3x2 operator |(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020F5")]
	[Address(RVA = "0x4B2C0A0", Offset = "0x4B2C0A0", VA = "0x4B2C0A0")]
	public static uint3x2 operator |(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020F6")]
	[Address(RVA = "0x4B2C0F0", Offset = "0x4B2C0F0", VA = "0x4B2C0F0")]
	public static uint3x2 operator ^(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020F7")]
	[Address(RVA = "0x4B2C130", Offset = "0x4B2C130", VA = "0x4B2C130")]
	public static uint3x2 operator ^(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020F8")]
	[Address(RVA = "0x4B2C180", Offset = "0x4B2C180", VA = "0x4B2C180")]
	public static uint3x2 operator ^(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020FA")]
	[Address(RVA = "0x4B2C1E0", Offset = "0x4B2C1E0", VA = "0x4B2C1E0", Slot = "4")]
	public bool Equals(uint3x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60020FB")]
	[Address(RVA = "0x4B2C220", Offset = "0x4B2C220", VA = "0x4B2C220", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020FC")]
	[Address(RVA = "0x4B2C2B0", Offset = "0x4B2C2B0", VA = "0x4B2C2B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020FD")]
	[Address(RVA = "0x4B2C320", Offset = "0x4B2C320", VA = "0x4B2C320", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020FE")]
	[Address(RVA = "0x4B2C590", Offset = "0x4B2C590", VA = "0x4B2C590", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
