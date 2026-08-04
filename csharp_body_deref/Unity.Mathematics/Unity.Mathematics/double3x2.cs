// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.double3x2
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
[Token(Token = "0x2000020")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double3x2 : IEquatable<double3x2>, IFormattable
{
	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0x0")]
	public double3 c0;

	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0x18")]
	public double3 c1;

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double3x2 zero;

	[Token(Token = "0x17000284")]
	public unsafe ref double3 this[int index]
	{
		[Token(Token = "0x6000CFF")]
		[Address(RVA = "0x4A95290", Offset = "0x4A95290", VA = "0x4A95290")]
		get
		{
			return ref *(double3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x4A93C80", Offset = "0x4A93C80", VA = "0x4A93C80")]
	public double3x2(double3 c0, double3 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CC7")]
	[Address(RVA = "0x4A93CB0", Offset = "0x4A93CB0", VA = "0x4A93CB0")]
	public double3x2(double m00, double m01, double m10, double m11, double m20, double m21)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CC8")]
	[Address(RVA = "0x4A93CD0", Offset = "0x4A93CD0", VA = "0x4A93CD0")]
	public double3x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CC9")]
	[Address(RVA = "0x4A93CF0", Offset = "0x4A93CF0", VA = "0x4A93CF0")]
	public double3x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x4A93D20", Offset = "0x4A93D20", VA = "0x4A93D20")]
	public double3x2(bool3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CCB")]
	[Address(RVA = "0x4A93E00", Offset = "0x4A93E00", VA = "0x4A93E00")]
	public double3x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CCC")]
	[Address(RVA = "0x4A93E30", Offset = "0x4A93E30", VA = "0x4A93E30")]
	public double3x2(int3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x4A93E90", Offset = "0x4A93E90", VA = "0x4A93E90")]
	public double3x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x4A93EC0", Offset = "0x4A93EC0", VA = "0x4A93EC0")]
	public double3x2(uint3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CCF")]
	[Address(RVA = "0x4A93F30", Offset = "0x4A93F30", VA = "0x4A93F30")]
	public double3x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x4A93F60", Offset = "0x4A93F60", VA = "0x4A93F60")]
	public double3x2(float3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x4A93FA0", Offset = "0x4A93FA0", VA = "0x4A93FA0")]
	public static implicit operator double3x2(double v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x4A93FD0", Offset = "0x4A93FD0", VA = "0x4A93FD0")]
	public static explicit operator double3x2(bool v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x4A94010", Offset = "0x4A94010", VA = "0x4A94010")]
	public static explicit operator double3x2(bool3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x4A940F0", Offset = "0x4A940F0", VA = "0x4A940F0")]
	public static implicit operator double3x2(int v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x4A94120", Offset = "0x4A94120", VA = "0x4A94120")]
	public static implicit operator double3x2(int3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x4A94180", Offset = "0x4A94180", VA = "0x4A94180")]
	public static implicit operator double3x2(uint v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0x4A941B0", Offset = "0x4A941B0", VA = "0x4A941B0")]
	public static implicit operator double3x2(uint3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x4A94220", Offset = "0x4A94220", VA = "0x4A94220")]
	public static implicit operator double3x2(float v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CD9")]
	[Address(RVA = "0x4A94250", Offset = "0x4A94250", VA = "0x4A94250")]
	public static implicit operator double3x2(float3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x4A94290", Offset = "0x4A94290", VA = "0x4A94290")]
	public static double3x2 operator *(double3x2 lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CDB")]
	[Address(RVA = "0x4A942D0", Offset = "0x4A942D0", VA = "0x4A942D0")]
	public static double3x2 operator *(double3x2 lhs, double rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x4A94300", Offset = "0x4A94300", VA = "0x4A94300")]
	public static double3x2 operator *(double lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x4A94330", Offset = "0x4A94330", VA = "0x4A94330")]
	public static double3x2 operator +(double3x2 lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x4A94370", Offset = "0x4A94370", VA = "0x4A94370")]
	public static double3x2 operator +(double3x2 lhs, double rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x4A943A0", Offset = "0x4A943A0", VA = "0x4A943A0")]
	public static double3x2 operator +(double lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x4A943D0", Offset = "0x4A943D0", VA = "0x4A943D0")]
	public static double3x2 operator -(double3x2 lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CE1")]
	[Address(RVA = "0x4A94410", Offset = "0x4A94410", VA = "0x4A94410")]
	public static double3x2 operator -(double3x2 lhs, double rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x4A94450", Offset = "0x4A94450", VA = "0x4A94450")]
	public static double3x2 operator -(double lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CE3")]
	[Address(RVA = "0x4A94480", Offset = "0x4A94480", VA = "0x4A94480")]
	public static double3x2 operator /(double3x2 lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CE4")]
	[Address(RVA = "0x4A944C0", Offset = "0x4A944C0", VA = "0x4A944C0")]
	public static double3x2 operator /(double3x2 lhs, double rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CE5")]
	[Address(RVA = "0x4A94500", Offset = "0x4A94500", VA = "0x4A94500")]
	public static double3x2 operator /(double lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CE6")]
	[Address(RVA = "0x4A94530", Offset = "0x4A94530", VA = "0x4A94530")]
	public static double3x2 operator %(double3x2 lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CE7")]
	[Address(RVA = "0x4A94670", Offset = "0x4A94670", VA = "0x4A94670")]
	public static double3x2 operator %(double3x2 lhs, double rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CE8")]
	[Address(RVA = "0x4A94780", Offset = "0x4A94780", VA = "0x4A94780")]
	public static double3x2 operator %(double lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CE9")]
	[Address(RVA = "0x4A94880", Offset = "0x4A94880", VA = "0x4A94880")]
	public static double3x2 operator ++(double3x2 val)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CEA")]
	[Address(RVA = "0x4A948C0", Offset = "0x4A948C0", VA = "0x4A948C0")]
	public static double3x2 operator --(double3x2 val)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CEB")]
	[Address(RVA = "0x4A94900", Offset = "0x4A94900", VA = "0x4A94900")]
	public static bool3x2 operator <(double3x2 lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CEC")]
	[Address(RVA = "0x4A94990", Offset = "0x4A94990", VA = "0x4A94990")]
	public static bool3x2 operator <(double3x2 lhs, double rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CED")]
	[Address(RVA = "0x4A949F0", Offset = "0x4A949F0", VA = "0x4A949F0")]
	public static bool3x2 operator <(double lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x4A94A70", Offset = "0x4A94A70", VA = "0x4A94A70")]
	public static bool3x2 operator <=(double3x2 lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x4A94B00", Offset = "0x4A94B00", VA = "0x4A94B00")]
	public static bool3x2 operator <=(double3x2 lhs, double rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x4A94B60", Offset = "0x4A94B60", VA = "0x4A94B60")]
	public static bool3x2 operator <=(double lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x4A94BE0", Offset = "0x4A94BE0", VA = "0x4A94BE0")]
	public static bool3x2 operator >(double3x2 lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x4A94C70", Offset = "0x4A94C70", VA = "0x4A94C70")]
	public static bool3x2 operator >(double3x2 lhs, double rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x4A94CF0", Offset = "0x4A94CF0", VA = "0x4A94CF0")]
	public static bool3x2 operator >(double lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF4")]
	[Address(RVA = "0x4A94D50", Offset = "0x4A94D50", VA = "0x4A94D50")]
	public static bool3x2 operator >=(double3x2 lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x4A94DE0", Offset = "0x4A94DE0", VA = "0x4A94DE0")]
	public static bool3x2 operator >=(double3x2 lhs, double rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF6")]
	[Address(RVA = "0x4A94E60", Offset = "0x4A94E60", VA = "0x4A94E60")]
	public static bool3x2 operator >=(double lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF7")]
	[Address(RVA = "0x4A94EC0", Offset = "0x4A94EC0", VA = "0x4A94EC0")]
	public static double3x2 operator -(double3x2 val)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF8")]
	[Address(RVA = "0x4A94EF0", Offset = "0x4A94EF0", VA = "0x4A94EF0")]
	public static double3x2 operator +(double3x2 val)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x4A94F10", Offset = "0x4A94F10", VA = "0x4A94F10")]
	public static bool3x2 operator ==(double3x2 lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x4A94FB0", Offset = "0x4A94FB0", VA = "0x4A94FB0")]
	public static bool3x2 operator ==(double3x2 lhs, double rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x4A95040", Offset = "0x4A95040", VA = "0x4A95040")]
	public static bool3x2 operator ==(double lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CFC")]
	[Address(RVA = "0x4A950D0", Offset = "0x4A950D0", VA = "0x4A950D0")]
	public static bool3x2 operator !=(double3x2 lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x4A95170", Offset = "0x4A95170", VA = "0x4A95170")]
	public static bool3x2 operator !=(double3x2 lhs, double rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CFE")]
	[Address(RVA = "0x4A95200", Offset = "0x4A95200", VA = "0x4A95200")]
	public static bool3x2 operator !=(double lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x4A952A0", Offset = "0x4A952A0", VA = "0x4A952A0", Slot = "4")]
	public bool Equals(double3x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D01")]
	[Address(RVA = "0x4A95310", Offset = "0x4A95310", VA = "0x4A95310", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D02")]
	[Address(RVA = "0x4A953D0", Offset = "0x4A953D0", VA = "0x4A953D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D03")]
	[Address(RVA = "0x4A95490", Offset = "0x4A95490", VA = "0x4A95490", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x4A95720", Offset = "0x4A95720", VA = "0x4A95720", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
