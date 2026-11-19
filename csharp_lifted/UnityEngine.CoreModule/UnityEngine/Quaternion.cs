// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Quaternion
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
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000147")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeType(Header = "Runtime/Math/Quaternion.h")]
[Il2CppEagerStaticClassConstruction]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/MathScripting.h")]
public struct Quaternion : IEquatable<Quaternion>, IFormattable
{
	[Token(Token = "0x4000558")]
	[FieldOffset(Offset = "0x0")]
	public float x;

	[Token(Token = "0x4000559")]
	[FieldOffset(Offset = "0x4")]
	public float y;

	[Token(Token = "0x400055A")]
	[FieldOffset(Offset = "0x8")]
	public float z;

	[Token(Token = "0x400055B")]
	[FieldOffset(Offset = "0xC")]
	public float w;

	[Token(Token = "0x400055C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Quaternion identityQuaternion;

	[Token(Token = "0x400055D")]
	public const float kEpsilon = 1E-06f;

	[Token(Token = "0x170001F2")]
	public float this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B0C")]
		[Address(RVA = "0x69054F0", Offset = "0x69044F0", VA = "0x69054F0")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B0D")]
		[Address(RVA = "0x6905570", Offset = "0x6904570", VA = "0x6905570")]
		set
		{
		}
	}

	[Token(Token = "0x170001F3")]
	public static Quaternion identity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B0F")]
		[Address(RVA = "0x6905610", Offset = "0x6904610", VA = "0x6905610")]
		get
		{
			return default(Quaternion);
		}
	}

	[Token(Token = "0x170001F4")]
	public readonly Vector3 eulerAngles
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B19")]
		[Address(RVA = "0x69059D0", Offset = "0x69049D0", VA = "0x69059D0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001F5")]
	public readonly Quaternion normalized
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B1F")]
		[Address(RVA = "0x6905DC0", Offset = "0x6904DC0", VA = "0x6905DC0")]
		get
		{
			return default(Quaternion);
		}
	}

	[Token(Token = "0x6000AF7")]
	[Address(RVA = "0x6904990", Offset = "0x6903990", VA = "0x6904990")]
	[UnityEngine.Bindings.FreeFunction("FromToQuaternionSafe", IsThreadSafe = true)]
	private static Quaternion Internal_FromToRotation(in Vector3 fromDirection, in Vector3 toDirection)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AF8")]
	[Address(RVA = "0x6904A30", Offset = "0x6903A30", VA = "0x6904A30")]
	public static Quaternion FromToRotation(Vector3 fromDirection, Vector3 toDirection)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000AF9")]
	[Address(RVA = "0x6904A90", Offset = "0x6903A90", VA = "0x6904A90")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::Inverse", IsThreadSafe = true)]
	private static Quaternion Internal_Inverse(in Quaternion rotation)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AFA")]
	[Address(RVA = "0x6904B20", Offset = "0x6903B20", VA = "0x6904B20")]
	public static Quaternion Inverse(Quaternion rotation)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000AFB")]
	[Address(RVA = "0x6904B70", Offset = "0x6903B70", VA = "0x6904B70")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::Slerp", IsThreadSafe = true)]
	private static Quaternion Internal_Slerp(in Quaternion a, in Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000AFC")]
	[Address(RVA = "0x6904C40", Offset = "0x6903C40", VA = "0x6904C40")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::SlerpUnclamped", IsThreadSafe = true)]
	private static Quaternion Internal_SlerpUnclamped(in Quaternion a, in Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000AFD")]
	[Address(RVA = "0x6904D10", Offset = "0x6903D10", VA = "0x6904D10")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::Lerp", IsThreadSafe = true)]
	private static Quaternion Internal_Lerp(in Quaternion a, in Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000AFE")]
	[Address(RVA = "0x6904DE0", Offset = "0x6903DE0", VA = "0x6904DE0")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::LerpUnclamped", IsThreadSafe = true)]
	private static Quaternion Internal_LerpUnclamped(in Quaternion a, in Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AFF")]
	[Address(RVA = "0x6904EB0", Offset = "0x6903EB0", VA = "0x6904EB0")]
	public static Quaternion Slerp(Quaternion a, Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B00")]
	[Address(RVA = "0x6904F20", Offset = "0x6903F20", VA = "0x6904F20")]
	public static Quaternion SlerpUnclamped(Quaternion a, Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B01")]
	[Address(RVA = "0x6904F90", Offset = "0x6903F90", VA = "0x6904F90")]
	public static Quaternion Lerp(Quaternion a, Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x6905000", Offset = "0x6904000", VA = "0x6905000")]
	public static Quaternion LerpUnclamped(Quaternion a, Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B03")]
	[Address(RVA = "0x6905070", Offset = "0x6904070", VA = "0x6905070")]
	public static Quaternion SlerpUnclamped(in Quaternion a, in Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x69050E0", Offset = "0x69040E0", VA = "0x69050E0")]
	[UnityEngine.Bindings.FreeFunction("EulerToQuaternion", IsThreadSafe = true)]
	private static Quaternion Internal_FromEulerRad(in Vector3 euler)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000B05")]
	[Address(RVA = "0x6905170", Offset = "0x6904170", VA = "0x6905170")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::ToEuler", IsThreadSafe = true)]
	private static Vector3 Internal_ToEulerRad(in Quaternion rotation)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x6905200", Offset = "0x6904200", VA = "0x6905200")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::ToAxisAngle", IsThreadSafe = true)]
	private static extern void Internal_ToAxisAngleRad(in Quaternion q, out Vector3 axis, out float angle);

	[Token(Token = "0x6000B07")]
	[Address(RVA = "0x6905240", Offset = "0x6904240", VA = "0x6905240")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::AngleAxis", IsThreadSafe = true)]
	private static Quaternion Internal_AngleAxis(float angle, in Vector3 axis)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x69052F0", Offset = "0x69042F0", VA = "0x69052F0")]
	public static Quaternion AngleAxis(float angle, Vector3 axis)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x6905350", Offset = "0x6904350", VA = "0x6905350")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::LookRotation", IsThreadSafe = true)]
	private static Quaternion Internal_LookRotation(in Vector3 forward, [DefaultValue("Vector3.up")] in Vector3 upwards)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x69053F0", Offset = "0x69043F0", VA = "0x69053F0")]
	public static Quaternion LookRotation(Vector3 forward, [DefaultValue("Vector3.up")] Vector3 upwards)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B0B")]
	[Address(RVA = "0x6905450", Offset = "0x6904450", VA = "0x6905450")]
	[ExcludeFromDocs]
	public static Quaternion LookRotation(Vector3 forward)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x69055F0", Offset = "0x69045F0", VA = "0x69055F0")]
	public Quaternion(float x, float y, float z, float w)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x6905650", Offset = "0x6904650", VA = "0x6905650")]
	public static Quaternion operator *(Quaternion lhs, Quaternion rhs)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x6905700", Offset = "0x6904700", VA = "0x6905700")]
	public static Vector3 operator *(Quaternion rotation, Vector3 point)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x69057E0", Offset = "0x69047E0", VA = "0x69057E0")]
	public static bool operator ==(Quaternion lhs, Quaternion rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B13")]
	[Address(RVA = "0x6905810", Offset = "0x6904810", VA = "0x6905810")]
	public static bool operator !=(Quaternion lhs, Quaternion rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x6905840", Offset = "0x6904840", VA = "0x6905840")]
	private static bool IsEqualUsingDot(float dot)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x6905850", Offset = "0x6904850", VA = "0x6905850")]
	public static float Dot(in Quaternion a, in Quaternion b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x6905880", Offset = "0x6904880", VA = "0x6905880")]
	public static float Angle(Quaternion a, Quaternion b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x69058D0", Offset = "0x69048D0", VA = "0x69058D0")]
	public static float Angle(in Quaternion a, in Quaternion b)
	{
		return default(float);
	}

	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x6905940", Offset = "0x6904940", VA = "0x6905940")]
	private static Vector3 Internal_MakePositive(Vector3 euler)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x6905AC0", Offset = "0x6904AC0", VA = "0x6905AC0")]
	public static Quaternion Euler(float x, float y, float z)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x6905B30", Offset = "0x6904B30", VA = "0x6905B30")]
	public static Quaternion Euler(Vector3 euler)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x6905B90", Offset = "0x6904B90", VA = "0x6905B90")]
	public void ToAngleAxis(out float angle, out Vector3 axis)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x6905BE0", Offset = "0x6904BE0", VA = "0x6905BE0")]
	public static Quaternion RotateTowards(Quaternion from, Quaternion to, float maxDegreesDelta)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x6905CF0", Offset = "0x6904CF0", VA = "0x6905CF0")]
	public static Quaternion Normalize(in Quaternion q)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x6905E90", Offset = "0x6904E90", VA = "0x6905E90", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x6905EF0", Offset = "0x6904EF0", VA = "0x6905EF0", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x6905FC0", Offset = "0x6904FC0", VA = "0x6905FC0", Slot = "4")]
	public readonly bool Equals(Quaternion other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x6906030", Offset = "0x6905030", VA = "0x6906030")]
	public readonly bool Equals(in Quaternion other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x69060A0", Offset = "0x69050A0", VA = "0x69060A0", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x69060B0", Offset = "0x69050B0", VA = "0x69060B0", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x69049F0", Offset = "0x69039F0", VA = "0x69049F0")]
	private static extern void Internal_FromToRotation_Injected(in Vector3 fromDirection, in Vector3 toDirection, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x6904AE0", Offset = "0x6903AE0", VA = "0x6904AE0")]
	private static extern void Internal_Inverse_Injected(in Quaternion rotation, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x6904BE0", Offset = "0x6903BE0", VA = "0x6904BE0")]
	private static extern void Internal_Slerp_Injected(in Quaternion a, in Quaternion b, float t, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x6904CB0", Offset = "0x6903CB0", VA = "0x6904CB0")]
	private static extern void Internal_SlerpUnclamped_Injected(in Quaternion a, in Quaternion b, float t, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x6904D80", Offset = "0x6903D80", VA = "0x6904D80")]
	private static extern void Internal_Lerp_Injected(in Quaternion a, in Quaternion b, float t, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x6904E50", Offset = "0x6903E50", VA = "0x6904E50")]
	private static extern void Internal_LerpUnclamped_Injected(in Quaternion a, in Quaternion b, float t, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x6905130", Offset = "0x6904130", VA = "0x6905130")]
	private static extern void Internal_FromEulerRad_Injected(in Vector3 euler, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x69051C0", Offset = "0x69041C0", VA = "0x69051C0")]
	private static extern void Internal_ToEulerRad_Injected(in Quaternion rotation, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x69052A0", Offset = "0x69042A0", VA = "0x69052A0")]
	private static extern void Internal_AngleAxis_Injected(float angle, in Vector3 axis, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x69053B0", Offset = "0x69043B0", VA = "0x69053B0")]
	private static extern void Internal_LookRotation_Injected(in Vector3 forward, [DefaultValue("Vector3.up")] in Vector3 upwards, out Quaternion ret);
}
