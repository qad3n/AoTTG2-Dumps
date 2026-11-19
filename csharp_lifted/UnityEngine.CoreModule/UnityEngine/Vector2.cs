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

[Token(Token = "0x2000149")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[UnityEngine.NativeClass("Vector2f")]
[Il2CppEagerStaticClassConstruction]
public struct Vector2 : IEquatable<Vector2>, IFormattable
{
	[Token(Token = "0x400055F")]
	[FieldOffset(Offset = "0x0")]
	public float x;

	[Token(Token = "0x4000560")]
	[FieldOffset(Offset = "0x4")]
	public float y;

	[Token(Token = "0x4000561")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector2 zeroVector;

	[Token(Token = "0x4000562")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Vector2 oneVector;

	[Token(Token = "0x4000563")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Vector2 upVector;

	[Token(Token = "0x4000564")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Vector2 downVector;

	[Token(Token = "0x4000565")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Vector2 leftVector;

	[Token(Token = "0x4000566")]
	[FieldOffset(Offset = "0x28")]
	private static readonly Vector2 rightVector;

	[Token(Token = "0x4000567")]
	[FieldOffset(Offset = "0x30")]
	private static readonly Vector2 positiveInfinityVector;

	[Token(Token = "0x4000568")]
	[FieldOffset(Offset = "0x38")]
	private static readonly Vector2 negativeInfinityVector;

	[Token(Token = "0x4000569")]
	public const float kEpsilon = 1E-05f;

	[Token(Token = "0x400056A")]
	public const float kEpsilonNormalSqrt = 1E-15f;

	[Token(Token = "0x170001F6")]
	public float this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B6D")]
		[Address(RVA = "0x6907AF0", Offset = "0x6906AF0", VA = "0x6907AF0")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B6E")]
		[Address(RVA = "0x6907B50", Offset = "0x6906B50", VA = "0x6907B50")]
		set
		{
		}
	}

	[Token(Token = "0x170001F7")]
	public readonly Vector2 normalized
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B77")]
		[Address(RVA = "0x6907EC0", Offset = "0x6906EC0", VA = "0x6907EC0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170001F8")]
	public readonly float magnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B81")]
		[Address(RVA = "0x6908200", Offset = "0x6907200", VA = "0x6908200")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001F9")]
	public readonly float sqrMagnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B82")]
		[Address(RVA = "0x6908280", Offset = "0x6907280", VA = "0x6908280")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001FA")]
	public static Vector2 zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B99")]
		[Address(RVA = "0x6908B30", Offset = "0x6907B30", VA = "0x6908B30")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170001FB")]
	public static Vector2 one
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B9A")]
		[Address(RVA = "0x6908B70", Offset = "0x6907B70", VA = "0x6908B70")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170001FC")]
	public static Vector2 up
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B9B")]
		[Address(RVA = "0x6908BB0", Offset = "0x6907BB0", VA = "0x6908BB0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170001FD")]
	public static Vector2 down
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B9C")]
		[Address(RVA = "0x6908BF0", Offset = "0x6907BF0", VA = "0x6908BF0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170001FE")]
	public static Vector2 left
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B9D")]
		[Address(RVA = "0x6908C30", Offset = "0x6907C30", VA = "0x6908C30")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x170001FF")]
	public static Vector2 right
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B9E")]
		[Address(RVA = "0x6908C70", Offset = "0x6907C70", VA = "0x6908C70")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000200")]
	public static Vector2 positiveInfinity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B9F")]
		[Address(RVA = "0x6908CB0", Offset = "0x6907CB0", VA = "0x6908CB0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000201")]
	public static Vector2 negativeInfinity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BA0")]
		[Address(RVA = "0x6908CF0", Offset = "0x6907CF0", VA = "0x6908CF0")]
		get
		{
			return default(Vector2);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x6907BB0", Offset = "0x6906BB0", VA = "0x6907BB0")]
	public Vector2(float x, float y)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x6907BC0", Offset = "0x6906BC0", VA = "0x6907BC0")]
	public void Set(float newX, float newY)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x6907BD0", Offset = "0x6906BD0", VA = "0x6907BD0")]
	public static Vector2 Lerp(Vector2 a, Vector2 b, float t)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x6907C00", Offset = "0x6906C00", VA = "0x6907C00")]
	public static Vector2 LerpUnclamped(Vector2 a, Vector2 b, float t)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x6907C10", Offset = "0x6906C10", VA = "0x6907C10")]
	public static Vector2 MoveTowards(Vector2 current, Vector2 target, float maxDistanceDelta)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x6907D20", Offset = "0x6906D20", VA = "0x6907D20")]
	public static Vector2 Scale(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x6907D30", Offset = "0x6906D30", VA = "0x6907D30")]
	public static Vector2 Normalize(in Vector2 value)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x6907E10", Offset = "0x6906E10", VA = "0x6907E10")]
	public void Normalize()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x6907FA0", Offset = "0x6906FA0", VA = "0x6907FA0", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x6907FB0", Offset = "0x6906FB0", VA = "0x6907FB0", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x69080A0", Offset = "0x69070A0", VA = "0x69080A0", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x69080D0", Offset = "0x69070D0", VA = "0x69080D0", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x6908150", Offset = "0x6907150", VA = "0x6908150", Slot = "4")]
	public readonly bool Equals(Vector2 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x6908170", Offset = "0x6907170", VA = "0x6908170")]
	public readonly bool Equals(in Vector2 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x69081A0", Offset = "0x69071A0", VA = "0x69081A0")]
	public static Vector2 Reflect(Vector2 inDirection, Vector2 inNormal)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x69081D0", Offset = "0x69071D0", VA = "0x69081D0")]
	public static float Dot(Vector2 lhs, Vector2 rhs)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x69081E0", Offset = "0x69071E0", VA = "0x69081E0")]
	public static float Dot(in Vector2 lhs, in Vector2 rhs)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B83")]
	[Address(RVA = "0x69082A0", Offset = "0x69072A0", VA = "0x69082A0")]
	public static float Angle(Vector2 from, Vector2 to)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B84")]
	[Address(RVA = "0x69083C0", Offset = "0x69073C0", VA = "0x69083C0")]
	public static float Angle(in Vector2 from, in Vector2 to)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x69084D0", Offset = "0x69074D0", VA = "0x69084D0")]
	public static float SignedAngle(Vector2 from, Vector2 to)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x6908630", Offset = "0x6907630", VA = "0x6908630")]
	public static float Distance(Vector2 a, Vector2 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x69086C0", Offset = "0x69076C0", VA = "0x69086C0")]
	public static Vector2 ClampMagnitude(Vector2 vector, float maxLength)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B88")]
	[Address(RVA = "0x6908780", Offset = "0x6907780", VA = "0x6908780")]
	public static Vector2 Min(Vector2 lhs, Vector2 rhs)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B89")]
	[Address(RVA = "0x6908790", Offset = "0x6907790", VA = "0x6908790")]
	public static Vector2 Max(Vector2 lhs, Vector2 rhs)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x69087A0", Offset = "0x69077A0", VA = "0x69087A0")]
	[ExcludeFromDocs]
	public static Vector2 SmoothDamp(Vector2 current, Vector2 target, ref Vector2 currentVelocity, float smoothTime, float maxSpeed)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x6908A00", Offset = "0x6907A00", VA = "0x6908A00")]
	[ExcludeFromDocs]
	public static Vector2 SmoothDamp(Vector2 current, Vector2 target, ref Vector2 currentVelocity, float smoothTime)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000B8C")]
	[Address(RVA = "0x69087F0", Offset = "0x69077F0", VA = "0x69087F0")]
	public static Vector2 SmoothDamp(in Vector2 current, in Vector2 target, ref Vector2 currentVelocity, float smoothTime, [DefaultValue("Mathf.Infinity")] float maxSpeed, [DefaultValue("Time.deltaTime")] float deltaTime)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B8D")]
	[Address(RVA = "0x6908A50", Offset = "0x6907A50", VA = "0x6908A50")]
	public static Vector2 operator +(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B8E")]
	[Address(RVA = "0x6908A60", Offset = "0x6907A60", VA = "0x6908A60")]
	public static Vector2 operator -(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x6908A70", Offset = "0x6907A70", VA = "0x6908A70")]
	public static Vector2 operator *(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x6908A80", Offset = "0x6907A80", VA = "0x6908A80")]
	public static Vector2 operator /(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x6908A90", Offset = "0x6907A90", VA = "0x6908A90")]
	public static Vector2 operator -(Vector2 a)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x6908AA0", Offset = "0x6907AA0", VA = "0x6908AA0")]
	public static Vector2 operator *(Vector2 a, float d)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B93")]
	[Address(RVA = "0x6908AB0", Offset = "0x6907AB0", VA = "0x6908AB0")]
	public static Vector2 operator *(float d, Vector2 a)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x6908AC0", Offset = "0x6907AC0", VA = "0x6908AC0")]
	public static Vector2 operator /(Vector2 a, float d)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x6908AD0", Offset = "0x6907AD0", VA = "0x6908AD0")]
	public static bool operator ==(Vector2 lhs, Vector2 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B96")]
	[Address(RVA = "0x6908AF0", Offset = "0x6907AF0", VA = "0x6908AF0")]
	public static bool operator !=(Vector2 lhs, Vector2 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B97")]
	[Address(RVA = "0x6908B10", Offset = "0x6907B10", VA = "0x6908B10")]
	public static implicit operator Vector2(Vector3 v)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x6908B20", Offset = "0x6907B20", VA = "0x6908B20")]
	public static implicit operator Vector3(Vector2 v)
	{
		return default(Vector3);
	}
}
