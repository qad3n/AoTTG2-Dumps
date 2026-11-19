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

[Token(Token = "0x20000BF")]
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

	[Token(Token = "0x170000A1")]
	public int x
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003EC")]
		[Address(RVA = "0x68CC860", Offset = "0x68CB860", VA = "0x68CC860")]
		readonly get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003ED")]
		[Address(RVA = "0x68CC870", Offset = "0x68CB870", VA = "0x68CC870")]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	public int y
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003EE")]
		[Address(RVA = "0x68CC880", Offset = "0x68CB880", VA = "0x68CC880")]
		readonly get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003EF")]
		[Address(RVA = "0x68CC890", Offset = "0x68CB890", VA = "0x68CC890")]
		set
		{
		}
	}

	[Token(Token = "0x170000A3")]
	public int width
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003F0")]
		[Address(RVA = "0x68CC8A0", Offset = "0x68CB8A0", VA = "0x68CC8A0")]
		readonly get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003F1")]
		[Address(RVA = "0x68CC8B0", Offset = "0x68CB8B0", VA = "0x68CC8B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A4")]
	public int height
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003F2")]
		[Address(RVA = "0x68CC8C0", Offset = "0x68CB8C0", VA = "0x68CC8C0")]
		readonly get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003F3")]
		[Address(RVA = "0x68CC8D0", Offset = "0x68CB8D0", VA = "0x68CC8D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A5")]
	public readonly int xMin
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003F4")]
		[Address(RVA = "0x68CC8E0", Offset = "0x68CB8E0", VA = "0x68CC8E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A6")]
	public readonly int yMin
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003F5")]
		[Address(RVA = "0x68CC8F0", Offset = "0x68CB8F0", VA = "0x68CC8F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A7")]
	public readonly int xMax
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003F6")]
		[Address(RVA = "0x68CC900", Offset = "0x68CB900", VA = "0x68CC900")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A8")]
	public readonly int yMax
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003F7")]
		[Address(RVA = "0x68CC910", Offset = "0x68CB910", VA = "0x68CC910")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A9")]
	public static RectInt zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003F9")]
		[Address(RVA = "0x68CC930", Offset = "0x68CB930", VA = "0x68CC930")]
		get
		{
			return default(RectInt);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x68CC920", Offset = "0x68CB920", VA = "0x68CC920")]
	public RectInt(int xMin, int yMin, int width, int height)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x68CC980", Offset = "0x68CB980", VA = "0x68CC980")]
	public readonly bool Overlaps(RectInt other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x68CCA90", Offset = "0x68CBA90", VA = "0x68CCA90", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x68CCAE0", Offset = "0x68CBAE0", VA = "0x68CCAE0", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x68CCD50", Offset = "0x68CBD50", VA = "0x68CCD50", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x68CCDC0", Offset = "0x68CBDC0", VA = "0x68CCDC0", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x68CCE60", Offset = "0x68CBE60", VA = "0x68CCE60", Slot = "4")]
	public readonly bool Equals(RectInt other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000400")]
	[Address(RVA = "0x68CCE80", Offset = "0x68CBE80", VA = "0x68CCE80")]
	public readonly bool Equals(in RectInt other)
	{
		return default(bool);
	}
}
