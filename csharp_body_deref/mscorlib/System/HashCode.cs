// ==================== AoTTG2 cross-reference ====================
// Type: System.HashCode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000C9")]
public struct HashCode
{
	[Token(Token = "0x4000361")]
	[FieldOffset(Offset = "0x0")]
	private static readonly uint s_seed;

	[Token(Token = "0x4000362")]
	[FieldOffset(Offset = "0x0")]
	private uint _v1;

	[Token(Token = "0x4000363")]
	[FieldOffset(Offset = "0x4")]
	private uint _v2;

	[Token(Token = "0x4000364")]
	[FieldOffset(Offset = "0x8")]
	private uint _v3;

	[Token(Token = "0x4000365")]
	[FieldOffset(Offset = "0xC")]
	private uint _v4;

	[Token(Token = "0x4000366")]
	[FieldOffset(Offset = "0x10")]
	private uint _queue1;

	[Token(Token = "0x4000367")]
	[FieldOffset(Offset = "0x14")]
	private uint _queue2;

	[Token(Token = "0x4000368")]
	[FieldOffset(Offset = "0x18")]
	private uint _queue3;

	[Token(Token = "0x4000369")]
	[FieldOffset(Offset = "0x1C")]
	private uint _length;

	[Token(Token = "0x6000781")]
	[Address(RVA = "0x3CB1850", Offset = "0x3CB1850", VA = "0x3CB1850")]
	private static uint GenerateGlobalSeed()
	{
		return default(uint);
	}

	[Token(Token = "0x6000782")]
	public static int Combine<T1, T2, T3, T4>(T1 value1, T2 value2, T3 value3, T4 value4)
	{
		return default(int);
	}

	[Token(Token = "0x6000783")]
	public static int Combine<T1, T2, T3, T4, T5, T6, T7, T8>(T1 value1, T2 value2, T3 value3, T4 value4, T5 value5, T6 value6, T7 value7, T8 value8)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000784")]
	[Address(RVA = "0x3CB1870", Offset = "0x3CB1870", VA = "0x3CB1870")]
	private static uint Rol(uint value, int count)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000785")]
	[Address(RVA = "0x3CB1880", Offset = "0x3CB1880", VA = "0x3CB1880")]
	private static void Initialize(out uint v1, out uint v2, out uint v3, out uint v4)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000786")]
	[Address(RVA = "0x3CB1910", Offset = "0x3CB1910", VA = "0x3CB1910")]
	private static uint Round(uint hash, uint input)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000787")]
	[Address(RVA = "0x3CB1970", Offset = "0x3CB1970", VA = "0x3CB1970")]
	private static uint QueueRound(uint hash, uint queuedValue)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000788")]
	[Address(RVA = "0x3CB19D0", Offset = "0x3CB19D0", VA = "0x3CB19D0")]
	private static uint MixState(uint v1, uint v2, uint v3, uint v4)
	{
		return default(uint);
	}

	[Token(Token = "0x6000789")]
	[Address(RVA = "0x3CB1A40", Offset = "0x3CB1A40", VA = "0x3CB1A40")]
	private static uint MixEmptyState()
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600078A")]
	[Address(RVA = "0x3CB1A90", Offset = "0x3CB1A90", VA = "0x3CB1A90")]
	private static uint MixFinal(uint hash)
	{
		return default(uint);
	}

	[Token(Token = "0x600078B")]
	public void Add<T>(T value)
	{
	}

	[Token(Token = "0x600078C")]
	[Address(RVA = "0x3CB1AC0", Offset = "0x3CB1AC0", VA = "0x3CB1AC0")]
	private void Add(int value)
	{
	}

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x3CB1D40", Offset = "0x3CB1D40", VA = "0x3CB1D40")]
	public int ToHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x3CB20D0", Offset = "0x3CB20D0", VA = "0x3CB20D0", Slot = "2")]
	[Obsolete("HashCode is a mutable struct and should not be compared with other HashCodes. Use ToHashCode to retrieve the computed hash code.", true)]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x3CB2140", Offset = "0x3CB2140", VA = "0x3CB2140", Slot = "0")]
	[Obsolete("HashCode is a mutable struct and should not be compared with other HashCodes.", true)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}
}
