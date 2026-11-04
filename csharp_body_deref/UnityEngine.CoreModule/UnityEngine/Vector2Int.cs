// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Vector2Int
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000149")]
[DefaultMember("Item")]
[UnityEngine.Bindings.NativeType("Runtime/Math/Vector2Int.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[Il2CppEagerStaticClassConstruction]
public struct Vector2Int : IEquatable<Vector2Int>, IFormattable
{
	[Token(Token = "0x4000566")]
	[FieldOffset(Offset = "0x0")]
	private int m_X;

	[Token(Token = "0x4000567")]
	[FieldOffset(Offset = "0x4")]
	private int m_Y;

	[Token(Token = "0x4000568")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector2Int s_Zero;

	[Token(Token = "0x4000569")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Vector2Int s_One;

	[Token(Token = "0x400056A")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Vector2Int s_Up;

	[Token(Token = "0x400056B")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Vector2Int s_Down;

	[Token(Token = "0x400056C")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Vector2Int s_Left;

	[Token(Token = "0x400056D")]
	[FieldOffset(Offset = "0x28")]
	private static readonly Vector2Int s_Right;

	[Token(Token = "0x170001FD")]
	public int x
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B90")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		readonly get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B91")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		set
		{
		}
	}

	[Token(Token = "0x170001FE")]
	public int y
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B92")]
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
		readonly get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B93")]
		[Address(RVA = "0x57AF00", Offset = "0x579500", VA = "0x18057AF00")]
		set
		{
		}
	}

	[Token(Token = "0x170001FF")]
	public readonly float magnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B95")]
		[Address(RVA = "0x2F0A8E0", Offset = "0x2F08EE0", VA = "0x182F0A8E0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000200")]
	public static Vector2Int zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BA4")]
		[Address(RVA = "0x2F0A950", Offset = "0x2F08F50", VA = "0x182F0A950")]
		get
		{
			return default(Vector2Int);
		}
	}

	[Token(Token = "0x17000201")]
	public static Vector2Int one
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BA5")]
		[Address(RVA = "0x2F0A910", Offset = "0x2F08F10", VA = "0x182F0A910")]
		get
		{
			return default(Vector2Int);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B94")]
	[Address(RVA = "0xACCA30", Offset = "0xACB030", VA = "0x180ACCA30")]
	public Vector2Int(int x, int y)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B96")]
	[Address(RVA = "0x29F3050", Offset = "0x29F1650", VA = "0x1829F3050")]
	public static Vector2Int Max(Vector2Int lhs, Vector2Int rhs)
	{
		return default(Vector2Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B97")]
	[Address(RVA = "0x29DF320", Offset = "0x29DD920", VA = "0x1829DF320")]
	public static implicit operator Vector2(Vector2Int v)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x2F0A620", Offset = "0x2F08C20", VA = "0x182F0A620")]
	public static Vector2Int FloorToInt(Vector2 v)
	{
		return default(Vector2Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x2A99A90", Offset = "0x2A98090", VA = "0x182A99A90")]
	public static Vector2Int operator +(Vector2Int a, Vector2Int b)
	{
		return default(Vector2Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x2A99FC0", Offset = "0x2A985C0", VA = "0x182A99FC0")]
	public static Vector2Int operator *(int a, Vector2Int b)
	{
		return default(Vector2Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x2A99C10", Offset = "0x2A98210", VA = "0x182A99C10")]
	public static Vector2Int operator /(Vector2Int a, int b)
	{
		return default(Vector2Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x2F0A990", Offset = "0x2F08F90", VA = "0x182F0A990")]
	public static bool operator ==(Vector2Int lhs, Vector2Int rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x2F0A9B0", Offset = "0x2F08FB0", VA = "0x182F0A9B0")]
	public static bool operator !=(Vector2Int lhs, Vector2Int rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x2F0A560", Offset = "0x2F08B60", VA = "0x182F0A560", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x2ED5CB0", Offset = "0x2ED42B0", VA = "0x182ED5CB0", Slot = "4")]
	public readonly bool Equals(Vector2Int other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x2F0A600", Offset = "0x2F08C00", VA = "0x182F0A600")]
	public readonly bool Equals(in Vector2Int other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x2F0A6E0", Offset = "0x2F08CE0", VA = "0x182F0A6E0", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x2F0A7E0", Offset = "0x2F08DE0", VA = "0x182F0A7E0", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x2F0A700", Offset = "0x2F08D00", VA = "0x182F0A700", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
