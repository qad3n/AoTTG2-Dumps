// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeParallelHashMap
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

[Token(Token = "0x200009F")]
[NativeContainer]
[DebuggerDisplay("Count = {m_HashMapData.Count()}, Capacity = {m_HashMapData.Capacity}, IsCreated = {m_HashMapData.IsCreated}, IsEmpty = {IsEmpty}")]
[DebuggerTypeProxy(typeof(NativeParallelHashMapDebuggerTypeProxy<, >))]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
{
	typeof(int),
	typeof(int)
})]
public struct NativeParallelHashMap<TKey, TValue> : INativeDisposable, IDisposable, IEnumerable<KeyValue<TKey, TValue>>, IEnumerable where TKey : struct, IEquatable<TKey> where TValue : struct
{
	[Token(Token = "0x20000A0")]
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
		[Token(Token = "0x40003C8")]
		[FieldOffset(Offset = "0x0")]
		internal UnsafeParallelHashMap<TKey, TValue> m_HashMapData;

		[Token(Token = "0x170000DC")]
		public readonly bool IsCreated
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60007FC")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000DD")]
		public readonly bool IsEmpty
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60007FD")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000DE")]
		public readonly int Capacity
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60007FF")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170000DF")]
		public readonly TValue this[TKey key]
		{
			[Token(Token = "0x6000802")]
			get
			{
				return (TValue)null;
			}
		}

		[Token(Token = "0x60007FB")]
		internal ReadOnly(UnsafeParallelHashMap<TKey, TValue> hashMapData)
		{
		}

		[Token(Token = "0x60007FE")]
		public readonly int Count()
		{
			return default(int);
		}

		[Token(Token = "0x6000800")]
		public readonly bool TryGetValue(TKey key, out TValue item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000801")]
		public readonly bool ContainsKey(TKey key)
		{
			return default(bool);
		}

		[Token(Token = "0x6000803")]
		public readonly NativeArray<TKey> GetKeyArray(AllocatorManager.AllocatorHandle allocator)
		{
			return default(NativeArray<TKey>);
		}

		[Token(Token = "0x6000804")]
		public readonly NativeArray<TValue> GetValueArray(AllocatorManager.AllocatorHandle allocator)
		{
			return default(NativeArray<TValue>);
		}

		[Token(Token = "0x6000805")]
		public readonly NativeKeyValueArrays<TKey, TValue> GetKeyValueArrays(AllocatorManager.AllocatorHandle allocator)
		{
			return default(NativeKeyValueArrays<TKey, TValue>);
		}

		[Token(Token = "0x6000806")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		private readonly void CheckRead()
		{
		}

		[Token(Token = "0x6000807")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private readonly void ThrowKeyNotPresent(TKey key)
		{
		}

		[Token(Token = "0x6000808")]
		public readonly Enumerator GetEnumerator()
		{
			return default(Enumerator);
		}

		[Token(Token = "0x6000809")]
		private IEnumerator<KeyValue<TKey, TValue>> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002ECollections_002ELowLevel_002EUnsafe_002EKeyValue_003CTKey_002CTValue_003E_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600080A")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x20000A1")]
	[NativeContainer]
	[NativeContainerIsAtomicWriteOnly]
	[DebuggerDisplay("Capacity = {m_Writer.Capacity}")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public struct ParallelWriter
	{
		[Token(Token = "0x40003C9")]
		[FieldOffset(Offset = "0x0")]
		internal UnsafeParallelHashMap<TKey, TValue>.ParallelWriter m_Writer;

		[Token(Token = "0x170000E0")]
		public int ThreadIndex
		{
			[Token(Token = "0x600080B")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170000E1")]
		[Obsolete("'m_ThreadIndex' has been deprecated; use 'ThreadIndex' instead. (UnityUpgradable) -> ThreadIndex")]
		public int m_ThreadIndex
		{
			[Token(Token = "0x600080C")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170000E2")]
		public readonly int Capacity
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x600080D")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x600080E")]
		public bool TryAdd(TKey key, TValue item)
		{
			return default(bool);
		}

		[Token(Token = "0x600080F")]
		public bool TryAdd(TKey key, TValue item, int threadIndexOverride)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20000A2")]
	[NativeContainer]
	[NativeContainerIsReadOnly]
	public struct Enumerator : IEnumerator<KeyValue<TKey, TValue>>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40003CA")]
		[FieldOffset(Offset = "0x0")]
		internal UnsafeParallelHashMapDataEnumerator m_Enumerator;

		[Token(Token = "0x170000E3")]
		public KeyValue<TKey, TValue> Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000813")]
			get
			{
				return default(KeyValue<TKey, TValue>);
			}
		}

		[Token(Token = "0x170000E4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000814")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000810")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000811")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000812")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x40003C6")]
	[FieldOffset(Offset = "0x0")]
	internal UnsafeParallelHashMap<TKey, TValue> m_HashMapData;

	[Token(Token = "0x40003C7")]
	public const int MaxCapacity = 1073741823;

	[Token(Token = "0x170000D8")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60007DF")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D9")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60007E1")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60007E2")]
		set
		{
		}
	}

	[Token(Token = "0x170000DA")]
	public TValue this[TKey key]
	{
		[Token(Token = "0x60007E9")]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x60007EA")]
		set
		{
		}
	}

	[Token(Token = "0x170000DB")]
	public readonly bool IsCreated
	{
		[Token(Token = "0x60007EB")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60007DE")]
	public NativeParallelHashMap(int capacity, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x60007E0")]
	public int Count()
	{
		return default(int);
	}

	[Token(Token = "0x60007E3")]
	public void Clear()
	{
	}

	[Token(Token = "0x60007E4")]
	public bool TryAdd(TKey key, TValue item)
	{
		return default(bool);
	}

	[Token(Token = "0x60007E5")]
	public void Add(TKey key, TValue item)
	{
	}

	[Token(Token = "0x60007E6")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x60007E7")]
	public bool TryGetValue(TKey key, out TValue item)
	{
		return default(bool);
	}

	[Token(Token = "0x60007E8")]
	public bool ContainsKey(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x60007EC")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60007ED")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60007EE")]
	public NativeArray<TKey> GetKeyArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<TKey>);
	}

	[Token(Token = "0x60007EF")]
	public NativeArray<TValue> GetValueArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<TValue>);
	}

	[Token(Token = "0x60007F0")]
	public NativeKeyValueArrays<TKey, TValue> GetKeyValueArrays(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeKeyValueArrays<TKey, TValue>);
	}

	[Token(Token = "0x60007F1")]
	public ParallelWriter AsParallelWriter()
	{
		return default(ParallelWriter);
	}

	[Token(Token = "0x60007F2")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}

	[Token(Token = "0x60007F3")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x60007F4")]
	private IEnumerator<KeyValue<TKey, TValue>> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002ECollections_002ELowLevel_002EUnsafe_002EKeyValue_003CTKey_002CTValue_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60007F5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007F6")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private readonly void CheckRead()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007F7")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckWrite()
	{
	}

	[Token(Token = "0x60007F8")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void ThrowKeyNotPresent(TKey key)
	{
	}

	[Token(Token = "0x60007F9")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void ThrowKeyAlreadyAdded(TKey key)
	{
	}

	[Token(Token = "0x60007FA")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void ThrowAtMaxCapacity()
	{
	}
}
