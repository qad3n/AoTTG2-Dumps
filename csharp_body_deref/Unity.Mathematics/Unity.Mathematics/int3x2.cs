// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.int3x2
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
[Token(Token = "0x2000045")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int3x2 : IEquatable<int3x2>, IFormattable
{
	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x0")]
	public int3 c0;

	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0xC")]
	public int3 c1;

	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int3x2 zero;

	[Token(Token = "0x17000846")]
	public unsafe ref int3 this[int index]
	{
		[Token(Token = "0x6001A90")]
		[Address(RVA = "0x4AE8200", Offset = "0x4AE8200", VA = "0x4AE8200")]
		get
		{
			return ref *(int3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A4B")]
	[Address(RVA = "0x4AE6A80", Offset = "0x4AE6A80", VA = "0x4AE6A80")]
	public int3x2(int3 c0, int3 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A4C")]
	[Address(RVA = "0x4AE6A90", Offset = "0x4AE6A90", VA = "0x4AE6A90")]
	public int3x2(int m00, int m01, int m10, int m11, int m20, int m21)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A4D")]
	[Address(RVA = "0x4AE6AB0", Offset = "0x4AE6AB0", VA = "0x4AE6AB0")]
	public int3x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A4E")]
	[Address(RVA = "0x4AE6AD0", Offset = "0x4AE6AD0", VA = "0x4AE6AD0")]
	public int3x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A4F")]
	[Address(RVA = "0x4AE6AF0", Offset = "0x4AE6AF0", VA = "0x4AE6AF0")]
	public int3x2(bool3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A50")]
	[Address(RVA = "0x4AE6B50", Offset = "0x4AE6B50", VA = "0x4AE6B50")]
	public int3x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A51")]
	[Address(RVA = "0x4AE6B70", Offset = "0x4AE6B70", VA = "0x4AE6B70")]
	public int3x2(uint3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A52")]
	[Address(RVA = "0x4AE6B90", Offset = "0x4AE6B90", VA = "0x4AE6B90")]
	public int3x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A53")]
	[Address(RVA = "0x4AE6BB0", Offset = "0x4AE6BB0", VA = "0x4AE6BB0")]
	public int3x2(float3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A54")]
	[Address(RVA = "0x4AE6C00", Offset = "0x4AE6C00", VA = "0x4AE6C00")]
	public int3x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A55")]
	[Address(RVA = "0x4AE6C20", Offset = "0x4AE6C20", VA = "0x4AE6C20")]
	public int3x2(double3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A56")]
	[Address(RVA = "0x4AE6C60", Offset = "0x4AE6C60", VA = "0x4AE6C60")]
	public static implicit operator int3x2(int v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A57")]
	[Address(RVA = "0x4AE6C80", Offset = "0x4AE6C80", VA = "0x4AE6C80")]
	public static explicit operator int3x2(bool v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A58")]
	[Address(RVA = "0x4AE6CB0", Offset = "0x4AE6CB0", VA = "0x4AE6CB0")]
	public static explicit operator int3x2(bool3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A59")]
	[Address(RVA = "0x4AE6D10", Offset = "0x4AE6D10", VA = "0x4AE6D10")]
	public static explicit operator int3x2(uint v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A5A")]
	[Address(RVA = "0x4AE6D30", Offset = "0x4AE6D30", VA = "0x4AE6D30")]
	public static explicit operator int3x2(uint3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A5B")]
	[Address(RVA = "0x4AE6D60", Offset = "0x4AE6D60", VA = "0x4AE6D60")]
	public static explicit operator int3x2(float v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A5C")]
	[Address(RVA = "0x4AE6D80", Offset = "0x4AE6D80", VA = "0x4AE6D80")]
	public static explicit operator int3x2(float3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A5D")]
	[Address(RVA = "0x4AE6DD0", Offset = "0x4AE6DD0", VA = "0x4AE6DD0")]
	public static explicit operator int3x2(double v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A5E")]
	[Address(RVA = "0x4AE6DF0", Offset = "0x4AE6DF0", VA = "0x4AE6DF0")]
	public static explicit operator int3x2(double3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A5F")]
	[Address(RVA = "0x4AE6E40", Offset = "0x4AE6E40", VA = "0x4AE6E40")]
	public static int3x2 operator *(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A60")]
	[Address(RVA = "0x4AE6EB0", Offset = "0x4AE6EB0", VA = "0x4AE6EB0")]
	public static int3x2 operator *(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A61")]
	[Address(RVA = "0x4AE6F10", Offset = "0x4AE6F10", VA = "0x4AE6F10")]
	public static int3x2 operator *(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A62")]
	[Address(RVA = "0x4AE6F70", Offset = "0x4AE6F70", VA = "0x4AE6F70")]
	public static int3x2 operator +(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A63")]
	[Address(RVA = "0x4AE6FE0", Offset = "0x4AE6FE0", VA = "0x4AE6FE0")]
	public static int3x2 operator +(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A64")]
	[Address(RVA = "0x4AE7030", Offset = "0x4AE7030", VA = "0x4AE7030")]
	public static int3x2 operator +(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A65")]
	[Address(RVA = "0x4AE7080", Offset = "0x4AE7080", VA = "0x4AE7080")]
	public static int3x2 operator -(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A66")]
	[Address(RVA = "0x4AE70F0", Offset = "0x4AE70F0", VA = "0x4AE70F0")]
	public static int3x2 operator -(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A67")]
	[Address(RVA = "0x4AE7150", Offset = "0x4AE7150", VA = "0x4AE7150")]
	public static int3x2 operator -(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A68")]
	[Address(RVA = "0x4AE71A0", Offset = "0x4AE71A0", VA = "0x4AE71A0")]
	public static int3x2 operator /(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A69")]
	[Address(RVA = "0x4AE7230", Offset = "0x4AE7230", VA = "0x4AE7230")]
	public static int3x2 operator /(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A6A")]
	[Address(RVA = "0x4AE72A0", Offset = "0x4AE72A0", VA = "0x4AE72A0")]
	public static int3x2 operator /(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A6B")]
	[Address(RVA = "0x4AE7310", Offset = "0x4AE7310", VA = "0x4AE7310")]
	public static int3x2 operator %(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A6C")]
	[Address(RVA = "0x4AE73A0", Offset = "0x4AE73A0", VA = "0x4AE73A0")]
	public static int3x2 operator %(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A6D")]
	[Address(RVA = "0x4AE7410", Offset = "0x4AE7410", VA = "0x4AE7410")]
	public static int3x2 operator %(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A6E")]
	[Address(RVA = "0x4AE7480", Offset = "0x4AE7480", VA = "0x4AE7480")]
	public static int3x2 operator ++(int3x2 val)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A6F")]
	[Address(RVA = "0x4AE74F0", Offset = "0x4AE74F0", VA = "0x4AE74F0")]
	public static int3x2 operator --(int3x2 val)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A70")]
	[Address(RVA = "0x4AE7550", Offset = "0x4AE7550", VA = "0x4AE7550")]
	public static bool3x2 operator <(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A71")]
	[Address(RVA = "0x4AE75E0", Offset = "0x4AE75E0", VA = "0x4AE75E0")]
	public static bool3x2 operator <(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A72")]
	[Address(RVA = "0x4AE7650", Offset = "0x4AE7650", VA = "0x4AE7650")]
	public static bool3x2 operator <(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A73")]
	[Address(RVA = "0x4AE76C0", Offset = "0x4AE76C0", VA = "0x4AE76C0")]
	public static bool3x2 operator <=(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A74")]
	[Address(RVA = "0x4AE7750", Offset = "0x4AE7750", VA = "0x4AE7750")]
	public static bool3x2 operator <=(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A75")]
	[Address(RVA = "0x4AE77C0", Offset = "0x4AE77C0", VA = "0x4AE77C0")]
	public static bool3x2 operator <=(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A76")]
	[Address(RVA = "0x4AE7830", Offset = "0x4AE7830", VA = "0x4AE7830")]
	public static bool3x2 operator >(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A77")]
	[Address(RVA = "0x4AE78C0", Offset = "0x4AE78C0", VA = "0x4AE78C0")]
	public static bool3x2 operator >(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A78")]
	[Address(RVA = "0x4AE7930", Offset = "0x4AE7930", VA = "0x4AE7930")]
	public static bool3x2 operator >(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A79")]
	[Address(RVA = "0x4AE79A0", Offset = "0x4AE79A0", VA = "0x4AE79A0")]
	public static bool3x2 operator >=(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A7A")]
	[Address(RVA = "0x4AE7A30", Offset = "0x4AE7A30", VA = "0x4AE7A30")]
	public static bool3x2 operator >=(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A7B")]
	[Address(RVA = "0x4AE7AA0", Offset = "0x4AE7AA0", VA = "0x4AE7AA0")]
	public static bool3x2 operator >=(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A7C")]
	[Address(RVA = "0x4AE7B10", Offset = "0x4AE7B10", VA = "0x4AE7B10")]
	public static int3x2 operator -(int3x2 val)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A7D")]
	[Address(RVA = "0x4AE7B60", Offset = "0x4AE7B60", VA = "0x4AE7B60")]
	public static int3x2 operator +(int3x2 val)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A7E")]
	[Address(RVA = "0x4AE7B90", Offset = "0x4AE7B90", VA = "0x4AE7B90")]
	public static int3x2 operator <<(int3x2 x, int n)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A7F")]
	[Address(RVA = "0x4AE7BF0", Offset = "0x4AE7BF0", VA = "0x4AE7BF0")]
	public static int3x2 operator >>(int3x2 x, int n)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A80")]
	[Address(RVA = "0x4AE7C50", Offset = "0x4AE7C50", VA = "0x4AE7C50")]
	public static bool3x2 operator ==(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A81")]
	[Address(RVA = "0x4AE7CE0", Offset = "0x4AE7CE0", VA = "0x4AE7CE0")]
	public static bool3x2 operator ==(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A82")]
	[Address(RVA = "0x4AE7D50", Offset = "0x4AE7D50", VA = "0x4AE7D50")]
	public static bool3x2 operator ==(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A83")]
	[Address(RVA = "0x4AE7DC0", Offset = "0x4AE7DC0", VA = "0x4AE7DC0")]
	public static bool3x2 operator !=(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A84")]
	[Address(RVA = "0x4AE7E50", Offset = "0x4AE7E50", VA = "0x4AE7E50")]
	public static bool3x2 operator !=(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A85")]
	[Address(RVA = "0x4AE7EC0", Offset = "0x4AE7EC0", VA = "0x4AE7EC0")]
	public static bool3x2 operator !=(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A86")]
	[Address(RVA = "0x4AE7F30", Offset = "0x4AE7F30", VA = "0x4AE7F30")]
	public static int3x2 operator ~(int3x2 val)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A87")]
	[Address(RVA = "0x4AE7F60", Offset = "0x4AE7F60", VA = "0x4AE7F60")]
	public static int3x2 operator &(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A88")]
	[Address(RVA = "0x4AE7FA0", Offset = "0x4AE7FA0", VA = "0x4AE7FA0")]
	public static int3x2 operator &(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A89")]
	[Address(RVA = "0x4AE7FF0", Offset = "0x4AE7FF0", VA = "0x4AE7FF0")]
	public static int3x2 operator &(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A8A")]
	[Address(RVA = "0x4AE8040", Offset = "0x4AE8040", VA = "0x4AE8040")]
	public static int3x2 operator |(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A8B")]
	[Address(RVA = "0x4AE8080", Offset = "0x4AE8080", VA = "0x4AE8080")]
	public static int3x2 operator |(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A8C")]
	[Address(RVA = "0x4AE80D0", Offset = "0x4AE80D0", VA = "0x4AE80D0")]
	public static int3x2 operator |(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A8D")]
	[Address(RVA = "0x4AE8120", Offset = "0x4AE8120", VA = "0x4AE8120")]
	public static int3x2 operator ^(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A8E")]
	[Address(RVA = "0x4AE8160", Offset = "0x4AE8160", VA = "0x4AE8160")]
	public static int3x2 operator ^(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A8F")]
	[Address(RVA = "0x4AE81B0", Offset = "0x4AE81B0", VA = "0x4AE81B0")]
	public static int3x2 operator ^(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A91")]
	[Address(RVA = "0x4AE8210", Offset = "0x4AE8210", VA = "0x4AE8210", Slot = "4")]
	public bool Equals(int3x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A92")]
	[Address(RVA = "0x4AE8250", Offset = "0x4AE8250", VA = "0x4AE8250", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A93")]
	[Address(RVA = "0x4AE82E0", Offset = "0x4AE82E0", VA = "0x4AE82E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A94")]
	[Address(RVA = "0x4AE8350", Offset = "0x4AE8350", VA = "0x4AE8350", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A95")]
	[Address(RVA = "0x4AE85C0", Offset = "0x4AE85C0", VA = "0x4AE85C0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
