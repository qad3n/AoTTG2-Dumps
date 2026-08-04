// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Matrix4x4
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
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200011E")]
[UnityEngine.NativeClass("Matrix4x4f")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/MathScripting.h")]
[Il2CppEagerStaticClassConstruction]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[UnityEngine.Bindings.NativeType(Header = "Runtime/Math/Matrix4x4.h")]
public struct Matrix4x4 : IEquatable<Matrix4x4>, IFormattable
{
	[Token(Token = "0x40004CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("m_Data[0]")]
	public float m00;

	[Token(Token = "0x40004CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	[UnityEngine.Bindings.NativeName("m_Data[1]")]
	public float m10;

	[Token(Token = "0x40004CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.NativeName("m_Data[2]")]
	public float m20;

	[Token(Token = "0x40004CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	[UnityEngine.Bindings.NativeName("m_Data[3]")]
	public float m30;

	[Token(Token = "0x40004CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.NativeName("m_Data[4]")]
	public float m01;

	[Token(Token = "0x40004CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	[UnityEngine.Bindings.NativeName("m_Data[5]")]
	public float m11;

	[Token(Token = "0x40004D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[UnityEngine.Bindings.NativeName("m_Data[6]")]
	public float m21;

	[Token(Token = "0x40004D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	[UnityEngine.Bindings.NativeName("m_Data[7]")]
	public float m31;

	[Token(Token = "0x40004D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[UnityEngine.Bindings.NativeName("m_Data[8]")]
	public float m02;

	[Token(Token = "0x40004D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	[UnityEngine.Bindings.NativeName("m_Data[9]")]
	public float m12;

	[Token(Token = "0x40004D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[UnityEngine.Bindings.NativeName("m_Data[10]")]
	public float m22;

	[Token(Token = "0x40004D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	[UnityEngine.Bindings.NativeName("m_Data[11]")]
	public float m32;

	[Token(Token = "0x40004D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[UnityEngine.Bindings.NativeName("m_Data[12]")]
	public float m03;

	[Token(Token = "0x40004D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	[UnityEngine.Bindings.NativeName("m_Data[13]")]
	public float m13;

	[Token(Token = "0x40004D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[UnityEngine.Bindings.NativeName("m_Data[14]")]
	public float m23;

	[Token(Token = "0x40004D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	[UnityEngine.Bindings.NativeName("m_Data[15]")]
	public float m33;

	[Token(Token = "0x40004DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Matrix4x4 zeroMatrix;

	[Token(Token = "0x40004DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static readonly Matrix4x4 identityMatrix;

	[Token(Token = "0x17000177")]
	public Vector3 lossyScale
	{
		[Token(Token = "0x60007B8")]
		[Address(RVA = "0x4DE77F0", Offset = "0x4DE77F0", VA = "0x4DE77F0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000178")]
	public FrustumPlanes decomposeProjection
	{
		[Token(Token = "0x60007B9")]
		[Address(RVA = "0x4DE7840", Offset = "0x4DE7840", VA = "0x4DE7840")]
		get
		{
			return default(FrustumPlanes);
		}
	}

	[Token(Token = "0x17000179")]
	public Matrix4x4 inverse
	{
		[Token(Token = "0x60007BE")]
		[Address(RVA = "0x4DE7BB0", Offset = "0x4DE7BB0", VA = "0x4DE7BB0")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x1700017A")]
	public float this[int row, int column]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60007C5")]
		[Address(RVA = "0x4DE8280", Offset = "0x4DE8280", VA = "0x4DE8280")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60007C6")]
		[Address(RVA = "0x4DE8390", Offset = "0x4DE8390", VA = "0x4DE8390")]
		set
		{
		}
	}

	[Token(Token = "0x1700017B")]
	public float this[int index]
	{
		[Token(Token = "0x60007C7")]
		[Address(RVA = "0x4DE8290", Offset = "0x4DE8290", VA = "0x4DE8290")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60007C8")]
		[Address(RVA = "0x4DE83A0", Offset = "0x4DE83A0", VA = "0x4DE83A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700017C")]
	public static Matrix4x4 identity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60007D7")]
		[Address(RVA = "0x4DE8E00", Offset = "0x4DE8E00", VA = "0x4DE8E00")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x4DE76C0", Offset = "0x4DE76C0", VA = "0x4DE76C0")]
	[UnityEngine.Bindings.ThreadSafe]
	private Vector3 GetLossyScale()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x4DE7750", Offset = "0x4DE7750", VA = "0x4DE7750")]
	[UnityEngine.Bindings.ThreadSafe]
	private FrustumPlanes DecomposeProjection()
	{
		return default(FrustumPlanes);
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x4DE78C0", Offset = "0x4DE78C0", VA = "0x4DE78C0")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::TRS", IsThreadSafe = true)]
	public static Matrix4x4 TRS(Vector3 pos, Quaternion q, Vector3 s)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x4DE79B0", Offset = "0x4DE79B0", VA = "0x4DE79B0")]
	public void SetTRS(Vector3 pos, Quaternion q, Vector3 s)
	{
	}

	[Token(Token = "0x60007BC")]
	[Address(RVA = "0x4DE7A70", Offset = "0x4DE7A70", VA = "0x4DE7A70")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::Inverse3DAffine", IsThreadSafe = true)]
	public static bool Inverse3DAffine(Matrix4x4 input, ref Matrix4x4 result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x4DE7AF0", Offset = "0x4DE7AF0", VA = "0x4DE7AF0")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::Inverse", IsThreadSafe = true)]
	public static Matrix4x4 Inverse(Matrix4x4 m)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x4DE7C90", Offset = "0x4DE7C90", VA = "0x4DE7C90")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::Ortho", IsThreadSafe = true)]
	public static Matrix4x4 Ortho(float left, float right, float bottom, float top, float zNear, float zFar)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x4DE7DE0", Offset = "0x4DE7DE0", VA = "0x4DE7DE0")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::Perspective", IsThreadSafe = true)]
	public static Matrix4x4 Perspective(float fov, float aspect, float zNear, float zFar)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x4DE7EF0", Offset = "0x4DE7EF0", VA = "0x4DE7EF0")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::LookAt", IsThreadSafe = true)]
	public static Matrix4x4 LookAt(Vector3 from, Vector3 to, Vector3 up)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x4DE7FE0", Offset = "0x4DE7FE0", VA = "0x4DE7FE0")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::Frustum", IsThreadSafe = true)]
	public static Matrix4x4 Frustum(float left, float right, float bottom, float top, float zNear, float zFar)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60007C3")]
	[Address(RVA = "0x4DE8130", Offset = "0x4DE8130", VA = "0x4DE8130")]
	public static Matrix4x4 Frustum(FrustumPlanes fp)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60007C4")]
	[Address(RVA = "0x4DE8260", Offset = "0x4DE8260", VA = "0x4DE8260")]
	public Matrix4x4(Vector4 column0, Vector4 column1, Vector4 column2, Vector4 column3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C9")]
	[Address(RVA = "0x4DE84A0", Offset = "0x4DE84A0", VA = "0x4DE84A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007CA")]
	[Address(RVA = "0x4DE8700", Offset = "0x4DE8700", VA = "0x4DE8700", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007CB")]
	[Address(RVA = "0x4DE87F0", Offset = "0x4DE87F0", VA = "0x4DE87F0", Slot = "4")]
	public bool Equals(Matrix4x4 other)
	{
		return default(bool);
	}

	[Token(Token = "0x60007CC")]
	[Address(RVA = "0x4DE8850", Offset = "0x4DE8850", VA = "0x4DE8850")]
	public static Matrix4x4 operator *(Matrix4x4 lhs, Matrix4x4 rhs)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60007CD")]
	[Address(RVA = "0x4DE8980", Offset = "0x4DE8980", VA = "0x4DE8980")]
	public static Vector4 operator *(Matrix4x4 lhs, Vector4 vector)
	{
		return default(Vector4);
	}

	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x4DE8630", Offset = "0x4DE8630", VA = "0x4DE8630")]
	public Vector4 GetColumn(int index)
	{
		return default(Vector4);
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x4DE8A00", Offset = "0x4DE8A00", VA = "0x4DE8A00")]
	public Vector4 GetRow(int index)
	{
		return default(Vector4);
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x4DE8AD0", Offset = "0x4DE8AD0", VA = "0x4DE8AD0")]
	public void SetRow(int index, Vector4 row)
	{
	}

	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x4DE8B30", Offset = "0x4DE8B30", VA = "0x4DE8B30")]
	public Vector3 MultiplyPoint(Vector3 point)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x4DE8BD0", Offset = "0x4DE8BD0", VA = "0x4DE8BD0")]
	public Vector3 MultiplyPoint3x4(Vector3 point)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x4DE8C30", Offset = "0x4DE8C30", VA = "0x4DE8C30")]
	public Vector3 MultiplyVector(Vector3 vector)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x4DE8C90", Offset = "0x4DE8C90", VA = "0x4DE8C90")]
	public static Matrix4x4 Scale(Vector3 vector)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x4DE8CC0", Offset = "0x4DE8CC0", VA = "0x4DE8CC0")]
	public static Matrix4x4 Translate(Vector3 vector)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x4DE8D00", Offset = "0x4DE8D00", VA = "0x4DE8D00")]
	public static Matrix4x4 Rotate(Quaternion q)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x4DE8E60", Offset = "0x4DE8E60", VA = "0x4DE8E60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x4DE8E70", Offset = "0x4DE8E70", VA = "0x4DE8E70", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x4DE7710", Offset = "0x4DE7710", VA = "0x4DE7710")]
	private static extern void GetLossyScale_Injected(ref Matrix4x4 _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x4DE77B0", Offset = "0x4DE77B0", VA = "0x4DE77B0")]
	private static extern void DecomposeProjection_Injected(ref Matrix4x4 _unity_self, out FrustumPlanes ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x4DE7960", Offset = "0x4DE7960", VA = "0x4DE7960")]
	private static extern void TRS_Injected([In] ref Vector3 pos, [In] ref Quaternion q, [In] ref Vector3 s, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x4DE7AB0", Offset = "0x4DE7AB0", VA = "0x4DE7AB0")]
	private static extern bool Inverse3DAffine_Injected([In] ref Matrix4x4 input, ref Matrix4x4 result);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x4DE7B70", Offset = "0x4DE7B70", VA = "0x4DE7B70")]
	private static extern void Inverse_Injected([In] ref Matrix4x4 m, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x4DE7D50", Offset = "0x4DE7D50", VA = "0x4DE7D50")]
	private static extern void Ortho_Injected(float left, float right, float bottom, float top, float zNear, float zFar, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007E1")]
	[Address(RVA = "0x4DE7E80", Offset = "0x4DE7E80", VA = "0x4DE7E80")]
	private static extern void Perspective_Injected(float fov, float aspect, float zNear, float zFar, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x4DE7F90", Offset = "0x4DE7F90", VA = "0x4DE7F90")]
	private static extern void LookAt_Injected([In] ref Vector3 from, [In] ref Vector3 to, [In] ref Vector3 up, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007E3")]
	[Address(RVA = "0x4DE80A0", Offset = "0x4DE80A0", VA = "0x4DE80A0")]
	private static extern void Frustum_Injected(float left, float right, float bottom, float top, float zNear, float zFar, out Matrix4x4 ret);
}
