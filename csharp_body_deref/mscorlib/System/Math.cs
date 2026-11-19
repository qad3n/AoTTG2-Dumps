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
	[Token(Token = "0x4000369")]
	[FieldOffset(Offset = "0x0")]
	private static double doubleRoundLimit;

	[Token(Token = "0x400036A")]
	[FieldOffset(Offset = "0x8")]
	private static double[] roundPower10Double;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000854")]
	[Address(RVA = "0x54BA780", Offset = "0x54B9780", VA = "0x54BA780")]
	public static short Abs(short value)
	{
		return default(short);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000855")]
	[Address(RVA = "0x54BA860", Offset = "0x54B9860", VA = "0x54BA860")]
	public static int Abs(int value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000856")]
	[Address(RVA = "0x54BA8F0", Offset = "0x54B98F0", VA = "0x54BA8F0")]
	public static long Abs(long value)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000857")]
	[Address(RVA = "0x54BA980", Offset = "0x54B9980", VA = "0x54BA980")]
	public static decimal Abs(decimal value)
	{
		return 0m;
	}

	[Token(Token = "0x6000858")]
	[Address(RVA = "0x54BA810", Offset = "0x54B9810", VA = "0x54BA810")]
	[System.Diagnostics.StackTraceHidden]
	private static void ThrowAbsOverflow()
	{
	}

	[Token(Token = "0x6000859")]
	[Address(RVA = "0x54BA9E0", Offset = "0x54B99E0", VA = "0x54BA9E0")]
	public static int DivRem(int a, int b, out int result)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600085A")]
	[Address(RVA = "0x54BA9F0", Offset = "0x54B99F0", VA = "0x54BA9F0")]
	public static int Clamp(int value, int min, int max)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600085B")]
	[Address(RVA = "0x54BAA70", Offset = "0x54B9A70", VA = "0x54BAA70")]
	public static float Clamp(float value, float min, float max)
	{
		return default(float);
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x54BAB50", Offset = "0x54B9B50", VA = "0x54BAB50")]
	public static double Log(double a, double newBase)
	{
		return default(double);
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x54BAC60", Offset = "0x54B9C60", VA = "0x54BAC60")]
	[System.Runtime.Versioning.NonVersionable]
	public static byte Max(byte val1, byte val2)
	{
		return default(byte);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600085E")]
	[Address(RVA = "0x54BAC70", Offset = "0x54B9C70", VA = "0x54BAC70")]
	public static decimal Max(decimal val1, decimal val2)
	{
		return 0m;
	}

	[Token(Token = "0x600085F")]
	[Address(RVA = "0x54BACE0", Offset = "0x54B9CE0", VA = "0x54BACE0")]
	public static double Max(double val1, double val2)
	{
		return default(double);
	}

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x54BAD30", Offset = "0x54B9D30", VA = "0x54BAD30")]
	[System.Runtime.Versioning.NonVersionable]
	public static short Max(short val1, short val2)
	{
		return default(short);
	}

	[Token(Token = "0x6000861")]
	[Address(RVA = "0x54BAD40", Offset = "0x54B9D40", VA = "0x54BAD40")]
	[System.Runtime.Versioning.NonVersionable]
	public static int Max(int val1, int val2)
	{
		return default(int);
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x54BAD50", Offset = "0x54B9D50", VA = "0x54BAD50")]
	[System.Runtime.Versioning.NonVersionable]
	public static long Max(long val1, long val2)
	{
		return default(long);
	}

	[Token(Token = "0x6000863")]
	[Address(RVA = "0x54BAD60", Offset = "0x54B9D60", VA = "0x54BAD60")]
	[System.Runtime.Versioning.NonVersionable]
	[CLSCompliant(false)]
	public static sbyte Max(sbyte val1, sbyte val2)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000864")]
	[Address(RVA = "0x54BAD70", Offset = "0x54B9D70", VA = "0x54BAD70")]
	public static float Max(float val1, float val2)
	{
		return default(float);
	}

	[Token(Token = "0x6000865")]
	[Address(RVA = "0x54BADA0", Offset = "0x54B9DA0", VA = "0x54BADA0")]
	[System.Runtime.Versioning.NonVersionable]
	[CLSCompliant(false)]
	public static ushort Max(ushort val1, ushort val2)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000866")]
	[Address(RVA = "0x54BADB0", Offset = "0x54B9DB0", VA = "0x54BADB0")]
	[System.Runtime.Versioning.NonVersionable]
	[CLSCompliant(false)]
	public static uint Max(uint val1, uint val2)
	{
		return default(uint);
	}

	[Token(Token = "0x6000867")]
	[Address(RVA = "0x54BADC0", Offset = "0x54B9DC0", VA = "0x54BADC0")]
	[CLSCompliant(false)]
	[System.Runtime.Versioning.NonVersionable]
	public static ulong Max(ulong val1, ulong val2)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000868")]
	[Address(RVA = "0x54BADD0", Offset = "0x54B9DD0", VA = "0x54BADD0")]
	[System.Runtime.Versioning.NonVersionable]
	public static byte Min(byte val1, byte val2)
	{
		return default(byte);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000869")]
	[Address(RVA = "0x54BADE0", Offset = "0x54B9DE0", VA = "0x54BADE0")]
	public static decimal Min(decimal val1, decimal val2)
	{
		return 0m;
	}

	[Token(Token = "0x600086A")]
	[Address(RVA = "0x54BAE50", Offset = "0x54B9E50", VA = "0x54BAE50")]
	public static double Min(double val1, double val2)
	{
		return default(double);
	}

	[Token(Token = "0x600086B")]
	[Address(RVA = "0x54BAEA0", Offset = "0x54B9EA0", VA = "0x54BAEA0")]
	[System.Runtime.Versioning.NonVersionable]
	public static short Min(short val1, short val2)
	{
		return default(short);
	}

	[Token(Token = "0x600086C")]
	[Address(RVA = "0x54BAEB0", Offset = "0x54B9EB0", VA = "0x54BAEB0")]
	[System.Runtime.Versioning.NonVersionable]
	public static int Min(int val1, int val2)
	{
		return default(int);
	}

	[Token(Token = "0x600086D")]
	[Address(RVA = "0x54BAEC0", Offset = "0x54B9EC0", VA = "0x54BAEC0")]
	[System.Runtime.Versioning.NonVersionable]
	public static long Min(long val1, long val2)
	{
		return default(long);
	}

	[Token(Token = "0x600086E")]
	[Address(RVA = "0x54BAED0", Offset = "0x54B9ED0", VA = "0x54BAED0")]
	[CLSCompliant(false)]
	[System.Runtime.Versioning.NonVersionable]
	public static sbyte Min(sbyte val1, sbyte val2)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600086F")]
	[Address(RVA = "0x54BAEE0", Offset = "0x54B9EE0", VA = "0x54BAEE0")]
	public static float Min(float val1, float val2)
	{
		return default(float);
	}

	[Token(Token = "0x6000870")]
	[Address(RVA = "0x54BAF20", Offset = "0x54B9F20", VA = "0x54BAF20")]
	[CLSCompliant(false)]
	[System.Runtime.Versioning.NonVersionable]
	public static ushort Min(ushort val1, ushort val2)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000871")]
	[Address(RVA = "0x54BAF30", Offset = "0x54B9F30", VA = "0x54BAF30")]
	[CLSCompliant(false)]
	[System.Runtime.Versioning.NonVersionable]
	public static uint Min(uint val1, uint val2)
	{
		return default(uint);
	}

	[Token(Token = "0x6000872")]
	[Address(RVA = "0x54BAF40", Offset = "0x54B9F40", VA = "0x54BAF40")]
	[CLSCompliant(false)]
	[System.Runtime.Versioning.NonVersionable]
	public static ulong Min(ulong val1, ulong val2)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000873")]
	[Address(RVA = "0x54BAF50", Offset = "0x54B9F50", VA = "0x54BAF50")]
	public static decimal Round(decimal d)
	{
		return 0m;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000874")]
	[Address(RVA = "0x54BAFB0", Offset = "0x54B9FB0", VA = "0x54BAFB0")]
	public static extern double Round(double a);

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000875")]
	[Address(RVA = "0x54BB060", Offset = "0x54BA060", VA = "0x54BB060")]
	public static double Round(double value, int digits)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000876")]
	[Address(RVA = "0x54BB480", Offset = "0x54BA480", VA = "0x54BB480")]
	public static double Round(double value, MidpointRounding mode)
	{
		return default(double);
	}

	[Token(Token = "0x6000877")]
	[Address(RVA = "0x54BB0D0", Offset = "0x54BA0D0", VA = "0x54BB0D0")]
	public static double Round(double value, int digits, MidpointRounding mode)
	{
		return default(double);
	}

	[Token(Token = "0x6000878")]
	[Address(RVA = "0x54BB500", Offset = "0x54BA500", VA = "0x54BB500")]
	public static int Sign(double value)
	{
		return default(int);
	}

	[Token(Token = "0x6000879")]
	[Address(RVA = "0x54BB580", Offset = "0x54BA580", VA = "0x54BB580")]
	public static int Sign(long value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600087A")]
	[Address(RVA = "0x54BB5A0", Offset = "0x54BA5A0", VA = "0x54BB5A0")]
	public static decimal Truncate(decimal d)
	{
		return 0m;
	}

	[Token(Token = "0x600087B")]
	[Address(RVA = "0x54BB600", Offset = "0x54BA600", VA = "0x54BB600")]
	public static double Truncate(double d)
	{
		return default(double);
	}

	[Token(Token = "0x600087C")]
	private static void ThrowMinMaxException<T>(T min, T max)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600087D")]
	[Address(RVA = "0x54BB670", Offset = "0x54BA670", VA = "0x54BB670")]
	public static extern double Abs(double value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600087E")]
	[Address(RVA = "0x54BB680", Offset = "0x54BA680", VA = "0x54BB680")]
	public static extern float Abs(float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600087F")]
	[Address(RVA = "0x54BB690", Offset = "0x54BA690", VA = "0x54BB690")]
	public static extern double Acos(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000880")]
	[Address(RVA = "0x54BB6A0", Offset = "0x54BA6A0", VA = "0x54BB6A0")]
	public static extern double Asin(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000881")]
	[Address(RVA = "0x54BB6B0", Offset = "0x54BA6B0", VA = "0x54BB6B0")]
	public static extern double Atan(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000882")]
	[Address(RVA = "0x54BB6C0", Offset = "0x54BA6C0", VA = "0x54BB6C0")]
	public static extern double Atan2(double y, double x);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000883")]
	[Address(RVA = "0x54BB6D0", Offset = "0x54BA6D0", VA = "0x54BB6D0")]
	public static extern double Ceiling(double a);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000884")]
	[Address(RVA = "0x54BB6E0", Offset = "0x54BA6E0", VA = "0x54BB6E0")]
	public static extern double Cos(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000885")]
	[Address(RVA = "0x54BB6F0", Offset = "0x54BA6F0", VA = "0x54BB6F0")]
	public static extern double Cosh(double value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000886")]
	[Address(RVA = "0x54BB700", Offset = "0x54BA700", VA = "0x54BB700")]
	public static extern double Exp(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000887")]
	[Address(RVA = "0x54BB710", Offset = "0x54BA710", VA = "0x54BB710")]
	public static extern double Floor(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000888")]
	[Address(RVA = "0x54BB720", Offset = "0x54BA720", VA = "0x54BB720")]
	public static extern double Log(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000889")]
	[Address(RVA = "0x54BB730", Offset = "0x54BA730", VA = "0x54BB730")]
	public static extern double Log10(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600088A")]
	[Address(RVA = "0x54BB740", Offset = "0x54BA740", VA = "0x54BB740")]
	public static extern double Pow(double x, double y);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600088B")]
	[Address(RVA = "0x54BB750", Offset = "0x54BA750", VA = "0x54BB750")]
	public static extern double Sin(double a);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600088C")]
	[Address(RVA = "0x54BB760", Offset = "0x54BA760", VA = "0x54BB760")]
	public static extern double Sinh(double value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600088D")]
	[Address(RVA = "0x54BB770", Offset = "0x54BA770", VA = "0x54BB770")]
	public static extern double Sqrt(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600088E")]
	[Address(RVA = "0x54BB790", Offset = "0x54BA790", VA = "0x54BB790")]
	public static extern double Tan(double a);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600088F")]
	[Address(RVA = "0x54BB7A0", Offset = "0x54BA7A0", VA = "0x54BB7A0")]
	public static extern double Tanh(double value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000890")]
	[Address(RVA = "0x54BB4F0", Offset = "0x54BA4F0", VA = "0x54BB4F0")]
	private unsafe static extern double ModF(double x, double* intptr);
}
