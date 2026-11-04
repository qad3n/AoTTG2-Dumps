// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RefreshRate
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000CC")]
[UnityEngine.Bindings.NativeType("Runtime/Graphics/RefreshRate.h")]
public struct RefreshRate : IEquatable<RefreshRate>, IComparable<RefreshRate>
{
	[Token(Token = "0x4000218")]
	[FieldOffset(Offset = "0x0")]
	public uint numerator;

	[Token(Token = "0x4000219")]
	[FieldOffset(Offset = "0x4")]
	public uint denominator;

	[Token(Token = "0x170000B6")]
	public double value
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000447")]
		[Address(RVA = "0x2ED3830", Offset = "0x2ED1E30", VA = "0x182ED3830")]
		get
		{
			return default(double);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000448")]
	[Address(RVA = "0x2ED35A0", Offset = "0x2ED1BA0", VA = "0x182ED35A0", Slot = "4")]
	public bool Equals(RefreshRate other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000449")]
	[Address(RVA = "0x2ED3540", Offset = "0x2ED1B40", VA = "0x182ED3540", Slot = "5")]
	public int CompareTo(RefreshRate other)
	{
		return default(int);
	}

	[Token(Token = "0x600044A")]
	[Address(RVA = "0x2ED35E0", Offset = "0x2ED1BE0", VA = "0x182ED35E0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x2ED36E0", Offset = "0x2ED1CE0", VA = "0x182ED36E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x2ED36B0", Offset = "0x2ED1CB0", VA = "0x182ED36B0")]
	private static uint Gcd(uint a, uint b)
	{
		return default(uint);
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x2ED3790", Offset = "0x2ED1D90", VA = "0x182ED3790", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
