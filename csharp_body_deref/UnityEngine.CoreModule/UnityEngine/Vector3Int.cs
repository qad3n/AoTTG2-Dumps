// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Vector3Int
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
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000124")]
[Il2CppEagerStaticClassConstruction]
[UnityEngine.Scripting.UsedByNativeCode]
[DefaultMember("Item")]
public struct Vector3Int : IEquatable<Vector3Int>, IFormattable
{
	[Token(Token = "0x4000506")]
	[FieldOffset(Offset = "0x0")]
	private int m_X;

	[Token(Token = "0x4000507")]
	[FieldOffset(Offset = "0x4")]
	private int m_Y;

	[Token(Token = "0x4000508")]
	[FieldOffset(Offset = "0x8")]
	private int m_Z;

	[Token(Token = "0x4000509")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector3Int s_Zero;

	[Token(Token = "0x400050A")]
	[FieldOffset(Offset = "0xC")]
	private static readonly Vector3Int s_One;

	[Token(Token = "0x400050B")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Vector3Int s_Up;

	[Token(Token = "0x400050C")]
	[FieldOffset(Offset = "0x24")]
	private static readonly Vector3Int s_Down;

	[Token(Token = "0x400050D")]
	[FieldOffset(Offset = "0x30")]
	private static readonly Vector3Int s_Left;

	[Token(Token = "0x400050E")]
	[FieldOffset(Offset = "0x3C")]
	private static readonly Vector3Int s_Right;

	[Token(Token = "0x400050F")]
	[FieldOffset(Offset = "0x48")]
	private static readonly Vector3Int s_Forward;

	[Token(Token = "0x4000510")]
	[FieldOffset(Offset = "0x54")]
	private static readonly Vector3Int s_Back;

	[Token(Token = "0x1700019E")]
	public int x
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008C8")]
		[Address(RVA = "0x4DEFE50", Offset = "0x4DEFE50", VA = "0x4DEFE50")]
		get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008C9")]
		[Address(RVA = "0x4DEFE60", Offset = "0x4DEFE60", VA = "0x4DEFE60")]
		set
		{
		}
	}

	[Token(Token = "0x1700019F")]
	public int y
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008CA")]
		[Address(RVA = "0x4DEFE70", Offset = "0x4DEFE70", VA = "0x4DEFE70")]
		get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008CB")]
		[Address(RVA = "0x4DEFE80", Offset = "0x4DEFE80", VA = "0x4DEFE80")]
		set
		{
		}
	}

	[Token(Token = "0x170001A0")]
	public int z
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008CC")]
		[Address(RVA = "0x4DEFE90", Offset = "0x4DEFE90", VA = "0x4DEFE90")]
		get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008CD")]
		[Address(RVA = "0x4DEFEA0", Offset = "0x4DEFEA0", VA = "0x4DEFEA0")]
		set
		{
		}
	}

	[Token(Token = "0x170001A1")]
	public static Vector3Int zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008DD")]
		[Address(RVA = "0x4DF0340", Offset = "0x4DF0340", VA = "0x4DF0340")]
		get
		{
			return default(Vector3Int);
		}
	}

	[Token(Token = "0x170001A2")]
	public static Vector3Int one
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008DE")]
		[Address(RVA = "0x4DF0380", Offset = "0x4DF0380", VA = "0x4DF0380")]
		get
		{
			return default(Vector3Int);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x4DEFEB0", Offset = "0x4DEFEB0", VA = "0x4DEFEB0")]
	public Vector3Int(int x, int y, int z)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x4DEFEC0", Offset = "0x4DEFEC0", VA = "0x4DEFEC0")]
	public static Vector3Int Min(Vector3Int lhs, Vector3Int rhs)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x4DEFEF0", Offset = "0x4DEFEF0", VA = "0x4DEFEF0")]
	public static Vector3Int Max(Vector3Int lhs, Vector3Int rhs)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x4DEFF20", Offset = "0x4DEFF20", VA = "0x4DEFF20")]
	public static implicit operator Vector3(Vector3Int v)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x4DEFF40", Offset = "0x4DEFF40", VA = "0x4DEFF40")]
	public static Vector3Int operator +(Vector3Int a, Vector3Int b)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x4DEFF70", Offset = "0x4DEFF70", VA = "0x4DEFF70")]
	public static Vector3Int operator -(Vector3Int a, Vector3Int b)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x4DEFFA0", Offset = "0x4DEFFA0", VA = "0x4DEFFA0")]
	public static Vector3Int operator *(Vector3Int a, int b)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x4DEFFC0", Offset = "0x4DEFFC0", VA = "0x4DEFFC0")]
	public static Vector3Int operator /(Vector3Int a, int b)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x4DEFFF0", Offset = "0x4DEFFF0", VA = "0x4DEFFF0")]
	public static bool operator ==(Vector3Int lhs, Vector3Int rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x4DF0010", Offset = "0x4DF0010", VA = "0x4DF0010")]
	public static bool operator !=(Vector3Int lhs, Vector3Int rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x4DF0030", Offset = "0x4DF0030", VA = "0x4DF0030", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x4DF00B0", Offset = "0x4DF00B0", VA = "0x4DF00B0", Slot = "4")]
	public bool Equals(Vector3Int other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x4DF00D0", Offset = "0x4DF00D0", VA = "0x4DF00D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x4DF0140", Offset = "0x4DF0140", VA = "0x4DF0140", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x4DF0150", Offset = "0x4DF0150", VA = "0x4DF0150", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
