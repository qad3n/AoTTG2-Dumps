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

[Token(Token = "0x200014B")]
[DefaultMember("Item")]
[Il2CppEagerStaticClassConstruction]
[UnityEngine.Scripting.UsedByNativeCode]
public struct Vector3Int : IEquatable<Vector3Int>, IFormattable
{
	[Token(Token = "0x4000573")]
	[FieldOffset(Offset = "0x0")]
	private int m_X;

	[Token(Token = "0x4000574")]
	[FieldOffset(Offset = "0x4")]
	private int m_Y;

	[Token(Token = "0x4000575")]
	[FieldOffset(Offset = "0x8")]
	private int m_Z;

	[Token(Token = "0x4000576")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector3Int s_Zero;

	[Token(Token = "0x4000577")]
	[FieldOffset(Offset = "0xC")]
	private static readonly Vector3Int s_One;

	[Token(Token = "0x4000578")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Vector3Int s_Up;

	[Token(Token = "0x4000579")]
	[FieldOffset(Offset = "0x24")]
	private static readonly Vector3Int s_Down;

	[Token(Token = "0x400057A")]
	[FieldOffset(Offset = "0x30")]
	private static readonly Vector3Int s_Left;

	[Token(Token = "0x400057B")]
	[FieldOffset(Offset = "0x3C")]
	private static readonly Vector3Int s_Right;

	[Token(Token = "0x400057C")]
	[FieldOffset(Offset = "0x48")]
	private static readonly Vector3Int s_Forward;

	[Token(Token = "0x400057D")]
	[FieldOffset(Offset = "0x54")]
	private static readonly Vector3Int s_Back;

	[Token(Token = "0x17000207")]
	public int x
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BB9")]
		[Address(RVA = "0x69099B0", Offset = "0x69089B0", VA = "0x69099B0")]
		readonly get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BBA")]
		[Address(RVA = "0x69099C0", Offset = "0x69089C0", VA = "0x69099C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000208")]
	public int y
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BBB")]
		[Address(RVA = "0x69099D0", Offset = "0x69089D0", VA = "0x69099D0")]
		readonly get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BBC")]
		[Address(RVA = "0x69099E0", Offset = "0x69089E0", VA = "0x69099E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000209")]
	public int z
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BBD")]
		[Address(RVA = "0x69099F0", Offset = "0x69089F0", VA = "0x69099F0")]
		readonly get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BBE")]
		[Address(RVA = "0x6909A00", Offset = "0x6908A00", VA = "0x6909A00")]
		set
		{
		}
	}

	[Token(Token = "0x1700020A")]
	public static Vector3Int zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BCF")]
		[Address(RVA = "0x6909E80", Offset = "0x6908E80", VA = "0x6909E80")]
		get
		{
			return default(Vector3Int);
		}
	}

	[Token(Token = "0x1700020B")]
	public static Vector3Int one
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BD0")]
		[Address(RVA = "0x6909EC0", Offset = "0x6908EC0", VA = "0x6909EC0")]
		get
		{
			return default(Vector3Int);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x6909A10", Offset = "0x6908A10", VA = "0x6909A10")]
	public Vector3Int(int x, int y, int z)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x6909A20", Offset = "0x6908A20", VA = "0x6909A20")]
	public static Vector3Int Min(Vector3Int lhs, Vector3Int rhs)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x6909A50", Offset = "0x6908A50", VA = "0x6909A50")]
	public static Vector3Int Max(Vector3Int lhs, Vector3Int rhs)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x6909A80", Offset = "0x6908A80", VA = "0x6909A80")]
	public static implicit operator Vector3(Vector3Int v)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x6909AA0", Offset = "0x6908AA0", VA = "0x6909AA0")]
	public static Vector3Int FloorToInt(Vector3 v)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x6909BB0", Offset = "0x6908BB0", VA = "0x6909BB0")]
	public static Vector3Int operator +(Vector3Int a, Vector3Int b)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x6909BD0", Offset = "0x6908BD0", VA = "0x6909BD0")]
	public static Vector3Int operator -(Vector3Int a, Vector3Int b)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x6909C00", Offset = "0x6908C00", VA = "0x6909C00")]
	public static Vector3Int operator *(Vector3Int a, int b)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x6909C20", Offset = "0x6908C20", VA = "0x6909C20")]
	public static Vector3Int operator /(Vector3Int a, int b)
	{
		return default(Vector3Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x6909C50", Offset = "0x6908C50", VA = "0x6909C50")]
	public static bool operator ==(Vector3Int lhs, Vector3Int rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x6909C70", Offset = "0x6908C70", VA = "0x6909C70", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x6909CF0", Offset = "0x6908CF0", VA = "0x6909CF0", Slot = "4")]
	public readonly bool Equals(Vector3Int other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x6909D10", Offset = "0x6908D10", VA = "0x6909D10")]
	public readonly bool Equals(in Vector3Int other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x6909D40", Offset = "0x6908D40", VA = "0x6909D40", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x6909D90", Offset = "0x6908D90", VA = "0x6909D90", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x6909DA0", Offset = "0x6908DA0", VA = "0x6909DA0", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
