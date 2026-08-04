// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.int3x4
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
[Token(Token = "0x2000047")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int3x4 : IEquatable<int3x4>, IFormattable
{
	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0x0")]
	public int3 c0;

	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0xC")]
	public int3 c1;

	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x18")]
	public int3 c2;

	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x24")]
	public int3 c3;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int3x4 zero;

	[Token(Token = "0x17000848")]
	public unsafe ref int3 this[int index]
	{
		[Token(Token = "0x6001B27")]
		[Address(RVA = "0x4AEE5B0", Offset = "0x4AEE5B0", VA = "0x4AEE5B0")]
		get
		{
			return ref *(int3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE2")]
	[Address(RVA = "0x4AEB630", Offset = "0x4AEB630", VA = "0x4AEB630")]
	public int3x4(int3 c0, int3 c1, int3 c2, int3 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE3")]
	[Address(RVA = "0x4AEB660", Offset = "0x4AEB660", VA = "0x4AEB660")]
	public int3x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13, int m20, int m21, int m22, int m23)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE4")]
	[Address(RVA = "0x4AEB6C0", Offset = "0x4AEB6C0", VA = "0x4AEB6C0")]
	public int3x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE5")]
	[Address(RVA = "0x4AEB6F0", Offset = "0x4AEB6F0", VA = "0x4AEB6F0")]
	public int3x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE6")]
	[Address(RVA = "0x4AEB720", Offset = "0x4AEB720", VA = "0x4AEB720")]
	public int3x4(bool3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE7")]
	[Address(RVA = "0x4AEB7D0", Offset = "0x4AEB7D0", VA = "0x4AEB7D0")]
	public int3x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE8")]
	[Address(RVA = "0x4AEB800", Offset = "0x4AEB800", VA = "0x4AEB800")]
	public int3x4(uint3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE9")]
	[Address(RVA = "0x4AEB840", Offset = "0x4AEB840", VA = "0x4AEB840")]
	public int3x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AEA")]
	[Address(RVA = "0x4AEB870", Offset = "0x4AEB870", VA = "0x4AEB870")]
	public int3x4(float3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AEB")]
	[Address(RVA = "0x4AEB910", Offset = "0x4AEB910", VA = "0x4AEB910")]
	public int3x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AEC")]
	[Address(RVA = "0x4AEB940", Offset = "0x4AEB940", VA = "0x4AEB940")]
	public int3x4(double3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AED")]
	[Address(RVA = "0x4AEB9C0", Offset = "0x4AEB9C0", VA = "0x4AEB9C0")]
	public static implicit operator int3x4(int v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AEE")]
	[Address(RVA = "0x4AEB9F0", Offset = "0x4AEB9F0", VA = "0x4AEB9F0")]
	public static explicit operator int3x4(bool v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AEF")]
	[Address(RVA = "0x4AEBA30", Offset = "0x4AEBA30", VA = "0x4AEBA30")]
	public static explicit operator int3x4(bool3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF0")]
	[Address(RVA = "0x4AEBAE0", Offset = "0x4AEBAE0", VA = "0x4AEBAE0")]
	public static explicit operator int3x4(uint v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF1")]
	[Address(RVA = "0x4AEBB10", Offset = "0x4AEBB10", VA = "0x4AEBB10")]
	public static explicit operator int3x4(uint3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF2")]
	[Address(RVA = "0x4AEBB60", Offset = "0x4AEBB60", VA = "0x4AEBB60")]
	public static explicit operator int3x4(float v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF3")]
	[Address(RVA = "0x4AEBB90", Offset = "0x4AEBB90", VA = "0x4AEBB90")]
	public static explicit operator int3x4(float3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF4")]
	[Address(RVA = "0x4AEBC30", Offset = "0x4AEBC30", VA = "0x4AEBC30")]
	public static explicit operator int3x4(double v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF5")]
	[Address(RVA = "0x4AEBC60", Offset = "0x4AEBC60", VA = "0x4AEBC60")]
	public static explicit operator int3x4(double3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF6")]
	[Address(RVA = "0x4AEBD00", Offset = "0x4AEBD00", VA = "0x4AEBD00")]
	public static int3x4 operator *(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF7")]
	[Address(RVA = "0x4AEBDE0", Offset = "0x4AEBDE0", VA = "0x4AEBDE0")]
	public static int3x4 operator *(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF8")]
	[Address(RVA = "0x4AEBE90", Offset = "0x4AEBE90", VA = "0x4AEBE90")]
	public static int3x4 operator *(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF9")]
	[Address(RVA = "0x4AEBF40", Offset = "0x4AEBF40", VA = "0x4AEBF40")]
	public static int3x4 operator +(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFA")]
	[Address(RVA = "0x4AEC010", Offset = "0x4AEC010", VA = "0x4AEC010")]
	public static int3x4 operator +(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFB")]
	[Address(RVA = "0x4AEC0B0", Offset = "0x4AEC0B0", VA = "0x4AEC0B0")]
	public static int3x4 operator +(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFC")]
	[Address(RVA = "0x4AEC150", Offset = "0x4AEC150", VA = "0x4AEC150")]
	public static int3x4 operator -(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFD")]
	[Address(RVA = "0x4AEC220", Offset = "0x4AEC220", VA = "0x4AEC220")]
	public static int3x4 operator -(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFE")]
	[Address(RVA = "0x4AEC2D0", Offset = "0x4AEC2D0", VA = "0x4AEC2D0")]
	public static int3x4 operator -(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFF")]
	[Address(RVA = "0x4AEC380", Offset = "0x4AEC380", VA = "0x4AEC380")]
	public static int3x4 operator /(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B00")]
	[Address(RVA = "0x4AEC490", Offset = "0x4AEC490", VA = "0x4AEC490")]
	public static int3x4 operator /(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B01")]
	[Address(RVA = "0x4AEC570", Offset = "0x4AEC570", VA = "0x4AEC570")]
	public static int3x4 operator /(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B02")]
	[Address(RVA = "0x4AEC640", Offset = "0x4AEC640", VA = "0x4AEC640")]
	public static int3x4 operator %(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B03")]
	[Address(RVA = "0x4AEC750", Offset = "0x4AEC750", VA = "0x4AEC750")]
	public static int3x4 operator %(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B04")]
	[Address(RVA = "0x4AEC830", Offset = "0x4AEC830", VA = "0x4AEC830")]
	public static int3x4 operator %(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B05")]
	[Address(RVA = "0x4AEC900", Offset = "0x4AEC900", VA = "0x4AEC900")]
	public static int3x4 operator ++(int3x4 val)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B06")]
	[Address(RVA = "0x4AEC9C0", Offset = "0x4AEC9C0", VA = "0x4AEC9C0")]
	public static int3x4 operator --(int3x4 val)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B07")]
	[Address(RVA = "0x4AECA80", Offset = "0x4AECA80", VA = "0x4AECA80")]
	public static bool3x4 operator <(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B08")]
	[Address(RVA = "0x4AECBC0", Offset = "0x4AECBC0", VA = "0x4AECBC0")]
	public static bool3x4 operator <(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B09")]
	[Address(RVA = "0x4AECCC0", Offset = "0x4AECCC0", VA = "0x4AECCC0")]
	public static bool3x4 operator <(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0A")]
	[Address(RVA = "0x4AECDC0", Offset = "0x4AECDC0", VA = "0x4AECDC0")]
	public static bool3x4 operator <=(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0B")]
	[Address(RVA = "0x4AECF00", Offset = "0x4AECF00", VA = "0x4AECF00")]
	public static bool3x4 operator <=(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0C")]
	[Address(RVA = "0x4AED000", Offset = "0x4AED000", VA = "0x4AED000")]
	public static bool3x4 operator <=(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0D")]
	[Address(RVA = "0x4AED100", Offset = "0x4AED100", VA = "0x4AED100")]
	public static bool3x4 operator >(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0E")]
	[Address(RVA = "0x4AED240", Offset = "0x4AED240", VA = "0x4AED240")]
	public static bool3x4 operator >(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0F")]
	[Address(RVA = "0x4AED340", Offset = "0x4AED340", VA = "0x4AED340")]
	public static bool3x4 operator >(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B10")]
	[Address(RVA = "0x4AED440", Offset = "0x4AED440", VA = "0x4AED440")]
	public static bool3x4 operator >=(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B11")]
	[Address(RVA = "0x4AED580", Offset = "0x4AED580", VA = "0x4AED580")]
	public static bool3x4 operator >=(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B12")]
	[Address(RVA = "0x4AED680", Offset = "0x4AED680", VA = "0x4AED680")]
	public static bool3x4 operator >=(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B13")]
	[Address(RVA = "0x4AED780", Offset = "0x4AED780", VA = "0x4AED780")]
	public static int3x4 operator -(int3x4 val)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B14")]
	[Address(RVA = "0x4AED810", Offset = "0x4AED810", VA = "0x4AED810")]
	public static int3x4 operator +(int3x4 val)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B15")]
	[Address(RVA = "0x4AED860", Offset = "0x4AED860", VA = "0x4AED860")]
	public static int3x4 operator <<(int3x4 x, int n)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B16")]
	[Address(RVA = "0x4AED910", Offset = "0x4AED910", VA = "0x4AED910")]
	public static int3x4 operator >>(int3x4 x, int n)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B17")]
	[Address(RVA = "0x4AED9C0", Offset = "0x4AED9C0", VA = "0x4AED9C0")]
	public static bool3x4 operator ==(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B18")]
	[Address(RVA = "0x4AEDB00", Offset = "0x4AEDB00", VA = "0x4AEDB00")]
	public static bool3x4 operator ==(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B19")]
	[Address(RVA = "0x4AEDC00", Offset = "0x4AEDC00", VA = "0x4AEDC00")]
	public static bool3x4 operator ==(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1A")]
	[Address(RVA = "0x4AEDD00", Offset = "0x4AEDD00", VA = "0x4AEDD00")]
	public static bool3x4 operator !=(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1B")]
	[Address(RVA = "0x4AEDE40", Offset = "0x4AEDE40", VA = "0x4AEDE40")]
	public static bool3x4 operator !=(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1C")]
	[Address(RVA = "0x4AEDF40", Offset = "0x4AEDF40", VA = "0x4AEDF40")]
	public static bool3x4 operator !=(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1D")]
	[Address(RVA = "0x4AEE040", Offset = "0x4AEE040", VA = "0x4AEE040")]
	public static int3x4 operator ~(int3x4 val)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1E")]
	[Address(RVA = "0x4AEE0A0", Offset = "0x4AEE0A0", VA = "0x4AEE0A0")]
	public static int3x4 operator &(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1F")]
	[Address(RVA = "0x4AEE110", Offset = "0x4AEE110", VA = "0x4AEE110")]
	public static int3x4 operator &(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B20")]
	[Address(RVA = "0x4AEE1B0", Offset = "0x4AEE1B0", VA = "0x4AEE1B0")]
	public static int3x4 operator &(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B21")]
	[Address(RVA = "0x4AEE250", Offset = "0x4AEE250", VA = "0x4AEE250")]
	public static int3x4 operator |(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B22")]
	[Address(RVA = "0x4AEE2C0", Offset = "0x4AEE2C0", VA = "0x4AEE2C0")]
	public static int3x4 operator |(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B23")]
	[Address(RVA = "0x4AEE360", Offset = "0x4AEE360", VA = "0x4AEE360")]
	public static int3x4 operator |(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B24")]
	[Address(RVA = "0x4AEE400", Offset = "0x4AEE400", VA = "0x4AEE400")]
	public static int3x4 operator ^(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B25")]
	[Address(RVA = "0x4AEE470", Offset = "0x4AEE470", VA = "0x4AEE470")]
	public static int3x4 operator ^(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B26")]
	[Address(RVA = "0x4AEE510", Offset = "0x4AEE510", VA = "0x4AEE510")]
	public static int3x4 operator ^(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B28")]
	[Address(RVA = "0x4AEE5C0", Offset = "0x4AEE5C0", VA = "0x4AEE5C0", Slot = "4")]
	public bool Equals(int3x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B29")]
	[Address(RVA = "0x4AEE640", Offset = "0x4AEE640", VA = "0x4AEE640", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B2A")]
	[Address(RVA = "0x4AEE710", Offset = "0x4AEE710", VA = "0x4AEE710", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B2B")]
	[Address(RVA = "0x4AEE7F0", Offset = "0x4AEE7F0", VA = "0x4AEE7F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B2C")]
	[Address(RVA = "0x4AEEC50", Offset = "0x4AEEC50", VA = "0x4AEEC50", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
