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

[Token(Token = "0x20000BC")]
public struct Ray : IFormattable
{
	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0x0")]
	private Vector3 m_Origin;

	[Token(Token = "0x40001F6")]
	[FieldOffset(Offset = "0xC")]
	private Vector3 m_Direction;

	[Token(Token = "0x1700008F")]
	public Vector3 origin
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003B1")]
		[Address(RVA = "0x68CB030", Offset = "0x68CA030", VA = "0x68CB030")]
		readonly get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003B2")]
		[Address(RVA = "0x68CB040", Offset = "0x68CA040", VA = "0x68CB040")]
		set
		{
		}
	}

	[Token(Token = "0x17000090")]
	public Vector3 direction
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003B3")]
		[Address(RVA = "0x68CB050", Offset = "0x68CA050", VA = "0x68CB050")]
		readonly get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003B4")]
		[Address(RVA = "0x68CB060", Offset = "0x68CA060", VA = "0x68CB060")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x68CAF20", Offset = "0x68C9F20", VA = "0x68CAF20")]
	public Ray(Vector3 origin, Vector3 direction)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x68CB170", Offset = "0x68CA170", VA = "0x68CB170")]
	public readonly Vector3 GetPoint(float distance)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x68CB1A0", Offset = "0x68CA1A0", VA = "0x68CB1A0", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x68CB1B0", Offset = "0x68CA1B0", VA = "0x68CB1B0", Slot = "4")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
