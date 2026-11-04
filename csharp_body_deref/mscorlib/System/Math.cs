// ==================== AoTTG2 cross-reference ====================
// Type: System.Math
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200010E")]
public static class Math
{
	[Token(Token = "0x400040E")]
	[FieldOffset(Offset = "0x0")]
	private static double doubleRoundLimit;

	[Token(Token = "0x400040F")]
	[FieldOffset(Offset = "0x8")]
	private static double[] roundPower10Double;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000879")]
	[Address(RVA = "0x1B2BCD0", Offset = "0x1B2A2D0", VA = "0x181B2BCD0")]
	public static short Abs(short value)
	{
		return default(short);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600087A")]
	[Address(RVA = "0x1B2BC80", Offset = "0x1B2A280", VA = "0x181B2BC80")]
	public static int Abs(int value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600087B")]
	[Address(RVA = "0x1B2BC30", Offset = "0x1B2A230", VA = "0x181B2BC30")]
	public static long Abs(long value)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600087C")]
	[Address(RVA = "0x1B2BD40", Offset = "0x1B2A340", VA = "0x181B2BD40")]
	public static decimal Abs(decimal value)
	{
		return 0m;
	}

	[Token(Token = "0x600087D")]
	[Address(RVA = "0x1B2C900", Offset = "0x1B2AF00", VA = "0x181B2C900")]
	[System.Diagnostics.StackTraceHidden]
	private static void ThrowAbsOverflow()
	{
	}

	[Token(Token = "0x600087E")]
	[Address(RVA = "0x1B2BF70", Offset = "0x1B2A570", VA = "0x181B2BF70")]
	public static int DivRem(int a, int b, out int result)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600087F")]
	[Address(RVA = "0x1B2BEB0", Offset = "0x1B2A4B0", VA = "0x181B2BEB0")]
	public static int Clamp(int value, int min, int max)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000880")]
	[Address(RVA = "0x1B2BE00", Offset = "0x1B2A400", VA = "0x181B2BE00")]
	public static float Clamp(float value, float min, float max)
	{
		return default(float);
	}

	[Token(Token = "0x6000881")]
	[Address(RVA = "0x1B2BFC0", Offset = "0x1B2A5C0", VA = "0x181B2BFC0")]
	public static double Log(double a, double newBase)
	{
		return default(double);
	}

	[Token(Token = "0x6000882")]
	[Address(RVA = "0x1B2C0C0", Offset = "0x1B2A6C0", VA = "0x181B2C0C0")]
	[System.Runtime.Versioning.NonVersionable]
	public static byte Max(byte val1, byte val2)
	{
		return default(byte);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000883")]
	[Address(RVA = "0x1B2C190", Offset = "0x1B2A790", VA = "0x181B2C190")]
	public static decimal Max(decimal val1, decimal val2)
	{
		return 0m;
	}

	[Token(Token = "0x6000884")]
	[Address(RVA = "0x1B2C100", Offset = "0x1B2A700", VA = "0x181B2C100")]
	public static double Max(double val1, double val2)
	{
		return default(double);
	}

	[Token(Token = "0x6000885")]
	[Address(RVA = "0x1B2C130", Offset = "0x1B2A730", VA = "0x181B2C130")]
	[System.Runtime.Versioning.NonVersionable]
	public static short Max(short val1, short val2)
	{
		return default(short);
	}

	[Token(Token = "0x6000886")]
	[Address(RVA = "0x1B2C0D0", Offset = "0x1B2A6D0", VA = "0x181B2C0D0")]
	[System.Runtime.Versioning.NonVersionable]
	public static int Max(int val1, int val2)
	{
		return default(int);
	}

	[Token(Token = "0x6000887")]
	[Address(RVA = "0x1B2C180", Offset = "0x1B2A780", VA = "0x181B2C180")]
	[System.Runtime.Versioning.NonVersionable]
	public static long Max(long val1, long val2)
	{
		return default(long);
	}

	[Token(Token = "0x6000888")]
	[Address(RVA = "0x1B2C140", Offset = "0x1B2A740", VA = "0x181B2C140")]
	[System.Runtime.Versioning.NonVersionable]
	[CLSCompliant(false)]
	public static sbyte Max(sbyte val1, sbyte val2)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000889")]
	[Address(RVA = "0x1B2C160", Offset = "0x1B2A760", VA = "0x181B2C160")]
	public static float Max(float val1, float val2)
	{
		return default(float);
	}

	[Token(Token = "0x600088A")]
	[Address(RVA = "0x1B2C0F0", Offset = "0x1B2A6F0", VA = "0x181B2C0F0")]
	[System.Runtime.Versioning.NonVersionable]
	[CLSCompliant(false)]
	public static ushort Max(ushort val1, ushort val2)
	{
		return default(ushort);
	}

	[Token(Token = "0x600088B")]
	[Address(RVA = "0x1B2C0E0", Offset = "0x1B2A6E0", VA = "0x181B2C0E0")]
	[System.Runtime.Versioning.NonVersionable]
	[CLSCompliant(false)]
	public static uint Max(uint val1, uint val2)
	{
		return default(uint);
	}

	[Token(Token = "0x600088C")]
	[Address(RVA = "0x1B2C150", Offset = "0x1B2A750", VA = "0x181B2C150")]
	[CLSCompliant(false)]
	[System.Runtime.Versioning.NonVersionable]
	public static ulong Max(ulong val1, ulong val2)
	{
		return default(ulong);
	}

	[Token(Token = "0x600088D")]
	[Address(RVA = "0x1B2C2C0", Offset = "0x1B2A8C0", VA = "0x181B2C2C0")]
	[System.Runtime.Versioning.NonVersionable]
	public static byte Min(byte val1, byte val2)
	{
		return default(byte);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600088E")]
	[Address(RVA = "0x1B2C240", Offset = "0x1B2A840", VA = "0x181B2C240")]
	public static decimal Min(decimal val1, decimal val2)
	{
		return 0m;
	}

	[Token(Token = "0x600088F")]
	[Address(RVA = "0x1B2C2F0", Offset = "0x1B2A8F0", VA = "0x181B2C2F0")]
	public static double Min(double val1, double val2)
	{
		return default(double);
	}

	[Token(Token = "0x6000890")]
	[Address(RVA = "0x1B2C2B0", Offset = "0x1B2A8B0", VA = "0x181B2C2B0")]
	[System.Runtime.Versioning.NonVersionable]
	public static short Min(short val1, short val2)
	{
		return default(short);
	}

	[Token(Token = "0x6000891")]
	[Address(RVA = "0x1B2C2D0", Offset = "0x1B2A8D0", VA = "0x181B2C2D0")]
	[System.Runtime.Versioning.NonVersionable]
	public static int Min(int val1, int val2)
	{
		return default(int);
	}

	[Token(Token = "0x6000892")]
	[Address(RVA = "0x1B2C330", Offset = "0x1B2A930", VA = "0x181B2C330")]
	[System.Runtime.Versioning.NonVersionable]
	public static long Min(long val1, long val2)
	{
		return default(long);
	}

	[Token(Token = "0x6000893")]
	[Address(RVA = "0x1B2C220", Offset = "0x1B2A820", VA = "0x181B2C220")]
	[System.Runtime.Versioning.NonVersionable]
	[CLSCompliant(false)]
	public static sbyte Min(sbyte val1, sbyte val2)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000894")]
	[Address(RVA = "0x1B2C340", Offset = "0x1B2A940", VA = "0x181B2C340")]
	public static float Min(float val1, float val2)
	{
		return default(float);
	}

	[Token(Token = "0x6000895")]
	[Address(RVA = "0x1B2C320", Offset = "0x1B2A920", VA = "0x181B2C320")]
	[CLSCompliant(false)]
	[System.Runtime.Versioning.NonVersionable]
	public static ushort Min(ushort val1, ushort val2)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000896")]
	[Address(RVA = "0x1B2C2E0", Offset = "0x1B2A8E0", VA = "0x181B2C2E0")]
	[CLSCompliant(false)]
	[System.Runtime.Versioning.NonVersionable]
	public static uint Min(uint val1, uint val2)
	{
		return default(uint);
	}

	[Token(Token = "0x6000897")]
	[Address(RVA = "0x1B2C230", Offset = "0x1B2A830", VA = "0x181B2C230")]
	[System.Runtime.Versioning.NonVersionable]
	[CLSCompliant(false)]
	public static ulong Min(ulong val1, ulong val2)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000898")]
	[Address(RVA = "0x1B2C770", Offset = "0x1B2AD70", VA = "0x181B2C770")]
	public static decimal Round(decimal d)
	{
		return 0m;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000899")]
	[Address(RVA = "0x1B2C760", Offset = "0x1B2AD60", VA = "0x181B2C760")]
	public static extern double Round(double a);

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600089A")]
	[Address(RVA = "0x1B2C380", Offset = "0x1B2A980", VA = "0x181B2C380")]
	public static double Round(double value, int digits)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600089B")]
	[Address(RVA = "0x1B2C700", Offset = "0x1B2AD00", VA = "0x181B2C700")]
	public static double Round(double value, MidpointRounding mode)
	{
		return default(double);
	}

	[Token(Token = "0x600089C")]
	[Address(RVA = "0x1B2C3E0", Offset = "0x1B2A9E0", VA = "0x181B2C3E0")]
	public static double Round(double value, int digits, MidpointRounding mode)
	{
		return default(double);
	}

	[Token(Token = "0x600089D")]
	[Address(RVA = "0x1B2C7F0", Offset = "0x1B2ADF0", VA = "0x181B2C7F0")]
	public static int Sign(double value)
	{
		return default(int);
	}

	[Token(Token = "0x600089E")]
	[Address(RVA = "0x1B2C880", Offset = "0x1B2AE80", VA = "0x181B2C880")]
	public static int Sign(long value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600089F")]
	[Address(RVA = "0x1B2C9C0", Offset = "0x1B2AFC0", VA = "0x181B2C9C0")]
	public static decimal Truncate(decimal d)
	{
		return 0m;
	}

	[Token(Token = "0x60008A0")]
	[Address(RVA = "0x1B2C950", Offset = "0x1B2AF50", VA = "0x181B2C950")]
	public static double Truncate(double d)
	{
		return default(double);
	}

	[Token(Token = "0x60008A1")]
	private static void ThrowMinMaxException<T>(T min, T max)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x1B2BD30", Offset = "0x1B2A330", VA = "0x181B2BD30")]
	public static extern double Abs(double value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008A3")]
	[Address(RVA = "0x1B2BD20", Offset = "0x1B2A320", VA = "0x181B2BD20")]
	public static extern float Abs(float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x1B2BDB0", Offset = "0x1B2A3B0", VA = "0x181B2BDB0")]
	public static extern double Acos(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008A5")]
	[Address(RVA = "0x1B2BDC0", Offset = "0x1B2A3C0", VA = "0x181B2BDC0")]
	public static extern double Asin(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008A6")]
	[Address(RVA = "0x1B2BDE0", Offset = "0x1B2A3E0", VA = "0x181B2BDE0")]
	public static extern double Atan(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008A7")]
	[Address(RVA = "0x1B2BDD0", Offset = "0x1B2A3D0", VA = "0x181B2BDD0")]
	public static extern double Atan2(double y, double x);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x1B2BDF0", Offset = "0x1B2A3F0", VA = "0x181B2BDF0")]
	public static extern double Ceiling(double a);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008A9")]
	[Address(RVA = "0x1B2BF50", Offset = "0x1B2A550", VA = "0x181B2BF50")]
	public static extern double Cos(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008AA")]
	[Address(RVA = "0x1B2BF60", Offset = "0x1B2A560", VA = "0x181B2BF60")]
	public static extern double Cosh(double value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008AB")]
	[Address(RVA = "0x1B2BF80", Offset = "0x1B2A580", VA = "0x181B2BF80")]
	public static extern double Exp(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x1B2BF90", Offset = "0x1B2A590", VA = "0x181B2BF90")]
	public static extern double Floor(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008AD")]
	[Address(RVA = "0x1B2BFB0", Offset = "0x1B2A5B0", VA = "0x181B2BFB0")]
	public static extern double Log(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008AE")]
	[Address(RVA = "0x1B2BFA0", Offset = "0x1B2A5A0", VA = "0x181B2BFA0")]
	public static extern double Log10(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008AF")]
	[Address(RVA = "0x1B2C370", Offset = "0x1B2A970", VA = "0x181B2C370")]
	public static extern double Pow(double x, double y);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008B0")]
	[Address(RVA = "0x1B2C8A0", Offset = "0x1B2AEA0", VA = "0x181B2C8A0")]
	public static extern double Sin(double a);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008B1")]
	[Address(RVA = "0x1B2C8B0", Offset = "0x1B2AEB0", VA = "0x181B2C8B0")]
	public static extern double Sinh(double value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x1B2C8C0", Offset = "0x1B2AEC0", VA = "0x181B2C8C0")]
	public static extern double Sqrt(double d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x1B2C8E0", Offset = "0x1B2AEE0", VA = "0x181B2C8E0")]
	public static extern double Tan(double a);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x1B2C8F0", Offset = "0x1B2AEF0", VA = "0x181B2C8F0")]
	public static extern double Tanh(double value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x1B2C360", Offset = "0x1B2A960", VA = "0x181B2C360")]
	private unsafe static extern double ModF(double x, double* intptr);
}
