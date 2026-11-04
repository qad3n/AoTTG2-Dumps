// ==================== AoTTG2 cross-reference ====================
// Type: System.Random
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000128")]
public class Random
{
	[Token(Token = "0x4000432")]
	[FieldOffset(Offset = "0x10")]
	private int _inext;

	[Token(Token = "0x4000433")]
	[FieldOffset(Offset = "0x14")]
	private int _inextp;

	[Token(Token = "0x4000434")]
	[FieldOffset(Offset = "0x18")]
	private int[] _seedArray;

	[Token(Token = "0x4000435")]
	[ThreadStatic]
	private static Random t_threadRandom;

	[Token(Token = "0x4000436")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Random s_globalRandom;

	[Token(Token = "0x600099C")]
	[Address(RVA = "0x1B47EE0", Offset = "0x1B464E0", VA = "0x181B47EE0")]
	public Random()
	{
	}

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x1B47F40", Offset = "0x1B46540", VA = "0x181B47F40")]
	public Random(int Seed)
	{
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x1B47E30", Offset = "0x1B46430", VA = "0x181B47E30", Slot = "4")]
	protected virtual double Sample()
	{
		return default(double);
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x1B47B80", Offset = "0x1B46180", VA = "0x181B47B80")]
	private int InternalSample()
	{
		return default(int);
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x1B47960", Offset = "0x1B45F60", VA = "0x181B47960")]
	private static int GenerateSeed()
	{
		return default(int);
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x1B27770", Offset = "0x1B25D70", VA = "0x181B27770")]
	private static int GenerateGlobalSeed()
	{
		return default(int);
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x1B47E20", Offset = "0x1B46420", VA = "0x181B47E20", Slot = "5")]
	public virtual int Next()
	{
		return default(int);
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x1B47B30", Offset = "0x1B46130", VA = "0x181B47B30")]
	private double GetSampleForLargeRange()
	{
		return default(double);
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x1B47C30", Offset = "0x1B46230", VA = "0x181B47C30", Slot = "6")]
	public virtual int Next(int minValue, int maxValue)
	{
		return default(int);
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x1B47D60", Offset = "0x1B46360", VA = "0x181B47D60", Slot = "7")]
	public virtual int Next(int maxValue)
	{
		return default(int);
	}

	[Token(Token = "0x60009A6")]
	[Address(RVA = "0x1B47C10", Offset = "0x1B46210", VA = "0x181B47C10", Slot = "8")]
	public virtual double NextDouble()
	{
		return default(double);
	}
}
