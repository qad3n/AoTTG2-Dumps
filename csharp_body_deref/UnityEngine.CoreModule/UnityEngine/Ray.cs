// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Ray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x20000BA")]
public struct Ray : IFormattable
{
	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0x0")]
	private Vector3 m_Origin;

	[Token(Token = "0x40001F6")]
	[FieldOffset(Offset = "0xC")]
	private Vector3 m_Direction;

	[Token(Token = "0x1700008E")]
	public Vector3 origin
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003AB")]
		[Address(RVA = "0x180F7A0", Offset = "0x180DDA0", VA = "0x18180F7A0")]
		readonly get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003AC")]
		[Address(RVA = "0x2B889E0", Offset = "0x2B86FE0", VA = "0x182B889E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008F")]
	public Vector3 direction
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003AD")]
		[Address(RVA = "0x180F8B0", Offset = "0x180DEB0", VA = "0x18180F8B0")]
		readonly get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003AE")]
		[Address(RVA = "0x2ECFCE0", Offset = "0x2ECE2E0", VA = "0x182ECFCE0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x2ECFCB0", Offset = "0x2ECE2B0", VA = "0x182ECFCB0")]
	public Ray(Vector3 origin, Vector3 direction)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x2ECFB60", Offset = "0x2ECE160", VA = "0x182ECFB60")]
	public readonly Vector3 GetPoint(float distance)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x2ECFBA0", Offset = "0x2ECE1A0", VA = "0x182ECFBA0", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x2ECFBB0", Offset = "0x2ECE1B0", VA = "0x182ECFBB0", Slot = "4")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
