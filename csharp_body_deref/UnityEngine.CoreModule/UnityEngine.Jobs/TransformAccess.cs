// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Jobs.TransformAccess
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Jobs;

[Token(Token = "0x20001F7")]
[UnityEngine.Bindings.NativeHeader("Runtime/Transform/ScriptBindings/TransformAccess.bindings.h")]
public struct TransformAccess
{
	[Token(Token = "0x40006C5")]
	[FieldOffset(Offset = "0x0")]
	private IntPtr hierarchy;

	[Token(Token = "0x40006C6")]
	[FieldOffset(Offset = "0x8")]
	private int index;

	[Token(Token = "0x170002BA")]
	public Vector3 position
	{
		[Token(Token = "0x6001082")]
		[Address(RVA = "0x2F58A00", Offset = "0x2F57000", VA = "0x182F58A00")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170002BB")]
	public Quaternion rotation
	{
		[Token(Token = "0x6001083")]
		[Address(RVA = "0x2F58A70", Offset = "0x2F57070", VA = "0x182F58A70")]
		get
		{
			return default(Quaternion);
		}
	}

	[Token(Token = "0x170002BC")]
	public Vector3 localScale
	{
		[Token(Token = "0x6001084")]
		[Address(RVA = "0x2F588F0", Offset = "0x2F56EF0", VA = "0x182F588F0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170002BD")]
	public Matrix4x4 localToWorldMatrix
	{
		[Token(Token = "0x6001085")]
		[Address(RVA = "0x2F58960", Offset = "0x2F56F60", VA = "0x182F58960")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x170002BE")]
	public bool isValid
	{
		[Token(Token = "0x6001086")]
		[Address(RVA = "0xA507A0", Offset = "0xA4EDA0", VA = "0x180A507A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001087")]
	[Address(RVA = "0x2F58890", Offset = "0x2F56E90", VA = "0x182F58890")]
	public void SetPositionAndRotation(Vector3 position, Quaternion rotation)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001088")]
	[Address(RVA = "0x2F58830", Offset = "0x2F56E30", VA = "0x182F58830")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessBindings::SetPositionAndRotation", IsThreadSafe = true, IsFreeFunction = true, ThrowsException = true)]
	private static extern void SetPositionAndRotation_Internal(ref TransformAccess access, ref Vector3 position, ref Quaternion rotation);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001089")]
	[Address(RVA = "0x2F58790", Offset = "0x2F56D90", VA = "0x182F58790")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessBindings::GetPosition", IsThreadSafe = true, IsFreeFunction = true, ThrowsException = true)]
	private static extern void GetPosition(ref TransformAccess access, out Vector3 p);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600108A")]
	[Address(RVA = "0x2F587E0", Offset = "0x2F56DE0", VA = "0x182F587E0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessBindings::GetRotation", IsThreadSafe = true, IsFreeFunction = true, ThrowsException = true)]
	private static extern void GetRotation(ref TransformAccess access, out Quaternion r);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600108B")]
	[Address(RVA = "0x2F586F0", Offset = "0x2F56CF0", VA = "0x182F586F0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessBindings::GetLocalScale", IsThreadSafe = true, IsFreeFunction = true, ThrowsException = true)]
	private static extern void GetLocalScale(ref TransformAccess access, out Vector3 r);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600108C")]
	[Address(RVA = "0x2F58740", Offset = "0x2F56D40", VA = "0x182F58740")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessBindings::GetLocalToWorldMatrix", IsThreadSafe = true, IsFreeFunction = true, ThrowsException = true)]
	private static extern void GetLocalToWorldMatrix(ref TransformAccess access, out Matrix4x4 m);
}
