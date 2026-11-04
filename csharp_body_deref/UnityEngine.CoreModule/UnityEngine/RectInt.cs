// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RectInt
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000BD")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct RectInt : IEquatable<RectInt>, IFormattable
{
	[Token(Token = "0x40001FE")]
	[FieldOffset(Offset = "0x0")]
	private int m_XMin;

	[Token(Token = "0x40001FF")]
	[FieldOffset(Offset = "0x4")]
	private int m_YMin;

	[Token(Token = "0x4000200")]
	[FieldOffset(Offset = "0x8")]
	private int m_Width;

	[Token(Token = "0x4000201")]
	[FieldOffset(Offset = "0xC")]
	private int m_Height;

	[Token(Token = "0x4000202")]
	[FieldOffset(Offset = "0x0")]
	private static readonly RectInt kZero;

	[Token(Token = "0x170000A0")]
	public int x
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003E6")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		readonly get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003E7")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		set
		{
		}
	}

	[Token(Token = "0x170000A1")]
	public int y
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003E8")]
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
		readonly get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003E9")]
		[Address(RVA = "0x57AF00", Offset = "0x579500", VA = "0x18057AF00")]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	public int width
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003EA")]
		[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
		readonly get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003EB")]
		[Address(RVA = "0x57AF20", Offset = "0x579520", VA = "0x18057AF20")]
		set
		{
		}
	}

	[Token(Token = "0x170000A3")]
	public int height
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003EC")]
		[Address(RVA = "0x57AEF0", Offset = "0x5794F0", VA = "0x18057AEF0")]
		readonly get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003ED")]
		[Address(RVA = "0x57AF30", Offset = "0x579530", VA = "0x18057AF30")]
		set
		{
		}
	}

	[Token(Token = "0x170000A4")]
	public readonly int xMin
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003EE")]
		[Address(RVA = "0x2ED0980", Offset = "0x2ECEF80", VA = "0x182ED0980")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A5")]
	public readonly int yMin
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003EF")]
		[Address(RVA = "0x2ED09C0", Offset = "0x2ECEFC0", VA = "0x182ED09C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A6")]
	public readonly int xMax
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003F0")]
		[Address(RVA = "0x2ED0960", Offset = "0x2ECEF60", VA = "0x182ED0960")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A7")]
	public readonly int yMax
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003F1")]
		[Address(RVA = "0x2ED09A0", Offset = "0x2ECEFA0", VA = "0x182ED09A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A8")]
	public static RectInt zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003F3")]
		[Address(RVA = "0x2ED09E0", Offset = "0x2ECEFE0", VA = "0x182ED09E0")]
		get
		{
			return default(RectInt);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x1055D90", Offset = "0x1054390", VA = "0x181055D90")]
	public RectInt(int xMin, int yMin, int width, int height)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x2ED04E0", Offset = "0x2ECEAE0", VA = "0x182ED04E0")]
	public readonly bool Overlaps(RectInt other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x2ED08D0", Offset = "0x2ECEED0", VA = "0x182ED08D0", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x2ED0630", Offset = "0x2ECEC30", VA = "0x182ED0630", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x2ED0480", Offset = "0x2ECEA80", VA = "0x182ED0480", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x2ED0360", Offset = "0x2ECE960", VA = "0x182ED0360", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x2ED0450", Offset = "0x2ECEA50", VA = "0x182ED0450", Slot = "4")]
	public readonly bool Equals(RectInt other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x2ED0450", Offset = "0x2ECEA50", VA = "0x182ED0450")]
	public readonly bool Equals(in RectInt other)
	{
		return default(bool);
	}
}
