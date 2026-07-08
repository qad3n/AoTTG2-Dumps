using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000043")]
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
		[Token(Token = "0x6001906")]
		[Address(RVA = "0x47DB9B0", Offset = "0x47DB9B0", VA = "0x47DB9B0")]
		get
		{
			return ref *(int2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018C1")]
	[Address(RVA = "0x47DAC20", Offset = "0x47DAC20", VA = "0x47DAC20")]
	public int2x2(int2 c0, int2 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018C2")]
	[Address(RVA = "0x47DAC30", Offset = "0x47DAC30", VA = "0x47DAC30")]
	public int2x2(int m00, int m01, int m10, int m11)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018C3")]
	[Address(RVA = "0x47DAC50", Offset = "0x47DAC50", VA = "0x47DAC50")]
	public int2x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018C4")]
	[Address(RVA = "0x47DAC70", Offset = "0x47DAC70", VA = "0x47DAC70")]
	public int2x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018C5")]
	[Address(RVA = "0x47DAC90", Offset = "0x47DAC90", VA = "0x47DAC90")]
	public int2x2(bool2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018C6")]
	[Address(RVA = "0x47DACD0", Offset = "0x47DACD0", VA = "0x47DACD0")]
	public int2x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018C7")]
	[Address(RVA = "0x47DACF0", Offset = "0x47DACF0", VA = "0x47DACF0")]
	public int2x2(uint2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018C8")]
	[Address(RVA = "0x47DAD00", Offset = "0x47DAD00", VA = "0x47DAD00")]
	public int2x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018C9")]
	[Address(RVA = "0x47DAD20", Offset = "0x47DAD20", VA = "0x47DAD20")]
	public int2x2(float2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018CA")]
	[Address(RVA = "0x47DAD50", Offset = "0x47DAD50", VA = "0x47DAD50")]
	public int2x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018CB")]
	[Address(RVA = "0x47DAD70", Offset = "0x47DAD70", VA = "0x47DAD70")]
	public int2x2(double2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018CC")]
	[Address(RVA = "0x47DADA0", Offset = "0x47DADA0", VA = "0x47DADA0")]
	public static implicit operator int2x2(int v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018CD")]
	[Address(RVA = "0x47DADB0", Offset = "0x47DADB0", VA = "0x47DADB0")]
	public static explicit operator int2x2(bool v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018CE")]
	[Address(RVA = "0x47DADD0", Offset = "0x47DADD0", VA = "0x47DADD0")]
	public static explicit operator int2x2(bool2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018CF")]
	[Address(RVA = "0x47DAE20", Offset = "0x47DAE20", VA = "0x47DAE20")]
	public static explicit operator int2x2(uint v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018D0")]
	[Address(RVA = "0x47DAE30", Offset = "0x47DAE30", VA = "0x47DAE30")]
	public static explicit operator int2x2(uint2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018D1")]
	[Address(RVA = "0x47DAE40", Offset = "0x47DAE40", VA = "0x47DAE40")]
	public static explicit operator int2x2(float v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018D2")]
	[Address(RVA = "0x47DAE60", Offset = "0x47DAE60", VA = "0x47DAE60")]
	public static explicit operator int2x2(float2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018D3")]
	[Address(RVA = "0x47DAE90", Offset = "0x47DAE90", VA = "0x47DAE90")]
	public static explicit operator int2x2(double v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018D4")]
	[Address(RVA = "0x47DAEB0", Offset = "0x47DAEB0", VA = "0x47DAEB0")]
	public static explicit operator int2x2(double2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018D5")]
	[Address(RVA = "0x47DAEE0", Offset = "0x47DAEE0", VA = "0x47DAEE0")]
	public static int2x2 operator *(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018D6")]
	[Address(RVA = "0x47DAF20", Offset = "0x47DAF20", VA = "0x47DAF20")]
	public static int2x2 operator *(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018D7")]
	[Address(RVA = "0x47DAF50", Offset = "0x47DAF50", VA = "0x47DAF50")]
	public static int2x2 operator *(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018D8")]
	[Address(RVA = "0x47DAF80", Offset = "0x47DAF80", VA = "0x47DAF80")]
	public static int2x2 operator +(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018D9")]
	[Address(RVA = "0x47DAFB0", Offset = "0x47DAFB0", VA = "0x47DAFB0")]
	public static int2x2 operator +(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018DA")]
	[Address(RVA = "0x47DAFE0", Offset = "0x47DAFE0", VA = "0x47DAFE0")]
	public static int2x2 operator +(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018DB")]
	[Address(RVA = "0x47DB010", Offset = "0x47DB010", VA = "0x47DB010")]
	public static int2x2 operator -(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018DC")]
	[Address(RVA = "0x47DB040", Offset = "0x47DB040", VA = "0x47DB040")]
	public static int2x2 operator -(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018DD")]
	[Address(RVA = "0x47DB070", Offset = "0x47DB070", VA = "0x47DB070")]
	public static int2x2 operator -(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018DE")]
	[Address(RVA = "0x47DB0A0", Offset = "0x47DB0A0", VA = "0x47DB0A0")]
	public static int2x2 operator /(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018DF")]
	[Address(RVA = "0x47DB0F0", Offset = "0x47DB0F0", VA = "0x47DB0F0")]
	public static int2x2 operator /(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018E0")]
	[Address(RVA = "0x47DB130", Offset = "0x47DB130", VA = "0x47DB130")]
	public static int2x2 operator /(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018E1")]
	[Address(RVA = "0x47DB170", Offset = "0x47DB170", VA = "0x47DB170")]
	public static int2x2 operator %(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018E2")]
	[Address(RVA = "0x47DB1C0", Offset = "0x47DB1C0", VA = "0x47DB1C0")]
	public static int2x2 operator %(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018E3")]
	[Address(RVA = "0x47DB200", Offset = "0x47DB200", VA = "0x47DB200")]
	public static int2x2 operator %(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018E4")]
	[Address(RVA = "0x47DB240", Offset = "0x47DB240", VA = "0x47DB240")]
	public static int2x2 operator ++(int2x2 val)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018E5")]
	[Address(RVA = "0x47DB280", Offset = "0x47DB280", VA = "0x47DB280")]
	public static int2x2 operator --(int2x2 val)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018E6")]
	[Address(RVA = "0x47DB2C0", Offset = "0x47DB2C0", VA = "0x47DB2C0")]
	public static bool2x2 operator <(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018E7")]
	[Address(RVA = "0x47DB310", Offset = "0x47DB310", VA = "0x47DB310")]
	public static bool2x2 operator <(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018E8")]
	[Address(RVA = "0x47DB350", Offset = "0x47DB350", VA = "0x47DB350")]
	public static bool2x2 operator <(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018E9")]
	[Address(RVA = "0x47DB390", Offset = "0x47DB390", VA = "0x47DB390")]
	public static bool2x2 operator <=(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018EA")]
	[Address(RVA = "0x47DB3E0", Offset = "0x47DB3E0", VA = "0x47DB3E0")]
	public static bool2x2 operator <=(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018EB")]
	[Address(RVA = "0x47DB420", Offset = "0x47DB420", VA = "0x47DB420")]
	public static bool2x2 operator <=(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018EC")]
	[Address(RVA = "0x47DB460", Offset = "0x47DB460", VA = "0x47DB460")]
	public static bool2x2 operator >(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018ED")]
	[Address(RVA = "0x47DB4B0", Offset = "0x47DB4B0", VA = "0x47DB4B0")]
	public static bool2x2 operator >(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018EE")]
	[Address(RVA = "0x47DB4F0", Offset = "0x47DB4F0", VA = "0x47DB4F0")]
	public static bool2x2 operator >(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018EF")]
	[Address(RVA = "0x47DB530", Offset = "0x47DB530", VA = "0x47DB530")]
	public static bool2x2 operator >=(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018F0")]
	[Address(RVA = "0x47DB580", Offset = "0x47DB580", VA = "0x47DB580")]
	public static bool2x2 operator >=(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018F1")]
	[Address(RVA = "0x47DB5C0", Offset = "0x47DB5C0", VA = "0x47DB5C0")]
	public static bool2x2 operator >=(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018F2")]
	[Address(RVA = "0x47DB600", Offset = "0x47DB600", VA = "0x47DB600")]
	public static int2x2 operator -(int2x2 val)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018F3")]
	[Address(RVA = "0x47DB640", Offset = "0x47DB640", VA = "0x47DB640")]
	public static int2x2 operator +(int2x2 val)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018F4")]
	[Address(RVA = "0x47DB650", Offset = "0x47DB650", VA = "0x47DB650")]
	public static int2x2 operator <<(int2x2 x, int n)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018F5")]
	[Address(RVA = "0x47DB680", Offset = "0x47DB680", VA = "0x47DB680")]
	public static int2x2 operator >>(int2x2 x, int n)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018F6")]
	[Address(RVA = "0x47DB6B0", Offset = "0x47DB6B0", VA = "0x47DB6B0")]
	public static bool2x2 operator ==(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018F7")]
	[Address(RVA = "0x47DB700", Offset = "0x47DB700", VA = "0x47DB700")]
	public static bool2x2 operator ==(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018F8")]
	[Address(RVA = "0x47DB740", Offset = "0x47DB740", VA = "0x47DB740")]
	public static bool2x2 operator ==(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018F9")]
	[Address(RVA = "0x47DB780", Offset = "0x47DB780", VA = "0x47DB780")]
	public static bool2x2 operator !=(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018FA")]
	[Address(RVA = "0x47DB7D0", Offset = "0x47DB7D0", VA = "0x47DB7D0")]
	public static bool2x2 operator !=(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018FB")]
	[Address(RVA = "0x47DB810", Offset = "0x47DB810", VA = "0x47DB810")]
	public static bool2x2 operator !=(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018FC")]
	[Address(RVA = "0x47DB850", Offset = "0x47DB850", VA = "0x47DB850")]
	public static int2x2 operator ~(int2x2 val)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018FD")]
	[Address(RVA = "0x47DB860", Offset = "0x47DB860", VA = "0x47DB860")]
	public static int2x2 operator &(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018FE")]
	[Address(RVA = "0x47DB870", Offset = "0x47DB870", VA = "0x47DB870")]
	public static int2x2 operator &(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018FF")]
	[Address(RVA = "0x47DB8A0", Offset = "0x47DB8A0", VA = "0x47DB8A0")]
	public static int2x2 operator &(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001900")]
	[Address(RVA = "0x47DB8D0", Offset = "0x47DB8D0", VA = "0x47DB8D0")]
	public static int2x2 operator |(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001901")]
	[Address(RVA = "0x47DB8E0", Offset = "0x47DB8E0", VA = "0x47DB8E0")]
	public static int2x2 operator |(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001902")]
	[Address(RVA = "0x47DB910", Offset = "0x47DB910", VA = "0x47DB910")]
	public static int2x2 operator |(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001903")]
	[Address(RVA = "0x47DB940", Offset = "0x47DB940", VA = "0x47DB940")]
	public static int2x2 operator ^(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001904")]
	[Address(RVA = "0x47DB950", Offset = "0x47DB950", VA = "0x47DB950")]
	public static int2x2 operator ^(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001905")]
	[Address(RVA = "0x47DB980", Offset = "0x47DB980", VA = "0x47DB980")]
	public static int2x2 operator ^(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001907")]
	[Address(RVA = "0x47DB9C0", Offset = "0x47DB9C0", VA = "0x47DB9C0", Slot = "4")]
	public bool Equals(int2x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001908")]
	[Address(RVA = "0x47DB9E0", Offset = "0x47DB9E0", VA = "0x47DB9E0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001909")]
	[Address(RVA = "0x47DBA60", Offset = "0x47DBA60", VA = "0x47DBA60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600190A")]
	[Address(RVA = "0x47DBAC0", Offset = "0x47DBAC0", VA = "0x47DBAC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600190B")]
	[Address(RVA = "0x47DBC90", Offset = "0x47DBC90", VA = "0x47DBC90", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
