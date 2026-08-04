// ==================== AoTTG2 cross-reference ====================
// Type: System.Random
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3CCB150", Offset = "0x3CCB150", VA = "0x3CCB150")]
	public Random()
	{
	}

	[Token(Token = "0x6000962")]
	[Address(RVA = "0x3CCB3C0", Offset = "0x3CCB3C0", VA = "0x3CCB3C0")]
	public Random(int Seed)
	{
	}

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x3CCB620", Offset = "0x3CCB620", VA = "0x3CCB620", Slot = "4")]
	protected virtual double Sample()
	{
		return default(double);
	}

	[Token(Token = "0x6000964")]
	[Address(RVA = "0x3CCB6A0", Offset = "0x3CCB6A0", VA = "0x3CCB6A0")]
	private int InternalSample()
	{
		return default(int);
	}

	[Token(Token = "0x6000965")]
	[Address(RVA = "0x3CCB1A0", Offset = "0x3CCB1A0", VA = "0x3CCB1A0")]
	private static int GenerateSeed()
	{
		return default(int);
	}

	[Token(Token = "0x6000966")]
	[Address(RVA = "0x3CCB720", Offset = "0x3CCB720", VA = "0x3CCB720")]
	private static int GenerateGlobalSeed()
	{
		return default(int);
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x3CCB740", Offset = "0x3CCB740", VA = "0x3CCB740", Slot = "5")]
	public virtual int Next()
	{
		return default(int);
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x3CCB7C0", Offset = "0x3CCB7C0", VA = "0x3CCB7C0")]
	private double GetSampleForLargeRange()
	{
		return default(double);
	}

	[Token(Token = "0x6000969")]
	[Address(RVA = "0x3CCB8C0", Offset = "0x3CCB8C0", VA = "0x3CCB8C0", Slot = "6")]
	public virtual int Next(int minValue, int maxValue)
	{
		return default(int);
	}

	[Token(Token = "0x600096A")]
	[Address(RVA = "0x3CCB9B0", Offset = "0x3CCB9B0", VA = "0x3CCB9B0", Slot = "7")]
	public virtual int Next(int maxValue)
	{
		return default(int);
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x3CCBA60", Offset = "0x3CCBA60", VA = "0x3CCBA60", Slot = "8")]
	public virtual double NextDouble()
	{
		return default(double);
	}
}
