// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.double2x2
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
[Token(Token = "0x200001C")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double2x2 : IEquatable<double2x2>, IFormattable
{
	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x0")]
	public double2 c0;

	[Token(Token = "0x400006B")]
	[FieldOffset(Offset = "0x10")]
	public double2 c1;

	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double2x2 identity;

	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0x20")]
	public static readonly double2x2 zero;

	[Token(Token = "0x1700020B")]
	public unsafe ref double2 this[int index]
	{
		[Token(Token = "0x6000BEC")]
		[Address(RVA = "0x64228B0", Offset = "0x64218B0", VA = "0x64228B0")]
		get
		{
			return ref *(double2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x6421A00", Offset = "0x6420A00", VA = "0x6421A00")]
	public double2x2(double2 c0, double2 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x6421A20", Offset = "0x6420A20", VA = "0x6421A20")]
	public double2x2(double m00, double m01, double m10, double m11)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x6421A40", Offset = "0x6420A40", VA = "0x6421A40")]
	public double2x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB6")]
	[Address(RVA = "0x6421A60", Offset = "0x6420A60", VA = "0x6421A60")]
	public double2x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x6421A90", Offset = "0x6420A90", VA = "0x6421A90")]
	public double2x2(bool2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x6421B00", Offset = "0x6420B00", VA = "0x6421B00")]
	public double2x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB9")]
	[Address(RVA = "0x6421B20", Offset = "0x6420B20", VA = "0x6421B20")]
	public double2x2(int2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x6421B60", Offset = "0x6420B60", VA = "0x6421B60")]
	public double2x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x6421B80", Offset = "0x6420B80", VA = "0x6421B80")]
	public double2x2(uint2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x6421BC0", Offset = "0x6420BC0", VA = "0x6421BC0")]
	public double2x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x6421BE0", Offset = "0x6420BE0", VA = "0x6421BE0")]
	public double2x2(float2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x6421BF0", Offset = "0x6420BF0", VA = "0x6421BF0")]
	public static implicit operator double2x2(double v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x6421C10", Offset = "0x6420C10", VA = "0x6421C10")]
	public static explicit operator double2x2(bool v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x6421C40", Offset = "0x6420C40", VA = "0x6421C40")]
	public static explicit operator double2x2(bool2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x6421CB0", Offset = "0x6420CB0", VA = "0x6421CB0")]
	public static implicit operator double2x2(int v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x6421CD0", Offset = "0x6420CD0", VA = "0x6421CD0")]
	public static implicit operator double2x2(int2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x6421D10", Offset = "0x6420D10", VA = "0x6421D10")]
	public static implicit operator double2x2(uint v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x6421D30", Offset = "0x6420D30", VA = "0x6421D30")]
	public static implicit operator double2x2(uint2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x6421D70", Offset = "0x6420D70", VA = "0x6421D70")]
	public static implicit operator double2x2(float v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x6421D90", Offset = "0x6420D90", VA = "0x6421D90")]
	public static implicit operator double2x2(float2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x6421DB0", Offset = "0x6420DB0", VA = "0x6421DB0")]
	public static double2x2 operator *(double2x2 lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x6421DE0", Offset = "0x6420DE0", VA = "0x6421DE0")]
	public static double2x2 operator *(double2x2 lhs, double rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x6421E10", Offset = "0x6420E10", VA = "0x6421E10")]
	public static double2x2 operator *(double lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x6421E40", Offset = "0x6420E40", VA = "0x6421E40")]
	public static double2x2 operator +(double2x2 lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x6421E70", Offset = "0x6420E70", VA = "0x6421E70")]
	public static double2x2 operator +(double2x2 lhs, double rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x6421EA0", Offset = "0x6420EA0", VA = "0x6421EA0")]
	public static double2x2 operator +(double lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x6421ED0", Offset = "0x6420ED0", VA = "0x6421ED0")]
	public static double2x2 operator -(double2x2 lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x6421F00", Offset = "0x6420F00", VA = "0x6421F00")]
	public static double2x2 operator -(double2x2 lhs, double rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x6421F30", Offset = "0x6420F30", VA = "0x6421F30")]
	public static double2x2 operator -(double lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x6421F60", Offset = "0x6420F60", VA = "0x6421F60")]
	public static double2x2 operator /(double2x2 lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD1")]
	[Address(RVA = "0x6421F90", Offset = "0x6420F90", VA = "0x6421F90")]
	public static double2x2 operator /(double2x2 lhs, double rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x6421FC0", Offset = "0x6420FC0", VA = "0x6421FC0")]
	public static double2x2 operator /(double lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x6421FF0", Offset = "0x6420FF0", VA = "0x6421FF0")]
	public static double2x2 operator %(double2x2 lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x64220B0", Offset = "0x64210B0", VA = "0x64220B0")]
	public static double2x2 operator %(double2x2 lhs, double rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x6422160", Offset = "0x6421160", VA = "0x6422160")]
	public static double2x2 operator %(double lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x6422210", Offset = "0x6421210", VA = "0x6422210")]
	public static double2x2 operator ++(double2x2 val)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x6422240", Offset = "0x6421240", VA = "0x6422240")]
	public static double2x2 operator --(double2x2 val)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x6422270", Offset = "0x6421270", VA = "0x6422270")]
	public static bool2x2 operator <(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x64222D0", Offset = "0x64212D0", VA = "0x64222D0")]
	public static bool2x2 operator <(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x6422310", Offset = "0x6421310", VA = "0x6422310")]
	public static bool2x2 operator <(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x6422360", Offset = "0x6421360", VA = "0x6422360")]
	public static bool2x2 operator <=(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x64223C0", Offset = "0x64213C0", VA = "0x64223C0")]
	public static bool2x2 operator <=(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x6422400", Offset = "0x6421400", VA = "0x6422400")]
	public static bool2x2 operator <=(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x6422450", Offset = "0x6421450", VA = "0x6422450")]
	public static bool2x2 operator >(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x64224B0", Offset = "0x64214B0", VA = "0x64224B0")]
	public static bool2x2 operator >(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x6422500", Offset = "0x6421500", VA = "0x6422500")]
	public static bool2x2 operator >(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x6422540", Offset = "0x6421540", VA = "0x6422540")]
	public static bool2x2 operator >=(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x64225A0", Offset = "0x64215A0", VA = "0x64225A0")]
	public static bool2x2 operator >=(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x64225F0", Offset = "0x64215F0", VA = "0x64225F0")]
	public static bool2x2 operator >=(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x6422630", Offset = "0x6421630", VA = "0x6422630")]
	public static double2x2 operator -(double2x2 val)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x6422650", Offset = "0x6421650", VA = "0x6422650")]
	public static double2x2 operator +(double2x2 val)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x6422670", Offset = "0x6421670", VA = "0x6422670")]
	public static bool2x2 operator ==(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x64226D0", Offset = "0x64216D0", VA = "0x64226D0")]
	public static bool2x2 operator ==(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x6422730", Offset = "0x6421730", VA = "0x6422730")]
	public static bool2x2 operator ==(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x6422790", Offset = "0x6421790", VA = "0x6422790")]
	public static bool2x2 operator !=(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x64227F0", Offset = "0x64217F0", VA = "0x64227F0")]
	public static bool2x2 operator !=(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x6422850", Offset = "0x6421850", VA = "0x6422850")]
	public static bool2x2 operator !=(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x64228C0", Offset = "0x64218C0", VA = "0x64228C0", Slot = "4")]
	public bool Equals(double2x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x6422910", Offset = "0x6421910", VA = "0x6422910", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x64229B0", Offset = "0x64219B0", VA = "0x64229B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x6422A30", Offset = "0x6421A30", VA = "0x6422A30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x6422C30", Offset = "0x6421C30", VA = "0x6422C30", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
