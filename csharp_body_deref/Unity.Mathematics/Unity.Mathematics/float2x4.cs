using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x200002F")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float2x4 : IEquatable<float2x4>, IFormattable
{
	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x0")]
	public float2 c0;

	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x8")]
	public float2 c1;

	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x10")]
	public float2 c2;

	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x18")]
	public float2 c3;

	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float2x4 zero;

	[Token(Token = "0x170003FA")]
	public unsafe ref float2 this[int index]
	{
		[Token(Token = "0x6001162")]
		[Address(RVA = "0x47B1070", Offset = "0x47B1070", VA = "0x47B1070")]
		get
		{
			return ref *(float2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001129")]
	[Address(RVA = "0x47AF560", Offset = "0x47AF560", VA = "0x47AF560")]
	public float2x4(float2 c0, float2 c1, float2 c2, float2 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600112A")]
	[Address(RVA = "0x47AF570", Offset = "0x47AF570", VA = "0x47AF570")]
	public float2x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600112B")]
	[Address(RVA = "0x47AF5A0", Offset = "0x47AF5A0", VA = "0x47AF5A0")]
	public float2x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600112C")]
	[Address(RVA = "0x47AF5B0", Offset = "0x47AF5B0", VA = "0x47AF5B0")]
	public float2x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600112D")]
	[Address(RVA = "0x47AF5E0", Offset = "0x47AF5E0", VA = "0x47AF5E0")]
	public float2x4(bool2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600112E")]
	[Address(RVA = "0x47AF6A0", Offset = "0x47AF6A0", VA = "0x47AF6A0")]
	public float2x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600112F")]
	[Address(RVA = "0x47AF6B0", Offset = "0x47AF6B0", VA = "0x47AF6B0")]
	public float2x4(int2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001130")]
	[Address(RVA = "0x47AF730", Offset = "0x47AF730", VA = "0x47AF730")]
	public float2x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001131")]
	[Address(RVA = "0x47AF750", Offset = "0x47AF750", VA = "0x47AF750")]
	public float2x4(uint2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001132")]
	[Address(RVA = "0x47AF800", Offset = "0x47AF800", VA = "0x47AF800")]
	public float2x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001133")]
	[Address(RVA = "0x47AF810", Offset = "0x47AF810", VA = "0x47AF810")]
	public float2x4(double2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001134")]
	[Address(RVA = "0x47AF840", Offset = "0x47AF840", VA = "0x47AF840")]
	public static implicit operator float2x4(float v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001135")]
	[Address(RVA = "0x47AF850", Offset = "0x47AF850", VA = "0x47AF850")]
	public static explicit operator float2x4(bool v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001136")]
	[Address(RVA = "0x47AF880", Offset = "0x47AF880", VA = "0x47AF880")]
	public static explicit operator float2x4(bool2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001137")]
	[Address(RVA = "0x47AF950", Offset = "0x47AF950", VA = "0x47AF950")]
	public static implicit operator float2x4(int v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001138")]
	[Address(RVA = "0x47AF970", Offset = "0x47AF970", VA = "0x47AF970")]
	public static implicit operator float2x4(int2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001139")]
	[Address(RVA = "0x47AF9E0", Offset = "0x47AF9E0", VA = "0x47AF9E0")]
	public static implicit operator float2x4(uint v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600113A")]
	[Address(RVA = "0x47AFA00", Offset = "0x47AFA00", VA = "0x47AFA00")]
	public static implicit operator float2x4(uint2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600113B")]
	[Address(RVA = "0x47AFAA0", Offset = "0x47AFAA0", VA = "0x47AFAA0")]
	public static explicit operator float2x4(double v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600113C")]
	[Address(RVA = "0x47AFAC0", Offset = "0x47AFAC0", VA = "0x47AFAC0")]
	public static explicit operator float2x4(double2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600113D")]
	[Address(RVA = "0x47AFAF0", Offset = "0x47AFAF0", VA = "0x47AFAF0")]
	public static float2x4 operator *(float2x4 lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600113E")]
	[Address(RVA = "0x47AFB40", Offset = "0x47AFB40", VA = "0x47AFB40")]
	public static float2x4 operator *(float2x4 lhs, float rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600113F")]
	[Address(RVA = "0x47AFB80", Offset = "0x47AFB80", VA = "0x47AFB80")]
	public static float2x4 operator *(float lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001140")]
	[Address(RVA = "0x47AFBC0", Offset = "0x47AFBC0", VA = "0x47AFBC0")]
	public static float2x4 operator +(float2x4 lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001141")]
	[Address(RVA = "0x47AFC10", Offset = "0x47AFC10", VA = "0x47AFC10")]
	public static float2x4 operator +(float2x4 lhs, float rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001142")]
	[Address(RVA = "0x47AFC50", Offset = "0x47AFC50", VA = "0x47AFC50")]
	public static float2x4 operator +(float lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001143")]
	[Address(RVA = "0x47AFC90", Offset = "0x47AFC90", VA = "0x47AFC90")]
	public static float2x4 operator -(float2x4 lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001144")]
	[Address(RVA = "0x47AFCE0", Offset = "0x47AFCE0", VA = "0x47AFCE0")]
	public static float2x4 operator -(float2x4 lhs, float rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001145")]
	[Address(RVA = "0x47AFD20", Offset = "0x47AFD20", VA = "0x47AFD20")]
	public static float2x4 operator -(float lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001146")]
	[Address(RVA = "0x47AFD70", Offset = "0x47AFD70", VA = "0x47AFD70")]
	public static float2x4 operator /(float2x4 lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001147")]
	[Address(RVA = "0x47AFDC0", Offset = "0x47AFDC0", VA = "0x47AFDC0")]
	public static float2x4 operator /(float2x4 lhs, float rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001148")]
	[Address(RVA = "0x47AFE00", Offset = "0x47AFE00", VA = "0x47AFE00")]
	public static float2x4 operator /(float lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001149")]
	[Address(RVA = "0x47AFE50", Offset = "0x47AFE50", VA = "0x47AFE50")]
	public static float2x4 operator %(float2x4 lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600114A")]
	[Address(RVA = "0x47AFFB0", Offset = "0x47AFFB0", VA = "0x47AFFB0")]
	public static float2x4 operator %(float2x4 lhs, float rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600114B")]
	[Address(RVA = "0x47B00E0", Offset = "0x47B00E0", VA = "0x47B00E0")]
	public static float2x4 operator %(float lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600114C")]
	[Address(RVA = "0x47B0210", Offset = "0x47B0210", VA = "0x47B0210")]
	public static float2x4 operator ++(float2x4 val)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600114D")]
	[Address(RVA = "0x47B0260", Offset = "0x47B0260", VA = "0x47B0260")]
	public static float2x4 operator --(float2x4 val)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600114E")]
	[Address(RVA = "0x47B02B0", Offset = "0x47B02B0", VA = "0x47B02B0")]
	public static bool2x4 operator <(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600114F")]
	[Address(RVA = "0x47B0380", Offset = "0x47B0380", VA = "0x47B0380")]
	public static bool2x4 operator <(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001150")]
	[Address(RVA = "0x47B0420", Offset = "0x47B0420", VA = "0x47B0420")]
	public static bool2x4 operator <(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001151")]
	[Address(RVA = "0x47B04C0", Offset = "0x47B04C0", VA = "0x47B04C0")]
	public static bool2x4 operator <=(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001152")]
	[Address(RVA = "0x47B0590", Offset = "0x47B0590", VA = "0x47B0590")]
	public static bool2x4 operator <=(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001153")]
	[Address(RVA = "0x47B0630", Offset = "0x47B0630", VA = "0x47B0630")]
	public static bool2x4 operator <=(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001154")]
	[Address(RVA = "0x47B06D0", Offset = "0x47B06D0", VA = "0x47B06D0")]
	public static bool2x4 operator >(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001155")]
	[Address(RVA = "0x47B07A0", Offset = "0x47B07A0", VA = "0x47B07A0")]
	public static bool2x4 operator >(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001156")]
	[Address(RVA = "0x47B0840", Offset = "0x47B0840", VA = "0x47B0840")]
	public static bool2x4 operator >(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001157")]
	[Address(RVA = "0x47B08E0", Offset = "0x47B08E0", VA = "0x47B08E0")]
	public static bool2x4 operator >=(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001158")]
	[Address(RVA = "0x47B09B0", Offset = "0x47B09B0", VA = "0x47B09B0")]
	public static bool2x4 operator >=(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001159")]
	[Address(RVA = "0x47B0A50", Offset = "0x47B0A50", VA = "0x47B0A50")]
	public static bool2x4 operator >=(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600115A")]
	[Address(RVA = "0x47B0AF0", Offset = "0x47B0AF0", VA = "0x47B0AF0")]
	public static float2x4 operator -(float2x4 val)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600115B")]
	[Address(RVA = "0x47B0B30", Offset = "0x47B0B30", VA = "0x47B0B30")]
	public static float2x4 operator +(float2x4 val)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600115C")]
	[Address(RVA = "0x47B0B50", Offset = "0x47B0B50", VA = "0x47B0B50")]
	public static bool2x4 operator ==(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600115D")]
	[Address(RVA = "0x47B0C40", Offset = "0x47B0C40", VA = "0x47B0C40")]
	public static bool2x4 operator ==(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600115E")]
	[Address(RVA = "0x47B0D10", Offset = "0x47B0D10", VA = "0x47B0D10")]
	public static bool2x4 operator ==(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600115F")]
	[Address(RVA = "0x47B0DE0", Offset = "0x47B0DE0", VA = "0x47B0DE0")]
	public static bool2x4 operator !=(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001160")]
	[Address(RVA = "0x47B0ED0", Offset = "0x47B0ED0", VA = "0x47B0ED0")]
	public static bool2x4 operator !=(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001161")]
	[Address(RVA = "0x47B0FA0", Offset = "0x47B0FA0", VA = "0x47B0FA0")]
	public static bool2x4 operator !=(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001163")]
	[Address(RVA = "0x47B1080", Offset = "0x47B1080", VA = "0x47B1080", Slot = "4")]
	public bool Equals(float2x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001164")]
	[Address(RVA = "0x47B1110", Offset = "0x47B1110", VA = "0x47B1110", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001165")]
	[Address(RVA = "0x47B1200", Offset = "0x47B1200", VA = "0x47B1200", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001166")]
	[Address(RVA = "0x47B1310", Offset = "0x47B1310", VA = "0x47B1310", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001167")]
	[Address(RVA = "0x47B1630", Offset = "0x47B1630", VA = "0x47B1630", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
