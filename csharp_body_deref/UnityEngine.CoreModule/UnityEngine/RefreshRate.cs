// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RefreshRate
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000CD")]
[UnityEngine.Bindings.NativeType("Runtime/Graphics/RefreshRate.h")]
public struct RefreshRate : IEquatable<RefreshRate>, IComparable<RefreshRate>
{
	[Token(Token = "0x400021D")]
	[FieldOffset(Offset = "0x0")]
	public uint numerator;

	[Token(Token = "0x400021E")]
	[FieldOffset(Offset = "0x4")]
	public uint denominator;

	[Token(Token = "0x170000B7")]
	public double value
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600044B")]
		[Address(RVA = "0x68CF290", Offset = "0x68CE290", VA = "0x68CF290")]
		get
		{
			return default(double);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044C")]
	[Address(RVA = "0x68CF2B0", Offset = "0x68CE2B0", VA = "0x68CF2B0", Slot = "4")]
	public bool Equals(RefreshRate other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044D")]
	[Address(RVA = "0x68CF2E0", Offset = "0x68CE2E0", VA = "0x68CF2E0", Slot = "5")]
	public int CompareTo(RefreshRate other)
	{
		return default(int);
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x68CF320", Offset = "0x68CE320", VA = "0x68CF320", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x68CF3B0", Offset = "0x68CE3B0", VA = "0x68CF3B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x68CF440", Offset = "0x68CE440", VA = "0x68CF440")]
	private static uint Gcd(uint a, uint b)
	{
		return default(uint);
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x68CF460", Offset = "0x68CE460", VA = "0x68CF460", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
