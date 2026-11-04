// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.int4x4
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
[Token(Token = "0x200004D")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int4x4 : IEquatable<int4x4>, IFormattable
{
	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0x0")]
	public int4 c0;

	[Token(Token = "0x400012B")]
	[FieldOffset(Offset = "0x10")]
	public int4 c1;

	[Token(Token = "0x400012C")]
	[FieldOffset(Offset = "0x20")]
	public int4 c2;

	[Token(Token = "0x400012D")]
	[FieldOffset(Offset = "0x30")]
	public int4 c3;

	[Token(Token = "0x400012E")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int4x4 identity;

	[Token(Token = "0x400012F")]
	[FieldOffset(Offset = "0x40")]
	public static readonly int4x4 zero;

	[Token(Token = "0x1700099C")]
	public unsafe ref int4 this[int index]
	{
		[Token(Token = "0x6001E5A")]
		[Address(RVA = "0x841B00", Offset = "0x840100", VA = "0x180841B00")]
		get
		{
			return ref *(int4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E15")]
	[Address(RVA = "0x2A401B0", Offset = "0x2A3E7B0", VA = "0x182A401B0")]
	public int4x4(int4 c0, int4 c1, int4 c2, int4 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E16")]
	[Address(RVA = "0x2A40260", Offset = "0x2A3E860", VA = "0x182A40260")]
	public int4x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13, int m20, int m21, int m22, int m23, int m30, int m31, int m32, int m33)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E17")]
	[Address(RVA = "0x2A40180", Offset = "0x2A3E780", VA = "0x182A40180")]
	public int4x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E18")]
	[Address(RVA = "0x29C8FB0", Offset = "0x29C75B0", VA = "0x1829C8FB0")]
	public int4x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E19")]
	[Address(RVA = "0x29C9020", Offset = "0x29C7620", VA = "0x1829C9020")]
	public int4x4(bool4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E1A")]
	[Address(RVA = "0x2A40180", Offset = "0x2A3E780", VA = "0x182A40180")]
	public int4x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E1B")]
	[Address(RVA = "0x2A401E0", Offset = "0x2A3E7E0", VA = "0x182A401E0")]
	public int4x4(uint4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E1C")]
	[Address(RVA = "0x2AB1F90", Offset = "0x2AB0590", VA = "0x182AB1F90")]
	public int4x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E1D")]
	[Address(RVA = "0x2AB2050", Offset = "0x2AB0650", VA = "0x182AB2050")]
	public int4x4(float4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E1E")]
	[Address(RVA = "0x2AB1F10", Offset = "0x2AB0510", VA = "0x182AB1F10")]
	public int4x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E1F")]
	[Address(RVA = "0x2AB1FD0", Offset = "0x2AB05D0", VA = "0x182AB1FD0")]
	public int4x4(double4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E20")]
	[Address(RVA = "0x29EC2C0", Offset = "0x29EA8C0", VA = "0x1829EC2C0")]
	public static implicit operator int4x4(int v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E21")]
	[Address(RVA = "0x29EC160", Offset = "0x29EA760", VA = "0x1829EC160")]
	public static explicit operator int4x4(bool v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E22")]
	[Address(RVA = "0x2A40FD0", Offset = "0x2A3F5D0", VA = "0x182A40FD0")]
	public static explicit operator int4x4(bool4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E23")]
	[Address(RVA = "0x29EC2C0", Offset = "0x29EA8C0", VA = "0x1829EC2C0")]
	public static explicit operator int4x4(uint v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E24")]
	[Address(RVA = "0x29EC470", Offset = "0x29EAA70", VA = "0x1829EC470")]
	public static explicit operator int4x4(uint4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E25")]
	[Address(RVA = "0x29EC300", Offset = "0x29EA900", VA = "0x1829EC300")]
	public static explicit operator int4x4(float v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E26")]
	[Address(RVA = "0x29EC1D0", Offset = "0x29EA7D0", VA = "0x1829EC1D0")]
	public static explicit operator int4x4(float4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E27")]
	[Address(RVA = "0x29EC5E0", Offset = "0x29EABE0", VA = "0x1829EC5E0")]
	public static explicit operator int4x4(double v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E28")]
	[Address(RVA = "0x29EC500", Offset = "0x29EAB00", VA = "0x1829EC500")]
	public static explicit operator int4x4(double4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E29")]
	[Address(RVA = "0x2A421A0", Offset = "0x2A407A0", VA = "0x182A421A0")]
	public static int4x4 operator *(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E2A")]
	[Address(RVA = "0x2A420D0", Offset = "0x2A406D0", VA = "0x182A420D0")]
	public static int4x4 operator *(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E2B")]
	[Address(RVA = "0x2A42280", Offset = "0x2A40880", VA = "0x182A42280")]
	public static int4x4 operator *(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E2C")]
	[Address(RVA = "0x2AB2090", Offset = "0x2AB0690", VA = "0x182AB2090")]
	public static int4x4 operator +(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E2D")]
	[Address(RVA = "0x2AB2180", Offset = "0x2AB0780", VA = "0x182AB2180")]
	public static int4x4 operator +(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E2E")]
	[Address(RVA = "0x2AB2100", Offset = "0x2AB0700", VA = "0x182AB2100")]
	public static int4x4 operator +(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E2F")]
	[Address(RVA = "0x2AB32A0", Offset = "0x2AB18A0", VA = "0x182AB32A0")]
	public static int4x4 operator -(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E30")]
	[Address(RVA = "0x2AB3220", Offset = "0x2AB1820", VA = "0x182AB3220")]
	public static int4x4 operator -(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E31")]
	[Address(RVA = "0x2AB3310", Offset = "0x2AB1910", VA = "0x182AB3310")]
	public static int4x4 operator -(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E32")]
	[Address(RVA = "0x2AB2430", Offset = "0x2AB0A30", VA = "0x182AB2430")]
	public static int4x4 operator /(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E33")]
	[Address(RVA = "0x2AB2340", Offset = "0x2AB0940", VA = "0x182AB2340")]
	public static int4x4 operator /(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E34")]
	[Address(RVA = "0x2AB2250", Offset = "0x2AB0850", VA = "0x182AB2250")]
	public static int4x4 operator /(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E35")]
	[Address(RVA = "0x2AB2FD0", Offset = "0x2AB15D0", VA = "0x182AB2FD0")]
	public static int4x4 operator %(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E36")]
	[Address(RVA = "0x2AB2EE0", Offset = "0x2AB14E0", VA = "0x182AB2EE0")]
	public static int4x4 operator %(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E37")]
	[Address(RVA = "0x2AB30C0", Offset = "0x2AB16C0", VA = "0x182AB30C0")]
	public static int4x4 operator %(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E38")]
	[Address(RVA = "0x2A414F0", Offset = "0x2A3FAF0", VA = "0x182A414F0")]
	public static int4x4 operator ++(int4x4 val)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E39")]
	[Address(RVA = "0x2AB2200", Offset = "0x2AB0800", VA = "0x182AB2200")]
	public static int4x4 operator --(int4x4 val)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3A")]
	[Address(RVA = "0x2AB2DF0", Offset = "0x2AB13F0", VA = "0x182AB2DF0")]
	public static bool4x4 operator <(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3B")]
	[Address(RVA = "0x2AB2D30", Offset = "0x2AB1330", VA = "0x182AB2D30")]
	public static bool4x4 operator <(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3C")]
	[Address(RVA = "0x2AB2C70", Offset = "0x2AB1270", VA = "0x182AB2C70")]
	public static bool4x4 operator <(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3D")]
	[Address(RVA = "0x2AB2AC0", Offset = "0x2AB10C0", VA = "0x182AB2AC0")]
	public static bool4x4 operator <=(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3E")]
	[Address(RVA = "0x2AB2A00", Offset = "0x2AB1000", VA = "0x182AB2A00")]
	public static bool4x4 operator <=(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3F")]
	[Address(RVA = "0x2AB2BB0", Offset = "0x2AB11B0", VA = "0x182AB2BB0")]
	public static bool4x4 operator <=(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E40")]
	[Address(RVA = "0x2AB2790", Offset = "0x2AB0D90", VA = "0x182AB2790")]
	public static bool4x4 operator >(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E41")]
	[Address(RVA = "0x2AB2880", Offset = "0x2AB0E80", VA = "0x182AB2880")]
	public static bool4x4 operator >(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E42")]
	[Address(RVA = "0x2AB2940", Offset = "0x2AB0F40", VA = "0x182AB2940")]
	public static bool4x4 operator >(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E43")]
	[Address(RVA = "0x2AB25E0", Offset = "0x2AB0BE0", VA = "0x182AB25E0")]
	public static bool4x4 operator >=(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E44")]
	[Address(RVA = "0x2AB2520", Offset = "0x2AB0B20", VA = "0x182AB2520")]
	public static bool4x4 operator >=(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E45")]
	[Address(RVA = "0x2AB26D0", Offset = "0x2AB0CD0", VA = "0x182AB26D0")]
	public static bool4x4 operator >=(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E46")]
	[Address(RVA = "0x2A42700", Offset = "0x2A40D00", VA = "0x182A42700")]
	public static int4x4 operator -(int4x4 val)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E47")]
	[Address(RVA = "0x2A42760", Offset = "0x2A40D60", VA = "0x182A42760")]
	public static int4x4 operator +(int4x4 val)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E48")]
	[Address(RVA = "0x2A41870", Offset = "0x2A3FE70", VA = "0x182A41870")]
	public static int4x4 operator <<(int4x4 x, int n)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E49")]
	[Address(RVA = "0x2AB31B0", Offset = "0x2AB17B0", VA = "0x182AB31B0")]
	public static int4x4 operator >>(int4x4 x, int n)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4A")]
	[Address(RVA = "0x2A40C20", Offset = "0x2A3F220", VA = "0x182A40C20")]
	public static bool4x4 operator ==(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4B")]
	[Address(RVA = "0x2A40DD0", Offset = "0x2A3F3D0", VA = "0x182A40DD0")]
	public static bool4x4 operator ==(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4C")]
	[Address(RVA = "0x2A40D10", Offset = "0x2A3F310", VA = "0x182A40D10")]
	public static bool4x4 operator ==(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4D")]
	[Address(RVA = "0x2A41780", Offset = "0x2A3FD80", VA = "0x182A41780")]
	public static bool4x4 operator !=(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4E")]
	[Address(RVA = "0x2A416C0", Offset = "0x2A3FCC0", VA = "0x182A416C0")]
	public static bool4x4 operator !=(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4F")]
	[Address(RVA = "0x2A41600", Offset = "0x2A3FC00", VA = "0x182A41600")]
	public static bool4x4 operator !=(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E50")]
	[Address(RVA = "0x2A42350", Offset = "0x2A40950", VA = "0x182A42350")]
	public static int4x4 operator ~(int4x4 val)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E51")]
	[Address(RVA = "0x2A40580", Offset = "0x2A3EB80", VA = "0x182A40580")]
	public static int4x4 operator &(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E52")]
	[Address(RVA = "0x2A40650", Offset = "0x2A3EC50", VA = "0x182A40650")]
	public static int4x4 operator &(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E53")]
	[Address(RVA = "0x2A405E0", Offset = "0x2A3EBE0", VA = "0x182A405E0")]
	public static int4x4 operator &(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E54")]
	[Address(RVA = "0x2A406C0", Offset = "0x2A3ECC0", VA = "0x182A406C0")]
	public static int4x4 operator |(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E55")]
	[Address(RVA = "0x2A40720", Offset = "0x2A3ED20", VA = "0x182A40720")]
	public static int4x4 operator |(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E56")]
	[Address(RVA = "0x2A40790", Offset = "0x2A3ED90", VA = "0x182A40790")]
	public static int4x4 operator |(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E57")]
	[Address(RVA = "0x2A40F70", Offset = "0x2A3F570", VA = "0x182A40F70")]
	public static int4x4 operator ^(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E58")]
	[Address(RVA = "0x2A40E90", Offset = "0x2A3F490", VA = "0x182A40E90")]
	public static int4x4 operator ^(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E59")]
	[Address(RVA = "0x2A40F00", Offset = "0x2A3F500", VA = "0x182A40F00")]
	public static int4x4 operator ^(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E5B")]
	[Address(RVA = "0x2A38750", Offset = "0x2A36D50", VA = "0x182A38750", Slot = "4")]
	public bool Equals(int4x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001E5C")]
	[Address(RVA = "0x2AB10B0", Offset = "0x2AAF6B0", VA = "0x182AB10B0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E5D")]
	[Address(RVA = "0x2AB1160", Offset = "0x2AAF760", VA = "0x182AB1160", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E5E")]
	[Address(RVA = "0x2AB1800", Offset = "0x2AAFE00", VA = "0x182AB1800", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E5F")]
	[Address(RVA = "0x2AB11A0", Offset = "0x2AAF7A0", VA = "0x182AB11A0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
