// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeRingQueue
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Jobs;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x200013A")]
[DebuggerDisplay("Length = {Length}, Capacity = {Capacity}, IsCreated = {IsCreated}, IsEmpty = {IsEmpty}")]
[DebuggerTypeProxy(typeof(UnsafeRingQueueDebugView<>))]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
public struct UnsafeRingQueue<T> : INativeDisposable, IDisposable where T : struct
{
	[Token(Token = "0x4000524")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	public unsafe T* Ptr;

	[Token(Token = "0x4000525")]
	[FieldOffset(Offset = "0x0")]
	public AllocatorManager.AllocatorHandle Allocator;

	[Token(Token = "0x4000526")]
	[FieldOffset(Offset = "0x0")]
	internal readonly int m_Capacity;

	[Token(Token = "0x4000527")]
	[FieldOffset(Offset = "0x0")]
	internal int m_Filled;

	[Token(Token = "0x4000528")]
	[FieldOffset(Offset = "0x0")]
	internal int m_Write;

	[Token(Token = "0x4000529")]
	[FieldOffset(Offset = "0x0")]
	internal int m_Read;

	[Token(Token = "0x400052A")]
	public const int MaxCapacity = 2147483647;

	[Token(Token = "0x17000195")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000D7D")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000196")]
	public readonly int Length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000D7E")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000197")]
	public readonly int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000D7F")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000198")]
	public readonly bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000D84")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000D80")]
	public unsafe UnsafeRingQueue(T* ptr, int capacity)
	{
	}

	[Token(Token = "0x6000D81")]
	public UnsafeRingQueue(int capacity, AllocatorManager.AllocatorHandle allocator, NativeArrayOptions options = NativeArrayOptions.ClearMemory)
	{
	}

	[Token(Token = "0x6000D82")]
	internal unsafe static UnsafeRingQueue<T>* Alloc(AllocatorManager.AllocatorHandle allocator)
	{
		//IL_0002: Expected I, but got O
		return (UnsafeRingQueue<T>*)unchecked((nint)null);
	}

	[Token(Token = "0x6000D83")]
	internal unsafe static void Free(UnsafeRingQueue<T>* data)
	{
	}

	[Token(Token = "0x6000D85")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000D86")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D87")]
	private bool TryEnqueueInternal(T value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D88")]
	public bool TryEnqueue(T value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D89")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void ThrowQueueFull()
	{
	}

	[Token(Token = "0x6000D8A")]
	public void Enqueue(T value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D8B")]
	private bool TryDequeueInternal(out T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D8C")]
	public bool TryDequeue(out T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D8D")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void ThrowQueueEmpty()
	{
	}

	[Token(Token = "0x6000D8E")]
	public T Dequeue()
	{
		return (T)null;
	}
}
