// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Vector2Int
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000123")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeType("Runtime/Math/Vector2Int.h")]
[Il2CppEagerStaticClassConstruction]
[DefaultMember("Item")]
public struct Vector2Int : IEquatable<Vector2Int>, IFormattable
{
	[Token(Token = "0x40004FE")]
	[FieldOffset(Offset = "0x0")]
	private int m_X;

	[Token(Token = "0x40004FF")]
	[FieldOffset(Offset = "0x4")]
	private int m_Y;

	[Token(Token = "0x4000500")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector2Int s_Zero;

	[Token(Token = "0x4000501")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Vector2Int s_One;

	[Token(Token = "0x4000502")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Vector2Int s_Up;

	[Token(Token = "0x4000503")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Vector2Int s_Down;

	[Token(Token = "0x4000504")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Vector2Int s_Left;

	[Token(Token = "0x4000505")]
	[FieldOffset(Offset = "0x28")]
	private static readonly Vector2Int s_Right;

	[Token(Token = "0x1700019A")]
	public int x
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008B6")]
		[Address(RVA = "0x4DEF900", Offset = "0x4DEF900", VA = "0x4DEF900")]
		get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008B7")]
		[Address(RVA = "0x4DEF910", Offset = "0x4DEF910", VA = "0x4DEF910")]
		set
		{
		}
	}

	[Token(Token = "0x1700019B")]
	public int y
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008B8")]
		[Address(RVA = "0x4DEF920", Offset = "0x4DEF920", VA = "0x4DEF920")]
		get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008B9")]
		[Address(RVA = "0x4DEF930", Offset = "0x4DEF930", VA = "0x4DEF930")]
		set
		{
		}
	}

	[Token(Token = "0x1700019C")]
	public float magnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008BB")]
		[Address(RVA = "0x4DEF950", Offset = "0x4DEF950", VA = "0x4DEF950")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700019D")]
	public static Vector2Int one
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008C6")]
		[Address(RVA = "0x4DEFD80", Offset = "0x4DEFD80", VA = "0x4DEFD80")]
		get
		{
			return default(Vector2Int);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x4DEF940", Offset = "0x4DEF940", VA = "0x4DEF940")]
	public Vector2Int(int x, int y)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x4DEF980", Offset = "0x4DEF980", VA = "0x4DEF980")]
	public static Vector2Int Max(Vector2Int lhs, Vector2Int rhs)
	{
		return default(Vector2Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x4DEF9B0", Offset = "0x4DEF9B0", VA = "0x4DEF9B0")]
	public static implicit operator Vector2(Vector2Int v)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x4DEF9C0", Offset = "0x4DEF9C0", VA = "0x4DEF9C0")]
	public static Vector2Int FloorToInt(Vector2 v)
	{
		return default(Vector2Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x4DEFAB0", Offset = "0x4DEFAB0", VA = "0x4DEFAB0")]
	public static bool operator ==(Vector2Int lhs, Vector2Int rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x4DEFAD0", Offset = "0x4DEFAD0", VA = "0x4DEFAD0")]
	public static bool operator !=(Vector2Int lhs, Vector2Int rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x4DEFAF0", Offset = "0x4DEFAF0", VA = "0x4DEFAF0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x4DEFB60", Offset = "0x4DEFB60", VA = "0x4DEFB60", Slot = "4")]
	public bool Equals(Vector2Int other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x4DEFB80", Offset = "0x4DEFB80", VA = "0x4DEFB80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x4DEFBD0", Offset = "0x4DEFBD0", VA = "0x4DEFBD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x4DEFBE0", Offset = "0x4DEFBE0", VA = "0x4DEFBE0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
