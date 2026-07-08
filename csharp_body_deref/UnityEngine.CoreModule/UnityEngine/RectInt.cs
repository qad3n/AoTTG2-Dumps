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
		[Address(RVA = "0x4A968A0", Offset = "0x4A968A0", VA = "0x4A968A0")]
		get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002C1")]
		[Address(RVA = "0x4A968B0", Offset = "0x4A968B0", VA = "0x4A968B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000085")]
	public int y
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002C2")]
		[Address(RVA = "0x4A968C0", Offset = "0x4A968C0", VA = "0x4A968C0")]
		get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002C3")]
		[Address(RVA = "0x4A968D0", Offset = "0x4A968D0", VA = "0x4A968D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public int width
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002C4")]
		[Address(RVA = "0x4A968E0", Offset = "0x4A968E0", VA = "0x4A968E0")]
		get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002C5")]
		[Address(RVA = "0x4A968F0", Offset = "0x4A968F0", VA = "0x4A968F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	public int height
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002C6")]
		[Address(RVA = "0x4A96900", Offset = "0x4A96900", VA = "0x4A96900")]
		get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002C7")]
		[Address(RVA = "0x4A96910", Offset = "0x4A96910", VA = "0x4A96910")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	public int xMin
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002C8")]
		[Address(RVA = "0x4A96920", Offset = "0x4A96920", VA = "0x4A96920")]
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
		[Address(RVA = "0x4A96980", Offset = "0x4A96980", VA = "0x4A96980")]
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
		[Address(RVA = "0x4A969E0", Offset = "0x4A969E0", VA = "0x4A969E0")]
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
		[Address(RVA = "0x4A96A40", Offset = "0x4A96A40", VA = "0x4A96A40")]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x4A96AA0", Offset = "0x4A96AA0", VA = "0x4A96AA0")]
	public RectInt(int xMin, int yMin, int width, int height)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x4A96AB0", Offset = "0x4A96AB0", VA = "0x4A96AB0")]
	public bool Overlaps(RectInt other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x4A96D90", Offset = "0x4A96D90", VA = "0x4A96D90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x4A96DA0", Offset = "0x4A96DA0", VA = "0x4A96DA0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x4A96FE0", Offset = "0x4A96FE0", VA = "0x4A96FE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x4A97080", Offset = "0x4A97080", VA = "0x4A97080", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x4A97100", Offset = "0x4A97100", VA = "0x4A97100", Slot = "4")]
	public bool Equals(RectInt other)
	{
		return default(bool);
	}
}
