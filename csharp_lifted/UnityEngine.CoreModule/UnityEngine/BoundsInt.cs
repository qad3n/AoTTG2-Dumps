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

[Token(Token = "0x20000B9")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct BoundsInt : IEquatable<BoundsInt>, IFormattable
{
	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0x0")]
	private Vector3Int m_Position;

	[Token(Token = "0x40001F1")]
	[FieldOffset(Offset = "0xC")]
	private Vector3Int m_Size;

	[Token(Token = "0x1700008B")]
	public Vector3Int position
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000390")]
		[Address(RVA = "0x68C9D10", Offset = "0x68C8D10", VA = "0x68C9D10")]
		readonly get
		{
			return default(Vector3Int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000391")]
		[Address(RVA = "0x68C9D20", Offset = "0x68C8D20", VA = "0x68C9D20")]
		set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	public Vector3Int size
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000392")]
		[Address(RVA = "0x68C9D30", Offset = "0x68C8D30", VA = "0x68C9D30")]
		readonly get
		{
			return default(Vector3Int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000393")]
		[Address(RVA = "0x68C9D40", Offset = "0x68C8D40", VA = "0x68C9D40")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000394")]
	[Address(RVA = "0x68C9D50", Offset = "0x68C8D50", VA = "0x68C9D50")]
	public BoundsInt(Vector3Int position, Vector3Int size)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000395")]
	[Address(RVA = "0x68C9D60", Offset = "0x68C8D60", VA = "0x68C9D60", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000396")]
	[Address(RVA = "0x68C9D70", Offset = "0x68C8D70", VA = "0x68C9D70", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000397")]
	[Address(RVA = "0x68C9E40", Offset = "0x68C8E40", VA = "0x68C9E40", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000398")]
	[Address(RVA = "0x68C9EE0", Offset = "0x68C8EE0", VA = "0x68C9EE0", Slot = "4")]
	public readonly bool Equals(BoundsInt other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000399")]
	[Address(RVA = "0x68C9F30", Offset = "0x68C8F30", VA = "0x68C9F30")]
	public readonly bool Equals(in BoundsInt other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039A")]
	[Address(RVA = "0x68C9F80", Offset = "0x68C8F80", VA = "0x68C9F80", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}
}
