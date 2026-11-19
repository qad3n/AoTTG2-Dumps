// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Matrix4x4
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
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000145")]
[UnityEngine.Bindings.NativeType(Header = "Runtime/Math/Matrix4x4.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/MathScripting.h")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[UnityEngine.NativeClass("Matrix4x4f")]
[Il2CppEagerStaticClassConstruction]
public struct Matrix4x4 : IEquatable<Matrix4x4>, IFormattable
{
	[Token(Token = "0x4000537")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("m_Data[0]")]
	public float m00;

	[Token(Token = "0x4000538")]
	[FieldOffset(Offset = "0x4")]
	[UnityEngine.Bindings.NativeName("m_Data[1]")]
	public float m10;

	[Token(Token = "0x4000539")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.NativeName("m_Data[2]")]
	public float m20;

	[Token(Token = "0x400053A")]
	[FieldOffset(Offset = "0xC")]
	[UnityEngine.Bindings.NativeName("m_Data[3]")]
	public float m30;

	[Token(Token = "0x400053B")]
	[FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.NativeName("m_Data[4]")]
	public float m01;

	[Token(Token = "0x400053C")]
	[FieldOffset(Offset = "0x14")]
	[UnityEngine.Bindings.NativeName("m_Data[5]")]
	public float m11;

	[Token(Token = "0x400053D")]
	[FieldOffset(Offset = "0x18")]
	[UnityEngine.Bindings.NativeName("m_Data[6]")]
	public float m21;

	[Token(Token = "0x400053E")]
	[FieldOffset(Offset = "0x1C")]
	[UnityEngine.Bindings.NativeName("m_Data[7]")]
	public float m31;

	[Token(Token = "0x400053F")]
	[FieldOffset(Offset = "0x20")]
	[UnityEngine.Bindings.NativeName("m_Data[8]")]
	public float m02;

	[Token(Token = "0x4000540")]
	[FieldOffset(Offset = "0x24")]
	[UnityEngine.Bindings.NativeName("m_Data[9]")]
	public float m12;

	[Token(Token = "0x4000541")]
	[FieldOffset(Offset = "0x28")]
	[UnityEngine.Bindings.NativeName("m_Data[10]")]
	public float m22;

	[Token(Token = "0x4000542")]
	[FieldOffset(Offset = "0x2C")]
	[UnityEngine.Bindings.NativeName("m_Data[11]")]
	public float m32;

	[Token(Token = "0x4000543")]
	[FieldOffset(Offset = "0x30")]
	[UnityEngine.Bindings.NativeName("m_Data[12]")]
	public float m03;

	[Token(Token = "0x4000544")]
	[FieldOffset(Offset = "0x34")]
	[UnityEngine.Bindings.NativeName("m_Data[13]")]
	public float m13;

	[Token(Token = "0x4000545")]
	[FieldOffset(Offset = "0x38")]
	[UnityEngine.Bindings.NativeName("m_Data[14]")]
	public float m23;

	[Token(Token = "0x4000546")]
	[FieldOffset(Offset = "0x3C")]
	[UnityEngine.Bindings.NativeName("m_Data[15]")]
	public float m33;

	[Token(Token = "0x4000547")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Matrix4x4 zeroMatrix;

	[Token(Token = "0x4000548")]
	[FieldOffset(Offset = "0x40")]
	private static readonly Matrix4x4 identityMatrix;

	[Token(Token = "0x170001DA")]
	public readonly Quaternion rotation
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A79")]
		[Address(RVA = "0x6900540", Offset = "0x68FF540", VA = "0x6900540")]
		get
		{
			return default(Quaternion);
		}
	}

	[Token(Token = "0x170001DB")]
	public readonly Vector3 lossyScale
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A7A")]
		[Address(RVA = "0x6900590", Offset = "0x68FF590", VA = "0x6900590")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001DC")]
	public readonly float determinant
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A7B")]
		[Address(RVA = "0x69005E0", Offset = "0x68FF5E0", VA = "0x69005E0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001DD")]
	public readonly FrustumPlanes decomposeProjection
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A7C")]
		[Address(RVA = "0x6900610", Offset = "0x68FF610", VA = "0x6900610")]
		get
		{
			return default(FrustumPlanes);
		}
	}

	[Token(Token = "0x170001DE")]
	public readonly Matrix4x4 inverse
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A84")]
		[Address(RVA = "0x69009F0", Offset = "0x68FF9F0", VA = "0x69009F0")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x170001DF")]
	public readonly Matrix4x4 transpose
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A86")]
		[Address(RVA = "0x6900B30", Offset = "0x68FFB30", VA = "0x6900B30")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x170001E0")]
	public float this[int row, int column]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A8E")]
		[Address(RVA = "0x69011F0", Offset = "0x69001F0", VA = "0x69011F0")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A8F")]
		[Address(RVA = "0x69012F0", Offset = "0x69002F0", VA = "0x69012F0")]
		set
		{
		}
	}

	[Token(Token = "0x170001E1")]
	public float this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A90")]
		[Address(RVA = "0x69013F0", Offset = "0x69003F0", VA = "0x69013F0")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A91")]
		[Address(RVA = "0x69014F0", Offset = "0x69004F0", VA = "0x69014F0")]
		set
		{
		}
	}

	[Token(Token = "0x170001E2")]
	public static Matrix4x4 zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AA3")]
		[Address(RVA = "0x6902150", Offset = "0x6901150", VA = "0x6902150")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x170001E3")]
	public static Matrix4x4 identity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000AA4")]
		[Address(RVA = "0x69021B0", Offset = "0x69011B0", VA = "0x69021B0")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x6900350", Offset = "0x68FF350", VA = "0x6900350")]
	[UnityEngine.Bindings.ThreadSafe]
	private readonly Quaternion GetRotation()
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000A76")]
	[Address(RVA = "0x69003E0", Offset = "0x68FF3E0", VA = "0x69003E0")]
	[UnityEngine.Bindings.ThreadSafe]
	private readonly Vector3 GetLossyScale()
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A77")]
	[Address(RVA = "0x6900470", Offset = "0x68FF470", VA = "0x6900470")]
	[UnityEngine.Bindings.ThreadSafe]
	private readonly extern float GetDeterminant();

	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x69004A0", Offset = "0x68FF4A0", VA = "0x69004A0")]
	[UnityEngine.Bindings.ThreadSafe]
	private readonly FrustumPlanes DecomposeProjection()
	{
		return default(FrustumPlanes);
	}

	[Token(Token = "0x6000A7D")]
	[Address(RVA = "0x6900670", Offset = "0x68FF670", VA = "0x6900670")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::TRS", IsThreadSafe = true)]
	private static Matrix4x4 Internal_TRS(in Vector3 pos, in Quaternion q, in Vector3 s)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A7E")]
	[Address(RVA = "0x6900750", Offset = "0x68FF750", VA = "0x6900750")]
	public static Matrix4x4 TRS(Vector3 pos, Quaternion q, Vector3 s)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A7F")]
	[Address(RVA = "0x69007F0", Offset = "0x68FF7F0", VA = "0x69007F0")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::Inverse3DAffine", IsThreadSafe = true)]
	private static extern bool Internal_Inverse3DAffine(in Matrix4x4 input, ref Matrix4x4 result);

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A80")]
	[Address(RVA = "0x6900830", Offset = "0x68FF830", VA = "0x6900830")]
	public static bool Inverse3DAffine(Matrix4x4 input, ref Matrix4x4 result)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A81")]
	[Address(RVA = "0x6900870", Offset = "0x68FF870", VA = "0x6900870")]
	public static bool Inverse3DAffine(in Matrix4x4 input, ref Matrix4x4 result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A82")]
	[Address(RVA = "0x69008B0", Offset = "0x68FF8B0", VA = "0x69008B0")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::Inverse", IsThreadSafe = true)]
	private static Matrix4x4 Internal_Inverse(in Matrix4x4 m)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A83")]
	[Address(RVA = "0x6900970", Offset = "0x68FF970", VA = "0x6900970")]
	public static Matrix4x4 Inverse(Matrix4x4 m)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000A85")]
	[Address(RVA = "0x6900A70", Offset = "0x68FFA70", VA = "0x6900A70")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::Transpose", IsThreadSafe = true)]
	private static Matrix4x4 Internal_Transpose(in Matrix4x4 m)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000A87")]
	[Address(RVA = "0x6900BB0", Offset = "0x68FFBB0", VA = "0x6900BB0")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::Ortho", IsThreadSafe = true)]
	public static Matrix4x4 Ortho(float left, float right, float bottom, float top, float zNear, float zFar)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000A88")]
	[Address(RVA = "0x6900D00", Offset = "0x68FFD00", VA = "0x6900D00")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::Perspective", IsThreadSafe = true)]
	public static Matrix4x4 Perspective(float fov, float aspect, float zNear, float zFar)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000A89")]
	[Address(RVA = "0x6900E10", Offset = "0x68FFE10", VA = "0x6900E10")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::LookAt", IsThreadSafe = true)]
	private static Matrix4x4 Internal_LookAt(in Vector3 from, in Vector3 to, in Vector3 up)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A8A")]
	[Address(RVA = "0x6900EF0", Offset = "0x68FFEF0", VA = "0x6900EF0")]
	public static Matrix4x4 LookAt(Vector3 from, Vector3 to, Vector3 up)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x6900F90", Offset = "0x68FFF90", VA = "0x6900F90")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::Frustum", IsThreadSafe = true)]
	public static Matrix4x4 Frustum(float left, float right, float bottom, float top, float zNear, float zFar)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A8C")]
	[Address(RVA = "0x69010E0", Offset = "0x69000E0", VA = "0x69010E0")]
	public static Matrix4x4 Frustum(FrustumPlanes fp)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000A8D")]
	[Address(RVA = "0x69011D0", Offset = "0x69001D0", VA = "0x69011D0")]
	public Matrix4x4(Vector4 column0, Vector4 column1, Vector4 column2, Vector4 column3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x69015F0", Offset = "0x69005F0", VA = "0x69015F0", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x6901790", Offset = "0x6900790", VA = "0x6901790", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x6901850", Offset = "0x6900850", VA = "0x6901850", Slot = "4")]
	public readonly bool Equals(Matrix4x4 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x69018C0", Offset = "0x69008C0", VA = "0x69018C0")]
	public readonly bool Equals(in Matrix4x4 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x6901930", Offset = "0x6900930", VA = "0x6901930")]
	public static Matrix4x4 operator *(Matrix4x4 lhs, Matrix4x4 rhs)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A97")]
	[Address(RVA = "0x6901A50", Offset = "0x6900A50", VA = "0x6901A50")]
	public static Vector4 operator *(Matrix4x4 lhs, Vector4 vector)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A98")]
	[Address(RVA = "0x6901A90", Offset = "0x6900A90", VA = "0x6901A90")]
	public readonly Vector4 GetColumn(int index)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x6901B40", Offset = "0x6900B40", VA = "0x6901B40")]
	public readonly Vector4 GetRow(int index)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A9A")]
	[Address(RVA = "0x6901C10", Offset = "0x6900C10", VA = "0x6901C10")]
	public readonly Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A9B")]
	[Address(RVA = "0x6901C20", Offset = "0x6900C20", VA = "0x6901C20")]
	public void SetColumn(int index, Vector4 column)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A9C")]
	[Address(RVA = "0x6901CE0", Offset = "0x6900CE0", VA = "0x6901CE0")]
	public void SetRow(int index, Vector4 row)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x6901E70", Offset = "0x6900E70", VA = "0x6901E70")]
	public readonly Vector3 MultiplyPoint(Vector3 point)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x6901F20", Offset = "0x6900F20", VA = "0x6901F20")]
	public readonly Vector3 MultiplyPoint3x4(Vector3 point)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A9F")]
	[Address(RVA = "0x6901F80", Offset = "0x6900F80", VA = "0x6901F80")]
	public readonly Vector3 MultiplyVector(Vector3 vector)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x6901FE0", Offset = "0x6900FE0", VA = "0x6901FE0")]
	public static Matrix4x4 Scale(Vector3 vector)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AA1")]
	[Address(RVA = "0x6902010", Offset = "0x6901010", VA = "0x6902010")]
	public static Matrix4x4 Translate(Vector3 vector)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AA2")]
	[Address(RVA = "0x6902050", Offset = "0x6901050", VA = "0x6902050")]
	public static Matrix4x4 Rotate(Quaternion q)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x6902210", Offset = "0x6901210", VA = "0x6902210", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x6902220", Offset = "0x6901220", VA = "0x6902220", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x69003A0", Offset = "0x68FF3A0", VA = "0x69003A0")]
	private static extern void GetRotation_Injected(ref Matrix4x4 _unity_self, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x6900430", Offset = "0x68FF430", VA = "0x6900430")]
	private static extern void GetLossyScale_Injected(ref Matrix4x4 _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x6900500", Offset = "0x68FF500", VA = "0x6900500")]
	private static extern void DecomposeProjection_Injected(ref Matrix4x4 _unity_self, out FrustumPlanes ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x6900700", Offset = "0x68FF700", VA = "0x6900700")]
	private static extern void Internal_TRS_Injected(in Vector3 pos, in Quaternion q, in Vector3 s, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x6900930", Offset = "0x68FF930", VA = "0x6900930")]
	private static extern void Internal_Inverse_Injected(in Matrix4x4 m, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x6900AF0", Offset = "0x68FFAF0", VA = "0x6900AF0")]
	private static extern void Internal_Transpose_Injected(in Matrix4x4 m, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x6900C70", Offset = "0x68FFC70", VA = "0x6900C70")]
	private static extern void Ortho_Injected(float left, float right, float bottom, float top, float zNear, float zFar, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0x6900DA0", Offset = "0x68FFDA0", VA = "0x6900DA0")]
	private static extern void Perspective_Injected(float fov, float aspect, float zNear, float zFar, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x6900EA0", Offset = "0x68FFEA0", VA = "0x6900EA0")]
	private static extern void Internal_LookAt_Injected(in Vector3 from, in Vector3 to, in Vector3 up, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x6901050", Offset = "0x6900050", VA = "0x6901050")]
	private static extern void Frustum_Injected(float left, float right, float bottom, float top, float zNear, float zFar, out Matrix4x4 ret);
}
