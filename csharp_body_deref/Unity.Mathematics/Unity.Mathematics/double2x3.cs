using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x200001F")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double2x3 : IEquatable<double2x3>, IFormattable
{
	[Token(Token = "0x4000067")]
	[FieldOffset(Offset = "0x0")]
	public double2 c0;

	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x10")]
	public double2 c1;

	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0x20")]
	public double2 c2;

	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double2x3 zero;

	[Token(Token = "0x1700020C")]
	public unsafe ref double2 this[int index]
	{
		[Token(Token = "0x6000BE1")]
		[Address(RVA = "0x478C080", Offset = "0x478C080", VA = "0x478C080")]
		get
		{
			return ref *(double2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA8")]
	[Address(RVA = "0x478AB20", Offset = "0x478AB20", VA = "0x478AB20")]
	public double2x3(double2 c0, double2 c1, double2 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x478AB40", Offset = "0x478AB40", VA = "0x478AB40")]
	public double2x3(double m00, double m01, double m02, double m10, double m11, double m12)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x478AB60", Offset = "0x478AB60", VA = "0x478AB60")]
	public double2x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x478AB80", Offset = "0x478AB80", VA = "0x478AB80")]
	public double2x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x478ABB0", Offset = "0x478ABB0", VA = "0x478ABB0")]
	public double2x3(bool2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x478AC50", Offset = "0x478AC50", VA = "0x478AC50")]
	public double2x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x478AC80", Offset = "0x478AC80", VA = "0x478AC80")]
	public double2x3(int2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x478ACE0", Offset = "0x478ACE0", VA = "0x478ACE0")]
	public double2x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x478AD10", Offset = "0x478AD10", VA = "0x478AD10")]
	public double2x3(uint2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x478AD80", Offset = "0x478AD80", VA = "0x478AD80")]
	public double2x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x478ADB0", Offset = "0x478ADB0", VA = "0x478ADB0")]
	public double2x3(float2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x478ADD0", Offset = "0x478ADD0", VA = "0x478ADD0")]
	public static implicit operator double2x3(double v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x478AE00", Offset = "0x478AE00", VA = "0x478AE00")]
	public static explicit operator double2x3(bool v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x478AE40", Offset = "0x478AE40", VA = "0x478AE40")]
	public static explicit operator double2x3(bool2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB6")]
	[Address(RVA = "0x478AEE0", Offset = "0x478AEE0", VA = "0x478AEE0")]
	public static implicit operator double2x3(int v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x478AF10", Offset = "0x478AF10", VA = "0x478AF10")]
	public static implicit operator double2x3(int2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x478AF70", Offset = "0x478AF70", VA = "0x478AF70")]
	public static implicit operator double2x3(uint v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB9")]
	[Address(RVA = "0x478AFA0", Offset = "0x478AFA0", VA = "0x478AFA0")]
	public static implicit operator double2x3(uint2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x478B010", Offset = "0x478B010", VA = "0x478B010")]
	public static implicit operator double2x3(float v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x478B040", Offset = "0x478B040", VA = "0x478B040")]
	public static implicit operator double2x3(float2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x478B060", Offset = "0x478B060", VA = "0x478B060")]
	public static double2x3 operator *(double2x3 lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x478B0A0", Offset = "0x478B0A0", VA = "0x478B0A0")]
	public static double2x3 operator *(double2x3 lhs, double rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x478B0D0", Offset = "0x478B0D0", VA = "0x478B0D0")]
	public static double2x3 operator *(double lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x478B100", Offset = "0x478B100", VA = "0x478B100")]
	public static double2x3 operator +(double2x3 lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x478B140", Offset = "0x478B140", VA = "0x478B140")]
	public static double2x3 operator +(double2x3 lhs, double rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x478B170", Offset = "0x478B170", VA = "0x478B170")]
	public static double2x3 operator +(double lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x478B1A0", Offset = "0x478B1A0", VA = "0x478B1A0")]
	public static double2x3 operator -(double2x3 lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x478B1E0", Offset = "0x478B1E0", VA = "0x478B1E0")]
	public static double2x3 operator -(double2x3 lhs, double rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x478B220", Offset = "0x478B220", VA = "0x478B220")]
	public static double2x3 operator -(double lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x478B250", Offset = "0x478B250", VA = "0x478B250")]
	public static double2x3 operator /(double2x3 lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x478B290", Offset = "0x478B290", VA = "0x478B290")]
	public static double2x3 operator /(double2x3 lhs, double rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x478B2D0", Offset = "0x478B2D0", VA = "0x478B2D0")]
	public static double2x3 operator /(double lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x478B300", Offset = "0x478B300", VA = "0x478B300")]
	public static double2x3 operator %(double2x3 lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x478B430", Offset = "0x478B430", VA = "0x478B430")]
	public static double2x3 operator %(double2x3 lhs, double rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x478B530", Offset = "0x478B530", VA = "0x478B530")]
	public static double2x3 operator %(double lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x478B630", Offset = "0x478B630", VA = "0x478B630")]
	public static double2x3 operator ++(double2x3 val)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x478B670", Offset = "0x478B670", VA = "0x478B670")]
	public static double2x3 operator --(double2x3 val)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x478B6B0", Offset = "0x478B6B0", VA = "0x478B6B0")]
	public static bool2x3 operator <(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x478B740", Offset = "0x478B740", VA = "0x478B740")]
	public static bool2x3 operator <(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x478B7B0", Offset = "0x478B7B0", VA = "0x478B7B0")]
	public static bool2x3 operator <(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x478B830", Offset = "0x478B830", VA = "0x478B830")]
	public static bool2x3 operator <=(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD1")]
	[Address(RVA = "0x478B8C0", Offset = "0x478B8C0", VA = "0x478B8C0")]
	public static bool2x3 operator <=(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x478B930", Offset = "0x478B930", VA = "0x478B930")]
	public static bool2x3 operator <=(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x478B9B0", Offset = "0x478B9B0", VA = "0x478B9B0")]
	public static bool2x3 operator >(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x478BA40", Offset = "0x478BA40", VA = "0x478BA40")]
	public static bool2x3 operator >(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x478BAC0", Offset = "0x478BAC0", VA = "0x478BAC0")]
	public static bool2x3 operator >(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x478BB30", Offset = "0x478BB30", VA = "0x478BB30")]
	public static bool2x3 operator >=(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x478BBC0", Offset = "0x478BBC0", VA = "0x478BBC0")]
	public static bool2x3 operator >=(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x478BC40", Offset = "0x478BC40", VA = "0x478BC40")]
	public static bool2x3 operator >=(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x478BCB0", Offset = "0x478BCB0", VA = "0x478BCB0")]
	public static double2x3 operator -(double2x3 val)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x478BCE0", Offset = "0x478BCE0", VA = "0x478BCE0")]
	public static double2x3 operator +(double2x3 val)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x478BD00", Offset = "0x478BD00", VA = "0x478BD00")]
	public static bool2x3 operator ==(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x478BDA0", Offset = "0x478BDA0", VA = "0x478BDA0")]
	public static bool2x3 operator ==(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x478BE30", Offset = "0x478BE30", VA = "0x478BE30")]
	public static bool2x3 operator ==(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x478BEC0", Offset = "0x478BEC0", VA = "0x478BEC0")]
	public static bool2x3 operator !=(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x478BF60", Offset = "0x478BF60", VA = "0x478BF60")]
	public static bool2x3 operator !=(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x478BFF0", Offset = "0x478BFF0", VA = "0x478BFF0")]
	public static bool2x3 operator !=(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x478C090", Offset = "0x478C090", VA = "0x478C090", Slot = "4")]
	public bool Equals(double2x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x478C100", Offset = "0x478C100", VA = "0x478C100", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x478C1C0", Offset = "0x478C1C0", VA = "0x478C1C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x478C290", Offset = "0x478C290", VA = "0x478C290", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x478C520", Offset = "0x478C520", VA = "0x478C520", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
