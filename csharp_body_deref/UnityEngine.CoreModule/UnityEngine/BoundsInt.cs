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
		[Address(RVA = "0x4A94950", Offset = "0x4A94950", VA = "0x4A94950")]
		get
		{
			return default(Vector3Int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000273")]
		[Address(RVA = "0x4A94960", Offset = "0x4A94960", VA = "0x4A94960")]
		set
		{
		}
	}

	[Token(Token = "0x17000070")]
	public Vector3Int size
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000274")]
		[Address(RVA = "0x4A94970", Offset = "0x4A94970", VA = "0x4A94970")]
		get
		{
			return default(Vector3Int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000275")]
		[Address(RVA = "0x4A94980", Offset = "0x4A94980", VA = "0x4A94980")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000276")]
	[Address(RVA = "0x4A94990", Offset = "0x4A94990", VA = "0x4A94990")]
	public BoundsInt(Vector3Int position, Vector3Int size)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000277")]
	[Address(RVA = "0x4A949A0", Offset = "0x4A949A0", VA = "0x4A949A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000278")]
	[Address(RVA = "0x4A949B0", Offset = "0x4A949B0", VA = "0x4A949B0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000279")]
	[Address(RVA = "0x4A94B20", Offset = "0x4A94B20", VA = "0x4A94B20", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600027A")]
	[Address(RVA = "0x4A94BC0", Offset = "0x4A94BC0", VA = "0x4A94BC0", Slot = "4")]
	public bool Equals(BoundsInt other)
	{
		return default(bool);
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x4A94C10", Offset = "0x4A94C10", VA = "0x4A94C10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
