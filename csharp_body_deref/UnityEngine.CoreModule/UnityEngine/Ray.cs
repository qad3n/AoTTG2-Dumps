using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200009C")]
public struct Ray : IFormattable
{
	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0x0")]
	private Vector3 m_Origin;

	[Token(Token = "0x40001A3")]
	[FieldOffset(Offset = "0xC")]
	private Vector3 m_Direction;

	[Token(Token = "0x17000072")]
	public Vector3 origin
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000288")]
		[Address(RVA = "0x4A95900", Offset = "0x4A95900", VA = "0x4A95900")]
		get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000289")]
		[Address(RVA = "0x4A95910", Offset = "0x4A95910", VA = "0x4A95910")]
		set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public Vector3 direction
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600028A")]
		[Address(RVA = "0x4A95920", Offset = "0x4A95920", VA = "0x4A95920")]
		get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600028B")]
		[Address(RVA = "0x4A95930", Offset = "0x4A95930", VA = "0x4A95930")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000287")]
	[Address(RVA = "0x4A957D0", Offset = "0x4A957D0", VA = "0x4A957D0")]
	public Ray(Vector3 origin, Vector3 direction)
	{
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x4A95A50", Offset = "0x4A95A50", VA = "0x4A95A50")]
	public Vector3 GetPoint(float distance)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028D")]
	[Address(RVA = "0x4A95A80", Offset = "0x4A95A80", VA = "0x4A95A80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028E")]
	[Address(RVA = "0x4A95A90", Offset = "0x4A95A90", VA = "0x4A95A90", Slot = "4")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
