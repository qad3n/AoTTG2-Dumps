// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeList
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs;

namespace Unity.Collections;

[Token(Token = "0x2000098")]
[NativeContainer]
[DebuggerDisplay("Length = {m_ListData == null ? default : m_ListData->Length}, Capacity = {m_ListData == null ? default : m_ListData->Capacity}")]
[DebuggerTypeProxy(typeof(NativeListDebugView<>))]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
public struct NativeList<T> : INativeDisposable, IDisposable, INativeList<T>, IIndexable<T>, IEnumerable<T>, IEnumerable where T : struct
{
	[Token(Token = "0x2000099")]
	[NativeContainer]
	[NativeContainerIsAtomicWriteOnly]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public struct ParallelWriter
	{
		[Token(Token = "0x40003C0")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		public unsafe UnsafeList<T>* ListData;

		[Token(Token = "0x170000D5")]
		public unsafe readonly void* Ptr
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60007CA")]
			get
			{
				//IL_0002: Expected I, but got O
				return (void*)unchecked((nint)null);
			}
		}

		[Token(Token = "0x60007CB")]
		internal unsafe ParallelWriter(UnsafeList<T>* listData)
		{
		}

		[Token(Token = "0x60007CC")]
		public void AddNoResize(T value)
		{
		}

		[Token(Token = "0x60007CD")]
		public unsafe void AddRangeNoResize(void* ptr, int count)
		{
		}

		[Token(Token = "0x60007CE")]
		public void AddRangeNoResize(UnsafeList<T> list)
		{
		}

		[Token(Token = "0x60007CF")]
		public void AddRangeNoResize(NativeList<T> list)
		{
		}
	}

	[Token(Token = "0x40003BE")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe UnsafeList<T>* m_ListData;

	[Token(Token = "0x40003BF")]
	public const int MaxCapacity = 2147483647;

	[Token(Token = "0x170000D0")]
	public T this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000799")]
		get
		{
			return (T)null;
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600079A")]
		set
		{
		}
	}

	[Token(Token = "0x170000D1")]
	public int Length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600079C")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x600079D")]
		set
		{
		}
	}

	[Token(Token = "0x170000D2")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600079E")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x600079F")]
		set
		{
		}
	}

	[Token(Token = "0x170000D3")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60007AE")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D4")]
	public readonly bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60007AF")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000795")]
	public NativeList(AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000796")]
	public NativeList(int initialCapacity, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000797")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(AllocatorManager.AllocatorHandle) })]
	internal void Initialize<U>(int initialCapacity, ref U allocator) where U : struct, AllocatorManager.IAllocator
	{
	}

	[Token(Token = "0x6000798")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(AllocatorManager.AllocatorHandle) })]
	internal static NativeList<T> New<U>(int initialCapacity, ref U allocator) where U : struct, AllocatorManager.IAllocator
	{
		return default(NativeList<T>);
	}

	[Token(Token = "0x600079B")]
	public unsafe ref T ElementAt(int index)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x60007A0")]
	public unsafe UnsafeList<T>* GetUnsafeList()
	{
		//IL_0002: Expected I, but got O
		return (UnsafeList<T>*)unchecked((nint)null);
	}

	[Token(Token = "0x60007A1")]
	public void AddNoResize(T value)
	{
	}

	[Token(Token = "0x60007A2")]
	public unsafe void AddRangeNoResize(void* ptr, int count)
	{
	}

	[Token(Token = "0x60007A3")]
	public void AddRangeNoResize(NativeList<T> list)
	{
	}

	[Token(Token = "0x60007A4")]
	public void Add(in T value)
	{
	}

	[Token(Token = "0x60007A5")]
	public void AddRange(NativeArray<T> array)
	{
	}

	[Token(Token = "0x60007A6")]
	public unsafe void AddRange(void* ptr, int count)
	{
	}

	[Token(Token = "0x60007A7")]
	public void AddReplicate(in T value, int count)
	{
	}

	[Token(Token = "0x60007A8")]
	public void InsertRangeWithBeginEnd(int begin, int end)
	{
	}

	[Token(Token = "0x60007A9")]
	public void InsertRange(int index, int count)
	{
	}

	[Token(Token = "0x60007AA")]
	public void RemoveAtSwapBack(int index)
	{
	}

	[Token(Token = "0x60007AB")]
	public void RemoveRangeSwapBack(int index, int count)
	{
	}

	[Token(Token = "0x60007AC")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x60007AD")]
	public void RemoveRange(int index, int count)
	{
	}

	[Token(Token = "0x60007B0")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60007B1")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(AllocatorManager.AllocatorHandle) })]
	internal void Dispose<U>(ref U allocator) where U : struct, AllocatorManager.IAllocator
	{
	}

	[Token(Token = "0x60007B2")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60007B3")]
	public void Clear()
	{
	}

	[Token(Token = "0x60007B4")]
	[Obsolete("Implicit cast from `NativeList<T>` to `NativeArray<T>` has been deprecated; Use '.AsArray()' method to do explicit cast instead.", false)]
	public static implicit operator NativeArray<T>(NativeList<T> nativeList)
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x60007B5")]
	public NativeArray<T> AsArray()
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x60007B6")]
	public NativeArray<T> AsDeferredJobArray()
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x60007B7")]
	public NativeArray<T> ToArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x60007B8")]
	public void CopyFrom(in NativeArray<T> other)
	{
	}

	[Token(Token = "0x60007B9")]
	public void CopyFrom(in UnsafeList<T> other)
	{
	}

	[Token(Token = "0x60007BA")]
	public void CopyFrom(in NativeList<T> other)
	{
	}

	[Token(Token = "0x60007BB")]
	public NativeArray<T>.Enumerator GetEnumerator()
	{
		return default(NativeArray<T>.Enumerator);
	}

	[Token(Token = "0x60007BC")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60007BD")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60007BE")]
	public void Resize(int length, NativeArrayOptions options)
	{
	}

	[Token(Token = "0x60007BF")]
	public void ResizeUninitialized(int length)
	{
	}

	[Token(Token = "0x60007C0")]
	public void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x60007C1")]
	public void TrimExcess()
	{
	}

	[Token(Token = "0x60007C2")]
	public NativeArray<T>.ReadOnly AsReadOnly()
	{
		return default(NativeArray<T>.ReadOnly);
	}

	[Token(Token = "0x60007C3")]
	public NativeArray<T>.ReadOnly AsParallelReader()
	{
		return default(NativeArray<T>.ReadOnly);
	}

	[Token(Token = "0x60007C4")]
	public ParallelWriter AsParallelWriter()
	{
		return default(ParallelWriter);
	}

	[Token(Token = "0x60007C5")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckInitialCapacity(int initialCapacity)
	{
	}

	[Token(Token = "0x60007C6")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckSufficientCapacity(int capacity, int length)
	{
	}

	[Token(Token = "0x60007C7")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckIndexInRange(int value, int length)
	{
	}

	[Token(Token = "0x60007C8")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckArgPositive(int value)
	{
	}

	[Token(Token = "0x60007C9")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckHandleMatches(AllocatorManager.AllocatorHandle handle)
	{
	}
}
