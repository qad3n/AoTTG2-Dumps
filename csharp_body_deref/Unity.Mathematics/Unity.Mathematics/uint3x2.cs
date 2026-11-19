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
[Token(Token = "0x2000059")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint3x2 : IEquatable<uint3x2>, IFormattable
{
	[Token(Token = "0x4000153")]
	[FieldOffset(Offset = "0x0")]
	public uint3 c0;

	[Token(Token = "0x4000154")]
	[FieldOffset(Offset = "0xC")]
	public uint3 c1;

	[Token(Token = "0x4000155")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint3x2 zero;

	[Token(Token = "0x17000A33")]
	public unsafe ref uint3 this[int index]
	{
		[Token(Token = "0x6002150")]
		[Address(RVA = "0x63F7750", Offset = "0x63F6750", VA = "0x63F7750")]
		get
		{
			return ref *(uint3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600210B")]
	[Address(RVA = "0x63F5E00", Offset = "0x63F4E00", VA = "0x63F5E00")]
	public uint3x2(uint3 c0, uint3 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600210C")]
	[Address(RVA = "0x63F5E10", Offset = "0x63F4E10", VA = "0x63F5E10")]
	public uint3x2(uint m00, uint m01, uint m10, uint m11, uint m20, uint m21)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600210D")]
	[Address(RVA = "0x63F5E30", Offset = "0x63F4E30", VA = "0x63F5E30")]
	public uint3x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600210E")]
	[Address(RVA = "0x63F5E50", Offset = "0x63F4E50", VA = "0x63F5E50")]
	public uint3x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600210F")]
	[Address(RVA = "0x63F5E70", Offset = "0x63F4E70", VA = "0x63F5E70")]
	public uint3x2(bool3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002110")]
	[Address(RVA = "0x63F5EE0", Offset = "0x63F4EE0", VA = "0x63F5EE0")]
	public uint3x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002111")]
	[Address(RVA = "0x63F5F00", Offset = "0x63F4F00", VA = "0x63F5F00")]
	public uint3x2(int3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002112")]
	[Address(RVA = "0x63F5F20", Offset = "0x63F4F20", VA = "0x63F5F20")]
	public uint3x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002113")]
	[Address(RVA = "0x63F5F50", Offset = "0x63F4F50", VA = "0x63F5F50")]
	public uint3x2(float3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002114")]
	[Address(RVA = "0x63F5FF0", Offset = "0x63F4FF0", VA = "0x63F5FF0")]
	public uint3x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002115")]
	[Address(RVA = "0x63F6020", Offset = "0x63F5020", VA = "0x63F6020")]
	public uint3x2(double3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002116")]
	[Address(RVA = "0x63F60D0", Offset = "0x63F50D0", VA = "0x63F60D0")]
	public static implicit operator uint3x2(uint v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002117")]
	[Address(RVA = "0x63F60F0", Offset = "0x63F50F0", VA = "0x63F60F0")]
	public static explicit operator uint3x2(bool v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002118")]
	[Address(RVA = "0x63F6120", Offset = "0x63F5120", VA = "0x63F6120")]
	public static explicit operator uint3x2(bool3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002119")]
	[Address(RVA = "0x63F6190", Offset = "0x63F5190", VA = "0x63F6190")]
	public static explicit operator uint3x2(int v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211A")]
	[Address(RVA = "0x63F61B0", Offset = "0x63F51B0", VA = "0x63F61B0")]
	public static explicit operator uint3x2(int3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211B")]
	[Address(RVA = "0x63F61E0", Offset = "0x63F51E0", VA = "0x63F61E0")]
	public static explicit operator uint3x2(float v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211C")]
	[Address(RVA = "0x63F6210", Offset = "0x63F5210", VA = "0x63F6210")]
	public static explicit operator uint3x2(float3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211D")]
	[Address(RVA = "0x63F62B0", Offset = "0x63F52B0", VA = "0x63F62B0")]
	public static explicit operator uint3x2(double v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211E")]
	[Address(RVA = "0x63F62E0", Offset = "0x63F52E0", VA = "0x63F62E0")]
	public static explicit operator uint3x2(double3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211F")]
	[Address(RVA = "0x63F6390", Offset = "0x63F5390", VA = "0x63F6390")]
	public static uint3x2 operator *(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002120")]
	[Address(RVA = "0x63F6400", Offset = "0x63F5400", VA = "0x63F6400")]
	public static uint3x2 operator *(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002121")]
	[Address(RVA = "0x63F6460", Offset = "0x63F5460", VA = "0x63F6460")]
	public static uint3x2 operator *(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002122")]
	[Address(RVA = "0x63F64C0", Offset = "0x63F54C0", VA = "0x63F64C0")]
	public static uint3x2 operator +(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002123")]
	[Address(RVA = "0x63F6530", Offset = "0x63F5530", VA = "0x63F6530")]
	public static uint3x2 operator +(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002124")]
	[Address(RVA = "0x63F6580", Offset = "0x63F5580", VA = "0x63F6580")]
	public static uint3x2 operator +(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002125")]
	[Address(RVA = "0x63F65D0", Offset = "0x63F55D0", VA = "0x63F65D0")]
	public static uint3x2 operator -(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002126")]
	[Address(RVA = "0x63F6640", Offset = "0x63F5640", VA = "0x63F6640")]
	public static uint3x2 operator -(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002127")]
	[Address(RVA = "0x63F66A0", Offset = "0x63F56A0", VA = "0x63F66A0")]
	public static uint3x2 operator -(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002128")]
	[Address(RVA = "0x63F66F0", Offset = "0x63F56F0", VA = "0x63F66F0")]
	public static uint3x2 operator /(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002129")]
	[Address(RVA = "0x63F6780", Offset = "0x63F5780", VA = "0x63F6780")]
	public static uint3x2 operator /(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212A")]
	[Address(RVA = "0x63F6800", Offset = "0x63F5800", VA = "0x63F6800")]
	public static uint3x2 operator /(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212B")]
	[Address(RVA = "0x63F6870", Offset = "0x63F5870", VA = "0x63F6870")]
	public static uint3x2 operator %(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212C")]
	[Address(RVA = "0x63F6900", Offset = "0x63F5900", VA = "0x63F6900")]
	public static uint3x2 operator %(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212D")]
	[Address(RVA = "0x63F6980", Offset = "0x63F5980", VA = "0x63F6980")]
	public static uint3x2 operator %(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212E")]
	[Address(RVA = "0x63F69F0", Offset = "0x63F59F0", VA = "0x63F69F0")]
	public static uint3x2 operator ++(uint3x2 val)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212F")]
	[Address(RVA = "0x63F6A50", Offset = "0x63F5A50", VA = "0x63F6A50")]
	public static uint3x2 operator --(uint3x2 val)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002130")]
	[Address(RVA = "0x63F6AA0", Offset = "0x63F5AA0", VA = "0x63F6AA0")]
	public static bool3x2 operator <(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002131")]
	[Address(RVA = "0x63F6B30", Offset = "0x63F5B30", VA = "0x63F6B30")]
	public static bool3x2 operator <(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002132")]
	[Address(RVA = "0x63F6BA0", Offset = "0x63F5BA0", VA = "0x63F6BA0")]
	public static bool3x2 operator <(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002133")]
	[Address(RVA = "0x63F6C10", Offset = "0x63F5C10", VA = "0x63F6C10")]
	public static bool3x2 operator <=(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002134")]
	[Address(RVA = "0x63F6CA0", Offset = "0x63F5CA0", VA = "0x63F6CA0")]
	public static bool3x2 operator <=(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002135")]
	[Address(RVA = "0x63F6D10", Offset = "0x63F5D10", VA = "0x63F6D10")]
	public static bool3x2 operator <=(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002136")]
	[Address(RVA = "0x63F6D80", Offset = "0x63F5D80", VA = "0x63F6D80")]
	public static bool3x2 operator >(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002137")]
	[Address(RVA = "0x63F6E10", Offset = "0x63F5E10", VA = "0x63F6E10")]
	public static bool3x2 operator >(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002138")]
	[Address(RVA = "0x63F6E80", Offset = "0x63F5E80", VA = "0x63F6E80")]
	public static bool3x2 operator >(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002139")]
	[Address(RVA = "0x63F6EF0", Offset = "0x63F5EF0", VA = "0x63F6EF0")]
	public static bool3x2 operator >=(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213A")]
	[Address(RVA = "0x63F6F80", Offset = "0x63F5F80", VA = "0x63F6F80")]
	public static bool3x2 operator >=(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213B")]
	[Address(RVA = "0x63F6FF0", Offset = "0x63F5FF0", VA = "0x63F6FF0")]
	public static bool3x2 operator >=(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213C")]
	[Address(RVA = "0x63F7060", Offset = "0x63F6060", VA = "0x63F7060")]
	public static uint3x2 operator -(uint3x2 val)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213D")]
	[Address(RVA = "0x63F70B0", Offset = "0x63F60B0", VA = "0x63F70B0")]
	public static uint3x2 operator +(uint3x2 val)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213E")]
	[Address(RVA = "0x63F70E0", Offset = "0x63F60E0", VA = "0x63F70E0")]
	public static uint3x2 operator <<(uint3x2 x, int n)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213F")]
	[Address(RVA = "0x63F7140", Offset = "0x63F6140", VA = "0x63F7140")]
	public static uint3x2 operator >>(uint3x2 x, int n)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002140")]
	[Address(RVA = "0x63F71A0", Offset = "0x63F61A0", VA = "0x63F71A0")]
	public static bool3x2 operator ==(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002141")]
	[Address(RVA = "0x63F7230", Offset = "0x63F6230", VA = "0x63F7230")]
	public static bool3x2 operator ==(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002142")]
	[Address(RVA = "0x63F72A0", Offset = "0x63F62A0", VA = "0x63F72A0")]
	public static bool3x2 operator ==(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002143")]
	[Address(RVA = "0x63F7310", Offset = "0x63F6310", VA = "0x63F7310")]
	public static bool3x2 operator !=(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002144")]
	[Address(RVA = "0x63F73A0", Offset = "0x63F63A0", VA = "0x63F73A0")]
	public static bool3x2 operator !=(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002145")]
	[Address(RVA = "0x63F7410", Offset = "0x63F6410", VA = "0x63F7410")]
	public static bool3x2 operator !=(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002146")]
	[Address(RVA = "0x63F7480", Offset = "0x63F6480", VA = "0x63F7480")]
	public static uint3x2 operator ~(uint3x2 val)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002147")]
	[Address(RVA = "0x63F74B0", Offset = "0x63F64B0", VA = "0x63F74B0")]
	public static uint3x2 operator &(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002148")]
	[Address(RVA = "0x63F74F0", Offset = "0x63F64F0", VA = "0x63F74F0")]
	public static uint3x2 operator &(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002149")]
	[Address(RVA = "0x63F7540", Offset = "0x63F6540", VA = "0x63F7540")]
	public static uint3x2 operator &(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600214A")]
	[Address(RVA = "0x63F7590", Offset = "0x63F6590", VA = "0x63F7590")]
	public static uint3x2 operator |(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600214B")]
	[Address(RVA = "0x63F75D0", Offset = "0x63F65D0", VA = "0x63F75D0")]
	public static uint3x2 operator |(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600214C")]
	[Address(RVA = "0x63F7620", Offset = "0x63F6620", VA = "0x63F7620")]
	public static uint3x2 operator |(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600214D")]
	[Address(RVA = "0x63F7670", Offset = "0x63F6670", VA = "0x63F7670")]
	public static uint3x2 operator ^(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600214E")]
	[Address(RVA = "0x63F76B0", Offset = "0x63F66B0", VA = "0x63F76B0")]
	public static uint3x2 operator ^(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600214F")]
	[Address(RVA = "0x63F7700", Offset = "0x63F6700", VA = "0x63F7700")]
	public static uint3x2 operator ^(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002151")]
	[Address(RVA = "0x63F7760", Offset = "0x63F6760", VA = "0x63F7760", Slot = "4")]
	public bool Equals(uint3x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002152")]
	[Address(RVA = "0x63F77A0", Offset = "0x63F67A0", VA = "0x63F77A0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002153")]
	[Address(RVA = "0x63F7830", Offset = "0x63F6830", VA = "0x63F7830", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002154")]
	[Address(RVA = "0x63F7890", Offset = "0x63F6890", VA = "0x63F7890", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002155")]
	[Address(RVA = "0x63F7B10", Offset = "0x63F6B10", VA = "0x63F7B10", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
