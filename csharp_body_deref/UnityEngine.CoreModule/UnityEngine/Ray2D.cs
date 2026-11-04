// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Ray2D
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x20000BB")]
public struct Ray2D : IFormattable
{
	[Token(Token = "0x40001F7")]
	[FieldOffset(Offset = "0x0")]
	private Vector2 m_Origin;

	[Token(Token = "0x40001F8")]
	[FieldOffset(Offset = "0x8")]
	private Vector2 m_Direction;

	[Token(Token = "0x17000090")]
	public Vector2 origin
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003B2")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		readonly get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003B3")]
		[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000091")]
	public Vector2 direction
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003B4")]
		[Address(RVA = "0x2A88DA0", Offset = "0x2A873A0", VA = "0x182A88DA0")]
		readonly get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003B5")]
		[Address(RVA = "0x2ECFB50", Offset = "0x2ECE150", VA = "0x182ECFB50")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x2ECF8D0", Offset = "0x2ECDED0", VA = "0x182ECF8D0", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x2ECF8E0", Offset = "0x2ECDEE0", VA = "0x182ECF8E0", Slot = "4")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
