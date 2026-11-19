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

[Token(Token = "0x200014C")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/Vector4.h")]
[UnityEngine.NativeClass("Vector4f")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[Il2CppEagerStaticClassConstruction]
public struct Vector4 : IEquatable<Vector4>, IFormattable
{
	[Token(Token = "0x400057E")]
	public const float kEpsilon = 1E-05f;

	[Token(Token = "0x400057F")]
	[FieldOffset(Offset = "0x0")]
	public float x;

	[Token(Token = "0x4000580")]
	[FieldOffset(Offset = "0x4")]
	public float y;

	[Token(Token = "0x4000581")]
	[FieldOffset(Offset = "0x8")]
	public float z;

	[Token(Token = "0x4000582")]
	[FieldOffset(Offset = "0xC")]
	public float w;

	[Token(Token = "0x4000583")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector4 zeroVector;

	[Token(Token = "0x4000584")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Vector4 oneVector;

	[Token(Token = "0x4000585")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Vector4 positiveInfinityVector;

	[Token(Token = "0x4000586")]
	[FieldOffset(Offset = "0x30")]
	private static readonly Vector4 negativeInfinityVector;

	[Token(Token = "0x1700020C")]
	public float this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BD2")]
		[Address(RVA = "0x6909FF0", Offset = "0x6908FF0", VA = "0x6909FF0")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BD3")]
		[Address(RVA = "0x690A070", Offset = "0x6909070", VA = "0x690A070")]
		set
		{
		}
	}

	[Token(Token = "0x1700020D")]
	public readonly Vector4 normalized
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BDF")]
		[Address(RVA = "0x690A440", Offset = "0x6909440", VA = "0x690A440")]
		get
		{
			return default(Vector4);
		}
	}

	[Token(Token = "0x1700020E")]
	public readonly float magnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BE1")]
		[Address(RVA = "0x690A5A0", Offset = "0x69095A0", VA = "0x690A5A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700020F")]
	public readonly float sqrMagnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BE2")]
		[Address(RVA = "0x690A630", Offset = "0x6909630", VA = "0x690A630")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000210")]
	public static Vector4 zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BE3")]
		[Address(RVA = "0x690A660", Offset = "0x6909660", VA = "0x690A660")]
		get
		{
			return default(Vector4);
		}
	}

	[Token(Token = "0x17000211")]
	public static Vector4 one
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BE4")]
		[Address(RVA = "0x690A6A0", Offset = "0x69096A0", VA = "0x690A6A0")]
		get
		{
			return default(Vector4);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x690A0F0", Offset = "0x69090F0", VA = "0x690A0F0")]
	public Vector4(float x, float y, float z, float w)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x690A110", Offset = "0x6909110", VA = "0x690A110")]
	public Vector4(float x, float y, float z)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x690A130", Offset = "0x6909130", VA = "0x690A130")]
	public Vector4(float x, float y)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x690A150", Offset = "0x6909150", VA = "0x690A150")]
	public void Set(float newX, float newY, float newZ, float newW)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x690A170", Offset = "0x6909170", VA = "0x690A170")]
	public static Vector4 Lerp(Vector4 a, Vector4 b, float t)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x690A1B0", Offset = "0x69091B0", VA = "0x690A1B0")]
	public void Scale(Vector4 scale)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x690A1C0", Offset = "0x69091C0", VA = "0x690A1C0", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x690A220", Offset = "0x6909220", VA = "0x690A220", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x690A2B0", Offset = "0x69092B0", VA = "0x690A2B0", Slot = "4")]
	public readonly bool Equals(Vector4 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x690A2F0", Offset = "0x69092F0", VA = "0x690A2F0")]
	public readonly bool Equals(in Vector4 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x690A330", Offset = "0x6909330", VA = "0x690A330")]
	public static Vector4 Normalize(in Vector4 a)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x690A570", Offset = "0x6909570", VA = "0x690A570")]
	public static float Dot(in Vector4 a, in Vector4 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x690A6E0", Offset = "0x69096E0", VA = "0x690A6E0")]
	public static Vector4 operator +(Vector4 a, Vector4 b)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x690A6F0", Offset = "0x69096F0", VA = "0x690A6F0")]
	public static Vector4 operator -(Vector4 a, Vector4 b)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x690A700", Offset = "0x6909700", VA = "0x690A700")]
	public static Vector4 operator -(Vector4 a)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x690A720", Offset = "0x6909720", VA = "0x690A720")]
	public static Vector4 operator *(Vector4 a, float d)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x690A740", Offset = "0x6909740", VA = "0x690A740")]
	public static Vector4 operator *(float d, Vector4 a)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x690A760", Offset = "0x6909760", VA = "0x690A760")]
	public static Vector4 operator /(Vector4 a, float d)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x690A780", Offset = "0x6909780", VA = "0x690A780")]
	public static bool operator ==(Vector4 lhs, Vector4 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x690A7C0", Offset = "0x69097C0", VA = "0x690A7C0")]
	public static bool operator !=(Vector4 lhs, Vector4 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x690A800", Offset = "0x6909800", VA = "0x690A800")]
	public static implicit operator Vector4(Vector3 v)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x690A810", Offset = "0x6909810", VA = "0x690A810")]
	public static implicit operator Vector3(Vector4 v)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x690A820", Offset = "0x6909820", VA = "0x690A820")]
	public static implicit operator Vector4(Vector2 v)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x690A830", Offset = "0x6909830", VA = "0x690A830")]
	public static implicit operator Vector2(Vector4 v)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x690A840", Offset = "0x6909840", VA = "0x690A840", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x690A850", Offset = "0x6909850", VA = "0x690A850", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
