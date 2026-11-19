// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.int2x3
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
[Token(Token = "0x2000042")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int2x3 : IEquatable<int2x3>, IFormattable
{
	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x0")]
	public int2 c0;

	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0x8")]
	public int2 c1;

	[Token(Token = "0x40000FF")]
	[FieldOffset(Offset = "0x10")]
	public int2 c2;

	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int2x3 zero;

	[Token(Token = "0x170007CE")]
	public unsafe ref int2 this[int index]
	{
		[Token(Token = "0x600199D")]
		[Address(RVA = "0x64750E0", Offset = "0x64740E0", VA = "0x64750E0")]
		get
		{
			return ref *(int2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001958")]
	[Address(RVA = "0x6473980", Offset = "0x6472980", VA = "0x6473980")]
	public int2x3(int2 c0, int2 c1, int2 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001959")]
	[Address(RVA = "0x6473990", Offset = "0x6472990", VA = "0x6473990")]
	public int2x3(int m00, int m01, int m02, int m10, int m11, int m12)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195A")]
	[Address(RVA = "0x64739C0", Offset = "0x64729C0", VA = "0x64739C0")]
	public int2x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195B")]
	[Address(RVA = "0x64739E0", Offset = "0x64729E0", VA = "0x64739E0")]
	public int2x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195C")]
	[Address(RVA = "0x6473A00", Offset = "0x6472A00", VA = "0x6473A00")]
	public int2x3(bool2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195D")]
	[Address(RVA = "0x6473A60", Offset = "0x6472A60", VA = "0x6473A60")]
	public int2x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195E")]
	[Address(RVA = "0x6473A80", Offset = "0x6472A80", VA = "0x6473A80")]
	public int2x3(uint2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195F")]
	[Address(RVA = "0x6473AA0", Offset = "0x6472AA0", VA = "0x6473AA0")]
	public int2x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001960")]
	[Address(RVA = "0x6473AC0", Offset = "0x6472AC0", VA = "0x6473AC0")]
	public int2x3(float2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001961")]
	[Address(RVA = "0x6473B10", Offset = "0x6472B10", VA = "0x6473B10")]
	public int2x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001962")]
	[Address(RVA = "0x6473B30", Offset = "0x6472B30", VA = "0x6473B30")]
	public int2x3(double2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001963")]
	[Address(RVA = "0x6473B70", Offset = "0x6472B70", VA = "0x6473B70")]
	public static implicit operator int2x3(int v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001964")]
	[Address(RVA = "0x6473B90", Offset = "0x6472B90", VA = "0x6473B90")]
	public static explicit operator int2x3(bool v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001965")]
	[Address(RVA = "0x6473BC0", Offset = "0x6472BC0", VA = "0x6473BC0")]
	public static explicit operator int2x3(bool2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001966")]
	[Address(RVA = "0x6473C20", Offset = "0x6472C20", VA = "0x6473C20")]
	public static explicit operator int2x3(uint v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001967")]
	[Address(RVA = "0x6473C40", Offset = "0x6472C40", VA = "0x6473C40")]
	public static explicit operator int2x3(uint2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001968")]
	[Address(RVA = "0x6473C60", Offset = "0x6472C60", VA = "0x6473C60")]
	public static explicit operator int2x3(float v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001969")]
	[Address(RVA = "0x6473C80", Offset = "0x6472C80", VA = "0x6473C80")]
	public static explicit operator int2x3(float2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196A")]
	[Address(RVA = "0x6473CD0", Offset = "0x6472CD0", VA = "0x6473CD0")]
	public static explicit operator int2x3(double v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196B")]
	[Address(RVA = "0x6473CF0", Offset = "0x6472CF0", VA = "0x6473CF0")]
	public static explicit operator int2x3(double2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196C")]
	[Address(RVA = "0x6473D40", Offset = "0x6472D40", VA = "0x6473D40")]
	public static int2x3 operator *(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196D")]
	[Address(RVA = "0x6473DC0", Offset = "0x6472DC0", VA = "0x6473DC0")]
	public static int2x3 operator *(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196E")]
	[Address(RVA = "0x6473E20", Offset = "0x6472E20", VA = "0x6473E20")]
	public static int2x3 operator *(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196F")]
	[Address(RVA = "0x6473E80", Offset = "0x6472E80", VA = "0x6473E80")]
	public static int2x3 operator +(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001970")]
	[Address(RVA = "0x6473F00", Offset = "0x6472F00", VA = "0x6473F00")]
	public static int2x3 operator +(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001971")]
	[Address(RVA = "0x6473F30", Offset = "0x6472F30", VA = "0x6473F30")]
	public static int2x3 operator +(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001972")]
	[Address(RVA = "0x6473F60", Offset = "0x6472F60", VA = "0x6473F60")]
	public static int2x3 operator -(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001973")]
	[Address(RVA = "0x6473FE0", Offset = "0x6472FE0", VA = "0x6473FE0")]
	public static int2x3 operator -(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001974")]
	[Address(RVA = "0x6474020", Offset = "0x6473020", VA = "0x6474020")]
	public static int2x3 operator -(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001975")]
	[Address(RVA = "0x6474060", Offset = "0x6473060", VA = "0x6474060")]
	public static int2x3 operator /(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001976")]
	[Address(RVA = "0x64740F0", Offset = "0x64730F0", VA = "0x64740F0")]
	public static int2x3 operator /(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001977")]
	[Address(RVA = "0x6474160", Offset = "0x6473160", VA = "0x6474160")]
	public static int2x3 operator /(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001978")]
	[Address(RVA = "0x64741D0", Offset = "0x64731D0", VA = "0x64741D0")]
	public static int2x3 operator %(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001979")]
	[Address(RVA = "0x6474260", Offset = "0x6473260", VA = "0x6474260")]
	public static int2x3 operator %(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600197A")]
	[Address(RVA = "0x64742D0", Offset = "0x64732D0", VA = "0x64742D0")]
	public static int2x3 operator %(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600197B")]
	[Address(RVA = "0x6474340", Offset = "0x6473340", VA = "0x6474340")]
	public static int2x3 operator ++(int2x3 val)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600197C")]
	[Address(RVA = "0x64743A0", Offset = "0x64733A0", VA = "0x64743A0")]
	public static int2x3 operator --(int2x3 val)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600197D")]
	[Address(RVA = "0x64743F0", Offset = "0x64733F0", VA = "0x64743F0")]
	public static bool2x3 operator <(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600197E")]
	[Address(RVA = "0x6474490", Offset = "0x6473490", VA = "0x6474490")]
	public static bool2x3 operator <(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600197F")]
	[Address(RVA = "0x6474510", Offset = "0x6473510", VA = "0x6474510")]
	public static bool2x3 operator <(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001980")]
	[Address(RVA = "0x6474590", Offset = "0x6473590", VA = "0x6474590")]
	public static bool2x3 operator <=(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001981")]
	[Address(RVA = "0x6474630", Offset = "0x6473630", VA = "0x6474630")]
	public static bool2x3 operator <=(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001982")]
	[Address(RVA = "0x64746B0", Offset = "0x64736B0", VA = "0x64746B0")]
	public static bool2x3 operator <=(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001983")]
	[Address(RVA = "0x6474730", Offset = "0x6473730", VA = "0x6474730")]
	public static bool2x3 operator >(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001984")]
	[Address(RVA = "0x64747D0", Offset = "0x64737D0", VA = "0x64747D0")]
	public static bool2x3 operator >(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001985")]
	[Address(RVA = "0x6474850", Offset = "0x6473850", VA = "0x6474850")]
	public static bool2x3 operator >(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001986")]
	[Address(RVA = "0x64748D0", Offset = "0x64738D0", VA = "0x64748D0")]
	public static bool2x3 operator >=(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001987")]
	[Address(RVA = "0x6474970", Offset = "0x6473970", VA = "0x6474970")]
	public static bool2x3 operator >=(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001988")]
	[Address(RVA = "0x64749F0", Offset = "0x64739F0", VA = "0x64749F0")]
	public static bool2x3 operator >=(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001989")]
	[Address(RVA = "0x6474A70", Offset = "0x6473A70", VA = "0x6474A70")]
	public static int2x3 operator -(int2x3 val)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600198A")]
	[Address(RVA = "0x6474AC0", Offset = "0x6473AC0", VA = "0x6474AC0")]
	public static int2x3 operator +(int2x3 val)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600198B")]
	[Address(RVA = "0x6474AE0", Offset = "0x6473AE0", VA = "0x6474AE0")]
	public static int2x3 operator <<(int2x3 x, int n)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600198C")]
	[Address(RVA = "0x6474B40", Offset = "0x6473B40", VA = "0x6474B40")]
	public static int2x3 operator >>(int2x3 x, int n)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600198D")]
	[Address(RVA = "0x6474BA0", Offset = "0x6473BA0", VA = "0x6474BA0")]
	public static bool2x3 operator ==(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600198E")]
	[Address(RVA = "0x6474C40", Offset = "0x6473C40", VA = "0x6474C40")]
	public static bool2x3 operator ==(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600198F")]
	[Address(RVA = "0x6474CC0", Offset = "0x6473CC0", VA = "0x6474CC0")]
	public static bool2x3 operator ==(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001990")]
	[Address(RVA = "0x6474D40", Offset = "0x6473D40", VA = "0x6474D40")]
	public static bool2x3 operator !=(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001991")]
	[Address(RVA = "0x6474DE0", Offset = "0x6473DE0", VA = "0x6474DE0")]
	public static bool2x3 operator !=(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001992")]
	[Address(RVA = "0x6474E60", Offset = "0x6473E60", VA = "0x6474E60")]
	public static bool2x3 operator !=(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001993")]
	[Address(RVA = "0x6474EE0", Offset = "0x6473EE0", VA = "0x6474EE0")]
	public static int2x3 operator ~(int2x3 val)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001994")]
	[Address(RVA = "0x6474F00", Offset = "0x6473F00", VA = "0x6474F00")]
	public static int2x3 operator &(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001995")]
	[Address(RVA = "0x6474F20", Offset = "0x6473F20", VA = "0x6474F20")]
	public static int2x3 operator &(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001996")]
	[Address(RVA = "0x6474F60", Offset = "0x6473F60", VA = "0x6474F60")]
	public static int2x3 operator &(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001997")]
	[Address(RVA = "0x6474FA0", Offset = "0x6473FA0", VA = "0x6474FA0")]
	public static int2x3 operator |(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001998")]
	[Address(RVA = "0x6474FC0", Offset = "0x6473FC0", VA = "0x6474FC0")]
	public static int2x3 operator |(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001999")]
	[Address(RVA = "0x6475000", Offset = "0x6474000", VA = "0x6475000")]
	public static int2x3 operator |(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600199A")]
	[Address(RVA = "0x6475040", Offset = "0x6474040", VA = "0x6475040")]
	public static int2x3 operator ^(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600199B")]
	[Address(RVA = "0x6475060", Offset = "0x6474060", VA = "0x6475060")]
	public static int2x3 operator ^(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600199C")]
	[Address(RVA = "0x64750A0", Offset = "0x64740A0", VA = "0x64750A0")]
	public static int2x3 operator ^(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600199E")]
	[Address(RVA = "0x64750F0", Offset = "0x64740F0", VA = "0x64750F0", Slot = "4")]
	public bool Equals(int2x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600199F")]
	[Address(RVA = "0x6475130", Offset = "0x6474130", VA = "0x6475130", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019A0")]
	[Address(RVA = "0x64751C0", Offset = "0x64741C0", VA = "0x64751C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019A1")]
	[Address(RVA = "0x6475220", Offset = "0x6474220", VA = "0x6475220", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019A2")]
	[Address(RVA = "0x64754A0", Offset = "0x64744A0", VA = "0x64754A0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
