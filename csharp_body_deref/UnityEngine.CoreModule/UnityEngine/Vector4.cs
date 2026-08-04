// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Vector4
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000125")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[Il2CppEagerStaticClassConstruction]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/Vector4.h")]
[UnityEngine.NativeClass("Vector4f")]
public struct Vector4 : IEquatable<Vector4>, IFormattable
{
	[Token(Token = "0x4000511")]
	public const float kEpsilon = 1E-05f;

	[Token(Token = "0x4000512")]
	[FieldOffset(Offset = "0x0")]
	public float x;

	[Token(Token = "0x4000513")]
	[FieldOffset(Offset = "0x4")]
	public float y;

	[Token(Token = "0x4000514")]
	[FieldOffset(Offset = "0x8")]
	public float z;

	[Token(Token = "0x4000515")]
	[FieldOffset(Offset = "0xC")]
	public float w;

	[Token(Token = "0x4000516")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector4 zeroVector;

	[Token(Token = "0x4000517")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Vector4 oneVector;

	[Token(Token = "0x4000518")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Vector4 positiveInfinityVector;

	[Token(Token = "0x4000519")]
	[FieldOffset(Offset = "0x30")]
	private static readonly Vector4 negativeInfinityVector;

	[Token(Token = "0x170001A3")]
	public float this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008E0")]
		[Address(RVA = "0x4DF04B0", Offset = "0x4DF04B0", VA = "0x4DF04B0")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008E1")]
		[Address(RVA = "0x4DF0530", Offset = "0x4DF0530", VA = "0x4DF0530")]
		set
		{
		}
	}

	[Token(Token = "0x170001A4")]
	public Vector4 normalized
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008E9")]
		[Address(RVA = "0x4DF0870", Offset = "0x4DF0870", VA = "0x4DF0870")]
		get
		{
			return default(Vector4);
		}
	}

	[Token(Token = "0x170001A5")]
	public float magnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008EC")]
		[Address(RVA = "0x4DF0A70", Offset = "0x4DF0A70", VA = "0x4DF0A70")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001A6")]
	public float sqrMagnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008ED")]
		[Address(RVA = "0x4DF0B10", Offset = "0x4DF0B10", VA = "0x4DF0B10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001A7")]
	public static Vector4 zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008EE")]
		[Address(RVA = "0x4DF0B40", Offset = "0x4DF0B40", VA = "0x4DF0B40")]
		get
		{
			return default(Vector4);
		}
	}

	[Token(Token = "0x170001A8")]
	public static Vector4 one
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008EF")]
		[Address(RVA = "0x4DF0B80", Offset = "0x4DF0B80", VA = "0x4DF0B80")]
		get
		{
			return default(Vector4);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x4DF05B0", Offset = "0x4DF05B0", VA = "0x4DF05B0")]
	public Vector4(float x, float y, float z, float w)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x4DF05D0", Offset = "0x4DF05D0", VA = "0x4DF05D0")]
	public void Set(float newX, float newY, float newZ, float newW)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x4DF05F0", Offset = "0x4DF05F0", VA = "0x4DF05F0")]
	public void Scale(Vector4 scale)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x4DF0600", Offset = "0x4DF0600", VA = "0x4DF0600", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x4DF0660", Offset = "0x4DF0660", VA = "0x4DF0660", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E7")]
	[Address(RVA = "0x4DF0700", Offset = "0x4DF0700", VA = "0x4DF0700", Slot = "4")]
	public bool Equals(Vector4 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E8")]
	[Address(RVA = "0x4DF0740", Offset = "0x4DF0740", VA = "0x4DF0740")]
	public static Vector4 Normalize(Vector4 a)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x4DF0990", Offset = "0x4DF0990", VA = "0x4DF0990")]
	public static float Dot(Vector4 a, Vector4 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x4DF09C0", Offset = "0x4DF09C0", VA = "0x4DF09C0")]
	public static float Magnitude(Vector4 a)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F0")]
	[Address(RVA = "0x4DF0BC0", Offset = "0x4DF0BC0", VA = "0x4DF0BC0")]
	public static Vector4 operator +(Vector4 a, Vector4 b)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F1")]
	[Address(RVA = "0x4DF0BD0", Offset = "0x4DF0BD0", VA = "0x4DF0BD0")]
	public static Vector4 operator -(Vector4 a, Vector4 b)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F2")]
	[Address(RVA = "0x4DF0BE0", Offset = "0x4DF0BE0", VA = "0x4DF0BE0")]
	public static Vector4 operator *(Vector4 a, float d)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F3")]
	[Address(RVA = "0x4DF0BF0", Offset = "0x4DF0BF0", VA = "0x4DF0BF0")]
	public static Vector4 operator /(Vector4 a, float d)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F4")]
	[Address(RVA = "0x4DF0C00", Offset = "0x4DF0C00", VA = "0x4DF0C00")]
	public static bool operator ==(Vector4 lhs, Vector4 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x4DF0C40", Offset = "0x4DF0C40", VA = "0x4DF0C40")]
	public static bool operator !=(Vector4 lhs, Vector4 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F6")]
	[Address(RVA = "0x4DF0C80", Offset = "0x4DF0C80", VA = "0x4DF0C80")]
	public static implicit operator Vector4(Vector3 v)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x4DF0C90", Offset = "0x4DF0C90", VA = "0x4DF0C90")]
	public static implicit operator Vector3(Vector4 v)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F8")]
	[Address(RVA = "0x4DF0CA0", Offset = "0x4DF0CA0", VA = "0x4DF0CA0")]
	public static implicit operator Vector4(Vector2 v)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F9")]
	[Address(RVA = "0x4DF0CB0", Offset = "0x4DF0CB0", VA = "0x4DF0CB0")]
	public static implicit operator Vector2(Vector4 v)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008FA")]
	[Address(RVA = "0x4DF0CC0", Offset = "0x4DF0CC0", VA = "0x4DF0CC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008FB")]
	[Address(RVA = "0x4DF0CD0", Offset = "0x4DF0CD0", VA = "0x4DF0CD0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
