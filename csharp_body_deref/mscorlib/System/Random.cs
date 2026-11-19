// ==================== AoTTG2 cross-reference ====================
// Type: System.Random
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000100")]
public class Random
{
	[Token(Token = "0x400038D")]
	[FieldOffset(Offset = "0x10")]
	private int _inext;

	[Token(Token = "0x400038E")]
	[FieldOffset(Offset = "0x14")]
	private int _inextp;

	[Token(Token = "0x400038F")]
	[FieldOffset(Offset = "0x18")]
	private int[] _seedArray;

	[Token(Token = "0x4000390")]
	[ThreadStatic]
	private static Random t_threadRandom;

	[Token(Token = "0x4000391")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Random s_globalRandom;

	[Token(Token = "0x6000977")]
	[Address(RVA = "0x54CE9B0", Offset = "0x54CD9B0", VA = "0x54CE9B0")]
	public Random()
	{
	}

	[Token(Token = "0x6000978")]
	[Address(RVA = "0x54CEBF0", Offset = "0x54CDBF0", VA = "0x54CEBF0")]
	public Random(int Seed)
	{
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x54CEE40", Offset = "0x54CDE40", VA = "0x54CEE40", Slot = "4")]
	protected virtual double Sample()
	{
		return default(double);
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x54CEEE0", Offset = "0x54CDEE0", VA = "0x54CEEE0")]
	private int InternalSample()
	{
		return default(int);
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x54CEA00", Offset = "0x54CDA00", VA = "0x54CEA00")]
	private static int GenerateSeed()
	{
		return default(int);
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x54CEF70", Offset = "0x54CDF70", VA = "0x54CEF70")]
	private static int GenerateGlobalSeed()
	{
		return default(int);
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x54CEF90", Offset = "0x54CDF90", VA = "0x54CEF90", Slot = "5")]
	public virtual int Next()
	{
		return default(int);
	}

	[Token(Token = "0x600097E")]
	[Address(RVA = "0x54CF020", Offset = "0x54CE020", VA = "0x54CF020")]
	private double GetSampleForLargeRange()
	{
		return default(double);
	}

	[Token(Token = "0x600097F")]
	[Address(RVA = "0x54CF150", Offset = "0x54CE150", VA = "0x54CF150", Slot = "6")]
	public virtual int Next(int minValue, int maxValue)
	{
		return default(int);
	}

	[Token(Token = "0x6000980")]
	[Address(RVA = "0x54CF240", Offset = "0x54CE240", VA = "0x54CF240", Slot = "7")]
	public virtual int Next(int maxValue)
	{
		return default(int);
	}

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x54CF2F0", Offset = "0x54CE2F0", VA = "0x54CF2F0", Slot = "8")]
	public virtual double NextDouble()
	{
		return default(double);
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x54CF310", Offset = "0x54CE310", VA = "0x54CF310", Slot = "9")]
	public virtual void NextBytes(byte[] buffer)
	{
	}
}
