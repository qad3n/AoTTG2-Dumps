using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200011D")]
[UnityEngine.Scripting.UsedByNativeCode]
[Il2CppEagerStaticClassConstruction]
[UnityEngine.Bindings.NativeType(Header = "Runtime/Math/Quaternion.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/MathScripting.h")]
public struct Quaternion : IEquatable<Quaternion>, IFormattable
{
	[Token(Token = "0x40004EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public float x;

	[Token(Token = "0x40004EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public float y;

	[Token(Token = "0x40004ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public float z;

	[Token(Token = "0x40004EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public float w;

	[Token(Token = "0x40004EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Quaternion identityQuaternion;

	[Token(Token = "0x40004F0")]
	public const float kEpsilon = 1E-06f;

	[Token(Token = "0x1700018A")]
	public float this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000829")]
		[Address(RVA = "0x4AC42A0", Offset = "0x4AC42A0", VA = "0x4AC42A0")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600082A")]
		[Address(RVA = "0x4AC4320", Offset = "0x4AC4320", VA = "0x4AC4320")]
		set
		{
		}
	}

	[Token(Token = "0x1700018B")]
	public static Quaternion identity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600082C")]
		[Address(RVA = "0x4AC43C0", Offset = "0x4AC43C0", VA = "0x4AC43C0")]
		get
		{
			return default(Quaternion);
		}
	}

	[Token(Token = "0x1700018C")]
	public Vector3 eulerAngles
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000835")]
		[Address(RVA = "0x4AC4740", Offset = "0x4AC4740", VA = "0x4AC4740")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x600081E")]
	[Address(RVA = "0x4AC3B00", Offset = "0x4AC3B00", VA = "0x4AC3B00")]
	[UnityEngine.Bindings.FreeFunction("FromToQuaternionSafe", IsThreadSafe = true)]
	public static Quaternion FromToRotation(Vector3 fromDirection, Vector3 toDirection)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x600081F")]
	[Address(RVA = "0x4AC3BA0", Offset = "0x4AC3BA0", VA = "0x4AC3BA0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static Quaternion Inverse(Quaternion rotation)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000820")]
	[Address(RVA = "0x4AC3C30", Offset = "0x4AC3C30", VA = "0x4AC3C30")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::Slerp", IsThreadSafe = true)]
	public static Quaternion Slerp(Quaternion a, Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000821")]
	[Address(RVA = "0x4AC3D00", Offset = "0x4AC3D00", VA = "0x4AC3D00")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::SlerpUnclamped", IsThreadSafe = true)]
	public static Quaternion SlerpUnclamped(Quaternion a, Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x4AC3DD0", Offset = "0x4AC3DD0", VA = "0x4AC3DD0")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::Lerp", IsThreadSafe = true)]
	public static Quaternion Lerp(Quaternion a, Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x4AC3EA0", Offset = "0x4AC3EA0", VA = "0x4AC3EA0")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::LerpUnclamped", IsThreadSafe = true)]
	public static Quaternion LerpUnclamped(Quaternion a, Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x4AC3F70", Offset = "0x4AC3F70", VA = "0x4AC3F70")]
	[UnityEngine.Bindings.FreeFunction("EulerToQuaternion", IsThreadSafe = true)]
	private static Quaternion Internal_FromEulerRad(Vector3 euler)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x4AC4000", Offset = "0x4AC4000", VA = "0x4AC4000")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::ToEuler", IsThreadSafe = true)]
	private static Vector3 Internal_ToEulerRad(Quaternion rotation)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x4AC40A0", Offset = "0x4AC40A0", VA = "0x4AC40A0")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::AngleAxis", IsThreadSafe = true)]
	public static Quaternion AngleAxis(float angle, Vector3 axis)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000827")]
	[Address(RVA = "0x4AC4150", Offset = "0x4AC4150", VA = "0x4AC4150")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::LookRotation", IsThreadSafe = true)]
	public static Quaternion LookRotation(Vector3 forward, [DefaultValue("Vector3.up")] Vector3 upwards)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000828")]
	[Address(RVA = "0x4AC41F0", Offset = "0x4AC41F0", VA = "0x4AC41F0")]
	[ExcludeFromDocs]
	public static Quaternion LookRotation(Vector3 forward)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600082B")]
	[Address(RVA = "0x4AC43A0", Offset = "0x4AC43A0", VA = "0x4AC43A0")]
	public Quaternion(float x, float y, float z, float w)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600082D")]
	[Address(RVA = "0x4AC4400", Offset = "0x4AC4400", VA = "0x4AC4400")]
	public static Quaternion operator *(Quaternion lhs, Quaternion rhs)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x600082E")]
	[Address(RVA = "0x4AC44C0", Offset = "0x4AC44C0", VA = "0x4AC44C0")]
	public static Vector3 operator *(Quaternion rotation, Vector3 point)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600082F")]
	[Address(RVA = "0x4AC45C0", Offset = "0x4AC45C0", VA = "0x4AC45C0")]
	private static bool IsEqualUsingDot(float dot)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000830")]
	[Address(RVA = "0x4AC45D0", Offset = "0x4AC45D0", VA = "0x4AC45D0")]
	public static bool operator ==(Quaternion lhs, Quaternion rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000831")]
	[Address(RVA = "0x4AC4600", Offset = "0x4AC4600", VA = "0x4AC4600")]
	public static bool operator !=(Quaternion lhs, Quaternion rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000832")]
	[Address(RVA = "0x4AC4630", Offset = "0x4AC4630", VA = "0x4AC4630")]
	public static float Dot(Quaternion a, Quaternion b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000833")]
	[Address(RVA = "0x4AC4660", Offset = "0x4AC4660", VA = "0x4AC4660")]
	public static float Angle(Quaternion a, Quaternion b)
	{
		return default(float);
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x4AC46B0", Offset = "0x4AC46B0", VA = "0x4AC46B0")]
	private static Vector3 Internal_MakePositive(Vector3 euler)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000836")]
	[Address(RVA = "0x4AC4830", Offset = "0x4AC4830", VA = "0x4AC4830")]
	public static Quaternion Euler(float x, float y, float z)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000837")]
	[Address(RVA = "0x4AC48A0", Offset = "0x4AC48A0", VA = "0x4AC48A0")]
	public static Quaternion Euler(Vector3 euler)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000838")]
	[Address(RVA = "0x4AC4900", Offset = "0x4AC4900", VA = "0x4AC4900")]
	public static Quaternion RotateTowards(Quaternion from, Quaternion to, float maxDegreesDelta)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000839")]
	[Address(RVA = "0x4AC4A20", Offset = "0x4AC4A20", VA = "0x4AC4A20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600083A")]
	[Address(RVA = "0x4AC4A80", Offset = "0x4AC4A80", VA = "0x4AC4A80", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600083B")]
	[Address(RVA = "0x4AC4B40", Offset = "0x4AC4B40", VA = "0x4AC4B40", Slot = "4")]
	public bool Equals(Quaternion other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600083C")]
	[Address(RVA = "0x4AC4BB0", Offset = "0x4AC4BB0", VA = "0x4AC4BB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600083D")]
	[Address(RVA = "0x4AC4BC0", Offset = "0x4AC4BC0", VA = "0x4AC4BC0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600083F")]
	[Address(RVA = "0x4AC3B60", Offset = "0x4AC3B60", VA = "0x4AC3B60")]
	private static extern void FromToRotation_Injected([In] ref Vector3 fromDirection, [In] ref Vector3 toDirection, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000840")]
	[Address(RVA = "0x4AC3BF0", Offset = "0x4AC3BF0", VA = "0x4AC3BF0")]
	private static extern void Inverse_Injected([In] ref Quaternion rotation, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000841")]
	[Address(RVA = "0x4AC3CA0", Offset = "0x4AC3CA0", VA = "0x4AC3CA0")]
	private static extern void Slerp_Injected([In] ref Quaternion a, [In] ref Quaternion b, float t, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000842")]
	[Address(RVA = "0x4AC3D70", Offset = "0x4AC3D70", VA = "0x4AC3D70")]
	private static extern void SlerpUnclamped_Injected([In] ref Quaternion a, [In] ref Quaternion b, float t, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000843")]
	[Address(RVA = "0x4AC3E40", Offset = "0x4AC3E40", VA = "0x4AC3E40")]
	private static extern void Lerp_Injected([In] ref Quaternion a, [In] ref Quaternion b, float t, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000844")]
	[Address(RVA = "0x4AC3F10", Offset = "0x4AC3F10", VA = "0x4AC3F10")]
	private static extern void LerpUnclamped_Injected([In] ref Quaternion a, [In] ref Quaternion b, float t, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000845")]
	[Address(RVA = "0x4AC3FC0", Offset = "0x4AC3FC0", VA = "0x4AC3FC0")]
	private static extern void Internal_FromEulerRad_Injected([In] ref Vector3 euler, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000846")]
	[Address(RVA = "0x4AC4060", Offset = "0x4AC4060", VA = "0x4AC4060")]
	private static extern void Internal_ToEulerRad_Injected([In] ref Quaternion rotation, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000847")]
	[Address(RVA = "0x4AC4100", Offset = "0x4AC4100", VA = "0x4AC4100")]
	private static extern void AngleAxis_Injected(float angle, [In] ref Vector3 axis, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000848")]
	[Address(RVA = "0x4AC41B0", Offset = "0x4AC41B0", VA = "0x4AC41B0")]
	private static extern void LookRotation_Injected([In] ref Vector3 forward, [In][DefaultValue("Vector3.up")] ref Vector3 upwards, out Quaternion ret);
}
