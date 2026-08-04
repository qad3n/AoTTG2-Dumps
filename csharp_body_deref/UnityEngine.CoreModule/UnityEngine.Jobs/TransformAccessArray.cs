// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Jobs.TransformAccessArray
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

[Token(Token = "0x20001B9")]
[UnityEngine.Bindings.NativeType(Header = "Runtime/Transform/ScriptBindings/TransformAccess.bindings.h", CodegenOptions = UnityEngine.Bindings.CodegenOptions.Custom)]
public struct TransformAccessArray : IDisposable
{
	[Token(Token = "0x4000630")]
	[FieldOffset(Offset = "0x0")]
	private IntPtr m_TransformArray;

	[Token(Token = "0x17000240")]
	public bool isCreated
	{
		[Token(Token = "0x6000CC7")]
		[Address(RVA = "0x4E0EF20", Offset = "0x4E0EF20", VA = "0x4E0EF20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000241")]
	public Transform this[int index]
	{
		[Token(Token = "0x6000CC9")]
		[Address(RVA = "0x4E0EFB0", Offset = "0x4E0EFB0", VA = "0x4E0EFB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000242")]
	public int length
	{
		[Token(Token = "0x6000CCA")]
		[Address(RVA = "0x4E0F030", Offset = "0x4E0F030", VA = "0x4E0F030")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x4E0EE40", Offset = "0x4E0EE40", VA = "0x4E0EE40")]
	public TransformAccessArray(int capacity, int desiredJobCount = -1)
	{
	}

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x4E0EE90", Offset = "0x4E0EE90", VA = "0x4E0EE90")]
	public static void Allocate(int capacity, int desiredJobCount, out TransformAccessArray array)
	{
	}

	[Token(Token = "0x6000CC8")]
	[Address(RVA = "0x4E0EF30", Offset = "0x4E0EF30", VA = "0x4E0EF30", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000CCB")]
	[Address(RVA = "0x4E0F090", Offset = "0x4E0F090", VA = "0x4E0F090")]
	public void Add(Transform transform)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CCC")]
	[Address(RVA = "0x4E0EEE0", Offset = "0x4E0EEE0", VA = "0x4E0EEE0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessArrayBindings::Create", IsFreeFunction = true)]
	private static extern IntPtr Create(int capacity, int desiredJobCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x4E0EF80", Offset = "0x4E0EF80", VA = "0x4E0EF80")]
	[UnityEngine.Bindings.NativeMethod(Name = "DestroyTransformAccessArray", IsFreeFunction = true)]
	private static extern void DestroyTransformAccessArray(IntPtr transformArray);

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x4E0F140", Offset = "0x4E0F140", VA = "0x4E0F140")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessArrayBindings::AddTransform", IsFreeFunction = true)]
	private static void Add(IntPtr transformArrayIntPtr, Transform transform)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CCF")]
	[Address(RVA = "0x4E0F060", Offset = "0x4E0F060", VA = "0x4E0F060")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessArrayBindings::GetLength", IsFreeFunction = true)]
	internal static extern int GetLength(IntPtr transformArrayIntPtr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x4E0EFF0", Offset = "0x4E0EFF0", VA = "0x4E0EFF0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessArrayBindings::GetTransform", IsFreeFunction = true, ThrowsException = true)]
	internal static extern Transform GetTransform(IntPtr transformArrayIntPtr, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x4E0F1F0", Offset = "0x4E0F1F0", VA = "0x4E0F1F0")]
	private static extern void Add_Injected(IntPtr transformArrayIntPtr, IntPtr transform);
}
