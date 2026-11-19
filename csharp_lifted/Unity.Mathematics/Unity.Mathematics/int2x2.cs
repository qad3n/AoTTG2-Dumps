// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.int2x2
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
[Token(Token = "0x2000041")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int2x2 : IEquatable<int2x2>, IFormattable
{
	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x0")]
	public int2 c0;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x8")]
	public int2 c1;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int2x2 identity;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x10")]
	public static readonly int2x2 zero;

	[Token(Token = "0x170007CD")]
	public unsafe ref int2 this[int index]
	{
		[Token(Token = "0x6001951")]
		[Address(RVA = "0x6473490", Offset = "0x6472490", VA = "0x6473490")]
		get
		{
			return ref *(int2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600190C")]
	[Address(RVA = "0x6472740", Offset = "0x6471740", VA = "0x6472740")]
	public int2x2(int2 c0, int2 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600190D")]
	[Address(RVA = "0x6472750", Offset = "0x6471750", VA = "0x6472750")]
	public int2x2(int m00, int m01, int m10, int m11)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600190E")]
	[Address(RVA = "0x6472770", Offset = "0x6471770", VA = "0x6472770")]
	public int2x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600190F")]
	[Address(RVA = "0x6472790", Offset = "0x6471790", VA = "0x6472790")]
	public int2x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001910")]
	[Address(RVA = "0x64727B0", Offset = "0x64717B0", VA = "0x64727B0")]
	public int2x2(bool2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001911")]
	[Address(RVA = "0x64727F0", Offset = "0x64717F0", VA = "0x64727F0")]
	public int2x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001912")]
	[Address(RVA = "0x6472810", Offset = "0x6471810", VA = "0x6472810")]
	public int2x2(uint2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001913")]
	[Address(RVA = "0x6472820", Offset = "0x6471820", VA = "0x6472820")]
	public int2x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001914")]
	[Address(RVA = "0x6472840", Offset = "0x6471840", VA = "0x6472840")]
	public int2x2(float2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001915")]
	[Address(RVA = "0x6472860", Offset = "0x6471860", VA = "0x6472860")]
	public int2x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001916")]
	[Address(RVA = "0x6472880", Offset = "0x6471880", VA = "0x6472880")]
	public int2x2(double2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001917")]
	[Address(RVA = "0x64728B0", Offset = "0x64718B0", VA = "0x64728B0")]
	public static implicit operator int2x2(int v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001918")]
	[Address(RVA = "0x64728C0", Offset = "0x64718C0", VA = "0x64728C0")]
	public static explicit operator int2x2(bool v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001919")]
	[Address(RVA = "0x64728E0", Offset = "0x64718E0", VA = "0x64728E0")]
	public static explicit operator int2x2(bool2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191A")]
	[Address(RVA = "0x6472910", Offset = "0x6471910", VA = "0x6472910")]
	public static explicit operator int2x2(uint v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191B")]
	[Address(RVA = "0x6472920", Offset = "0x6471920", VA = "0x6472920")]
	public static explicit operator int2x2(uint2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191C")]
	[Address(RVA = "0x6472930", Offset = "0x6471930", VA = "0x6472930")]
	public static explicit operator int2x2(float v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191D")]
	[Address(RVA = "0x6472950", Offset = "0x6471950", VA = "0x6472950")]
	public static explicit operator int2x2(float2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191E")]
	[Address(RVA = "0x6472980", Offset = "0x6471980", VA = "0x6472980")]
	public static explicit operator int2x2(double v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191F")]
	[Address(RVA = "0x64729A0", Offset = "0x64719A0", VA = "0x64729A0")]
	public static explicit operator int2x2(double2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001920")]
	[Address(RVA = "0x64729E0", Offset = "0x64719E0", VA = "0x64729E0")]
	public static int2x2 operator *(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001921")]
	[Address(RVA = "0x6472A20", Offset = "0x6471A20", VA = "0x6472A20")]
	public static int2x2 operator *(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001922")]
	[Address(RVA = "0x6472A50", Offset = "0x6471A50", VA = "0x6472A50")]
	public static int2x2 operator *(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001923")]
	[Address(RVA = "0x6472A80", Offset = "0x6471A80", VA = "0x6472A80")]
	public static int2x2 operator +(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001924")]
	[Address(RVA = "0x6472AB0", Offset = "0x6471AB0", VA = "0x6472AB0")]
	public static int2x2 operator +(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001925")]
	[Address(RVA = "0x6472AE0", Offset = "0x6471AE0", VA = "0x6472AE0")]
	public static int2x2 operator +(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001926")]
	[Address(RVA = "0x6472B10", Offset = "0x6471B10", VA = "0x6472B10")]
	public static int2x2 operator -(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001927")]
	[Address(RVA = "0x6472B40", Offset = "0x6471B40", VA = "0x6472B40")]
	public static int2x2 operator -(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001928")]
	[Address(RVA = "0x6472B70", Offset = "0x6471B70", VA = "0x6472B70")]
	public static int2x2 operator -(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001929")]
	[Address(RVA = "0x6472BA0", Offset = "0x6471BA0", VA = "0x6472BA0")]
	public static int2x2 operator /(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600192A")]
	[Address(RVA = "0x6472BF0", Offset = "0x6471BF0", VA = "0x6472BF0")]
	public static int2x2 operator /(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600192B")]
	[Address(RVA = "0x6472C40", Offset = "0x6471C40", VA = "0x6472C40")]
	public static int2x2 operator /(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600192C")]
	[Address(RVA = "0x6472C80", Offset = "0x6471C80", VA = "0x6472C80")]
	public static int2x2 operator %(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600192D")]
	[Address(RVA = "0x6472CD0", Offset = "0x6471CD0", VA = "0x6472CD0")]
	public static int2x2 operator %(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600192E")]
	[Address(RVA = "0x6472D10", Offset = "0x6471D10", VA = "0x6472D10")]
	public static int2x2 operator %(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600192F")]
	[Address(RVA = "0x6472D50", Offset = "0x6471D50", VA = "0x6472D50")]
	public static int2x2 operator ++(int2x2 val)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001930")]
	[Address(RVA = "0x6472D80", Offset = "0x6471D80", VA = "0x6472D80")]
	public static int2x2 operator --(int2x2 val)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001931")]
	[Address(RVA = "0x6472DB0", Offset = "0x6471DB0", VA = "0x6472DB0")]
	public static bool2x2 operator <(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001932")]
	[Address(RVA = "0x6472E00", Offset = "0x6471E00", VA = "0x6472E00")]
	public static bool2x2 operator <(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001933")]
	[Address(RVA = "0x6472E40", Offset = "0x6471E40", VA = "0x6472E40")]
	public static bool2x2 operator <(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001934")]
	[Address(RVA = "0x6472E80", Offset = "0x6471E80", VA = "0x6472E80")]
	public static bool2x2 operator <=(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001935")]
	[Address(RVA = "0x6472ED0", Offset = "0x6471ED0", VA = "0x6472ED0")]
	public static bool2x2 operator <=(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001936")]
	[Address(RVA = "0x6472F10", Offset = "0x6471F10", VA = "0x6472F10")]
	public static bool2x2 operator <=(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001937")]
	[Address(RVA = "0x6472F50", Offset = "0x6471F50", VA = "0x6472F50")]
	public static bool2x2 operator >(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001938")]
	[Address(RVA = "0x6472FA0", Offset = "0x6471FA0", VA = "0x6472FA0")]
	public static bool2x2 operator >(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001939")]
	[Address(RVA = "0x6472FE0", Offset = "0x6471FE0", VA = "0x6472FE0")]
	public static bool2x2 operator >(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193A")]
	[Address(RVA = "0x6473020", Offset = "0x6472020", VA = "0x6473020")]
	public static bool2x2 operator >=(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193B")]
	[Address(RVA = "0x6473070", Offset = "0x6472070", VA = "0x6473070")]
	public static bool2x2 operator >=(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193C")]
	[Address(RVA = "0x64730B0", Offset = "0x64720B0", VA = "0x64730B0")]
	public static bool2x2 operator >=(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193D")]
	[Address(RVA = "0x64730F0", Offset = "0x64720F0", VA = "0x64730F0")]
	public static int2x2 operator -(int2x2 val)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193E")]
	[Address(RVA = "0x6473120", Offset = "0x6472120", VA = "0x6473120")]
	public static int2x2 operator +(int2x2 val)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193F")]
	[Address(RVA = "0x6473130", Offset = "0x6472130", VA = "0x6473130")]
	public static int2x2 operator <<(int2x2 x, int n)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001940")]
	[Address(RVA = "0x6473160", Offset = "0x6472160", VA = "0x6473160")]
	public static int2x2 operator >>(int2x2 x, int n)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001941")]
	[Address(RVA = "0x6473190", Offset = "0x6472190", VA = "0x6473190")]
	public static bool2x2 operator ==(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001942")]
	[Address(RVA = "0x64731E0", Offset = "0x64721E0", VA = "0x64731E0")]
	public static bool2x2 operator ==(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001943")]
	[Address(RVA = "0x6473220", Offset = "0x6472220", VA = "0x6473220")]
	public static bool2x2 operator ==(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001944")]
	[Address(RVA = "0x6473260", Offset = "0x6472260", VA = "0x6473260")]
	public static bool2x2 operator !=(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001945")]
	[Address(RVA = "0x64732B0", Offset = "0x64722B0", VA = "0x64732B0")]
	public static bool2x2 operator !=(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001946")]
	[Address(RVA = "0x64732F0", Offset = "0x64722F0", VA = "0x64732F0")]
	public static bool2x2 operator !=(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001947")]
	[Address(RVA = "0x6473330", Offset = "0x6472330", VA = "0x6473330")]
	public static int2x2 operator ~(int2x2 val)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001948")]
	[Address(RVA = "0x6473340", Offset = "0x6472340", VA = "0x6473340")]
	public static int2x2 operator &(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001949")]
	[Address(RVA = "0x6473350", Offset = "0x6472350", VA = "0x6473350")]
	public static int2x2 operator &(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194A")]
	[Address(RVA = "0x6473380", Offset = "0x6472380", VA = "0x6473380")]
	public static int2x2 operator &(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194B")]
	[Address(RVA = "0x64733B0", Offset = "0x64723B0", VA = "0x64733B0")]
	public static int2x2 operator |(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194C")]
	[Address(RVA = "0x64733C0", Offset = "0x64723C0", VA = "0x64733C0")]
	public static int2x2 operator |(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194D")]
	[Address(RVA = "0x64733F0", Offset = "0x64723F0", VA = "0x64733F0")]
	public static int2x2 operator |(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194E")]
	[Address(RVA = "0x6473420", Offset = "0x6472420", VA = "0x6473420")]
	public static int2x2 operator ^(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194F")]
	[Address(RVA = "0x6473430", Offset = "0x6472430", VA = "0x6473430")]
	public static int2x2 operator ^(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001950")]
	[Address(RVA = "0x6473460", Offset = "0x6472460", VA = "0x6473460")]
	public static int2x2 operator ^(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001952")]
	[Address(RVA = "0x64734A0", Offset = "0x64724A0", VA = "0x64734A0", Slot = "4")]
	public bool Equals(int2x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001953")]
	[Address(RVA = "0x64734C0", Offset = "0x64724C0", VA = "0x64734C0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001954")]
	[Address(RVA = "0x6473540", Offset = "0x6472540", VA = "0x6473540", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001955")]
	[Address(RVA = "0x6473590", Offset = "0x6472590", VA = "0x6473590", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001956")]
	[Address(RVA = "0x6473770", Offset = "0x6472770", VA = "0x6473770", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
