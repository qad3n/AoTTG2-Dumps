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

[Token(Token = "0x20000BD")]
public struct Ray2D : IFormattable
{
	[Token(Token = "0x40001F7")]
	[FieldOffset(Offset = "0x0")]
	private Vector2 m_Origin;

	[Token(Token = "0x40001F8")]
	[FieldOffset(Offset = "0x8")]
	private Vector2 m_Direction;

	[Token(Token = "0x17000091")]
	public Vector2 origin
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003B8")]
		[Address(RVA = "0x68CB2A0", Offset = "0x68CA2A0", VA = "0x68CB2A0")]
		readonly get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003B9")]
		[Address(RVA = "0x68CB2B0", Offset = "0x68CA2B0", VA = "0x68CB2B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000092")]
	public Vector2 direction
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003BA")]
		[Address(RVA = "0x68CB2C0", Offset = "0x68CA2C0", VA = "0x68CB2C0")]
		readonly get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003BB")]
		[Address(RVA = "0x68CB2D0", Offset = "0x68CA2D0", VA = "0x68CB2D0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x68CB3B0", Offset = "0x68CA3B0", VA = "0x68CB3B0", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x68CB3C0", Offset = "0x68CA3C0", VA = "0x68CB3C0", Slot = "4")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
