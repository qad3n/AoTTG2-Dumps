// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.uint2x2
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
[Token(Token = "0x2000054")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint2x2 : IEquatable<uint2x2>, IFormattable
{
	[Token(Token = "0x400013F")]
	[FieldOffset(Offset = "0x0")]
	public uint2 c0;

	[Token(Token = "0x4000140")]
	[FieldOffset(Offset = "0x8")]
	public uint2 c1;

	[Token(Token = "0x4000141")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint2x2 identity;

	[Token(Token = "0x4000142")]
	[FieldOffset(Offset = "0x10")]
	public static readonly uint2x2 zero;

	[Token(Token = "0x170009BA")]
	public unsafe ref uint2 this[int index]
	{
		[Token(Token = "0x6001F9E")]
		[Address(RVA = "0x649DF00", Offset = "0x649CF00", VA = "0x649DF00")]
		get
		{
			return ref *(uint2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F59")]
	[Address(RVA = "0x649CFB0", Offset = "0x649BFB0", VA = "0x649CFB0")]
	public uint2x2(uint2 c0, uint2 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F5A")]
	[Address(RVA = "0x649CFC0", Offset = "0x649BFC0", VA = "0x649CFC0")]
	public uint2x2(uint m00, uint m01, uint m10, uint m11)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F5B")]
	[Address(RVA = "0x649CFE0", Offset = "0x649BFE0", VA = "0x649CFE0")]
	public uint2x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F5C")]
	[Address(RVA = "0x649D000", Offset = "0x649C000", VA = "0x649D000")]
	public uint2x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F5D")]
	[Address(RVA = "0x649D020", Offset = "0x649C020", VA = "0x649D020")]
	public uint2x2(bool2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F5E")]
	[Address(RVA = "0x649D060", Offset = "0x649C060", VA = "0x649D060")]
	public uint2x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F5F")]
	[Address(RVA = "0x649D080", Offset = "0x649C080", VA = "0x649D080")]
	public uint2x2(int2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F60")]
	[Address(RVA = "0x649D090", Offset = "0x649C090", VA = "0x649D090")]
	public uint2x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F61")]
	[Address(RVA = "0x649D0C0", Offset = "0x649C0C0", VA = "0x649D0C0")]
	public uint2x2(float2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F62")]
	[Address(RVA = "0x649D140", Offset = "0x649C140", VA = "0x649D140")]
	public uint2x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F63")]
	[Address(RVA = "0x649D170", Offset = "0x649C170", VA = "0x649D170")]
	public uint2x2(double2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F64")]
	[Address(RVA = "0x649D220", Offset = "0x649C220", VA = "0x649D220")]
	public static implicit operator uint2x2(uint v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F65")]
	[Address(RVA = "0x649D230", Offset = "0x649C230", VA = "0x649D230")]
	public static explicit operator uint2x2(bool v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F66")]
	[Address(RVA = "0x649D250", Offset = "0x649C250", VA = "0x649D250")]
	public static explicit operator uint2x2(bool2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F67")]
	[Address(RVA = "0x649D280", Offset = "0x649C280", VA = "0x649D280")]
	public static explicit operator uint2x2(int v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F68")]
	[Address(RVA = "0x649D290", Offset = "0x649C290", VA = "0x649D290")]
	public static explicit operator uint2x2(int2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F69")]
	[Address(RVA = "0x649D2A0", Offset = "0x649C2A0", VA = "0x649D2A0")]
	public static explicit operator uint2x2(float v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F6A")]
	[Address(RVA = "0x649D2C0", Offset = "0x649C2C0", VA = "0x649D2C0")]
	public static explicit operator uint2x2(float2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F6B")]
	[Address(RVA = "0x649D350", Offset = "0x649C350", VA = "0x649D350")]
	public static explicit operator uint2x2(double v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F6C")]
	[Address(RVA = "0x649D380", Offset = "0x649C380", VA = "0x649D380")]
	public static explicit operator uint2x2(double2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F6D")]
	[Address(RVA = "0x649D430", Offset = "0x649C430", VA = "0x649D430")]
	public static uint2x2 operator *(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F6E")]
	[Address(RVA = "0x649D470", Offset = "0x649C470", VA = "0x649D470")]
	public static uint2x2 operator *(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F6F")]
	[Address(RVA = "0x649D4A0", Offset = "0x649C4A0", VA = "0x649D4A0")]
	public static uint2x2 operator *(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F70")]
	[Address(RVA = "0x649D4D0", Offset = "0x649C4D0", VA = "0x649D4D0")]
	public static uint2x2 operator +(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F71")]
	[Address(RVA = "0x649D500", Offset = "0x649C500", VA = "0x649D500")]
	public static uint2x2 operator +(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F72")]
	[Address(RVA = "0x649D530", Offset = "0x649C530", VA = "0x649D530")]
	public static uint2x2 operator +(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F73")]
	[Address(RVA = "0x649D560", Offset = "0x649C560", VA = "0x649D560")]
	public static uint2x2 operator -(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F74")]
	[Address(RVA = "0x649D590", Offset = "0x649C590", VA = "0x649D590")]
	public static uint2x2 operator -(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F75")]
	[Address(RVA = "0x649D5C0", Offset = "0x649C5C0", VA = "0x649D5C0")]
	public static uint2x2 operator -(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F76")]
	[Address(RVA = "0x649D5F0", Offset = "0x649C5F0", VA = "0x649D5F0")]
	public static uint2x2 operator /(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F77")]
	[Address(RVA = "0x649D650", Offset = "0x649C650", VA = "0x649D650")]
	public static uint2x2 operator /(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F78")]
	[Address(RVA = "0x649D6A0", Offset = "0x649C6A0", VA = "0x649D6A0")]
	public static uint2x2 operator /(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F79")]
	[Address(RVA = "0x649D6E0", Offset = "0x649C6E0", VA = "0x649D6E0")]
	public static uint2x2 operator %(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F7A")]
	[Address(RVA = "0x649D730", Offset = "0x649C730", VA = "0x649D730")]
	public static uint2x2 operator %(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F7B")]
	[Address(RVA = "0x649D780", Offset = "0x649C780", VA = "0x649D780")]
	public static uint2x2 operator %(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F7C")]
	[Address(RVA = "0x649D7C0", Offset = "0x649C7C0", VA = "0x649D7C0")]
	public static uint2x2 operator ++(uint2x2 val)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F7D")]
	[Address(RVA = "0x649D7F0", Offset = "0x649C7F0", VA = "0x649D7F0")]
	public static uint2x2 operator --(uint2x2 val)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F7E")]
	[Address(RVA = "0x649D820", Offset = "0x649C820", VA = "0x649D820")]
	public static bool2x2 operator <(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F7F")]
	[Address(RVA = "0x649D870", Offset = "0x649C870", VA = "0x649D870")]
	public static bool2x2 operator <(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F80")]
	[Address(RVA = "0x649D8B0", Offset = "0x649C8B0", VA = "0x649D8B0")]
	public static bool2x2 operator <(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F81")]
	[Address(RVA = "0x649D8F0", Offset = "0x649C8F0", VA = "0x649D8F0")]
	public static bool2x2 operator <=(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F82")]
	[Address(RVA = "0x649D940", Offset = "0x649C940", VA = "0x649D940")]
	public static bool2x2 operator <=(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F83")]
	[Address(RVA = "0x649D980", Offset = "0x649C980", VA = "0x649D980")]
	public static bool2x2 operator <=(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F84")]
	[Address(RVA = "0x649D9C0", Offset = "0x649C9C0", VA = "0x649D9C0")]
	public static bool2x2 operator >(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F85")]
	[Address(RVA = "0x649DA10", Offset = "0x649CA10", VA = "0x649DA10")]
	public static bool2x2 operator >(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F86")]
	[Address(RVA = "0x649DA50", Offset = "0x649CA50", VA = "0x649DA50")]
	public static bool2x2 operator >(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F87")]
	[Address(RVA = "0x649DA90", Offset = "0x649CA90", VA = "0x649DA90")]
	public static bool2x2 operator >=(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F88")]
	[Address(RVA = "0x649DAE0", Offset = "0x649CAE0", VA = "0x649DAE0")]
	public static bool2x2 operator >=(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F89")]
	[Address(RVA = "0x649DB20", Offset = "0x649CB20", VA = "0x649DB20")]
	public static bool2x2 operator >=(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F8A")]
	[Address(RVA = "0x649DB60", Offset = "0x649CB60", VA = "0x649DB60")]
	public static uint2x2 operator -(uint2x2 val)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F8B")]
	[Address(RVA = "0x649DB90", Offset = "0x649CB90", VA = "0x649DB90")]
	public static uint2x2 operator +(uint2x2 val)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F8C")]
	[Address(RVA = "0x649DBA0", Offset = "0x649CBA0", VA = "0x649DBA0")]
	public static uint2x2 operator <<(uint2x2 x, int n)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F8D")]
	[Address(RVA = "0x649DBD0", Offset = "0x649CBD0", VA = "0x649DBD0")]
	public static uint2x2 operator >>(uint2x2 x, int n)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F8E")]
	[Address(RVA = "0x649DC00", Offset = "0x649CC00", VA = "0x649DC00")]
	public static bool2x2 operator ==(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F8F")]
	[Address(RVA = "0x649DC50", Offset = "0x649CC50", VA = "0x649DC50")]
	public static bool2x2 operator ==(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F90")]
	[Address(RVA = "0x649DC90", Offset = "0x649CC90", VA = "0x649DC90")]
	public static bool2x2 operator ==(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F91")]
	[Address(RVA = "0x649DCD0", Offset = "0x649CCD0", VA = "0x649DCD0")]
	public static bool2x2 operator !=(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F92")]
	[Address(RVA = "0x649DD20", Offset = "0x649CD20", VA = "0x649DD20")]
	public static bool2x2 operator !=(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F93")]
	[Address(RVA = "0x649DD60", Offset = "0x649CD60", VA = "0x649DD60")]
	public static bool2x2 operator !=(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F94")]
	[Address(RVA = "0x649DDA0", Offset = "0x649CDA0", VA = "0x649DDA0")]
	public static uint2x2 operator ~(uint2x2 val)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F95")]
	[Address(RVA = "0x649DDB0", Offset = "0x649CDB0", VA = "0x649DDB0")]
	public static uint2x2 operator &(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F96")]
	[Address(RVA = "0x649DDC0", Offset = "0x649CDC0", VA = "0x649DDC0")]
	public static uint2x2 operator &(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F97")]
	[Address(RVA = "0x649DDF0", Offset = "0x649CDF0", VA = "0x649DDF0")]
	public static uint2x2 operator &(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F98")]
	[Address(RVA = "0x649DE20", Offset = "0x649CE20", VA = "0x649DE20")]
	public static uint2x2 operator |(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F99")]
	[Address(RVA = "0x649DE30", Offset = "0x649CE30", VA = "0x649DE30")]
	public static uint2x2 operator |(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F9A")]
	[Address(RVA = "0x649DE60", Offset = "0x649CE60", VA = "0x649DE60")]
	public static uint2x2 operator |(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F9B")]
	[Address(RVA = "0x649DE90", Offset = "0x649CE90", VA = "0x649DE90")]
	public static uint2x2 operator ^(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F9C")]
	[Address(RVA = "0x649DEA0", Offset = "0x649CEA0", VA = "0x649DEA0")]
	public static uint2x2 operator ^(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F9D")]
	[Address(RVA = "0x649DED0", Offset = "0x649CED0", VA = "0x649DED0")]
	public static uint2x2 operator ^(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F9F")]
	[Address(RVA = "0x649DF10", Offset = "0x649CF10", VA = "0x649DF10", Slot = "4")]
	public bool Equals(uint2x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FA0")]
	[Address(RVA = "0x649DF30", Offset = "0x649CF30", VA = "0x649DF30", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA1")]
	[Address(RVA = "0x649DFB0", Offset = "0x649CFB0", VA = "0x649DFB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA2")]
	[Address(RVA = "0x649E000", Offset = "0x649D000", VA = "0x649E000", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA3")]
	[Address(RVA = "0x649E1E0", Offset = "0x649D1E0", VA = "0x649E1E0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
