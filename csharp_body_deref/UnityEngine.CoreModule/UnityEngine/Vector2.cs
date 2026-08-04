// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Vector2
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000122")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[UnityEngine.NativeClass("Vector2f")]
[Il2CppEagerStaticClassConstruction]
public struct Vector2 : IEquatable<Vector2>, IFormattable
{
	[Token(Token = "0x40004F2")]
	[FieldOffset(Offset = "0x0")]
	public float x;

	[Token(Token = "0x40004F3")]
	[FieldOffset(Offset = "0x4")]
	public float y;

	[Token(Token = "0x40004F4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector2 zeroVector;

	[Token(Token = "0x40004F5")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Vector2 oneVector;

	[Token(Token = "0x40004F6")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Vector2 upVector;

	[Token(Token = "0x40004F7")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Vector2 downVector;

	[Token(Token = "0x40004F8")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Vector2 leftVector;

	[Token(Token = "0x40004F9")]
	[FieldOffset(Offset = "0x28")]
	private static readonly Vector2 rightVector;

	[Token(Token = "0x40004FA")]
	[FieldOffset(Offset = "0x30")]
	private static readonly Vector2 positiveInfinityVector;

	[Token(Token = "0x40004FB")]
	[FieldOffset(Offset = "0x38")]
	private static readonly Vector2 negativeInfinityVector;

	[Token(Token = "0x40004FC")]
	public const float kEpsilon = 1E-05f;

	[Token(Token = "0x40004FD")]
	public const float kEpsilonNormalSqrt = 1E-15f;

	[Token(Token = "0x1700018E")]
	public float this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000885")]
		[Address(RVA = "0x4DEE580", Offset = "0x4DEE580", VA = "0x4DEE580")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000886")]
		[Address(RVA = "0x4DEE5F0", Offset = "0x4DEE5F0", VA = "0x4DEE5F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700018F")]
	public Vector2 normalized
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600088E")]
		[Address(RVA = "0x4DEE8B0", Offset = "0x4DEE8B0", VA = "0x4DEE8B0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000190")]
	public float magnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000896")]
		[Address(RVA = "0x4DEEC80", Offset = "0x4DEEC80", VA = "0x4DEEC80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000191")]
	public float sqrMagnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000897")]
		[Address(RVA = "0x4DEED00", Offset = "0x4DEED00", VA = "0x4DEED00")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000192")]
	public static Vector2 zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008AD")]
		[Address(RVA = "0x4DEF630", Offset = "0x4DEF630", VA = "0x4DEF630")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000193")]
	public static Vector2 one
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008AE")]
		[Address(RVA = "0x4DEF670", Offset = "0x4DEF670", VA = "0x4DEF670")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000194")]
	public static Vector2 up
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008AF")]
		[Address(RVA = "0x4DEF6B0", Offset = "0x4DEF6B0", VA = "0x4DEF6B0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000195")]
	public static Vector2 down
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008B0")]
		[Address(RVA = "0x4DEF6F0", Offset = "0x4DEF6F0", VA = "0x4DEF6F0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000196")]
	public static Vector2 left
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008B1")]
		[Address(RVA = "0x4DEF730", Offset = "0x4DEF730", VA = "0x4DEF730")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000197")]
	public static Vector2 right
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008B2")]
		[Address(RVA = "0x4DEF770", Offset = "0x4DEF770", VA = "0x4DEF770")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000198")]
	public static Vector2 positiveInfinity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008B3")]
		[Address(RVA = "0x4DEF7B0", Offset = "0x4DEF7B0", VA = "0x4DEF7B0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000199")]
	public static Vector2 negativeInfinity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008B4")]
		[Address(RVA = "0x4DEF7F0", Offset = "0x4DEF7F0", VA = "0x4DEF7F0")]
		get
		{
			return default(Vector2);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000887")]
	[Address(RVA = "0x4DEE660", Offset = "0x4DEE660", VA = "0x4DEE660")]
	public Vector2(float x, float y)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000888")]
	[Address(RVA = "0x4DEE670", Offset = "0x4DEE670", VA = "0x4DEE670")]
	public void Set(float newX, float newY)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000889")]
	[Address(RVA = "0x4DEE680", Offset = "0x4DEE680", VA = "0x4DEE680")]
	public static Vector2 Lerp(Vector2 a, Vector2 b, float t)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600088A")]
	[Address(RVA = "0x4DEE6B0", Offset = "0x4DEE6B0", VA = "0x4DEE6B0")]
	public static Vector2 LerpUnclamped(Vector2 a, Vector2 b, float t)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600088B")]
	[Address(RVA = "0x4DEE6C0", Offset = "0x4DEE6C0", VA = "0x4DEE6C0")]
	public static Vector2 MoveTowards(Vector2 current, Vector2 target, float maxDistanceDelta)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600088C")]
	[Address(RVA = "0x4DEE7D0", Offset = "0x4DEE7D0", VA = "0x4DEE7D0")]
	public static Vector2 Scale(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600088D")]
	[Address(RVA = "0x4DEE7E0", Offset = "0x4DEE7E0", VA = "0x4DEE7E0")]
	public void Normalize()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600088F")]
	[Address(RVA = "0x4DEE9A0", Offset = "0x4DEE9A0", VA = "0x4DEE9A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000890")]
	[Address(RVA = "0x4DEE9B0", Offset = "0x4DEE9B0", VA = "0x4DEE9B0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000891")]
	[Address(RVA = "0x4DEEB50", Offset = "0x4DEEB50", VA = "0x4DEEB50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000892")]
	[Address(RVA = "0x4DEEB80", Offset = "0x4DEEB80", VA = "0x4DEEB80", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000893")]
	[Address(RVA = "0x4DEEC00", Offset = "0x4DEEC00", VA = "0x4DEEC00", Slot = "4")]
	public bool Equals(Vector2 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000894")]
	[Address(RVA = "0x4DEEC20", Offset = "0x4DEEC20", VA = "0x4DEEC20")]
	public static Vector2 Reflect(Vector2 inDirection, Vector2 inNormal)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000895")]
	[Address(RVA = "0x4DEEC60", Offset = "0x4DEEC60", VA = "0x4DEEC60")]
	public static float Dot(Vector2 lhs, Vector2 rhs)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000898")]
	[Address(RVA = "0x4DEED20", Offset = "0x4DEED20", VA = "0x4DEED20")]
	public static float Angle(Vector2 from, Vector2 to)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000899")]
	[Address(RVA = "0x4DEEEA0", Offset = "0x4DEEEA0", VA = "0x4DEEEA0")]
	public static float SignedAngle(Vector2 from, Vector2 to)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600089A")]
	[Address(RVA = "0x4DEF070", Offset = "0x4DEF070", VA = "0x4DEF070")]
	public static float Distance(Vector2 a, Vector2 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600089B")]
	[Address(RVA = "0x4DEF0F0", Offset = "0x4DEF0F0", VA = "0x4DEF0F0")]
	public static Vector2 ClampMagnitude(Vector2 vector, float maxLength)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600089C")]
	[Address(RVA = "0x4DEF1B0", Offset = "0x4DEF1B0", VA = "0x4DEF1B0")]
	public static Vector2 Min(Vector2 lhs, Vector2 rhs)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600089D")]
	[Address(RVA = "0x4DEF1C0", Offset = "0x4DEF1C0", VA = "0x4DEF1C0")]
	public static Vector2 Max(Vector2 lhs, Vector2 rhs)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600089E")]
	[Address(RVA = "0x4DEF1D0", Offset = "0x4DEF1D0", VA = "0x4DEF1D0")]
	[ExcludeFromDocs]
	public static Vector2 SmoothDamp(Vector2 current, Vector2 target, ref Vector2 currentVelocity, float smoothTime, float maxSpeed)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600089F")]
	[Address(RVA = "0x4DEF4E0", Offset = "0x4DEF4E0", VA = "0x4DEF4E0")]
	[ExcludeFromDocs]
	public static Vector2 SmoothDamp(Vector2 current, Vector2 target, ref Vector2 currentVelocity, float smoothTime)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60008A0")]
	[Address(RVA = "0x4DEF270", Offset = "0x4DEF270", VA = "0x4DEF270")]
	public static Vector2 SmoothDamp(Vector2 current, Vector2 target, ref Vector2 currentVelocity, float smoothTime, [DefaultValue("Mathf.Infinity")] float maxSpeed, [DefaultValue("Time.deltaTime")] float deltaTime)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x4DEF550", Offset = "0x4DEF550", VA = "0x4DEF550")]
	public static Vector2 operator +(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x4DEF560", Offset = "0x4DEF560", VA = "0x4DEF560")]
	public static Vector2 operator -(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A3")]
	[Address(RVA = "0x4DEF570", Offset = "0x4DEF570", VA = "0x4DEF570")]
	public static Vector2 operator *(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x4DEF580", Offset = "0x4DEF580", VA = "0x4DEF580")]
	public static Vector2 operator /(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A5")]
	[Address(RVA = "0x4DEF590", Offset = "0x4DEF590", VA = "0x4DEF590")]
	public static Vector2 operator -(Vector2 a)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A6")]
	[Address(RVA = "0x4DEF5A0", Offset = "0x4DEF5A0", VA = "0x4DEF5A0")]
	public static Vector2 operator *(Vector2 a, float d)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A7")]
	[Address(RVA = "0x4DEF5B0", Offset = "0x4DEF5B0", VA = "0x4DEF5B0")]
	public static Vector2 operator *(float d, Vector2 a)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x4DEF5C0", Offset = "0x4DEF5C0", VA = "0x4DEF5C0")]
	public static Vector2 operator /(Vector2 a, float d)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A9")]
	[Address(RVA = "0x4DEF5D0", Offset = "0x4DEF5D0", VA = "0x4DEF5D0")]
	public static bool operator ==(Vector2 lhs, Vector2 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008AA")]
	[Address(RVA = "0x4DEF5F0", Offset = "0x4DEF5F0", VA = "0x4DEF5F0")]
	public static bool operator !=(Vector2 lhs, Vector2 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008AB")]
	[Address(RVA = "0x4DEF610", Offset = "0x4DEF610", VA = "0x4DEF610")]
	public static implicit operator Vector2(Vector3 v)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x4DEF620", Offset = "0x4DEF620", VA = "0x4DEF620")]
	public static implicit operator Vector3(Vector2 v)
	{
		return default(Vector3);
	}
}
