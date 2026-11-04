// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Vector3Int
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
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200014A")]
[DefaultMember("Item")]
[Il2CppEagerStaticClassConstruction]
[UnityEngine.Scripting.UsedByNativeCode]
public struct Vector3Int : IEquatable<Vector3Int>, IFormattable
{
	[Token(Token = "0x400056E")]
	[FieldOffset(Offset = "0x0")]
	private int m_X;

	[Token(Token = "0x400056F")]
	[FieldOffset(Offset = "0x4")]
	private int m_Y;

	[Token(Token = "0x4000570")]
	[FieldOffset(Offset = "0x8")]
	private int m_Z;

	[Token(Token = "0x4000571")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector3Int s_Zero;

	[Token(Token = "0x4000572")]
	[FieldOffset(Offset = "0xC")]
	private static readonly Vector3Int s_One;

	[Token(Token = "0x4000573")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Vector3Int s_Up;

	[Token(Token = "0x4000574")]
	[FieldOffset(Offset = "0x24")]
	private static readonly Vector3Int s_Down;

	[Token(Token = "0x4000575")]
	[FieldOffset(Offset = "0x30")]
	private static readonly Vector3Int s_Left;

	[Token(Token = "0x4000576")]
	[FieldOffset(Offset = "0x3C")]
	private static readonly Vector3Int s_Right;

	[Token(Token = "0x4000577")]
	[FieldOffset(Offset = "0x48")]
	private static readonly Vector3Int s_Forward;

	[Token(Token = "0x4000578")]
	[FieldOffset(Offset = "0x54")]
	private static readonly Vector3Int s_Back;

	[Token(Token = "0x17000202")]
	public int x
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BA7")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		readonly get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BA8")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		set
		{
		}
	}

	[Token(Token = "0x17000203")]
	public int y
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BA9")]
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
		readonly get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BAA")]
		[Address(RVA = "0x57AF00", Offset = "0x579500", VA = "0x18057AF00")]
		set
		{
		}
	}

	[Token(Token = "0x17000204")]
	public int z
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BAB")]
		[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
		readonly get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BAC")]
		[Address(RVA = "0x57AF20", Offset = "0x579520", VA = "0x18057AF20")]
		set
		{
		}
	}

	[Token(Token = "0x17000205")]
	public static Vector3Int zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BBD")]
		[Address(RVA = "0x2F2CD90", Offset = "0x2F2B390", VA = "0x182F2CD90")]
		get
		{
			return default(Vector3Int);
		}
	}

	[Token(Token = "0x17000206")]
	public static Vector3Int one
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BBE")]
		[Address(RVA = "0x2F2CD40", Offset = "0x2F2B340", VA = "0x182F2CD40")]
		get
		{
			return default(Vector3Int);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x10467A0", Offset = "0x1044DA0", VA = "0x1810467A0")]
	public Vector3Int(int x, int y, int z)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x2F2CAD0", Offset = "0x2F2B0D0", VA = "0x182F2CAD0")]
	public static Vector3Int Min(Vector3Int lhs, Vector3Int rhs)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x2F2CA80", Offset = "0x2F2B080", VA = "0x182F2CA80")]
	public static Vector3Int Max(Vector3Int lhs, Vector3Int rhs)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x29E02C0", Offset = "0x29DE8C0", VA = "0x1829E02C0")]
	public static implicit operator Vector3(Vector3Int v)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x2F2C980", Offset = "0x2F2AF80", VA = "0x182F2C980")]
	public static Vector3Int FloorToInt(Vector3 v)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x2A2C470", Offset = "0x2A2AA70", VA = "0x182A2C470")]
	public static Vector3Int operator +(Vector3Int a, Vector3Int b)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x2A2CB60", Offset = "0x2A2B160", VA = "0x182A2CB60")]
	public static Vector3Int operator -(Vector3Int a, Vector3Int b)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x2A2CA60", Offset = "0x2A2B060", VA = "0x182A2CA60")]
	public static Vector3Int operator *(Vector3Int a, int b)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x2AA15F0", Offset = "0x2A9FBF0", VA = "0x182AA15F0")]
	public static Vector3Int operator /(Vector3Int a, int b)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB6")]
	[Address(RVA = "0x2F2C960", Offset = "0x2F2AF60", VA = "0x182F2C960")]
	public static bool operator ==(Vector3Int lhs, Vector3Int rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x2F2C8A0", Offset = "0x2F2AEA0", VA = "0x182F2C8A0", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x2F2C960", Offset = "0x2F2AF60", VA = "0x182F2C960", Slot = "4")]
	public readonly bool Equals(Vector3Int other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB9")]
	[Address(RVA = "0x2F2C960", Offset = "0x2F2AF60", VA = "0x182F2C960")]
	public readonly bool Equals(in Vector3Int other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0xB1F0E0", Offset = "0xB1D6E0", VA = "0x180B1F0E0", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x2F2CB20", Offset = "0x2F2B120", VA = "0x182F2CB20", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x2F2CB30", Offset = "0x2F2B130", VA = "0x182F2CB30", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
