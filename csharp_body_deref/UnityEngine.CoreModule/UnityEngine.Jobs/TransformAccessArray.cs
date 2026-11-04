// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Jobs.TransformAccessArray
// Update status: CHANGED in this game update
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
[UnityEngine.Bindings.NativeType(Header = "Runtime/Transform/ScriptBindings/TransformAccess.bindings.h", CodegenOptions = UnityEngine.Bindings.CodegenOptions.Custom)]
public struct TransformAccessArray : IDisposable
{
	[Token(Token = "0x40006C7")]
	[FieldOffset(Offset = "0x0")]
	private IntPtr m_TransformArray;

	[Token(Token = "0x170002BF")]
	public bool isCreated
	{
		[Token(Token = "0x600108F")]
		[Address(RVA = "0x2F586A0", Offset = "0x2F56CA0", VA = "0x182F586A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002C0")]
	public Transform this[int index]
	{
		[Token(Token = "0x6001092")]
		[Address(RVA = "0x2F58630", Offset = "0x2F56C30", VA = "0x182F58630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C1")]
	public int length
	{
		[Token(Token = "0x6001093")]
		[Address(RVA = "0x2F586B0", Offset = "0x2F56CB0", VA = "0x182F586B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600108D")]
	[Address(RVA = "0x2F585C0", Offset = "0x2F56BC0", VA = "0x182F585C0")]
	public TransformAccessArray(int capacity, int desiredJobCount = -1)
	{
	}

	[Token(Token = "0x600108E")]
	[Address(RVA = "0x2F58290", Offset = "0x2F56890", VA = "0x182F58290")]
	public static void Allocate(int capacity, int desiredJobCount, out TransformAccessArray array)
	{
	}

	[Token(Token = "0x6001090")]
	[Address(RVA = "0x2F58370", Offset = "0x2F56970", VA = "0x182F58370", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001091")]
	[Address(RVA = "0x737B90", Offset = "0x736190", VA = "0x180737B90")]
	internal IntPtr GetTransformAccessArrayForSchedule()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6001094")]
	[Address(RVA = "0x2F58210", Offset = "0x2F56810", VA = "0x182F58210")]
	public void Add(Transform transform)
	{
	}

	[Token(Token = "0x6001095")]
	[Address(RVA = "0x2F58540", Offset = "0x2F56B40", VA = "0x182F58540")]
	public void RemoveAtSwapBack(int index)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001096")]
	[Address(RVA = "0x2F582F0", Offset = "0x2F568F0", VA = "0x182F582F0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessArrayBindings::Create", IsFreeFunction = true)]
	private static extern IntPtr Create(int capacity, int desiredJobCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001097")]
	[Address(RVA = "0x2F58330", Offset = "0x2F56930", VA = "0x182F58330")]
	[UnityEngine.Bindings.NativeMethod(Name = "DestroyTransformAccessArray", IsFreeFunction = true)]
	private static extern void DestroyTransformAccessArray(IntPtr transformArray);

	[Token(Token = "0x6001098")]
	[Address(RVA = "0x2F58190", Offset = "0x2F56790", VA = "0x182F58190")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessArrayBindings::AddTransform", IsFreeFunction = true)]
	private static void Add(IntPtr transformArrayIntPtr, Transform transform)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001099")]
	[Address(RVA = "0x2F58580", Offset = "0x2F56B80", VA = "0x182F58580")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessArrayBindings::RemoveAtSwapBack", IsFreeFunction = true, ThrowsException = true)]
	private static extern void RemoveAtSwapBack(IntPtr transformArrayIntPtr, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600109A")]
	[Address(RVA = "0x2F58450", Offset = "0x2F56A50", VA = "0x182F58450")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessArrayBindings::GetSortedTransformAccess", IsThreadSafe = true, IsFreeFunction = true, ThrowsException = true)]
	internal static extern IntPtr GetSortedTransformAccess(IntPtr transformArrayIntPtr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600109B")]
	[Address(RVA = "0x2F58410", Offset = "0x2F56A10", VA = "0x182F58410")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessArrayBindings::GetSortedToUserIndex", IsThreadSafe = true, IsFreeFunction = true, ThrowsException = true)]
	internal static extern IntPtr GetSortedToUserIndex(IntPtr transformArrayIntPtr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600109C")]
	[Address(RVA = "0x2F583D0", Offset = "0x2F569D0", VA = "0x182F583D0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessArrayBindings::GetLength", IsFreeFunction = true)]
	internal static extern int GetLength(IntPtr transformArrayIntPtr);

	[Token(Token = "0x600109D")]
	[Address(RVA = "0x2F584D0", Offset = "0x2F56AD0", VA = "0x182F584D0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessArrayBindings::GetTransform", IsFreeFunction = true, ThrowsException = true)]
	internal static Transform GetTransform(IntPtr transformArrayIntPtr, int index)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600109E")]
	[Address(RVA = "0x2F58140", Offset = "0x2F56740", VA = "0x182F58140")]
	private static extern void Add_Injected(IntPtr transformArrayIntPtr, IntPtr transform);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600109F")]
	[Address(RVA = "0x2F58490", Offset = "0x2F56A90", VA = "0x182F58490")]
	private static extern IntPtr GetTransform_Injected(IntPtr transformArrayIntPtr, int index);
}
