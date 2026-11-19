// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.double3x3
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
[Token(Token = "0x2000022")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double3x3 : IEquatable<double3x3>, IFormattable
{
	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x0")]
	public double3 c0;

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x18")]
	public double3 c1;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x30")]
	public double3 c2;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double3x3 identity;

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x48")]
	public static readonly double3x3 zero;

	[Token(Token = "0x17000285")]
	public unsafe ref double3 this[int index]
	{
		[Token(Token = "0x6000DB1")]
		[Address(RVA = "0x642CF60", Offset = "0x642BF60", VA = "0x642CF60")]
		get
		{
			return ref *(double3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D78")]
	[Address(RVA = "0x642AD70", Offset = "0x6429D70", VA = "0x642AD70")]
	public double3x3(double3 c0, double3 c1, double3 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D79")]
	[Address(RVA = "0x642ADB0", Offset = "0x6429DB0", VA = "0x642ADB0")]
	public double3x3(double m00, double m01, double m02, double m10, double m11, double m12, double m20, double m21, double m22)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D7A")]
	[Address(RVA = "0x642ADF0", Offset = "0x6429DF0", VA = "0x642ADF0")]
	public double3x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D7B")]
	[Address(RVA = "0x642AE20", Offset = "0x6429E20", VA = "0x642AE20")]
	public double3x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D7C")]
	[Address(RVA = "0x642AEF0", Offset = "0x6429EF0", VA = "0x642AEF0")]
	public double3x3(bool3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x642B030", Offset = "0x642A030", VA = "0x642B030")]
	public double3x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x642B070", Offset = "0x642A070", VA = "0x642B070")]
	public double3x3(int3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D7F")]
	[Address(RVA = "0x642B100", Offset = "0x642A100", VA = "0x642B100")]
	public double3x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D80")]
	[Address(RVA = "0x642B140", Offset = "0x642A140", VA = "0x642B140")]
	public double3x3(uint3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D81")]
	[Address(RVA = "0x642B1E0", Offset = "0x642A1E0", VA = "0x642B1E0")]
	public double3x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D82")]
	[Address(RVA = "0x642B220", Offset = "0x642A220", VA = "0x642B220")]
	public double3x3(float3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D83")]
	[Address(RVA = "0x642B270", Offset = "0x642A270", VA = "0x642B270")]
	public static implicit operator double3x3(double v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D84")]
	[Address(RVA = "0x642B2A0", Offset = "0x642A2A0", VA = "0x642B2A0")]
	public static explicit operator double3x3(bool v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D85")]
	[Address(RVA = "0x642B350", Offset = "0x642A350", VA = "0x642B350")]
	public static explicit operator double3x3(bool3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D86")]
	[Address(RVA = "0x642B4A0", Offset = "0x642A4A0", VA = "0x642B4A0")]
	public static implicit operator double3x3(int v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D87")]
	[Address(RVA = "0x642B4E0", Offset = "0x642A4E0", VA = "0x642B4E0")]
	public static implicit operator double3x3(int3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D88")]
	[Address(RVA = "0x642B570", Offset = "0x642A570", VA = "0x642B570")]
	public static implicit operator double3x3(uint v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D89")]
	[Address(RVA = "0x642B5B0", Offset = "0x642A5B0", VA = "0x642B5B0")]
	public static implicit operator double3x3(uint3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D8A")]
	[Address(RVA = "0x642B650", Offset = "0x642A650", VA = "0x642B650")]
	public static implicit operator double3x3(float v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x642B690", Offset = "0x642A690", VA = "0x642B690")]
	public static implicit operator double3x3(float3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D8C")]
	[Address(RVA = "0x642B6F0", Offset = "0x642A6F0", VA = "0x642B6F0")]
	public static double3x3 operator *(double3x3 lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D8D")]
	[Address(RVA = "0x642B750", Offset = "0x642A750", VA = "0x642B750")]
	public static double3x3 operator *(double3x3 lhs, double rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D8E")]
	[Address(RVA = "0x642B7A0", Offset = "0x642A7A0", VA = "0x642B7A0")]
	public static double3x3 operator *(double lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D8F")]
	[Address(RVA = "0x642B7F0", Offset = "0x642A7F0", VA = "0x642B7F0")]
	public static double3x3 operator +(double3x3 lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D90")]
	[Address(RVA = "0x642B850", Offset = "0x642A850", VA = "0x642B850")]
	public static double3x3 operator +(double3x3 lhs, double rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D91")]
	[Address(RVA = "0x642B8A0", Offset = "0x642A8A0", VA = "0x642B8A0")]
	public static double3x3 operator +(double lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D92")]
	[Address(RVA = "0x642B8F0", Offset = "0x642A8F0", VA = "0x642B8F0")]
	public static double3x3 operator -(double3x3 lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D93")]
	[Address(RVA = "0x642B960", Offset = "0x642A960", VA = "0x642B960")]
	public static double3x3 operator -(double3x3 lhs, double rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x642B9C0", Offset = "0x642A9C0", VA = "0x642B9C0")]
	public static double3x3 operator -(double lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x642BA10", Offset = "0x642AA10", VA = "0x642BA10")]
	public static double3x3 operator /(double3x3 lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D96")]
	[Address(RVA = "0x642BA80", Offset = "0x642AA80", VA = "0x642BA80")]
	public static double3x3 operator /(double3x3 lhs, double rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D97")]
	[Address(RVA = "0x642BAE0", Offset = "0x642AAE0", VA = "0x642BAE0")]
	public static double3x3 operator /(double lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D98")]
	[Address(RVA = "0x642BB30", Offset = "0x642AB30", VA = "0x642BB30")]
	public static double3x3 operator %(double3x3 lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D99")]
	[Address(RVA = "0x642BD30", Offset = "0x642AD30", VA = "0x642BD30")]
	public static double3x3 operator %(double3x3 lhs, double rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D9A")]
	[Address(RVA = "0x642BEC0", Offset = "0x642AEC0", VA = "0x642BEC0")]
	public static double3x3 operator %(double lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D9B")]
	[Address(RVA = "0x642C050", Offset = "0x642B050", VA = "0x642C050")]
	public static double3x3 operator ++(double3x3 val)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D9C")]
	[Address(RVA = "0x642C0B0", Offset = "0x642B0B0", VA = "0x642C0B0")]
	public static double3x3 operator --(double3x3 val)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D9D")]
	[Address(RVA = "0x642C110", Offset = "0x642B110", VA = "0x642C110")]
	public static bool3x3 operator <(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D9E")]
	[Address(RVA = "0x642C1F0", Offset = "0x642B1F0", VA = "0x642C1F0")]
	public static bool3x3 operator <(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D9F")]
	[Address(RVA = "0x642C280", Offset = "0x642B280", VA = "0x642C280")]
	public static bool3x3 operator <(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA0")]
	[Address(RVA = "0x642C330", Offset = "0x642B330", VA = "0x642C330")]
	public static bool3x3 operator <=(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA1")]
	[Address(RVA = "0x642C410", Offset = "0x642B410", VA = "0x642C410")]
	public static bool3x3 operator <=(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA2")]
	[Address(RVA = "0x642C4A0", Offset = "0x642B4A0", VA = "0x642C4A0")]
	public static bool3x3 operator <=(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA3")]
	[Address(RVA = "0x642C550", Offset = "0x642B550", VA = "0x642C550")]
	public static bool3x3 operator >(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA4")]
	[Address(RVA = "0x642C630", Offset = "0x642B630", VA = "0x642C630")]
	public static bool3x3 operator >(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA5")]
	[Address(RVA = "0x642C6E0", Offset = "0x642B6E0", VA = "0x642C6E0")]
	public static bool3x3 operator >(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA6")]
	[Address(RVA = "0x642C770", Offset = "0x642B770", VA = "0x642C770")]
	public static bool3x3 operator >=(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA7")]
	[Address(RVA = "0x642C850", Offset = "0x642B850", VA = "0x642C850")]
	public static bool3x3 operator >=(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA8")]
	[Address(RVA = "0x642C900", Offset = "0x642B900", VA = "0x642C900")]
	public static bool3x3 operator >=(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA9")]
	[Address(RVA = "0x642C990", Offset = "0x642B990", VA = "0x642C990")]
	public static double3x3 operator -(double3x3 val)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DAA")]
	[Address(RVA = "0x642C9E0", Offset = "0x642B9E0", VA = "0x642C9E0")]
	public static double3x3 operator +(double3x3 val)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DAB")]
	[Address(RVA = "0x642CA20", Offset = "0x642BA20", VA = "0x642CA20")]
	public static bool3x3 operator ==(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DAC")]
	[Address(RVA = "0x642CB20", Offset = "0x642BB20", VA = "0x642CB20")]
	public static bool3x3 operator ==(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x642CBF0", Offset = "0x642BBF0", VA = "0x642CBF0")]
	public static bool3x3 operator ==(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x642CCC0", Offset = "0x642BCC0", VA = "0x642CCC0")]
	public static bool3x3 operator !=(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x642CDC0", Offset = "0x642BDC0", VA = "0x642CDC0")]
	public static bool3x3 operator !=(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x642CE90", Offset = "0x642BE90", VA = "0x642CE90")]
	public static bool3x3 operator !=(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x642CF70", Offset = "0x642BF70", VA = "0x642CF70", Slot = "4")]
	public bool Equals(double3x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x642D000", Offset = "0x642C000", VA = "0x642D000", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x642D0F0", Offset = "0x642C0F0", VA = "0x642D0F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DB5")]
	[Address(RVA = "0x642D1F0", Offset = "0x642C1F0", VA = "0x642D1F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DB6")]
	[Address(RVA = "0x642D5A0", Offset = "0x642C5A0", VA = "0x642D5A0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
