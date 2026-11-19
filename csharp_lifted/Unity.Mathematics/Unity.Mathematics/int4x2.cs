// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.int4x2
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
public struct int4x2 : IEquatable<int4x2>, IFormattable
{
	[Token(Token = "0x4000123")]
	[FieldOffset(Offset = "0x0")]
	public int4 c0;

	[Token(Token = "0x4000124")]
	[FieldOffset(Offset = "0x10")]
	public int4 c1;

	[Token(Token = "0x4000125")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int4x2 zero;

	[Token(Token = "0x1700099A")]
	public unsafe ref int4 this[int index]
	{
		[Token(Token = "0x6001DC4")]
		[Address(RVA = "0x6489FA0", Offset = "0x6488FA0", VA = "0x6489FA0")]
		get
		{
			return ref *(int4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D7F")]
	[Address(RVA = "0x6488310", Offset = "0x6487310", VA = "0x6488310")]
	public int4x2(int4 c0, int4 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D80")]
	[Address(RVA = "0x6488320", Offset = "0x6487320", VA = "0x6488320")]
	public int4x2(int m00, int m01, int m10, int m11, int m20, int m21, int m30, int m31)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D81")]
	[Address(RVA = "0x6488350", Offset = "0x6487350", VA = "0x6488350")]
	public int4x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D82")]
	[Address(RVA = "0x6488370", Offset = "0x6487370", VA = "0x6488370")]
	public int4x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D83")]
	[Address(RVA = "0x64883A0", Offset = "0x64873A0", VA = "0x64883A0")]
	public int4x2(bool4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D84")]
	[Address(RVA = "0x6488410", Offset = "0x6487410", VA = "0x6488410")]
	public int4x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D85")]
	[Address(RVA = "0x6488430", Offset = "0x6487430", VA = "0x6488430")]
	public int4x2(uint4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D86")]
	[Address(RVA = "0x6488450", Offset = "0x6487450", VA = "0x6488450")]
	public int4x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D87")]
	[Address(RVA = "0x6488470", Offset = "0x6487470", VA = "0x6488470")]
	public int4x2(float4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D88")]
	[Address(RVA = "0x64884D0", Offset = "0x64874D0", VA = "0x64884D0")]
	public int4x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D89")]
	[Address(RVA = "0x64884F0", Offset = "0x64874F0", VA = "0x64884F0")]
	public int4x2(double4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8A")]
	[Address(RVA = "0x6488540", Offset = "0x6487540", VA = "0x6488540")]
	public static implicit operator int4x2(int v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8B")]
	[Address(RVA = "0x6488560", Offset = "0x6487560", VA = "0x6488560")]
	public static explicit operator int4x2(bool v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8C")]
	[Address(RVA = "0x6488590", Offset = "0x6487590", VA = "0x6488590")]
	public static explicit operator int4x2(bool4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8D")]
	[Address(RVA = "0x6488610", Offset = "0x6487610", VA = "0x6488610")]
	public static explicit operator int4x2(uint v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8E")]
	[Address(RVA = "0x6488630", Offset = "0x6487630", VA = "0x6488630")]
	public static explicit operator int4x2(uint4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8F")]
	[Address(RVA = "0x6488650", Offset = "0x6487650", VA = "0x6488650")]
	public static explicit operator int4x2(float v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D90")]
	[Address(RVA = "0x6488680", Offset = "0x6487680", VA = "0x6488680")]
	public static explicit operator int4x2(float4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D91")]
	[Address(RVA = "0x64886E0", Offset = "0x64876E0", VA = "0x64886E0")]
	public static explicit operator int4x2(double v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D92")]
	[Address(RVA = "0x6488710", Offset = "0x6487710", VA = "0x6488710")]
	public static explicit operator int4x2(double4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D93")]
	[Address(RVA = "0x6488770", Offset = "0x6487770", VA = "0x6488770")]
	public static int4x2 operator *(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D94")]
	[Address(RVA = "0x6488810", Offset = "0x6487810", VA = "0x6488810")]
	public static int4x2 operator *(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D95")]
	[Address(RVA = "0x6488890", Offset = "0x6487890", VA = "0x6488890")]
	public static int4x2 operator *(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D96")]
	[Address(RVA = "0x6488910", Offset = "0x6487910", VA = "0x6488910")]
	public static int4x2 operator +(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D97")]
	[Address(RVA = "0x64889B0", Offset = "0x64879B0", VA = "0x64889B0")]
	public static int4x2 operator +(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D98")]
	[Address(RVA = "0x64889E0", Offset = "0x64879E0", VA = "0x64889E0")]
	public static int4x2 operator +(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D99")]
	[Address(RVA = "0x6488A10", Offset = "0x6487A10", VA = "0x6488A10")]
	public static int4x2 operator -(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D9A")]
	[Address(RVA = "0x6488AC0", Offset = "0x6487AC0", VA = "0x6488AC0")]
	public static int4x2 operator -(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D9B")]
	[Address(RVA = "0x6488AF0", Offset = "0x6487AF0", VA = "0x6488AF0")]
	public static int4x2 operator -(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D9C")]
	[Address(RVA = "0x6488B20", Offset = "0x6487B20", VA = "0x6488B20")]
	public static int4x2 operator /(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D9D")]
	[Address(RVA = "0x6488BF0", Offset = "0x6487BF0", VA = "0x6488BF0")]
	public static int4x2 operator /(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D9E")]
	[Address(RVA = "0x6488C90", Offset = "0x6487C90", VA = "0x6488C90")]
	public static int4x2 operator /(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D9F")]
	[Address(RVA = "0x6488D30", Offset = "0x6487D30", VA = "0x6488D30")]
	public static int4x2 operator %(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA0")]
	[Address(RVA = "0x6488E00", Offset = "0x6487E00", VA = "0x6488E00")]
	public static int4x2 operator %(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA1")]
	[Address(RVA = "0x6488EA0", Offset = "0x6487EA0", VA = "0x6488EA0")]
	public static int4x2 operator %(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA2")]
	[Address(RVA = "0x6488F40", Offset = "0x6487F40", VA = "0x6488F40")]
	public static int4x2 operator ++(int4x2 val)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA3")]
	[Address(RVA = "0x6488F90", Offset = "0x6487F90", VA = "0x6488F90")]
	public static int4x2 operator --(int4x2 val)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA4")]
	[Address(RVA = "0x6488FE0", Offset = "0x6487FE0", VA = "0x6488FE0")]
	public static bool4x2 operator <(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA5")]
	[Address(RVA = "0x64890C0", Offset = "0x64880C0", VA = "0x64890C0")]
	public static bool4x2 operator <(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA6")]
	[Address(RVA = "0x6489170", Offset = "0x6488170", VA = "0x6489170")]
	public static bool4x2 operator <(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA7")]
	[Address(RVA = "0x6489210", Offset = "0x6488210", VA = "0x6489210")]
	public static bool4x2 operator <=(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA8")]
	[Address(RVA = "0x64892D0", Offset = "0x64882D0", VA = "0x64892D0")]
	public static bool4x2 operator <=(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA9")]
	[Address(RVA = "0x6489370", Offset = "0x6488370", VA = "0x6489370")]
	public static bool4x2 operator <=(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAA")]
	[Address(RVA = "0x6489410", Offset = "0x6488410", VA = "0x6489410")]
	public static bool4x2 operator >(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAB")]
	[Address(RVA = "0x64894F0", Offset = "0x64884F0", VA = "0x64894F0")]
	public static bool4x2 operator >(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAC")]
	[Address(RVA = "0x64895A0", Offset = "0x64885A0", VA = "0x64895A0")]
	public static bool4x2 operator >(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAD")]
	[Address(RVA = "0x6489640", Offset = "0x6488640", VA = "0x6489640")]
	public static bool4x2 operator >=(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAE")]
	[Address(RVA = "0x6489700", Offset = "0x6488700", VA = "0x6489700")]
	public static bool4x2 operator >=(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAF")]
	[Address(RVA = "0x64897A0", Offset = "0x64887A0", VA = "0x64897A0")]
	public static bool4x2 operator >=(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB0")]
	[Address(RVA = "0x6489840", Offset = "0x6488840", VA = "0x6489840")]
	public static int4x2 operator -(int4x2 val)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB1")]
	[Address(RVA = "0x64898A0", Offset = "0x64888A0", VA = "0x64898A0")]
	public static int4x2 operator +(int4x2 val)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB2")]
	[Address(RVA = "0x64898C0", Offset = "0x64888C0", VA = "0x64898C0")]
	public static int4x2 operator <<(int4x2 x, int n)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB3")]
	[Address(RVA = "0x6489940", Offset = "0x6488940", VA = "0x6489940")]
	public static int4x2 operator >>(int4x2 x, int n)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB4")]
	[Address(RVA = "0x64899C0", Offset = "0x64889C0", VA = "0x64899C0")]
	public static bool4x2 operator ==(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB5")]
	[Address(RVA = "0x6489AA0", Offset = "0x6488AA0", VA = "0x6489AA0")]
	public static bool4x2 operator ==(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB6")]
	[Address(RVA = "0x6489B50", Offset = "0x6488B50", VA = "0x6489B50")]
	public static bool4x2 operator ==(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB7")]
	[Address(RVA = "0x6489BF0", Offset = "0x6488BF0", VA = "0x6489BF0")]
	public static bool4x2 operator !=(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB8")]
	[Address(RVA = "0x6489CB0", Offset = "0x6488CB0", VA = "0x6489CB0")]
	public static bool4x2 operator !=(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB9")]
	[Address(RVA = "0x6489D50", Offset = "0x6488D50", VA = "0x6489D50")]
	public static bool4x2 operator !=(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBA")]
	[Address(RVA = "0x6489DF0", Offset = "0x6488DF0", VA = "0x6489DF0")]
	public static int4x2 operator ~(int4x2 val)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBB")]
	[Address(RVA = "0x6489E20", Offset = "0x6488E20", VA = "0x6489E20")]
	public static int4x2 operator &(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBC")]
	[Address(RVA = "0x6489E40", Offset = "0x6488E40", VA = "0x6489E40")]
	public static int4x2 operator &(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBD")]
	[Address(RVA = "0x6489E70", Offset = "0x6488E70", VA = "0x6489E70")]
	public static int4x2 operator &(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBE")]
	[Address(RVA = "0x6489EA0", Offset = "0x6488EA0", VA = "0x6489EA0")]
	public static int4x2 operator |(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBF")]
	[Address(RVA = "0x6489EC0", Offset = "0x6488EC0", VA = "0x6489EC0")]
	public static int4x2 operator |(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC0")]
	[Address(RVA = "0x6489EF0", Offset = "0x6488EF0", VA = "0x6489EF0")]
	public static int4x2 operator |(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC1")]
	[Address(RVA = "0x6489F20", Offset = "0x6488F20", VA = "0x6489F20")]
	public static int4x2 operator ^(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC2")]
	[Address(RVA = "0x6489F40", Offset = "0x6488F40", VA = "0x6489F40")]
	public static int4x2 operator ^(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC3")]
	[Address(RVA = "0x6489F70", Offset = "0x6488F70", VA = "0x6489F70")]
	public static int4x2 operator ^(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC5")]
	[Address(RVA = "0x6489FB0", Offset = "0x6488FB0", VA = "0x6489FB0", Slot = "4")]
	public bool Equals(int4x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DC6")]
	[Address(RVA = "0x648A010", Offset = "0x6489010", VA = "0x648A010", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC7")]
	[Address(RVA = "0x648A0B0", Offset = "0x64890B0", VA = "0x648A0B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC8")]
	[Address(RVA = "0x648A140", Offset = "0x6489140", VA = "0x648A140", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC9")]
	[Address(RVA = "0x648A460", Offset = "0x6489460", VA = "0x648A460", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
