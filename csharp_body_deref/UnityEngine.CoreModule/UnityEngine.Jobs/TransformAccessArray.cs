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

[Token(Token = "0x20001F9")]
[UnityEngine.Bindings.NativeType(Header = "Runtime/Transform/ScriptBindings/TransformAccess.bindings.h", CodegenOptions = UnityEngine.Bindings.CodegenOptions.Custom)]
public struct TransformAccessArray : IDisposable
{
	[Token(Token = "0x40006CC")]
	[FieldOffset(Offset = "0x0")]
	private IntPtr m_TransformArray;

	[Token(Token = "0x170002C6")]
	public bool isCreated
	{
		[Token(Token = "0x60010AC")]
		[Address(RVA = "0x6930AB0", Offset = "0x692FAB0", VA = "0x6930AB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002C7")]
	public Transform this[int index]
	{
		[Token(Token = "0x60010AF")]
		[Address(RVA = "0x6930B50", Offset = "0x692FB50", VA = "0x6930B50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C8")]
	public int length
	{
		[Token(Token = "0x60010B0")]
		[Address(RVA = "0x6930C30", Offset = "0x692FC30", VA = "0x6930C30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60010AA")]
	[Address(RVA = "0x69309D0", Offset = "0x692F9D0", VA = "0x69309D0")]
	public TransformAccessArray(int capacity, int desiredJobCount = -1)
	{
	}

	[Token(Token = "0x60010AB")]
	[Address(RVA = "0x6930A20", Offset = "0x692FA20", VA = "0x6930A20")]
	public static void Allocate(int capacity, int desiredJobCount, out TransformAccessArray array)
	{
	}

	[Token(Token = "0x60010AD")]
	[Address(RVA = "0x6930AC0", Offset = "0x692FAC0", VA = "0x6930AC0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60010AE")]
	[Address(RVA = "0x6930B40", Offset = "0x692FB40", VA = "0x6930B40")]
	internal IntPtr GetTransformAccessArrayForSchedule()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60010B1")]
	[Address(RVA = "0x6930C90", Offset = "0x692FC90", VA = "0x6930C90")]
	public void Add(Transform transform)
	{
	}

	[Token(Token = "0x60010B2")]
	[Address(RVA = "0x6930DD0", Offset = "0x692FDD0", VA = "0x6930DD0")]
	public void RemoveAtSwapBack(int index)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010B3")]
	[Address(RVA = "0x6930A70", Offset = "0x692FA70", VA = "0x6930A70")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessArrayBindings::Create", IsFreeFunction = true)]
	private static extern IntPtr Create(int capacity, int desiredJobCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x6930B10", Offset = "0x692FB10", VA = "0x6930B10")]
	[UnityEngine.Bindings.NativeMethod(Name = "DestroyTransformAccessArray", IsFreeFunction = true)]
	private static extern void DestroyTransformAccessArray(IntPtr transformArray);

	[Token(Token = "0x60010B5")]
	[Address(RVA = "0x6930D30", Offset = "0x692FD30", VA = "0x6930D30")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessArrayBindings::AddTransform", IsFreeFunction = true)]
	private static void Add(IntPtr transformArrayIntPtr, Transform transform)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010B6")]
	[Address(RVA = "0x6930E10", Offset = "0x692FE10", VA = "0x6930E10")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessArrayBindings::RemoveAtSwapBack", IsFreeFunction = true, ThrowsException = true)]
	private static extern void RemoveAtSwapBack(IntPtr transformArrayIntPtr, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010B7")]
	[Address(RVA = "0x6930E90", Offset = "0x692FE90", VA = "0x6930E90")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessArrayBindings::GetSortedTransformAccess", IsThreadSafe = true, IsFreeFunction = true, ThrowsException = true)]
	internal static extern IntPtr GetSortedTransformAccess(IntPtr transformArrayIntPtr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010B8")]
	[Address(RVA = "0x6930EC0", Offset = "0x692FEC0", VA = "0x6930EC0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessArrayBindings::GetSortedToUserIndex", IsThreadSafe = true, IsFreeFunction = true, ThrowsException = true)]
	internal static extern IntPtr GetSortedToUserIndex(IntPtr transformArrayIntPtr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010B9")]
	[Address(RVA = "0x6930C60", Offset = "0x692FC60", VA = "0x6930C60")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessArrayBindings::GetLength", IsFreeFunction = true)]
	internal static extern int GetLength(IntPtr transformArrayIntPtr);

	[Token(Token = "0x60010BA")]
	[Address(RVA = "0x6930BC0", Offset = "0x692FBC0", VA = "0x6930BC0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TransformAccessArrayBindings::GetTransform", IsFreeFunction = true, ThrowsException = true)]
	internal static Transform GetTransform(IntPtr transformArrayIntPtr, int index)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010BB")]
	[Address(RVA = "0x6930E50", Offset = "0x692FE50", VA = "0x6930E50")]
	private static extern void Add_Injected(IntPtr transformArrayIntPtr, IntPtr transform);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010BC")]
	[Address(RVA = "0x6930EF0", Offset = "0x692FEF0", VA = "0x6930EF0")]
	private static extern IntPtr GetTransform_Injected(IntPtr transformArrayIntPtr, int index);
}
