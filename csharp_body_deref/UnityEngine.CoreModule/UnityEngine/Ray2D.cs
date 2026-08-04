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

[Token(Token = "0x200009D")]
public struct Ray2D : IFormattable
{
	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x0")]
	private Vector2 m_Origin;

	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x8")]
	private Vector2 m_Direction;

	[Token(Token = "0x17000074")]
	public Vector2 origin
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600028F")]
		[Address(RVA = "0x4DBD450", Offset = "0x4DBD450", VA = "0x4DBD450")]
		get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000290")]
		[Address(RVA = "0x4DBD460", Offset = "0x4DBD460", VA = "0x4DBD460")]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public Vector2 direction
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000291")]
		[Address(RVA = "0x4DBD470", Offset = "0x4DBD470", VA = "0x4DBD470")]
		get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000292")]
		[Address(RVA = "0x4DBD480", Offset = "0x4DBD480", VA = "0x4DBD480")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000293")]
	[Address(RVA = "0x4DBD580", Offset = "0x4DBD580", VA = "0x4DBD580", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000294")]
	[Address(RVA = "0x4DBD590", Offset = "0x4DBD590", VA = "0x4DBD590", Slot = "4")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
