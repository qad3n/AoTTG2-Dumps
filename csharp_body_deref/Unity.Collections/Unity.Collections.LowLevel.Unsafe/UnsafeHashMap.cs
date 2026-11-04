// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeHashMap
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

[Token(Token = "0x2000109")]
[DebuggerTypeProxy(typeof(UnsafeHashMapDebuggerTypeProxy<, >))]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
{
	typeof(int),
	typeof(int)
})]
public struct UnsafeHashMap<TKey, TValue> : INativeDisposable, IDisposable, IEnumerable<KVPair<TKey, TValue>>, IEnumerable where TKey : struct, IEquatable<TKey> where TValue : struct
{
	[Token(Token = "0x200010A")]
	public struct Enumerator : IEnumerator<KVPair<TKey, TValue>>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40004C0")]
		[FieldOffset(Offset = "0x0")]
		internal HashMapHelper<TKey>.Enumerator m_Enumerator;

		[Token(Token = "0x17000148")]
		public KVPair<TKey, TValue> Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000B7E")]
			get
			{
				return default(KVPair<TKey, TValue>);
			}
		}

		[Token(Token = "0x17000149")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000B7F")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000B7B")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B7C")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000B7D")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x200010B")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public struct ReadOnly : IEnumerable<KVPair<TKey, TValue>>, IEnumerable
	{
		[Token(Token = "0x40004C1")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal HashMapHelper<TKey> m_Data;

		[Token(Token = "0x1700014A")]
		public readonly bool IsCreated
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000B81")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700014B")]
		public readonly bool IsEmpty
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000B82")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700014C")]
		public readonly int Count
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000B83")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700014D")]
		public readonly int Capacity
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000B84")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700014E")]
		public readonly TValue this[TKey key]
		{
			[Token(Token = "0x6000B87")]
			get
			{
				return (TValue)null;
			}
		}

		[Token(Token = "0x6000B80")]
		internal ReadOnly(ref HashMapHelper<TKey> data)
		{
		}

		[Token(Token = "0x6000B85")]
		public readonly bool TryGetValue(TKey key, out TValue item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000B86")]
		public readonly bool ContainsKey(TKey key)
		{
			return default(bool);
		}

		[Token(Token = "0x6000B88")]
		public readonly NativeArray<TKey> GetKeyArray(AllocatorManager.AllocatorHandle allocator)
		{
			return default(NativeArray<TKey>);
		}

		[Token(Token = "0x6000B89")]
		public readonly NativeArray<TValue> GetValueArray(AllocatorManager.AllocatorHandle allocator)
		{
			return default(NativeArray<TValue>);
		}

		[Token(Token = "0x6000B8A")]
		public readonly NativeKeyValueArrays<TKey, TValue> GetKeyValueArrays(AllocatorManager.AllocatorHandle allocator)
		{
			return default(NativeKeyValueArrays<TKey, TValue>);
		}

		[Token(Token = "0x6000B8B")]
		public readonly Enumerator GetEnumerator()
		{
			return default(Enumerator);
		}

		[Token(Token = "0x6000B8C")]
		private IEnumerator<KVPair<TKey, TValue>> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002ECollections_002EKVPair_003CTKey_002CTValue_003E_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000B8D")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40004BE")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal HashMapHelper<TKey> m_Data;

	[Token(Token = "0x40004BF")]
	public const int MaxCapacity = 536870912;

	[Token(Token = "0x17000143")]
	public readonly bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B63")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000144")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B64")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000145")]
	public readonly int Count
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B65")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000146")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B66")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000B67")]
		set
		{
		}
	}

	[Token(Token = "0x17000147")]
	public TValue this[TKey key]
	{
		[Token(Token = "0x6000B6F")]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x6000B70")]
		set
		{
		}
	}

	[Token(Token = "0x6000B60")]
	public UnsafeHashMap(int initialCapacity, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000B61")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000B62")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000B68")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000B69")]
	public bool TryAdd(TKey key, TValue item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6A")]
	public void Add(TKey key, TValue item)
	{
	}

	[Token(Token = "0x6000B6B")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6C")]
	public bool TryGetValue(TKey key, out TValue item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6D")]
	public bool ContainsKey(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6E")]
	public void TrimExcess()
	{
	}

	[Token(Token = "0x6000B71")]
	public NativeArray<TKey> GetKeyArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<TKey>);
	}

	[Token(Token = "0x6000B72")]
	public NativeArray<TValue> GetValueArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<TValue>);
	}

	[Token(Token = "0x6000B73")]
	public NativeKeyValueArrays<TKey, TValue> GetKeyValueArrays(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeKeyValueArrays<TKey, TValue>);
	}

	[Token(Token = "0x6000B74")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000B75")]
	private IEnumerator<KVPair<TKey, TValue>> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002ECollections_002EKVPair_003CTKey_002CTValue_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000B76")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000B77")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}

	[Token(Token = "0x6000B78")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void ThrowKeyNotPresent(TKey key)
	{
	}

	[Token(Token = "0x6000B79")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void ThrowKeyAlreadyAdded(TKey key)
	{
	}

	[Token(Token = "0x6000B7A")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void ThrowAtMaxCapacity()
	{
	}
}
