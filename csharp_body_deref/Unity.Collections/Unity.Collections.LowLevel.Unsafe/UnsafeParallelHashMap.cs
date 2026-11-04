// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap
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

[Token(Token = "0x2000127")]
[DebuggerDisplay("Count = {Count()}, Capacity = {Capacity}, IsCreated = {IsCreated}, IsEmpty = {IsEmpty}")]
[DebuggerTypeProxy(typeof(UnsafeParallelHashMapDebuggerTypeProxy<, >))]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
{
	typeof(int),
	typeof(int)
})]
public struct UnsafeParallelHashMap<TKey, TValue> : INativeDisposable, IDisposable, IEnumerable<KeyValue<TKey, TValue>>, IEnumerable where TKey : struct, IEquatable<TKey> where TValue : struct
{
	[Token(Token = "0x2000128")]
	[DebuggerDisplay("Count = {m_HashMapData.Count()}, Capacity = {m_HashMapData.Capacity}, IsCreated = {m_HashMapData.IsCreated}, IsEmpty = {IsEmpty}")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public struct ReadOnly : IEnumerable<KeyValue<TKey, TValue>>, IEnumerable
	{
		[Token(Token = "0x4000508")]
		[FieldOffset(Offset = "0x0")]
		internal UnsafeParallelHashMap<TKey, TValue> m_HashMapData;

		[Token(Token = "0x17000176")]
		public readonly bool IsCreated
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000C83")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000177")]
		public readonly bool IsEmpty
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000C84")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000178")]
		public readonly int Capacity
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000C86")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000179")]
		public readonly TValue this[TKey key]
		{
			[Token(Token = "0x6000C89")]
			get
			{
				return (TValue)null;
			}
		}

		[Token(Token = "0x6000C82")]
		internal ReadOnly(UnsafeParallelHashMap<TKey, TValue> hashMapData)
		{
		}

		[Token(Token = "0x6000C85")]
		public readonly int Count()
		{
			return default(int);
		}

		[Token(Token = "0x6000C87")]
		public readonly bool TryGetValue(TKey key, out TValue item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C88")]
		public readonly bool ContainsKey(TKey key)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C8A")]
		public readonly NativeArray<TKey> GetKeyArray(AllocatorManager.AllocatorHandle allocator)
		{
			return default(NativeArray<TKey>);
		}

		[Token(Token = "0x6000C8B")]
		public readonly NativeArray<TValue> GetValueArray(AllocatorManager.AllocatorHandle allocator)
		{
			return default(NativeArray<TValue>);
		}

		[Token(Token = "0x6000C8C")]
		public readonly NativeKeyValueArrays<TKey, TValue> GetKeyValueArrays(AllocatorManager.AllocatorHandle allocator)
		{
			return default(NativeKeyValueArrays<TKey, TValue>);
		}

		[Token(Token = "0x6000C8D")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private readonly void ThrowKeyNotPresent(TKey key)
		{
		}

		[Token(Token = "0x6000C8E")]
		public readonly Enumerator GetEnumerator()
		{
			return default(Enumerator);
		}

		[Token(Token = "0x6000C8F")]
		private IEnumerator<KeyValue<TKey, TValue>> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002ECollections_002ELowLevel_002EUnsafe_002EKeyValue_003CTKey_002CTValue_003E_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000C90")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000129")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public struct ParallelWriter
	{
		[Token(Token = "0x4000509")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal unsafe UnsafeParallelHashMapData* m_Buffer;

		[Token(Token = "0x400050A")]
		[FieldOffset(Offset = "0x0")]
		[NativeSetThreadIndex]
		internal int m_ThreadIndex;

		[Token(Token = "0x1700017A")]
		public int ThreadIndex
		{
			[Token(Token = "0x6000C91")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700017B")]
		public readonly int Capacity
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000C92")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000C93")]
		public bool TryAdd(TKey key, TValue item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C94")]
		public bool TryAdd(TKey key, TValue item, int threadIndexOverride)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C95")]
		public void Add(TKey key, TValue item)
		{
		}

		[Token(Token = "0x6000C96")]
		public void Add(TKey key, TValue item, int threadIndexOverride)
		{
		}
	}

	[Token(Token = "0x200012A")]
	public struct Enumerator : IEnumerator<KeyValue<TKey, TValue>>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400050B")]
		[FieldOffset(Offset = "0x0")]
		internal UnsafeParallelHashMapDataEnumerator m_Enumerator;

		[Token(Token = "0x1700017C")]
		public KeyValue<TKey, TValue> Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000C9A")]
			get
			{
				return default(KeyValue<TKey, TValue>);
			}
		}

		[Token(Token = "0x1700017D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000C9B")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C97")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C98")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C99")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4000505")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe UnsafeParallelHashMapData* m_Buffer;

	[Token(Token = "0x4000506")]
	[FieldOffset(Offset = "0x0")]
	internal AllocatorManager.AllocatorHandle m_AllocatorLabel;

	[Token(Token = "0x4000507")]
	public const int MaxCapacity = 1073741823;

	[Token(Token = "0x17000172")]
	public readonly bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C69")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000173")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C6A")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000174")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C6C")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000C6D")]
		set
		{
		}
	}

	[Token(Token = "0x17000175")]
	public TValue this[TKey key]
	{
		[Token(Token = "0x6000C74")]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x6000C75")]
		set
		{
		}
	}

	[Token(Token = "0x6000C68")]
	public UnsafeParallelHashMap(int capacity, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000C6B")]
	public readonly int Count()
	{
		return default(int);
	}

	[Token(Token = "0x6000C6E")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000C6F")]
	public bool TryAdd(TKey key, TValue item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C70")]
	public void Add(TKey key, TValue item)
	{
	}

	[Token(Token = "0x6000C71")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C72")]
	public bool TryGetValue(TKey key, out TValue item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C73")]
	public bool ContainsKey(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C76")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000C77")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000C78")]
	public NativeArray<TKey> GetKeyArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<TKey>);
	}

	[Token(Token = "0x6000C79")]
	public NativeArray<TValue> GetValueArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<TValue>);
	}

	[Token(Token = "0x6000C7A")]
	public NativeKeyValueArrays<TKey, TValue> GetKeyValueArrays(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeKeyValueArrays<TKey, TValue>);
	}

	[Token(Token = "0x6000C7B")]
	public ParallelWriter AsParallelWriter()
	{
		return default(ParallelWriter);
	}

	[Token(Token = "0x6000C7C")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}

	[Token(Token = "0x6000C7D")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	internal static void ThrowKeyAlreadyAdded(in TKey key)
	{
	}

	[Token(Token = "0x6000C7E")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void ThrowAtMaxCapacity()
	{
	}

	[Token(Token = "0x6000C7F")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000C80")]
	private IEnumerator<KeyValue<TKey, TValue>> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002ECollections_002ELowLevel_002EUnsafe_002EKeyValue_003CTKey_002CTValue_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000C81")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
