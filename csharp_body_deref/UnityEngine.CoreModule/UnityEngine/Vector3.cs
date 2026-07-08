using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200011C")]
[Il2CppEagerStaticClassConstruction]
[UnityEngine.Bindings.NativeType(Header = "Runtime/Math/Vector3.h")]
[UnityEngine.NativeClass("Vector3f")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/MathScripting.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/Vector3.h")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
public struct Vector3 : IEquatable<Vector3>, IFormattable
{
	[Token(Token = "0x40004DC")]
	public const float kEpsilon = 1E-05f;

	[Token(Token = "0x40004DD")]
	public const float kEpsilonNormalSqrt = 1E-15f;

	[Token(Token = "0x40004DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public float x;

	[Token(Token = "0x40004DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public float y;

	[Token(Token = "0x40004E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public float z;

	[Token(Token = "0x40004E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Vector3 zeroVector;

	[Token(Token = "0x40004E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	private static readonly Vector3 oneVector;

	[Token(Token = "0x40004E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly Vector3 upVector;

	[Token(Token = "0x40004E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private static readonly Vector3 downVector;

	[Token(Token = "0x40004E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static readonly Vector3 leftVector;

	[Token(Token = "0x40004E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	private static readonly Vector3 rightVector;

	[Token(Token = "0x40004E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static readonly Vector3 forwardVector;

	[Token(Token = "0x40004E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	private static readonly Vector3 backVector;

	[Token(Token = "0x40004E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private static readonly Vector3 positiveInfinityVector;

	[Token(Token = "0x40004EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	private static readonly Vector3 negativeInfinityVector;

	[Token(Token = "0x1700017C")]
	public float this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60007EC")]
		[Address(RVA = "0x4AC24D0", Offset = "0x4AC24D0", VA = "0x4AC24D0")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60007ED")]
		[Address(RVA = "0x4AC2540", Offset = "0x4AC2540", VA = "0x4AC2540")]
		set
		{
		}
	}

	[Token(Token = "0x1700017D")]
	public Vector3 normalized
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60007F9")]
		[Address(RVA = "0x4AC2A10", Offset = "0x4AC2A10", VA = "0x4AC2A10")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700017E")]
	public float magnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000802")]
		[Address(RVA = "0x4AC33A0", Offset = "0x4AC33A0", VA = "0x4AC33A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700017F")]
	public float sqrMagnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000803")]
		[Address(RVA = "0x4AC3430", Offset = "0x4AC3430", VA = "0x4AC3430")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000180")]
	public static Vector3 zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000806")]
		[Address(RVA = "0x4AC3470", Offset = "0x4AC3470", VA = "0x4AC3470")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000181")]
	public static Vector3 one
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000807")]
		[Address(RVA = "0x4AC34B0", Offset = "0x4AC34B0", VA = "0x4AC34B0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000182")]
	public static Vector3 forward
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000808")]
		[Address(RVA = "0x4AC34F0", Offset = "0x4AC34F0", VA = "0x4AC34F0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000183")]
	public static Vector3 back
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000809")]
		[Address(RVA = "0x4AC3530", Offset = "0x4AC3530", VA = "0x4AC3530")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000184")]
	public static Vector3 up
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600080A")]
		[Address(RVA = "0x4AC3570", Offset = "0x4AC3570", VA = "0x4AC3570")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000185")]
	public static Vector3 down
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600080B")]
		[Address(RVA = "0x4AC35B0", Offset = "0x4AC35B0", VA = "0x4AC35B0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000186")]
	public static Vector3 left
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600080C")]
		[Address(RVA = "0x4AC35F0", Offset = "0x4AC35F0", VA = "0x4AC35F0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000187")]
	public static Vector3 right
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600080D")]
		[Address(RVA = "0x4AC3630", Offset = "0x4AC3630", VA = "0x4AC3630")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000188")]
	public static Vector3 positiveInfinity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600080E")]
		[Address(RVA = "0x4AC3670", Offset = "0x4AC3670", VA = "0x4AC3670")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000189")]
	public static Vector3 negativeInfinity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600080F")]
		[Address(RVA = "0x4AC36B0", Offset = "0x4AC36B0", VA = "0x4AC36B0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x4AC1B90", Offset = "0x4AC1B90", VA = "0x4AC1B90")]
	[UnityEngine.Bindings.FreeFunction("VectorScripting::Slerp", IsThreadSafe = true)]
	public static Vector3 Slerp(Vector3 a, Vector3 b, float t)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60007E3")]
	[Address(RVA = "0x4AC1C70", Offset = "0x4AC1C70", VA = "0x4AC1C70")]
	[UnityEngine.Bindings.FreeFunction("VectorScripting::SlerpUnclamped", IsThreadSafe = true)]
	public static Vector3 SlerpUnclamped(Vector3 a, Vector3 b, float t)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007E4")]
	[Address(RVA = "0x4AC1D50", Offset = "0x4AC1D50", VA = "0x4AC1D50")]
	[UnityEngine.Bindings.FreeFunction("VectorScripting::OrthoNormalize", IsThreadSafe = true)]
	private static extern void OrthoNormalize2(ref Vector3 a, ref Vector3 b);

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x4AC1D90", Offset = "0x4AC1D90", VA = "0x4AC1D90")]
	public static void OrthoNormalize(ref Vector3 normal, ref Vector3 tangent)
	{
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x4AC1DD0", Offset = "0x4AC1DD0", VA = "0x4AC1DD0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static Vector3 RotateTowards(Vector3 current, Vector3 target, float maxRadiansDelta, float maxMagnitudeDelta)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x4AC1EC0", Offset = "0x4AC1EC0", VA = "0x4AC1EC0")]
	public static Vector3 Lerp(Vector3 a, Vector3 b, float t)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x4AC1F00", Offset = "0x4AC1F00", VA = "0x4AC1F00")]
	public static Vector3 LerpUnclamped(Vector3 a, Vector3 b, float t)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x4AC1F20", Offset = "0x4AC1F20", VA = "0x4AC1F20")]
	public static Vector3 MoveTowards(Vector3 current, Vector3 target, float maxDistanceDelta)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x4AC20C0", Offset = "0x4AC20C0", VA = "0x4AC20C0")]
	[ExcludeFromDocs]
	public static Vector3 SmoothDamp(Vector3 current, Vector3 target, ref Vector3 currentVelocity, float smoothTime, float maxSpeed)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x4AC2120", Offset = "0x4AC2120", VA = "0x4AC2120")]
	public static Vector3 SmoothDamp(Vector3 current, Vector3 target, ref Vector3 currentVelocity, float smoothTime, [DefaultValue("Mathf.Infinity")] float maxSpeed, [DefaultValue("Time.deltaTime")] float deltaTime)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x4AC25B0", Offset = "0x4AC25B0", VA = "0x4AC25B0")]
	public Vector3(float x, float y, float z)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007EF")]
	[Address(RVA = "0x4AC25C0", Offset = "0x4AC25C0", VA = "0x4AC25C0")]
	public Vector3(float x, float y)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x4AC25E0", Offset = "0x4AC25E0", VA = "0x4AC25E0")]
	public static Vector3 Scale(Vector3 a, Vector3 b)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x4AC25F0", Offset = "0x4AC25F0", VA = "0x4AC25F0")]
	public void Scale(Vector3 scale)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x4AC2620", Offset = "0x4AC2620", VA = "0x4AC2620")]
	public static Vector3 Cross(Vector3 lhs, Vector3 rhs)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007F3")]
	[Address(RVA = "0x4AC2670", Offset = "0x4AC2670", VA = "0x4AC2670", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007F4")]
	[Address(RVA = "0x4AC26B0", Offset = "0x4AC26B0", VA = "0x4AC26B0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007F5")]
	[Address(RVA = "0x4AC2740", Offset = "0x4AC2740", VA = "0x4AC2740", Slot = "4")]
	public bool Equals(Vector3 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x4AC2770", Offset = "0x4AC2770", VA = "0x4AC2770")]
	public static Vector3 Reflect(Vector3 inDirection, Vector3 inNormal)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x4AC27C0", Offset = "0x4AC27C0", VA = "0x4AC27C0")]
	public static Vector3 Normalize(Vector3 value)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x4AC28E0", Offset = "0x4AC28E0", VA = "0x4AC28E0")]
	public void Normalize()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x4AC2B40", Offset = "0x4AC2B40", VA = "0x4AC2B40")]
	public static float Dot(Vector3 lhs, Vector3 rhs)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x4AC2B60", Offset = "0x4AC2B60", VA = "0x4AC2B60")]
	public static Vector3 Project(Vector3 vector, Vector3 onNormal)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x4AC2C60", Offset = "0x4AC2C60", VA = "0x4AC2C60")]
	public static Vector3 ProjectOnPlane(Vector3 vector, Vector3 planeNormal)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x4AC2D40", Offset = "0x4AC2D40", VA = "0x4AC2D40")]
	public static float Angle(Vector3 from, Vector3 to)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x4AC2F00", Offset = "0x4AC2F00", VA = "0x4AC2F00")]
	public static float SignedAngle(Vector3 from, Vector3 to, Vector3 axis)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x4AC3150", Offset = "0x4AC3150", VA = "0x4AC3150")]
	public static float Distance(Vector3 a, Vector3 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000800")]
	[Address(RVA = "0x4AC3210", Offset = "0x4AC3210", VA = "0x4AC3210")]
	public static Vector3 ClampMagnitude(Vector3 vector, float maxLength)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000801")]
	[Address(RVA = "0x4AC3300", Offset = "0x4AC3300", VA = "0x4AC3300")]
	public static float Magnitude(Vector3 vector)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000804")]
	[Address(RVA = "0x4AC3450", Offset = "0x4AC3450", VA = "0x4AC3450")]
	public static Vector3 Min(Vector3 lhs, Vector3 rhs)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000805")]
	[Address(RVA = "0x4AC3460", Offset = "0x4AC3460", VA = "0x4AC3460")]
	public static Vector3 Max(Vector3 lhs, Vector3 rhs)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000810")]
	[Address(RVA = "0x4AC36F0", Offset = "0x4AC36F0", VA = "0x4AC36F0")]
	public static Vector3 operator +(Vector3 a, Vector3 b)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000811")]
	[Address(RVA = "0x4AC3700", Offset = "0x4AC3700", VA = "0x4AC3700")]
	public static Vector3 operator -(Vector3 a, Vector3 b)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000812")]
	[Address(RVA = "0x4AC3710", Offset = "0x4AC3710", VA = "0x4AC3710")]
	public static Vector3 operator -(Vector3 a)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000813")]
	[Address(RVA = "0x4AC3720", Offset = "0x4AC3720", VA = "0x4AC3720")]
	public static Vector3 operator *(Vector3 a, float d)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000814")]
	[Address(RVA = "0x4AC3730", Offset = "0x4AC3730", VA = "0x4AC3730")]
	public static Vector3 operator *(float d, Vector3 a)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000815")]
	[Address(RVA = "0x4AC3740", Offset = "0x4AC3740", VA = "0x4AC3740")]
	public static Vector3 operator /(Vector3 a, float d)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000816")]
	[Address(RVA = "0x4AC3750", Offset = "0x4AC3750", VA = "0x4AC3750")]
	public static bool operator ==(Vector3 lhs, Vector3 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000817")]
	[Address(RVA = "0x4AC3790", Offset = "0x4AC3790", VA = "0x4AC3790")]
	public static bool operator !=(Vector3 lhs, Vector3 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000818")]
	[Address(RVA = "0x4AC37D0", Offset = "0x4AC37D0", VA = "0x4AC37D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000819")]
	[Address(RVA = "0x4AC37E0", Offset = "0x4AC37E0", VA = "0x4AC37E0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600081B")]
	[Address(RVA = "0x4AC1C10", Offset = "0x4AC1C10", VA = "0x4AC1C10")]
	private static extern void Slerp_Injected([In] ref Vector3 a, [In] ref Vector3 b, float t, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600081C")]
	[Address(RVA = "0x4AC1CF0", Offset = "0x4AC1CF0", VA = "0x4AC1CF0")]
	private static extern void SlerpUnclamped_Injected([In] ref Vector3 a, [In] ref Vector3 b, float t, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600081D")]
	[Address(RVA = "0x4AC1E60", Offset = "0x4AC1E60", VA = "0x4AC1E60")]
	private static extern void RotateTowards_Injected([In] ref Vector3 current, [In] ref Vector3 target, float maxRadiansDelta, float maxMagnitudeDelta, out Vector3 ret);
}
