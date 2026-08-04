// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.NonAllocDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000004")]
public class NonAllocDictionary<K, V> : IDictionary<K, V>, ICollection<KeyValuePair<K, V>>, IEnumerable<KeyValuePair<K, V>>, IEnumerable where K : IEquatable<K>
{
	[Token(Token = "0x2000005")]
	public struct KeyIterator : IEnumerator<K>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000013")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x4000014")]
		[FieldOffset(Offset = "0x0")]
		private NonAllocDictionary<K, V> _dict;

		[Token(Token = "0x1700000B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000031")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700000C")]
		public K Current
		{
			[Token(Token = "0x6000032")]
			get
			{
				return (K)null;
			}
		}

		[Token(Token = "0x600002E")]
		public KeyIterator(NonAllocDictionary<K, V> dictionary)
		{
		}

		[Token(Token = "0x600002F")]
		public KeyIterator GetEnumerator()
		{
			return default(KeyIterator);
		}

		[Token(Token = "0x6000030")]
		public void Reset()
		{
		}

		[Token(Token = "0x6000033")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000034")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000006")]
	public struct ValueIterator : IEnumerator<V>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000015")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x4000016")]
		[FieldOffset(Offset = "0x0")]
		private NonAllocDictionary<K, V> _dict;

		[Token(Token = "0x1700000D")]
		public V Current
		{
			[Token(Token = "0x6000038")]
			get
			{
				return (V)null;
			}
		}

		[Token(Token = "0x1700000E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000039")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000035")]
		public ValueIterator(NonAllocDictionary<K, V> dictionary)
		{
		}

		[Token(Token = "0x6000036")]
		public ValueIterator GetEnumerator()
		{
			return default(ValueIterator);
		}

		[Token(Token = "0x6000037")]
		public void Reset()
		{
		}

		[Token(Token = "0x600003A")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600003B")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000007")]
	public struct PairIterator : IEnumerator<KeyValuePair<K, V>>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000017")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x4000018")]
		[FieldOffset(Offset = "0x0")]
		private NonAllocDictionary<K, V> _dict;

		[Token(Token = "0x1700000F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600003E")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000010")]
		public KeyValuePair<K, V> Current
		{
			[Token(Token = "0x600003F")]
			get
			{
				return default(KeyValuePair<K, V>);
			}
		}

		[Token(Token = "0x600003C")]
		public PairIterator(NonAllocDictionary<K, V> dictionary)
		{
		}

		[Token(Token = "0x600003D")]
		public void Reset()
		{
		}

		[Token(Token = "0x6000040")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000041")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000008")]
	private struct Node
	{
		[Token(Token = "0x4000019")]
		[FieldOffset(Offset = "0x0")]
		public bool Used;

		[Token(Token = "0x400001A")]
		[FieldOffset(Offset = "0x0")]
		public int Next;

		[Token(Token = "0x400001B")]
		[FieldOffset(Offset = "0x0")]
		public uint Hash;

		[Token(Token = "0x400001C")]
		[FieldOffset(Offset = "0x0")]
		public K Key;

		[Token(Token = "0x400001D")]
		[FieldOffset(Offset = "0x0")]
		public V Val;
	}

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x0")]
	private static uint[] _primeTableUInt;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x0")]
	private int _freeHead;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x0")]
	private int _freeCount;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x0")]
	private int _usedCount;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x0")]
	private uint _capacity;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x0")]
	private int[] _buckets;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x0")]
	private Node[] _nodes;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x0")]
	private bool isReadOnly;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x0")]
	private ICollection<K> keys;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x0")]
	private ICollection<V> values;

	[Token(Token = "0x17000003")]
	public KeyIterator Keys
	{
		[Token(Token = "0x6000010")]
		get
		{
			return default(KeyIterator);
		}
	}

	[Token(Token = "0x17000004")]
	private ICollection<V> System_002ECollections_002EGeneric_002EIDictionary_003CK_002CV_003E_002EValues
	{
		[Token(Token = "0x6000011")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000005")]
	private ICollection<K> System_002ECollections_002EGeneric_002EIDictionary_003CK_002CV_003E_002EKeys
	{
		[Token(Token = "0x6000012")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000006")]
	public ValueIterator Values
	{
		[Token(Token = "0x6000013")]
		get
		{
			return default(ValueIterator);
		}
	}

	[Token(Token = "0x17000007")]
	public int Count
	{
		[Token(Token = "0x6000014")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000008")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000015")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000009")]
	public uint Capacity
	{
		[Token(Token = "0x6000016")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x1700000A")]
	public V this[K key]
	{
		[Token(Token = "0x600001B")]
		get
		{
			return (V)null;
		}
		[Token(Token = "0x600001C")]
		set
		{
		}
	}

	[Token(Token = "0x6000017")]
	public NonAllocDictionary(uint capacity = 29u)
	{
	}

	[Token(Token = "0x6000018")]
	public bool ContainsKey(K key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000019")]
	public bool Contains(KeyValuePair<K, V> item)
	{
		return default(bool);
	}

	[Token(Token = "0x600001A")]
	public bool TryGetValue(K key, out V val)
	{
		return default(bool);
	}

	[Token(Token = "0x600001D")]
	public void Set(K key, V val)
	{
	}

	[Token(Token = "0x600001E")]
	public void Add(K key, V val)
	{
	}

	[Token(Token = "0x600001F")]
	public void Add(KeyValuePair<K, V> item)
	{
	}

	[Token(Token = "0x6000020")]
	public bool Remove(K key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000021")]
	public bool Remove(KeyValuePair<K, V> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000022")]
	private IEnumerator<KeyValuePair<K, V>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CK_002CV_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000023")]
	public PairIterator GetEnumerator()
	{
		return default(PairIterator);
	}

	[Token(Token = "0x6000024")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000025")]
	private int FindNode(K key)
	{
		return default(int);
	}

	[Token(Token = "0x6000026")]
	private void Insert(K key, V val)
	{
	}

	[Token(Token = "0x6000027")]
	private void Expand()
	{
	}

	[Token(Token = "0x6000028")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000029")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CK_002CV_003E_003E_002ECopyTo(KeyValuePair<K, V>[] array, int index)
	{
	}

	[Token(Token = "0x600002A")]
	private static bool IsPrimeFromList(uint value)
	{
		return default(bool);
	}

	[Token(Token = "0x600002B")]
	private static uint GetNextPrime(uint value)
	{
		return default(uint);
	}

	[Token(Token = "0x600002C")]
	private static void Assert(bool condition)
	{
	}
}
