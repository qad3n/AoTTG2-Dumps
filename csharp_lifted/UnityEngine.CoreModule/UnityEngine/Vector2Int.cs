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

[Token(Token = "0x200014A")]
[DefaultMember("Item")]
[Il2CppEagerStaticClassConstruction]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeType("Runtime/Math/Vector2Int.h")]
public struct Vector2Int : IEquatable<Vector2Int>, IFormattable
{
	[Token(Token = "0x400056B")]
	[FieldOffset(Offset = "0x0")]
	private int m_X;

	[Token(Token = "0x400056C")]
	[FieldOffset(Offset = "0x4")]
	private int m_Y;

	[Token(Token = "0x400056D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector2Int s_Zero;

	[Token(Token = "0x400056E")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Vector2Int s_One;

	[Token(Token = "0x400056F")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Vector2Int s_Up;

	[Token(Token = "0x4000570")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Vector2Int s_Down;

	[Token(Token = "0x4000571")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Vector2Int s_Left;

	[Token(Token = "0x4000572")]
	[FieldOffset(Offset = "0x28")]
	private static readonly Vector2Int s_Right;

	[Token(Token = "0x17000202")]
	public int x
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BA2")]
		[Address(RVA = "0x69094F0", Offset = "0x69084F0", VA = "0x69094F0")]
		readonly get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BA3")]
		[Address(RVA = "0x6909500", Offset = "0x6908500", VA = "0x6909500")]
		set
		{
		}
	}

	[Token(Token = "0x17000203")]
	public int y
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BA4")]
		[Address(RVA = "0x6909510", Offset = "0x6908510", VA = "0x6909510")]
		readonly get
		{
			return default(int);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BA5")]
		[Address(RVA = "0x6909520", Offset = "0x6908520", VA = "0x6909520")]
		set
		{
		}
	}

	[Token(Token = "0x17000204")]
	public readonly float magnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BA7")]
		[Address(RVA = "0x6909540", Offset = "0x6908540", VA = "0x6909540")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000205")]
	public static Vector2Int zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BB6")]
		[Address(RVA = "0x69098A0", Offset = "0x69088A0", VA = "0x69098A0")]
		get
		{
			return default(Vector2Int);
		}
	}

	[Token(Token = "0x17000206")]
	public static Vector2Int one
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BB7")]
		[Address(RVA = "0x69098E0", Offset = "0x69088E0", VA = "0x69098E0")]
		get
		{
			return default(Vector2Int);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x6909530", Offset = "0x6908530", VA = "0x6909530")]
	public Vector2Int(int x, int y)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA8")]
	[Address(RVA = "0x6909570", Offset = "0x6908570", VA = "0x6909570")]
	public static Vector2Int Max(Vector2Int lhs, Vector2Int rhs)
	{
		return default(Vector2Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x69095A0", Offset = "0x69085A0", VA = "0x69095A0")]
	public static implicit operator Vector2(Vector2Int v)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x69095B0", Offset = "0x69085B0", VA = "0x69095B0")]
	public static Vector2Int FloorToInt(Vector2 v)
	{
		return default(Vector2Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x6909680", Offset = "0x6908680", VA = "0x6909680")]
	public static Vector2Int operator +(Vector2Int a, Vector2Int b)
	{
		return default(Vector2Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x69096A0", Offset = "0x69086A0", VA = "0x69096A0")]
	public static Vector2Int operator *(int a, Vector2Int b)
	{
		return default(Vector2Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x69096C0", Offset = "0x69086C0", VA = "0x69096C0")]
	public static Vector2Int operator /(Vector2Int a, int b)
	{
		return default(Vector2Int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x69096E0", Offset = "0x69086E0", VA = "0x69096E0")]
	public static bool operator ==(Vector2Int lhs, Vector2Int rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x69096F0", Offset = "0x69086F0", VA = "0x69096F0")]
	public static bool operator !=(Vector2Int lhs, Vector2Int rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x6909700", Offset = "0x6908700", VA = "0x6909700", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x6909770", Offset = "0x6908770", VA = "0x6909770", Slot = "4")]
	public readonly bool Equals(Vector2Int other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x6909790", Offset = "0x6908790", VA = "0x6909790")]
	public readonly bool Equals(in Vector2Int other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x69097B0", Offset = "0x69087B0", VA = "0x69097B0", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x69097C0", Offset = "0x69087C0", VA = "0x69097C0", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x69097D0", Offset = "0x69087D0", VA = "0x69097D0", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
