// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RectInt
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

[Token(Token = "0x200009F")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct RectInt : IEquatable<RectInt>, IFormattable
{
	[Token(Token = "0x40001AA")]
	[FieldOffset(Offset = "0x0")]
	private int m_XMin;

	[Token(Token = "0x40001AB")]
	[FieldOffset(Offset = "0x4")]
	private int m_YMin;

	[Token(Token = "0x40001AC")]
	[FieldOffset(Offset = "0x8")]
	private int m_Width;

	[Token(Token = "0x40001AD")]
	[FieldOffset(Offset = "0xC")]
	private int m_Height;

	[Token(Token = "0x17000084")]
	public int x
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002C0")]
		[Address(RVA = "0x4DBE0C0", Offset = "0x4DBE0C0", VA = "0x4DBE0C0")]
		get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002C1")]
		[Address(RVA = "0x4DBE0D0", Offset = "0x4DBE0D0", VA = "0x4DBE0D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000085")]
	public int y
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002C2")]
		[Address(RVA = "0x4DBE0E0", Offset = "0x4DBE0E0", VA = "0x4DBE0E0")]
		get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002C3")]
		[Address(RVA = "0x4DBE0F0", Offset = "0x4DBE0F0", VA = "0x4DBE0F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public int width
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002C4")]
		[Address(RVA = "0x4DBE100", Offset = "0x4DBE100", VA = "0x4DBE100")]
		get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002C5")]
		[Address(RVA = "0x4DBE110", Offset = "0x4DBE110", VA = "0x4DBE110")]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	public int height
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002C6")]
		[Address(RVA = "0x4DBE120", Offset = "0x4DBE120", VA = "0x4DBE120")]
		get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002C7")]
		[Address(RVA = "0x4DBE130", Offset = "0x4DBE130", VA = "0x4DBE130")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	public int xMin
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002C8")]
		[Address(RVA = "0x4DBE140", Offset = "0x4DBE140", VA = "0x4DBE140")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000089")]
	public int yMin
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002C9")]
		[Address(RVA = "0x4DBE1A0", Offset = "0x4DBE1A0", VA = "0x4DBE1A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008A")]
	public int xMax
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x4DBE200", Offset = "0x4DBE200", VA = "0x4DBE200")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008B")]
	public int yMax
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x4DBE260", Offset = "0x4DBE260", VA = "0x4DBE260")]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x4DBE2C0", Offset = "0x4DBE2C0", VA = "0x4DBE2C0")]
	public RectInt(int xMin, int yMin, int width, int height)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x4DBE2D0", Offset = "0x4DBE2D0", VA = "0x4DBE2D0")]
	public bool Overlaps(RectInt other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x4DBE5B0", Offset = "0x4DBE5B0", VA = "0x4DBE5B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x4DBE5C0", Offset = "0x4DBE5C0", VA = "0x4DBE5C0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x4DBE800", Offset = "0x4DBE800", VA = "0x4DBE800", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x4DBE8A0", Offset = "0x4DBE8A0", VA = "0x4DBE8A0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x4DBE920", Offset = "0x4DBE920", VA = "0x4DBE920", Slot = "4")]
	public bool Equals(RectInt other)
	{
		return default(bool);
	}
}
