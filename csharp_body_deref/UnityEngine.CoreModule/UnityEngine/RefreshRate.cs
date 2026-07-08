using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000A8")]
[UnityEngine.Bindings.NativeType("Runtime/Graphics/RefreshRate.h")]
public struct RefreshRate : IEquatable<RefreshRate>, IComparable<RefreshRate>
{
	[Token(Token = "0x40001BF")]
	[FieldOffset(Offset = "0x0")]
	public uint numerator;

	[Token(Token = "0x40001C0")]
	[FieldOffset(Offset = "0x4")]
	public uint denominator;

	[Token(Token = "0x1700009A")]
	public double value
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000313")]
		[Address(RVA = "0x4A98EE0", Offset = "0x4A98EE0", VA = "0x4A98EE0")]
		get
		{
			return default(double);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000314")]
	[Address(RVA = "0x4A98F00", Offset = "0x4A98F00", VA = "0x4A98F00", Slot = "4")]
	public bool Equals(RefreshRate other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000315")]
	[Address(RVA = "0x4A98F30", Offset = "0x4A98F30", VA = "0x4A98F30", Slot = "5")]
	public int CompareTo(RefreshRate other)
	{
		return default(int);
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x4A98F80", Offset = "0x4A98F80", VA = "0x4A98F80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
