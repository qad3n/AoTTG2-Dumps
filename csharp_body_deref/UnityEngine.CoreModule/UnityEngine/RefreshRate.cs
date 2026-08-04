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
		[Address(RVA = "0x4DC0700", Offset = "0x4DC0700", VA = "0x4DC0700")]
		get
		{
			return default(double);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000314")]
	[Address(RVA = "0x4DC0720", Offset = "0x4DC0720", VA = "0x4DC0720", Slot = "4")]
	public bool Equals(RefreshRate other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000315")]
	[Address(RVA = "0x4DC0750", Offset = "0x4DC0750", VA = "0x4DC0750", Slot = "5")]
	public int CompareTo(RefreshRate other)
	{
		return default(int);
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x4DC07A0", Offset = "0x4DC07A0", VA = "0x4DC07A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
