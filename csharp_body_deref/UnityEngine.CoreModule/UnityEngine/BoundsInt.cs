// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.BoundsInt
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000099")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct BoundsInt : IEquatable<BoundsInt>, IFormattable
{
	[Token(Token = "0x400019D")]
	[FieldOffset(Offset = "0x0")]
	private Vector3Int m_Position;

	[Token(Token = "0x400019E")]
	[FieldOffset(Offset = "0xC")]
	private Vector3Int m_Size;

	[Token(Token = "0x1700006F")]
	public Vector3Int position
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000272")]
		[Address(RVA = "0x4DBC170", Offset = "0x4DBC170", VA = "0x4DBC170")]
		get
		{
			return default(Vector3Int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000273")]
		[Address(RVA = "0x4DBC180", Offset = "0x4DBC180", VA = "0x4DBC180")]
		set
		{
		}
	}

	[Token(Token = "0x17000070")]
	public Vector3Int size
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000274")]
		[Address(RVA = "0x4DBC190", Offset = "0x4DBC190", VA = "0x4DBC190")]
		get
		{
			return default(Vector3Int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000275")]
		[Address(RVA = "0x4DBC1A0", Offset = "0x4DBC1A0", VA = "0x4DBC1A0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000276")]
	[Address(RVA = "0x4DBC1B0", Offset = "0x4DBC1B0", VA = "0x4DBC1B0")]
	public BoundsInt(Vector3Int position, Vector3Int size)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000277")]
	[Address(RVA = "0x4DBC1C0", Offset = "0x4DBC1C0", VA = "0x4DBC1C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000278")]
	[Address(RVA = "0x4DBC1D0", Offset = "0x4DBC1D0", VA = "0x4DBC1D0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000279")]
	[Address(RVA = "0x4DBC340", Offset = "0x4DBC340", VA = "0x4DBC340", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027A")]
	[Address(RVA = "0x4DBC3E0", Offset = "0x4DBC3E0", VA = "0x4DBC3E0", Slot = "4")]
	public bool Equals(BoundsInt other)
	{
		return default(bool);
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x4DBC430", Offset = "0x4DBC430", VA = "0x4DBC430", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
