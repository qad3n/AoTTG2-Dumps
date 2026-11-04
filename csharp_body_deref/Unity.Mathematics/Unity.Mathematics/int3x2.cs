// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.int3x2
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
[Token(Token = "0x2000046")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int3x2 : IEquatable<int3x2>, IFormattable
{
	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x0")]
	public int3 c0;

	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0xC")]
	public int3 c1;

	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int3x2 zero;

	[Token(Token = "0x17000846")]
	public unsafe ref int3 this[int index]
	{
		[Token(Token = "0x6001B03")]
		[Address(RVA = "0x841BD0", Offset = "0x8401D0", VA = "0x180841BD0")]
		get
		{
			return ref *(int3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ABE")]
	[Address(RVA = "0x565080", Offset = "0x563680", VA = "0x180565080")]
	public int3x2(int3 c0, int3 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ABF")]
	[Address(RVA = "0x2A2D3D0", Offset = "0x2A2B9D0", VA = "0x182A2D3D0")]
	public int3x2(int m00, int m01, int m10, int m11, int m20, int m21)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC0")]
	[Address(RVA = "0x2A2D570", Offset = "0x2A2BB70", VA = "0x182A2D570")]
	public int3x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC1")]
	[Address(RVA = "0x2A2D3F0", Offset = "0x2A2B9F0", VA = "0x182A2D3F0")]
	public int3x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC2")]
	[Address(RVA = "0x2A2D430", Offset = "0x2A2BA30", VA = "0x182A2D430")]
	public int3x2(bool3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC3")]
	[Address(RVA = "0x2A2D570", Offset = "0x2A2BB70", VA = "0x182A2D570")]
	public int3x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC4")]
	[Address(RVA = "0x2A2D530", Offset = "0x2A2BB30", VA = "0x182A2D530")]
	public int3x2(uint3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC5")]
	[Address(RVA = "0x2AA2020", Offset = "0x2AA0620", VA = "0x182AA2020")]
	public int3x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC6")]
	[Address(RVA = "0x2AA2050", Offset = "0x2AA0650", VA = "0x182AA2050")]
	public int3x2(float3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC7")]
	[Address(RVA = "0x2AA2080", Offset = "0x2AA0680", VA = "0x182AA2080")]
	public int3x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC8")]
	[Address(RVA = "0x2AA1FF0", Offset = "0x2AA05F0", VA = "0x182AA1FF0")]
	public int3x2(double3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC9")]
	[Address(RVA = "0x29EAFD0", Offset = "0x29E95D0", VA = "0x1829EAFD0")]
	public static implicit operator int3x2(int v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACA")]
	[Address(RVA = "0x29EAFF0", Offset = "0x29E95F0", VA = "0x1829EAFF0")]
	public static explicit operator int3x2(bool v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACB")]
	[Address(RVA = "0x29EB030", Offset = "0x29E9630", VA = "0x1829EB030")]
	public static explicit operator int3x2(bool3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACC")]
	[Address(RVA = "0x29EAFD0", Offset = "0x29E95D0", VA = "0x1829EAFD0")]
	public static explicit operator int3x2(uint v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACD")]
	[Address(RVA = "0x29EAED0", Offset = "0x29E94D0", VA = "0x1829EAED0")]
	public static explicit operator int3x2(uint3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACE")]
	[Address(RVA = "0x29EB0A0", Offset = "0x29E96A0", VA = "0x1829EB0A0")]
	public static explicit operator int3x2(float v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACF")]
	[Address(RVA = "0x29EAF40", Offset = "0x29E9540", VA = "0x1829EAF40")]
	public static explicit operator int3x2(float3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD0")]
	[Address(RVA = "0x29EB0E0", Offset = "0x29E96E0", VA = "0x1829EB0E0")]
	public static explicit operator int3x2(double v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD1")]
	[Address(RVA = "0x29EAE80", Offset = "0x29E9480", VA = "0x1829EAE80")]
	public static explicit operator int3x2(double3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD2")]
	[Address(RVA = "0x2A2E480", Offset = "0x2A2CA80", VA = "0x182A2E480")]
	public static int3x2 operator *(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD3")]
	[Address(RVA = "0x2A2E4E0", Offset = "0x2A2CAE0", VA = "0x182A2E4E0")]
	public static int3x2 operator *(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD4")]
	[Address(RVA = "0x2A2E540", Offset = "0x2A2CB40", VA = "0x182A2E540")]
	public static int3x2 operator *(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD5")]
	[Address(RVA = "0x2AA2100", Offset = "0x2AA0700", VA = "0x182AA2100")]
	public static int3x2 operator +(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD6")]
	[Address(RVA = "0x2AA20B0", Offset = "0x2AA06B0", VA = "0x182AA20B0")]
	public static int3x2 operator +(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD7")]
	[Address(RVA = "0x2AA2150", Offset = "0x2AA0750", VA = "0x182AA2150")]
	public static int3x2 operator +(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD8")]
	[Address(RVA = "0x2AA28A0", Offset = "0x2AA0EA0", VA = "0x182AA28A0")]
	public static int3x2 operator -(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD9")]
	[Address(RVA = "0x2AA28F0", Offset = "0x2AA0EF0", VA = "0x182AA28F0")]
	public static int3x2 operator -(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ADA")]
	[Address(RVA = "0x2AA2850", Offset = "0x2AA0E50", VA = "0x182AA2850")]
	public static int3x2 operator -(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ADB")]
	[Address(RVA = "0x2AA2200", Offset = "0x2AA0800", VA = "0x182AA2200")]
	public static int3x2 operator /(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ADC")]
	[Address(RVA = "0x2AA21A0", Offset = "0x2AA07A0", VA = "0x182AA21A0")]
	public static int3x2 operator /(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ADD")]
	[Address(RVA = "0x2AA2270", Offset = "0x2AA0870", VA = "0x182AA2270")]
	public static int3x2 operator /(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ADE")]
	[Address(RVA = "0x2AA26D0", Offset = "0x2AA0CD0", VA = "0x182AA26D0")]
	public static int3x2 operator %(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ADF")]
	[Address(RVA = "0x2AA27A0", Offset = "0x2AA0DA0", VA = "0x182AA27A0")]
	public static int3x2 operator %(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE0")]
	[Address(RVA = "0x2AA2740", Offset = "0x2AA0D40", VA = "0x182AA2740")]
	public static int3x2 operator %(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE1")]
	[Address(RVA = "0x2A2DF70", Offset = "0x2A2C570", VA = "0x182A2DF70")]
	public static int3x2 operator ++(int3x2 val)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE2")]
	[Address(RVA = "0x2A2D960", Offset = "0x2A2BF60", VA = "0x182A2D960")]
	public static int3x2 operator --(int3x2 val)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE3")]
	[Address(RVA = "0x2AA2620", Offset = "0x2AA0C20", VA = "0x182AA2620")]
	public static bool3x2 operator <(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE4")]
	[Address(RVA = "0x2AA2680", Offset = "0x2AA0C80", VA = "0x182AA2680")]
	public static bool3x2 operator <(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE5")]
	[Address(RVA = "0x2AA25D0", Offset = "0x2AA0BD0", VA = "0x182AA25D0")]
	public static bool3x2 operator <(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE6")]
	[Address(RVA = "0x2AA2570", Offset = "0x2AA0B70", VA = "0x182AA2570")]
	public static bool3x2 operator <=(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE7")]
	[Address(RVA = "0x2AA2520", Offset = "0x2AA0B20", VA = "0x182AA2520")]
	public static bool3x2 operator <=(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE8")]
	[Address(RVA = "0x2AA24D0", Offset = "0x2AA0AD0", VA = "0x182AA24D0")]
	public static bool3x2 operator <=(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE9")]
	[Address(RVA = "0x2AA23D0", Offset = "0x2AA09D0", VA = "0x182AA23D0")]
	public static bool3x2 operator >(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AEA")]
	[Address(RVA = "0x2AA2430", Offset = "0x2AA0A30", VA = "0x182AA2430")]
	public static bool3x2 operator >(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AEB")]
	[Address(RVA = "0x2AA2480", Offset = "0x2AA0A80", VA = "0x182AA2480")]
	public static bool3x2 operator >(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AEC")]
	[Address(RVA = "0x2AA2320", Offset = "0x2AA0920", VA = "0x182AA2320")]
	public static bool3x2 operator >=(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AED")]
	[Address(RVA = "0x2AA2380", Offset = "0x2AA0980", VA = "0x182AA2380")]
	public static bool3x2 operator >=(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AEE")]
	[Address(RVA = "0x2AA22D0", Offset = "0x2AA08D0", VA = "0x182AA22D0")]
	public static bool3x2 operator >=(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AEF")]
	[Address(RVA = "0x2A2E760", Offset = "0x2A2CD60", VA = "0x182A2E760")]
	public static int3x2 operator -(int3x2 val)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF0")]
	[Address(RVA = "0x2A2E7A0", Offset = "0x2A2CDA0", VA = "0x182A2E7A0")]
	public static int3x2 operator +(int3x2 val)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF1")]
	[Address(RVA = "0x2A2E0E0", Offset = "0x2A2C6E0", VA = "0x182A2E0E0")]
	public static int3x2 operator <<(int3x2 x, int n)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF2")]
	[Address(RVA = "0x2AA2800", Offset = "0x2AA0E00", VA = "0x182AA2800")]
	public static int3x2 operator >>(int3x2 x, int n)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF3")]
	[Address(RVA = "0x2A2DB20", Offset = "0x2A2C120", VA = "0x182A2DB20")]
	public static bool3x2 operator ==(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF4")]
	[Address(RVA = "0x2A2DB80", Offset = "0x2A2C180", VA = "0x182A2DB80")]
	public static bool3x2 operator ==(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF5")]
	[Address(RVA = "0x2A2DBD0", Offset = "0x2A2C1D0", VA = "0x182A2DBD0")]
	public static bool3x2 operator ==(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF6")]
	[Address(RVA = "0x2A2E080", Offset = "0x2A2C680", VA = "0x182A2E080")]
	public static bool3x2 operator !=(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF7")]
	[Address(RVA = "0x2A2E030", Offset = "0x2A2C630", VA = "0x182A2E030")]
	public static bool3x2 operator !=(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF8")]
	[Address(RVA = "0x2A2DFE0", Offset = "0x2A2C5E0", VA = "0x182A2DFE0")]
	public static bool3x2 operator !=(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF9")]
	[Address(RVA = "0x2A2E5A0", Offset = "0x2A2CBA0", VA = "0x182A2E5A0")]
	public static int3x2 operator ~(int3x2 val)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFA")]
	[Address(RVA = "0x2A2D820", Offset = "0x2A2BE20", VA = "0x182A2D820")]
	public static int3x2 operator &(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFB")]
	[Address(RVA = "0x2A2D7D0", Offset = "0x2A2BDD0", VA = "0x182A2D7D0")]
	public static int3x2 operator &(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFC")]
	[Address(RVA = "0x2A2D780", Offset = "0x2A2BD80", VA = "0x182A2D780")]
	public static int3x2 operator &(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFD")]
	[Address(RVA = "0x2A2D910", Offset = "0x2A2BF10", VA = "0x182A2D910")]
	public static int3x2 operator |(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFE")]
	[Address(RVA = "0x2A2D870", Offset = "0x2A2BE70", VA = "0x182A2D870")]
	public static int3x2 operator |(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFF")]
	[Address(RVA = "0x2A2D8C0", Offset = "0x2A2BEC0", VA = "0x182A2D8C0")]
	public static int3x2 operator |(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B00")]
	[Address(RVA = "0x2A2DC20", Offset = "0x2A2C220", VA = "0x182A2DC20")]
	public static int3x2 operator ^(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B01")]
	[Address(RVA = "0x2A2DC70", Offset = "0x2A2C270", VA = "0x182A2DC70")]
	public static int3x2 operator ^(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B02")]
	[Address(RVA = "0x2A2DCC0", Offset = "0x2A2C2C0", VA = "0x182A2DCC0")]
	public static int3x2 operator ^(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B04")]
	[Address(RVA = "0x2A2CD80", Offset = "0x2A2B380", VA = "0x182A2CD80", Slot = "4")]
	public bool Equals(int3x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B05")]
	[Address(RVA = "0x2AA1900", Offset = "0x2A9FF00", VA = "0x182AA1900", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B06")]
	[Address(RVA = "0x2AA19E0", Offset = "0x2A9FFE0", VA = "0x182AA19E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B07")]
	[Address(RVA = "0x2AA1D20", Offset = "0x2AA0320", VA = "0x182AA1D20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B08")]
	[Address(RVA = "0x2AA1A70", Offset = "0x2AA0070", VA = "0x182AA1A70", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
