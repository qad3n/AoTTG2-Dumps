using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200011F")]
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

	[Token(Token = "0x1700018D")]
	public float this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000883")]
		[Address(RVA = "0x4AC6C50", Offset = "0x4AC6C50", VA = "0x4AC6C50")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000884")]
		[Address(RVA = "0x4AC6CC0", Offset = "0x4AC6CC0", VA = "0x4AC6CC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700018E")]
	public Vector2 normalized
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600088C")]
		[Address(RVA = "0x4AC6F80", Offset = "0x4AC6F80", VA = "0x4AC6F80")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x1700018F")]
	public float magnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000894")]
		[Address(RVA = "0x4AC7350", Offset = "0x4AC7350", VA = "0x4AC7350")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000190")]
	public float sqrMagnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000895")]
		[Address(RVA = "0x4AC73D0", Offset = "0x4AC73D0", VA = "0x4AC73D0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000191")]
	public static Vector2 zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008AB")]
		[Address(RVA = "0x4AC7D00", Offset = "0x4AC7D00", VA = "0x4AC7D00")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000192")]
	public static Vector2 one
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008AC")]
		[Address(RVA = "0x4AC7D40", Offset = "0x4AC7D40", VA = "0x4AC7D40")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000193")]
	public static Vector2 up
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008AD")]
		[Address(RVA = "0x4AC7D80", Offset = "0x4AC7D80", VA = "0x4AC7D80")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000194")]
	public static Vector2 down
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008AE")]
		[Address(RVA = "0x4AC7DC0", Offset = "0x4AC7DC0", VA = "0x4AC7DC0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000195")]
	public static Vector2 left
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008AF")]
		[Address(RVA = "0x4AC7E00", Offset = "0x4AC7E00", VA = "0x4AC7E00")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000196")]
	public static Vector2 right
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008B0")]
		[Address(RVA = "0x4AC7E40", Offset = "0x4AC7E40", VA = "0x4AC7E40")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000197")]
	public static Vector2 positiveInfinity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008B1")]
		[Address(RVA = "0x4AC7E80", Offset = "0x4AC7E80", VA = "0x4AC7E80")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000198")]
	public static Vector2 negativeInfinity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008B2")]
		[Address(RVA = "0x4AC7EC0", Offset = "0x4AC7EC0", VA = "0x4AC7EC0")]
		get
		{
			return default(Vector2);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000885")]
	[Address(RVA = "0x4AC6D30", Offset = "0x4AC6D30", VA = "0x4AC6D30")]
	public Vector2(float x, float y)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000886")]
	[Address(RVA = "0x4AC6D40", Offset = "0x4AC6D40", VA = "0x4AC6D40")]
	public void Set(float newX, float newY)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000887")]
	[Address(RVA = "0x4AC6D50", Offset = "0x4AC6D50", VA = "0x4AC6D50")]
	public static Vector2 Lerp(Vector2 a, Vector2 b, float t)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000888")]
	[Address(RVA = "0x4AC6D80", Offset = "0x4AC6D80", VA = "0x4AC6D80")]
	public static Vector2 LerpUnclamped(Vector2 a, Vector2 b, float t)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000889")]
	[Address(RVA = "0x4AC6D90", Offset = "0x4AC6D90", VA = "0x4AC6D90")]
	public static Vector2 MoveTowards(Vector2 current, Vector2 target, float maxDistanceDelta)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600088A")]
	[Address(RVA = "0x4AC6EA0", Offset = "0x4AC6EA0", VA = "0x4AC6EA0")]
	public static Vector2 Scale(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600088B")]
	[Address(RVA = "0x4AC6EB0", Offset = "0x4AC6EB0", VA = "0x4AC6EB0")]
	public void Normalize()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600088D")]
	[Address(RVA = "0x4AC7070", Offset = "0x4AC7070", VA = "0x4AC7070", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600088E")]
	[Address(RVA = "0x4AC7080", Offset = "0x4AC7080", VA = "0x4AC7080", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600088F")]
	[Address(RVA = "0x4AC7220", Offset = "0x4AC7220", VA = "0x4AC7220", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000890")]
	[Address(RVA = "0x4AC7250", Offset = "0x4AC7250", VA = "0x4AC7250", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000891")]
	[Address(RVA = "0x4AC72D0", Offset = "0x4AC72D0", VA = "0x4AC72D0", Slot = "4")]
	public bool Equals(Vector2 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000892")]
	[Address(RVA = "0x4AC72F0", Offset = "0x4AC72F0", VA = "0x4AC72F0")]
	public static Vector2 Reflect(Vector2 inDirection, Vector2 inNormal)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000893")]
	[Address(RVA = "0x4AC7330", Offset = "0x4AC7330", VA = "0x4AC7330")]
	public static float Dot(Vector2 lhs, Vector2 rhs)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000896")]
	[Address(RVA = "0x4AC73F0", Offset = "0x4AC73F0", VA = "0x4AC73F0")]
	public static float Angle(Vector2 from, Vector2 to)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000897")]
	[Address(RVA = "0x4AC7570", Offset = "0x4AC7570", VA = "0x4AC7570")]
	public static float SignedAngle(Vector2 from, Vector2 to)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000898")]
	[Address(RVA = "0x4AC7740", Offset = "0x4AC7740", VA = "0x4AC7740")]
	public static float Distance(Vector2 a, Vector2 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000899")]
	[Address(RVA = "0x4AC77C0", Offset = "0x4AC77C0", VA = "0x4AC77C0")]
	public static Vector2 ClampMagnitude(Vector2 vector, float maxLength)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600089A")]
	[Address(RVA = "0x4AC7880", Offset = "0x4AC7880", VA = "0x4AC7880")]
	public static Vector2 Min(Vector2 lhs, Vector2 rhs)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600089B")]
	[Address(RVA = "0x4AC7890", Offset = "0x4AC7890", VA = "0x4AC7890")]
	public static Vector2 Max(Vector2 lhs, Vector2 rhs)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600089C")]
	[Address(RVA = "0x4AC78A0", Offset = "0x4AC78A0", VA = "0x4AC78A0")]
	[ExcludeFromDocs]
	public static Vector2 SmoothDamp(Vector2 current, Vector2 target, ref Vector2 currentVelocity, float smoothTime, float maxSpeed)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600089D")]
	[Address(RVA = "0x4AC7BB0", Offset = "0x4AC7BB0", VA = "0x4AC7BB0")]
	[ExcludeFromDocs]
	public static Vector2 SmoothDamp(Vector2 current, Vector2 target, ref Vector2 currentVelocity, float smoothTime)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600089E")]
	[Address(RVA = "0x4AC7940", Offset = "0x4AC7940", VA = "0x4AC7940")]
	public static Vector2 SmoothDamp(Vector2 current, Vector2 target, ref Vector2 currentVelocity, float smoothTime, [DefaultValue("Mathf.Infinity")] float maxSpeed, [DefaultValue("Time.deltaTime")] float deltaTime)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600089F")]
	[Address(RVA = "0x4AC7C20", Offset = "0x4AC7C20", VA = "0x4AC7C20")]
	public static Vector2 operator +(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A0")]
	[Address(RVA = "0x4AC7C30", Offset = "0x4AC7C30", VA = "0x4AC7C30")]
	public static Vector2 operator -(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x4AC7C40", Offset = "0x4AC7C40", VA = "0x4AC7C40")]
	public static Vector2 operator *(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x4AC7C50", Offset = "0x4AC7C50", VA = "0x4AC7C50")]
	public static Vector2 operator /(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A3")]
	[Address(RVA = "0x4AC7C60", Offset = "0x4AC7C60", VA = "0x4AC7C60")]
	public static Vector2 operator -(Vector2 a)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x4AC7C70", Offset = "0x4AC7C70", VA = "0x4AC7C70")]
	public static Vector2 operator *(Vector2 a, float d)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A5")]
	[Address(RVA = "0x4AC7C80", Offset = "0x4AC7C80", VA = "0x4AC7C80")]
	public static Vector2 operator *(float d, Vector2 a)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A6")]
	[Address(RVA = "0x4AC7C90", Offset = "0x4AC7C90", VA = "0x4AC7C90")]
	public static Vector2 operator /(Vector2 a, float d)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A7")]
	[Address(RVA = "0x4AC7CA0", Offset = "0x4AC7CA0", VA = "0x4AC7CA0")]
	public static bool operator ==(Vector2 lhs, Vector2 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x4AC7CC0", Offset = "0x4AC7CC0", VA = "0x4AC7CC0")]
	public static bool operator !=(Vector2 lhs, Vector2 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A9")]
	[Address(RVA = "0x4AC7CE0", Offset = "0x4AC7CE0", VA = "0x4AC7CE0")]
	public static implicit operator Vector2(Vector3 v)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008AA")]
	[Address(RVA = "0x4AC7CF0", Offset = "0x4AC7CF0", VA = "0x4AC7CF0")]
	public static implicit operator Vector3(Vector2 v)
	{
		return default(Vector3);
	}
}
