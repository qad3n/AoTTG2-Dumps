// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.double2x4
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
[Token(Token = "0x200001E")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double2x4 : IEquatable<double2x4>, IFormattable
{
	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x0")]
	public double2 c0;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x10")]
	public double2 c1;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x20")]
	public double2 c2;

	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x30")]
	public double2 c3;

	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double2x4 zero;

	[Token(Token = "0x1700020D")]
	public unsafe ref double2 this[int index]
	{
		[Token(Token = "0x6000C6B")]
		[Address(RVA = "0x64266A0", Offset = "0x64256A0", VA = "0x64266A0")]
		get
		{
			return ref *(double2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x6424AB0", Offset = "0x6423AB0", VA = "0x6424AB0")]
	public double2x4(double2 c0, double2 c1, double2 c2, double2 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x6424AE0", Offset = "0x6423AE0", VA = "0x6424AE0")]
	public double2x4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x6424B10", Offset = "0x6423B10", VA = "0x6424B10")]
	public double2x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x6424B40", Offset = "0x6423B40", VA = "0x6424B40")]
	public double2x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x6424B80", Offset = "0x6423B80", VA = "0x6424B80")]
	public double2x4(bool2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x6424C40", Offset = "0x6423C40", VA = "0x6424C40")]
	public double2x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x6424C70", Offset = "0x6423C70", VA = "0x6424C70")]
	public double2x4(int2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x6424CF0", Offset = "0x6423CF0", VA = "0x6424CF0")]
	public double2x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x6424D20", Offset = "0x6423D20", VA = "0x6424D20")]
	public double2x4(uint2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x6424DB0", Offset = "0x6423DB0", VA = "0x6424DB0")]
	public double2x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x6424DE0", Offset = "0x6423DE0", VA = "0x6424DE0")]
	public double2x4(float2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x6424E10", Offset = "0x6423E10", VA = "0x6424E10")]
	public static implicit operator double2x4(double v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x6424E40", Offset = "0x6423E40", VA = "0x6424E40")]
	public static explicit operator double2x4(bool v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x6424E80", Offset = "0x6423E80", VA = "0x6424E80")]
	public static explicit operator double2x4(bool2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x6424F40", Offset = "0x6423F40", VA = "0x6424F40")]
	public static implicit operator double2x4(int v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x6424F70", Offset = "0x6423F70", VA = "0x6424F70")]
	public static implicit operator double2x4(int2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x6424FF0", Offset = "0x6423FF0", VA = "0x6424FF0")]
	public static implicit operator double2x4(uint v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x6425030", Offset = "0x6424030", VA = "0x6425030")]
	public static implicit operator double2x4(uint2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x64250C0", Offset = "0x64240C0", VA = "0x64250C0")]
	public static implicit operator double2x4(float v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x64250F0", Offset = "0x64240F0", VA = "0x64250F0")]
	public static implicit operator double2x4(float2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x6425120", Offset = "0x6424120", VA = "0x6425120")]
	public static double2x4 operator *(double2x4 lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x6425170", Offset = "0x6424170", VA = "0x6425170")]
	public static double2x4 operator *(double2x4 lhs, double rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x64251B0", Offset = "0x64241B0", VA = "0x64251B0")]
	public static double2x4 operator *(double lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x64251F0", Offset = "0x64241F0", VA = "0x64251F0")]
	public static double2x4 operator +(double2x4 lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x6425240", Offset = "0x6424240", VA = "0x6425240")]
	public static double2x4 operator +(double2x4 lhs, double rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x6425280", Offset = "0x6424280", VA = "0x6425280")]
	public static double2x4 operator +(double lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x64252C0", Offset = "0x64242C0", VA = "0x64252C0")]
	public static double2x4 operator -(double2x4 lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x6425310", Offset = "0x6424310", VA = "0x6425310")]
	public static double2x4 operator -(double2x4 lhs, double rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x6425360", Offset = "0x6424360", VA = "0x6425360")]
	public static double2x4 operator -(double lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x64253A0", Offset = "0x64243A0", VA = "0x64253A0")]
	public static double2x4 operator /(double2x4 lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x64253F0", Offset = "0x64243F0", VA = "0x64253F0")]
	public static double2x4 operator /(double2x4 lhs, double rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x6425440", Offset = "0x6424440", VA = "0x6425440")]
	public static double2x4 operator /(double lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x6425480", Offset = "0x6424480", VA = "0x6425480")]
	public static double2x4 operator %(double2x4 lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x6425620", Offset = "0x6424620", VA = "0x6425620")]
	public static double2x4 operator %(double2x4 lhs, double rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x6425780", Offset = "0x6424780", VA = "0x6425780")]
	public static double2x4 operator %(double lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x64258D0", Offset = "0x64248D0", VA = "0x64258D0")]
	public static double2x4 operator ++(double2x4 val)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x6425920", Offset = "0x6424920", VA = "0x6425920")]
	public static double2x4 operator --(double2x4 val)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x6425970", Offset = "0x6424970", VA = "0x6425970")]
	public static bool2x4 operator <(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x6425A30", Offset = "0x6424A30", VA = "0x6425A30")]
	public static bool2x4 operator <(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x6425AC0", Offset = "0x6424AC0", VA = "0x6425AC0")]
	public static bool2x4 operator <(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C5A")]
	[Address(RVA = "0x6425B70", Offset = "0x6424B70", VA = "0x6425B70")]
	public static bool2x4 operator <=(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C5B")]
	[Address(RVA = "0x6425C30", Offset = "0x6424C30", VA = "0x6425C30")]
	public static bool2x4 operator <=(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C5C")]
	[Address(RVA = "0x6425CC0", Offset = "0x6424CC0", VA = "0x6425CC0")]
	public static bool2x4 operator <=(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x6425D70", Offset = "0x6424D70", VA = "0x6425D70")]
	public static bool2x4 operator >(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C5E")]
	[Address(RVA = "0x6425E30", Offset = "0x6424E30", VA = "0x6425E30")]
	public static bool2x4 operator >(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C5F")]
	[Address(RVA = "0x6425EE0", Offset = "0x6424EE0", VA = "0x6425EE0")]
	public static bool2x4 operator >(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C60")]
	[Address(RVA = "0x6425F70", Offset = "0x6424F70", VA = "0x6425F70")]
	public static bool2x4 operator >=(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C61")]
	[Address(RVA = "0x6426030", Offset = "0x6425030", VA = "0x6426030")]
	public static bool2x4 operator >=(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x64260E0", Offset = "0x64250E0", VA = "0x64260E0")]
	public static bool2x4 operator >=(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x6426170", Offset = "0x6425170", VA = "0x6426170")]
	public static double2x4 operator -(double2x4 val)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x64261B0", Offset = "0x64251B0", VA = "0x64261B0")]
	public static double2x4 operator +(double2x4 val)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x64261E0", Offset = "0x64251E0", VA = "0x64261E0")]
	public static bool2x4 operator ==(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x64262C0", Offset = "0x64252C0", VA = "0x64262C0")]
	public static bool2x4 operator ==(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x6426380", Offset = "0x6425380", VA = "0x6426380")]
	public static bool2x4 operator ==(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x6426440", Offset = "0x6425440", VA = "0x6426440")]
	public static bool2x4 operator !=(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x6426520", Offset = "0x6425520", VA = "0x6426520")]
	public static bool2x4 operator !=(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x64265E0", Offset = "0x64255E0", VA = "0x64265E0")]
	public static bool2x4 operator !=(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x64266B0", Offset = "0x64256B0", VA = "0x64266B0", Slot = "4")]
	public bool Equals(double2x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C6D")]
	[Address(RVA = "0x6426730", Offset = "0x6425730", VA = "0x6426730", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x6426800", Offset = "0x6425800", VA = "0x6426800", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x64268E0", Offset = "0x64258E0", VA = "0x64268E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C70")]
	[Address(RVA = "0x6426C40", Offset = "0x6425C40", VA = "0x6426C40", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
