// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Quaternion
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

[Token(Token = "0x2000146")]
[UnityEngine.Bindings.NativeType(Header = "Runtime/Math/Quaternion.h")]
[Il2CppEagerStaticClassConstruction]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/MathScripting.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct Quaternion : IEquatable<Quaternion>, IFormattable
{
	[Token(Token = "0x4000553")]
	[FieldOffset(Offset = "0x0")]
	public float x;

	[Token(Token = "0x4000554")]
	[FieldOffset(Offset = "0x4")]
	public float y;

	[Token(Token = "0x4000555")]
	[FieldOffset(Offset = "0x8")]
	public float z;

	[Token(Token = "0x4000556")]
	[FieldOffset(Offset = "0xC")]
	public float w;

	[Token(Token = "0x4000557")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Quaternion identityQuaternion;

	[Token(Token = "0x4000558")]
	public const float kEpsilon = 1E-06f;

	[Token(Token = "0x170001ED")]
	public float this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AFB")]
		[Address(RVA = "0x208D650", Offset = "0x208BC50", VA = "0x18208D650")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AFC")]
		[Address(RVA = "0x208D6E0", Offset = "0x208BCE0", VA = "0x18208D6E0")]
		set
		{
		}
	}

	[Token(Token = "0x170001EE")]
	public static Quaternion identity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AFE")]
		[Address(RVA = "0x2F08B30", Offset = "0x2F07130", VA = "0x182F08B30")]
		get
		{
			return default(Quaternion);
		}
	}

	[Token(Token = "0x170001EF")]
	public readonly Vector3 eulerAngles
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B08")]
		[Address(RVA = "0x2F08A50", Offset = "0x2F07050", VA = "0x182F08A50")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001F0")]
	public readonly Quaternion normalized
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B0E")]
		[Address(RVA = "0x2F00090", Offset = "0x2EFE690", VA = "0x182F00090")]
		get
		{
			return default(Quaternion);
		}
	}

	[Token(Token = "0x6000AE6")]
	[Address(RVA = "0x2F07AA0", Offset = "0x2F060A0", VA = "0x182F07AA0")]
	[UnityEngine.Bindings.FreeFunction("FromToQuaternionSafe", IsThreadSafe = true)]
	private static Quaternion Internal_FromToRotation(in Vector3 fromDirection, in Vector3 toDirection)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AE7")]
	[Address(RVA = "0x2F07870", Offset = "0x2F05E70", VA = "0x182F07870")]
	public static Quaternion FromToRotation(Vector3 fromDirection, Vector3 toDirection)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000AE8")]
	[Address(RVA = "0x2F07B50", Offset = "0x2F06150", VA = "0x182F07B50")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::Inverse", IsThreadSafe = true)]
	private static Quaternion Internal_Inverse(in Quaternion rotation)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x2F08170", Offset = "0x2F06770", VA = "0x182F08170")]
	public static Quaternion Inverse(Quaternion rotation)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000AEA")]
	[Address(RVA = "0x2F08000", Offset = "0x2F06600", VA = "0x182F08000")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::Slerp", IsThreadSafe = true)]
	private static Quaternion Internal_Slerp(in Quaternion a, in Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000AEB")]
	[Address(RVA = "0x2F07F20", Offset = "0x2F06520", VA = "0x182F07F20")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::SlerpUnclamped", IsThreadSafe = true)]
	private static Quaternion Internal_SlerpUnclamped(in Quaternion a, in Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000AEC")]
	[Address(RVA = "0x2F07CF0", Offset = "0x2F062F0", VA = "0x182F07CF0")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::Lerp", IsThreadSafe = true)]
	private static Quaternion Internal_Lerp(in Quaternion a, in Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x2F07C10", Offset = "0x2F06210", VA = "0x182F07C10")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::LerpUnclamped", IsThreadSafe = true)]
	private static Quaternion Internal_LerpUnclamped(in Quaternion a, in Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x2F08680", Offset = "0x2F06C80", VA = "0x182F08680")]
	public static Quaternion Slerp(Quaternion a, Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x2F08600", Offset = "0x2F06C00", VA = "0x182F08600")]
	public static Quaternion SlerpUnclamped(Quaternion a, Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x2F08260", Offset = "0x2F06860", VA = "0x182F08260")]
	public static Quaternion Lerp(Quaternion a, Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AF1")]
	[Address(RVA = "0x2F081E0", Offset = "0x2F067E0", VA = "0x182F081E0")]
	public static Quaternion LerpUnclamped(Quaternion a, Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x2F08600", Offset = "0x2F06C00", VA = "0x182F08600")]
	public static Quaternion SlerpUnclamped(in Quaternion a, in Quaternion b, float t)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x2F079F0", Offset = "0x2F05FF0", VA = "0x182F079F0")]
	[UnityEngine.Bindings.FreeFunction("EulerToQuaternion", IsThreadSafe = true)]
	private static Quaternion Internal_FromEulerRad(in Vector3 euler)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000AF4")]
	[Address(RVA = "0x2F08120", Offset = "0x2F06720", VA = "0x182F08120")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::ToEuler", IsThreadSafe = true)]
	private static Vector3 Internal_ToEulerRad(in Quaternion rotation)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AF5")]
	[Address(RVA = "0x2F08070", Offset = "0x2F06670", VA = "0x182F08070")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::ToAxisAngle", IsThreadSafe = true)]
	private static extern void Internal_ToAxisAngleRad(in Quaternion q, out Vector3 axis, out float angle);

	[Token(Token = "0x6000AF6")]
	[Address(RVA = "0x2F07940", Offset = "0x2F05F40", VA = "0x182F07940")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::AngleAxis", IsThreadSafe = true)]
	private static Quaternion Internal_AngleAxis(float angle, in Vector3 axis)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AF7")]
	[Address(RVA = "0x2F07580", Offset = "0x2F05B80", VA = "0x182F07580")]
	public static Quaternion AngleAxis(float angle, Vector3 axis)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000AF8")]
	[Address(RVA = "0x2F07DC0", Offset = "0x2F063C0", VA = "0x182F07DC0")]
	[UnityEngine.Bindings.FreeFunction("QuaternionScripting::LookRotation", IsThreadSafe = true)]
	private static Quaternion Internal_LookRotation(in Vector3 forward, [DefaultValue("Vector3.up")] in Vector3 upwards)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AF9")]
	[Address(RVA = "0x2F08390", Offset = "0x2F06990", VA = "0x182F08390")]
	public static Quaternion LookRotation(Vector3 forward, [DefaultValue("Vector3.up")] Vector3 upwards)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AFA")]
	[Address(RVA = "0x2F082E0", Offset = "0x2F068E0", VA = "0x182F082E0")]
	[ExcludeFromDocs]
	public static Quaternion LookRotation(Vector3 forward)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AFD")]
	[Address(RVA = "0x298BAD0", Offset = "0x298A0D0", VA = "0x18298BAD0")]
	public Quaternion(float x, float y, float z, float w)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AFF")]
	[Address(RVA = "0x2F08BC0", Offset = "0x2F071C0", VA = "0x182F08BC0")]
	public static Quaternion operator *(Quaternion lhs, Quaternion rhs)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000B00")]
	[Address(RVA = "0x2F08CB0", Offset = "0x2F072B0", VA = "0x182F08CB0")]
	public static Vector3 operator *(Quaternion rotation, Vector3 point)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B01")]
	[Address(RVA = "0x2F08B80", Offset = "0x2F07180", VA = "0x182F08B80")]
	public static bool operator ==(Quaternion lhs, Quaternion rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x1D2EEF0", Offset = "0x1D2D4F0", VA = "0x181D2EEF0")]
	public static bool operator !=(Quaternion lhs, Quaternion rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B03")]
	[Address(RVA = "0x2F081D0", Offset = "0x2F067D0", VA = "0x182F081D0")]
	private static bool IsEqualUsingDot(float dot)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x29CA660", Offset = "0x29C8C60", VA = "0x1829CA660")]
	public static float Dot(in Quaternion a, in Quaternion b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B05")]
	[Address(RVA = "0x2F075F0", Offset = "0x2F05BF0", VA = "0x182F075F0")]
	public static float Angle(Quaternion a, Quaternion b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x2F075F0", Offset = "0x2F05BF0", VA = "0x182F075F0")]
	public static float Angle(in Quaternion a, in Quaternion b)
	{
		return default(float);
	}

	[Token(Token = "0x6000B07")]
	[Address(RVA = "0x2F07E20", Offset = "0x2F06420", VA = "0x182F07E20")]
	private static Vector3 Internal_MakePositive(Vector3 euler)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x2F077F0", Offset = "0x2F05DF0", VA = "0x182F077F0")]
	public static Quaternion Euler(float x, float y, float z)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x2F07770", Offset = "0x2F05D70", VA = "0x182F07770")]
	public static Quaternion Euler(Vector3 euler)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B0B")]
	[Address(RVA = "0x2F08700", Offset = "0x2F06D00", VA = "0x182F08700")]
	public void ToAngleAxis(out float angle, out Vector3 axis)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B0C")]
	[Address(RVA = "0x2F084F0", Offset = "0x2F06AF0", VA = "0x182F084F0")]
	public static Quaternion RotateTowards(Quaternion from, Quaternion to, float maxDegreesDelta)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x2F08400", Offset = "0x2F06A00", VA = "0x182F08400")]
	public static Quaternion Normalize(in Quaternion q)
	{
		return default(Quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x2F01E00", Offset = "0x2F00400", VA = "0x182F01E00", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x2F07660", Offset = "0x2F05C60", VA = "0x182F07660", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x5BB830", Offset = "0x5B9E30", VA = "0x1805BB830", Slot = "4")]
	public readonly bool Equals(Quaternion other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x5BB830", Offset = "0x5B9E30", VA = "0x1805BB830")]
	public readonly bool Equals(in Quaternion other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B13")]
	[Address(RVA = "0x2F089F0", Offset = "0x2F06FF0", VA = "0x182F089F0", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x2F08770", Offset = "0x2F06D70", VA = "0x182F08770", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x2F07A40", Offset = "0x2F06040", VA = "0x182F07A40")]
	private static extern void Internal_FromToRotation_Injected(in Vector3 fromDirection, in Vector3 toDirection, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x2F07B00", Offset = "0x2F06100", VA = "0x182F07B00")]
	private static extern void Internal_Inverse_Injected(in Quaternion rotation, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x2F07F90", Offset = "0x2F06590", VA = "0x182F07F90")]
	private static extern void Internal_Slerp_Injected(in Quaternion a, in Quaternion b, float t, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x2F07EB0", Offset = "0x2F064B0", VA = "0x182F07EB0")]
	private static extern void Internal_SlerpUnclamped_Injected(in Quaternion a, in Quaternion b, float t, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x2F07C80", Offset = "0x2F06280", VA = "0x182F07C80")]
	private static extern void Internal_Lerp_Injected(in Quaternion a, in Quaternion b, float t, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x2F07BA0", Offset = "0x2F061A0", VA = "0x182F07BA0")]
	private static extern void Internal_LerpUnclamped_Injected(in Quaternion a, in Quaternion b, float t, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x2F079A0", Offset = "0x2F05FA0", VA = "0x182F079A0")]
	private static extern void Internal_FromEulerRad_Injected(in Vector3 euler, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x2F080D0", Offset = "0x2F066D0", VA = "0x182F080D0")]
	private static extern void Internal_ToEulerRad_Injected(in Quaternion rotation, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x2F078E0", Offset = "0x2F05EE0", VA = "0x182F078E0")]
	private static extern void Internal_AngleAxis_Injected(float angle, in Vector3 axis, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x2F07D60", Offset = "0x2F06360", VA = "0x182F07D60")]
	private static extern void Internal_LookRotation_Injected(in Vector3 forward, [DefaultValue("Vector3.up")] in Vector3 upwards, out Quaternion ret);
}
