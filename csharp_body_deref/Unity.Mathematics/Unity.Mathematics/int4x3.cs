// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.int4x3
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
[Token(Token = "0x200004B")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int4x3 : IEquatable<int4x3>, IFormattable
{
	[Token(Token = "0x400011F")]
	[FieldOffset(Offset = "0x0")]
	public int4 c0;

	[Token(Token = "0x4000120")]
	[FieldOffset(Offset = "0x10")]
	public int4 c1;

	[Token(Token = "0x4000121")]
	[FieldOffset(Offset = "0x20")]
	public int4 c2;

	[Token(Token = "0x4000122")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int4x3 zero;

	[Token(Token = "0x1700099B")]
	public unsafe ref int4 this[int index]
	{
		[Token(Token = "0x6001D9C")]
		[Address(RVA = "0x4AF9F00", Offset = "0x4AF9F00", VA = "0x4AF9F00")]
		get
		{
			return ref *(int4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D57")]
	[Address(RVA = "0x4AF7240", Offset = "0x4AF7240", VA = "0x4AF7240")]
	public int4x3(int4 c0, int4 c1, int4 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D58")]
	[Address(RVA = "0x4AF7260", Offset = "0x4AF7260", VA = "0x4AF7260")]
	public int4x3(int m00, int m01, int m02, int m10, int m11, int m12, int m20, int m21, int m22, int m30, int m31, int m32)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D59")]
	[Address(RVA = "0x4AF72C0", Offset = "0x4AF72C0", VA = "0x4AF72C0")]
	public int4x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D5A")]
	[Address(RVA = "0x4AF72F0", Offset = "0x4AF72F0", VA = "0x4AF72F0")]
	public int4x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D5B")]
	[Address(RVA = "0x4AF7320", Offset = "0x4AF7320", VA = "0x4AF7320")]
	public int4x3(bool4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D5C")]
	[Address(RVA = "0x4AF73D0", Offset = "0x4AF73D0", VA = "0x4AF73D0")]
	public int4x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D5D")]
	[Address(RVA = "0x4AF7400", Offset = "0x4AF7400", VA = "0x4AF7400")]
	public int4x3(uint4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D5E")]
	[Address(RVA = "0x4AF7420", Offset = "0x4AF7420", VA = "0x4AF7420")]
	public int4x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D5F")]
	[Address(RVA = "0x4AF7450", Offset = "0x4AF7450", VA = "0x4AF7450")]
	public int4x3(float4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D60")]
	[Address(RVA = "0x4AF7500", Offset = "0x4AF7500", VA = "0x4AF7500")]
	public int4x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D61")]
	[Address(RVA = "0x4AF7530", Offset = "0x4AF7530", VA = "0x4AF7530")]
	public int4x3(double4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D62")]
	[Address(RVA = "0x4AF75C0", Offset = "0x4AF75C0", VA = "0x4AF75C0")]
	public static implicit operator int4x3(int v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D63")]
	[Address(RVA = "0x4AF75F0", Offset = "0x4AF75F0", VA = "0x4AF75F0")]
	public static explicit operator int4x3(bool v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D64")]
	[Address(RVA = "0x4AF7620", Offset = "0x4AF7620", VA = "0x4AF7620")]
	public static explicit operator int4x3(bool4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D65")]
	[Address(RVA = "0x4AF76D0", Offset = "0x4AF76D0", VA = "0x4AF76D0")]
	public static explicit operator int4x3(uint v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D66")]
	[Address(RVA = "0x4AF7700", Offset = "0x4AF7700", VA = "0x4AF7700")]
	public static explicit operator int4x3(uint4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D67")]
	[Address(RVA = "0x4AF7720", Offset = "0x4AF7720", VA = "0x4AF7720")]
	public static explicit operator int4x3(float v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D68")]
	[Address(RVA = "0x4AF7750", Offset = "0x4AF7750", VA = "0x4AF7750")]
	public static explicit operator int4x3(float4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D69")]
	[Address(RVA = "0x4AF7810", Offset = "0x4AF7810", VA = "0x4AF7810")]
	public static explicit operator int4x3(double v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D6A")]
	[Address(RVA = "0x4AF7840", Offset = "0x4AF7840", VA = "0x4AF7840")]
	public static explicit operator int4x3(double4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D6B")]
	[Address(RVA = "0x4AF78F0", Offset = "0x4AF78F0", VA = "0x4AF78F0")]
	public static int4x3 operator *(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D6C")]
	[Address(RVA = "0x4AF79E0", Offset = "0x4AF79E0", VA = "0x4AF79E0")]
	public static int4x3 operator *(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D6D")]
	[Address(RVA = "0x4AF7AA0", Offset = "0x4AF7AA0", VA = "0x4AF7AA0")]
	public static int4x3 operator *(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D6E")]
	[Address(RVA = "0x4AF7B60", Offset = "0x4AF7B60", VA = "0x4AF7B60")]
	public static int4x3 operator +(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D6F")]
	[Address(RVA = "0x4AF7C00", Offset = "0x4AF7C00", VA = "0x4AF7C00")]
	public static int4x3 operator +(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D70")]
	[Address(RVA = "0x4AF7C90", Offset = "0x4AF7C90", VA = "0x4AF7C90")]
	public static int4x3 operator +(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D71")]
	[Address(RVA = "0x4AF7D20", Offset = "0x4AF7D20", VA = "0x4AF7D20")]
	public static int4x3 operator -(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D72")]
	[Address(RVA = "0x4AF7DC0", Offset = "0x4AF7DC0", VA = "0x4AF7DC0")]
	public static int4x3 operator -(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D73")]
	[Address(RVA = "0x4AF7E50", Offset = "0x4AF7E50", VA = "0x4AF7E50")]
	public static int4x3 operator -(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D74")]
	[Address(RVA = "0x4AF7EF0", Offset = "0x4AF7EF0", VA = "0x4AF7EF0")]
	public static int4x3 operator /(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D75")]
	[Address(RVA = "0x4AF8020", Offset = "0x4AF8020", VA = "0x4AF8020")]
	public static int4x3 operator /(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D76")]
	[Address(RVA = "0x4AF8110", Offset = "0x4AF8110", VA = "0x4AF8110")]
	public static int4x3 operator /(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D77")]
	[Address(RVA = "0x4AF8200", Offset = "0x4AF8200", VA = "0x4AF8200")]
	public static int4x3 operator %(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D78")]
	[Address(RVA = "0x4AF8330", Offset = "0x4AF8330", VA = "0x4AF8330")]
	public static int4x3 operator %(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D79")]
	[Address(RVA = "0x4AF8420", Offset = "0x4AF8420", VA = "0x4AF8420")]
	public static int4x3 operator %(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D7A")]
	[Address(RVA = "0x4AF8510", Offset = "0x4AF8510", VA = "0x4AF8510")]
	public static int4x3 operator ++(int4x3 val)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D7B")]
	[Address(RVA = "0x4AF8590", Offset = "0x4AF8590", VA = "0x4AF8590")]
	public static int4x3 operator --(int4x3 val)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D7C")]
	[Address(RVA = "0x4AF8610", Offset = "0x4AF8610", VA = "0x4AF8610")]
	public static bool4x3 operator <(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D7D")]
	[Address(RVA = "0x4AF8750", Offset = "0x4AF8750", VA = "0x4AF8750")]
	public static bool4x3 operator <(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D7E")]
	[Address(RVA = "0x4AF8840", Offset = "0x4AF8840", VA = "0x4AF8840")]
	public static bool4x3 operator <(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D7F")]
	[Address(RVA = "0x4AF8930", Offset = "0x4AF8930", VA = "0x4AF8930")]
	public static bool4x3 operator <=(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D80")]
	[Address(RVA = "0x4AF8A70", Offset = "0x4AF8A70", VA = "0x4AF8A70")]
	public static bool4x3 operator <=(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D81")]
	[Address(RVA = "0x4AF8B60", Offset = "0x4AF8B60", VA = "0x4AF8B60")]
	public static bool4x3 operator <=(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D82")]
	[Address(RVA = "0x4AF8C50", Offset = "0x4AF8C50", VA = "0x4AF8C50")]
	public static bool4x3 operator >(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D83")]
	[Address(RVA = "0x4AF8D90", Offset = "0x4AF8D90", VA = "0x4AF8D90")]
	public static bool4x3 operator >(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D84")]
	[Address(RVA = "0x4AF8E80", Offset = "0x4AF8E80", VA = "0x4AF8E80")]
	public static bool4x3 operator >(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D85")]
	[Address(RVA = "0x4AF8F70", Offset = "0x4AF8F70", VA = "0x4AF8F70")]
	public static bool4x3 operator >=(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D86")]
	[Address(RVA = "0x4AF90B0", Offset = "0x4AF90B0", VA = "0x4AF90B0")]
	public static bool4x3 operator >=(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D87")]
	[Address(RVA = "0x4AF91A0", Offset = "0x4AF91A0", VA = "0x4AF91A0")]
	public static bool4x3 operator >=(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D88")]
	[Address(RVA = "0x4AF9290", Offset = "0x4AF9290", VA = "0x4AF9290")]
	public static int4x3 operator -(int4x3 val)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D89")]
	[Address(RVA = "0x4AF9300", Offset = "0x4AF9300", VA = "0x4AF9300")]
	public static int4x3 operator +(int4x3 val)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8A")]
	[Address(RVA = "0x4AF9320", Offset = "0x4AF9320", VA = "0x4AF9320")]
	public static int4x3 operator <<(int4x3 x, int n)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8B")]
	[Address(RVA = "0x4AF93E0", Offset = "0x4AF93E0", VA = "0x4AF93E0")]
	public static int4x3 operator >>(int4x3 x, int n)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8C")]
	[Address(RVA = "0x4AF94A0", Offset = "0x4AF94A0", VA = "0x4AF94A0")]
	public static bool4x3 operator ==(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8D")]
	[Address(RVA = "0x4AF95E0", Offset = "0x4AF95E0", VA = "0x4AF95E0")]
	public static bool4x3 operator ==(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8E")]
	[Address(RVA = "0x4AF96D0", Offset = "0x4AF96D0", VA = "0x4AF96D0")]
	public static bool4x3 operator ==(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8F")]
	[Address(RVA = "0x4AF97C0", Offset = "0x4AF97C0", VA = "0x4AF97C0")]
	public static bool4x3 operator !=(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D90")]
	[Address(RVA = "0x4AF9900", Offset = "0x4AF9900", VA = "0x4AF9900")]
	public static bool4x3 operator !=(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D91")]
	[Address(RVA = "0x4AF99F0", Offset = "0x4AF99F0", VA = "0x4AF99F0")]
	public static bool4x3 operator !=(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D92")]
	[Address(RVA = "0x4AF9AE0", Offset = "0x4AF9AE0", VA = "0x4AF9AE0")]
	public static int4x3 operator ~(int4x3 val)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D93")]
	[Address(RVA = "0x4AF9B10", Offset = "0x4AF9B10", VA = "0x4AF9B10")]
	public static int4x3 operator &(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D94")]
	[Address(RVA = "0x4AF9B40", Offset = "0x4AF9B40", VA = "0x4AF9B40")]
	public static int4x3 operator &(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D95")]
	[Address(RVA = "0x4AF9BD0", Offset = "0x4AF9BD0", VA = "0x4AF9BD0")]
	public static int4x3 operator &(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D96")]
	[Address(RVA = "0x4AF9C60", Offset = "0x4AF9C60", VA = "0x4AF9C60")]
	public static int4x3 operator |(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D97")]
	[Address(RVA = "0x4AF9C90", Offset = "0x4AF9C90", VA = "0x4AF9C90")]
	public static int4x3 operator |(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D98")]
	[Address(RVA = "0x4AF9D20", Offset = "0x4AF9D20", VA = "0x4AF9D20")]
	public static int4x3 operator |(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D99")]
	[Address(RVA = "0x4AF9DB0", Offset = "0x4AF9DB0", VA = "0x4AF9DB0")]
	public static int4x3 operator ^(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D9A")]
	[Address(RVA = "0x4AF9DE0", Offset = "0x4AF9DE0", VA = "0x4AF9DE0")]
	public static int4x3 operator ^(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D9B")]
	[Address(RVA = "0x4AF9E70", Offset = "0x4AF9E70", VA = "0x4AF9E70")]
	public static int4x3 operator ^(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D9D")]
	[Address(RVA = "0x4AF9F10", Offset = "0x4AF9F10", VA = "0x4AF9F10", Slot = "4")]
	public bool Equals(int4x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D9E")]
	[Address(RVA = "0x4AF9F90", Offset = "0x4AF9F90", VA = "0x4AF9F90", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D9F")]
	[Address(RVA = "0x4AFA070", Offset = "0x4AFA070", VA = "0x4AFA070", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA0")]
	[Address(RVA = "0x4AFA180", Offset = "0x4AFA180", VA = "0x4AFA180", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA1")]
	[Address(RVA = "0x4AFA5E0", Offset = "0x4AFA5E0", VA = "0x4AFA5E0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
