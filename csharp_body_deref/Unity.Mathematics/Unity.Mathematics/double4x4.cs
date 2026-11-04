// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.double4x4
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
[Token(Token = "0x2000028")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double4x4 : IEquatable<double4x4>, IFormattable
{
	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x0")]
	public double4 c0;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x20")]
	public double4 c1;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x40")]
	public double4 c2;

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x60")]
	public double4 c3;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double4x4 identity;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x80")]
	public static readonly double4x4 zero;

	[Token(Token = "0x170003DA")]
	public unsafe ref double4 this[int index]
	{
		[Token(Token = "0x6001085")]
		[Address(RVA = "0x841B50", Offset = "0x840150", VA = "0x180841B50")]
		get
		{
			return ref *(double4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600104C")]
	[Address(RVA = "0x2A6F0B0", Offset = "0x2A6D6B0", VA = "0x182A6F0B0")]
	public double4x4(double4 c0, double4 c1, double4 c2, double4 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600104D")]
	[Address(RVA = "0x2A6F190", Offset = "0x2A6D790", VA = "0x182A6F190")]
	public double4x4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23, double m30, double m31, double m32, double m33)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600104E")]
	[Address(RVA = "0x2A6F040", Offset = "0x2A6D640", VA = "0x182A6F040")]
	public double4x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600104F")]
	[Address(RVA = "0x29C7390", Offset = "0x29C5990", VA = "0x1829C7390")]
	public double4x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001050")]
	[Address(RVA = "0x29C7540", Offset = "0x29C5B40", VA = "0x1829C7540")]
	public double4x4(bool4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001051")]
	[Address(RVA = "0x2A6F100", Offset = "0x2A6D700", VA = "0x182A6F100")]
	public double4x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001052")]
	[Address(RVA = "0x29C76B0", Offset = "0x29C5CB0", VA = "0x1829C76B0")]
	public double4x4(int4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001053")]
	[Address(RVA = "0x29C7450", Offset = "0x29C5A50", VA = "0x1829C7450")]
	public double4x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001054")]
	[Address(RVA = "0x29C7250", Offset = "0x29C5850", VA = "0x1829C7250")]
	public double4x4(uint4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001055")]
	[Address(RVA = "0x2A6EFD0", Offset = "0x2A6D5D0", VA = "0x182A6EFD0")]
	public double4x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001056")]
	[Address(RVA = "0x2A6F070", Offset = "0x2A6D670", VA = "0x182A6F070")]
	public double4x4(float4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001057")]
	[Address(RVA = "0x29DB360", Offset = "0x29D9960", VA = "0x1829DB360")]
	public static implicit operator double4x4(double v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001058")]
	[Address(RVA = "0x2A70110", Offset = "0x2A6E710", VA = "0x182A70110")]
	public static explicit operator double4x4(bool v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001059")]
	[Address(RVA = "0x29DB8D0", Offset = "0x29D9ED0", VA = "0x1829DB8D0")]
	public static explicit operator double4x4(bool4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600105A")]
	[Address(RVA = "0x29DB920", Offset = "0x29D9F20", VA = "0x1829DB920")]
	public static implicit operator double4x4(int v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600105B")]
	[Address(RVA = "0x2A70790", Offset = "0x2A6ED90", VA = "0x182A70790")]
	public static implicit operator double4x4(int4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600105C")]
	[Address(RVA = "0x2A70870", Offset = "0x2A6EE70", VA = "0x182A70870")]
	public static implicit operator double4x4(uint v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600105D")]
	[Address(RVA = "0x2A70800", Offset = "0x2A6EE00", VA = "0x182A70800")]
	public static implicit operator double4x4(uint4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600105E")]
	[Address(RVA = "0x29DB850", Offset = "0x29D9E50", VA = "0x1829DB850")]
	public static implicit operator double4x4(float v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600105F")]
	[Address(RVA = "0x29DB720", Offset = "0x29D9D20", VA = "0x1829DB720")]
	public static implicit operator double4x4(float4x4 v)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001060")]
	[Address(RVA = "0x2A71E80", Offset = "0x2A70480", VA = "0x182A71E80")]
	public static double4x4 operator *(double4x4 lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001061")]
	[Address(RVA = "0x2A71BF0", Offset = "0x2A701F0", VA = "0x182A71BF0")]
	public static double4x4 operator *(double4x4 lhs, double rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001062")]
	[Address(RVA = "0x2A71D30", Offset = "0x2A70330", VA = "0x182A71D30")]
	public static double4x4 operator *(double lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001063")]
	[Address(RVA = "0x2A6F4D0", Offset = "0x2A6DAD0", VA = "0x182A6F4D0")]
	public static double4x4 operator +(double4x4 lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001064")]
	[Address(RVA = "0x2A6F390", Offset = "0x2A6D990", VA = "0x182A6F390")]
	public static double4x4 operator +(double4x4 lhs, double rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001065")]
	[Address(RVA = "0x2A6F240", Offset = "0x2A6D840", VA = "0x182A6F240")]
	public static double4x4 operator +(double lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001066")]
	[Address(RVA = "0x2A71FF0", Offset = "0x2A705F0", VA = "0x182A71FF0")]
	public static double4x4 operator -(double4x4 lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001067")]
	[Address(RVA = "0x2A722B0", Offset = "0x2A708B0", VA = "0x182A722B0")]
	public static double4x4 operator -(double4x4 lhs, double rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001068")]
	[Address(RVA = "0x2A72160", Offset = "0x2A70760", VA = "0x182A72160")]
	public static double4x4 operator -(double lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001069")]
	[Address(RVA = "0x2A6FAA0", Offset = "0x2A6E0A0", VA = "0x182A6FAA0")]
	public static double4x4 operator /(double4x4 lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600106A")]
	[Address(RVA = "0x2A6F950", Offset = "0x2A6DF50", VA = "0x182A6F950")]
	public static double4x4 operator /(double4x4 lhs, double rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600106B")]
	[Address(RVA = "0x2A6F800", Offset = "0x2A6DE00", VA = "0x182A6F800")]
	public static double4x4 operator /(double lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600106C")]
	[Address(RVA = "0x2A719D0", Offset = "0x2A6FFD0", VA = "0x182A719D0")]
	public static double4x4 operator %(double4x4 lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600106D")]
	[Address(RVA = "0x2A717C0", Offset = "0x2A6FDC0", VA = "0x182A717C0")]
	public static double4x4 operator %(double4x4 lhs, double rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600106E")]
	[Address(RVA = "0x2A715B0", Offset = "0x2A6FBB0", VA = "0x182A715B0")]
	public static double4x4 operator %(double lhs, double4x4 rhs)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600106F")]
	[Address(RVA = "0x2A708B0", Offset = "0x2A6EEB0", VA = "0x182A708B0")]
	public static double4x4 operator ++(double4x4 val)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001070")]
	[Address(RVA = "0x2A6F640", Offset = "0x2A6DC40", VA = "0x182A6F640")]
	public static double4x4 operator --(double4x4 val)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001071")]
	[Address(RVA = "0x2A71480", Offset = "0x2A6FA80", VA = "0x182A71480")]
	public static bool4x4 operator <(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001072")]
	[Address(RVA = "0x2A713B0", Offset = "0x2A6F9B0", VA = "0x182A713B0")]
	public static bool4x4 operator <(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001073")]
	[Address(RVA = "0x2A71290", Offset = "0x2A6F890", VA = "0x182A71290")]
	public static bool4x4 operator <(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001074")]
	[Address(RVA = "0x2A70F70", Offset = "0x2A6F570", VA = "0x182A70F70")]
	public static bool4x4 operator <=(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001075")]
	[Address(RVA = "0x2A711C0", Offset = "0x2A6F7C0", VA = "0x182A711C0")]
	public static bool4x4 operator <=(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001076")]
	[Address(RVA = "0x2A710A0", Offset = "0x2A6F6A0", VA = "0x182A710A0")]
	public static bool4x4 operator <=(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001077")]
	[Address(RVA = "0x2A70580", Offset = "0x2A6EB80", VA = "0x182A70580")]
	public static bool4x4 operator >(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001078")]
	[Address(RVA = "0x2A70470", Offset = "0x2A6EA70", VA = "0x182A70470")]
	public static bool4x4 operator >(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001079")]
	[Address(RVA = "0x2A706B0", Offset = "0x2A6ECB0", VA = "0x182A706B0")]
	public static bool4x4 operator >(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600107A")]
	[Address(RVA = "0x2A70340", Offset = "0x2A6E940", VA = "0x182A70340")]
	public static bool4x4 operator >=(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600107B")]
	[Address(RVA = "0x2A70230", Offset = "0x2A6E830", VA = "0x182A70230")]
	public static bool4x4 operator >=(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600107C")]
	[Address(RVA = "0x2A70150", Offset = "0x2A6E750", VA = "0x182A70150")]
	public static bool4x4 operator >=(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600107D")]
	[Address(RVA = "0x2A72400", Offset = "0x2A70A00", VA = "0x182A72400")]
	public static double4x4 operator -(double4x4 val)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600107E")]
	[Address(RVA = "0x2A72540", Offset = "0x2A70B40", VA = "0x182A72540")]
	public static double4x4 operator +(double4x4 val)
	{
		return default(double4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600107F")]
	[Address(RVA = "0x2A6FF40", Offset = "0x2A6E540", VA = "0x182A6FF40")]
	public static bool4x4 operator ==(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001080")]
	[Address(RVA = "0x2A6FD90", Offset = "0x2A6E390", VA = "0x182A6FD90")]
	public static bool4x4 operator ==(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001081")]
	[Address(RVA = "0x2A6FC10", Offset = "0x2A6E210", VA = "0x182A6FC10")]
	public static bool4x4 operator ==(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001082")]
	[Address(RVA = "0x2A70DA0", Offset = "0x2A6F3A0", VA = "0x182A70DA0")]
	public static bool4x4 operator !=(double4x4 lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001083")]
	[Address(RVA = "0x2A70A70", Offset = "0x2A6F070", VA = "0x182A70A70")]
	public static bool4x4 operator !=(double4x4 lhs, double rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001084")]
	[Address(RVA = "0x2A70C20", Offset = "0x2A6F220", VA = "0x182A70C20")]
	public static bool4x4 operator !=(double lhs, double4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001086")]
	[Address(RVA = "0x2A648F0", Offset = "0x2A62EF0", VA = "0x182A648F0", Slot = "4")]
	public bool Equals(double4x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001087")]
	[Address(RVA = "0x2A6E0B0", Offset = "0x2A6C6B0", VA = "0x182A6E0B0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001088")]
	[Address(RVA = "0x2A6E1B0", Offset = "0x2A6C7B0", VA = "0x182A6E1B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001089")]
	[Address(RVA = "0x2A6E870", Offset = "0x2A6CE70", VA = "0x182A6E870", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600108A")]
	[Address(RVA = "0x2A6E210", Offset = "0x2A6C810", VA = "0x182A6E210", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
