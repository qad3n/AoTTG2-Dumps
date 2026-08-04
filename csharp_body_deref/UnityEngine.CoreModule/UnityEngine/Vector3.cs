// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Vector3
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

[Token(Token = "0x200011F")]
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

	[Token(Token = "0x1700017D")]
	public float this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60007EE")]
		[Address(RVA = "0x4DE9E00", Offset = "0x4DE9E00", VA = "0x4DE9E00")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60007EF")]
		[Address(RVA = "0x4DE9E70", Offset = "0x4DE9E70", VA = "0x4DE9E70")]
		set
		{
		}
	}

	[Token(Token = "0x1700017E")]
	public Vector3 normalized
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60007FB")]
		[Address(RVA = "0x4DEA340", Offset = "0x4DEA340", VA = "0x4DEA340")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700017F")]
	public float magnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000804")]
		[Address(RVA = "0x4DEACD0", Offset = "0x4DEACD0", VA = "0x4DEACD0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000180")]
	public float sqrMagnitude
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000805")]
		[Address(RVA = "0x4DEAD60", Offset = "0x4DEAD60", VA = "0x4DEAD60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000181")]
	public static Vector3 zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000808")]
		[Address(RVA = "0x4DEADA0", Offset = "0x4DEADA0", VA = "0x4DEADA0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000182")]
	public static Vector3 one
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000809")]
		[Address(RVA = "0x4DEADE0", Offset = "0x4DEADE0", VA = "0x4DEADE0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000183")]
	public static Vector3 forward
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600080A")]
		[Address(RVA = "0x4DEAE20", Offset = "0x4DEAE20", VA = "0x4DEAE20")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000184")]
	public static Vector3 back
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600080B")]
		[Address(RVA = "0x4DEAE60", Offset = "0x4DEAE60", VA = "0x4DEAE60")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000185")]
	public static Vector3 up
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600080C")]
		[Address(RVA = "0x4DEAEA0", Offset = "0x4DEAEA0", VA = "0x4DEAEA0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000186")]
	public static Vector3 down
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600080D")]
		[Address(RVA = "0x4DEAEE0", Offset = "0x4DEAEE0", VA = "0x4DEAEE0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000187")]
	public static Vector3 left
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600080E")]
		[Address(RVA = "0x4DEAF20", Offset = "0x4DEAF20", VA = "0x4DEAF20")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000188")]
	public static Vector3 right
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600080F")]
		[Address(RVA = "0x4DEAF60", Offset = "0x4DEAF60", VA = "0x4DEAF60")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000189")]
	public static Vector3 positiveInfinity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000810")]
		[Address(RVA = "0x4DEAFA0", Offset = "0x4DEAFA0", VA = "0x4DEAFA0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700018A")]
	public static Vector3 negativeInfinity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000811")]
		[Address(RVA = "0x4DEAFE0", Offset = "0x4DEAFE0", VA = "0x4DEAFE0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x60007E4")]
	[Address(RVA = "0x4DE94C0", Offset = "0x4DE94C0", VA = "0x4DE94C0")]
	[UnityEngine.Bindings.FreeFunction("VectorScripting::Slerp", IsThreadSafe = true)]
	public static Vector3 Slerp(Vector3 a, Vector3 b, float t)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x4DE95A0", Offset = "0x4DE95A0", VA = "0x4DE95A0")]
	[UnityEngine.Bindings.FreeFunction("VectorScripting::SlerpUnclamped", IsThreadSafe = true)]
	public static Vector3 SlerpUnclamped(Vector3 a, Vector3 b, float t)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x4DE9680", Offset = "0x4DE9680", VA = "0x4DE9680")]
	[UnityEngine.Bindings.FreeFunction("VectorScripting::OrthoNormalize", IsThreadSafe = true)]
	private static extern void OrthoNormalize2(ref Vector3 a, ref Vector3 b);

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x4DE96C0", Offset = "0x4DE96C0", VA = "0x4DE96C0")]
	public static void OrthoNormalize(ref Vector3 normal, ref Vector3 tangent)
	{
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x4DE9700", Offset = "0x4DE9700", VA = "0x4DE9700")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static Vector3 RotateTowards(Vector3 current, Vector3 target, float maxRadiansDelta, float maxMagnitudeDelta)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x4DE97F0", Offset = "0x4DE97F0", VA = "0x4DE97F0")]
	public static Vector3 Lerp(Vector3 a, Vector3 b, float t)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x4DE9830", Offset = "0x4DE9830", VA = "0x4DE9830")]
	public static Vector3 LerpUnclamped(Vector3 a, Vector3 b, float t)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x4DE9850", Offset = "0x4DE9850", VA = "0x4DE9850")]
	public static Vector3 MoveTowards(Vector3 current, Vector3 target, float maxDistanceDelta)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x4DE99F0", Offset = "0x4DE99F0", VA = "0x4DE99F0")]
	[ExcludeFromDocs]
	public static Vector3 SmoothDamp(Vector3 current, Vector3 target, ref Vector3 currentVelocity, float smoothTime, float maxSpeed)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60007ED")]
	[Address(RVA = "0x4DE9A50", Offset = "0x4DE9A50", VA = "0x4DE9A50")]
	public static Vector3 SmoothDamp(Vector3 current, Vector3 target, ref Vector3 currentVelocity, float smoothTime, [DefaultValue("Mathf.Infinity")] float maxSpeed, [DefaultValue("Time.deltaTime")] float deltaTime)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x4DE9EE0", Offset = "0x4DE9EE0", VA = "0x4DE9EE0")]
	public Vector3(float x, float y, float z)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x4DE9EF0", Offset = "0x4DE9EF0", VA = "0x4DE9EF0")]
	public Vector3(float x, float y)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x4DE9F10", Offset = "0x4DE9F10", VA = "0x4DE9F10")]
	public static Vector3 Scale(Vector3 a, Vector3 b)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007F3")]
	[Address(RVA = "0x4DE9F20", Offset = "0x4DE9F20", VA = "0x4DE9F20")]
	public void Scale(Vector3 scale)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007F4")]
	[Address(RVA = "0x4DE9F50", Offset = "0x4DE9F50", VA = "0x4DE9F50")]
	public static Vector3 Cross(Vector3 lhs, Vector3 rhs)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007F5")]
	[Address(RVA = "0x4DE9FA0", Offset = "0x4DE9FA0", VA = "0x4DE9FA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x4DE9FE0", Offset = "0x4DE9FE0", VA = "0x4DE9FE0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x4DEA070", Offset = "0x4DEA070", VA = "0x4DEA070", Slot = "4")]
	public bool Equals(Vector3 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x4DEA0A0", Offset = "0x4DEA0A0", VA = "0x4DEA0A0")]
	public static Vector3 Reflect(Vector3 inDirection, Vector3 inNormal)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x4DEA0F0", Offset = "0x4DEA0F0", VA = "0x4DEA0F0")]
	public static Vector3 Normalize(Vector3 value)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x4DEA210", Offset = "0x4DEA210", VA = "0x4DEA210")]
	public void Normalize()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x4DEA470", Offset = "0x4DEA470", VA = "0x4DEA470")]
	public static float Dot(Vector3 lhs, Vector3 rhs)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x4DEA490", Offset = "0x4DEA490", VA = "0x4DEA490")]
	public static Vector3 Project(Vector3 vector, Vector3 onNormal)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x4DEA590", Offset = "0x4DEA590", VA = "0x4DEA590")]
	public static Vector3 ProjectOnPlane(Vector3 vector, Vector3 planeNormal)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x4DEA670", Offset = "0x4DEA670", VA = "0x4DEA670")]
	public static float Angle(Vector3 from, Vector3 to)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000800")]
	[Address(RVA = "0x4DEA830", Offset = "0x4DEA830", VA = "0x4DEA830")]
	public static float SignedAngle(Vector3 from, Vector3 to, Vector3 axis)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000801")]
	[Address(RVA = "0x4DEAA80", Offset = "0x4DEAA80", VA = "0x4DEAA80")]
	public static float Distance(Vector3 a, Vector3 b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000802")]
	[Address(RVA = "0x4DEAB40", Offset = "0x4DEAB40", VA = "0x4DEAB40")]
	public static Vector3 ClampMagnitude(Vector3 vector, float maxLength)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000803")]
	[Address(RVA = "0x4DEAC30", Offset = "0x4DEAC30", VA = "0x4DEAC30")]
	public static float Magnitude(Vector3 vector)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000806")]
	[Address(RVA = "0x4DEAD80", Offset = "0x4DEAD80", VA = "0x4DEAD80")]
	public static Vector3 Min(Vector3 lhs, Vector3 rhs)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000807")]
	[Address(RVA = "0x4DEAD90", Offset = "0x4DEAD90", VA = "0x4DEAD90")]
	public static Vector3 Max(Vector3 lhs, Vector3 rhs)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000812")]
	[Address(RVA = "0x4DEB020", Offset = "0x4DEB020", VA = "0x4DEB020")]
	public static Vector3 operator +(Vector3 a, Vector3 b)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000813")]
	[Address(RVA = "0x4DEB030", Offset = "0x4DEB030", VA = "0x4DEB030")]
	public static Vector3 operator -(Vector3 a, Vector3 b)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000814")]
	[Address(RVA = "0x4DEB040", Offset = "0x4DEB040", VA = "0x4DEB040")]
	public static Vector3 operator -(Vector3 a)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000815")]
	[Address(RVA = "0x4DEB050", Offset = "0x4DEB050", VA = "0x4DEB050")]
	public static Vector3 operator *(Vector3 a, float d)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000816")]
	[Address(RVA = "0x4DEB060", Offset = "0x4DEB060", VA = "0x4DEB060")]
	public static Vector3 operator *(float d, Vector3 a)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000817")]
	[Address(RVA = "0x4DEB070", Offset = "0x4DEB070", VA = "0x4DEB070")]
	public static Vector3 operator /(Vector3 a, float d)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000818")]
	[Address(RVA = "0x4DEB080", Offset = "0x4DEB080", VA = "0x4DEB080")]
	public static bool operator ==(Vector3 lhs, Vector3 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000819")]
	[Address(RVA = "0x4DEB0C0", Offset = "0x4DEB0C0", VA = "0x4DEB0C0")]
	public static bool operator !=(Vector3 lhs, Vector3 rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600081A")]
	[Address(RVA = "0x4DEB100", Offset = "0x4DEB100", VA = "0x4DEB100", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600081B")]
	[Address(RVA = "0x4DEB110", Offset = "0x4DEB110", VA = "0x4DEB110", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600081D")]
	[Address(RVA = "0x4DE9540", Offset = "0x4DE9540", VA = "0x4DE9540")]
	private static extern void Slerp_Injected([In] ref Vector3 a, [In] ref Vector3 b, float t, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600081E")]
	[Address(RVA = "0x4DE9620", Offset = "0x4DE9620", VA = "0x4DE9620")]
	private static extern void SlerpUnclamped_Injected([In] ref Vector3 a, [In] ref Vector3 b, float t, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600081F")]
	[Address(RVA = "0x4DE9790", Offset = "0x4DE9790", VA = "0x4DE9790")]
	private static extern void RotateTowards_Injected([In] ref Vector3 current, [In] ref Vector3 target, float maxRadiansDelta, float maxMagnitudeDelta, out Vector3 ret);
}
