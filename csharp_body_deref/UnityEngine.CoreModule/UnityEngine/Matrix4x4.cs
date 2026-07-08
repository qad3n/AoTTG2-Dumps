using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200011B")]
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

	[Token(Token = "0x17000176")]
	public Vector3 lossyScale
	{
		[Token(Token = "0x60007B6")]
		[Address(RVA = "0x4ABFEC0", Offset = "0x4ABFEC0", VA = "0x4ABFEC0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000177")]
	public FrustumPlanes decomposeProjection
	{
		[Token(Token = "0x60007B7")]
		[Address(RVA = "0x4ABFF10", Offset = "0x4ABFF10", VA = "0x4ABFF10")]
		get
		{
			return default(FrustumPlanes);
		}
	}

	[Token(Token = "0x17000178")]
	public Matrix4x4 inverse
	{
		[Token(Token = "0x60007BC")]
		[Address(RVA = "0x4AC0280", Offset = "0x4AC0280", VA = "0x4AC0280")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x17000179")]
	public float this[int row, int column]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60007C3")]
		[Address(RVA = "0x4AC0950", Offset = "0x4AC0950", VA = "0x4AC0950")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60007C4")]
		[Address(RVA = "0x4AC0A60", Offset = "0x4AC0A60", VA = "0x4AC0A60")]
		set
		{
		}
	}

	[Token(Token = "0x1700017A")]
	public float this[int index]
	{
		[Token(Token = "0x60007C5")]
		[Address(RVA = "0x4AC0960", Offset = "0x4AC0960", VA = "0x4AC0960")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60007C6")]
		[Address(RVA = "0x4AC0A70", Offset = "0x4AC0A70", VA = "0x4AC0A70")]
		set
		{
		}
	}

	[Token(Token = "0x1700017B")]
	public static Matrix4x4 identity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60007D5")]
		[Address(RVA = "0x4AC14D0", Offset = "0x4AC14D0", VA = "0x4AC14D0")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x60007B4")]
	[Address(RVA = "0x4ABFD90", Offset = "0x4ABFD90", VA = "0x4ABFD90")]
	[UnityEngine.Bindings.ThreadSafe]
	private Vector3 GetLossyScale()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x4ABFE20", Offset = "0x4ABFE20", VA = "0x4ABFE20")]
	[UnityEngine.Bindings.ThreadSafe]
	private FrustumPlanes DecomposeProjection()
	{
		return default(FrustumPlanes);
	}

	[Token(Token = "0x60007B8")]
	[Address(RVA = "0x4ABFF90", Offset = "0x4ABFF90", VA = "0x4ABFF90")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::TRS", IsThreadSafe = true)]
	public static Matrix4x4 TRS(Vector3 pos, Quaternion q, Vector3 s)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x4AC0080", Offset = "0x4AC0080", VA = "0x4AC0080")]
	public void SetTRS(Vector3 pos, Quaternion q, Vector3 s)
	{
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x4AC0140", Offset = "0x4AC0140", VA = "0x4AC0140")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::Inverse3DAffine", IsThreadSafe = true)]
	public static bool Inverse3DAffine(Matrix4x4 input, ref Matrix4x4 result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x4AC01C0", Offset = "0x4AC01C0", VA = "0x4AC01C0")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::Inverse", IsThreadSafe = true)]
	public static Matrix4x4 Inverse(Matrix4x4 m)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x4AC0360", Offset = "0x4AC0360", VA = "0x4AC0360")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::Ortho", IsThreadSafe = true)]
	public static Matrix4x4 Ortho(float left, float right, float bottom, float top, float zNear, float zFar)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x4AC04B0", Offset = "0x4AC04B0", VA = "0x4AC04B0")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::Perspective", IsThreadSafe = true)]
	public static Matrix4x4 Perspective(float fov, float aspect, float zNear, float zFar)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x4AC05C0", Offset = "0x4AC05C0", VA = "0x4AC05C0")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::LookAt", IsThreadSafe = true)]
	public static Matrix4x4 LookAt(Vector3 from, Vector3 to, Vector3 up)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x4AC06B0", Offset = "0x4AC06B0", VA = "0x4AC06B0")]
	[UnityEngine.Bindings.FreeFunction("MatrixScripting::Frustum", IsThreadSafe = true)]
	public static Matrix4x4 Frustum(float left, float right, float bottom, float top, float zNear, float zFar)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x4AC0800", Offset = "0x4AC0800", VA = "0x4AC0800")]
	public static Matrix4x4 Frustum(FrustumPlanes fp)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x4AC0930", Offset = "0x4AC0930", VA = "0x4AC0930")]
	public Matrix4x4(Vector4 column0, Vector4 column1, Vector4 column2, Vector4 column3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C7")]
	[Address(RVA = "0x4AC0B70", Offset = "0x4AC0B70", VA = "0x4AC0B70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C8")]
	[Address(RVA = "0x4AC0DD0", Offset = "0x4AC0DD0", VA = "0x4AC0DD0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007C9")]
	[Address(RVA = "0x4AC0EC0", Offset = "0x4AC0EC0", VA = "0x4AC0EC0", Slot = "4")]
	public bool Equals(Matrix4x4 other)
	{
		return default(bool);
	}

	[Token(Token = "0x60007CA")]
	[Address(RVA = "0x4AC0F20", Offset = "0x4AC0F20", VA = "0x4AC0F20")]
	public static Matrix4x4 operator *(Matrix4x4 lhs, Matrix4x4 rhs)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60007CB")]
	[Address(RVA = "0x4AC1050", Offset = "0x4AC1050", VA = "0x4AC1050")]
	public static Vector4 operator *(Matrix4x4 lhs, Vector4 vector)
	{
		return default(Vector4);
	}

	[Token(Token = "0x60007CC")]
	[Address(RVA = "0x4AC0D00", Offset = "0x4AC0D00", VA = "0x4AC0D00")]
	public Vector4 GetColumn(int index)
	{
		return default(Vector4);
	}

	[Token(Token = "0x60007CD")]
	[Address(RVA = "0x4AC10D0", Offset = "0x4AC10D0", VA = "0x4AC10D0")]
	public Vector4 GetRow(int index)
	{
		return default(Vector4);
	}

	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x4AC11A0", Offset = "0x4AC11A0", VA = "0x4AC11A0")]
	public void SetRow(int index, Vector4 row)
	{
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x4AC1200", Offset = "0x4AC1200", VA = "0x4AC1200")]
	public Vector3 MultiplyPoint(Vector3 point)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x4AC12A0", Offset = "0x4AC12A0", VA = "0x4AC12A0")]
	public Vector3 MultiplyPoint3x4(Vector3 point)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x4AC1300", Offset = "0x4AC1300", VA = "0x4AC1300")]
	public Vector3 MultiplyVector(Vector3 vector)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x4AC1360", Offset = "0x4AC1360", VA = "0x4AC1360")]
	public static Matrix4x4 Scale(Vector3 vector)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x4AC1390", Offset = "0x4AC1390", VA = "0x4AC1390")]
	public static Matrix4x4 Translate(Vector3 vector)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x4AC13D0", Offset = "0x4AC13D0", VA = "0x4AC13D0")]
	public static Matrix4x4 Rotate(Quaternion q)
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x4AC1530", Offset = "0x4AC1530", VA = "0x4AC1530", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x4AC1540", Offset = "0x4AC1540", VA = "0x4AC1540", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x4ABFDE0", Offset = "0x4ABFDE0", VA = "0x4ABFDE0")]
	private static extern void GetLossyScale_Injected(ref Matrix4x4 _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x4ABFE80", Offset = "0x4ABFE80", VA = "0x4ABFE80")]
	private static extern void DecomposeProjection_Injected(ref Matrix4x4 _unity_self, out FrustumPlanes ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x4AC0030", Offset = "0x4AC0030", VA = "0x4AC0030")]
	private static extern void TRS_Injected([In] ref Vector3 pos, [In] ref Quaternion q, [In] ref Vector3 s, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x4AC0180", Offset = "0x4AC0180", VA = "0x4AC0180")]
	private static extern bool Inverse3DAffine_Injected([In] ref Matrix4x4 input, ref Matrix4x4 result);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x4AC0240", Offset = "0x4AC0240", VA = "0x4AC0240")]
	private static extern void Inverse_Injected([In] ref Matrix4x4 m, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x4AC0420", Offset = "0x4AC0420", VA = "0x4AC0420")]
	private static extern void Ortho_Injected(float left, float right, float bottom, float top, float zNear, float zFar, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x4AC0550", Offset = "0x4AC0550", VA = "0x4AC0550")]
	private static extern void Perspective_Injected(float fov, float aspect, float zNear, float zFar, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x4AC0660", Offset = "0x4AC0660", VA = "0x4AC0660")]
	private static extern void LookAt_Injected([In] ref Vector3 from, [In] ref Vector3 to, [In] ref Vector3 up, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007E1")]
	[Address(RVA = "0x4AC0770", Offset = "0x4AC0770", VA = "0x4AC0770")]
	private static extern void Frustum_Injected(float left, float right, float bottom, float top, float zNear, float zFar, out Matrix4x4 ret);
}
