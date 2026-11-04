// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Vector2
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000148")]
[UnityEngine.NativeClass("Vector2f")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[Il2CppEagerStaticClassConstruction]
public struct Vector2 : IEquatable<Vector2>, IFormattable
{
	[Token(Token = "0x400055A")]
	[FieldOffset(Offset = "0x0")]
	public float x;

	[Token(Token = "0x400055B")]
	[FieldOffset(Offset = "0x4")]
	public float y;

	[Token(Token = "0x400055C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector2 zeroVector;

	[Token(Token = "0x400055D")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Vector2 oneVector;

	[Token(Token = "0x400055E")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Vector2 upVector;

	[Token(Token = "0x400055F")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Vector2 downVector;

	[Token(Token = "0x4000560")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Vector2 leftVector;

	[Token(Token = "0x4000561")]
	[FieldOffset(Offset = "0x28")]
	private static readonly Vector2 rightVector;

	[Token(Token = "0x4000562")]
	[FieldOffset(Offset = "0x30")]
	private static readonly Vector2 positiveInfinityVector;

	[Token(Token = "0x4000563")]
	[FieldOffset(Offset = "0x38")]
	private static readonly Vector2 negativeInfinityVector;

	[Token(Token = "0x4000564")]
	public const float kEpsilon = 1E-05f;

	[Token(Token = "0x4000565")]
	public const float kEpsilonNormalSqrt = 1E-15f;

	[Token(Token = "0x170001F1")]
	public float this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B5B")]
		[Address(RVA = "0x2B1F240", Offset = "0x2B1D840", VA = "0x182B1F240")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B5C")]
		[Address(RVA = "0x2F000C0", Offset = "0x2EFE6C0", VA = "0x182F000C0")]
		set
		{
		}
	}

	[Token(Token = "0x170001F2")]
	public readonly Vector2 normalized
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B65")]
		[Address(RVA = "0x2F0B8E0", Offset = "0x2F09EE0", VA = "0x182F0B8E0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170001F3")]
	public readonly float magnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B6F")]
		[Address(RVA = "0x2F0B7D0", Offset = "0x2F09DD0", VA = "0x182F0B7D0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001F4")]
	public readonly float sqrMagnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B70")]
		[Address(RVA = "0x2F0B9E0", Offset = "0x2F09FE0", VA = "0x182F0B9E0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001F5")]
	public static Vector2 zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B87")]
		[Address(RVA = "0x2F0BA50", Offset = "0x2F0A050", VA = "0x182F0BA50")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170001F6")]
	public static Vector2 one
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B88")]
		[Address(RVA = "0x2F0B8F0", Offset = "0x2F09EF0", VA = "0x182F0B8F0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170001F7")]
	public static Vector2 up
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B89")]
		[Address(RVA = "0x2F0BA00", Offset = "0x2F0A000", VA = "0x182F0BA00")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170001F8")]
	public static Vector2 down
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B8A")]
		[Address(RVA = "0x2F0B730", Offset = "0x2F09D30", VA = "0x182F0B730")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170001F9")]
	public static Vector2 left
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B8B")]
		[Address(RVA = "0x2F0B780", Offset = "0x2F09D80", VA = "0x182F0B780")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170001FA")]
	public static Vector2 right
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B8C")]
		[Address(RVA = "0x2F0B990", Offset = "0x2F09F90", VA = "0x182F0B990")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170001FB")]
	public static Vector2 positiveInfinity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B8D")]
		[Address(RVA = "0x2F0B940", Offset = "0x2F09F40", VA = "0x182F0B940")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170001FC")]
	public static Vector2 negativeInfinity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B8E")]
		[Address(RVA = "0x2F0B890", Offset = "0x2F09E90", VA = "0x182F0B890")]
		get
		{
			return default(Vector2);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x1028C00", Offset = "0x1027200", VA = "0x181028C00")]
	public Vector2(float x, float y)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x1028C00", Offset = "0x1027200", VA = "0x181028C00")]
	public void Set(float newX, float newY)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B5F")]
	[Address(RVA = "0x1E9BF10", Offset = "0x1E9A510", VA = "0x181E9BF10")]
	public static Vector2 Lerp(Vector2 a, Vector2 b, float t)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x2F0AF00", Offset = "0x2F09500", VA = "0x182F0AF00")]
	public static Vector2 LerpUnclamped(Vector2 a, Vector2 b, float t)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x2F0AFD0", Offset = "0x2F095D0", VA = "0x182F0AFD0")]
	public static Vector2 MoveTowards(Vector2 current, Vector2 target, float maxDistanceDelta)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x2343190", Offset = "0x2341790", VA = "0x182343190")]
	public static Vector2 Scale(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x2F0B120", Offset = "0x2F09720", VA = "0x182F0B120")]
	public static Vector2 Normalize(in Vector2 value)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x1EBAC90", Offset = "0x1EB9290", VA = "0x181EBAC90")]
	public void Normalize()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x2F0B530", Offset = "0x2F09B30", VA = "0x182F0B530", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x2F0B540", Offset = "0x2F09B40", VA = "0x182F0B540", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x2F0AEC0", Offset = "0x2F094C0", VA = "0x182F0AEC0", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x2F0AE20", Offset = "0x2F09420", VA = "0x182F0AE20", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x25B43E0", Offset = "0x25B29E0", VA = "0x1825B43E0", Slot = "4")]
	public readonly bool Equals(Vector2 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x2F0AE00", Offset = "0x2F09400", VA = "0x182F0AE00")]
	public readonly bool Equals(in Vector2 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x2F0B1A0", Offset = "0x2F097A0", VA = "0x182F0B1A0")]
	public static Vector2 Reflect(Vector2 inDirection, Vector2 inNormal)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x29D81C0", Offset = "0x29D67C0", VA = "0x1829D81C0")]
	public static float Dot(Vector2 lhs, Vector2 rhs)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x2F0ADE0", Offset = "0x2F093E0", VA = "0x182F0ADE0")]
	public static float Dot(in Vector2 lhs, in Vector2 rhs)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x2F0AAF0", Offset = "0x2F090F0", VA = "0x182F0AAF0")]
	public static float Angle(Vector2 from, Vector2 to)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x2F0A9D0", Offset = "0x2F08FD0", VA = "0x182F0A9D0")]
	public static float Angle(in Vector2 from, in Vector2 to)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x1EBACE0", Offset = "0x1EB92E0", VA = "0x181EBACE0")]
	public static float SignedAngle(Vector2 from, Vector2 to)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x2F0AD20", Offset = "0x2F09320", VA = "0x182F0AD20")]
	public static float Distance(Vector2 a, Vector2 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x2F0AC30", Offset = "0x2F09230", VA = "0x182F0AC30")]
	public static Vector2 ClampMagnitude(Vector2 vector, float maxLength)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x2F0AF90", Offset = "0x2F09590", VA = "0x182F0AF90")]
	public static Vector2 Min(Vector2 lhs, Vector2 rhs)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x2F0AF50", Offset = "0x2F09550", VA = "0x182F0AF50")]
	public static Vector2 Max(Vector2 lhs, Vector2 rhs)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x2F0B470", Offset = "0x2F09A70", VA = "0x182F0B470")]
	[ExcludeFromDocs]
	public static Vector2 SmoothDamp(Vector2 current, Vector2 target, ref Vector2 currentVelocity, float smoothTime, float maxSpeed)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x2F0B4D0", Offset = "0x2F09AD0", VA = "0x182F0B4D0")]
	[ExcludeFromDocs]
	public static Vector2 SmoothDamp(Vector2 current, Vector2 target, ref Vector2 currentVelocity, float smoothTime)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x2F0B1F0", Offset = "0x2F097F0", VA = "0x182F0B1F0")]
	public static Vector2 SmoothDamp(in Vector2 current, in Vector2 target, ref Vector2 currentVelocity, float smoothTime, [DefaultValue("Mathf.Infinity")] float maxSpeed, [DefaultValue("Time.deltaTime")] float deltaTime)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x2A729D0", Offset = "0x2A70FD0", VA = "0x182A729D0")]
	public static Vector2 operator +(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x2A730A0", Offset = "0x2A716A0", VA = "0x182A730A0")]
	public static Vector2 operator -(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x2343190", Offset = "0x2341790", VA = "0x182343190")]
	public static Vector2 operator *(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x23418B0", Offset = "0x233FEB0", VA = "0x1823418B0")]
	public static Vector2 operator /(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x2A73140", Offset = "0x2A71740", VA = "0x182A73140")]
	public static Vector2 operator -(Vector2 a)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x2A73040", Offset = "0x2A71640", VA = "0x182A73040")]
	public static Vector2 operator *(Vector2 a, float d)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x2A73070", Offset = "0x2A71670", VA = "0x182A73070")]
	public static Vector2 operator *(float d, Vector2 a)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x2A72A80", Offset = "0x2A71080", VA = "0x182A72A80")]
	public static Vector2 operator /(Vector2 a, float d)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B83")]
	[Address(RVA = "0x2F0BA90", Offset = "0x2F0A090", VA = "0x182F0BA90")]
	public static bool operator ==(Vector2 lhs, Vector2 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B84")]
	[Address(RVA = "0x2F0BAF0", Offset = "0x2F0A0F0", VA = "0x182F0BAF0")]
	public static bool operator !=(Vector2 lhs, Vector2 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x2ED21F0", Offset = "0x2ED07F0", VA = "0x182ED21F0")]
	public static implicit operator Vector2(Vector3 v)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x2F0BAE0", Offset = "0x2F0A0E0", VA = "0x182F0BAE0")]
	public static implicit operator Vector3(Vector2 v)
	{
		return default(Vector3);
	}
}
