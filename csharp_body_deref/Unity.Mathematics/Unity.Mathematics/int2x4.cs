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
[Token(Token = "0x2000043")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int2x4 : IEquatable<int2x4>, IFormattable
{
	[Token(Token = "0x4000101")]
	[FieldOffset(Offset = "0x0")]
	public int2 c0;

	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x8")]
	public int2 c1;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x10")]
	public int2 c2;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x18")]
	public int2 c3;

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int2x4 zero;

	[Token(Token = "0x170007CF")]
	public unsafe ref int2 this[int index]
	{
		[Token(Token = "0x60019E8")]
		[Address(RVA = "0x6478260", Offset = "0x6477260", VA = "0x6478260")]
		get
		{
			return ref *(int2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019A3")]
	[Address(RVA = "0x6476640", Offset = "0x6475640", VA = "0x6476640")]
	public int2x4(int2 c0, int2 c1, int2 c2, int2 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019A4")]
	[Address(RVA = "0x6476650", Offset = "0x6475650", VA = "0x6476650")]
	public int2x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019A5")]
	[Address(RVA = "0x64766A0", Offset = "0x64756A0", VA = "0x64766A0")]
	public int2x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019A6")]
	[Address(RVA = "0x64766C0", Offset = "0x64756C0", VA = "0x64766C0")]
	public int2x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019A7")]
	[Address(RVA = "0x64766F0", Offset = "0x64756F0", VA = "0x64766F0")]
	public int2x4(bool2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019A8")]
	[Address(RVA = "0x6476760", Offset = "0x6475760", VA = "0x6476760")]
	public int2x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019A9")]
	[Address(RVA = "0x6476780", Offset = "0x6475780", VA = "0x6476780")]
	public int2x4(uint2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019AA")]
	[Address(RVA = "0x64767A0", Offset = "0x64757A0", VA = "0x64767A0")]
	public int2x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019AB")]
	[Address(RVA = "0x64767C0", Offset = "0x64757C0", VA = "0x64767C0")]
	public int2x4(float2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019AC")]
	[Address(RVA = "0x6476820", Offset = "0x6475820", VA = "0x6476820")]
	public int2x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019AD")]
	[Address(RVA = "0x6476840", Offset = "0x6475840", VA = "0x6476840")]
	public int2x4(double2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019AE")]
	[Address(RVA = "0x6476890", Offset = "0x6475890", VA = "0x6476890")]
	public static implicit operator int2x4(int v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019AF")]
	[Address(RVA = "0x64768B0", Offset = "0x64758B0", VA = "0x64768B0")]
	public static explicit operator int2x4(bool v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019B0")]
	[Address(RVA = "0x64768E0", Offset = "0x64758E0", VA = "0x64768E0")]
	public static explicit operator int2x4(bool2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019B1")]
	[Address(RVA = "0x6476960", Offset = "0x6475960", VA = "0x6476960")]
	public static explicit operator int2x4(uint v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019B2")]
	[Address(RVA = "0x6476980", Offset = "0x6475980", VA = "0x6476980")]
	public static explicit operator int2x4(uint2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019B3")]
	[Address(RVA = "0x64769A0", Offset = "0x64759A0", VA = "0x64769A0")]
	public static explicit operator int2x4(float v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019B4")]
	[Address(RVA = "0x64769D0", Offset = "0x64759D0", VA = "0x64769D0")]
	public static explicit operator int2x4(float2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019B5")]
	[Address(RVA = "0x6476A30", Offset = "0x6475A30", VA = "0x6476A30")]
	public static explicit operator int2x4(double v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019B6")]
	[Address(RVA = "0x6476A60", Offset = "0x6475A60", VA = "0x6476A60")]
	public static explicit operator int2x4(double2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019B7")]
	[Address(RVA = "0x6476AC0", Offset = "0x6475AC0", VA = "0x6476AC0")]
	public static int2x4 operator *(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019B8")]
	[Address(RVA = "0x6476B60", Offset = "0x6475B60", VA = "0x6476B60")]
	public static int2x4 operator *(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019B9")]
	[Address(RVA = "0x6476BE0", Offset = "0x6475BE0", VA = "0x6476BE0")]
	public static int2x4 operator *(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019BA")]
	[Address(RVA = "0x6476C60", Offset = "0x6475C60", VA = "0x6476C60")]
	public static int2x4 operator +(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019BB")]
	[Address(RVA = "0x6476D00", Offset = "0x6475D00", VA = "0x6476D00")]
	public static int2x4 operator +(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019BC")]
	[Address(RVA = "0x6476D30", Offset = "0x6475D30", VA = "0x6476D30")]
	public static int2x4 operator +(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019BD")]
	[Address(RVA = "0x6476D60", Offset = "0x6475D60", VA = "0x6476D60")]
	public static int2x4 operator -(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019BE")]
	[Address(RVA = "0x6476E10", Offset = "0x6475E10", VA = "0x6476E10")]
	public static int2x4 operator -(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019BF")]
	[Address(RVA = "0x6476E40", Offset = "0x6475E40", VA = "0x6476E40")]
	public static int2x4 operator -(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019C0")]
	[Address(RVA = "0x6476E70", Offset = "0x6475E70", VA = "0x6476E70")]
	public static int2x4 operator /(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019C1")]
	[Address(RVA = "0x6476F30", Offset = "0x6475F30", VA = "0x6476F30")]
	public static int2x4 operator /(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019C2")]
	[Address(RVA = "0x6476FC0", Offset = "0x6475FC0", VA = "0x6476FC0")]
	public static int2x4 operator /(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019C3")]
	[Address(RVA = "0x6477050", Offset = "0x6476050", VA = "0x6477050")]
	public static int2x4 operator %(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019C4")]
	[Address(RVA = "0x6477110", Offset = "0x6476110", VA = "0x6477110")]
	public static int2x4 operator %(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019C5")]
	[Address(RVA = "0x64771A0", Offset = "0x64761A0", VA = "0x64771A0")]
	public static int2x4 operator %(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019C6")]
	[Address(RVA = "0x6477230", Offset = "0x6476230", VA = "0x6477230")]
	public static int2x4 operator ++(int2x4 val)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019C7")]
	[Address(RVA = "0x6477280", Offset = "0x6476280", VA = "0x6477280")]
	public static int2x4 operator --(int2x4 val)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019C8")]
	[Address(RVA = "0x64772D0", Offset = "0x64762D0", VA = "0x64772D0")]
	public static bool2x4 operator <(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019C9")]
	[Address(RVA = "0x64773A0", Offset = "0x64763A0", VA = "0x64773A0")]
	public static bool2x4 operator <(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019CA")]
	[Address(RVA = "0x6477440", Offset = "0x6476440", VA = "0x6477440")]
	public static bool2x4 operator <(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019CB")]
	[Address(RVA = "0x64774E0", Offset = "0x64764E0", VA = "0x64774E0")]
	public static bool2x4 operator <=(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019CC")]
	[Address(RVA = "0x64775B0", Offset = "0x64765B0", VA = "0x64775B0")]
	public static bool2x4 operator <=(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019CD")]
	[Address(RVA = "0x6477650", Offset = "0x6476650", VA = "0x6477650")]
	public static bool2x4 operator <=(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019CE")]
	[Address(RVA = "0x64776F0", Offset = "0x64766F0", VA = "0x64776F0")]
	public static bool2x4 operator >(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019CF")]
	[Address(RVA = "0x64777C0", Offset = "0x64767C0", VA = "0x64777C0")]
	public static bool2x4 operator >(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019D0")]
	[Address(RVA = "0x6477860", Offset = "0x6476860", VA = "0x6477860")]
	public static bool2x4 operator >(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019D1")]
	[Address(RVA = "0x6477900", Offset = "0x6476900", VA = "0x6477900")]
	public static bool2x4 operator >=(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019D2")]
	[Address(RVA = "0x64779D0", Offset = "0x64769D0", VA = "0x64779D0")]
	public static bool2x4 operator >=(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019D3")]
	[Address(RVA = "0x6477A70", Offset = "0x6476A70", VA = "0x6477A70")]
	public static bool2x4 operator >=(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019D4")]
	[Address(RVA = "0x6477B10", Offset = "0x6476B10", VA = "0x6477B10")]
	public static int2x4 operator -(int2x4 val)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019D5")]
	[Address(RVA = "0x6477B70", Offset = "0x6476B70", VA = "0x6477B70")]
	public static int2x4 operator +(int2x4 val)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019D6")]
	[Address(RVA = "0x6477B90", Offset = "0x6476B90", VA = "0x6477B90")]
	public static int2x4 operator <<(int2x4 x, int n)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019D7")]
	[Address(RVA = "0x6477C10", Offset = "0x6476C10", VA = "0x6477C10")]
	public static int2x4 operator >>(int2x4 x, int n)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019D8")]
	[Address(RVA = "0x6477C90", Offset = "0x6476C90", VA = "0x6477C90")]
	public static bool2x4 operator ==(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019D9")]
	[Address(RVA = "0x6477D60", Offset = "0x6476D60", VA = "0x6477D60")]
	public static bool2x4 operator ==(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019DA")]
	[Address(RVA = "0x6477E00", Offset = "0x6476E00", VA = "0x6477E00")]
	public static bool2x4 operator ==(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019DB")]
	[Address(RVA = "0x6477EA0", Offset = "0x6476EA0", VA = "0x6477EA0")]
	public static bool2x4 operator !=(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019DC")]
	[Address(RVA = "0x6477F70", Offset = "0x6476F70", VA = "0x6477F70")]
	public static bool2x4 operator !=(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019DD")]
	[Address(RVA = "0x6478010", Offset = "0x6477010", VA = "0x6478010")]
	public static bool2x4 operator !=(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019DE")]
	[Address(RVA = "0x64780B0", Offset = "0x64770B0", VA = "0x64780B0")]
	public static int2x4 operator ~(int2x4 val)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019DF")]
	[Address(RVA = "0x64780E0", Offset = "0x64770E0", VA = "0x64780E0")]
	public static int2x4 operator &(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019E0")]
	[Address(RVA = "0x6478100", Offset = "0x6477100", VA = "0x6478100")]
	public static int2x4 operator &(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019E1")]
	[Address(RVA = "0x6478130", Offset = "0x6477130", VA = "0x6478130")]
	public static int2x4 operator &(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019E2")]
	[Address(RVA = "0x6478160", Offset = "0x6477160", VA = "0x6478160")]
	public static int2x4 operator |(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019E3")]
	[Address(RVA = "0x6478180", Offset = "0x6477180", VA = "0x6478180")]
	public static int2x4 operator |(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019E4")]
	[Address(RVA = "0x64781B0", Offset = "0x64771B0", VA = "0x64781B0")]
	public static int2x4 operator |(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019E5")]
	[Address(RVA = "0x64781E0", Offset = "0x64771E0", VA = "0x64781E0")]
	public static int2x4 operator ^(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019E6")]
	[Address(RVA = "0x6478200", Offset = "0x6477200", VA = "0x6478200")]
	public static int2x4 operator ^(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019E7")]
	[Address(RVA = "0x6478230", Offset = "0x6477230", VA = "0x6478230")]
	public static int2x4 operator ^(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019E9")]
	[Address(RVA = "0x6478270", Offset = "0x6477270", VA = "0x6478270", Slot = "4")]
	public bool Equals(int2x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60019EA")]
	[Address(RVA = "0x64782D0", Offset = "0x64772D0", VA = "0x64782D0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019EB")]
	[Address(RVA = "0x6478370", Offset = "0x6477370", VA = "0x6478370", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019EC")]
	[Address(RVA = "0x6478400", Offset = "0x6477400", VA = "0x6478400", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019ED")]
	[Address(RVA = "0x6478720", Offset = "0x6477720", VA = "0x6478720", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
