// ==================== AoTTG2 cross-reference ====================
// Type: System.HashCode
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000F1")]
public struct HashCode
{
	[Token(Token = "0x40003EC")]
	[FieldOffset(Offset = "0x0")]
	private static readonly uint s_seed;

	[Token(Token = "0x40003ED")]
	[FieldOffset(Offset = "0x0")]
	private uint _v1;

	[Token(Token = "0x40003EE")]
	[FieldOffset(Offset = "0x4")]
	private uint _v2;

	[Token(Token = "0x40003EF")]
	[FieldOffset(Offset = "0x8")]
	private uint _v3;

	[Token(Token = "0x40003F0")]
	[FieldOffset(Offset = "0xC")]
	private uint _v4;

	[Token(Token = "0x40003F1")]
	[FieldOffset(Offset = "0x10")]
	private uint _queue1;

	[Token(Token = "0x40003F2")]
	[FieldOffset(Offset = "0x14")]
	private uint _queue2;

	[Token(Token = "0x40003F3")]
	[FieldOffset(Offset = "0x18")]
	private uint _queue3;

	[Token(Token = "0x40003F4")]
	[FieldOffset(Offset = "0x1C")]
	private uint _length;

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x1B27770", Offset = "0x1B25D70", VA = "0x181B27770")]
	private static uint GenerateGlobalSeed()
	{
		return default(uint);
	}

	[Token(Token = "0x60007B1")]
	public static int Combine<T1, T2>(T1 value1, T2 value2)
	{
		return default(int);
	}

	[Token(Token = "0x60007B2")]
	public static int Combine<T1, T2, T3>(T1 value1, T2 value2, T3 value3)
	{
		return default(int);
	}

	[Token(Token = "0x60007B3")]
	public static int Combine<T1, T2, T3, T4>(T1 value1, T2 value2, T3 value3, T4 value4)
	{
		return default(int);
	}

	[Token(Token = "0x60007B4")]
	public static int Combine<T1, T2, T3, T4, T5, T6>(T1 value1, T2 value2, T3 value3, T4 value4, T5 value5, T6 value6)
	{
		return default(int);
	}

	[Token(Token = "0x60007B5")]
	public static int Combine<T1, T2, T3, T4, T5, T6, T7, T8>(T1 value1, T2 value2, T3 value3, T4 value4, T5 value5, T6 value6, T7 value7, T8 value8)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x1B27A20", Offset = "0x1B26020", VA = "0x181B27A20")]
	private static uint Rol(uint value, int count)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x1B277F0", Offset = "0x1B25DF0", VA = "0x181B277F0")]
	private static void Initialize(out uint v1, out uint v2, out uint v3, out uint v4)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B8")]
	[Address(RVA = "0x1B27A40", Offset = "0x1B26040", VA = "0x181B27A40")]
	private static uint Round(uint hash, uint input)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x1B279B0", Offset = "0x1B25FB0", VA = "0x181B279B0")]
	private static uint QueueRound(uint hash, uint queuedValue)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x1B27930", Offset = "0x1B25F30", VA = "0x181B27930")]
	private static uint MixState(uint v1, uint v2, uint v3, uint v4)
	{
		return default(uint);
	}

	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x1B278A0", Offset = "0x1B25EA0", VA = "0x181B278A0")]
	private static uint MixEmptyState()
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007BC")]
	[Address(RVA = "0x1B27900", Offset = "0x1B25F00", VA = "0x181B27900")]
	private static uint MixFinal(uint hash)
	{
		return default(uint);
	}

	[Token(Token = "0x60007BD")]
	public void Add<T>(T value)
	{
	}

	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x1B27580", Offset = "0x1B25B80", VA = "0x181B27580")]
	private void Add(int value)
	{
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x1B27AB0", Offset = "0x1B260B0", VA = "0x181B27AB0")]
	public int ToHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x1B277A0", Offset = "0x1B25DA0", VA = "0x181B277A0", Slot = "2")]
	[Obsolete("HashCode is a mutable struct and should not be compared with other HashCodes. Use ToHashCode to retrieve the computed hash code.", true)]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x1B27720", Offset = "0x1B25D20", VA = "0x181B27720", Slot = "0")]
	[Obsolete("HashCode is a mutable struct and should not be compared with other HashCodes.", true)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}
}
