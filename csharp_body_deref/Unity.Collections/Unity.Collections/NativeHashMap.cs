// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeHashMap
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

[Token(Token = "0x200008E")]
[NativeContainer]
[DebuggerTypeProxy(typeof(NativeHashMapDebuggerTypeProxy<, >))]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
{
	typeof(int),
	typeof(int)
})]
public struct NativeHashMap<TKey, TValue> : INativeDisposable, IDisposable, IEnumerable<KVPair<TKey, TValue>>, IEnumerable where TKey : struct, IEquatable<TKey> where TValue : struct
{
	[Token(Token = "0x200008F")]
	[NativeContainer]
	[NativeContainerIsReadOnly]
	public struct Enumerator : IEnumerator<KVPair<TKey, TValue>>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40003B6")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal HashMapHelper<TKey>.Enumerator m_Enumerator;

		[Token(Token = "0x170000B9")]
		public KVPair<TKey, TValue> Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000751")]
			get
			{
				return default(KVPair<TKey, TValue>);
			}
		}

		[Token(Token = "0x170000BA")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000752")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600074E")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600074F")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000750")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x2000090")]
	[NativeContainer]
	[NativeContainerIsReadOnly]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public struct ReadOnly : IEnumerable<KVPair<TKey, TValue>>, IEnumerable
	{
		[Token(Token = "0x40003B7")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal unsafe HashMapHelper<TKey>* m_Data;

		[Token(Token = "0x170000BB")]
		public readonly bool IsCreated
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000754")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000BC")]
		public readonly bool IsEmpty
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000755")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000BD")]
		public readonly int Count
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000756")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170000BE")]
		public readonly int Capacity
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000757")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170000BF")]
		public readonly TValue this[TKey key]
		{
			[Token(Token = "0x600075A")]
			get
			{
				return (TValue)null;
			}
		}

		[Token(Token = "0x6000753")]
		internal ReadOnly(ref NativeHashMap<TKey, TValue> data)
		{
		}

		[Token(Token = "0x6000758")]
		public readonly bool TryGetValue(TKey key, out TValue item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000759")]
		public readonly bool ContainsKey(TKey key)
		{
			return default(bool);
		}

		[Token(Token = "0x600075B")]
		public readonly NativeArray<TKey> GetKeyArray(AllocatorManager.AllocatorHandle allocator)
		{
			return default(NativeArray<TKey>);
		}

		[Token(Token = "0x600075C")]
		public readonly NativeArray<TValue> GetValueArray(AllocatorManager.AllocatorHandle allocator)
		{
			return default(NativeArray<TValue>);
		}

		[Token(Token = "0x600075D")]
		public readonly NativeKeyValueArrays<TKey, TValue> GetKeyValueArrays(AllocatorManager.AllocatorHandle allocator)
		{
			return default(NativeKeyValueArrays<TKey, TValue>);
		}

		[Token(Token = "0x600075E")]
		public readonly Enumerator GetEnumerator()
		{
			return default(Enumerator);
		}

		[Token(Token = "0x600075F")]
		private IEnumerator<KVPair<TKey, TValue>> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002ECollections_002EKVPair_003CTKey_002CTValue_003E_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000760")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000761")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		private readonly void CheckRead()
		{
		}

		[Token(Token = "0x6000762")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private readonly void ThrowKeyNotPresent(TKey key)
		{
		}
	}

	[Token(Token = "0x40003B4")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe HashMapHelper<TKey>* m_Data;

	[Token(Token = "0x40003B5")]
	public const int MaxCapacity = 536870912;

	[Token(Token = "0x170000B4")]
	public readonly bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000734")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000B5")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000735")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000B6")]
	public readonly int Count
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000736")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B7")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000737")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000738")]
		set
		{
		}
	}

	[Token(Token = "0x170000B8")]
	public TValue this[TKey key]
	{
		[Token(Token = "0x6000740")]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x6000741")]
		set
		{
		}
	}

	[Token(Token = "0x6000731")]
	public NativeHashMap(int initialCapacity, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000732")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000733")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000739")]
	public void Clear()
	{
	}

	[Token(Token = "0x600073A")]
	public bool TryAdd(TKey key, TValue item)
	{
		return default(bool);
	}

	[Token(Token = "0x600073B")]
	public void Add(TKey key, TValue item)
	{
	}

	[Token(Token = "0x600073C")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x600073D")]
	public bool TryGetValue(TKey key, out TValue item)
	{
		return default(bool);
	}

	[Token(Token = "0x600073E")]
	public bool ContainsKey(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x600073F")]
	public void TrimExcess()
	{
	}

	[Token(Token = "0x6000742")]
	public NativeArray<TKey> GetKeyArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<TKey>);
	}

	[Token(Token = "0x6000743")]
	public NativeArray<TValue> GetValueArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<TValue>);
	}

	[Token(Token = "0x6000744")]
	public NativeKeyValueArrays<TKey, TValue> GetKeyValueArrays(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeKeyValueArrays<TKey, TValue>);
	}

	[Token(Token = "0x6000745")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000746")]
	private IEnumerator<KVPair<TKey, TValue>> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002ECollections_002EKVPair_003CTKey_002CTValue_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000747")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000748")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000749")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private readonly void CheckRead()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600074A")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckWrite()
	{
	}

	[Token(Token = "0x600074B")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void ThrowKeyNotPresent(TKey key)
	{
	}

	[Token(Token = "0x600074C")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void ThrowKeyAlreadyAdded(TKey key)
	{
	}

	[Token(Token = "0x600074D")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void ThrowAtMaxCapacity()
	{
	}
}
