// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.double2x3
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
[Token(Token = "0x200001D")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double2x3 : IEquatable<double2x3>, IFormattable
{
	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x0")]
	public double2 c0;

	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x10")]
	public double2 c1;

	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x20")]
	public double2 c2;

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double2x3 zero;

	[Token(Token = "0x1700020C")]
	public unsafe ref double2 this[int index]
	{
		[Token(Token = "0x6000C2C")]
		[Address(RVA = "0x64243A0", Offset = "0x64233A0", VA = "0x64243A0")]
		get
		{
			return ref *(double2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x6422E50", Offset = "0x6421E50", VA = "0x6422E50")]
	public double2x3(double2 c0, double2 c1, double2 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x6422E70", Offset = "0x6421E70", VA = "0x6422E70")]
	public double2x3(double m00, double m01, double m02, double m10, double m11, double m12)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x6422E90", Offset = "0x6421E90", VA = "0x6422E90")]
	public double2x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x6422EB0", Offset = "0x6421EB0", VA = "0x6422EB0")]
	public double2x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x6422EE0", Offset = "0x6421EE0", VA = "0x6422EE0")]
	public double2x3(bool2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF8")]
	[Address(RVA = "0x6422F70", Offset = "0x6421F70", VA = "0x6422F70")]
	public double2x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x6422FA0", Offset = "0x6421FA0", VA = "0x6422FA0")]
	public double2x3(int2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x6423000", Offset = "0x6422000", VA = "0x6423000")]
	public double2x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x6423030", Offset = "0x6422030", VA = "0x6423030")]
	public double2x3(uint2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x64230A0", Offset = "0x64220A0", VA = "0x64230A0")]
	public double2x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x64230D0", Offset = "0x64220D0", VA = "0x64230D0")]
	public double2x3(float2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x64230F0", Offset = "0x64220F0", VA = "0x64230F0")]
	public static implicit operator double2x3(double v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x6423120", Offset = "0x6422120", VA = "0x6423120")]
	public static explicit operator double2x3(bool v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x6423160", Offset = "0x6422160", VA = "0x6423160")]
	public static explicit operator double2x3(bool2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x6423200", Offset = "0x6422200", VA = "0x6423200")]
	public static implicit operator double2x3(int v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x6423230", Offset = "0x6422230", VA = "0x6423230")]
	public static implicit operator double2x3(int2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x6423290", Offset = "0x6422290", VA = "0x6423290")]
	public static implicit operator double2x3(uint v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x64232C0", Offset = "0x64222C0", VA = "0x64232C0")]
	public static implicit operator double2x3(uint2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x6423330", Offset = "0x6422330", VA = "0x6423330")]
	public static implicit operator double2x3(float v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C06")]
	[Address(RVA = "0x6423360", Offset = "0x6422360", VA = "0x6423360")]
	public static implicit operator double2x3(float2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C07")]
	[Address(RVA = "0x6423380", Offset = "0x6422380", VA = "0x6423380")]
	public static double2x3 operator *(double2x3 lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C08")]
	[Address(RVA = "0x64233C0", Offset = "0x64223C0", VA = "0x64233C0")]
	public static double2x3 operator *(double2x3 lhs, double rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C09")]
	[Address(RVA = "0x64233F0", Offset = "0x64223F0", VA = "0x64233F0")]
	public static double2x3 operator *(double lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x6423420", Offset = "0x6422420", VA = "0x6423420")]
	public static double2x3 operator +(double2x3 lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x6423460", Offset = "0x6422460", VA = "0x6423460")]
	public static double2x3 operator +(double2x3 lhs, double rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x6423490", Offset = "0x6422490", VA = "0x6423490")]
	public static double2x3 operator +(double lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x64234C0", Offset = "0x64224C0", VA = "0x64234C0")]
	public static double2x3 operator -(double2x3 lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x6423500", Offset = "0x6422500", VA = "0x6423500")]
	public static double2x3 operator -(double2x3 lhs, double rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x6423540", Offset = "0x6422540", VA = "0x6423540")]
	public static double2x3 operator -(double lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x6423570", Offset = "0x6422570", VA = "0x6423570")]
	public static double2x3 operator /(double2x3 lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x64235B0", Offset = "0x64225B0", VA = "0x64235B0")]
	public static double2x3 operator /(double2x3 lhs, double rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x64235F0", Offset = "0x64225F0", VA = "0x64235F0")]
	public static double2x3 operator /(double lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x6423620", Offset = "0x6422620", VA = "0x6423620")]
	public static double2x3 operator %(double2x3 lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x6423750", Offset = "0x6422750", VA = "0x6423750")]
	public static double2x3 operator %(double2x3 lhs, double rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x6423850", Offset = "0x6422850", VA = "0x6423850")]
	public static double2x3 operator %(double lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x6423950", Offset = "0x6422950", VA = "0x6423950")]
	public static double2x3 operator ++(double2x3 val)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x6423990", Offset = "0x6422990", VA = "0x6423990")]
	public static double2x3 operator --(double2x3 val)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x64239D0", Offset = "0x64229D0", VA = "0x64239D0")]
	public static bool2x3 operator <(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x6423A60", Offset = "0x6422A60", VA = "0x6423A60")]
	public static bool2x3 operator <(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C1A")]
	[Address(RVA = "0x6423AD0", Offset = "0x6422AD0", VA = "0x6423AD0")]
	public static bool2x3 operator <(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C1B")]
	[Address(RVA = "0x6423B50", Offset = "0x6422B50", VA = "0x6423B50")]
	public static bool2x3 operator <=(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C1C")]
	[Address(RVA = "0x6423BE0", Offset = "0x6422BE0", VA = "0x6423BE0")]
	public static bool2x3 operator <=(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x6423C50", Offset = "0x6422C50", VA = "0x6423C50")]
	public static bool2x3 operator <=(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x6423CD0", Offset = "0x6422CD0", VA = "0x6423CD0")]
	public static bool2x3 operator >(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x6423D60", Offset = "0x6422D60", VA = "0x6423D60")]
	public static bool2x3 operator >(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x6423DE0", Offset = "0x6422DE0", VA = "0x6423DE0")]
	public static bool2x3 operator >(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x6423E50", Offset = "0x6422E50", VA = "0x6423E50")]
	public static bool2x3 operator >=(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C22")]
	[Address(RVA = "0x6423EE0", Offset = "0x6422EE0", VA = "0x6423EE0")]
	public static bool2x3 operator >=(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C23")]
	[Address(RVA = "0x6423F60", Offset = "0x6422F60", VA = "0x6423F60")]
	public static bool2x3 operator >=(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C24")]
	[Address(RVA = "0x6423FD0", Offset = "0x6422FD0", VA = "0x6423FD0")]
	public static double2x3 operator -(double2x3 val)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C25")]
	[Address(RVA = "0x6424000", Offset = "0x6423000", VA = "0x6424000")]
	public static double2x3 operator +(double2x3 val)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C26")]
	[Address(RVA = "0x6424020", Offset = "0x6423020", VA = "0x6424020")]
	public static bool2x3 operator ==(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C27")]
	[Address(RVA = "0x64240C0", Offset = "0x64230C0", VA = "0x64240C0")]
	public static bool2x3 operator ==(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C28")]
	[Address(RVA = "0x6424150", Offset = "0x6423150", VA = "0x6424150")]
	public static bool2x3 operator ==(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C29")]
	[Address(RVA = "0x64241E0", Offset = "0x64231E0", VA = "0x64241E0")]
	public static bool2x3 operator !=(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x6424280", Offset = "0x6423280", VA = "0x6424280")]
	public static bool2x3 operator !=(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x6424310", Offset = "0x6423310", VA = "0x6424310")]
	public static bool2x3 operator !=(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x64243B0", Offset = "0x64233B0", VA = "0x64243B0", Slot = "4")]
	public bool Equals(double2x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x6424420", Offset = "0x6423420", VA = "0x6424420", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x64244E0", Offset = "0x64234E0", VA = "0x64244E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C30")]
	[Address(RVA = "0x64245A0", Offset = "0x64235A0", VA = "0x64245A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C31")]
	[Address(RVA = "0x6424850", Offset = "0x6423850", VA = "0x6424850", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
