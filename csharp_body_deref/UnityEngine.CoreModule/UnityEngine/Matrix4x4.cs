// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Matrix4x4
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
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000144")]
[UnityEngine.Bindings.NativeType(Header = "Runtime/Math/Matrix4x4.h")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/MathScripting.h")]
[UnityEngine.NativeClass("Matrix4x4f")]
[Il2CppEagerStaticClassConstruction]
public struct Matrix4x4 : IEquatable<Matrix4x4>, IFormattable
{
	[Token(Token = "0x4000532")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("m_Data[0]")]
	public float m00;

	[Token(Token = "0x4000533")]
	[FieldOffset(Offset = "0x4")]
	[UnityEngine.Bindings.NativeName("m_Data[1]")]
	public float m10;

	[Token(Token = "0x4000534")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.NativeName("m_Data[2]")]
	public float m20;

	[Token(Token = "0x4000535")]
	[FieldOffset(Offset = "0xC")]
	[UnityEngine.Bindings.NativeName("m_Data[3]")]
	public float m30;

	[Token(Token = "0x4000536")]
	[FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.NativeName("m_Data[4]")]
	public float m01;

	[Token(Token = "0x4000537")]
	[FieldOffset(Offset = "0x14")]
	[UnityEngine.Bindings.NativeName("m_Data[5]")]
	public float m11;

	[Token(Token = "0x4000538")]
	[FieldOffset(Offset = "0x18")]
	[UnityEngine.Bindings.NativeName("m_Data[6]")]
	public float m21;

	[Token(Token = "0x4000539")]
	[FieldOffset(Offset = "0x1C")]
	[UnityEngine.Bindings.NativeName("m_Data[7]")]
	public float m31;

	[Token(Token = "0x400053A")]
	[FieldOffset(Offset = "0x20")]
	[UnityEngine.Bindings.NativeName("m_Data[8]")]
	public float m02;

	[Token(Token = "0x400053B")]
	[FieldOffset(Offset = "0x24")]
	[UnityEngine.Bindings.NativeName("m_Data[9]")]
	public float m12;

	[Token(Token = "0x400053C")]
	[FieldOffset(Offset = "0x28")]
	[UnityEngine.Bindings.NativeName("m_Data[10]")]
	public float m22;

	[Token(Token = "0x400053D")]
	[FieldOffset(Offset = "0x2C")]
	[UnityEngine.Bindings.NativeName("m_Data[11]")]
	public float m32;

	[Token(Token = "0x400053E")]
	[FieldOffset(Offset = "0x30")]
	[UnityEngine.Bindings.NativeName("m_Data[12]")]
	public float m03;

	[Token(Token = "0x400053F")]
	[FieldOffset(Offset = "0x34")]
	[UnityEngine.Bindings.NativeName("m_Data[13]")]
	public float m13;

	[Token(Token = "0x4000540")]
	[FieldOffset(Offset = "0x38")]
	[UnityEngine.Bindings.NativeName("m_Data[14]")]
	public float m23;

	[Token(Token = "0x4000541")]
	[FieldOffset(Offset = "0x3C")]
	[UnityEngine.Bindings.NativeName("m_Data[15]")]
	public float m33;

	[Token(Token = "0x4000542")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Matrix4x4 zeroMatrix;

	[Token(Token = "0x4000543")]
	[FieldOffset(Offset = "0x40")]
	private static readonly Matrix4x4 identityMatrix;

	[Token(Token = "0x170001D5")]
	public readonly Quaternion rotation
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A68")]
		[Address(RVA = "0x2F07320", Offset = "0x2F05920", VA = "0x182F07320")]
		get
		{
			return default(Quaternion);
		}
	}

	[Token(Token = "0x170001D6")]
	public readonly Vector3 lossyScale
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A69")]
		[Address(RVA = "0x2F072B0", Offset = "0x2F058B0", VA = "0x182F072B0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001D7")]
	public readonly float determinant
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A6A")]
		[Address(RVA = "0x2F05CE0", Offset = "0x2F042E0", VA = "0x182F05CE0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001D8")]
	public readonly FrustumPlanes decomposeProjection
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A6B")]
		[Address(RVA = "0x2F071E0", Offset = "0x2F057E0", VA = "0x182F071E0")]
		get
		{
			return default(FrustumPlanes);
		}
	}

	[Token(Token = "0x170001D9")]
	public readonly Matrix4x4 inverse
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A73")]
		[Address(RVA = "0x2F062D0", Offset = "0x2F048D0", VA = "0x182F062D0")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x170001DA")]
	public readonly Matrix4x4 transpose
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A75")]
		[Address(RVA = "0x2F07380", Offset = "0x2F05980", VA = "0x182F07380")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x170001DB")]
	public float this[int row, int column]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A7D")]
		[Address(RVA = "0x2F071D0", Offset = "0x2F057D0", VA = "0x182F071D0")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A7E")]
		[Address(RVA = "0x2F07570", Offset = "0x2F05B70", VA = "0x182F07570")]
		set
		{
		}
	}

	[Token(Token = "0x170001DC")]
	public float this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A7F")]
		[Address(RVA = "0x1DB9080", Offset = "0x1DB7680", VA = "0x181DB9080")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A80")]
		[Address(RVA = "0x1DB91E0", Offset = "0x1DB77E0", VA = "0x181DB91E0")]
		set
		{
		}
	}

	[Token(Token = "0x170001DD")]
	public static Matrix4x4 zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A92")]
		[Address(RVA = "0x2F07410", Offset = "0x2F05A10", VA = "0x182F07410")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x170001DE")]
	public static Matrix4x4 identity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A93")]
		[Address(RVA = "0x2F07250", Offset = "0x2F05850", VA = "0x182F07250")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x6000A64")]
	[Address(RVA = "0x2F05E30", Offset = "0x2F04430", VA = "0x182F05E30")]
	[UnityEngine.Bindings.ThreadSafe]
	private readonly Quaternion GetRotation()
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x2F05D70", Offset = "0x2F04370", VA = "0x182F05D70")]
	[UnityEngine.Bindings.ThreadSafe]
	private readonly Vector3 GetLossyScale()
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x2F05CE0", Offset = "0x2F042E0", VA = "0x182F05CE0")]
	[UnityEngine.Bindings.ThreadSafe]
	private readonly extern float GetDeterminant();

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x2F059D0", Offset = "0x2F03FD0", VA = "0x182F059D0")]
	[UnityEngine.Bindings.ThreadSafe]
	private readonly FrustumPlanes DecomposeProjection()
	{
		return default(FrustumPlanes);
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x2F06170", Offset = "0x2F04770", VA = "0x182F06170")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::TRS", IsThreadSafe = true)]
	private static Matrix4x4 Internal_TRS(in Vector3 pos, in Quaternion q, in Vector3 s)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x2F068E0", Offset = "0x2F04EE0", VA = "0x182F068E0")]
	public static Matrix4x4 TRS(Vector3 pos, Quaternion q, Vector3 s)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x2F05F70", Offset = "0x2F04570", VA = "0x182F05F70")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::Inverse3DAffine", IsThreadSafe = true)]
	private static extern bool Internal_Inverse3DAffine(in Matrix4x4 input, ref Matrix4x4 result);

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x2F06280", Offset = "0x2F04880", VA = "0x182F06280")]
	public static bool Inverse3DAffine(Matrix4x4 input, ref Matrix4x4 result)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x2F05F70", Offset = "0x2F04570", VA = "0x182F05F70")]
	public static bool Inverse3DAffine(in Matrix4x4 input, ref Matrix4x4 result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x2F06010", Offset = "0x2F04610", VA = "0x182F06010")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::Inverse", IsThreadSafe = true)]
	private static Matrix4x4 Internal_Inverse(in Matrix4x4 m)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x2F062D0", Offset = "0x2F048D0", VA = "0x182F062D0")]
	public static Matrix4x4 Inverse(Matrix4x4 m)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x2F06220", Offset = "0x2F04820", VA = "0x182F06220")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::Transpose", IsThreadSafe = true)]
	private static Matrix4x4 Internal_Transpose(in Matrix4x4 m)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000A76")]
	[Address(RVA = "0x2F065E0", Offset = "0x2F04BE0", VA = "0x182F065E0")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::Ortho", IsThreadSafe = true)]
	public static Matrix4x4 Ortho(float left, float right, float bottom, float top, float zNear, float zFar)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000A77")]
	[Address(RVA = "0x2F06710", Offset = "0x2F04D10", VA = "0x182F06710")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::Perspective", IsThreadSafe = true)]
	public static Matrix4x4 Perspective(float fov, float aspect, float zNear, float zFar)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x2F060C0", Offset = "0x2F046C0", VA = "0x182F060C0")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::LookAt", IsThreadSafe = true)]
	private static Matrix4x4 Internal_LookAt(in Vector3 from, in Vector3 to, in Vector3 up)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A79")]
	[Address(RVA = "0x2F06360", Offset = "0x2F04960", VA = "0x182F06360")]
	public static Matrix4x4 LookAt(Vector3 from, Vector3 to, Vector3 up)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000A7A")]
	[Address(RVA = "0x2F05C30", Offset = "0x2F04230", VA = "0x182F05C30")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::Frustum", IsThreadSafe = true)]
	public static Matrix4x4 Frustum(float left, float right, float bottom, float top, float zNear, float zFar)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A7B")]
	[Address(RVA = "0x2F05B60", Offset = "0x2F04160", VA = "0x182F05B60")]
	public static Matrix4x4 Frustum(FrustumPlanes fp)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000A7C")]
	[Address(RVA = "0x2F07160", Offset = "0x2F05760", VA = "0x182F07160")]
	public Matrix4x4(Vector4 column0, Vector4 column1, Vector4 column2, Vector4 column3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A81")]
	[Address(RVA = "0xAC9650", Offset = "0xAC7C50", VA = "0x180AC9650", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A82")]
	[Address(RVA = "0x2F05A30", Offset = "0x2F04030", VA = "0x182F05A30", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A83")]
	[Address(RVA = "0x5BBA50", Offset = "0x5BA050", VA = "0x1805BBA50", Slot = "4")]
	public readonly bool Equals(Matrix4x4 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A84")]
	[Address(RVA = "0x5BBA50", Offset = "0x5BA050", VA = "0x1805BBA50")]
	public readonly bool Equals(in Matrix4x4 other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A85")]
	[Address(RVA = "0x1E9BB40", Offset = "0x1E9A140", VA = "0x181E9BB40")]
	public static Matrix4x4 operator *(Matrix4x4 lhs, Matrix4x4 rhs)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A86")]
	[Address(RVA = "0x2F07470", Offset = "0x2F05A70", VA = "0x182F07470")]
	public static Vector4 operator *(Matrix4x4 lhs, Vector4 vector)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A87")]
	[Address(RVA = "0x5BBB60", Offset = "0x5BA160", VA = "0x1805BBB60")]
	public readonly Vector4 GetColumn(int index)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A88")]
	[Address(RVA = "0x2F05E80", Offset = "0x2F04480", VA = "0x182F05E80")]
	public readonly Vector4 GetRow(int index)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A89")]
	[Address(RVA = "0x2F05DC0", Offset = "0x2F043C0", VA = "0x182F05DC0")]
	public readonly Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A8A")]
	[Address(RVA = "0x2F067E0", Offset = "0x2F04DE0", VA = "0x182F067E0")]
	public void SetColumn(int index, Vector4 column)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x2F06870", Offset = "0x2F04E70", VA = "0x182F06870")]
	public void SetRow(int index, Vector4 row)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A8C")]
	[Address(RVA = "0x2F063F0", Offset = "0x2F049F0", VA = "0x182F063F0")]
	public readonly Vector3 MultiplyPoint(Vector3 point)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A8D")]
	[Address(RVA = "0x1E9BAA0", Offset = "0x1E9A0A0", VA = "0x181E9BAA0")]
	public readonly Vector3 MultiplyPoint3x4(Vector3 point)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A8E")]
	[Address(RVA = "0x2F064D0", Offset = "0x2F04AD0", VA = "0x182F064D0")]
	public readonly Vector3 MultiplyVector(Vector3 vector)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A8F")]
	[Address(RVA = "0x2F067A0", Offset = "0x2F04DA0", VA = "0x182F067A0")]
	public static Matrix4x4 Scale(Vector3 vector)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x2F07070", Offset = "0x2F05670", VA = "0x182F07070")]
	public static Matrix4x4 Translate(Vector3 vector)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x2D490C0", Offset = "0x2D476C0", VA = "0x182D490C0")]
	public static Matrix4x4 Rotate(Quaternion q)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x2F06970", Offset = "0x2F04F70", VA = "0x182F06970", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x2F06980", Offset = "0x2F04F80", VA = "0x182F06980", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A97")]
	[Address(RVA = "0x2F05DE0", Offset = "0x2F043E0", VA = "0x182F05DE0")]
	private static extern void GetRotation_Injected(ref Matrix4x4 _unity_self, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A98")]
	[Address(RVA = "0x2F05D20", Offset = "0x2F04320", VA = "0x182F05D20")]
	private static extern void GetLossyScale_Injected(ref Matrix4x4 _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x2F05980", Offset = "0x2F03F80", VA = "0x182F05980")]
	private static extern void DecomposeProjection_Injected(ref Matrix4x4 _unity_self, out FrustumPlanes ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A9A")]
	[Address(RVA = "0x2F06120", Offset = "0x2F04720", VA = "0x182F06120")]
	private static extern void Internal_TRS_Injected(in Vector3 pos, in Quaternion q, in Vector3 s, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A9B")]
	[Address(RVA = "0x2F05FC0", Offset = "0x2F045C0", VA = "0x182F05FC0")]
	private static extern void Internal_Inverse_Injected(in Matrix4x4 m, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A9C")]
	[Address(RVA = "0x2F061D0", Offset = "0x2F047D0", VA = "0x182F061D0")]
	private static extern void Internal_Transpose_Injected(in Matrix4x4 m, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x2F06560", Offset = "0x2F04B60", VA = "0x182F06560")]
	private static extern void Ortho_Injected(float left, float right, float bottom, float top, float zNear, float zFar, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x2F06690", Offset = "0x2F04C90", VA = "0x182F06690")]
	private static extern void Perspective_Injected(float fov, float aspect, float zNear, float zFar, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A9F")]
	[Address(RVA = "0x2F06070", Offset = "0x2F04670", VA = "0x182F06070")]
	private static extern void Internal_LookAt_Injected(in Vector3 from, in Vector3 to, in Vector3 up, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x2F05AE0", Offset = "0x2F040E0", VA = "0x182F05AE0")]
	private static extern void Frustum_Injected(float left, float right, float bottom, float top, float zNear, float zFar, out Matrix4x4 ret);
}
