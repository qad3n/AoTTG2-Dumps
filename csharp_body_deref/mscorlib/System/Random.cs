using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000100")]
public class Random
{
	[Token(Token = "0x40003AD")]
	private const int MBIG = int.MaxValue;

	[Token(Token = "0x40003AE")]
	private const int MSEED = 161803398;

	[Token(Token = "0x40003AF")]
	private const int MZ = 0;

	[Token(Token = "0x40003B0")]
	[FieldOffset(Offset = "0x10")]
	private int _inext;

	[Token(Token = "0x40003B1")]
	[FieldOffset(Offset = "0x14")]
	private int _inextp;

	[Token(Token = "0x40003B2")]
	[FieldOffset(Offset = "0x18")]
	private int[] _seedArray;

	[Token(Token = "0x40003B3")]
	[ThreadStatic]
	private static Random t_threadRandom;

	[Token(Token = "0x40003B4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Random s_globalRandom;

	[Token(Token = "0x6000961")]
	[Address(RVA = "0x4FE5630", Offset = "0x4FE5630", VA = "0x4FE5630")]
	public Random()
	{
	}

	[Token(Token = "0x6000962")]
	[Address(RVA = "0x4FE58A0", Offset = "0x4FE58A0", VA = "0x4FE58A0")]
	public Random(int Seed)
	{
	}

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x4FE5B00", Offset = "0x4FE5B00", VA = "0x4FE5B00", Slot = "4")]
	protected virtual double Sample()
	{
		return default(double);
	}

	[Token(Token = "0x6000964")]
	[Address(RVA = "0x4FE5B80", Offset = "0x4FE5B80", VA = "0x4FE5B80")]
	private int InternalSample()
	{
		return default(int);
	}

	[Token(Token = "0x6000965")]
	[Address(RVA = "0x4FE5680", Offset = "0x4FE5680", VA = "0x4FE5680")]
	private static int GenerateSeed()
	{
		return default(int);
	}

	[Token(Token = "0x6000966")]
	[Address(RVA = "0x4FE5C00", Offset = "0x4FE5C00", VA = "0x4FE5C00")]
	private static int GenerateGlobalSeed()
	{
		return default(int);
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x4FE5C20", Offset = "0x4FE5C20", VA = "0x4FE5C20", Slot = "5")]
	public virtual int Next()
	{
		return default(int);
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x4FE5CA0", Offset = "0x4FE5CA0", VA = "0x4FE5CA0")]
	private double GetSampleForLargeRange()
	{
		return default(double);
	}

	[Token(Token = "0x6000969")]
	[Address(RVA = "0x4FE5DA0", Offset = "0x4FE5DA0", VA = "0x4FE5DA0", Slot = "6")]
	public virtual int Next(int minValue, int maxValue)
	{
		return default(int);
	}

	[Token(Token = "0x600096A")]
	[Address(RVA = "0x4FE5E90", Offset = "0x4FE5E90", VA = "0x4FE5E90", Slot = "7")]
	public virtual int Next(int maxValue)
	{
		return default(int);
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x4FE5F40", Offset = "0x4FE5F40", VA = "0x4FE5F40", Slot = "8")]
	public virtual double NextDouble()
	{
		return default(double);
	}
}
