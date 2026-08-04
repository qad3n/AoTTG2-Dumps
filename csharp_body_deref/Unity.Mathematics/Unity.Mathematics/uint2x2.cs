// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.uint2x2
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
public struct uint2x2 : IEquatable<uint2x2>, IFormattable
{
	[Token(Token = "0x4000134")]
	[FieldOffset(Offset = "0x0")]
	public uint2 c0;

	[Token(Token = "0x4000135")]
	[FieldOffset(Offset = "0x8")]
	public uint2 c1;

	[Token(Token = "0x4000136")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint2x2 identity;

	[Token(Token = "0x4000137")]
	[FieldOffset(Offset = "0x10")]
	public static readonly uint2x2 zero;

	[Token(Token = "0x170009BA")]
	public unsafe ref uint2 this[int index]
	{
		[Token(Token = "0x6001F47")]
		[Address(RVA = "0x4B24020", Offset = "0x4B24020", VA = "0x4B24020")]
		get
		{
			return ref *(uint2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F02")]
	[Address(RVA = "0x4B23150", Offset = "0x4B23150", VA = "0x4B23150")]
	public uint2x2(uint2 c0, uint2 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F03")]
	[Address(RVA = "0x4B23160", Offset = "0x4B23160", VA = "0x4B23160")]
	public uint2x2(uint m00, uint m01, uint m10, uint m11)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F04")]
	[Address(RVA = "0x4B23180", Offset = "0x4B23180", VA = "0x4B23180")]
	public uint2x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F05")]
	[Address(RVA = "0x4B231A0", Offset = "0x4B231A0", VA = "0x4B231A0")]
	public uint2x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F06")]
	[Address(RVA = "0x4B231C0", Offset = "0x4B231C0", VA = "0x4B231C0")]
	public uint2x2(bool2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F07")]
	[Address(RVA = "0x4B23200", Offset = "0x4B23200", VA = "0x4B23200")]
	public uint2x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F08")]
	[Address(RVA = "0x4B23220", Offset = "0x4B23220", VA = "0x4B23220")]
	public uint2x2(int2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F09")]
	[Address(RVA = "0x4B23230", Offset = "0x4B23230", VA = "0x4B23230")]
	public uint2x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F0A")]
	[Address(RVA = "0x4B23260", Offset = "0x4B23260", VA = "0x4B23260")]
	public uint2x2(float2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F0B")]
	[Address(RVA = "0x4B232C0", Offset = "0x4B232C0", VA = "0x4B232C0")]
	public uint2x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F0C")]
	[Address(RVA = "0x4B232F0", Offset = "0x4B232F0", VA = "0x4B232F0")]
	public uint2x2(double2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F0D")]
	[Address(RVA = "0x4B23370", Offset = "0x4B23370", VA = "0x4B23370")]
	public static implicit operator uint2x2(uint v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F0E")]
	[Address(RVA = "0x4B23380", Offset = "0x4B23380", VA = "0x4B23380")]
	public static explicit operator uint2x2(bool v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F0F")]
	[Address(RVA = "0x4B233A0", Offset = "0x4B233A0", VA = "0x4B233A0")]
	public static explicit operator uint2x2(bool2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F10")]
	[Address(RVA = "0x4B233F0", Offset = "0x4B233F0", VA = "0x4B233F0")]
	public static explicit operator uint2x2(int v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F11")]
	[Address(RVA = "0x4B23400", Offset = "0x4B23400", VA = "0x4B23400")]
	public static explicit operator uint2x2(int2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F12")]
	[Address(RVA = "0x4B23410", Offset = "0x4B23410", VA = "0x4B23410")]
	public static explicit operator uint2x2(float v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F13")]
	[Address(RVA = "0x4B23430", Offset = "0x4B23430", VA = "0x4B23430")]
	public static explicit operator uint2x2(float2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F14")]
	[Address(RVA = "0x4B23490", Offset = "0x4B23490", VA = "0x4B23490")]
	public static explicit operator uint2x2(double v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F15")]
	[Address(RVA = "0x4B234C0", Offset = "0x4B234C0", VA = "0x4B234C0")]
	public static explicit operator uint2x2(double2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F16")]
	[Address(RVA = "0x4B23530", Offset = "0x4B23530", VA = "0x4B23530")]
	public static uint2x2 operator *(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F17")]
	[Address(RVA = "0x4B23570", Offset = "0x4B23570", VA = "0x4B23570")]
	public static uint2x2 operator *(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F18")]
	[Address(RVA = "0x4B235A0", Offset = "0x4B235A0", VA = "0x4B235A0")]
	public static uint2x2 operator *(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F19")]
	[Address(RVA = "0x4B235D0", Offset = "0x4B235D0", VA = "0x4B235D0")]
	public static uint2x2 operator +(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F1A")]
	[Address(RVA = "0x4B23600", Offset = "0x4B23600", VA = "0x4B23600")]
	public static uint2x2 operator +(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F1B")]
	[Address(RVA = "0x4B23630", Offset = "0x4B23630", VA = "0x4B23630")]
	public static uint2x2 operator +(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F1C")]
	[Address(RVA = "0x4B23660", Offset = "0x4B23660", VA = "0x4B23660")]
	public static uint2x2 operator -(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F1D")]
	[Address(RVA = "0x4B23690", Offset = "0x4B23690", VA = "0x4B23690")]
	public static uint2x2 operator -(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F1E")]
	[Address(RVA = "0x4B236C0", Offset = "0x4B236C0", VA = "0x4B236C0")]
	public static uint2x2 operator -(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F1F")]
	[Address(RVA = "0x4B236F0", Offset = "0x4B236F0", VA = "0x4B236F0")]
	public static uint2x2 operator /(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F20")]
	[Address(RVA = "0x4B23740", Offset = "0x4B23740", VA = "0x4B23740")]
	public static uint2x2 operator /(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F21")]
	[Address(RVA = "0x4B23790", Offset = "0x4B23790", VA = "0x4B23790")]
	public static uint2x2 operator /(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F22")]
	[Address(RVA = "0x4B237D0", Offset = "0x4B237D0", VA = "0x4B237D0")]
	public static uint2x2 operator %(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F23")]
	[Address(RVA = "0x4B23820", Offset = "0x4B23820", VA = "0x4B23820")]
	public static uint2x2 operator %(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F24")]
	[Address(RVA = "0x4B23870", Offset = "0x4B23870", VA = "0x4B23870")]
	public static uint2x2 operator %(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F25")]
	[Address(RVA = "0x4B238B0", Offset = "0x4B238B0", VA = "0x4B238B0")]
	public static uint2x2 operator ++(uint2x2 val)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F26")]
	[Address(RVA = "0x4B238F0", Offset = "0x4B238F0", VA = "0x4B238F0")]
	public static uint2x2 operator --(uint2x2 val)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F27")]
	[Address(RVA = "0x4B23930", Offset = "0x4B23930", VA = "0x4B23930")]
	public static bool2x2 operator <(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F28")]
	[Address(RVA = "0x4B23980", Offset = "0x4B23980", VA = "0x4B23980")]
	public static bool2x2 operator <(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F29")]
	[Address(RVA = "0x4B239C0", Offset = "0x4B239C0", VA = "0x4B239C0")]
	public static bool2x2 operator <(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F2A")]
	[Address(RVA = "0x4B23A00", Offset = "0x4B23A00", VA = "0x4B23A00")]
	public static bool2x2 operator <=(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F2B")]
	[Address(RVA = "0x4B23A50", Offset = "0x4B23A50", VA = "0x4B23A50")]
	public static bool2x2 operator <=(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F2C")]
	[Address(RVA = "0x4B23A90", Offset = "0x4B23A90", VA = "0x4B23A90")]
	public static bool2x2 operator <=(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F2D")]
	[Address(RVA = "0x4B23AD0", Offset = "0x4B23AD0", VA = "0x4B23AD0")]
	public static bool2x2 operator >(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F2E")]
	[Address(RVA = "0x4B23B20", Offset = "0x4B23B20", VA = "0x4B23B20")]
	public static bool2x2 operator >(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F2F")]
	[Address(RVA = "0x4B23B60", Offset = "0x4B23B60", VA = "0x4B23B60")]
	public static bool2x2 operator >(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F30")]
	[Address(RVA = "0x4B23BA0", Offset = "0x4B23BA0", VA = "0x4B23BA0")]
	public static bool2x2 operator >=(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F31")]
	[Address(RVA = "0x4B23BF0", Offset = "0x4B23BF0", VA = "0x4B23BF0")]
	public static bool2x2 operator >=(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F32")]
	[Address(RVA = "0x4B23C30", Offset = "0x4B23C30", VA = "0x4B23C30")]
	public static bool2x2 operator >=(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F33")]
	[Address(RVA = "0x4B23C70", Offset = "0x4B23C70", VA = "0x4B23C70")]
	public static uint2x2 operator -(uint2x2 val)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F34")]
	[Address(RVA = "0x4B23CB0", Offset = "0x4B23CB0", VA = "0x4B23CB0")]
	public static uint2x2 operator +(uint2x2 val)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F35")]
	[Address(RVA = "0x4B23CC0", Offset = "0x4B23CC0", VA = "0x4B23CC0")]
	public static uint2x2 operator <<(uint2x2 x, int n)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F36")]
	[Address(RVA = "0x4B23CF0", Offset = "0x4B23CF0", VA = "0x4B23CF0")]
	public static uint2x2 operator >>(uint2x2 x, int n)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F37")]
	[Address(RVA = "0x4B23D20", Offset = "0x4B23D20", VA = "0x4B23D20")]
	public static bool2x2 operator ==(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F38")]
	[Address(RVA = "0x4B23D70", Offset = "0x4B23D70", VA = "0x4B23D70")]
	public static bool2x2 operator ==(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F39")]
	[Address(RVA = "0x4B23DB0", Offset = "0x4B23DB0", VA = "0x4B23DB0")]
	public static bool2x2 operator ==(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F3A")]
	[Address(RVA = "0x4B23DF0", Offset = "0x4B23DF0", VA = "0x4B23DF0")]
	public static bool2x2 operator !=(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F3B")]
	[Address(RVA = "0x4B23E40", Offset = "0x4B23E40", VA = "0x4B23E40")]
	public static bool2x2 operator !=(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F3C")]
	[Address(RVA = "0x4B23E80", Offset = "0x4B23E80", VA = "0x4B23E80")]
	public static bool2x2 operator !=(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F3D")]
	[Address(RVA = "0x4B23EC0", Offset = "0x4B23EC0", VA = "0x4B23EC0")]
	public static uint2x2 operator ~(uint2x2 val)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F3E")]
	[Address(RVA = "0x4B23ED0", Offset = "0x4B23ED0", VA = "0x4B23ED0")]
	public static uint2x2 operator &(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F3F")]
	[Address(RVA = "0x4B23EE0", Offset = "0x4B23EE0", VA = "0x4B23EE0")]
	public static uint2x2 operator &(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F40")]
	[Address(RVA = "0x4B23F10", Offset = "0x4B23F10", VA = "0x4B23F10")]
	public static uint2x2 operator &(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F41")]
	[Address(RVA = "0x4B23F40", Offset = "0x4B23F40", VA = "0x4B23F40")]
	public static uint2x2 operator |(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F42")]
	[Address(RVA = "0x4B23F50", Offset = "0x4B23F50", VA = "0x4B23F50")]
	public static uint2x2 operator |(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F43")]
	[Address(RVA = "0x4B23F80", Offset = "0x4B23F80", VA = "0x4B23F80")]
	public static uint2x2 operator |(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F44")]
	[Address(RVA = "0x4B23FB0", Offset = "0x4B23FB0", VA = "0x4B23FB0")]
	public static uint2x2 operator ^(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F45")]
	[Address(RVA = "0x4B23FC0", Offset = "0x4B23FC0", VA = "0x4B23FC0")]
	public static uint2x2 operator ^(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F46")]
	[Address(RVA = "0x4B23FF0", Offset = "0x4B23FF0", VA = "0x4B23FF0")]
	public static uint2x2 operator ^(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F48")]
	[Address(RVA = "0x4B24030", Offset = "0x4B24030", VA = "0x4B24030", Slot = "4")]
	public bool Equals(uint2x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F49")]
	[Address(RVA = "0x4B24050", Offset = "0x4B24050", VA = "0x4B24050", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F4A")]
	[Address(RVA = "0x4B240D0", Offset = "0x4B240D0", VA = "0x4B240D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F4B")]
	[Address(RVA = "0x4B24130", Offset = "0x4B24130", VA = "0x4B24130", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F4C")]
	[Address(RVA = "0x4B24300", Offset = "0x4B24300", VA = "0x4B24300", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
