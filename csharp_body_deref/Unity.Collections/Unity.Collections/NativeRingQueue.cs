// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeRingQueue
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs;

namespace Unity.Collections;

[Token(Token = "0x20000BD")]
[NativeContainer]
[DebuggerDisplay("Length = {Length}, Capacity = {Capacity}, IsCreated = {IsCreated}, IsEmpty = {IsEmpty}")]
[DebuggerTypeProxy(typeof(NativeRingQueueDebugView<>))]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
public struct NativeRingQueue<T> : INativeDisposable, IDisposable where T : struct
{
	[Token(Token = "0x40003EC")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe UnsafeRingQueue<T>* m_RingQueue;

	[Token(Token = "0x40003ED")]
	public const int MaxCapacity = 2147483647;

	[Token(Token = "0x17000107")]
	public readonly bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008FF")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000108")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000900")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000109")]
	public readonly int Length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000901")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700010A")]
	public readonly int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000902")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000903")]
	public NativeRingQueue(int capacity, AllocatorManager.AllocatorHandle allocator, NativeArrayOptions options = NativeArrayOptions.ClearMemory)
	{
	}

	[Token(Token = "0x6000904")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000905")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000906")]
	public bool TryEnqueue(T value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000907")]
	public void Enqueue(T value)
	{
	}

	[Token(Token = "0x6000908")]
	public bool TryDequeue(out T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000909")]
	public T Dequeue()
	{
		return (T)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600090A")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private readonly void CheckRead()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600090B")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private readonly void CheckWrite()
	{
	}
}
