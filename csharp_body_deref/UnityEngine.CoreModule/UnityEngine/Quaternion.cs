// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Quaternion
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000120")]
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

	[Token(Token = "0x1700018B")]
	public float this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600082B")]
		[Address(RVA = "0x4DEBBD0", Offset = "0x4DEBBD0", VA = "0x4DEBBD0")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600082C")]
		[Address(RVA = "0x4DEBC50", Offset = "0x4DEBC50", VA = "0x4DEBC50")]
		set
		{
		}
	}

	[Token(Token = "0x1700018C")]
	public static Quaternion identity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600082E")]
		[Address(RVA = "0x4DEBCF0", Offset = "0x4DEBCF0", VA = "0x4DEBCF0")]
		get
		{
			return default(Quaternion);
		}
	}

	[Token(Token = "0x1700018D")]
	public Vector3 eulerAngles
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000837")]
		[Address(RVA = "0x4DEC070", Offset = "0x4DEC070", VA = "0x4DEC070")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x6000820")]
	[Address(RVA = "0x4DEB430", Offset = "0x4DEB430", VA = "0x4DEB430")]
	[UnityEngine.Bindings.FreeFunction("FromToQuaternionSafe", IsThreadSafe = true)]
	public static Quaternion FromToRotation(Vector3 fromDirection, Vector3 toDirection)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000821")]
	[Address(RVA = "0x4DEB4D0", Offset = "0x4DEB4D0", VA = "0x4DEB4D0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static Quaternion Inverse(Quaternion rotation)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x4DEB560", Offset = "0x4DEB560", VA = "0x4DEB560")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::Slerp", IsThreadSafe = true)]
	public static Quaternion Slerp(Quaternion a, Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x4DEB630", Offset = "0x4DEB630", VA = "0x4DEB630")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::SlerpUnclamped", IsThreadSafe = true)]
	public static Quaternion SlerpUnclamped(Quaternion a, Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x4DEB700", Offset = "0x4DEB700", VA = "0x4DEB700")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::Lerp", IsThreadSafe = true)]
	public static Quaternion Lerp(Quaternion a, Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x4DEB7D0", Offset = "0x4DEB7D0", VA = "0x4DEB7D0")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::LerpUnclamped", IsThreadSafe = true)]
	public static Quaternion LerpUnclamped(Quaternion a, Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x4DEB8A0", Offset = "0x4DEB8A0", VA = "0x4DEB8A0")]
	[UnityEngine.Bindings.FreeFunction("EulerToQuaternion", IsThreadSafe = true)]
	private static Quaternion Internal_FromEulerRad(Vector3 euler)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000827")]
	[Address(RVA = "0x4DEB930", Offset = "0x4DEB930", VA = "0x4DEB930")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::ToEuler", IsThreadSafe = true)]
	private static Vector3 Internal_ToEulerRad(Quaternion rotation)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000828")]
	[Address(RVA = "0x4DEB9D0", Offset = "0x4DEB9D0", VA = "0x4DEB9D0")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::AngleAxis", IsThreadSafe = true)]
	public static Quaternion AngleAxis(float angle, Vector3 axis)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000829")]
	[Address(RVA = "0x4DEBA80", Offset = "0x4DEBA80", VA = "0x4DEBA80")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::LookRotation", IsThreadSafe = true)]
	public static Quaternion LookRotation(Vector3 forward, [DefaultValue("Vector3.up")] Vector3 upwards)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x600082A")]
	[Address(RVA = "0x4DEBB20", Offset = "0x4DEBB20", VA = "0x4DEBB20")]
	[ExcludeFromDocs]
	public static Quaternion LookRotation(Vector3 forward)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600082D")]
	[Address(RVA = "0x4DEBCD0", Offset = "0x4DEBCD0", VA = "0x4DEBCD0")]
	public Quaternion(float x, float y, float z, float w)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600082F")]
	[Address(RVA = "0x4DEBD30", Offset = "0x4DEBD30", VA = "0x4DEBD30")]
	public static Quaternion operator *(Quaternion lhs, Quaternion rhs)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000830")]
	[Address(RVA = "0x4DEBDF0", Offset = "0x4DEBDF0", VA = "0x4DEBDF0")]
	public static Vector3 operator *(Quaternion rotation, Vector3 point)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000831")]
	[Address(RVA = "0x4DEBEF0", Offset = "0x4DEBEF0", VA = "0x4DEBEF0")]
	private static bool IsEqualUsingDot(float dot)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000832")]
	[Address(RVA = "0x4DEBF00", Offset = "0x4DEBF00", VA = "0x4DEBF00")]
	public static bool operator ==(Quaternion lhs, Quaternion rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000833")]
	[Address(RVA = "0x4DEBF30", Offset = "0x4DEBF30", VA = "0x4DEBF30")]
	public static bool operator !=(Quaternion lhs, Quaternion rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000834")]
	[Address(RVA = "0x4DEBF60", Offset = "0x4DEBF60", VA = "0x4DEBF60")]
	public static float Dot(Quaternion a, Quaternion b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000835")]
	[Address(RVA = "0x4DEBF90", Offset = "0x4DEBF90", VA = "0x4DEBF90")]
	public static float Angle(Quaternion a, Quaternion b)
	{
		return default(float);
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x4DEBFE0", Offset = "0x4DEBFE0", VA = "0x4DEBFE0")]
	private static Vector3 Internal_MakePositive(Vector3 euler)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000838")]
	[Address(RVA = "0x4DEC160", Offset = "0x4DEC160", VA = "0x4DEC160")]
	public static Quaternion Euler(float x, float y, float z)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000839")]
	[Address(RVA = "0x4DEC1D0", Offset = "0x4DEC1D0", VA = "0x4DEC1D0")]
	public static Quaternion Euler(Vector3 euler)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600083A")]
	[Address(RVA = "0x4DEC230", Offset = "0x4DEC230", VA = "0x4DEC230")]
	public static Quaternion RotateTowards(Quaternion from, Quaternion to, float maxDegreesDelta)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600083B")]
	[Address(RVA = "0x4DEC350", Offset = "0x4DEC350", VA = "0x4DEC350", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600083C")]
	[Address(RVA = "0x4DEC3B0", Offset = "0x4DEC3B0", VA = "0x4DEC3B0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600083D")]
	[Address(RVA = "0x4DEC470", Offset = "0x4DEC470", VA = "0x4DEC470", Slot = "4")]
	public bool Equals(Quaternion other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600083E")]
	[Address(RVA = "0x4DEC4E0", Offset = "0x4DEC4E0", VA = "0x4DEC4E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600083F")]
	[Address(RVA = "0x4DEC4F0", Offset = "0x4DEC4F0", VA = "0x4DEC4F0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000841")]
	[Address(RVA = "0x4DEB490", Offset = "0x4DEB490", VA = "0x4DEB490")]
	private static extern void FromToRotation_Injected([In] ref Vector3 fromDirection, [In] ref Vector3 toDirection, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000842")]
	[Address(RVA = "0x4DEB520", Offset = "0x4DEB520", VA = "0x4DEB520")]
	private static extern void Inverse_Injected([In] ref Quaternion rotation, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000843")]
	[Address(RVA = "0x4DEB5D0", Offset = "0x4DEB5D0", VA = "0x4DEB5D0")]
	private static extern void Slerp_Injected([In] ref Quaternion a, [In] ref Quaternion b, float t, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000844")]
	[Address(RVA = "0x4DEB6A0", Offset = "0x4DEB6A0", VA = "0x4DEB6A0")]
	private static extern void SlerpUnclamped_Injected([In] ref Quaternion a, [In] ref Quaternion b, float t, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000845")]
	[Address(RVA = "0x4DEB770", Offset = "0x4DEB770", VA = "0x4DEB770")]
	private static extern void Lerp_Injected([In] ref Quaternion a, [In] ref Quaternion b, float t, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000846")]
	[Address(RVA = "0x4DEB840", Offset = "0x4DEB840", VA = "0x4DEB840")]
	private static extern void LerpUnclamped_Injected([In] ref Quaternion a, [In] ref Quaternion b, float t, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000847")]
	[Address(RVA = "0x4DEB8F0", Offset = "0x4DEB8F0", VA = "0x4DEB8F0")]
	private static extern void Internal_FromEulerRad_Injected([In] ref Vector3 euler, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000848")]
	[Address(RVA = "0x4DEB990", Offset = "0x4DEB990", VA = "0x4DEB990")]
	private static extern void Internal_ToEulerRad_Injected([In] ref Quaternion rotation, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000849")]
	[Address(RVA = "0x4DEBA30", Offset = "0x4DEBA30", VA = "0x4DEBA30")]
	private static extern void AngleAxis_Injected(float angle, [In] ref Vector3 axis, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600084A")]
	[Address(RVA = "0x4DEBAE0", Offset = "0x4DEBAE0", VA = "0x4DEBAE0")]
	private static extern void LookRotation_Injected([In] ref Vector3 forward, [In][DefaultValue("Vector3.up")] ref Vector3 upwards, out Quaternion ret);
}
