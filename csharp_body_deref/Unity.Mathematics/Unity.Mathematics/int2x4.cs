// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.int2x4
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
public struct int2x4 : IEquatable<int2x4>, IFormattable
{
	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x0")]
	public int2 c0;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x8")]
	public int2 c1;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x10")]
	public int2 c2;

	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x18")]
	public int2 c3;

	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int2x4 zero;

	[Token(Token = "0x170007CF")]
	public unsafe ref int2 this[int index]
	{
		[Token(Token = "0x6001975")]
		[Address(RVA = "0x4AE49B0", Offset = "0x4AE49B0", VA = "0x4AE49B0")]
		get
		{
			return ref *(int2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001930")]
	[Address(RVA = "0x4AE2AE0", Offset = "0x4AE2AE0", VA = "0x4AE2AE0")]
	public int2x4(int2 c0, int2 c1, int2 c2, int2 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001931")]
	[Address(RVA = "0x4AE2AF0", Offset = "0x4AE2AF0", VA = "0x4AE2AF0")]
	public int2x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001932")]
	[Address(RVA = "0x4AE2B40", Offset = "0x4AE2B40", VA = "0x4AE2B40")]
	public int2x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001933")]
	[Address(RVA = "0x4AE2B60", Offset = "0x4AE2B60", VA = "0x4AE2B60")]
	public int2x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001934")]
	[Address(RVA = "0x4AE2B90", Offset = "0x4AE2B90", VA = "0x4AE2B90")]
	public int2x4(bool2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001935")]
	[Address(RVA = "0x4AE2C00", Offset = "0x4AE2C00", VA = "0x4AE2C00")]
	public int2x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001936")]
	[Address(RVA = "0x4AE2C20", Offset = "0x4AE2C20", VA = "0x4AE2C20")]
	public int2x4(uint2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001937")]
	[Address(RVA = "0x4AE2C40", Offset = "0x4AE2C40", VA = "0x4AE2C40")]
	public int2x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001938")]
	[Address(RVA = "0x4AE2C60", Offset = "0x4AE2C60", VA = "0x4AE2C60")]
	public int2x4(float2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001939")]
	[Address(RVA = "0x4AE2CE0", Offset = "0x4AE2CE0", VA = "0x4AE2CE0")]
	public int2x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193A")]
	[Address(RVA = "0x4AE2D00", Offset = "0x4AE2D00", VA = "0x4AE2D00")]
	public int2x4(double2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193B")]
	[Address(RVA = "0x4AE2D60", Offset = "0x4AE2D60", VA = "0x4AE2D60")]
	public static implicit operator int2x4(int v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193C")]
	[Address(RVA = "0x4AE2D80", Offset = "0x4AE2D80", VA = "0x4AE2D80")]
	public static explicit operator int2x4(bool v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193D")]
	[Address(RVA = "0x4AE2DB0", Offset = "0x4AE2DB0", VA = "0x4AE2DB0")]
	public static explicit operator int2x4(bool2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193E")]
	[Address(RVA = "0x4AE2E30", Offset = "0x4AE2E30", VA = "0x4AE2E30")]
	public static explicit operator int2x4(uint v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193F")]
	[Address(RVA = "0x4AE2E50", Offset = "0x4AE2E50", VA = "0x4AE2E50")]
	public static explicit operator int2x4(uint2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001940")]
	[Address(RVA = "0x4AE2E70", Offset = "0x4AE2E70", VA = "0x4AE2E70")]
	public static explicit operator int2x4(float v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001941")]
	[Address(RVA = "0x4AE2EA0", Offset = "0x4AE2EA0", VA = "0x4AE2EA0")]
	public static explicit operator int2x4(float2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001942")]
	[Address(RVA = "0x4AE2F20", Offset = "0x4AE2F20", VA = "0x4AE2F20")]
	public static explicit operator int2x4(double v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001943")]
	[Address(RVA = "0x4AE2F50", Offset = "0x4AE2F50", VA = "0x4AE2F50")]
	public static explicit operator int2x4(double2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001944")]
	[Address(RVA = "0x4AE2FC0", Offset = "0x4AE2FC0", VA = "0x4AE2FC0")]
	public static int2x4 operator *(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001945")]
	[Address(RVA = "0x4AE3060", Offset = "0x4AE3060", VA = "0x4AE3060")]
	public static int2x4 operator *(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001946")]
	[Address(RVA = "0x4AE30E0", Offset = "0x4AE30E0", VA = "0x4AE30E0")]
	public static int2x4 operator *(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001947")]
	[Address(RVA = "0x4AE3160", Offset = "0x4AE3160", VA = "0x4AE3160")]
	public static int2x4 operator +(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001948")]
	[Address(RVA = "0x4AE31D0", Offset = "0x4AE31D0", VA = "0x4AE31D0")]
	public static int2x4 operator +(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001949")]
	[Address(RVA = "0x4AE3240", Offset = "0x4AE3240", VA = "0x4AE3240")]
	public static int2x4 operator +(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194A")]
	[Address(RVA = "0x4AE32B0", Offset = "0x4AE32B0", VA = "0x4AE32B0")]
	public static int2x4 operator -(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194B")]
	[Address(RVA = "0x4AE3320", Offset = "0x4AE3320", VA = "0x4AE3320")]
	public static int2x4 operator -(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194C")]
	[Address(RVA = "0x4AE3390", Offset = "0x4AE3390", VA = "0x4AE3390")]
	public static int2x4 operator -(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194D")]
	[Address(RVA = "0x4AE3400", Offset = "0x4AE3400", VA = "0x4AE3400")]
	public static int2x4 operator /(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194E")]
	[Address(RVA = "0x4AE34C0", Offset = "0x4AE34C0", VA = "0x4AE34C0")]
	public static int2x4 operator /(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194F")]
	[Address(RVA = "0x4AE3550", Offset = "0x4AE3550", VA = "0x4AE3550")]
	public static int2x4 operator /(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001950")]
	[Address(RVA = "0x4AE35E0", Offset = "0x4AE35E0", VA = "0x4AE35E0")]
	public static int2x4 operator %(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001951")]
	[Address(RVA = "0x4AE36A0", Offset = "0x4AE36A0", VA = "0x4AE36A0")]
	public static int2x4 operator %(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001952")]
	[Address(RVA = "0x4AE3730", Offset = "0x4AE3730", VA = "0x4AE3730")]
	public static int2x4 operator %(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001953")]
	[Address(RVA = "0x4AE37C0", Offset = "0x4AE37C0", VA = "0x4AE37C0")]
	public static int2x4 operator ++(int2x4 val)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001954")]
	[Address(RVA = "0x4AE3830", Offset = "0x4AE3830", VA = "0x4AE3830")]
	public static int2x4 operator --(int2x4 val)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001955")]
	[Address(RVA = "0x4AE38A0", Offset = "0x4AE38A0", VA = "0x4AE38A0")]
	public static bool2x4 operator <(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001956")]
	[Address(RVA = "0x4AE3970", Offset = "0x4AE3970", VA = "0x4AE3970")]
	public static bool2x4 operator <(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001957")]
	[Address(RVA = "0x4AE3A10", Offset = "0x4AE3A10", VA = "0x4AE3A10")]
	public static bool2x4 operator <(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001958")]
	[Address(RVA = "0x4AE3AB0", Offset = "0x4AE3AB0", VA = "0x4AE3AB0")]
	public static bool2x4 operator <=(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001959")]
	[Address(RVA = "0x4AE3B80", Offset = "0x4AE3B80", VA = "0x4AE3B80")]
	public static bool2x4 operator <=(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195A")]
	[Address(RVA = "0x4AE3C20", Offset = "0x4AE3C20", VA = "0x4AE3C20")]
	public static bool2x4 operator <=(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195B")]
	[Address(RVA = "0x4AE3CC0", Offset = "0x4AE3CC0", VA = "0x4AE3CC0")]
	public static bool2x4 operator >(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195C")]
	[Address(RVA = "0x4AE3D90", Offset = "0x4AE3D90", VA = "0x4AE3D90")]
	public static bool2x4 operator >(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195D")]
	[Address(RVA = "0x4AE3E30", Offset = "0x4AE3E30", VA = "0x4AE3E30")]
	public static bool2x4 operator >(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195E")]
	[Address(RVA = "0x4AE3ED0", Offset = "0x4AE3ED0", VA = "0x4AE3ED0")]
	public static bool2x4 operator >=(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195F")]
	[Address(RVA = "0x4AE3FA0", Offset = "0x4AE3FA0", VA = "0x4AE3FA0")]
	public static bool2x4 operator >=(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001960")]
	[Address(RVA = "0x4AE4040", Offset = "0x4AE4040", VA = "0x4AE4040")]
	public static bool2x4 operator >=(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001961")]
	[Address(RVA = "0x4AE40E0", Offset = "0x4AE40E0", VA = "0x4AE40E0")]
	public static int2x4 operator -(int2x4 val)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001962")]
	[Address(RVA = "0x4AE4140", Offset = "0x4AE4140", VA = "0x4AE4140")]
	public static int2x4 operator +(int2x4 val)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001963")]
	[Address(RVA = "0x4AE4160", Offset = "0x4AE4160", VA = "0x4AE4160")]
	public static int2x4 operator <<(int2x4 x, int n)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001964")]
	[Address(RVA = "0x4AE41E0", Offset = "0x4AE41E0", VA = "0x4AE41E0")]
	public static int2x4 operator >>(int2x4 x, int n)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001965")]
	[Address(RVA = "0x4AE4260", Offset = "0x4AE4260", VA = "0x4AE4260")]
	public static bool2x4 operator ==(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001966")]
	[Address(RVA = "0x4AE4330", Offset = "0x4AE4330", VA = "0x4AE4330")]
	public static bool2x4 operator ==(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001967")]
	[Address(RVA = "0x4AE43D0", Offset = "0x4AE43D0", VA = "0x4AE43D0")]
	public static bool2x4 operator ==(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001968")]
	[Address(RVA = "0x4AE4470", Offset = "0x4AE4470", VA = "0x4AE4470")]
	public static bool2x4 operator !=(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001969")]
	[Address(RVA = "0x4AE4540", Offset = "0x4AE4540", VA = "0x4AE4540")]
	public static bool2x4 operator !=(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196A")]
	[Address(RVA = "0x4AE45E0", Offset = "0x4AE45E0", VA = "0x4AE45E0")]
	public static bool2x4 operator !=(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196B")]
	[Address(RVA = "0x4AE4680", Offset = "0x4AE4680", VA = "0x4AE4680")]
	public static int2x4 operator ~(int2x4 val)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196C")]
	[Address(RVA = "0x4AE46B0", Offset = "0x4AE46B0", VA = "0x4AE46B0")]
	public static int2x4 operator &(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196D")]
	[Address(RVA = "0x4AE46D0", Offset = "0x4AE46D0", VA = "0x4AE46D0")]
	public static int2x4 operator &(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196E")]
	[Address(RVA = "0x4AE4740", Offset = "0x4AE4740", VA = "0x4AE4740")]
	public static int2x4 operator &(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196F")]
	[Address(RVA = "0x4AE47B0", Offset = "0x4AE47B0", VA = "0x4AE47B0")]
	public static int2x4 operator |(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001970")]
	[Address(RVA = "0x4AE47D0", Offset = "0x4AE47D0", VA = "0x4AE47D0")]
	public static int2x4 operator |(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001971")]
	[Address(RVA = "0x4AE4840", Offset = "0x4AE4840", VA = "0x4AE4840")]
	public static int2x4 operator |(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001972")]
	[Address(RVA = "0x4AE48B0", Offset = "0x4AE48B0", VA = "0x4AE48B0")]
	public static int2x4 operator ^(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001973")]
	[Address(RVA = "0x4AE48D0", Offset = "0x4AE48D0", VA = "0x4AE48D0")]
	public static int2x4 operator ^(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001974")]
	[Address(RVA = "0x4AE4940", Offset = "0x4AE4940", VA = "0x4AE4940")]
	public static int2x4 operator ^(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001976")]
	[Address(RVA = "0x4AE49C0", Offset = "0x4AE49C0", VA = "0x4AE49C0", Slot = "4")]
	public bool Equals(int2x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001977")]
	[Address(RVA = "0x4AE4A20", Offset = "0x4AE4A20", VA = "0x4AE4A20", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001978")]
	[Address(RVA = "0x4AE4AD0", Offset = "0x4AE4AD0", VA = "0x4AE4AD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001979")]
	[Address(RVA = "0x4AE4B90", Offset = "0x4AE4B90", VA = "0x4AE4B90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600197A")]
	[Address(RVA = "0x4AE4EB0", Offset = "0x4AE4EB0", VA = "0x4AE4EB0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
