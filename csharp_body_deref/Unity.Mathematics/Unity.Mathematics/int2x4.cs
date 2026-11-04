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
		[Address(RVA = "0x841B10", Offset = "0x840110", VA = "0x180841B10")]
		get
		{
			return ref *(int2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019A3")]
	[Address(RVA = "0x298BD00", Offset = "0x298A300", VA = "0x18298BD00")]
	public int2x4(int2 c0, int2 c1, int2 c2, int2 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019A4")]
	[Address(RVA = "0x2A290F0", Offset = "0x2A276F0", VA = "0x182A290F0")]
	public int2x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019A5")]
	[Address(RVA = "0x2A28F80", Offset = "0x2A27580", VA = "0x182A28F80")]
	public int2x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019A6")]
	[Address(RVA = "0x29C8F10", Offset = "0x29C7510", VA = "0x1829C8F10")]
	public int2x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019A7")]
	[Address(RVA = "0x2A29040", Offset = "0x2A27640", VA = "0x182A29040")]
	public int2x4(bool2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019A8")]
	[Address(RVA = "0x2A28F80", Offset = "0x2A27580", VA = "0x182A28F80")]
	public int2x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019A9")]
	[Address(RVA = "0x2A28FD0", Offset = "0x2A275D0", VA = "0x182A28FD0")]
	public int2x4(uint2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019AA")]
	[Address(RVA = "0x2AA0620", Offset = "0x2A9EC20", VA = "0x182AA0620")]
	public int2x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019AB")]
	[Address(RVA = "0x2AA0550", Offset = "0x2A9EB50", VA = "0x182AA0550")]
	public int2x4(float2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019AC")]
	[Address(RVA = "0x2AA0690", Offset = "0x2A9EC90", VA = "0x182AA0690")]
	public int2x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019AD")]
	[Address(RVA = "0x2AA05B0", Offset = "0x2A9EBB0", VA = "0x182AA05B0")]
	public int2x4(double2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019AE")]
	[Address(RVA = "0x29EA970", Offset = "0x29E8F70", VA = "0x1829EA970")]
	public static implicit operator int2x4(int v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019AF")]
	[Address(RVA = "0x2A29EC0", Offset = "0x2A284C0", VA = "0x182A29EC0")]
	public static explicit operator int2x4(bool v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019B0")]
	[Address(RVA = "0x29EA8C0", Offset = "0x29E8EC0", VA = "0x1829EA8C0")]
	public static explicit operator int2x4(bool2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019B1")]
	[Address(RVA = "0x29EA970", Offset = "0x29E8F70", VA = "0x1829EA970")]
	public static explicit operator int2x4(uint v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019B2")]
	[Address(RVA = "0x29EA9C0", Offset = "0x29E8FC0", VA = "0x1829EA9C0")]
	public static explicit operator int2x4(uint2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019B3")]
	[Address(RVA = "0x29EAC40", Offset = "0x29E9240", VA = "0x1829EAC40")]
	public static explicit operator int2x4(float v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019B4")]
	[Address(RVA = "0x29EABD0", Offset = "0x29E91D0", VA = "0x1829EABD0")]
	public static explicit operator int2x4(float2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019B5")]
	[Address(RVA = "0x29EAB60", Offset = "0x29E9160", VA = "0x1829EAB60")]
	public static explicit operator int2x4(double v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019B6")]
	[Address(RVA = "0x29EACB0", Offset = "0x29E92B0", VA = "0x1829EACB0")]
	public static explicit operator int2x4(double2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019B7")]
	[Address(RVA = "0x2A2AC90", Offset = "0x2A29290", VA = "0x182A2AC90")]
	public static int2x4 operator *(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019B8")]
	[Address(RVA = "0x2A2AD50", Offset = "0x2A29350", VA = "0x182A2AD50")]
	public static int2x4 operator *(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019B9")]
	[Address(RVA = "0x2A2ABF0", Offset = "0x2A291F0", VA = "0x182A2ABF0")]
	public static int2x4 operator *(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019BA")]
	[Address(RVA = "0x2A291E0", Offset = "0x2A277E0", VA = "0x182A291E0")]
	public static int2x4 operator +(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019BB")]
	[Address(RVA = "0x2A29150", Offset = "0x2A27750", VA = "0x182A29150")]
	public static int2x4 operator +(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019BC")]
	[Address(RVA = "0x2A29290", Offset = "0x2A27890", VA = "0x182A29290")]
	public static int2x4 operator +(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019BD")]
	[Address(RVA = "0x2A2B060", Offset = "0x2A29660", VA = "0x182A2B060")]
	public static int2x4 operator -(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019BE")]
	[Address(RVA = "0x2A2AF20", Offset = "0x2A29520", VA = "0x182A2AF20")]
	public static int2x4 operator -(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019BF")]
	[Address(RVA = "0x2A2AFC0", Offset = "0x2A295C0", VA = "0x182A2AFC0")]
	public static int2x4 operator -(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019C0")]
	[Address(RVA = "0x2AA0860", Offset = "0x2A9EE60", VA = "0x182AA0860")]
	public static int2x4 operator /(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019C1")]
	[Address(RVA = "0x2AA0700", Offset = "0x2A9ED00", VA = "0x182AA0700")]
	public static int2x4 operator /(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019C2")]
	[Address(RVA = "0x2AA07B0", Offset = "0x2A9EDB0", VA = "0x182AA07B0")]
	public static int2x4 operator /(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019C3")]
	[Address(RVA = "0x2AA1170", Offset = "0x2A9F770", VA = "0x182AA1170")]
	public static int2x4 operator %(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019C4")]
	[Address(RVA = "0x2AA1250", Offset = "0x2A9F850", VA = "0x182AA1250")]
	public static int2x4 operator %(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019C5")]
	[Address(RVA = "0x2AA10C0", Offset = "0x2A9F6C0", VA = "0x182AA10C0")]
	public static int2x4 operator %(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019C6")]
	[Address(RVA = "0x2A2A2B0", Offset = "0x2A288B0", VA = "0x182A2A2B0")]
	public static int2x4 operator ++(int2x4 val)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019C7")]
	[Address(RVA = "0x2A29700", Offset = "0x2A27D00", VA = "0x182A29700")]
	public static int2x4 operator --(int2x4 val)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019C8")]
	[Address(RVA = "0x2AA0F70", Offset = "0x2A9F570", VA = "0x182AA0F70")]
	public static bool2x4 operator <(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019C9")]
	[Address(RVA = "0x2AA0EE0", Offset = "0x2A9F4E0", VA = "0x182AA0EE0")]
	public static bool2x4 operator <(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019CA")]
	[Address(RVA = "0x2AA1030", Offset = "0x2A9F630", VA = "0x182AA1030")]
	public static bool2x4 operator <(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019CB")]
	[Address(RVA = "0x2AA0E20", Offset = "0x2A9F420", VA = "0x182AA0E20")]
	public static bool2x4 operator <=(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019CC")]
	[Address(RVA = "0x2AA0D00", Offset = "0x2A9F300", VA = "0x182AA0D00")]
	public static bool2x4 operator <=(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019CD")]
	[Address(RVA = "0x2AA0D90", Offset = "0x2A9F390", VA = "0x182AA0D90")]
	public static bool2x4 operator <=(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019CE")]
	[Address(RVA = "0x2AA0B20", Offset = "0x2A9F120", VA = "0x182AA0B20")]
	public static bool2x4 operator >(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019CF")]
	[Address(RVA = "0x2AA0BE0", Offset = "0x2A9F1E0", VA = "0x182AA0BE0")]
	public static bool2x4 operator >(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019D0")]
	[Address(RVA = "0x2AA0C70", Offset = "0x2A9F270", VA = "0x182AA0C70")]
	public static bool2x4 operator >(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019D1")]
	[Address(RVA = "0x2AA0940", Offset = "0x2A9EF40", VA = "0x182AA0940")]
	public static bool2x4 operator >=(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019D2")]
	[Address(RVA = "0x2AA0A00", Offset = "0x2A9F000", VA = "0x182AA0A00")]
	public static bool2x4 operator >=(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019D3")]
	[Address(RVA = "0x2AA0A90", Offset = "0x2A9F090", VA = "0x182AA0A90")]
	public static bool2x4 operator >=(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019D4")]
	[Address(RVA = "0x2A2B120", Offset = "0x2A29720", VA = "0x182A2B120")]
	public static int2x4 operator -(int2x4 val)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019D5")]
	[Address(RVA = "0x2A2B1B0", Offset = "0x2A297B0", VA = "0x182A2B1B0")]
	public static int2x4 operator +(int2x4 val)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019D6")]
	[Address(RVA = "0x2A2A530", Offset = "0x2A28B30", VA = "0x182A2A530")]
	public static int2x4 operator <<(int2x4 x, int n)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019D7")]
	[Address(RVA = "0x2AA1300", Offset = "0x2A9F900", VA = "0x182AA1300")]
	public static int2x4 operator >>(int2x4 x, int n)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019D8")]
	[Address(RVA = "0x2A29B20", Offset = "0x2A28120", VA = "0x182A29B20")]
	public static bool2x4 operator ==(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019D9")]
	[Address(RVA = "0x2A29A90", Offset = "0x2A28090", VA = "0x182A29A90")]
	public static bool2x4 operator ==(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019DA")]
	[Address(RVA = "0x2A29A00", Offset = "0x2A28000", VA = "0x182A29A00")]
	public static bool2x4 operator ==(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019DB")]
	[Address(RVA = "0x2A2A470", Offset = "0x2A28A70", VA = "0x182A2A470")]
	public static bool2x4 operator !=(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019DC")]
	[Address(RVA = "0x2A2A3E0", Offset = "0x2A289E0", VA = "0x182A2A3E0")]
	public static bool2x4 operator !=(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019DD")]
	[Address(RVA = "0x2A2A350", Offset = "0x2A28950", VA = "0x182A2A350")]
	public static bool2x4 operator !=(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019DE")]
	[Address(RVA = "0x2A2ADF0", Offset = "0x2A293F0", VA = "0x182A2ADF0")]
	public static int2x4 operator ~(int2x4 val)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019DF")]
	[Address(RVA = "0x2A29450", Offset = "0x2A27A50", VA = "0x182A29450")]
	public static int2x4 operator &(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019E0")]
	[Address(RVA = "0x2A29320", Offset = "0x2A27920", VA = "0x182A29320")]
	public static int2x4 operator &(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019E1")]
	[Address(RVA = "0x2A293C0", Offset = "0x2A279C0", VA = "0x182A293C0")]
	public static int2x4 operator &(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019E2")]
	[Address(RVA = "0x2A29640", Offset = "0x2A27C40", VA = "0x182A29640")]
	public static int2x4 operator |(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019E3")]
	[Address(RVA = "0x2A295A0", Offset = "0x2A27BA0", VA = "0x182A295A0")]
	public static int2x4 operator |(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019E4")]
	[Address(RVA = "0x2A29510", Offset = "0x2A27B10", VA = "0x182A29510")]
	public static int2x4 operator |(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019E5")]
	[Address(RVA = "0x2A29C70", Offset = "0x2A28270", VA = "0x182A29C70")]
	public static int2x4 operator ^(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019E6")]
	[Address(RVA = "0x2A29D30", Offset = "0x2A28330", VA = "0x182A29D30")]
	public static int2x4 operator ^(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019E7")]
	[Address(RVA = "0x2A29BE0", Offset = "0x2A281E0", VA = "0x182A29BE0")]
	public static int2x4 operator ^(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019E9")]
	[Address(RVA = "0x2A28770", Offset = "0x2A26D70", VA = "0x182A28770", Slot = "4")]
	public bool Equals(int2x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60019EA")]
	[Address(RVA = "0x2A9FCC0", Offset = "0x2A9E2C0", VA = "0x182A9FCC0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019EB")]
	[Address(RVA = "0x2A9FDC0", Offset = "0x2A9E3C0", VA = "0x182A9FDC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019EC")]
	[Address(RVA = "0x2AA01C0", Offset = "0x2A9E7C0", VA = "0x182AA01C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019ED")]
	[Address(RVA = "0x2A9FE60", Offset = "0x2A9E460", VA = "0x182A9FE60", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
