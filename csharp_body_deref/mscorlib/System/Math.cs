// ==================== AoTTG2 cross-reference ====================
// Type: System.Math
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3CB7830", Offset = "0x3CB7830", VA = "0x3CB7830")]
	public static short Abs(short value)
	{
		return default(short);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000847")]
	[Address(RVA = "0x3CB78D0", Offset = "0x3CB78D0", VA = "0x3CB78D0")]
	public static int Abs(int value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000848")]
	[Address(RVA = "0x3CB7910", Offset = "0x3CB7910", VA = "0x3CB7910")]
	public static long Abs(long value)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000849")]
	[Address(RVA = "0x3CB7960", Offset = "0x3CB7960", VA = "0x3CB7960")]
	public static decimal Abs(decimal value)
	{
		return default(decimal);
	}

	[Token(Token = "0x600084A")]
	[Address(RVA = "0x3CB7880", Offset = "0x3CB7880", VA = "0x3CB7880")]
	[System.Diagnostics.StackTraceHidden]
	private static void ThrowAbsOverflow()
	{
	}

	[Token(Token = "0x600084B")]
	[Address(RVA = "0x3CB79C0", Offset = "0x3CB79C0", VA = "0x3CB79C0")]
	public static int DivRem(int a, int b, out int result)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600084C")]
	[Address(RVA = "0x3CB79D0", Offset = "0x3CB79D0", VA = "0x3CB79D0")]
	public static int Clamp(int value, int min, int max)
	{
		return default(int);
	}

	[Token(Token = "0x600084D")]
	[Address(RVA = "0x3CB7A60", Offset = "0x3CB7A60", VA = "0x3CB7A60")]
	public static double Log(double a, double newBase)
	{
		return default(double);
	}

	[Token(Token = "0x600084E")]
	[Address(RVA = "0x3CB7B70", Offset = "0x3CB7B70", VA = "0x3CB7B70")]
	[System.Runtime.Versioning.NonVersionable]
	public static byte Max(byte val1, byte val2)
	{
		return default(byte);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600084F")]
	[Address(RVA = "0x3CB7B80", Offset = "0x3CB7B80", VA = "0x3CB7B80")]
	public static decimal Max(decimal val1, decimal val2)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000850")]
	[Address(RVA = "0x3CB7BF0", Offset = "0x3CB7BF0", VA = "0x3CB7BF0")]
	public static double Max(double val1, double val2)
	{
		return default(double);
	}

	[Token(Token = "0x6000851")]
	[Address(RVA = "0x3CB7C20", Offset = "0x3CB7C20", VA = "0x3CB7C20")]
	[System.Runtime.Versioning.NonVersionable]
	public static short Max(short val1, short val2)
	{
		return default(short);
	}

	[Token(Token = "0x6000852")]
	[Address(RVA = "0x3CB7C30", Offset = "0x3CB7C30", VA = "0x3CB7C30")]
	[System.Runtime.Versioning.NonVersionable]
	public static int Max(int val1, int val2)
	{
		return default(int);
	}

	[Token(Token = "0x6000853")]
	[Address(RVA = "0x3CB7C40", Offset = "0x3CB7C40", VA = "0x3CB7C40")]
	[System.Runtime.Versioning.NonVersionable]
	public static long Max(long val1, long val2)
	{
		return default(long);
	}

	[Token(Token = "0x6000854")]
	[Address(RVA = "0x3CB7C50", Offset = "0x3CB7C50", VA = "0x3CB7C50")]
	[System.Runtime.Versioning.NonVersionable]
	[CLSCompliant(false)]
	public static sbyte Max(sbyte val1, sbyte val2)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000855")]
	[Address(RVA = "0x3CB7C60", Offset = "0x3CB7C60", VA = "0x3CB7C60")]
	public static float Max(float val1, float val2)
	{
		return default(float);
	}

	[Token(Token = "0x6000856")]
	[Address(RVA = "0x3CB7C80", Offset = "0x3CB7C80", VA = "0x3CB7C80")]
	[System.Runtime.Versioning.NonVersionable]
	[CLSCompliant(false)]
	public static ushort Max(ushort val1, ushort val2)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000857")]
	[Address(RVA = "0x3CB7C90", Offset = "0x3CB7C90", VA = "0x3CB7C90")]
	[System.Runtime.Versioning.NonVersionable]
	[CLSCompliant(false)]
	public static uint Max(uint val1, uint val2)
	{
		return default(uint);
	}

	[Token(Token = "0x6000858")]
	[Address(RVA = "0x3CB7CA0", Offset = "0x3CB7CA0", VA = "0x3CB7CA0")]
	[CLSCompliant(false)]
	[System.Runtime.Versioning.NonVersionable]
	public static ulong Max(ulong val1, ulong val2)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000859")]
	[Address(RVA = "0x3CB7CB0", Offset = "0x3CB7CB0", VA = "0x3CB7CB0")]
	[System.Runtime.Versioning.NonVersionable]
	public static byte Min(byte val1, byte val2)
	{
		return default(byte);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600085A")]
	[Address(RVA = "0x3CB7CC0", Offset = "0x3CB7CC0", VA = "0x3CB7CC0")]
	public static decimal Min(decimal val1, decimal val2)
	{
		return default(decimal);
	}

	[Token(Token = "0x600085B")]
	[Address(RVA = "0x3CB7D30", Offset = "0x3CB7D30", VA = "0x3CB7D30")]
	public static double Min(double val1, double val2)
	{
		return default(double);
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x3CB7D60", Offset = "0x3CB7D60", VA = "0x3CB7D60")]
	[System.Runtime.Versioning.NonVersionable]
	public static short Min(short val1, short val2)
	{
		return default(short);
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x3CB7D70", Offset = "0x3CB7D70", VA = "0x3CB7D70")]
	[System.Runtime.Versioning.NonVersionable]
	public static int Min(int val1, int val2)
	{
		return default(int);
	}

	[Token(Token = "0x600085E")]
	[Address(RVA = "0x3CB7D80", Offset = "0x3CB7D80", VA = "0x3CB7D80")]
	[System.Runtime.Versioning.NonVersionable]
	public static long Min(long val1, long val2)
	{
		return default(long);
	}

	[Token(Token = "0x600085F")]
	[Address(RVA = "0x3CB7D90", Offset = "0x3CB7D90", VA = "0x3CB7D90")]
	[CLSCompliant(false)]
	[System.Runtime.Versioning.NonVersionable]
	public static sbyte Min(sbyte val1, sbyte val2)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x3CB7DA0", Offset = "0x3CB7DA0", VA = "0x3CB7DA0")]
	public static float Min(float val1, float val2)
	{
		return default(float);
	}

	[Token(Token = "0x6000861")]
	[Address(RVA = "0x3CB7DC0", Offset = "0x3CB7DC0", VA = "0x3CB7DC0")]
	[System.Runtime.Versioning.NonVersionable]
	[CLSCompliant(false)]
	public static ushort Min(ushort val1, ushort val2)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x3CB7DD0", Offset = "0x3CB7DD0", VA = "0x3CB7DD0")]
	[System.Runtime.Versioning.NonVersionable]
	[CLSCompliant(false)]
	public static uint Min(uint val1, uint val2)
	{
		return default(uint);
	}

	[Token(Token = "0x6000863")]
	[Address(RVA = "0x3CB7DE0", Offset = "0x3CB7DE0", VA = "0x3CB7DE0")]
	[System.Runtime.Versioning.NonVersionable]
	[CLSCompliant(false)]
	public static ulong Min(ulong val1, ulong val2)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000864")]
	[Address(RVA = "0x3CB7DF0", Offset = "0x3CB7DF0", VA = "0x3CB7DF0")]
	public static decimal Round(decimal d)
	{
		return default(decimal);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000865")]
	[Address(RVA = "0x3CB7E50", Offset = "0x3CB7E50", VA = "0x3CB7E50")]
	public static extern double Round(double a);

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000866")]
	[Address(RVA = "0x3CB7F00", Offset = "0x3CB7F00", VA = "0x3CB7F00")]
	public static double Round(double value, int digits)
	{
		return default(double);
	}

	[Token(Token = "0x6000867")]
	[Address(RVA = "0x3CB7F60", Offset = "0x3CB7F60", VA = "0x3CB7F60")]
	public static double Round(double value, int digits, MidpointRounding mode)
	{
		return default(double);
	}

	[Token(Token = "0x6000868")]
	[Address(RVA = "0x3CB8320", Offset = "0x3CB8320", VA = "0x3CB8320")]
	public static int Sign(double value)
	{
		return default(int);
	}

	[Token(Token = "0x6000869")]
	[Address(RVA = "0x3CB8390", Offset = "0x3CB8390", VA = "0x3CB8390")]
	public static int Sign(long value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600086A")]
	[Address(RVA = "0x3CB83B0", Offset = "0x3CB83B0", VA = "0x3CB83B0")]
	public static decimal Truncate(decimal d)
	{
		return default(decimal);
	}

	[Token(Token = "0x600086B")]
	[Address(RVA = "0x3CB8410", Offset = "0x3CB8410", VA = "0x3CB8410")]
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
	[Address(RVA = "0x3CB8480", Offset = "0x3CB8480", VA = "0x3CB8480")]
	public static extern double Abs(double value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600086E")]
	[Address(RVA = "0x3CB8490", Offset = "0x3CB8490", VA = "0x3CB8490")]
	public static extern float Abs(float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600086F")]
	[Address(RVA = "0x3CB84A0", Offset = "0x3CB84A0", VA = "0x3CB84A0")]
	public static extern double Acos(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000870")]
	[Address(RVA = "0x3CB84B0", Offset = "0x3CB84B0", VA = "0x3CB84B0")]
	public static extern double Asin(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000871")]
	[Address(RVA = "0x3CB84C0", Offset = "0x3CB84C0", VA = "0x3CB84C0")]
	public static extern double Atan(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000872")]
	[Address(RVA = "0x3CB84D0", Offset = "0x3CB84D0", VA = "0x3CB84D0")]
	public static extern double Atan2(double y, double x);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000873")]
	[Address(RVA = "0x3CB84E0", Offset = "0x3CB84E0", VA = "0x3CB84E0")]
	public static extern double Ceiling(double a);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000874")]
	[Address(RVA = "0x3CB84F0", Offset = "0x3CB84F0", VA = "0x3CB84F0")]
	public static extern double Cos(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000875")]
	[Address(RVA = "0x3CB8500", Offset = "0x3CB8500", VA = "0x3CB8500")]
	public static extern double Cosh(double value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000876")]
	[Address(RVA = "0x3CB8510", Offset = "0x3CB8510", VA = "0x3CB8510")]
	public static extern double Exp(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000877")]
	[Address(RVA = "0x3CB8520", Offset = "0x3CB8520", VA = "0x3CB8520")]
	public static extern double Floor(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000878")]
	[Address(RVA = "0x3CB8530", Offset = "0x3CB8530", VA = "0x3CB8530")]
	public static extern double Log(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000879")]
	[Address(RVA = "0x3CB8540", Offset = "0x3CB8540", VA = "0x3CB8540")]
	public static extern double Log10(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600087A")]
	[Address(RVA = "0x3CB8550", Offset = "0x3CB8550", VA = "0x3CB8550")]
	public static extern double Pow(double x, double y);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600087B")]
	[Address(RVA = "0x3CB8560", Offset = "0x3CB8560", VA = "0x3CB8560")]
	public static extern double Sin(double a);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600087C")]
	[Address(RVA = "0x3CB8570", Offset = "0x3CB8570", VA = "0x3CB8570")]
	public static extern double Sinh(double value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600087D")]
	[Address(RVA = "0x3CB8580", Offset = "0x3CB8580", VA = "0x3CB8580")]
	public static extern double Sqrt(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600087E")]
	[Address(RVA = "0x3CB85A0", Offset = "0x3CB85A0", VA = "0x3CB85A0")]
	public static extern double Tan(double a);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600087F")]
	[Address(RVA = "0x3CB85B0", Offset = "0x3CB85B0", VA = "0x3CB85B0")]
	public static extern double Tanh(double value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000880")]
	[Address(RVA = "0x3CB8310", Offset = "0x3CB8310", VA = "0x3CB8310")]
	private unsafe static extern double ModF(double x, double* intptr);
}
