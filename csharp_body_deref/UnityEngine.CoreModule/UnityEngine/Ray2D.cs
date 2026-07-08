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
		[Address(RVA = "0x4A95C30", Offset = "0x4A95C30", VA = "0x4A95C30")]
		get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000290")]
		[Address(RVA = "0x4A95C40", Offset = "0x4A95C40", VA = "0x4A95C40")]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public Vector2 direction
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000291")]
		[Address(RVA = "0x4A95C50", Offset = "0x4A95C50", VA = "0x4A95C50")]
		get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000292")]
		[Address(RVA = "0x4A95C60", Offset = "0x4A95C60", VA = "0x4A95C60")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000293")]
	[Address(RVA = "0x4A95D60", Offset = "0x4A95D60", VA = "0x4A95D60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000294")]
	[Address(RVA = "0x4A95D70", Offset = "0x4A95D70", VA = "0x4A95D70", Slot = "4")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
