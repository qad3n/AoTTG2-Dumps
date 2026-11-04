// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeParallelMultiHashMap
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

[Token(Token = "0x2000134")]
[DebuggerTypeProxy(typeof(UnsafeParallelMultiHashMapDebuggerTypeProxy<, >))]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
{
	typeof(int),
	typeof(int)
})]
public struct UnsafeParallelMultiHashMap<TKey, TValue> : INativeDisposable, IDisposable, IEnumerable<KeyValue<TKey, TValue>>, IEnumerable where TKey : struct, IEquatable<TKey> where TValue : struct
{
	[Token(Token = "0x2000135")]
	public struct Enumerator : IEnumerator<TValue>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400051A")]
		[FieldOffset(Offset = "0x0")]
		internal UnsafeParallelMultiHashMap<TKey, TValue> hashmap;

		[Token(Token = "0x400051B")]
		[FieldOffset(Offset = "0x0")]
		internal TKey key;

		[Token(Token = "0x400051C")]
		[FieldOffset(Offset = "0x0")]
		internal bool isFirst;

		[Token(Token = "0x400051D")]
		[FieldOffset(Offset = "0x0")]
		private TValue value;

		[Token(Token = "0x400051E")]
		[FieldOffset(Offset = "0x0")]
		private NativeParallelMultiHashMapIterator<TKey> iterator;

		[Token(Token = "0x1700018C")]
		public TValue Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000D61")]
			get
			{
				return (TValue)null;
			}
		}

		[Token(Token = "0x1700018D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D62")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D5E")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000D5F")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D60")]
		public void Reset()
		{
		}

		[Token(Token = "0x6000D63")]
		public Enumerator GetEnumerator()
		{
			return default(Enumerator);
		}
	}

	[Token(Token = "0x2000136")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public struct ParallelWriter
	{
		[Token(Token = "0x400051F")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal unsafe UnsafeParallelHashMapData* m_Buffer;

		[Token(Token = "0x4000520")]
		[FieldOffset(Offset = "0x0")]
		[NativeSetThreadIndex]
		internal int m_ThreadIndex;

		[Token(Token = "0x1700018E")]
		public readonly int Capacity
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000D64")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000D65")]
		public void Add(TKey key, TValue item)
		{
		}

		[Token(Token = "0x6000D66")]
		public void Add(TKey key, TValue item, int threadIndexOverride)
		{
		}
	}

	[Token(Token = "0x2000137")]
	public struct KeyValueEnumerator : IEnumerator<KeyValue<TKey, TValue>>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000521")]
		[FieldOffset(Offset = "0x0")]
		internal UnsafeParallelHashMapDataEnumerator m_Enumerator;

		[Token(Token = "0x1700018F")]
		public KeyValue<TKey, TValue> Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000D6A")]
			get
			{
				return default(KeyValue<TKey, TValue>);
			}
		}

		[Token(Token = "0x17000190")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D6B")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D67")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000D68")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D69")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x2000138")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public struct ReadOnly : IEnumerable<KeyValue<TKey, TValue>>, IEnumerable
	{
		[Token(Token = "0x4000522")]
		[FieldOffset(Offset = "0x0")]
		internal UnsafeParallelMultiHashMap<TKey, TValue> m_MultiHashMapData;

		[Token(Token = "0x17000191")]
		public readonly bool IsCreated
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000D6D")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000192")]
		public readonly bool IsEmpty
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000D6E")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000193")]
		public readonly int Capacity
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000D70")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000D6C")]
		internal ReadOnly(UnsafeParallelMultiHashMap<TKey, TValue> container)
		{
		}

		[Token(Token = "0x6000D6F")]
		public readonly int Count()
		{
			return default(int);
		}

		[Token(Token = "0x6000D71")]
		public readonly bool TryGetFirstValue(TKey key, out TValue item, out NativeParallelMultiHashMapIterator<TKey> it)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D72")]
		public readonly bool TryGetNextValue(out TValue item, ref NativeParallelMultiHashMapIterator<TKey> it)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D73")]
		public readonly bool ContainsKey(TKey key)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D74")]
		public readonly NativeArray<TKey> GetKeyArray(AllocatorManager.AllocatorHandle allocator)
		{
			return default(NativeArray<TKey>);
		}

		[Token(Token = "0x6000D75")]
		public readonly NativeArray<TValue> GetValueArray(AllocatorManager.AllocatorHandle allocator)
		{
			return default(NativeArray<TValue>);
		}

		[Token(Token = "0x6000D76")]
		public readonly NativeKeyValueArrays<TKey, TValue> GetKeyValueArrays(AllocatorManager.AllocatorHandle allocator)
		{
			return default(NativeKeyValueArrays<TKey, TValue>);
		}

		[Token(Token = "0x6000D77")]
		public KeyValueEnumerator GetEnumerator()
		{
			return default(KeyValueEnumerator);
		}

		[Token(Token = "0x6000D78")]
		private IEnumerator<KeyValue<TKey, TValue>> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002ECollections_002ELowLevel_002EUnsafe_002EKeyValue_003CTKey_002CTValue_003E_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000D79")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000517")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe UnsafeParallelHashMapData* m_Buffer;

	[Token(Token = "0x4000518")]
	[FieldOffset(Offset = "0x0")]
	internal AllocatorManager.AllocatorHandle m_AllocatorLabel;

	[Token(Token = "0x4000519")]
	public const int MaxCapacity = 1073741823;

	[Token(Token = "0x17000189")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000D44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700018A")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000D46")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000D47")]
		set
		{
		}
	}

	[Token(Token = "0x1700018B")]
	public readonly bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000D52")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000D43")]
	public UnsafeParallelMultiHashMap(int capacity, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000D45")]
	public readonly int Count()
	{
		return default(int);
	}

	[Token(Token = "0x6000D48")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000D49")]
	public void Add(TKey key, TValue item)
	{
	}

	[Token(Token = "0x6000D4A")]
	public int Remove(TKey key)
	{
		return default(int);
	}

	[Token(Token = "0x6000D4B")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public void Remove<TValueEQ>(TKey key, TValueEQ value) where TValueEQ : struct, IEquatable<TValueEQ>
	{
	}

	[Token(Token = "0x6000D4C")]
	public void Remove(NativeParallelMultiHashMapIterator<TKey> it)
	{
	}

	[Token(Token = "0x6000D4D")]
	public readonly bool TryGetFirstValue(TKey key, out TValue item, out NativeParallelMultiHashMapIterator<TKey> it)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D4E")]
	public readonly bool TryGetNextValue(out TValue item, ref NativeParallelMultiHashMapIterator<TKey> it)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D4F")]
	public readonly bool ContainsKey(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D50")]
	public readonly int CountValuesForKey(TKey key)
	{
		return default(int);
	}

	[Token(Token = "0x6000D51")]
	public bool SetValue(TValue item, NativeParallelMultiHashMapIterator<TKey> it)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D53")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000D54")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000D55")]
	public readonly NativeArray<TKey> GetKeyArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<TKey>);
	}

	[Token(Token = "0x6000D56")]
	public readonly NativeArray<TValue> GetValueArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<TValue>);
	}

	[Token(Token = "0x6000D57")]
	public readonly NativeKeyValueArrays<TKey, TValue> GetKeyValueArrays(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeKeyValueArrays<TKey, TValue>);
	}

	[Token(Token = "0x6000D58")]
	public Enumerator GetValuesForKey(TKey key)
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000D59")]
	public ParallelWriter AsParallelWriter()
	{
		return default(ParallelWriter);
	}

	[Token(Token = "0x6000D5A")]
	public KeyValueEnumerator GetEnumerator()
	{
		return default(KeyValueEnumerator);
	}

	[Token(Token = "0x6000D5B")]
	private IEnumerator<KeyValue<TKey, TValue>> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002ECollections_002ELowLevel_002EUnsafe_002EKeyValue_003CTKey_002CTValue_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000D5C")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000D5D")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}
}
