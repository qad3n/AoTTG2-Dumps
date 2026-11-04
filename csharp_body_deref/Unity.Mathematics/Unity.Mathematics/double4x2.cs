// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.double4x2
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
[Token(Token = "0x2000026")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double4x2 : IEquatable<double4x2>, IFormattable
{
	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x0")]
	public double4 c0;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x20")]
	public double4 c1;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double4x2 zero;

	[Token(Token = "0x170003D8")]
	public unsafe ref double4 this[int index]
	{
		[Token(Token = "0x6001007")]
		[Address(RVA = "0x841B50", Offset = "0x840150", VA = "0x180841B50")]
		get
		{
			return ref *(double4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FCE")]
	[Address(RVA = "0x2A69720", Offset = "0x2A67D20", VA = "0x182A69720")]
	public double4x2(double4 c0, double4 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FCF")]
	[Address(RVA = "0x2A69630", Offset = "0x2A67C30", VA = "0x182A69630")]
	public double4x2(double m00, double m01, double m10, double m11, double m20, double m21, double m30, double m31)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FD0")]
	[Address(RVA = "0x2A58340", Offset = "0x2A56940", VA = "0x182A58340")]
	public double4x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FD1")]
	[Address(RVA = "0x2A695D0", Offset = "0x2A67BD0", VA = "0x182A695D0")]
	public double4x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FD2")]
	[Address(RVA = "0x29C6F40", Offset = "0x29C5540", VA = "0x1829C6F40")]
	public double4x2(bool4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FD3")]
	[Address(RVA = "0x2A58250", Offset = "0x2A56850", VA = "0x182A58250")]
	public double4x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FD4")]
	[Address(RVA = "0x2A69540", Offset = "0x2A67B40", VA = "0x182A69540")]
	public double4x2(int4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FD5")]
	[Address(RVA = "0x2A694C0", Offset = "0x2A67AC0", VA = "0x182A694C0")]
	public double4x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FD6")]
	[Address(RVA = "0x2A69680", Offset = "0x2A67C80", VA = "0x182A69680")]
	public double4x2(uint4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FD7")]
	[Address(RVA = "0x2A58170", Offset = "0x2A56770", VA = "0x182A58170")]
	public double4x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FD8")]
	[Address(RVA = "0x2A582A0", Offset = "0x2A568A0", VA = "0x182A582A0")]
	public double4x2(float4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FD9")]
	[Address(RVA = "0x29D8DA0", Offset = "0x29D73A0", VA = "0x1829D8DA0")]
	public static implicit operator double4x2(double v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FDA")]
	[Address(RVA = "0x29DA930", Offset = "0x29D8F30", VA = "0x1829DA930")]
	public static explicit operator double4x2(bool v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FDB")]
	[Address(RVA = "0x2A69D50", Offset = "0x2A68350", VA = "0x182A69D50")]
	public static explicit operator double4x2(bool4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FDC")]
	[Address(RVA = "0x29DA8E0", Offset = "0x29D8EE0", VA = "0x1829DA8E0")]
	public static implicit operator double4x2(int v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FDD")]
	[Address(RVA = "0x29DA840", Offset = "0x29D8E40", VA = "0x1829DA840")]
	public static implicit operator double4x2(int4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FDE")]
	[Address(RVA = "0x29DA990", Offset = "0x29D8F90", VA = "0x1829DA990")]
	public static implicit operator double4x2(uint v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FDF")]
	[Address(RVA = "0x29DABA0", Offset = "0x29D91A0", VA = "0x1829DABA0")]
	public static implicit operator double4x2(uint4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE0")]
	[Address(RVA = "0x29DA7C0", Offset = "0x29D8DC0", VA = "0x1829DA7C0")]
	public static implicit operator double4x2(float v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE1")]
	[Address(RVA = "0x29DAA10", Offset = "0x29D9010", VA = "0x1829DAA10")]
	public static implicit operator double4x2(float4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE2")]
	[Address(RVA = "0x2A6AAA0", Offset = "0x2A690A0", VA = "0x182A6AAA0")]
	public static double4x2 operator *(double4x2 lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE3")]
	[Address(RVA = "0x2A6AB20", Offset = "0x2A69120", VA = "0x182A6AB20")]
	public static double4x2 operator *(double4x2 lhs, double rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE4")]
	[Address(RVA = "0x2A6AA20", Offset = "0x2A69020", VA = "0x182A6AA20")]
	public static double4x2 operator *(double lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE5")]
	[Address(RVA = "0x2A69820", Offset = "0x2A67E20", VA = "0x182A69820")]
	public static double4x2 operator +(double4x2 lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE6")]
	[Address(RVA = "0x2A69740", Offset = "0x2A67D40", VA = "0x182A69740")]
	public static double4x2 operator +(double4x2 lhs, double rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE7")]
	[Address(RVA = "0x2A697A0", Offset = "0x2A67DA0", VA = "0x182A697A0")]
	public static double4x2 operator +(double lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE8")]
	[Address(RVA = "0x2A6AC70", Offset = "0x2A69270", VA = "0x182A6AC70")]
	public static double4x2 operator -(double4x2 lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FE9")]
	[Address(RVA = "0x2A6AB80", Offset = "0x2A69180", VA = "0x182A6AB80")]
	public static double4x2 operator -(double4x2 lhs, double rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x2A6ABF0", Offset = "0x2A691F0", VA = "0x182A6ABF0")]
	public static double4x2 operator -(double lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x2A699C0", Offset = "0x2A67FC0", VA = "0x182A699C0")]
	public static double4x2 operator /(double4x2 lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FEC")]
	[Address(RVA = "0x2A69950", Offset = "0x2A67F50", VA = "0x182A69950")]
	public static double4x2 operator /(double4x2 lhs, double rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FED")]
	[Address(RVA = "0x2A69A40", Offset = "0x2A68040", VA = "0x182A69A40")]
	public static double4x2 operator /(double lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FEE")]
	[Address(RVA = "0x2A6A910", Offset = "0x2A68F10", VA = "0x182A6A910")]
	public static double4x2 operator %(double4x2 lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FEF")]
	[Address(RVA = "0x2A6A810", Offset = "0x2A68E10", VA = "0x182A6A810")]
	public static double4x2 operator %(double4x2 lhs, double rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF0")]
	[Address(RVA = "0x2A6A700", Offset = "0x2A68D00", VA = "0x182A6A700")]
	public static double4x2 operator %(double lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF1")]
	[Address(RVA = "0x2A6A0A0", Offset = "0x2A686A0", VA = "0x182A6A0A0")]
	public static double4x2 operator ++(double4x2 val)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x2A698A0", Offset = "0x2A67EA0", VA = "0x182A698A0")]
	public static double4x2 operator --(double4x2 val)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF3")]
	[Address(RVA = "0x2A6A570", Offset = "0x2A68B70", VA = "0x182A6A570")]
	public static bool4x2 operator <(double4x2 lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF4")]
	[Address(RVA = "0x2A6A600", Offset = "0x2A68C00", VA = "0x182A6A600")]
	public static bool4x2 operator <(double4x2 lhs, double rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF5")]
	[Address(RVA = "0x2A6A670", Offset = "0x2A68C70", VA = "0x182A6A670")]
	public static bool4x2 operator <(double lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF6")]
	[Address(RVA = "0x2A6A4E0", Offset = "0x2A68AE0", VA = "0x182A6A4E0")]
	public static bool4x2 operator <=(double4x2 lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF7")]
	[Address(RVA = "0x2A6A3E0", Offset = "0x2A689E0", VA = "0x182A6A3E0")]
	public static bool4x2 operator <=(double4x2 lhs, double rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF8")]
	[Address(RVA = "0x2A6A450", Offset = "0x2A68A50", VA = "0x182A6A450")]
	public static bool4x2 operator <=(double lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF9")]
	[Address(RVA = "0x2A6A010", Offset = "0x2A68610", VA = "0x182A6A010")]
	public static bool4x2 operator >(double4x2 lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FFA")]
	[Address(RVA = "0x2A69F10", Offset = "0x2A68510", VA = "0x182A69F10")]
	public static bool4x2 operator >(double4x2 lhs, double rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FFB")]
	[Address(RVA = "0x2A69FA0", Offset = "0x2A685A0", VA = "0x182A69FA0")]
	public static bool4x2 operator >(double lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FFC")]
	[Address(RVA = "0x2A69E80", Offset = "0x2A68480", VA = "0x182A69E80")]
	public static bool4x2 operator >=(double4x2 lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FFD")]
	[Address(RVA = "0x2A69D80", Offset = "0x2A68380", VA = "0x182A69D80")]
	public static bool4x2 operator >=(double4x2 lhs, double rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FFE")]
	[Address(RVA = "0x2A69E10", Offset = "0x2A68410", VA = "0x182A69E10")]
	public static bool4x2 operator >=(double lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FFF")]
	[Address(RVA = "0x2A6ACF0", Offset = "0x2A692F0", VA = "0x182A6ACF0")]
	public static double4x2 operator -(double4x2 val)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001000")]
	[Address(RVA = "0x2A6AD50", Offset = "0x2A69350", VA = "0x182A6AD50")]
	public static double4x2 operator +(double4x2 val)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001001")]
	[Address(RVA = "0x2A69BA0", Offset = "0x2A681A0", VA = "0x182A69BA0")]
	public static bool4x2 operator ==(double4x2 lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001002")]
	[Address(RVA = "0x2A69AC0", Offset = "0x2A680C0", VA = "0x182A69AC0")]
	public static bool4x2 operator ==(double4x2 lhs, double rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001003")]
	[Address(RVA = "0x2A69C90", Offset = "0x2A68290", VA = "0x182A69C90")]
	public static bool4x2 operator ==(double lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001004")]
	[Address(RVA = "0x2A6A230", Offset = "0x2A68830", VA = "0x182A6A230")]
	public static bool4x2 operator !=(double4x2 lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001005")]
	[Address(RVA = "0x2A6A150", Offset = "0x2A68750", VA = "0x182A6A150")]
	public static bool4x2 operator !=(double4x2 lhs, double rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001006")]
	[Address(RVA = "0x2A6A320", Offset = "0x2A68920", VA = "0x182A6A320")]
	public static bool4x2 operator !=(double lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001008")]
	[Address(RVA = "0x2A57880", Offset = "0x2A55E80", VA = "0x182A57880", Slot = "4")]
	public bool Equals(double4x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001009")]
	[Address(RVA = "0x2A68C50", Offset = "0x2A67250", VA = "0x182A68C50", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600100A")]
	[Address(RVA = "0x2A68D60", Offset = "0x2A67360", VA = "0x182A68D60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600100B")]
	[Address(RVA = "0x2A69100", Offset = "0x2A67700", VA = "0x182A69100", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600100C")]
	[Address(RVA = "0x2A68DA0", Offset = "0x2A673A0", VA = "0x182A68DA0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
