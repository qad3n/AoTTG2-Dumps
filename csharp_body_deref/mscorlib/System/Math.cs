using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000E6")]
public static class Math
{
	[Token(Token = "0x4000389")]
	[FieldOffset(Offset = "0x0")]
	private static double doubleRoundLimit;

	[Token(Token = "0x400038A")]
	[FieldOffset(Offset = "0x8")]
	private static double[] roundPower10Double;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000846")]
	[Address(RVA = "0x4FD1D10", Offset = "0x4FD1D10", VA = "0x4FD1D10")]
	public static short Abs(short value)
	{
		return default(short);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000847")]
	[Address(RVA = "0x4FD1DB0", Offset = "0x4FD1DB0", VA = "0x4FD1DB0")]
	public static int Abs(int value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000848")]
	[Address(RVA = "0x4FD1DF0", Offset = "0x4FD1DF0", VA = "0x4FD1DF0")]
	public static long Abs(long value)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000849")]
	[Address(RVA = "0x4FD1E40", Offset = "0x4FD1E40", VA = "0x4FD1E40")]
	public static decimal Abs(decimal value)
	{
		return default(decimal);
	}

	[Token(Token = "0x600084A")]
	[Address(RVA = "0x4FD1D60", Offset = "0x4FD1D60", VA = "0x4FD1D60")]
	[System.Diagnostics.StackTraceHidden]
	private static void ThrowAbsOverflow()
	{
	}

	[Token(Token = "0x600084B")]
	[Address(RVA = "0x4FD1EA0", Offset = "0x4FD1EA0", VA = "0x4FD1EA0")]
	public static int DivRem(int a, int b, out int result)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600084C")]
	[Address(RVA = "0x4FD1EB0", Offset = "0x4FD1EB0", VA = "0x4FD1EB0")]
	public static int Clamp(int value, int min, int max)
	{
		return default(int);
	}

	[Token(Token = "0x600084D")]
	[Address(RVA = "0x4FD1F40", Offset = "0x4FD1F40", VA = "0x4FD1F40")]
	public static double Log(double a, double newBase)
	{
		return default(double);
	}

	[Token(Token = "0x600084E")]
	[Address(RVA = "0x4FD2050", Offset = "0x4FD2050", VA = "0x4FD2050")]
	[System.Runtime.Versioning.NonVersionable]
	public static byte Max(byte val1, byte val2)
	{
		return default(byte);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600084F")]
	[Address(RVA = "0x4FD2060", Offset = "0x4FD2060", VA = "0x4FD2060")]
	public static decimal Max(decimal val1, decimal val2)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000850")]
	[Address(RVA = "0x4FD20D0", Offset = "0x4FD20D0", VA = "0x4FD20D0")]
	public static double Max(double val1, double val2)
	{
		return default(double);
	}

	[Token(Token = "0x6000851")]
	[Address(RVA = "0x4FD2100", Offset = "0x4FD2100", VA = "0x4FD2100")]
	[System.Runtime.Versioning.NonVersionable]
	public static short Max(short val1, short val2)
	{
		return default(short);
	}

	[Token(Token = "0x6000852")]
	[Address(RVA = "0x4FD2110", Offset = "0x4FD2110", VA = "0x4FD2110")]
	[System.Runtime.Versioning.NonVersionable]
	public static int Max(int val1, int val2)
	{
		return default(int);
	}

	[Token(Token = "0x6000853")]
	[Address(RVA = "0x4FD2120", Offset = "0x4FD2120", VA = "0x4FD2120")]
	[System.Runtime.Versioning.NonVersionable]
	public static long Max(long val1, long val2)
	{
		return default(long);
	}

	[Token(Token = "0x6000854")]
	[Address(RVA = "0x4FD2130", Offset = "0x4FD2130", VA = "0x4FD2130")]
	[System.Runtime.Versioning.NonVersionable]
	[CLSCompliant(false)]
	public static sbyte Max(sbyte val1, sbyte val2)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000855")]
	[Address(RVA = "0x4FD2140", Offset = "0x4FD2140", VA = "0x4FD2140")]
	public static float Max(float val1, float val2)
	{
		return default(float);
	}

	[Token(Token = "0x6000856")]
	[Address(RVA = "0x4FD2160", Offset = "0x4FD2160", VA = "0x4FD2160")]
	[System.Runtime.Versioning.NonVersionable]
	[CLSCompliant(false)]
	public static ushort Max(ushort val1, ushort val2)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000857")]
	[Address(RVA = "0x4FD2170", Offset = "0x4FD2170", VA = "0x4FD2170")]
	[System.Runtime.Versioning.NonVersionable]
	[CLSCompliant(false)]
	public static uint Max(uint val1, uint val2)
	{
		return default(uint);
	}

	[Token(Token = "0x6000858")]
	[Address(RVA = "0x4FD2180", Offset = "0x4FD2180", VA = "0x4FD2180")]
	[CLSCompliant(false)]
	[System.Runtime.Versioning.NonVersionable]
	public static ulong Max(ulong val1, ulong val2)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000859")]
	[Address(RVA = "0x4FD2190", Offset = "0x4FD2190", VA = "0x4FD2190")]
	[System.Runtime.Versioning.NonVersionable]
	public static byte Min(byte val1, byte val2)
	{
		return default(byte);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600085A")]
	[Address(RVA = "0x4FD21A0", Offset = "0x4FD21A0", VA = "0x4FD21A0")]
	public static decimal Min(decimal val1, decimal val2)
	{
		return default(decimal);
	}

	[Token(Token = "0x600085B")]
	[Address(RVA = "0x4FD2210", Offset = "0x4FD2210", VA = "0x4FD2210")]
	public static double Min(double val1, double val2)
	{
		return default(double);
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x4FD2240", Offset = "0x4FD2240", VA = "0x4FD2240")]
	[System.Runtime.Versioning.NonVersionable]
	public static short Min(short val1, short val2)
	{
		return default(short);
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x4FD2250", Offset = "0x4FD2250", VA = "0x4FD2250")]
	[System.Runtime.Versioning.NonVersionable]
	public static int Min(int val1, int val2)
	{
		return default(int);
	}

	[Token(Token = "0x600085E")]
	[Address(RVA = "0x4FD2260", Offset = "0x4FD2260", VA = "0x4FD2260")]
	[System.Runtime.Versioning.NonVersionable]
	public static long Min(long val1, long val2)
	{
		return default(long);
	}

	[Token(Token = "0x600085F")]
	[Address(RVA = "0x4FD2270", Offset = "0x4FD2270", VA = "0x4FD2270")]
	[CLSCompliant(false)]
	[System.Runtime.Versioning.NonVersionable]
	public static sbyte Min(sbyte val1, sbyte val2)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x4FD2280", Offset = "0x4FD2280", VA = "0x4FD2280")]
	public static float Min(float val1, float val2)
	{
		return default(float);
	}

	[Token(Token = "0x6000861")]
	[Address(RVA = "0x4FD22A0", Offset = "0x4FD22A0", VA = "0x4FD22A0")]
	[System.Runtime.Versioning.NonVersionable]
	[CLSCompliant(false)]
	public static ushort Min(ushort val1, ushort val2)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x4FD22B0", Offset = "0x4FD22B0", VA = "0x4FD22B0")]
	[System.Runtime.Versioning.NonVersionable]
	[CLSCompliant(false)]
	public static uint Min(uint val1, uint val2)
	{
		return default(uint);
	}

	[Token(Token = "0x6000863")]
	[Address(RVA = "0x4FD22C0", Offset = "0x4FD22C0", VA = "0x4FD22C0")]
	[System.Runtime.Versioning.NonVersionable]
	[CLSCompliant(false)]
	public static ulong Min(ulong val1, ulong val2)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000864")]
	[Address(RVA = "0x4FD22D0", Offset = "0x4FD22D0", VA = "0x4FD22D0")]
	public static decimal Round(decimal d)
	{
		return default(decimal);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000865")]
	[Address(RVA = "0x4FD2330", Offset = "0x4FD2330", VA = "0x4FD2330")]
	public static extern double Round(double a);

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000866")]
	[Address(RVA = "0x4FD23E0", Offset = "0x4FD23E0", VA = "0x4FD23E0")]
	public static double Round(double value, int digits)
	{
		return default(double);
	}

	[Token(Token = "0x6000867")]
	[Address(RVA = "0x4FD2440", Offset = "0x4FD2440", VA = "0x4FD2440")]
	public static double Round(double value, int digits, MidpointRounding mode)
	{
		return default(double);
	}

	[Token(Token = "0x6000868")]
	[Address(RVA = "0x4FD2800", Offset = "0x4FD2800", VA = "0x4FD2800")]
	public static int Sign(double value)
	{
		return default(int);
	}

	[Token(Token = "0x6000869")]
	[Address(RVA = "0x4FD2870", Offset = "0x4FD2870", VA = "0x4FD2870")]
	public static int Sign(long value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600086A")]
	[Address(RVA = "0x4FD2890", Offset = "0x4FD2890", VA = "0x4FD2890")]
	public static decimal Truncate(decimal d)
	{
		return default(decimal);
	}

	[Token(Token = "0x600086B")]
	[Address(RVA = "0x4FD28F0", Offset = "0x4FD28F0", VA = "0x4FD28F0")]
	public static double Truncate(double d)
	{
		return default(double);
	}

	[Token(Token = "0x600086C")]
	private static void ThrowMinMaxException<T>(T min, T max)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600086D")]
	[Address(RVA = "0x4FD2960", Offset = "0x4FD2960", VA = "0x4FD2960")]
	public static extern double Abs(double value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600086E")]
	[Address(RVA = "0x4FD2970", Offset = "0x4FD2970", VA = "0x4FD2970")]
	public static extern float Abs(float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600086F")]
	[Address(RVA = "0x4FD2980", Offset = "0x4FD2980", VA = "0x4FD2980")]
	public static extern double Acos(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000870")]
	[Address(RVA = "0x4FD2990", Offset = "0x4FD2990", VA = "0x4FD2990")]
	public static extern double Asin(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000871")]
	[Address(RVA = "0x4FD29A0", Offset = "0x4FD29A0", VA = "0x4FD29A0")]
	public static extern double Atan(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000872")]
	[Address(RVA = "0x4FD29B0", Offset = "0x4FD29B0", VA = "0x4FD29B0")]
	public static extern double Atan2(double y, double x);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000873")]
	[Address(RVA = "0x4FD29C0", Offset = "0x4FD29C0", VA = "0x4FD29C0")]
	public static extern double Ceiling(double a);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000874")]
	[Address(RVA = "0x4FD29D0", Offset = "0x4FD29D0", VA = "0x4FD29D0")]
	public static extern double Cos(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000875")]
	[Address(RVA = "0x4FD29E0", Offset = "0x4FD29E0", VA = "0x4FD29E0")]
	public static extern double Cosh(double value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000876")]
	[Address(RVA = "0x4FD29F0", Offset = "0x4FD29F0", VA = "0x4FD29F0")]
	public static extern double Exp(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000877")]
	[Address(RVA = "0x4FD2A00", Offset = "0x4FD2A00", VA = "0x4FD2A00")]
	public static extern double Floor(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000878")]
	[Address(RVA = "0x4FD2A10", Offset = "0x4FD2A10", VA = "0x4FD2A10")]
	public static extern double Log(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000879")]
	[Address(RVA = "0x4FD2A20", Offset = "0x4FD2A20", VA = "0x4FD2A20")]
	public static extern double Log10(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600087A")]
	[Address(RVA = "0x4FD2A30", Offset = "0x4FD2A30", VA = "0x4FD2A30")]
	public static extern double Pow(double x, double y);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600087B")]
	[Address(RVA = "0x4FD2A40", Offset = "0x4FD2A40", VA = "0x4FD2A40")]
	public static extern double Sin(double a);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600087C")]
	[Address(RVA = "0x4FD2A50", Offset = "0x4FD2A50", VA = "0x4FD2A50")]
	public static extern double Sinh(double value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600087D")]
	[Address(RVA = "0x4FD2A60", Offset = "0x4FD2A60", VA = "0x4FD2A60")]
	public static extern double Sqrt(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600087E")]
	[Address(RVA = "0x4FD2A80", Offset = "0x4FD2A80", VA = "0x4FD2A80")]
	public static extern double Tan(double a);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600087F")]
	[Address(RVA = "0x4FD2A90", Offset = "0x4FD2A90", VA = "0x4FD2A90")]
	public static extern double Tanh(double value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000880")]
	[Address(RVA = "0x4FD27F0", Offset = "0x4FD27F0", VA = "0x4FD27F0")]
	private unsafe static extern double ModF(double x, double* intptr);
}
