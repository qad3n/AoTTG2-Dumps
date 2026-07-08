using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000122")]
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

	[Token(Token = "0x170001A2")]
	public float this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008DE")]
		[Address(RVA = "0x4AC8B80", Offset = "0x4AC8B80", VA = "0x4AC8B80")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008DF")]
		[Address(RVA = "0x4AC8C00", Offset = "0x4AC8C00", VA = "0x4AC8C00")]
		set
		{
		}
	}

	[Token(Token = "0x170001A3")]
	public Vector4 normalized
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008E7")]
		[Address(RVA = "0x4AC8F40", Offset = "0x4AC8F40", VA = "0x4AC8F40")]
		get
		{
			return default(Vector4);
		}
	}

	[Token(Token = "0x170001A4")]
	public float magnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008EA")]
		[Address(RVA = "0x4AC9140", Offset = "0x4AC9140", VA = "0x4AC9140")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001A5")]
	public float sqrMagnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008EB")]
		[Address(RVA = "0x4AC91E0", Offset = "0x4AC91E0", VA = "0x4AC91E0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001A6")]
	public static Vector4 zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008EC")]
		[Address(RVA = "0x4AC9210", Offset = "0x4AC9210", VA = "0x4AC9210")]
		get
		{
			return default(Vector4);
		}
	}

	[Token(Token = "0x170001A7")]
	public static Vector4 one
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008ED")]
		[Address(RVA = "0x4AC9250", Offset = "0x4AC9250", VA = "0x4AC9250")]
		get
		{
			return default(Vector4);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x4AC8C80", Offset = "0x4AC8C80", VA = "0x4AC8C80")]
	public Vector4(float x, float y, float z, float w)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x4AC8CA0", Offset = "0x4AC8CA0", VA = "0x4AC8CA0")]
	public void Set(float newX, float newY, float newZ, float newW)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x4AC8CC0", Offset = "0x4AC8CC0", VA = "0x4AC8CC0")]
	public void Scale(Vector4 scale)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x4AC8CD0", Offset = "0x4AC8CD0", VA = "0x4AC8CD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x4AC8D30", Offset = "0x4AC8D30", VA = "0x4AC8D30", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x4AC8DD0", Offset = "0x4AC8DD0", VA = "0x4AC8DD0", Slot = "4")]
	public bool Equals(Vector4 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x4AC8E10", Offset = "0x4AC8E10", VA = "0x4AC8E10")]
	public static Vector4 Normalize(Vector4 a)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E8")]
	[Address(RVA = "0x4AC9060", Offset = "0x4AC9060", VA = "0x4AC9060")]
	public static float Dot(Vector4 a, Vector4 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E9")]
	[Address(RVA = "0x4AC9090", Offset = "0x4AC9090", VA = "0x4AC9090")]
	public static float Magnitude(Vector4 a)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x4AC9290", Offset = "0x4AC9290", VA = "0x4AC9290")]
	public static Vector4 operator +(Vector4 a, Vector4 b)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008EF")]
	[Address(RVA = "0x4AC92A0", Offset = "0x4AC92A0", VA = "0x4AC92A0")]
	public static Vector4 operator -(Vector4 a, Vector4 b)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F0")]
	[Address(RVA = "0x4AC92B0", Offset = "0x4AC92B0", VA = "0x4AC92B0")]
	public static Vector4 operator *(Vector4 a, float d)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F1")]
	[Address(RVA = "0x4AC92C0", Offset = "0x4AC92C0", VA = "0x4AC92C0")]
	public static Vector4 operator /(Vector4 a, float d)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F2")]
	[Address(RVA = "0x4AC92D0", Offset = "0x4AC92D0", VA = "0x4AC92D0")]
	public static bool operator ==(Vector4 lhs, Vector4 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F3")]
	[Address(RVA = "0x4AC9310", Offset = "0x4AC9310", VA = "0x4AC9310")]
	public static bool operator !=(Vector4 lhs, Vector4 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F4")]
	[Address(RVA = "0x4AC9350", Offset = "0x4AC9350", VA = "0x4AC9350")]
	public static implicit operator Vector4(Vector3 v)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x4AC9360", Offset = "0x4AC9360", VA = "0x4AC9360")]
	public static implicit operator Vector3(Vector4 v)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F6")]
	[Address(RVA = "0x4AC9370", Offset = "0x4AC9370", VA = "0x4AC9370")]
	public static implicit operator Vector4(Vector2 v)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x4AC9380", Offset = "0x4AC9380", VA = "0x4AC9380")]
	public static implicit operator Vector2(Vector4 v)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F8")]
	[Address(RVA = "0x4AC9390", Offset = "0x4AC9390", VA = "0x4AC9390", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F9")]
	[Address(RVA = "0x4AC93A0", Offset = "0x4AC93A0", VA = "0x4AC93A0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
