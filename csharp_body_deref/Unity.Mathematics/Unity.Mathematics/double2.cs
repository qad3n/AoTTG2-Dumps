using System;
using System.ComponentModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x200001C")]
[DebuggerTypeProxy(typeof(DebuggerProxy))]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double2 : IEquatable<double2>, IFormattable
{
	[Token(Token = "0x200001D")]
	internal sealed class DebuggerProxy
	{
		[Token(Token = "0x4000061")]
		[FieldOffset(Offset = "0x10")]
		public double x;

		[Token(Token = "0x4000062")]
		[FieldOffset(Offset = "0x18")]
		public double y;

		[Token(Token = "0x6000B67")]
		[Address(RVA = "0x4789670", Offset = "0x4789670", VA = "0x4789670")]
		public DebuggerProxy(double2 v)
		{
		}
	}

	[Token(Token = "0x400005E")]
	[FieldOffset(Offset = "0x0")]
	public double x;

	[Token(Token = "0x400005F")]
	[FieldOffset(Offset = "0x8")]
	public double y;

	[Token(Token = "0x4000060")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double2 zero;

	[Token(Token = "0x170001EE")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xxxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B42")]
		[Address(RVA = "0x4789120", Offset = "0x4789120", VA = "0x4789120")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x170001EF")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xxxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B43")]
		[Address(RVA = "0x4789140", Offset = "0x4789140", VA = "0x4789140")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x170001F0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xxyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B44")]
		[Address(RVA = "0x4789160", Offset = "0x4789160", VA = "0x4789160")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x170001F1")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xxyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B45")]
		[Address(RVA = "0x4789180", Offset = "0x4789180", VA = "0x4789180")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x170001F2")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xyxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B46")]
		[Address(RVA = "0x47891A0", Offset = "0x47891A0", VA = "0x47891A0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x170001F3")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xyxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B47")]
		[Address(RVA = "0x47891C0", Offset = "0x47891C0", VA = "0x47891C0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x170001F4")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xyyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B48")]
		[Address(RVA = "0x47891E0", Offset = "0x47891E0", VA = "0x47891E0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x170001F5")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xyyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B49")]
		[Address(RVA = "0x4789200", Offset = "0x4789200", VA = "0x4789200")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x170001F6")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yxxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B4A")]
		[Address(RVA = "0x4789220", Offset = "0x4789220", VA = "0x4789220")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x170001F7")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yxxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B4B")]
		[Address(RVA = "0x4789240", Offset = "0x4789240", VA = "0x4789240")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x170001F8")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yxyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B4C")]
		[Address(RVA = "0x4789260", Offset = "0x4789260", VA = "0x4789260")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x170001F9")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yxyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B4D")]
		[Address(RVA = "0x4789280", Offset = "0x4789280", VA = "0x4789280")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x170001FA")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yyxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B4E")]
		[Address(RVA = "0x47892A0", Offset = "0x47892A0", VA = "0x47892A0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x170001FB")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yyxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B4F")]
		[Address(RVA = "0x47892C0", Offset = "0x47892C0", VA = "0x47892C0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x170001FC")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yyyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B50")]
		[Address(RVA = "0x47892E0", Offset = "0x47892E0", VA = "0x47892E0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x170001FD")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yyyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B51")]
		[Address(RVA = "0x4789300", Offset = "0x4789300", VA = "0x4789300")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x170001FE")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 xxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B52")]
		[Address(RVA = "0x4789320", Offset = "0x4789320", VA = "0x4789320")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x170001FF")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 xxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B53")]
		[Address(RVA = "0x4789340", Offset = "0x4789340", VA = "0x4789340")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x17000200")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 xyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B54")]
		[Address(RVA = "0x4789350", Offset = "0x4789350", VA = "0x4789350")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x17000201")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 xyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B55")]
		[Address(RVA = "0x4789360", Offset = "0x4789360", VA = "0x4789360")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x17000202")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 yxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B56")]
		[Address(RVA = "0x4789380", Offset = "0x4789380", VA = "0x4789380")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x17000203")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 yxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B57")]
		[Address(RVA = "0x47893A0", Offset = "0x47893A0", VA = "0x47893A0")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x17000204")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 yyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B58")]
		[Address(RVA = "0x47893C0", Offset = "0x47893C0", VA = "0x47893C0")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x17000205")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 yyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B59")]
		[Address(RVA = "0x47893E0", Offset = "0x47893E0", VA = "0x47893E0")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x17000206")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double2 xx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B5A")]
		[Address(RVA = "0x4789400", Offset = "0x4789400", VA = "0x4789400")]
		get
		{
			return default(double2);
		}
	}

	[Token(Token = "0x17000207")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double2 xy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B5B")]
		[Address(RVA = "0x4789410", Offset = "0x4789410", VA = "0x4789410")]
		get
		{
			return default(double2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B5C")]
		[Address(RVA = "0x4789420", Offset = "0x4789420", VA = "0x4789420")]
		set
		{
		}
	}

	[Token(Token = "0x17000208")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double2 yx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B5D")]
		[Address(RVA = "0x4789430", Offset = "0x4789430", VA = "0x4789430")]
		get
		{
			return default(double2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B5E")]
		[Address(RVA = "0x4789440", Offset = "0x4789440", VA = "0x4789440")]
		set
		{
		}
	}

	[Token(Token = "0x17000209")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double2 yy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B5F")]
		[Address(RVA = "0x4789450", Offset = "0x4789450", VA = "0x4789450")]
		get
		{
			return default(double2);
		}
	}

	[Token(Token = "0x1700020A")]
	public double this[int index]
	{
		[Token(Token = "0x6000B60")]
		[Address(RVA = "0x4789460", Offset = "0x4789460", VA = "0x4789460")]
		get
		{
			return default(double);
		}
		[Token(Token = "0x6000B61")]
		[Address(RVA = "0x4789470", Offset = "0x4789470", VA = "0x4789470")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B05")]
	[Address(RVA = "0x4788830", Offset = "0x4788830", VA = "0x4788830")]
	public double2(double x, double y)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x4788840", Offset = "0x4788840", VA = "0x4788840")]
	public double2(double2 xy)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B07")]
	[Address(RVA = "0x4788850", Offset = "0x4788850", VA = "0x4788850")]
	public double2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x4788860", Offset = "0x4788860", VA = "0x4788860")]
	public double2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x4788890", Offset = "0x4788890", VA = "0x4788890")]
	public double2(bool2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x47888D0", Offset = "0x47888D0", VA = "0x47888D0")]
	public double2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B0B")]
	[Address(RVA = "0x47888E0", Offset = "0x47888E0", VA = "0x47888E0")]
	public double2(int2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B0C")]
	[Address(RVA = "0x4788900", Offset = "0x4788900", VA = "0x4788900")]
	public double2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x4788920", Offset = "0x4788920", VA = "0x4788920")]
	public double2(uint2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x4788940", Offset = "0x4788940", VA = "0x4788940")]
	public double2(half v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x47889B0", Offset = "0x47889B0", VA = "0x47889B0")]
	public double2(half2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x4788A80", Offset = "0x4788A80", VA = "0x4788A80")]
	public double2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x4788A90", Offset = "0x4788A90", VA = "0x4788A90")]
	public double2(float2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x4788AA0", Offset = "0x4788AA0", VA = "0x4788AA0")]
	public static implicit operator double2(double v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B13")]
	[Address(RVA = "0x4788AB0", Offset = "0x4788AB0", VA = "0x4788AB0")]
	public static explicit operator double2(bool v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x4788AD0", Offset = "0x4788AD0", VA = "0x4788AD0")]
	public static explicit operator double2(bool2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x4788B00", Offset = "0x4788B00", VA = "0x4788B00")]
	public static implicit operator double2(int v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x4788B10", Offset = "0x4788B10", VA = "0x4788B10")]
	public static implicit operator double2(int2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x4788B20", Offset = "0x4788B20", VA = "0x4788B20")]
	public static implicit operator double2(uint v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x4788B30", Offset = "0x4788B30", VA = "0x4788B30")]
	public static implicit operator double2(uint2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x4788B50", Offset = "0x4788B50", VA = "0x4788B50")]
	public static implicit operator double2(half v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x4788BC0", Offset = "0x4788BC0", VA = "0x4788BC0")]
	public static implicit operator double2(half2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x4788C80", Offset = "0x4788C80", VA = "0x4788C80")]
	public static implicit operator double2(float v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x4788C90", Offset = "0x4788C90", VA = "0x4788C90")]
	public static implicit operator double2(float2 v)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x4788CA0", Offset = "0x4788CA0", VA = "0x4788CA0")]
	public static double2 operator *(double2 lhs, double2 rhs)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x4788CB0", Offset = "0x4788CB0", VA = "0x4788CB0")]
	public static double2 operator *(double2 lhs, double rhs)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x4788CC0", Offset = "0x4788CC0", VA = "0x4788CC0")]
	public static double2 operator *(double lhs, double2 rhs)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x4788CE0", Offset = "0x4788CE0", VA = "0x4788CE0")]
	public static double2 operator +(double2 lhs, double2 rhs)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x4788CF0", Offset = "0x4788CF0", VA = "0x4788CF0")]
	public static double2 operator +(double2 lhs, double rhs)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x4788D00", Offset = "0x4788D00", VA = "0x4788D00")]
	public static double2 operator +(double lhs, double2 rhs)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x4788D20", Offset = "0x4788D20", VA = "0x4788D20")]
	public static double2 operator -(double2 lhs, double2 rhs)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x4788D30", Offset = "0x4788D30", VA = "0x4788D30")]
	public static double2 operator -(double2 lhs, double rhs)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x4788D40", Offset = "0x4788D40", VA = "0x4788D40")]
	public static double2 operator -(double lhs, double2 rhs)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x4788D60", Offset = "0x4788D60", VA = "0x4788D60")]
	public static double2 operator /(double2 lhs, double2 rhs)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x4788D80", Offset = "0x4788D80", VA = "0x4788D80")]
	public static double2 operator /(double2 lhs, double rhs)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x4788DA0", Offset = "0x4788DA0", VA = "0x4788DA0")]
	public static double2 operator /(double lhs, double2 rhs)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x4788DC0", Offset = "0x4788DC0", VA = "0x4788DC0")]
	public static double2 operator %(double2 lhs, double2 rhs)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x4788E00", Offset = "0x4788E00", VA = "0x4788E00")]
	public static double2 operator %(double2 lhs, double rhs)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x4788E40", Offset = "0x4788E40", VA = "0x4788E40")]
	public static double2 operator %(double lhs, double2 rhs)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x4788E80", Offset = "0x4788E80", VA = "0x4788E80")]
	public static double2 operator ++(double2 val)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x4788EA0", Offset = "0x4788EA0", VA = "0x4788EA0")]
	public static double2 operator --(double2 val)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x4788EC0", Offset = "0x4788EC0", VA = "0x4788EC0")]
	public static bool2 operator <(double2 lhs, double2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x4788EE0", Offset = "0x4788EE0", VA = "0x4788EE0")]
	public static bool2 operator <(double2 lhs, double rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x4788F00", Offset = "0x4788F00", VA = "0x4788F00")]
	public static bool2 operator <(double lhs, double2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x4788F20", Offset = "0x4788F20", VA = "0x4788F20")]
	public static bool2 operator <=(double2 lhs, double2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x4788F40", Offset = "0x4788F40", VA = "0x4788F40")]
	public static bool2 operator <=(double2 lhs, double rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x4788F60", Offset = "0x4788F60", VA = "0x4788F60")]
	public static bool2 operator <=(double lhs, double2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x4788F80", Offset = "0x4788F80", VA = "0x4788F80")]
	public static bool2 operator >(double2 lhs, double2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x4788FA0", Offset = "0x4788FA0", VA = "0x4788FA0")]
	public static bool2 operator >(double2 lhs, double rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x4788FC0", Offset = "0x4788FC0", VA = "0x4788FC0")]
	public static bool2 operator >(double lhs, double2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x4788FE0", Offset = "0x4788FE0", VA = "0x4788FE0")]
	public static bool2 operator >=(double2 lhs, double2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x4789000", Offset = "0x4789000", VA = "0x4789000")]
	public static bool2 operator >=(double2 lhs, double rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x4789020", Offset = "0x4789020", VA = "0x4789020")]
	public static bool2 operator >=(double lhs, double2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x4789040", Offset = "0x4789040", VA = "0x4789040")]
	public static double2 operator -(double2 val)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x4789050", Offset = "0x4789050", VA = "0x4789050")]
	public static double2 operator +(double2 val)
	{
		return default(double2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x4789060", Offset = "0x4789060", VA = "0x4789060")]
	public static bool2 operator ==(double2 lhs, double2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x4789080", Offset = "0x4789080", VA = "0x4789080")]
	public static bool2 operator ==(double2 lhs, double rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x47890A0", Offset = "0x47890A0", VA = "0x47890A0")]
	public static bool2 operator ==(double lhs, double2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x47890C0", Offset = "0x47890C0", VA = "0x47890C0")]
	public static bool2 operator !=(double2 lhs, double2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x47890E0", Offset = "0x47890E0", VA = "0x47890E0")]
	public static bool2 operator !=(double2 lhs, double rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x4789100", Offset = "0x4789100", VA = "0x4789100")]
	public static bool2 operator !=(double lhs, double2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x4789480", Offset = "0x4789480", VA = "0x4789480", Slot = "4")]
	public bool Equals(double2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x47894A0", Offset = "0x47894A0", VA = "0x47894A0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x4789520", Offset = "0x4789520", VA = "0x4789520", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x4789560", Offset = "0x4789560", VA = "0x4789560", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x47895F0", Offset = "0x47895F0", VA = "0x47895F0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
