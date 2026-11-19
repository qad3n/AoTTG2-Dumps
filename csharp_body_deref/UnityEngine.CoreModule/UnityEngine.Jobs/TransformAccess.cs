// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Jobs.TransformAccess
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Jobs;

[Token(Token = "0x20001F8")]
[UnityEngine.Bindings.NativeHeader("Runtime/Transform/ScriptBindings/TransformAccess.bindings.h")]
public struct TransformAccess
{
	[Token(Token = "0x40006CA")]
	[FieldOffset(Offset = "0x0")]
	private IntPtr hierarchy;

	[Token(Token = "0x40006CB")]
	[FieldOffset(Offset = "0x8")]
	private int index;

	[Token(Token = "0x170002C1")]
	public Vector3 position
	{
		[Token(Token = "0x600109F")]
		[Address(RVA = "0x69306C0", Offset = "0x692F6C0", VA = "0x69306C0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170002C2")]
	public Quaternion rotation
	{
		[Token(Token = "0x60010A0")]
		[Address(RVA = "0x6930750", Offset = "0x692F750", VA = "0x6930750")]
		get
		{
			return default(Quaternion);
		}
	}

	[Token(Token = "0x170002C3")]
	public Vector3 localScale
	{
		[Token(Token = "0x60010A1")]
		[Address(RVA = "0x69307E0", Offset = "0x692F7E0", VA = "0x69307E0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170002C4")]
	public Matrix4x4 localToWorldMatrix
	{
		[Token(Token = "0x60010A2")]
		[Address(RVA = "0x6930870", Offset = "0x692F870", VA = "0x6930870")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x170002C5")]
	public bool isValid
	{
		[Token(Token = "0x60010A3")]
		[Address(RVA = "0x6930930", Offset = "0x692F930", VA = "0x6930930")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60010A4")]
	[Address(RVA = "0x6930940", Offset = "0x692F940", VA = "0x6930940")]
	public void SetPositionAndRotation(Vector3 position, Quaternion rotation)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010A5")]
	[Address(RVA = "0x6930990", Offset = "0x692F990", VA = "0x6930990")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessBindings::SetPositionAndRotation", IsThreadSafe = true, IsFreeFunction = true, ThrowsException = true)]
	private static extern void SetPositionAndRotation_Internal(ref TransformAccess access, ref Vector3 position, ref Quaternion rotation);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010A6")]
	[Address(RVA = "0x6930710", Offset = "0x692F710", VA = "0x6930710")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessBindings::GetPosition", IsThreadSafe = true, IsFreeFunction = true, ThrowsException = true)]
	private static extern void GetPosition(ref TransformAccess access, out Vector3 p);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010A7")]
	[Address(RVA = "0x69307A0", Offset = "0x692F7A0", VA = "0x69307A0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessBindings::GetRotation", IsThreadSafe = true, IsFreeFunction = true, ThrowsException = true)]
	private static extern void GetRotation(ref TransformAccess access, out Quaternion r);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010A8")]
	[Address(RVA = "0x6930830", Offset = "0x692F830", VA = "0x6930830")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessBindings::GetLocalScale", IsThreadSafe = true, IsFreeFunction = true, ThrowsException = true)]
	private static extern void GetLocalScale(ref TransformAccess access, out Vector3 r);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010A9")]
	[Address(RVA = "0x69308F0", Offset = "0x692F8F0", VA = "0x69308F0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessBindings::GetLocalToWorldMatrix", IsThreadSafe = true, IsFreeFunction = true, ThrowsException = true)]
	private static extern void GetLocalToWorldMatrix(ref TransformAccess access, out Matrix4x4 m);
}
