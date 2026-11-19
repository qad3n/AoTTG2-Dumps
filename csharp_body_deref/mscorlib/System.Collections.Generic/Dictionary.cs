// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.Dictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x20005EC")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.IDictionaryDebugView<, >))]
[DebuggerDisplay("Count = {Count}")]
public class Dictionary<TKey, TValue> : IDictionary<TKey, TValue>, ICollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable, IDictionary, ICollection, IReadOnlyDictionary<TKey, TValue>, IReadOnlyCollection<KeyValuePair<TKey, TValue>>, ISerializable, IDeserializationCallback
{
	[Token(Token = "0x20005ED")]
	private struct Entry
	{
		[Token(Token = "0x400188C")]
		[FieldOffset(Offset = "0x0")]
		public int hashCode;

		[Token(Token = "0x400188D")]
		[FieldOffset(Offset = "0x0")]
		public int next;

		[Token(Token = "0x400188E")]
		[FieldOffset(Offset = "0x0")]
		public TKey key;

		[Token(Token = "0x400188F")]
		[FieldOffset(Offset = "0x0")]
		public TValue value;
	}

	[Serializable]
	[Token(Token = "0x20005EE")]
	public struct Enumerator : IEnumerator<KeyValuePair<TKey, TValue>>, IDisposable, IEnumerator, IDictionaryEnumerator
	{
		[Token(Token = "0x4001890")]
		[FieldOffset(Offset = "0x0")]
		private Dictionary<TKey, TValue> _dictionary;

		[Token(Token = "0x4001891")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x4001892")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x4001893")]
		[FieldOffset(Offset = "0x0")]
		private KeyValuePair<TKey, TValue> _current;

		[Token(Token = "0x4001894")]
		[FieldOffset(Offset = "0x0")]
		private int _getEnumeratorRetType;

		[Token(Token = "0x17000797")]
		public KeyValuePair<TKey, TValue> Current
		{
			[Token(Token = "0x6002EB2")]
			get
			{
				return default(KeyValuePair<TKey, TValue>);
			}
		}

		[Token(Token = "0x17000798")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002EB4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000799")]
		private DictionaryEntry System_002ECollections_002EIDictionaryEnumerator_002EEntry
		{
			[Token(Token = "0x6002EB6")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x1700079A")]
		private object System_002ECollections_002EIDictionaryEnumerator_002EKey
		{
			[Token(Token = "0x6002EB7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700079B")]
		private object System_002ECollections_002EIDictionaryEnumerator_002EValue
		{
			[Token(Token = "0x6002EB8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002EB0")]
		internal Enumerator(Dictionary<TKey, TValue> dictionary, int getEnumeratorRetType)
		{
		}

		[Token(Token = "0x6002EB1")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002EB3")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6002EB5")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20005EF")]
	[DebuggerDisplay("Count = {Count}")]
	[DebuggerTypeProxy(typeof(System.Collections.Generic.DictionaryKeyCollectionDebugView<, >))]
	public sealed class KeyCollection : ICollection<TKey>, IEnumerable<TKey>, IEnumerable, ICollection, IReadOnlyCollection<TKey>
	{
		[Serializable]
		[Token(Token = "0x20005F0")]
		public struct Enumerator : IEnumerator<TKey>, IDisposable, IEnumerator
		{
			[Token(Token = "0x4001896")]
			[FieldOffset(Offset = "0x0")]
			private Dictionary<TKey, TValue> _dictionary;

			[Token(Token = "0x4001897")]
			[FieldOffset(Offset = "0x0")]
			private int _index;

			[Token(Token = "0x4001898")]
			[FieldOffset(Offset = "0x0")]
			private int _version;

			[Token(Token = "0x4001899")]
			[FieldOffset(Offset = "0x0")]
			private TKey _currentKey;

			[Token(Token = "0x170007A0")]
			public TKey Current
			{
				[Token(Token = "0x6002ECA")]
				get
				{
					return (TKey)null;
				}
			}

			[Token(Token = "0x170007A1")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6002ECB")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6002EC7")]
			internal Enumerator(Dictionary<TKey, TValue> dictionary)
			{
			}

			[Token(Token = "0x6002EC8")]
			public void Dispose()
			{
			}

			[Token(Token = "0x6002EC9")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6002ECC")]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}
		}

		[Token(Token = "0x4001895")]
		[FieldOffset(Offset = "0x0")]
		private Dictionary<TKey, TValue> _dictionary;

		[Token(Token = "0x1700079C")]
		public int Count
		{
			[Token(Token = "0x6002EBC")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700079D")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EIsReadOnly
		{
			[Token(Token = "0x6002EBD")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700079E")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6002EC5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700079F")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6002EC6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002EB9")]
		public KeyCollection(Dictionary<TKey, TValue> dictionary)
		{
		}

		[Token(Token = "0x6002EBA")]
		public Enumerator GetEnumerator()
		{
			return default(Enumerator);
		}

		[Token(Token = "0x6002EBB")]
		public void CopyTo(TKey[] array, int index)
		{
		}

		[Token(Token = "0x6002EBE")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EAdd(TKey item)
		{
		}

		[Token(Token = "0x6002EBF")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EClear()
		{
		}

		[Token(Token = "0x6002EC0")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EContains(TKey item)
		{
			return default(bool);
		}

		[Token(Token = "0x6002EC1")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002ERemove(TKey item)
		{
			return default(bool);
		}

		[Token(Token = "0x6002EC2")]
		private IEnumerator<TKey> System_002ECollections_002EGeneric_002EIEnumerable_003CTKey_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002EC3")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002EC4")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20005F1")]
	[DebuggerDisplay("Count = {Count}")]
	[DebuggerTypeProxy(typeof(System.Collections.Generic.DictionaryValueCollectionDebugView<, >))]
	public sealed class ValueCollection : ICollection<TValue>, IEnumerable<TValue>, IEnumerable, ICollection, IReadOnlyCollection<TValue>
	{
		[Serializable]
		[Token(Token = "0x20005F2")]
		public struct Enumerator : IEnumerator<TValue>, IDisposable, IEnumerator
		{
			[Token(Token = "0x400189B")]
			[FieldOffset(Offset = "0x0")]
			private Dictionary<TKey, TValue> _dictionary;

			[Token(Token = "0x400189C")]
			[FieldOffset(Offset = "0x0")]
			private int _index;

			[Token(Token = "0x400189D")]
			[FieldOffset(Offset = "0x0")]
			private int _version;

			[Token(Token = "0x400189E")]
			[FieldOffset(Offset = "0x0")]
			private TValue _currentValue;

			[Token(Token = "0x170007A6")]
			public TValue Current
			{
				[Token(Token = "0x6002EDE")]
				get
				{
					return (TValue)null;
				}
			}

			[Token(Token = "0x170007A7")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6002EDF")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6002EDB")]
			internal Enumerator(Dictionary<TKey, TValue> dictionary)
			{
			}

			[Token(Token = "0x6002EDC")]
			public void Dispose()
			{
			}

			[Token(Token = "0x6002EDD")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6002EE0")]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}
		}

		[Token(Token = "0x400189A")]
		[FieldOffset(Offset = "0x0")]
		private Dictionary<TKey, TValue> _dictionary;

		[Token(Token = "0x170007A2")]
		public int Count
		{
			[Token(Token = "0x6002ED0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170007A3")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EIsReadOnly
		{
			[Token(Token = "0x6002ED1")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170007A4")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6002ED9")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170007A5")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6002EDA")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002ECD")]
		public ValueCollection(Dictionary<TKey, TValue> dictionary)
		{
		}

		[Token(Token = "0x6002ECE")]
		public Enumerator GetEnumerator()
		{
			return default(Enumerator);
		}

		[Token(Token = "0x6002ECF")]
		public void CopyTo(TValue[] array, int index)
		{
		}

		[Token(Token = "0x6002ED2")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EAdd(TValue item)
		{
		}

		[Token(Token = "0x6002ED3")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002ERemove(TValue item)
		{
			return default(bool);
		}

		[Token(Token = "0x6002ED4")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EClear()
		{
		}

		[Token(Token = "0x6002ED5")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EContains(TValue item)
		{
			return default(bool);
		}

		[Token(Token = "0x6002ED6")]
		private IEnumerator<TValue> System_002ECollections_002EGeneric_002EIEnumerable_003CTValue_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002ED7")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002ED8")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}
	}

	[Token(Token = "0x4001882")]
	[FieldOffset(Offset = "0x0")]
	private int[] _buckets;

	[Token(Token = "0x4001883")]
	[FieldOffset(Offset = "0x0")]
	private Entry[] _entries;

	[Token(Token = "0x4001884")]
	[FieldOffset(Offset = "0x0")]
	private int _count;

	[Token(Token = "0x4001885")]
	[FieldOffset(Offset = "0x0")]
	private int _freeList;

	[Token(Token = "0x4001886")]
	[FieldOffset(Offset = "0x0")]
	private int _freeCount;

	[Token(Token = "0x4001887")]
	[FieldOffset(Offset = "0x0")]
	private int _version;

	[Token(Token = "0x4001888")]
	[FieldOffset(Offset = "0x0")]
	private IEqualityComparer<TKey> _comparer;

	[Token(Token = "0x4001889")]
	[FieldOffset(Offset = "0x0")]
	private KeyCollection _keys;

	[Token(Token = "0x400188A")]
	[FieldOffset(Offset = "0x0")]
	private ValueCollection _values;

	[Token(Token = "0x400188B")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[Token(Token = "0x17000787")]
	public int Count
	{
		[Token(Token = "0x6002E80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000788")]
	public KeyCollection Keys
	{
		[Token(Token = "0x6002E81")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000789")]
	private ICollection<TKey> System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EKeys
	{
		[Token(Token = "0x6002E82")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700078A")]
	private IEnumerable<TKey> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EKeys
	{
		[Token(Token = "0x6002E83")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700078B")]
	public ValueCollection Values
	{
		[Token(Token = "0x6002E84")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700078C")]
	private ICollection<TValue> System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EValues
	{
		[Token(Token = "0x6002E85")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700078D")]
	private IEnumerable<TValue> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EValues
	{
		[Token(Token = "0x6002E86")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700078E")]
	public TValue this[TKey key]
	{
		[Token(Token = "0x6002E87")]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x6002E88")]
		set
		{
		}
	}

	[Token(Token = "0x1700078F")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x6002E9E")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000790")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002EA3")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000791")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002EA4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000792")]
	private bool System_002ECollections_002EIDictionary_002EIsFixedSize
	{
		[Token(Token = "0x6002EA5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000793")]
	private bool System_002ECollections_002EIDictionary_002EIsReadOnly
	{
		[Token(Token = "0x6002EA6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000794")]
	private ICollection System_002ECollections_002EIDictionary_002EKeys
	{
		[Token(Token = "0x6002EA7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000795")]
	private ICollection System_002ECollections_002EIDictionary_002EValues
	{
		[Token(Token = "0x6002EA8")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IDictionary.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000796")]
	[Token(Token = "0x6002EA9")]
	private object System_002ECollections_002EIDictionary_002Eget_Item(object key)
	{
		return null;
	}

	[Token(Token = "0x6002EAA")]
	private void System_002ECollections_002EIDictionary_002Eset_Item(object key, object value)
	{
	}

	[Token(Token = "0x6002E79")]
	public Dictionary()
	{
	}

	[Token(Token = "0x6002E7A")]
	public Dictionary(int capacity)
	{
	}

	[Token(Token = "0x6002E7B")]
	public Dictionary(IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6002E7C")]
	public Dictionary(int capacity, IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6002E7D")]
	public Dictionary(IDictionary<TKey, TValue> dictionary)
	{
	}

	[Token(Token = "0x6002E7E")]
	public Dictionary(IDictionary<TKey, TValue> dictionary, IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6002E7F")]
	protected Dictionary(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002E89")]
	public void Add(TKey key, TValue value)
	{
	}

	[Token(Token = "0x6002E8A")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EAdd(KeyValuePair<TKey, TValue> keyValuePair)
	{
	}

	[Token(Token = "0x6002E8B")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EContains(KeyValuePair<TKey, TValue> keyValuePair)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E8C")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ERemove(KeyValuePair<TKey, TValue> keyValuePair)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E8D")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002E8E")]
	public bool ContainsKey(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E8F")]
	public bool ContainsValue(TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E90")]
	private void CopyTo(KeyValuePair<TKey, TValue>[] array, int index)
	{
	}

	[Token(Token = "0x6002E91")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6002E92")]
	private IEnumerator<KeyValuePair<TKey, TValue>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002E93")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002E94")]
	private int FindEntry(TKey key)
	{
		return default(int);
	}

	[Token(Token = "0x6002E95")]
	private int Initialize(int capacity)
	{
		return default(int);
	}

	[Token(Token = "0x6002E96")]
	private bool TryInsert(TKey key, TValue value, System.Collections.Generic.InsertionBehavior behavior)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E97")]
	public virtual void OnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6002E98")]
	private void Resize()
	{
	}

	[Token(Token = "0x6002E99")]
	private void Resize(int newSize, bool forceNewHashCodes)
	{
	}

	[Token(Token = "0x6002E9A")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E9B")]
	public bool Remove(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E9C")]
	public bool TryGetValue(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E9D")]
	public bool TryAdd(TKey key, TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E9F")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ECopyTo(KeyValuePair<TKey, TValue>[] array, int index)
	{
	}

	[Token(Token = "0x6002EA0")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002EA1")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002EA2")]
	public int EnsureCapacity(int capacity)
	{
		return default(int);
	}

	[Token(Token = "0x6002EAB")]
	private static bool IsCompatibleKey(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002EAC")]
	private void System_002ECollections_002EIDictionary_002EAdd(object key, object value)
	{
	}

	[Token(Token = "0x6002EAD")]
	private bool System_002ECollections_002EIDictionary_002EContains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002EAE")]
	private IDictionaryEnumerator System_002ECollections_002EIDictionary_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002EAF")]
	private void System_002ECollections_002EIDictionary_002ERemove(object key)
	{
	}
}
