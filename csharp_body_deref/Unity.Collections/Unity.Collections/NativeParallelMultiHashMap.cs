// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeParallelMultiHashMap
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

[Token(Token = "0x20000AC")]
[NativeContainer]
[DebuggerTypeProxy(typeof(NativeParallelMultiHashMapDebuggerTypeProxy<, >))]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
{
	typeof(int),
	typeof(int)
})]
public struct NativeParallelMultiHashMap<TKey, TValue> : INativeDisposable, IDisposable, IEnumerable<KeyValue<TKey, TValue>>, IEnumerable where TKey : struct, IEquatable<TKey> where TValue : struct
{
	[Token(Token = "0x20000AD")]
	[NativeContainer]
	[NativeContainerIsAtomicWriteOnly]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public struct ParallelWriter
	{
		[Token(Token = "0x40003D7")]
		[FieldOffset(Offset = "0x0")]
		internal UnsafeParallelMultiHashMap<TKey, TValue>.ParallelWriter m_Writer;

		[Token(Token = "0x170000F3")]
		public int m_ThreadIndex
		{
			[Token(Token = "0x60008A5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170000F4")]
		public readonly int Capacity
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60008A6")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x60008A7")]
		public void Add(TKey key, TValue item)
		{
		}

		[Token(Token = "0x60008A8")]
		public void Add(TKey key, TValue item, int threadIndexOverride)
		{
		}
	}

	[Token(Token = "0x20000AE")]
	public struct Enumerator : IEnumerator<TValue>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40003D8")]
		[FieldOffset(Offset = "0x0")]
		internal NativeParallelMultiHashMap<TKey, TValue> hashmap;

		[Token(Token = "0x40003D9")]
		[FieldOffset(Offset = "0x0")]
		internal TKey key;

		[Token(Token = "0x40003DA")]
		[FieldOffset(Offset = "0x0")]
		internal byte isFirst;

		[Token(Token = "0x40003DB")]
		[FieldOffset(Offset = "0x0")]
		private TValue value;

		[Token(Token = "0x40003DC")]
		[FieldOffset(Offset = "0x0")]
		private NativeParallelMultiHashMapIterator<TKey> iterator;

		[Token(Token = "0x170000F5")]
		public TValue Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60008AC")]
			get
			{
				return (TValue)null;
			}
		}

		[Token(Token = "0x170000F6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60008AD")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60008A9")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008AA")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60008AB")]
		public void Reset()
		{
		}

		[Token(Token = "0x60008AE")]
		public Enumerator GetEnumerator()
		{
			return default(Enumerator);
		}
	}

	[Token(Token = "0x20000AF")]
	[NativeContainer]
	[NativeContainerIsReadOnly]
	public struct KeyValueEnumerator : IEnumerator<KeyValue<TKey, TValue>>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40003DD")]
		[FieldOffset(Offset = "0x0")]
		internal UnsafeParallelHashMapDataEnumerator m_Enumerator;

		[Token(Token = "0x170000F7")]
		public readonly KeyValue<TKey, TValue> Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60008B2")]
			get
			{
				return default(KeyValue<TKey, TValue>);
			}
		}

		[Token(Token = "0x170000F8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60008B3")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60008AF")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008B0")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60008B1")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x20000B0")]
	[NativeContainer]
	[NativeContainerIsReadOnly]
	[DebuggerTypeProxy(typeof(NativeParallelHashMapDebuggerTypeProxy<, >))]
	[DebuggerDisplay("Count = {m_HashMapData.Count()}, Capacity = {m_HashMapData.Capacity}, IsCreated = {m_HashMapData.IsCreated}, IsEmpty = {IsEmpty}")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public struct ReadOnly : IEnumerable<KeyValue<TKey, TValue>>, IEnumerable
	{
		[Token(Token = "0x40003DE")]
		[FieldOffset(Offset = "0x0")]
		internal UnsafeParallelMultiHashMap<TKey, TValue> m_MultiHashMapData;

		[Token(Token = "0x170000F9")]
		public readonly bool IsCreated
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60008B5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000FA")]
		public readonly bool IsEmpty
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60008B6")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000FB")]
		public readonly int Capacity
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60008B8")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x60008B4")]
		internal ReadOnly(UnsafeParallelMultiHashMap<TKey, TValue> container)
		{
		}

		[Token(Token = "0x60008B7")]
		public readonly int Count()
		{
			return default(int);
		}

		[Token(Token = "0x60008B9")]
		public readonly bool TryGetFirstValue(TKey key, out TValue item, out NativeParallelMultiHashMapIterator<TKey> it)
		{
			return default(bool);
		}

		[Token(Token = "0x60008BA")]
		public readonly bool TryGetNextValue(out TValue item, ref NativeParallelMultiHashMapIterator<TKey> it)
		{
			return default(bool);
		}

		[Token(Token = "0x60008BB")]
		public readonly bool ContainsKey(TKey key)
		{
			return default(bool);
		}

		[Token(Token = "0x60008BC")]
		public readonly NativeArray<TKey> GetKeyArray(AllocatorManager.AllocatorHandle allocator)
		{
			return default(NativeArray<TKey>);
		}

		[Token(Token = "0x60008BD")]
		public readonly NativeArray<TValue> GetValueArray(AllocatorManager.AllocatorHandle allocator)
		{
			return default(NativeArray<TValue>);
		}

		[Token(Token = "0x60008BE")]
		public readonly NativeKeyValueArrays<TKey, TValue> GetKeyValueArrays(AllocatorManager.AllocatorHandle allocator)
		{
			return default(NativeKeyValueArrays<TKey, TValue>);
		}

		[Token(Token = "0x60008BF")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		private readonly void CheckRead()
		{
		}

		[Token(Token = "0x60008C0")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private readonly void ThrowKeyNotPresent(TKey key)
		{
		}

		[Token(Token = "0x60008C1")]
		public KeyValueEnumerator GetEnumerator()
		{
			return default(KeyValueEnumerator);
		}

		[Token(Token = "0x60008C2")]
		private IEnumerator<KeyValue<TKey, TValue>> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002ECollections_002ELowLevel_002EUnsafe_002EKeyValue_003CTKey_002CTValue_003E_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60008C3")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40003D5")]
	[FieldOffset(Offset = "0x0")]
	internal UnsafeParallelMultiHashMap<TKey, TValue> m_MultiHashMapData;

	[Token(Token = "0x40003D6")]
	public const int MaxCapacity = 1073741823;

	[Token(Token = "0x170000F0")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600088A")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F1")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600088C")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x600088D")]
		set
		{
		}
	}

	[Token(Token = "0x170000F2")]
	public readonly bool IsCreated
	{
		[Token(Token = "0x6000897")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000888")]
	public NativeParallelMultiHashMap(int capacity, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000889")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(AllocatorManager.AllocatorHandle) })]
	internal void Initialize<U>(int capacity, ref U allocator) where U : struct, AllocatorManager.IAllocator
	{
	}

	[Token(Token = "0x600088B")]
	public readonly int Count()
	{
		return default(int);
	}

	[Token(Token = "0x600088E")]
	public void Clear()
	{
	}

	[Token(Token = "0x600088F")]
	public void Add(TKey key, TValue item)
	{
	}

	[Token(Token = "0x6000890")]
	public int Remove(TKey key)
	{
		return default(int);
	}

	[Token(Token = "0x6000891")]
	public void Remove(NativeParallelMultiHashMapIterator<TKey> it)
	{
	}

	[Token(Token = "0x6000892")]
	public bool TryGetFirstValue(TKey key, out TValue item, out NativeParallelMultiHashMapIterator<TKey> it)
	{
		return default(bool);
	}

	[Token(Token = "0x6000893")]
	public bool TryGetNextValue(out TValue item, ref NativeParallelMultiHashMapIterator<TKey> it)
	{
		return default(bool);
	}

	[Token(Token = "0x6000894")]
	public bool ContainsKey(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000895")]
	public int CountValuesForKey(TKey key)
	{
		return default(int);
	}

	[Token(Token = "0x6000896")]
	public bool SetValue(TValue item, NativeParallelMultiHashMapIterator<TKey> it)
	{
		return default(bool);
	}

	[Token(Token = "0x6000898")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000899")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600089A")]
	public NativeArray<TKey> GetKeyArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<TKey>);
	}

	[Token(Token = "0x600089B")]
	public NativeArray<TValue> GetValueArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<TValue>);
	}

	[Token(Token = "0x600089C")]
	public NativeKeyValueArrays<TKey, TValue> GetKeyValueArrays(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeKeyValueArrays<TKey, TValue>);
	}

	[Token(Token = "0x600089D")]
	public ParallelWriter AsParallelWriter()
	{
		return default(ParallelWriter);
	}

	[Token(Token = "0x600089E")]
	public Enumerator GetValuesForKey(TKey key)
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600089F")]
	public KeyValueEnumerator GetEnumerator()
	{
		return default(KeyValueEnumerator);
	}

	[Token(Token = "0x60008A0")]
	private IEnumerator<KeyValue<TKey, TValue>> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002ECollections_002ELowLevel_002EUnsafe_002EKeyValue_003CTKey_002CTValue_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60008A1")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60008A2")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A3")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private readonly void CheckRead()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A4")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckWrite()
	{
	}
}
