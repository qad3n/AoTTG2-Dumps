using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x200004E")]
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
		[Token(Token = "0x6001DC4")]
		[Address(RVA = "0x47F6250", Offset = "0x47F6250", VA = "0x47F6250")]
		get
		{
			return ref *(int4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D7F")]
	[Address(RVA = "0x47F3590", Offset = "0x47F3590", VA = "0x47F3590")]
	public int4x3(int4 c0, int4 c1, int4 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D80")]
	[Address(RVA = "0x47F35B0", Offset = "0x47F35B0", VA = "0x47F35B0")]
	public int4x3(int m00, int m01, int m02, int m10, int m11, int m12, int m20, int m21, int m22, int m30, int m31, int m32)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D81")]
	[Address(RVA = "0x47F3610", Offset = "0x47F3610", VA = "0x47F3610")]
	public int4x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D82")]
	[Address(RVA = "0x47F3640", Offset = "0x47F3640", VA = "0x47F3640")]
	public int4x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D83")]
	[Address(RVA = "0x47F3670", Offset = "0x47F3670", VA = "0x47F3670")]
	public int4x3(bool4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D84")]
	[Address(RVA = "0x47F3720", Offset = "0x47F3720", VA = "0x47F3720")]
	public int4x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D85")]
	[Address(RVA = "0x47F3750", Offset = "0x47F3750", VA = "0x47F3750")]
	public int4x3(uint4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D86")]
	[Address(RVA = "0x47F3770", Offset = "0x47F3770", VA = "0x47F3770")]
	public int4x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D87")]
	[Address(RVA = "0x47F37A0", Offset = "0x47F37A0", VA = "0x47F37A0")]
	public int4x3(float4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D88")]
	[Address(RVA = "0x47F3850", Offset = "0x47F3850", VA = "0x47F3850")]
	public int4x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D89")]
	[Address(RVA = "0x47F3880", Offset = "0x47F3880", VA = "0x47F3880")]
	public int4x3(double4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8A")]
	[Address(RVA = "0x47F3910", Offset = "0x47F3910", VA = "0x47F3910")]
	public static implicit operator int4x3(int v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8B")]
	[Address(RVA = "0x47F3940", Offset = "0x47F3940", VA = "0x47F3940")]
	public static explicit operator int4x3(bool v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8C")]
	[Address(RVA = "0x47F3970", Offset = "0x47F3970", VA = "0x47F3970")]
	public static explicit operator int4x3(bool4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8D")]
	[Address(RVA = "0x47F3A20", Offset = "0x47F3A20", VA = "0x47F3A20")]
	public static explicit operator int4x3(uint v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8E")]
	[Address(RVA = "0x47F3A50", Offset = "0x47F3A50", VA = "0x47F3A50")]
	public static explicit operator int4x3(uint4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8F")]
	[Address(RVA = "0x47F3A70", Offset = "0x47F3A70", VA = "0x47F3A70")]
	public static explicit operator int4x3(float v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D90")]
	[Address(RVA = "0x47F3AA0", Offset = "0x47F3AA0", VA = "0x47F3AA0")]
	public static explicit operator int4x3(float4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D91")]
	[Address(RVA = "0x47F3B60", Offset = "0x47F3B60", VA = "0x47F3B60")]
	public static explicit operator int4x3(double v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D92")]
	[Address(RVA = "0x47F3B90", Offset = "0x47F3B90", VA = "0x47F3B90")]
	public static explicit operator int4x3(double4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D93")]
	[Address(RVA = "0x47F3C40", Offset = "0x47F3C40", VA = "0x47F3C40")]
	public static int4x3 operator *(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D94")]
	[Address(RVA = "0x47F3D30", Offset = "0x47F3D30", VA = "0x47F3D30")]
	public static int4x3 operator *(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D95")]
	[Address(RVA = "0x47F3DF0", Offset = "0x47F3DF0", VA = "0x47F3DF0")]
	public static int4x3 operator *(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D96")]
	[Address(RVA = "0x47F3EB0", Offset = "0x47F3EB0", VA = "0x47F3EB0")]
	public static int4x3 operator +(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D97")]
	[Address(RVA = "0x47F3F50", Offset = "0x47F3F50", VA = "0x47F3F50")]
	public static int4x3 operator +(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D98")]
	[Address(RVA = "0x47F3FE0", Offset = "0x47F3FE0", VA = "0x47F3FE0")]
	public static int4x3 operator +(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D99")]
	[Address(RVA = "0x47F4070", Offset = "0x47F4070", VA = "0x47F4070")]
	public static int4x3 operator -(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D9A")]
	[Address(RVA = "0x47F4110", Offset = "0x47F4110", VA = "0x47F4110")]
	public static int4x3 operator -(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D9B")]
	[Address(RVA = "0x47F41A0", Offset = "0x47F41A0", VA = "0x47F41A0")]
	public static int4x3 operator -(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D9C")]
	[Address(RVA = "0x47F4240", Offset = "0x47F4240", VA = "0x47F4240")]
	public static int4x3 operator /(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D9D")]
	[Address(RVA = "0x47F4370", Offset = "0x47F4370", VA = "0x47F4370")]
	public static int4x3 operator /(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D9E")]
	[Address(RVA = "0x47F4460", Offset = "0x47F4460", VA = "0x47F4460")]
	public static int4x3 operator /(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D9F")]
	[Address(RVA = "0x47F4550", Offset = "0x47F4550", VA = "0x47F4550")]
	public static int4x3 operator %(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA0")]
	[Address(RVA = "0x47F4680", Offset = "0x47F4680", VA = "0x47F4680")]
	public static int4x3 operator %(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA1")]
	[Address(RVA = "0x47F4770", Offset = "0x47F4770", VA = "0x47F4770")]
	public static int4x3 operator %(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA2")]
	[Address(RVA = "0x47F4860", Offset = "0x47F4860", VA = "0x47F4860")]
	public static int4x3 operator ++(int4x3 val)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA3")]
	[Address(RVA = "0x47F48E0", Offset = "0x47F48E0", VA = "0x47F48E0")]
	public static int4x3 operator --(int4x3 val)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA4")]
	[Address(RVA = "0x47F4960", Offset = "0x47F4960", VA = "0x47F4960")]
	public static bool4x3 operator <(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA5")]
	[Address(RVA = "0x47F4AA0", Offset = "0x47F4AA0", VA = "0x47F4AA0")]
	public static bool4x3 operator <(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA6")]
	[Address(RVA = "0x47F4B90", Offset = "0x47F4B90", VA = "0x47F4B90")]
	public static bool4x3 operator <(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA7")]
	[Address(RVA = "0x47F4C80", Offset = "0x47F4C80", VA = "0x47F4C80")]
	public static bool4x3 operator <=(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA8")]
	[Address(RVA = "0x47F4DC0", Offset = "0x47F4DC0", VA = "0x47F4DC0")]
	public static bool4x3 operator <=(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA9")]
	[Address(RVA = "0x47F4EB0", Offset = "0x47F4EB0", VA = "0x47F4EB0")]
	public static bool4x3 operator <=(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAA")]
	[Address(RVA = "0x47F4FA0", Offset = "0x47F4FA0", VA = "0x47F4FA0")]
	public static bool4x3 operator >(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAB")]
	[Address(RVA = "0x47F50E0", Offset = "0x47F50E0", VA = "0x47F50E0")]
	public static bool4x3 operator >(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAC")]
	[Address(RVA = "0x47F51D0", Offset = "0x47F51D0", VA = "0x47F51D0")]
	public static bool4x3 operator >(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAD")]
	[Address(RVA = "0x47F52C0", Offset = "0x47F52C0", VA = "0x47F52C0")]
	public static bool4x3 operator >=(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAE")]
	[Address(RVA = "0x47F5400", Offset = "0x47F5400", VA = "0x47F5400")]
	public static bool4x3 operator >=(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAF")]
	[Address(RVA = "0x47F54F0", Offset = "0x47F54F0", VA = "0x47F54F0")]
	public static bool4x3 operator >=(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB0")]
	[Address(RVA = "0x47F55E0", Offset = "0x47F55E0", VA = "0x47F55E0")]
	public static int4x3 operator -(int4x3 val)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB1")]
	[Address(RVA = "0x47F5650", Offset = "0x47F5650", VA = "0x47F5650")]
	public static int4x3 operator +(int4x3 val)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB2")]
	[Address(RVA = "0x47F5670", Offset = "0x47F5670", VA = "0x47F5670")]
	public static int4x3 operator <<(int4x3 x, int n)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB3")]
	[Address(RVA = "0x47F5730", Offset = "0x47F5730", VA = "0x47F5730")]
	public static int4x3 operator >>(int4x3 x, int n)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB4")]
	[Address(RVA = "0x47F57F0", Offset = "0x47F57F0", VA = "0x47F57F0")]
	public static bool4x3 operator ==(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB5")]
	[Address(RVA = "0x47F5930", Offset = "0x47F5930", VA = "0x47F5930")]
	public static bool4x3 operator ==(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB6")]
	[Address(RVA = "0x47F5A20", Offset = "0x47F5A20", VA = "0x47F5A20")]
	public static bool4x3 operator ==(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB7")]
	[Address(RVA = "0x47F5B10", Offset = "0x47F5B10", VA = "0x47F5B10")]
	public static bool4x3 operator !=(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB8")]
	[Address(RVA = "0x47F5C50", Offset = "0x47F5C50", VA = "0x47F5C50")]
	public static bool4x3 operator !=(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB9")]
	[Address(RVA = "0x47F5D40", Offset = "0x47F5D40", VA = "0x47F5D40")]
	public static bool4x3 operator !=(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBA")]
	[Address(RVA = "0x47F5E30", Offset = "0x47F5E30", VA = "0x47F5E30")]
	public static int4x3 operator ~(int4x3 val)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBB")]
	[Address(RVA = "0x47F5E60", Offset = "0x47F5E60", VA = "0x47F5E60")]
	public static int4x3 operator &(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBC")]
	[Address(RVA = "0x47F5E90", Offset = "0x47F5E90", VA = "0x47F5E90")]
	public static int4x3 operator &(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBD")]
	[Address(RVA = "0x47F5F20", Offset = "0x47F5F20", VA = "0x47F5F20")]
	public static int4x3 operator &(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBE")]
	[Address(RVA = "0x47F5FB0", Offset = "0x47F5FB0", VA = "0x47F5FB0")]
	public static int4x3 operator |(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBF")]
	[Address(RVA = "0x47F5FE0", Offset = "0x47F5FE0", VA = "0x47F5FE0")]
	public static int4x3 operator |(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC0")]
	[Address(RVA = "0x47F6070", Offset = "0x47F6070", VA = "0x47F6070")]
	public static int4x3 operator |(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC1")]
	[Address(RVA = "0x47F6100", Offset = "0x47F6100", VA = "0x47F6100")]
	public static int4x3 operator ^(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC2")]
	[Address(RVA = "0x47F6130", Offset = "0x47F6130", VA = "0x47F6130")]
	public static int4x3 operator ^(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC3")]
	[Address(RVA = "0x47F61C0", Offset = "0x47F61C0", VA = "0x47F61C0")]
	public static int4x3 operator ^(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC5")]
	[Address(RVA = "0x47F6260", Offset = "0x47F6260", VA = "0x47F6260", Slot = "4")]
	public bool Equals(int4x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DC6")]
	[Address(RVA = "0x47F62E0", Offset = "0x47F62E0", VA = "0x47F62E0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC7")]
	[Address(RVA = "0x47F63C0", Offset = "0x47F63C0", VA = "0x47F63C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC8")]
	[Address(RVA = "0x47F64D0", Offset = "0x47F64D0", VA = "0x47F64D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC9")]
	[Address(RVA = "0x47F6930", Offset = "0x47F6930", VA = "0x47F6930", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
