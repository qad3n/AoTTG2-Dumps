using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000049")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int3x3 : IEquatable<int3x3>, IFormattable
{
	[Token(Token = "0x4000109")]
	[FieldOffset(Offset = "0x0")]
	public int3 c0;

	[Token(Token = "0x400010A")]
	[FieldOffset(Offset = "0xC")]
	public int3 c1;

	[Token(Token = "0x400010B")]
	[FieldOffset(Offset = "0x18")]
	public int3 c2;

	[Token(Token = "0x400010C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int3x3 identity;

	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x24")]
	public static readonly int3x3 zero;

	[Token(Token = "0x17000847")]
	public unsafe ref int3 this[int index]
	{
		[Token(Token = "0x6001B03")]
		[Address(RVA = "0x47E70B0", Offset = "0x47E70B0", VA = "0x47E70B0")]
		get
		{
			return ref *(int3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ABE")]
	[Address(RVA = "0x47E4B60", Offset = "0x47E4B60", VA = "0x47E4B60")]
	public int3x3(int3 c0, int3 c1, int3 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ABF")]
	[Address(RVA = "0x47E4B80", Offset = "0x47E4B80", VA = "0x47E4B80")]
	public int3x3(int m00, int m01, int m02, int m10, int m11, int m12, int m20, int m21, int m22)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC0")]
	[Address(RVA = "0x47E4BC0", Offset = "0x47E4BC0", VA = "0x47E4BC0")]
	public int3x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC1")]
	[Address(RVA = "0x47E4BF0", Offset = "0x47E4BF0", VA = "0x47E4BF0")]
	public int3x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC2")]
	[Address(RVA = "0x47E4C20", Offset = "0x47E4C20", VA = "0x47E4C20")]
	public int3x3(bool3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC3")]
	[Address(RVA = "0x47E4CB0", Offset = "0x47E4CB0", VA = "0x47E4CB0")]
	public int3x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC4")]
	[Address(RVA = "0x47E4CE0", Offset = "0x47E4CE0", VA = "0x47E4CE0")]
	public int3x3(uint3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC5")]
	[Address(RVA = "0x47E4D10", Offset = "0x47E4D10", VA = "0x47E4D10")]
	public int3x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC6")]
	[Address(RVA = "0x47E4D40", Offset = "0x47E4D40", VA = "0x47E4D40")]
	public int3x3(float3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC7")]
	[Address(RVA = "0x47E4DC0", Offset = "0x47E4DC0", VA = "0x47E4DC0")]
	public int3x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC8")]
	[Address(RVA = "0x47E4DF0", Offset = "0x47E4DF0", VA = "0x47E4DF0")]
	public int3x3(double3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC9")]
	[Address(RVA = "0x47E4E50", Offset = "0x47E4E50", VA = "0x47E4E50")]
	public static implicit operator int3x3(int v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACA")]
	[Address(RVA = "0x47E4E80", Offset = "0x47E4E80", VA = "0x47E4E80")]
	public static explicit operator int3x3(bool v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACB")]
	[Address(RVA = "0x47E4EB0", Offset = "0x47E4EB0", VA = "0x47E4EB0")]
	public static explicit operator int3x3(bool3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACC")]
	[Address(RVA = "0x47E4F40", Offset = "0x47E4F40", VA = "0x47E4F40")]
	public static explicit operator int3x3(uint v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACD")]
	[Address(RVA = "0x47E4F70", Offset = "0x47E4F70", VA = "0x47E4F70")]
	public static explicit operator int3x3(uint3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACE")]
	[Address(RVA = "0x47E4FB0", Offset = "0x47E4FB0", VA = "0x47E4FB0")]
	public static explicit operator int3x3(float v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACF")]
	[Address(RVA = "0x47E4FE0", Offset = "0x47E4FE0", VA = "0x47E4FE0")]
	public static explicit operator int3x3(float3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD0")]
	[Address(RVA = "0x47E5060", Offset = "0x47E5060", VA = "0x47E5060")]
	public static explicit operator int3x3(double v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD1")]
	[Address(RVA = "0x47E5090", Offset = "0x47E5090", VA = "0x47E5090")]
	public static explicit operator int3x3(double3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD2")]
	[Address(RVA = "0x47E5100", Offset = "0x47E5100", VA = "0x47E5100")]
	public static int3x3 operator *(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD3")]
	[Address(RVA = "0x47E51B0", Offset = "0x47E51B0", VA = "0x47E51B0")]
	public static int3x3 operator *(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD4")]
	[Address(RVA = "0x47E5230", Offset = "0x47E5230", VA = "0x47E5230")]
	public static int3x3 operator *(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD5")]
	[Address(RVA = "0x47E52B0", Offset = "0x47E52B0", VA = "0x47E52B0")]
	public static int3x3 operator +(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD6")]
	[Address(RVA = "0x47E5350", Offset = "0x47E5350", VA = "0x47E5350")]
	public static int3x3 operator +(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD7")]
	[Address(RVA = "0x47E53C0", Offset = "0x47E53C0", VA = "0x47E53C0")]
	public static int3x3 operator +(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD8")]
	[Address(RVA = "0x47E5430", Offset = "0x47E5430", VA = "0x47E5430")]
	public static int3x3 operator -(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD9")]
	[Address(RVA = "0x47E54D0", Offset = "0x47E54D0", VA = "0x47E54D0")]
	public static int3x3 operator -(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ADA")]
	[Address(RVA = "0x47E5550", Offset = "0x47E5550", VA = "0x47E5550")]
	public static int3x3 operator -(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ADB")]
	[Address(RVA = "0x47E55D0", Offset = "0x47E55D0", VA = "0x47E55D0")]
	public static int3x3 operator /(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ADC")]
	[Address(RVA = "0x47E56A0", Offset = "0x47E56A0", VA = "0x47E56A0")]
	public static int3x3 operator /(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ADD")]
	[Address(RVA = "0x47E5750", Offset = "0x47E5750", VA = "0x47E5750")]
	public static int3x3 operator /(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ADE")]
	[Address(RVA = "0x47E57F0", Offset = "0x47E57F0", VA = "0x47E57F0")]
	public static int3x3 operator %(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ADF")]
	[Address(RVA = "0x47E58C0", Offset = "0x47E58C0", VA = "0x47E58C0")]
	public static int3x3 operator %(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE0")]
	[Address(RVA = "0x47E5970", Offset = "0x47E5970", VA = "0x47E5970")]
	public static int3x3 operator %(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE1")]
	[Address(RVA = "0x47E5A10", Offset = "0x47E5A10", VA = "0x47E5A10")]
	public static int3x3 operator ++(int3x3 val)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE2")]
	[Address(RVA = "0x47E5AA0", Offset = "0x47E5AA0", VA = "0x47E5AA0")]
	public static int3x3 operator --(int3x3 val)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE3")]
	[Address(RVA = "0x47E5B30", Offset = "0x47E5B30", VA = "0x47E5B30")]
	public static bool3x3 operator <(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE4")]
	[Address(RVA = "0x47E5C20", Offset = "0x47E5C20", VA = "0x47E5C20")]
	public static bool3x3 operator <(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE5")]
	[Address(RVA = "0x47E5CF0", Offset = "0x47E5CF0", VA = "0x47E5CF0")]
	public static bool3x3 operator <(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE6")]
	[Address(RVA = "0x47E5DC0", Offset = "0x47E5DC0", VA = "0x47E5DC0")]
	public static bool3x3 operator <=(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE7")]
	[Address(RVA = "0x47E5EB0", Offset = "0x47E5EB0", VA = "0x47E5EB0")]
	public static bool3x3 operator <=(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE8")]
	[Address(RVA = "0x47E5F80", Offset = "0x47E5F80", VA = "0x47E5F80")]
	public static bool3x3 operator <=(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE9")]
	[Address(RVA = "0x47E6050", Offset = "0x47E6050", VA = "0x47E6050")]
	public static bool3x3 operator >(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AEA")]
	[Address(RVA = "0x47E6140", Offset = "0x47E6140", VA = "0x47E6140")]
	public static bool3x3 operator >(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AEB")]
	[Address(RVA = "0x47E6210", Offset = "0x47E6210", VA = "0x47E6210")]
	public static bool3x3 operator >(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AEC")]
	[Address(RVA = "0x47E62E0", Offset = "0x47E62E0", VA = "0x47E62E0")]
	public static bool3x3 operator >=(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AED")]
	[Address(RVA = "0x47E63D0", Offset = "0x47E63D0", VA = "0x47E63D0")]
	public static bool3x3 operator >=(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AEE")]
	[Address(RVA = "0x47E64A0", Offset = "0x47E64A0", VA = "0x47E64A0")]
	public static bool3x3 operator >=(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AEF")]
	[Address(RVA = "0x47E6570", Offset = "0x47E6570", VA = "0x47E6570")]
	public static int3x3 operator -(int3x3 val)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF0")]
	[Address(RVA = "0x47E65E0", Offset = "0x47E65E0", VA = "0x47E65E0")]
	public static int3x3 operator +(int3x3 val)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF1")]
	[Address(RVA = "0x47E6620", Offset = "0x47E6620", VA = "0x47E6620")]
	public static int3x3 operator <<(int3x3 x, int n)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF2")]
	[Address(RVA = "0x47E66A0", Offset = "0x47E66A0", VA = "0x47E66A0")]
	public static int3x3 operator >>(int3x3 x, int n)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF3")]
	[Address(RVA = "0x47E6720", Offset = "0x47E6720", VA = "0x47E6720")]
	public static bool3x3 operator ==(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF4")]
	[Address(RVA = "0x47E6810", Offset = "0x47E6810", VA = "0x47E6810")]
	public static bool3x3 operator ==(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF5")]
	[Address(RVA = "0x47E68E0", Offset = "0x47E68E0", VA = "0x47E68E0")]
	public static bool3x3 operator ==(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF6")]
	[Address(RVA = "0x47E69B0", Offset = "0x47E69B0", VA = "0x47E69B0")]
	public static bool3x3 operator !=(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF7")]
	[Address(RVA = "0x47E6AA0", Offset = "0x47E6AA0", VA = "0x47E6AA0")]
	public static bool3x3 operator !=(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF8")]
	[Address(RVA = "0x47E6B70", Offset = "0x47E6B70", VA = "0x47E6B70")]
	public static bool3x3 operator !=(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF9")]
	[Address(RVA = "0x47E6C40", Offset = "0x47E6C40", VA = "0x47E6C40")]
	public static int3x3 operator ~(int3x3 val)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFA")]
	[Address(RVA = "0x47E6C90", Offset = "0x47E6C90", VA = "0x47E6C90")]
	public static int3x3 operator &(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFB")]
	[Address(RVA = "0x47E6CF0", Offset = "0x47E6CF0", VA = "0x47E6CF0")]
	public static int3x3 operator &(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFC")]
	[Address(RVA = "0x47E6D70", Offset = "0x47E6D70", VA = "0x47E6D70")]
	public static int3x3 operator &(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFD")]
	[Address(RVA = "0x47E6DF0", Offset = "0x47E6DF0", VA = "0x47E6DF0")]
	public static int3x3 operator |(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFE")]
	[Address(RVA = "0x47E6E50", Offset = "0x47E6E50", VA = "0x47E6E50")]
	public static int3x3 operator |(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFF")]
	[Address(RVA = "0x47E6ED0", Offset = "0x47E6ED0", VA = "0x47E6ED0")]
	public static int3x3 operator |(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B00")]
	[Address(RVA = "0x47E6F50", Offset = "0x47E6F50", VA = "0x47E6F50")]
	public static int3x3 operator ^(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B01")]
	[Address(RVA = "0x47E6FB0", Offset = "0x47E6FB0", VA = "0x47E6FB0")]
	public static int3x3 operator ^(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B02")]
	[Address(RVA = "0x47E7030", Offset = "0x47E7030", VA = "0x47E7030")]
	public static int3x3 operator ^(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B04")]
	[Address(RVA = "0x47E70C0", Offset = "0x47E70C0", VA = "0x47E70C0", Slot = "4")]
	public bool Equals(int3x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B05")]
	[Address(RVA = "0x47E7120", Offset = "0x47E7120", VA = "0x47E7120", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B06")]
	[Address(RVA = "0x47E71D0", Offset = "0x47E71D0", VA = "0x47E71D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B07")]
	[Address(RVA = "0x47E7280", Offset = "0x47E7280", VA = "0x47E7280", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B08")]
	[Address(RVA = "0x47E75F0", Offset = "0x47E75F0", VA = "0x47E75F0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
