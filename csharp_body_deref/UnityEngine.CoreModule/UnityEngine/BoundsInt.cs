// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.BoundsInt
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000B7")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct BoundsInt : IEquatable<BoundsInt>, IFormattable
{
	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0x0")]
	private Vector3Int m_Position;

	[Token(Token = "0x40001F1")]
	[FieldOffset(Offset = "0xC")]
	private Vector3Int m_Size;

	[Token(Token = "0x1700008A")]
	public Vector3Int position
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600038A")]
		[Address(RVA = "0x180F7A0", Offset = "0x180DDA0", VA = "0x18180F7A0")]
		readonly get
		{
			return default(Vector3Int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600038B")]
		[Address(RVA = "0x2B889E0", Offset = "0x2B86FE0", VA = "0x182B889E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008B")]
	public Vector3Int size
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600038C")]
		[Address(RVA = "0x180F8B0", Offset = "0x180DEB0", VA = "0x18180F8B0")]
		readonly get
		{
			return default(Vector3Int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600038D")]
		[Address(RVA = "0x2EBC190", Offset = "0x2EBA790", VA = "0x182EBC190")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038E")]
	[Address(RVA = "0x565080", Offset = "0x563680", VA = "0x180565080")]
	public BoundsInt(Vector3Int position, Vector3Int size)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038F")]
	[Address(RVA = "0x2EBC180", Offset = "0x2EBA780", VA = "0x182EBC180", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000390")]
	[Address(RVA = "0x2EBC0A0", Offset = "0x2EBA6A0", VA = "0x182EBC0A0", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000391")]
	[Address(RVA = "0x2EBBF00", Offset = "0x2EBA500", VA = "0x182EBBF00", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000392")]
	[Address(RVA = "0x2EBBEC0", Offset = "0x2EBA4C0", VA = "0x182EBBEC0", Slot = "4")]
	public readonly bool Equals(BoundsInt other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000393")]
	[Address(RVA = "0x2EBBEC0", Offset = "0x2EBA4C0", VA = "0x182EBBEC0")]
	public readonly bool Equals(in BoundsInt other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000394")]
	[Address(RVA = "0x2EBC000", Offset = "0x2EBA600", VA = "0x182EBC000", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}
}
