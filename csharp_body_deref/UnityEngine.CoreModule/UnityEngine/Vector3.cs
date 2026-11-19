// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Vector3
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

[Token(Token = "0x2000146")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/Vector3.h")]
[UnityEngine.NativeClass("Vector3f")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[Il2CppEagerStaticClassConstruction]
[UnityEngine.Bindings.NativeType(Header = "Runtime/Math/Vector3.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/MathScripting.h")]
public struct Vector3 : IEquatable<Vector3>, IFormattable
{
	[Token(Token = "0x4000549")]
	public const float kEpsilon = 1E-05f;

	[Token(Token = "0x400054A")]
	public const float kEpsilonNormalSqrt = 1E-15f;

	[Token(Token = "0x400054B")]
	[FieldOffset(Offset = "0x0")]
	public float x;

	[Token(Token = "0x400054C")]
	[FieldOffset(Offset = "0x4")]
	public float y;

	[Token(Token = "0x400054D")]
	[FieldOffset(Offset = "0x8")]
	public float z;

	[Token(Token = "0x400054E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector3 zeroVector;

	[Token(Token = "0x400054F")]
	[FieldOffset(Offset = "0xC")]
	private static readonly Vector3 oneVector;

	[Token(Token = "0x4000550")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Vector3 upVector;

	[Token(Token = "0x4000551")]
	[FieldOffset(Offset = "0x24")]
	private static readonly Vector3 downVector;

	[Token(Token = "0x4000552")]
	[FieldOffset(Offset = "0x30")]
	private static readonly Vector3 leftVector;

	[Token(Token = "0x4000553")]
	[FieldOffset(Offset = "0x3C")]
	private static readonly Vector3 rightVector;

	[Token(Token = "0x4000554")]
	[FieldOffset(Offset = "0x48")]
	private static readonly Vector3 forwardVector;

	[Token(Token = "0x4000555")]
	[FieldOffset(Offset = "0x54")]
	private static readonly Vector3 backVector;

	[Token(Token = "0x4000556")]
	[FieldOffset(Offset = "0x60")]
	private static readonly Vector3 positiveInfinityVector;

	[Token(Token = "0x4000557")]
	[FieldOffset(Offset = "0x6C")]
	private static readonly Vector3 negativeInfinityVector;

	[Token(Token = "0x170001E4")]
	public float this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000ABF")]
		[Address(RVA = "0x6903270", Offset = "0x6902270", VA = "0x6903270")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AC0")]
		[Address(RVA = "0x69032E0", Offset = "0x69022E0", VA = "0x69032E0")]
		set
		{
		}
	}

	[Token(Token = "0x170001E5")]
	public readonly Vector3 normalized
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000ACE")]
		[Address(RVA = "0x6903890", Offset = "0x6902890", VA = "0x6903890")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001E6")]
	public readonly float magnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AD8")]
		[Address(RVA = "0x69042E0", Offset = "0x69032E0", VA = "0x69042E0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001E7")]
	public readonly float sqrMagnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000ADA")]
		[Address(RVA = "0x6904390", Offset = "0x6903390", VA = "0x6904390")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001E8")]
	public static Vector3 zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000ADF")]
		[Address(RVA = "0x6904410", Offset = "0x6903410", VA = "0x6904410")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001E9")]
	public static Vector3 one
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AE0")]
		[Address(RVA = "0x6904450", Offset = "0x6903450", VA = "0x6904450")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001EA")]
	public static Vector3 forward
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AE1")]
		[Address(RVA = "0x6904490", Offset = "0x6903490", VA = "0x6904490")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001EB")]
	public static Vector3 back
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AE2")]
		[Address(RVA = "0x69044D0", Offset = "0x69034D0", VA = "0x69044D0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001EC")]
	public static Vector3 up
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AE3")]
		[Address(RVA = "0x6904510", Offset = "0x6903510", VA = "0x6904510")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001ED")]
	public static Vector3 down
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AE4")]
		[Address(RVA = "0x6904550", Offset = "0x6903550", VA = "0x6904550")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001EE")]
	public static Vector3 left
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AE5")]
		[Address(RVA = "0x6904590", Offset = "0x6903590", VA = "0x6904590")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001EF")]
	public static Vector3 right
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AE6")]
		[Address(RVA = "0x69045D0", Offset = "0x69035D0", VA = "0x69045D0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001F0")]
	public static Vector3 positiveInfinity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AE7")]
		[Address(RVA = "0x6904610", Offset = "0x6903610", VA = "0x6904610")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001F1")]
	public static Vector3 negativeInfinity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AE8")]
		[Address(RVA = "0x6904650", Offset = "0x6903650", VA = "0x6904650")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x6902880", Offset = "0x6901880", VA = "0x6902880")]
	[UnityEngine.Bindings.FreeFunction("VectorScripting::Slerp", IsThreadSafe = true)]
	private static Vector3 Internal_Slerp(in Vector3 a, in Vector3 b, float t)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x6902950", Offset = "0x6901950", VA = "0x6902950")]
	public static Vector3 Slerp(Vector3 a, Vector3 b, float t)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x69029D0", Offset = "0x69019D0", VA = "0x69029D0")]
	[UnityEngine.Bindings.FreeFunction("VectorScripting::SlerpUnclamped", IsThreadSafe = true)]
	private static Vector3 Internal_SlerpUnclamped(in Vector3 a, in Vector3 b, float t)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AB5")]
	[Address(RVA = "0x6902AA0", Offset = "0x6901AA0", VA = "0x6902AA0")]
	public static Vector3 SlerpUnclamped(Vector3 a, Vector3 b, float t)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AB6")]
	[Address(RVA = "0x6902B20", Offset = "0x6901B20", VA = "0x6902B20")]
	[UnityEngine.Bindings.FreeFunction("VectorScripting::OrthoNormalize", IsThreadSafe = true)]
	private static extern void OrthoNormalize2(ref Vector3 a, ref Vector3 b);

	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x6902B60", Offset = "0x6901B60", VA = "0x6902B60")]
	public static void OrthoNormalize(ref Vector3 normal, ref Vector3 tangent)
	{
	}

	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x6902BA0", Offset = "0x6901BA0", VA = "0x6902BA0")]
	[UnityEngine.Bindings.FreeFunction("VectorScripting::RotateTowards", IsThreadSafe = true)]
	private static Vector3 Internal_RotateTowards(in Vector3 current, in Vector3 target, float maxRadiansDelta, float maxMagnitudeDelta)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x6902C80", Offset = "0x6901C80", VA = "0x6902C80")]
	public static Vector3 RotateTowards(Vector3 current, Vector3 target, float maxRadiansDelta, float maxMagnitudeDelta)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x6902D10", Offset = "0x6901D10", VA = "0x6902D10")]
	public static Vector3 Lerp(Vector3 a, Vector3 b, float t)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0x6902D50", Offset = "0x6901D50", VA = "0x6902D50")]
	public static Vector3 LerpUnclamped(Vector3 a, Vector3 b, float t)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x6902D70", Offset = "0x6901D70", VA = "0x6902D70")]
	public static Vector3 MoveTowards(Vector3 current, Vector3 target, float maxDistanceDelta)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x6902F10", Offset = "0x6901F10", VA = "0x6902F10")]
	[ExcludeFromDocs]
	public static Vector3 SmoothDamp(Vector3 current, Vector3 target, ref Vector3 currentVelocity, float smoothTime, float maxSpeed)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x6902F70", Offset = "0x6901F70", VA = "0x6902F70")]
	public static Vector3 SmoothDamp(in Vector3 current, in Vector3 target, ref Vector3 currentVelocity, float smoothTime, [DefaultValue("Mathf.Infinity")] float maxSpeed, [DefaultValue("Time.deltaTime")] float deltaTime)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x6903350", Offset = "0x6902350", VA = "0x6903350")]
	public Vector3(float x, float y, float z)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x6903360", Offset = "0x6902360", VA = "0x6903360")]
	public Vector3(float x, float y)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x6903380", Offset = "0x6902380", VA = "0x6903380")]
	public static Vector3 Scale(Vector3 a, Vector3 b)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC4")]
	[Address(RVA = "0x6903390", Offset = "0x6902390", VA = "0x6903390")]
	public void Scale(Vector3 scale)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x69033B0", Offset = "0x69023B0", VA = "0x69033B0")]
	public static Vector3 Cross(Vector3 lhs, Vector3 rhs)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC6")]
	[Address(RVA = "0x6903400", Offset = "0x6902400", VA = "0x6903400", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC7")]
	[Address(RVA = "0x6903440", Offset = "0x6902440", VA = "0x6903440", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC8")]
	[Address(RVA = "0x69034D0", Offset = "0x69024D0", VA = "0x69034D0", Slot = "4")]
	public readonly bool Equals(Vector3 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC9")]
	[Address(RVA = "0x6903500", Offset = "0x6902500", VA = "0x6903500")]
	public readonly bool Equals(in Vector3 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ACA")]
	[Address(RVA = "0x6903530", Offset = "0x6902530", VA = "0x6903530")]
	public static Vector3 Reflect(Vector3 inDirection, Vector3 inNormal)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ACB")]
	[Address(RVA = "0x6903570", Offset = "0x6902570", VA = "0x6903570")]
	public static Vector3 Normalize(Vector3 value)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ACC")]
	[Address(RVA = "0x69036C0", Offset = "0x69026C0", VA = "0x69036C0")]
	public static Vector3 Normalize(in Vector3 value)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ACD")]
	[Address(RVA = "0x69037C0", Offset = "0x69027C0", VA = "0x69037C0")]
	public void Normalize()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ACF")]
	[Address(RVA = "0x69039C0", Offset = "0x69029C0", VA = "0x69039C0")]
	public static float Dot(Vector3 lhs, Vector3 rhs)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AD0")]
	[Address(RVA = "0x69039E0", Offset = "0x69029E0", VA = "0x69039E0")]
	public static float Dot(in Vector3 lhs, in Vector3 rhs)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AD1")]
	[Address(RVA = "0x6903A10", Offset = "0x6902A10", VA = "0x6903A10")]
	public static Vector3 Project(Vector3 vector, Vector3 onNormal)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AD2")]
	[Address(RVA = "0x6903B00", Offset = "0x6902B00", VA = "0x6903B00")]
	public static Vector3 ProjectOnPlane(Vector3 vector, Vector3 planeNormal)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AD3")]
	[Address(RVA = "0x6903BC0", Offset = "0x6902BC0", VA = "0x6903BC0")]
	public static float Angle(Vector3 from, Vector3 to)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x6903D40", Offset = "0x6902D40", VA = "0x6903D40")]
	public static float Angle(in Vector3 from, in Vector3 to)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x6903EC0", Offset = "0x6902EC0", VA = "0x6903EC0")]
	public static float SignedAngle(Vector3 from, Vector3 to, Vector3 axis)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x6904130", Offset = "0x6903130", VA = "0x6904130")]
	public static float Distance(Vector3 a, Vector3 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x69041F0", Offset = "0x69031F0", VA = "0x69041F0")]
	public static Vector3 ClampMagnitude(Vector3 vector, float maxLength)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AD9")]
	[Address(RVA = "0x6904370", Offset = "0x6903370", VA = "0x6904370")]
	public static float SqrMagnitude(Vector3 vector)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x69043B0", Offset = "0x69033B0", VA = "0x69043B0")]
	public static Vector3 Min(Vector3 lhs, Vector3 rhs)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x69043C0", Offset = "0x69033C0", VA = "0x69043C0")]
	public static Vector3 Min(in Vector3 lhs, in Vector3 rhs)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x69043E0", Offset = "0x69033E0", VA = "0x69043E0")]
	public static Vector3 Max(Vector3 lhs, Vector3 rhs)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x69043F0", Offset = "0x69033F0", VA = "0x69043F0")]
	public static Vector3 Max(in Vector3 lhs, in Vector3 rhs)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x6904690", Offset = "0x6903690", VA = "0x6904690")]
	public static Vector3 operator +(Vector3 a, Vector3 b)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AEA")]
	[Address(RVA = "0x69046A0", Offset = "0x69036A0", VA = "0x69046A0")]
	public static Vector3 operator -(Vector3 a, Vector3 b)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AEB")]
	[Address(RVA = "0x69046B0", Offset = "0x69036B0", VA = "0x69046B0")]
	public static Vector3 operator -(Vector3 a)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AEC")]
	[Address(RVA = "0x69046C0", Offset = "0x69036C0", VA = "0x69046C0")]
	public static Vector3 operator *(Vector3 a, float d)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x69046D0", Offset = "0x69036D0", VA = "0x69046D0")]
	public static Vector3 operator *(float d, Vector3 a)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x69046E0", Offset = "0x69036E0", VA = "0x69046E0")]
	public static Vector3 operator /(Vector3 a, float d)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x69046F0", Offset = "0x69036F0", VA = "0x69046F0")]
	public static bool operator ==(Vector3 lhs, Vector3 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x6904720", Offset = "0x6903720", VA = "0x6904720")]
	public static bool operator !=(Vector3 lhs, Vector3 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AF1")]
	[Address(RVA = "0x6904750", Offset = "0x6903750", VA = "0x6904750", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x6904760", Offset = "0x6903760", VA = "0x6904760", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AF4")]
	[Address(RVA = "0x69028F0", Offset = "0x69018F0", VA = "0x69028F0")]
	private static extern void Internal_Slerp_Injected(in Vector3 a, in Vector3 b, float t, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AF5")]
	[Address(RVA = "0x6902A40", Offset = "0x6901A40", VA = "0x6902A40")]
	private static extern void Internal_SlerpUnclamped_Injected(in Vector3 a, in Vector3 b, float t, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AF6")]
	[Address(RVA = "0x6902C20", Offset = "0x6901C20", VA = "0x6902C20")]
	private static extern void Internal_RotateTowards_Injected(in Vector3 current, in Vector3 target, float maxRadiansDelta, float maxMagnitudeDelta, out Vector3 ret);
}
