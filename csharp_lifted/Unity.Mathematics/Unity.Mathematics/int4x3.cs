// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.int4x3
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
[Token(Token = "0x200004C")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int4x3 : IEquatable<int4x3>, IFormattable
{
	[Token(Token = "0x4000126")]
	[FieldOffset(Offset = "0x0")]
	public int4 c0;

	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x10")]
	public int4 c1;

	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x20")]
	public int4 c2;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int4x3 zero;

	[Token(Token = "0x1700099B")]
	public unsafe ref int4 this[int index]
	{
		[Token(Token = "0x6001E0F")]
		[Address(RVA = "0x648CFB0", Offset = "0x648BFB0", VA = "0x648CFB0")]
		get
		{
			return ref *(int4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCA")]
	[Address(RVA = "0x648A750", Offset = "0x6489750", VA = "0x648A750")]
	public int4x3(int4 c0, int4 c1, int4 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCB")]
	[Address(RVA = "0x648A770", Offset = "0x6489770", VA = "0x648A770")]
	public int4x3(int m00, int m01, int m02, int m10, int m11, int m12, int m20, int m21, int m22, int m30, int m31, int m32)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCC")]
	[Address(RVA = "0x648A7D0", Offset = "0x64897D0", VA = "0x648A7D0")]
	public int4x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCD")]
	[Address(RVA = "0x648A800", Offset = "0x6489800", VA = "0x648A800")]
	public int4x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCE")]
	[Address(RVA = "0x648A830", Offset = "0x6489830", VA = "0x648A830")]
	public int4x3(bool4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCF")]
	[Address(RVA = "0x648A8E0", Offset = "0x64898E0", VA = "0x648A8E0")]
	public int4x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD0")]
	[Address(RVA = "0x648A910", Offset = "0x6489910", VA = "0x648A910")]
	public int4x3(uint4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD1")]
	[Address(RVA = "0x648A930", Offset = "0x6489930", VA = "0x648A930")]
	public int4x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD2")]
	[Address(RVA = "0x648A960", Offset = "0x6489960", VA = "0x648A960")]
	public int4x3(float4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD3")]
	[Address(RVA = "0x648A9E0", Offset = "0x64899E0", VA = "0x648A9E0")]
	public int4x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD4")]
	[Address(RVA = "0x648AA10", Offset = "0x6489A10", VA = "0x648AA10")]
	public int4x3(double4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD5")]
	[Address(RVA = "0x648AA90", Offset = "0x6489A90", VA = "0x648AA90")]
	public static implicit operator int4x3(int v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD6")]
	[Address(RVA = "0x648AAC0", Offset = "0x6489AC0", VA = "0x648AAC0")]
	public static explicit operator int4x3(bool v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD7")]
	[Address(RVA = "0x648AAF0", Offset = "0x6489AF0", VA = "0x648AAF0")]
	public static explicit operator int4x3(bool4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD8")]
	[Address(RVA = "0x648ABA0", Offset = "0x6489BA0", VA = "0x648ABA0")]
	public static explicit operator int4x3(uint v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD9")]
	[Address(RVA = "0x648ABD0", Offset = "0x6489BD0", VA = "0x648ABD0")]
	public static explicit operator int4x3(uint4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDA")]
	[Address(RVA = "0x648ABF0", Offset = "0x6489BF0", VA = "0x648ABF0")]
	public static explicit operator int4x3(float v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDB")]
	[Address(RVA = "0x648AC20", Offset = "0x6489C20", VA = "0x648AC20")]
	public static explicit operator int4x3(float4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDC")]
	[Address(RVA = "0x648ACA0", Offset = "0x6489CA0", VA = "0x648ACA0")]
	public static explicit operator int4x3(double v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDD")]
	[Address(RVA = "0x648ACD0", Offset = "0x6489CD0", VA = "0x648ACD0")]
	public static explicit operator int4x3(double4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDE")]
	[Address(RVA = "0x648AD50", Offset = "0x6489D50", VA = "0x648AD50")]
	public static int4x3 operator *(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDF")]
	[Address(RVA = "0x648AE40", Offset = "0x6489E40", VA = "0x648AE40")]
	public static int4x3 operator *(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE0")]
	[Address(RVA = "0x648AF00", Offset = "0x6489F00", VA = "0x648AF00")]
	public static int4x3 operator *(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE1")]
	[Address(RVA = "0x648AFC0", Offset = "0x6489FC0", VA = "0x648AFC0")]
	public static int4x3 operator +(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE2")]
	[Address(RVA = "0x648B0A0", Offset = "0x648A0A0", VA = "0x648B0A0")]
	public static int4x3 operator +(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE3")]
	[Address(RVA = "0x648B0E0", Offset = "0x648A0E0", VA = "0x648B0E0")]
	public static int4x3 operator +(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE4")]
	[Address(RVA = "0x648B120", Offset = "0x648A120", VA = "0x648B120")]
	public static int4x3 operator -(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE5")]
	[Address(RVA = "0x648B210", Offset = "0x648A210", VA = "0x648B210")]
	public static int4x3 operator -(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE6")]
	[Address(RVA = "0x648B250", Offset = "0x648A250", VA = "0x648B250")]
	public static int4x3 operator -(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE7")]
	[Address(RVA = "0x648B290", Offset = "0x648A290", VA = "0x648B290")]
	public static int4x3 operator /(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE8")]
	[Address(RVA = "0x648B3C0", Offset = "0x648A3C0", VA = "0x648B3C0")]
	public static int4x3 operator /(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE9")]
	[Address(RVA = "0x648B4B0", Offset = "0x648A4B0", VA = "0x648B4B0")]
	public static int4x3 operator /(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DEA")]
	[Address(RVA = "0x648B5A0", Offset = "0x648A5A0", VA = "0x648B5A0")]
	public static int4x3 operator %(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DEB")]
	[Address(RVA = "0x648B6D0", Offset = "0x648A6D0", VA = "0x648B6D0")]
	public static int4x3 operator %(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DEC")]
	[Address(RVA = "0x648B7C0", Offset = "0x648A7C0", VA = "0x648B7C0")]
	public static int4x3 operator %(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DED")]
	[Address(RVA = "0x648B8B0", Offset = "0x648A8B0", VA = "0x648B8B0")]
	public static int4x3 operator ++(int4x3 val)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DEE")]
	[Address(RVA = "0x648B920", Offset = "0x648A920", VA = "0x648B920")]
	public static int4x3 operator --(int4x3 val)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DEF")]
	[Address(RVA = "0x648B990", Offset = "0x648A990", VA = "0x648B990")]
	public static bool4x3 operator <(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF0")]
	[Address(RVA = "0x648BAC0", Offset = "0x648AAC0", VA = "0x648BAC0")]
	public static bool4x3 operator <(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF1")]
	[Address(RVA = "0x648BBB0", Offset = "0x648ABB0", VA = "0x648BBB0")]
	public static bool4x3 operator <(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF2")]
	[Address(RVA = "0x648BCA0", Offset = "0x648ACA0", VA = "0x648BCA0")]
	public static bool4x3 operator <=(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF3")]
	[Address(RVA = "0x648BDC0", Offset = "0x648ADC0", VA = "0x648BDC0")]
	public static bool4x3 operator <=(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF4")]
	[Address(RVA = "0x648BEA0", Offset = "0x648AEA0", VA = "0x648BEA0")]
	public static bool4x3 operator <=(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF5")]
	[Address(RVA = "0x648BF80", Offset = "0x648AF80", VA = "0x648BF80")]
	public static bool4x3 operator >(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF6")]
	[Address(RVA = "0x648C0B0", Offset = "0x648B0B0", VA = "0x648C0B0")]
	public static bool4x3 operator >(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF7")]
	[Address(RVA = "0x648C1A0", Offset = "0x648B1A0", VA = "0x648C1A0")]
	public static bool4x3 operator >(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF8")]
	[Address(RVA = "0x648C290", Offset = "0x648B290", VA = "0x648C290")]
	public static bool4x3 operator >=(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF9")]
	[Address(RVA = "0x648C3B0", Offset = "0x648B3B0", VA = "0x648C3B0")]
	public static bool4x3 operator >=(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFA")]
	[Address(RVA = "0x648C490", Offset = "0x648B490", VA = "0x648C490")]
	public static bool4x3 operator >=(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFB")]
	[Address(RVA = "0x648C570", Offset = "0x648B570", VA = "0x648C570")]
	public static int4x3 operator -(int4x3 val)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFC")]
	[Address(RVA = "0x648C5E0", Offset = "0x648B5E0", VA = "0x648C5E0")]
	public static int4x3 operator +(int4x3 val)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFD")]
	[Address(RVA = "0x648C600", Offset = "0x648B600", VA = "0x648C600")]
	public static int4x3 operator <<(int4x3 x, int n)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFE")]
	[Address(RVA = "0x648C6C0", Offset = "0x648B6C0", VA = "0x648C6C0")]
	public static int4x3 operator >>(int4x3 x, int n)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFF")]
	[Address(RVA = "0x648C780", Offset = "0x648B780", VA = "0x648C780")]
	public static bool4x3 operator ==(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E00")]
	[Address(RVA = "0x648C8B0", Offset = "0x648B8B0", VA = "0x648C8B0")]
	public static bool4x3 operator ==(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E01")]
	[Address(RVA = "0x648C9A0", Offset = "0x648B9A0", VA = "0x648C9A0")]
	public static bool4x3 operator ==(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E02")]
	[Address(RVA = "0x648CA90", Offset = "0x648BA90", VA = "0x648CA90")]
	public static bool4x3 operator !=(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E03")]
	[Address(RVA = "0x648CBB0", Offset = "0x648BBB0", VA = "0x648CBB0")]
	public static bool4x3 operator !=(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E04")]
	[Address(RVA = "0x648CC90", Offset = "0x648BC90", VA = "0x648CC90")]
	public static bool4x3 operator !=(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E05")]
	[Address(RVA = "0x648CD70", Offset = "0x648BD70", VA = "0x648CD70")]
	public static int4x3 operator ~(int4x3 val)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E06")]
	[Address(RVA = "0x648CDA0", Offset = "0x648BDA0", VA = "0x648CDA0")]
	public static int4x3 operator &(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E07")]
	[Address(RVA = "0x648CDD0", Offset = "0x648BDD0", VA = "0x648CDD0")]
	public static int4x3 operator &(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E08")]
	[Address(RVA = "0x648CE10", Offset = "0x648BE10", VA = "0x648CE10")]
	public static int4x3 operator &(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E09")]
	[Address(RVA = "0x648CE50", Offset = "0x648BE50", VA = "0x648CE50")]
	public static int4x3 operator |(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E0A")]
	[Address(RVA = "0x648CE80", Offset = "0x648BE80", VA = "0x648CE80")]
	public static int4x3 operator |(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E0B")]
	[Address(RVA = "0x648CEC0", Offset = "0x648BEC0", VA = "0x648CEC0")]
	public static int4x3 operator |(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E0C")]
	[Address(RVA = "0x648CF00", Offset = "0x648BF00", VA = "0x648CF00")]
	public static int4x3 operator ^(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E0D")]
	[Address(RVA = "0x648CF30", Offset = "0x648BF30", VA = "0x648CF30")]
	public static int4x3 operator ^(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E0E")]
	[Address(RVA = "0x648CF70", Offset = "0x648BF70", VA = "0x648CF70")]
	public static int4x3 operator ^(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E10")]
	[Address(RVA = "0x648CFC0", Offset = "0x648BFC0", VA = "0x648CFC0", Slot = "4")]
	public bool Equals(int4x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001E11")]
	[Address(RVA = "0x648D040", Offset = "0x648C040", VA = "0x648D040", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E12")]
	[Address(RVA = "0x648D110", Offset = "0x648C110", VA = "0x648D110", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E13")]
	[Address(RVA = "0x648D1E0", Offset = "0x648C1E0", VA = "0x648D1E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E14")]
	[Address(RVA = "0x648D650", Offset = "0x648C650", VA = "0x648D650", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
