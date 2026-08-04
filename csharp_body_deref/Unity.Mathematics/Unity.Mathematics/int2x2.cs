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
[Token(Token = "0x2000040")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int2x2 : IEquatable<int2x2>, IFormattable
{
	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x0")]
	public int2 c0;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x8")]
	public int2 c1;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int2x2 identity;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x10")]
	public static readonly int2x2 zero;

	[Token(Token = "0x170007CD")]
	public unsafe ref int2 this[int index]
	{
		[Token(Token = "0x60018DE")]
		[Address(RVA = "0x4ADF660", Offset = "0x4ADF660", VA = "0x4ADF660")]
		get
		{
			return ref *(int2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001899")]
	[Address(RVA = "0x4ADE8D0", Offset = "0x4ADE8D0", VA = "0x4ADE8D0")]
	public int2x2(int2 c0, int2 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600189A")]
	[Address(RVA = "0x4ADE8E0", Offset = "0x4ADE8E0", VA = "0x4ADE8E0")]
	public int2x2(int m00, int m01, int m10, int m11)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600189B")]
	[Address(RVA = "0x4ADE900", Offset = "0x4ADE900", VA = "0x4ADE900")]
	public int2x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600189C")]
	[Address(RVA = "0x4ADE920", Offset = "0x4ADE920", VA = "0x4ADE920")]
	public int2x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600189D")]
	[Address(RVA = "0x4ADE940", Offset = "0x4ADE940", VA = "0x4ADE940")]
	public int2x2(bool2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600189E")]
	[Address(RVA = "0x4ADE980", Offset = "0x4ADE980", VA = "0x4ADE980")]
	public int2x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600189F")]
	[Address(RVA = "0x4ADE9A0", Offset = "0x4ADE9A0", VA = "0x4ADE9A0")]
	public int2x2(uint2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018A0")]
	[Address(RVA = "0x4ADE9B0", Offset = "0x4ADE9B0", VA = "0x4ADE9B0")]
	public int2x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018A1")]
	[Address(RVA = "0x4ADE9D0", Offset = "0x4ADE9D0", VA = "0x4ADE9D0")]
	public int2x2(float2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018A2")]
	[Address(RVA = "0x4ADEA00", Offset = "0x4ADEA00", VA = "0x4ADEA00")]
	public int2x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018A3")]
	[Address(RVA = "0x4ADEA20", Offset = "0x4ADEA20", VA = "0x4ADEA20")]
	public int2x2(double2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018A4")]
	[Address(RVA = "0x4ADEA50", Offset = "0x4ADEA50", VA = "0x4ADEA50")]
	public static implicit operator int2x2(int v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018A5")]
	[Address(RVA = "0x4ADEA60", Offset = "0x4ADEA60", VA = "0x4ADEA60")]
	public static explicit operator int2x2(bool v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018A6")]
	[Address(RVA = "0x4ADEA80", Offset = "0x4ADEA80", VA = "0x4ADEA80")]
	public static explicit operator int2x2(bool2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018A7")]
	[Address(RVA = "0x4ADEAD0", Offset = "0x4ADEAD0", VA = "0x4ADEAD0")]
	public static explicit operator int2x2(uint v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018A8")]
	[Address(RVA = "0x4ADEAE0", Offset = "0x4ADEAE0", VA = "0x4ADEAE0")]
	public static explicit operator int2x2(uint2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018A9")]
	[Address(RVA = "0x4ADEAF0", Offset = "0x4ADEAF0", VA = "0x4ADEAF0")]
	public static explicit operator int2x2(float v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018AA")]
	[Address(RVA = "0x4ADEB10", Offset = "0x4ADEB10", VA = "0x4ADEB10")]
	public static explicit operator int2x2(float2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018AB")]
	[Address(RVA = "0x4ADEB40", Offset = "0x4ADEB40", VA = "0x4ADEB40")]
	public static explicit operator int2x2(double v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018AC")]
	[Address(RVA = "0x4ADEB60", Offset = "0x4ADEB60", VA = "0x4ADEB60")]
	public static explicit operator int2x2(double2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018AD")]
	[Address(RVA = "0x4ADEB90", Offset = "0x4ADEB90", VA = "0x4ADEB90")]
	public static int2x2 operator *(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018AE")]
	[Address(RVA = "0x4ADEBD0", Offset = "0x4ADEBD0", VA = "0x4ADEBD0")]
	public static int2x2 operator *(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018AF")]
	[Address(RVA = "0x4ADEC00", Offset = "0x4ADEC00", VA = "0x4ADEC00")]
	public static int2x2 operator *(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018B0")]
	[Address(RVA = "0x4ADEC30", Offset = "0x4ADEC30", VA = "0x4ADEC30")]
	public static int2x2 operator +(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018B1")]
	[Address(RVA = "0x4ADEC60", Offset = "0x4ADEC60", VA = "0x4ADEC60")]
	public static int2x2 operator +(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018B2")]
	[Address(RVA = "0x4ADEC90", Offset = "0x4ADEC90", VA = "0x4ADEC90")]
	public static int2x2 operator +(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018B3")]
	[Address(RVA = "0x4ADECC0", Offset = "0x4ADECC0", VA = "0x4ADECC0")]
	public static int2x2 operator -(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018B4")]
	[Address(RVA = "0x4ADECF0", Offset = "0x4ADECF0", VA = "0x4ADECF0")]
	public static int2x2 operator -(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018B5")]
	[Address(RVA = "0x4ADED20", Offset = "0x4ADED20", VA = "0x4ADED20")]
	public static int2x2 operator -(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018B6")]
	[Address(RVA = "0x4ADED50", Offset = "0x4ADED50", VA = "0x4ADED50")]
	public static int2x2 operator /(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018B7")]
	[Address(RVA = "0x4ADEDA0", Offset = "0x4ADEDA0", VA = "0x4ADEDA0")]
	public static int2x2 operator /(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018B8")]
	[Address(RVA = "0x4ADEDE0", Offset = "0x4ADEDE0", VA = "0x4ADEDE0")]
	public static int2x2 operator /(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018B9")]
	[Address(RVA = "0x4ADEE20", Offset = "0x4ADEE20", VA = "0x4ADEE20")]
	public static int2x2 operator %(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018BA")]
	[Address(RVA = "0x4ADEE70", Offset = "0x4ADEE70", VA = "0x4ADEE70")]
	public static int2x2 operator %(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018BB")]
	[Address(RVA = "0x4ADEEB0", Offset = "0x4ADEEB0", VA = "0x4ADEEB0")]
	public static int2x2 operator %(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018BC")]
	[Address(RVA = "0x4ADEEF0", Offset = "0x4ADEEF0", VA = "0x4ADEEF0")]
	public static int2x2 operator ++(int2x2 val)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018BD")]
	[Address(RVA = "0x4ADEF30", Offset = "0x4ADEF30", VA = "0x4ADEF30")]
	public static int2x2 operator --(int2x2 val)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018BE")]
	[Address(RVA = "0x4ADEF70", Offset = "0x4ADEF70", VA = "0x4ADEF70")]
	public static bool2x2 operator <(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018BF")]
	[Address(RVA = "0x4ADEFC0", Offset = "0x4ADEFC0", VA = "0x4ADEFC0")]
	public static bool2x2 operator <(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018C0")]
	[Address(RVA = "0x4ADF000", Offset = "0x4ADF000", VA = "0x4ADF000")]
	public static bool2x2 operator <(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018C1")]
	[Address(RVA = "0x4ADF040", Offset = "0x4ADF040", VA = "0x4ADF040")]
	public static bool2x2 operator <=(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018C2")]
	[Address(RVA = "0x4ADF090", Offset = "0x4ADF090", VA = "0x4ADF090")]
	public static bool2x2 operator <=(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018C3")]
	[Address(RVA = "0x4ADF0D0", Offset = "0x4ADF0D0", VA = "0x4ADF0D0")]
	public static bool2x2 operator <=(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018C4")]
	[Address(RVA = "0x4ADF110", Offset = "0x4ADF110", VA = "0x4ADF110")]
	public static bool2x2 operator >(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018C5")]
	[Address(RVA = "0x4ADF160", Offset = "0x4ADF160", VA = "0x4ADF160")]
	public static bool2x2 operator >(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018C6")]
	[Address(RVA = "0x4ADF1A0", Offset = "0x4ADF1A0", VA = "0x4ADF1A0")]
	public static bool2x2 operator >(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018C7")]
	[Address(RVA = "0x4ADF1E0", Offset = "0x4ADF1E0", VA = "0x4ADF1E0")]
	public static bool2x2 operator >=(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018C8")]
	[Address(RVA = "0x4ADF230", Offset = "0x4ADF230", VA = "0x4ADF230")]
	public static bool2x2 operator >=(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018C9")]
	[Address(RVA = "0x4ADF270", Offset = "0x4ADF270", VA = "0x4ADF270")]
	public static bool2x2 operator >=(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018CA")]
	[Address(RVA = "0x4ADF2B0", Offset = "0x4ADF2B0", VA = "0x4ADF2B0")]
	public static int2x2 operator -(int2x2 val)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018CB")]
	[Address(RVA = "0x4ADF2F0", Offset = "0x4ADF2F0", VA = "0x4ADF2F0")]
	public static int2x2 operator +(int2x2 val)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018CC")]
	[Address(RVA = "0x4ADF300", Offset = "0x4ADF300", VA = "0x4ADF300")]
	public static int2x2 operator <<(int2x2 x, int n)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018CD")]
	[Address(RVA = "0x4ADF330", Offset = "0x4ADF330", VA = "0x4ADF330")]
	public static int2x2 operator >>(int2x2 x, int n)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018CE")]
	[Address(RVA = "0x4ADF360", Offset = "0x4ADF360", VA = "0x4ADF360")]
	public static bool2x2 operator ==(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018CF")]
	[Address(RVA = "0x4ADF3B0", Offset = "0x4ADF3B0", VA = "0x4ADF3B0")]
	public static bool2x2 operator ==(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018D0")]
	[Address(RVA = "0x4ADF3F0", Offset = "0x4ADF3F0", VA = "0x4ADF3F0")]
	public static bool2x2 operator ==(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018D1")]
	[Address(RVA = "0x4ADF430", Offset = "0x4ADF430", VA = "0x4ADF430")]
	public static bool2x2 operator !=(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018D2")]
	[Address(RVA = "0x4ADF480", Offset = "0x4ADF480", VA = "0x4ADF480")]
	public static bool2x2 operator !=(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018D3")]
	[Address(RVA = "0x4ADF4C0", Offset = "0x4ADF4C0", VA = "0x4ADF4C0")]
	public static bool2x2 operator !=(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018D4")]
	[Address(RVA = "0x4ADF500", Offset = "0x4ADF500", VA = "0x4ADF500")]
	public static int2x2 operator ~(int2x2 val)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018D5")]
	[Address(RVA = "0x4ADF510", Offset = "0x4ADF510", VA = "0x4ADF510")]
	public static int2x2 operator &(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018D6")]
	[Address(RVA = "0x4ADF520", Offset = "0x4ADF520", VA = "0x4ADF520")]
	public static int2x2 operator &(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018D7")]
	[Address(RVA = "0x4ADF550", Offset = "0x4ADF550", VA = "0x4ADF550")]
	public static int2x2 operator &(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018D8")]
	[Address(RVA = "0x4ADF580", Offset = "0x4ADF580", VA = "0x4ADF580")]
	public static int2x2 operator |(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018D9")]
	[Address(RVA = "0x4ADF590", Offset = "0x4ADF590", VA = "0x4ADF590")]
	public static int2x2 operator |(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018DA")]
	[Address(RVA = "0x4ADF5C0", Offset = "0x4ADF5C0", VA = "0x4ADF5C0")]
	public static int2x2 operator |(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018DB")]
	[Address(RVA = "0x4ADF5F0", Offset = "0x4ADF5F0", VA = "0x4ADF5F0")]
	public static int2x2 operator ^(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018DC")]
	[Address(RVA = "0x4ADF600", Offset = "0x4ADF600", VA = "0x4ADF600")]
	public static int2x2 operator ^(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018DD")]
	[Address(RVA = "0x4ADF630", Offset = "0x4ADF630", VA = "0x4ADF630")]
	public static int2x2 operator ^(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018DF")]
	[Address(RVA = "0x4ADF670", Offset = "0x4ADF670", VA = "0x4ADF670", Slot = "4")]
	public bool Equals(int2x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60018E0")]
	[Address(RVA = "0x4ADF690", Offset = "0x4ADF690", VA = "0x4ADF690", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018E1")]
	[Address(RVA = "0x4ADF710", Offset = "0x4ADF710", VA = "0x4ADF710", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018E2")]
	[Address(RVA = "0x4ADF770", Offset = "0x4ADF770", VA = "0x4ADF770", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018E3")]
	[Address(RVA = "0x4ADF940", Offset = "0x4ADF940", VA = "0x4ADF940", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
