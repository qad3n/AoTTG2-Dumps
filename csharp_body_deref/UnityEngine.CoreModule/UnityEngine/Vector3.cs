// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Vector3
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000145")]
[Il2CppEagerStaticClassConstruction]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[UnityEngine.Bindings.NativeType(Header = "Runtime/Math/Vector3.h")]
[UnityEngine.NativeClass("Vector3f")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/MathScripting.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/Vector3.h")]
public struct Vector3 : IEquatable<Vector3>, IFormattable
{
	[Token(Token = "0x4000544")]
	public const float kEpsilon = 1E-05f;

	[Token(Token = "0x4000545")]
	public const float kEpsilonNormalSqrt = 1E-15f;

	[Token(Token = "0x4000546")]
	[FieldOffset(Offset = "0x0")]
	public float x;

	[Token(Token = "0x4000547")]
	[FieldOffset(Offset = "0x4")]
	public float y;

	[Token(Token = "0x4000548")]
	[FieldOffset(Offset = "0x8")]
	public float z;

	[Token(Token = "0x4000549")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector3 zeroVector;

	[Token(Token = "0x400054A")]
	[FieldOffset(Offset = "0xC")]
	private static readonly Vector3 oneVector;

	[Token(Token = "0x400054B")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Vector3 upVector;

	[Token(Token = "0x400054C")]
	[FieldOffset(Offset = "0x24")]
	private static readonly Vector3 downVector;

	[Token(Token = "0x400054D")]
	[FieldOffset(Offset = "0x30")]
	private static readonly Vector3 leftVector;

	[Token(Token = "0x400054E")]
	[FieldOffset(Offset = "0x3C")]
	private static readonly Vector3 rightVector;

	[Token(Token = "0x400054F")]
	[FieldOffset(Offset = "0x48")]
	private static readonly Vector3 forwardVector;

	[Token(Token = "0x4000550")]
	[FieldOffset(Offset = "0x54")]
	private static readonly Vector3 backVector;

	[Token(Token = "0x4000551")]
	[FieldOffset(Offset = "0x60")]
	private static readonly Vector3 positiveInfinityVector;

	[Token(Token = "0x4000552")]
	[FieldOffset(Offset = "0x6C")]
	private static readonly Vector3 negativeInfinityVector;

	[Token(Token = "0x170001DF")]
	public float this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AAE")]
		[Address(RVA = "0x1DD5580", Offset = "0x1DD3B80", VA = "0x181DD5580")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AAF")]
		[Address(RVA = "0x2F0D9B0", Offset = "0x2F0BFB0", VA = "0x182F0D9B0")]
		set
		{
		}
	}

	[Token(Token = "0x170001E0")]
	public readonly Vector3 normalized
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000ABD")]
		[Address(RVA = "0x546B30", Offset = "0x545130", VA = "0x180546B30")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001E1")]
	public readonly float magnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AC7")]
		[Address(RVA = "0x2F0D5B0", Offset = "0x2F0BBB0", VA = "0x182F0D5B0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001E2")]
	public readonly float sqrMagnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AC9")]
		[Address(RVA = "0x29F0CF0", Offset = "0x29EF2F0", VA = "0x1829F0CF0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001E3")]
	public static Vector3 zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000ACE")]
		[Address(RVA = "0x2F0D830", Offset = "0x2F0BE30", VA = "0x182F0D830")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001E4")]
	public static Vector3 one
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000ACF")]
		[Address(RVA = "0x2F0D6F0", Offset = "0x2F0BCF0", VA = "0x182F0D6F0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001E5")]
	public static Vector3 forward
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AD0")]
		[Address(RVA = "0x2F0D510", Offset = "0x2F0BB10", VA = "0x182F0D510")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001E6")]
	public static Vector3 back
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AD1")]
		[Address(RVA = "0x2F0D470", Offset = "0x2F0BA70", VA = "0x182F0D470")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001E7")]
	public static Vector3 up
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AD2")]
		[Address(RVA = "0x2F0D7E0", Offset = "0x2F0BDE0", VA = "0x182F0D7E0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001E8")]
	public static Vector3 down
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AD3")]
		[Address(RVA = "0x2F0D4C0", Offset = "0x2F0BAC0", VA = "0x182F0D4C0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001E9")]
	public static Vector3 left
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AD4")]
		[Address(RVA = "0x2F0D560", Offset = "0x2F0BB60", VA = "0x182F0D560")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001EA")]
	public static Vector3 right
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AD5")]
		[Address(RVA = "0x2F0D790", Offset = "0x2F0BD90", VA = "0x182F0D790")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001EB")]
	public static Vector3 positiveInfinity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AD6")]
		[Address(RVA = "0x2F0D740", Offset = "0x2F0BD40", VA = "0x182F0D740")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001EC")]
	public static Vector3 negativeInfinity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AD7")]
		[Address(RVA = "0x2F0D6A0", Offset = "0x2F0BCA0", VA = "0x182F0D6A0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x6000AA1")]
	[Address(RVA = "0x2F0C380", Offset = "0x2F0A980", VA = "0x182F0C380")]
	[UnityEngine.Bindings.FreeFunction("VectorScripting::Slerp", IsThreadSafe = true)]
	private static Vector3 Internal_Slerp(in Vector3 a, in Vector3 b, float t)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AA2")]
	[Address(RVA = "0x2F0CD70", Offset = "0x2F0B370", VA = "0x182F0CD70")]
	public static Vector3 Slerp(Vector3 a, Vector3 b, float t)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x2F0C2A0", Offset = "0x2F0A8A0", VA = "0x182F0C2A0")]
	[UnityEngine.Bindings.FreeFunction("VectorScripting::SlerpUnclamped", IsThreadSafe = true)]
	private static Vector3 Internal_SlerpUnclamped(in Vector3 a, in Vector3 b, float t)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x2F0CCE0", Offset = "0x2F0B2E0", VA = "0x182F0CCE0")]
	public static Vector3 SlerpUnclamped(Vector3 a, Vector3 b, float t)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x2F0C850", Offset = "0x2F0AE50", VA = "0x182F0C850")]
	[UnityEngine.Bindings.FreeFunction("VectorScripting::OrthoNormalize", IsThreadSafe = true)]
	private static extern void OrthoNormalize2(ref Vector3 a, ref Vector3 b);

	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x2F0C850", Offset = "0x2F0AE50", VA = "0x182F0C850")]
	public static void OrthoNormalize(ref Vector3 normal, ref Vector3 tangent)
	{
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x2F0C1B0", Offset = "0x2F0A7B0", VA = "0x182F0C1B0")]
	[UnityEngine.Bindings.FreeFunction("VectorScripting::RotateTowards", IsThreadSafe = true)]
	private static Vector3 Internal_RotateTowards(in Vector3 current, in Vector3 target, float maxRadiansDelta, float maxMagnitudeDelta)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x2F0CB40", Offset = "0x2F0B140", VA = "0x182F0CB40")]
	public static Vector3 RotateTowards(Vector3 current, Vector3 target, float maxRadiansDelta, float maxMagnitudeDelta)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x2F0C3F0", Offset = "0x2F0A9F0", VA = "0x182F0C3F0")]
	public static Vector3 Lerp(Vector3 a, Vector3 b, float t)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x29F1010", Offset = "0x29EF610", VA = "0x1829F1010")]
	public static Vector3 LerpUnclamped(Vector3 a, Vector3 b, float t)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x2F0C5A0", Offset = "0x2F0ABA0", VA = "0x182F0C5A0")]
	public static Vector3 MoveTowards(Vector3 current, Vector3 target, float maxDistanceDelta)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x2F0D140", Offset = "0x2F0B740", VA = "0x182F0D140")]
	[ExcludeFromDocs]
	public static Vector3 SmoothDamp(Vector3 current, Vector3 target, ref Vector3 currentVelocity, float smoothTime, float maxSpeed)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x2F0CE00", Offset = "0x2F0B400", VA = "0x182F0CE00")]
	public static Vector3 SmoothDamp(in Vector3 current, in Vector3 target, ref Vector3 currentVelocity, float smoothTime, [DefaultValue("Mathf.Infinity")] float maxSpeed, [DefaultValue("Time.deltaTime")] float deltaTime)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x2A7BA20", Offset = "0x2A7A020", VA = "0x182A7BA20")]
	public Vector3(float x, float y, float z)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x2F0D450", Offset = "0x2F0BA50", VA = "0x182F0D450")]
	public Vector3(float x, float y)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x2F0CBE0", Offset = "0x2F0B1E0", VA = "0x182F0CBE0")]
	public static Vector3 Scale(Vector3 a, Vector3 b)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x2F0CC10", Offset = "0x2F0B210", VA = "0x182F0CC10")]
	public void Scale(Vector3 scale)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x2F0BF10", Offset = "0x2F0A510", VA = "0x182F0BF10")]
	public static Vector3 Cross(Vector3 lhs, Vector3 rhs)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AB5")]
	[Address(RVA = "0x2F0C0E0", Offset = "0x2F0A6E0", VA = "0x182F0C0E0", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AB6")]
	[Address(RVA = "0x2F0C040", Offset = "0x2F0A640", VA = "0x182F0C040", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x2A7B5D0", Offset = "0x2A79BD0", VA = "0x182A7B5D0", Slot = "4")]
	public readonly bool Equals(Vector3 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x2A7B5D0", Offset = "0x2A79BD0", VA = "0x182A7B5D0")]
	public readonly bool Equals(in Vector3 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x2F0CAD0", Offset = "0x2F0B0D0", VA = "0x182F0CAD0")]
	public static Vector3 Reflect(Vector3 inDirection, Vector3 inNormal)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x2F0C7B0", Offset = "0x2F0ADB0", VA = "0x182F0C7B0")]
	public static Vector3 Normalize(Vector3 value)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0x2F0C710", Offset = "0x2F0AD10", VA = "0x182F0C710")]
	public static Vector3 Normalize(in Vector3 value)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x1D9E360", Offset = "0x1D9C960", VA = "0x181D9E360")]
	public void Normalize()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x29D8190", Offset = "0x29D6790", VA = "0x1829D8190")]
	public static float Dot(Vector3 lhs, Vector3 rhs)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x29D8190", Offset = "0x29D6790", VA = "0x1829D8190")]
	public static float Dot(in Vector3 lhs, in Vector3 rhs)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x2F0C9B0", Offset = "0x2F0AFB0", VA = "0x182F0C9B0")]
	public static Vector3 Project(Vector3 vector, Vector3 onNormal)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x2F0C8A0", Offset = "0x2F0AEA0", VA = "0x182F0C8A0")]
	public static Vector3 ProjectOnPlane(Vector3 vector, Vector3 planeNormal)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x2F0BCA0", Offset = "0x2F0A2A0", VA = "0x182F0BCA0")]
	public static float Angle(Vector3 from, Vector3 to)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x2F0BB40", Offset = "0x2F0A140", VA = "0x182F0BB40")]
	public static float Angle(in Vector3 from, in Vector3 to)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC4")]
	[Address(RVA = "0x2F0CC30", Offset = "0x2F0B230", VA = "0x182F0CC30")]
	public static float SignedAngle(Vector3 from, Vector3 to, Vector3 axis)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x2F0BF70", Offset = "0x2F0A570", VA = "0x182F0BF70")]
	public static float Distance(Vector3 a, Vector3 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC6")]
	[Address(RVA = "0x2F0BE00", Offset = "0x2F0A400", VA = "0x182F0BE00")]
	public static Vector3 ClampMagnitude(Vector3 vector, float maxLength)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC8")]
	[Address(RVA = "0x29F0CF0", Offset = "0x29EF2F0", VA = "0x1829F0CF0")]
	public static float SqrMagnitude(Vector3 vector)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ACA")]
	[Address(RVA = "0x2F0C500", Offset = "0x2F0AB00", VA = "0x182F0C500")]
	public static Vector3 Min(Vector3 lhs, Vector3 rhs)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ACB")]
	[Address(RVA = "0x2F0C550", Offset = "0x2F0AB50", VA = "0x182F0C550")]
	public static Vector3 Min(in Vector3 lhs, in Vector3 rhs)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ACC")]
	[Address(RVA = "0x2F0C4B0", Offset = "0x2F0AAB0", VA = "0x182F0C4B0")]
	public static Vector3 Max(Vector3 lhs, Vector3 rhs)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ACD")]
	[Address(RVA = "0x2F0C460", Offset = "0x2F0AA60", VA = "0x182F0C460")]
	public static Vector3 Max(in Vector3 lhs, in Vector3 rhs)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x2F0D880", Offset = "0x2F0BE80", VA = "0x182F0D880")]
	public static Vector3 operator +(Vector3 a, Vector3 b)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AD9")]
	[Address(RVA = "0x2F0D980", Offset = "0x2F0BF80", VA = "0x182F0D980")]
	public static Vector3 operator -(Vector3 a, Vector3 b)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ADA")]
	[Address(RVA = "0x2A7C320", Offset = "0x2A7A920", VA = "0x182A7C320")]
	public static Vector3 operator -(Vector3 a)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x2F0D960", Offset = "0x2F0BF60", VA = "0x182F0D960")]
	public static Vector3 operator *(Vector3 a, float d)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x2F0D930", Offset = "0x2F0BF30", VA = "0x182F0D930")]
	public static Vector3 operator *(float d, Vector3 a)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x582660", Offset = "0x580C60", VA = "0x180582660")]
	public static Vector3 operator /(Vector3 a, float d)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x2F0D8B0", Offset = "0x2F0BEB0", VA = "0x182F0D8B0")]
	public static bool operator ==(Vector3 lhs, Vector3 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x2F0D8F0", Offset = "0x2F0BEF0", VA = "0x182F0D8F0")]
	public static bool operator !=(Vector3 lhs, Vector3 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x2F0D1D0", Offset = "0x2F0B7D0", VA = "0x182F0D1D0", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x2F0D1E0", Offset = "0x2F0B7E0", VA = "0x182F0D1E0", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x2F0C310", Offset = "0x2F0A910", VA = "0x182F0C310")]
	private static extern void Internal_Slerp_Injected(in Vector3 a, in Vector3 b, float t, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x2F0C230", Offset = "0x2F0A830", VA = "0x182F0C230")]
	private static extern void Internal_SlerpUnclamped_Injected(in Vector3 a, in Vector3 b, float t, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AE5")]
	[Address(RVA = "0x2F0C140", Offset = "0x2F0A740", VA = "0x182F0C140")]
	private static extern void Internal_RotateTowards_Injected(in Vector3 current, in Vector3 target, float maxRadiansDelta, float maxMagnitudeDelta, out Vector3 ret);
}
