// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeList
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
using Unity.Jobs;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000113")]
[DebuggerDisplay("Length = {Length}, Capacity = {Capacity}, IsCreated = {IsCreated}, IsEmpty = {IsEmpty}")]
[DebuggerTypeProxy(typeof(UnsafeListTDebugView<>))]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
public struct UnsafeList<T> : INativeDisposable, IDisposable, INativeList<T>, IIndexable<T>, IEnumerable<T>, IEnumerable where T : struct
{
	[Token(Token = "0x2000114")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public struct ReadOnly : IEnumerable<T>, IEnumerable
	{
		[Token(Token = "0x40004D5")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		public unsafe readonly T* Ptr;

		[Token(Token = "0x40004D6")]
		[FieldOffset(Offset = "0x0")]
		public readonly int Length;

		[Token(Token = "0x17000160")]
		public readonly bool IsCreated
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000BEA")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000161")]
		public readonly bool IsEmpty
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000BEB")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000BEC")]
		internal unsafe ReadOnly(T* ptr, int length)
		{
		}

		[Token(Token = "0x6000BED")]
		public Enumerator GetEnumerator()
		{
			return default(Enumerator);
		}

		[Token(Token = "0x6000BEE")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000BEF")]
		private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000115")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public struct ParallelReader
	{
		[Token(Token = "0x40004D7")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		public unsafe readonly T* Ptr;

		[Token(Token = "0x40004D8")]
		[FieldOffset(Offset = "0x0")]
		public readonly int Length;

		[Token(Token = "0x6000BF0")]
		internal unsafe ParallelReader(T* ptr, int length)
		{
		}
	}

	[Token(Token = "0x2000116")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public struct ParallelWriter
	{
		[Token(Token = "0x40004D9")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		public unsafe UnsafeList<T>* ListData;

		[Token(Token = "0x17000162")]
		public unsafe readonly void* Ptr
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000BF1")]
			get
			{
				//IL_0002: Expected I, but got O
				return (void*)unchecked((nint)null);
			}
		}

		[Token(Token = "0x6000BF2")]
		internal unsafe ParallelWriter(UnsafeList<T>* listData)
		{
		}

		[Token(Token = "0x6000BF3")]
		[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
		public void AddNoResize(T value)
		{
		}

		[Token(Token = "0x6000BF4")]
		[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
		public unsafe void AddRangeNoResize(void* ptr, int count)
		{
		}

		[Token(Token = "0x6000BF5")]
		[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
		public void AddRangeNoResize(UnsafeList<T> list)
		{
		}
	}

	[Token(Token = "0x2000117")]
	public struct Enumerator : IEnumerator<T>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40004DA")]
		[FieldOffset(Offset = "0x0")]
		internal unsafe T* m_Ptr;

		[Token(Token = "0x40004DB")]
		[FieldOffset(Offset = "0x0")]
		internal int m_Length;

		[Token(Token = "0x40004DC")]
		[FieldOffset(Offset = "0x0")]
		internal int m_Index;

		[Token(Token = "0x17000163")]
		public T Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000BF9")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000164")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000BFA")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000BF6")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BF7")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000BF8")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x40004CF")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	public unsafe T* Ptr;

	[Token(Token = "0x40004D0")]
	[FieldOffset(Offset = "0x0")]
	public int m_length;

	[Token(Token = "0x40004D1")]
	[FieldOffset(Offset = "0x0")]
	public int m_capacity;

	[Token(Token = "0x40004D2")]
	[FieldOffset(Offset = "0x0")]
	public AllocatorManager.AllocatorHandle Allocator;

	[Token(Token = "0x40004D3")]
	[FieldOffset(Offset = "0x0")]
	private readonly int padding;

	[Token(Token = "0x40004D4")]
	public const int MaxCapacity = 2147483647;

	[Token(Token = "0x1700015B")]
	public int Length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BB5")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000BB6")]
		set
		{
		}
	}

	[Token(Token = "0x1700015C")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BB7")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000BB8")]
		set
		{
		}
	}

	[Token(Token = "0x1700015D")]
	public T this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BB9")]
		get
		{
			return (T)null;
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BBA")]
		set
		{
		}
	}

	[Token(Token = "0x1700015E")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BC2")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700015F")]
	public readonly bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BC3")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBB")]
	public unsafe ref T ElementAt(int index)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x6000BBC")]
	public unsafe UnsafeList(T* ptr, int length)
	{
	}

	[Token(Token = "0x6000BBD")]
	public UnsafeList(int initialCapacity, AllocatorManager.AllocatorHandle allocator, NativeArrayOptions options = NativeArrayOptions.UninitializedMemory)
	{
	}

	[Token(Token = "0x6000BBE")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(AllocatorManager.AllocatorHandle) })]
	internal unsafe static UnsafeList<T>* Create<U>(int initialCapacity, ref U allocator, NativeArrayOptions options) where U : struct, AllocatorManager.IAllocator
	{
		//IL_0002: Expected I, but got O
		return (UnsafeList<T>*)unchecked((nint)null);
	}

	[Token(Token = "0x6000BBF")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(AllocatorManager.AllocatorHandle) })]
	internal unsafe static void Destroy<U>(UnsafeList<T>* listData, ref U allocator) where U : struct, AllocatorManager.IAllocator
	{
	}

	[Token(Token = "0x6000BC0")]
	public unsafe static UnsafeList<T>* Create(int initialCapacity, AllocatorManager.AllocatorHandle allocator, NativeArrayOptions options = NativeArrayOptions.UninitializedMemory)
	{
		//IL_0002: Expected I, but got O
		return (UnsafeList<T>*)unchecked((nint)null);
	}

	[Token(Token = "0x6000BC1")]
	public unsafe static void Destroy(UnsafeList<T>* listData)
	{
	}

	[Token(Token = "0x6000BC4")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(AllocatorManager.AllocatorHandle) })]
	internal void Dispose<U>(ref U allocator) where U : struct, AllocatorManager.IAllocator
	{
	}

	[Token(Token = "0x6000BC5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000BC6")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000BC7")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000BC8")]
	public void Resize(int length, NativeArrayOptions options = NativeArrayOptions.UninitializedMemory)
	{
	}

	[Token(Token = "0x6000BC9")]
	private void ResizeExact<U>(ref U allocator, int newCapacity) where U : struct, AllocatorManager.IAllocator
	{
	}

	[Token(Token = "0x6000BCA")]
	private void ResizeExact(int capacity)
	{
	}

	[Token(Token = "0x6000BCB")]
	private void SetCapacity<U>(ref U allocator, int capacity) where U : struct, AllocatorManager.IAllocator
	{
	}

	[Token(Token = "0x6000BCC")]
	public void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000BCD")]
	public void TrimExcess()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCE")]
	public void AddNoResize(T value)
	{
	}

	[Token(Token = "0x6000BCF")]
	public unsafe void AddRangeNoResize(void* ptr, int count)
	{
	}

	[Token(Token = "0x6000BD0")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public void AddRangeNoResize(UnsafeList<T> list)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD1")]
	public void Add(in T value)
	{
	}

	[Token(Token = "0x6000BD2")]
	public unsafe void AddRange(void* ptr, int count)
	{
	}

	[Token(Token = "0x6000BD3")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public void AddRange(UnsafeList<T> list)
	{
	}

	[Token(Token = "0x6000BD4")]
	public void AddReplicate(in T value, int count)
	{
	}

	[Token(Token = "0x6000BD5")]
	public void InsertRangeWithBeginEnd(int begin, int end)
	{
	}

	[Token(Token = "0x6000BD6")]
	public void InsertRange(int index, int count)
	{
	}

	[Token(Token = "0x6000BD7")]
	public void RemoveAtSwapBack(int index)
	{
	}

	[Token(Token = "0x6000BD8")]
	public void RemoveRangeSwapBack(int index, int count)
	{
	}

	[Token(Token = "0x6000BD9")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000BDA")]
	public void RemoveRange(int index, int count)
	{
	}

	[Token(Token = "0x6000BDB")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}

	[Token(Token = "0x6000BDC")]
	public ParallelReader AsParallelReader()
	{
		return default(ParallelReader);
	}

	[Token(Token = "0x6000BDD")]
	public ParallelWriter AsParallelWriter()
	{
		return default(ParallelWriter);
	}

	[Token(Token = "0x6000BDE")]
	public void CopyFrom(in NativeArray<T> other)
	{
	}

	[Token(Token = "0x6000BDF")]
	public void CopyFrom(in UnsafeList<T> other)
	{
	}

	[Token(Token = "0x6000BE0")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000BE1")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000BE2")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000BE3")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	internal unsafe static void CheckNull(void* listData)
	{
	}

	[Token(Token = "0x6000BE4")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckIndexCount(int index, int count)
	{
	}

	[Token(Token = "0x6000BE5")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckBeginEndNoLength(int begin, int end)
	{
	}

	[Token(Token = "0x6000BE6")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckBeginEnd(int begin, int end)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE7")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckNoResizeHasEnoughCapacity(int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE8")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckNoResizeHasEnoughCapacity(int length, int index)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE9")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckResize(int currentLength, int numElements, int maxCapacity)
	{
	}
}
