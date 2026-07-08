using System;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000120")]
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

	[Token(Token = "0x17000199")]
	public int x
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008B4")]
		[Address(RVA = "0x4AC7FD0", Offset = "0x4AC7FD0", VA = "0x4AC7FD0")]
		get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008B5")]
		[Address(RVA = "0x4AC7FE0", Offset = "0x4AC7FE0", VA = "0x4AC7FE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700019A")]
	public int y
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008B6")]
		[Address(RVA = "0x4AC7FF0", Offset = "0x4AC7FF0", VA = "0x4AC7FF0")]
		get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008B7")]
		[Address(RVA = "0x4AC8000", Offset = "0x4AC8000", VA = "0x4AC8000")]
		set
		{
		}
	}

	[Token(Token = "0x1700019B")]
	public float magnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008B9")]
		[Address(RVA = "0x4AC8020", Offset = "0x4AC8020", VA = "0x4AC8020")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700019C")]
	public static Vector2Int one
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008C4")]
		[Address(RVA = "0x4AC8450", Offset = "0x4AC8450", VA = "0x4AC8450")]
		get
		{
			return default(Vector2Int);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x4AC8010", Offset = "0x4AC8010", VA = "0x4AC8010")]
	public Vector2Int(int x, int y)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x4AC8050", Offset = "0x4AC8050", VA = "0x4AC8050")]
	public static Vector2Int Max(Vector2Int lhs, Vector2Int rhs)
	{
		return default(Vector2Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x4AC8080", Offset = "0x4AC8080", VA = "0x4AC8080")]
	public static implicit operator Vector2(Vector2Int v)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x4AC8090", Offset = "0x4AC8090", VA = "0x4AC8090")]
	public static Vector2Int FloorToInt(Vector2 v)
	{
		return default(Vector2Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x4AC8180", Offset = "0x4AC8180", VA = "0x4AC8180")]
	public static bool operator ==(Vector2Int lhs, Vector2Int rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x4AC81A0", Offset = "0x4AC81A0", VA = "0x4AC81A0")]
	public static bool operator !=(Vector2Int lhs, Vector2Int rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x4AC81C0", Offset = "0x4AC81C0", VA = "0x4AC81C0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x4AC8230", Offset = "0x4AC8230", VA = "0x4AC8230", Slot = "4")]
	public bool Equals(Vector2Int other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x4AC8250", Offset = "0x4AC8250", VA = "0x4AC8250", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x4AC82A0", Offset = "0x4AC82A0", VA = "0x4AC82A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x4AC82B0", Offset = "0x4AC82B0", VA = "0x4AC82B0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
