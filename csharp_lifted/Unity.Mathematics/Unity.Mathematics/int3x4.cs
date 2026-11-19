// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.int3x4
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
[Token(Token = "0x2000048")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int3x4 : IEquatable<int3x4>, IFormattable
{
	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x0")]
	public int3 c0;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0xC")]
	public int3 c1;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x18")]
	public int3 c2;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x24")]
	public int3 c3;

	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int3x4 zero;

	[Token(Token = "0x17000848")]
	public unsafe ref int3 this[int index]
	{
		[Token(Token = "0x6001B9A")]
		[Address(RVA = "0x6481DC0", Offset = "0x6480DC0", VA = "0x6481DC0")]
		get
		{
			return ref *(int3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B55")]
	[Address(RVA = "0x647EE20", Offset = "0x647DE20", VA = "0x647EE20")]
	public int3x4(int3 c0, int3 c1, int3 c2, int3 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B56")]
	[Address(RVA = "0x647EE50", Offset = "0x647DE50", VA = "0x647EE50")]
	public int3x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13, int m20, int m21, int m22, int m23)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B57")]
	[Address(RVA = "0x647EEB0", Offset = "0x647DEB0", VA = "0x647EEB0")]
	public int3x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B58")]
	[Address(RVA = "0x647EEE0", Offset = "0x647DEE0", VA = "0x647EEE0")]
	public int3x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B59")]
	[Address(RVA = "0x647EF10", Offset = "0x647DF10", VA = "0x647EF10")]
	public int3x4(bool3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B5A")]
	[Address(RVA = "0x647EFC0", Offset = "0x647DFC0", VA = "0x647EFC0")]
	public int3x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B5B")]
	[Address(RVA = "0x647EFF0", Offset = "0x647DFF0", VA = "0x647EFF0")]
	public int3x4(uint3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B5C")]
	[Address(RVA = "0x647F030", Offset = "0x647E030", VA = "0x647F030")]
	public int3x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B5D")]
	[Address(RVA = "0x647F060", Offset = "0x647E060", VA = "0x647F060")]
	public int3x4(float3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B5E")]
	[Address(RVA = "0x647F100", Offset = "0x647E100", VA = "0x647F100")]
	public int3x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B5F")]
	[Address(RVA = "0x647F130", Offset = "0x647E130", VA = "0x647F130")]
	public int3x4(double3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B60")]
	[Address(RVA = "0x647F1B0", Offset = "0x647E1B0", VA = "0x647F1B0")]
	public static implicit operator int3x4(int v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B61")]
	[Address(RVA = "0x647F1E0", Offset = "0x647E1E0", VA = "0x647F1E0")]
	public static explicit operator int3x4(bool v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B62")]
	[Address(RVA = "0x647F220", Offset = "0x647E220", VA = "0x647F220")]
	public static explicit operator int3x4(bool3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B63")]
	[Address(RVA = "0x647F2D0", Offset = "0x647E2D0", VA = "0x647F2D0")]
	public static explicit operator int3x4(uint v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B64")]
	[Address(RVA = "0x647F300", Offset = "0x647E300", VA = "0x647F300")]
	public static explicit operator int3x4(uint3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B65")]
	[Address(RVA = "0x647F350", Offset = "0x647E350", VA = "0x647F350")]
	public static explicit operator int3x4(float v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B66")]
	[Address(RVA = "0x647F380", Offset = "0x647E380", VA = "0x647F380")]
	public static explicit operator int3x4(float3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B67")]
	[Address(RVA = "0x647F420", Offset = "0x647E420", VA = "0x647F420")]
	public static explicit operator int3x4(double v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B68")]
	[Address(RVA = "0x647F450", Offset = "0x647E450", VA = "0x647F450")]
	public static explicit operator int3x4(double3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B69")]
	[Address(RVA = "0x647F4F0", Offset = "0x647E4F0", VA = "0x647F4F0")]
	public static int3x4 operator *(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B6A")]
	[Address(RVA = "0x647F5D0", Offset = "0x647E5D0", VA = "0x647F5D0")]
	public static int3x4 operator *(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B6B")]
	[Address(RVA = "0x647F680", Offset = "0x647E680", VA = "0x647F680")]
	public static int3x4 operator *(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B6C")]
	[Address(RVA = "0x647F730", Offset = "0x647E730", VA = "0x647F730")]
	public static int3x4 operator +(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B6D")]
	[Address(RVA = "0x647F800", Offset = "0x647E800", VA = "0x647F800")]
	public static int3x4 operator +(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B6E")]
	[Address(RVA = "0x647F8A0", Offset = "0x647E8A0", VA = "0x647F8A0")]
	public static int3x4 operator +(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B6F")]
	[Address(RVA = "0x647F940", Offset = "0x647E940", VA = "0x647F940")]
	public static int3x4 operator -(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B70")]
	[Address(RVA = "0x647FA10", Offset = "0x647EA10", VA = "0x647FA10")]
	public static int3x4 operator -(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B71")]
	[Address(RVA = "0x647FAC0", Offset = "0x647EAC0", VA = "0x647FAC0")]
	public static int3x4 operator -(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B72")]
	[Address(RVA = "0x647FB70", Offset = "0x647EB70", VA = "0x647FB70")]
	public static int3x4 operator /(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B73")]
	[Address(RVA = "0x647FC80", Offset = "0x647EC80", VA = "0x647FC80")]
	public static int3x4 operator /(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B74")]
	[Address(RVA = "0x647FD60", Offset = "0x647ED60", VA = "0x647FD60")]
	public static int3x4 operator /(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B75")]
	[Address(RVA = "0x647FE30", Offset = "0x647EE30", VA = "0x647FE30")]
	public static int3x4 operator %(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B76")]
	[Address(RVA = "0x647FF40", Offset = "0x647EF40", VA = "0x647FF40")]
	public static int3x4 operator %(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B77")]
	[Address(RVA = "0x6480020", Offset = "0x647F020", VA = "0x6480020")]
	public static int3x4 operator %(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B78")]
	[Address(RVA = "0x64800F0", Offset = "0x647F0F0", VA = "0x64800F0")]
	public static int3x4 operator ++(int3x4 val)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B79")]
	[Address(RVA = "0x6480190", Offset = "0x647F190", VA = "0x6480190")]
	public static int3x4 operator --(int3x4 val)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B7A")]
	[Address(RVA = "0x6480230", Offset = "0x647F230", VA = "0x6480230")]
	public static bool3x4 operator <(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B7B")]
	[Address(RVA = "0x6480370", Offset = "0x647F370", VA = "0x6480370")]
	public static bool3x4 operator <(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B7C")]
	[Address(RVA = "0x6480470", Offset = "0x647F470", VA = "0x6480470")]
	public static bool3x4 operator <(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B7D")]
	[Address(RVA = "0x6480570", Offset = "0x647F570", VA = "0x6480570")]
	public static bool3x4 operator <=(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B7E")]
	[Address(RVA = "0x64806B0", Offset = "0x647F6B0", VA = "0x64806B0")]
	public static bool3x4 operator <=(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B7F")]
	[Address(RVA = "0x64807B0", Offset = "0x647F7B0", VA = "0x64807B0")]
	public static bool3x4 operator <=(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B80")]
	[Address(RVA = "0x64808B0", Offset = "0x647F8B0", VA = "0x64808B0")]
	public static bool3x4 operator >(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B81")]
	[Address(RVA = "0x64809F0", Offset = "0x647F9F0", VA = "0x64809F0")]
	public static bool3x4 operator >(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B82")]
	[Address(RVA = "0x6480AF0", Offset = "0x647FAF0", VA = "0x6480AF0")]
	public static bool3x4 operator >(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B83")]
	[Address(RVA = "0x6480BF0", Offset = "0x647FBF0", VA = "0x6480BF0")]
	public static bool3x4 operator >=(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B84")]
	[Address(RVA = "0x6480D30", Offset = "0x647FD30", VA = "0x6480D30")]
	public static bool3x4 operator >=(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B85")]
	[Address(RVA = "0x6480E30", Offset = "0x647FE30", VA = "0x6480E30")]
	public static bool3x4 operator >=(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B86")]
	[Address(RVA = "0x6480F30", Offset = "0x647FF30", VA = "0x6480F30")]
	public static int3x4 operator -(int3x4 val)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B87")]
	[Address(RVA = "0x6480FC0", Offset = "0x647FFC0", VA = "0x6480FC0")]
	public static int3x4 operator +(int3x4 val)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B88")]
	[Address(RVA = "0x6481010", Offset = "0x6480010", VA = "0x6481010")]
	public static int3x4 operator <<(int3x4 x, int n)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B89")]
	[Address(RVA = "0x64810C0", Offset = "0x64800C0", VA = "0x64810C0")]
	public static int3x4 operator >>(int3x4 x, int n)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B8A")]
	[Address(RVA = "0x6481170", Offset = "0x6480170", VA = "0x6481170")]
	public static bool3x4 operator ==(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B8B")]
	[Address(RVA = "0x64812B0", Offset = "0x64802B0", VA = "0x64812B0")]
	public static bool3x4 operator ==(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B8C")]
	[Address(RVA = "0x64813B0", Offset = "0x64803B0", VA = "0x64813B0")]
	public static bool3x4 operator ==(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B8D")]
	[Address(RVA = "0x64814B0", Offset = "0x64804B0", VA = "0x64814B0")]
	public static bool3x4 operator !=(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B8E")]
	[Address(RVA = "0x64815F0", Offset = "0x64805F0", VA = "0x64815F0")]
	public static bool3x4 operator !=(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B8F")]
	[Address(RVA = "0x64816F0", Offset = "0x64806F0", VA = "0x64816F0")]
	public static bool3x4 operator !=(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B90")]
	[Address(RVA = "0x64817F0", Offset = "0x64807F0", VA = "0x64817F0")]
	public static int3x4 operator ~(int3x4 val)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B91")]
	[Address(RVA = "0x6481850", Offset = "0x6480850", VA = "0x6481850")]
	public static int3x4 operator &(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B92")]
	[Address(RVA = "0x64818C0", Offset = "0x64808C0", VA = "0x64818C0")]
	public static int3x4 operator &(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B93")]
	[Address(RVA = "0x6481970", Offset = "0x6480970", VA = "0x6481970")]
	public static int3x4 operator &(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B94")]
	[Address(RVA = "0x6481A20", Offset = "0x6480A20", VA = "0x6481A20")]
	public static int3x4 operator |(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B95")]
	[Address(RVA = "0x6481A90", Offset = "0x6480A90", VA = "0x6481A90")]
	public static int3x4 operator |(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B96")]
	[Address(RVA = "0x6481B40", Offset = "0x6480B40", VA = "0x6481B40")]
	public static int3x4 operator |(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B97")]
	[Address(RVA = "0x6481BF0", Offset = "0x6480BF0", VA = "0x6481BF0")]
	public static int3x4 operator ^(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B98")]
	[Address(RVA = "0x6481C60", Offset = "0x6480C60", VA = "0x6481C60")]
	public static int3x4 operator ^(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B99")]
	[Address(RVA = "0x6481D10", Offset = "0x6480D10", VA = "0x6481D10")]
	public static int3x4 operator ^(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B9B")]
	[Address(RVA = "0x6481DD0", Offset = "0x6480DD0", VA = "0x6481DD0", Slot = "4")]
	public bool Equals(int3x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B9C")]
	[Address(RVA = "0x6481E50", Offset = "0x6480E50", VA = "0x6481E50", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B9D")]
	[Address(RVA = "0x6481F20", Offset = "0x6480F20", VA = "0x6481F20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B9E")]
	[Address(RVA = "0x6481FE0", Offset = "0x6480FE0", VA = "0x6481FE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B9F")]
	[Address(RVA = "0x6482450", Offset = "0x6481450", VA = "0x6482450", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
