// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.Dictionary
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000611")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.IDictionaryDebugView<, >))]
public class Dictionary<TKey, TValue> : IDictionary<TKey, TValue>, ICollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable, IDictionary, ICollection, IReadOnlyDictionary<TKey, TValue>, IReadOnlyCollection<KeyValuePair<TKey, TValue>>, ISerializable, IDeserializationCallback
{
	[Token(Token = "0x2000612")]
	private struct Entry
	{
		[Token(Token = "0x4001925")]
		[FieldOffset(Offset = "0x0")]
		public int hashCode;

		[Token(Token = "0x4001926")]
		[FieldOffset(Offset = "0x0")]
		public int next;

		[Token(Token = "0x4001927")]
		[FieldOffset(Offset = "0x0")]
		public TKey key;

		[Token(Token = "0x4001928")]
		[FieldOffset(Offset = "0x0")]
		public TValue value;
	}

	[Serializable]
	[Token(Token = "0x2000613")]
	public struct Enumerator : IEnumerator<KeyValuePair<TKey, TValue>>, IDisposable, IEnumerator, IDictionaryEnumerator
	{
		[Token(Token = "0x4001929")]
		[FieldOffset(Offset = "0x0")]
		private Dictionary<TKey, TValue> _dictionary;

		[Token(Token = "0x400192A")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x400192B")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x400192C")]
		[FieldOffset(Offset = "0x0")]
		private KeyValuePair<TKey, TValue> _current;

		[Token(Token = "0x400192D")]
		[FieldOffset(Offset = "0x0")]
		private int _getEnumeratorRetType;

		[Token(Token = "0x17000798")]
		public KeyValuePair<TKey, TValue> Current
		{
			[Token(Token = "0x6002ED7")]
			get
			{
				return default(KeyValuePair<TKey, TValue>);
			}
		}

		[Token(Token = "0x17000799")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002ED9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700079A")]
		private DictionaryEntry System_002ECollections_002EIDictionaryEnumerator_002EEntry
		{
			[Token(Token = "0x6002EDB")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x1700079B")]
		private object System_002ECollections_002EIDictionaryEnumerator_002EKey
		{
			[Token(Token = "0x6002EDC")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700079C")]
		private object System_002ECollections_002EIDictionaryEnumerator_002EValue
		{
			[Token(Token = "0x6002EDD")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002ED5")]
		internal Enumerator(Dictionary<TKey, TValue> dictionary, int getEnumeratorRetType)
		{
		}

		[Token(Token = "0x6002ED6")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002ED8")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6002EDA")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000614")]
	[DebuggerDisplay("Count = {Count}")]
	[DebuggerTypeProxy(typeof(System.Collections.Generic.DictionaryKeyCollectionDebugView<, >))]
	public sealed class KeyCollection : ICollection<TKey>, IEnumerable<TKey>, IEnumerable, ICollection, IReadOnlyCollection<TKey>
	{
		[Serializable]
		[Token(Token = "0x2000615")]
		public struct Enumerator : IEnumerator<TKey>, IDisposable, IEnumerator
		{
			[Token(Token = "0x400192F")]
			[FieldOffset(Offset = "0x0")]
			private Dictionary<TKey, TValue> _dictionary;

			[Token(Token = "0x4001930")]
			[FieldOffset(Offset = "0x0")]
			private int _index;

			[Token(Token = "0x4001931")]
			[FieldOffset(Offset = "0x0")]
			private int _version;

			[Token(Token = "0x4001932")]
			[FieldOffset(Offset = "0x0")]
			private TKey _currentKey;

			[Token(Token = "0x170007A1")]
			public TKey Current
			{
				[Token(Token = "0x6002EEF")]
				get
				{
					return (TKey)null;
				}
			}

			[Token(Token = "0x170007A2")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6002EF0")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6002EEC")]
			internal Enumerator(Dictionary<TKey, TValue> dictionary)
			{
			}

			[Token(Token = "0x6002EED")]
			public void Dispose()
			{
			}

			[Token(Token = "0x6002EEE")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6002EF1")]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}
		}

		[Token(Token = "0x400192E")]
		[FieldOffset(Offset = "0x0")]
		private Dictionary<TKey, TValue> _dictionary;

		[Token(Token = "0x1700079D")]
		public int Count
		{
			[Token(Token = "0x6002EE1")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700079E")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EIsReadOnly
		{
			[Token(Token = "0x6002EE2")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700079F")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6002EEA")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170007A0")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6002EEB")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002EDE")]
		public KeyCollection(Dictionary<TKey, TValue> dictionary)
		{
		}

		[Token(Token = "0x6002EDF")]
		public Enumerator GetEnumerator()
		{
			return default(Enumerator);
		}

		[Token(Token = "0x6002EE0")]
		public void CopyTo(TKey[] array, int index)
		{
		}

		[Token(Token = "0x6002EE3")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EAdd(TKey item)
		{
		}

		[Token(Token = "0x6002EE4")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EClear()
		{
		}

		[Token(Token = "0x6002EE5")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EContains(TKey item)
		{
			return default(bool);
		}

		[Token(Token = "0x6002EE6")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002ERemove(TKey item)
		{
			return default(bool);
		}

		[Token(Token = "0x6002EE7")]
		private IEnumerator<TKey> System_002ECollections_002EGeneric_002EIEnumerable_003CTKey_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002EE8")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002EE9")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000616")]
	[DebuggerTypeProxy(typeof(System.Collections.Generic.DictionaryValueCollectionDebugView<, >))]
	[DebuggerDisplay("Count = {Count}")]
	public sealed class ValueCollection : ICollection<TValue>, IEnumerable<TValue>, IEnumerable, ICollection, IReadOnlyCollection<TValue>
	{
		[Serializable]
		[Token(Token = "0x2000617")]
		public struct Enumerator : IEnumerator<TValue>, IDisposable, IEnumerator
		{
			[Token(Token = "0x4001934")]
			[FieldOffset(Offset = "0x0")]
			private Dictionary<TKey, TValue> _dictionary;

			[Token(Token = "0x4001935")]
			[FieldOffset(Offset = "0x0")]
			private int _index;

			[Token(Token = "0x4001936")]
			[FieldOffset(Offset = "0x0")]
			private int _version;

			[Token(Token = "0x4001937")]
			[FieldOffset(Offset = "0x0")]
			private TValue _currentValue;

			[Token(Token = "0x170007A7")]
			public TValue Current
			{
				[Token(Token = "0x6002F03")]
				get
				{
					return (TValue)null;
				}
			}

			[Token(Token = "0x170007A8")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6002F04")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6002F00")]
			internal Enumerator(Dictionary<TKey, TValue> dictionary)
			{
			}

			[Token(Token = "0x6002F01")]
			public void Dispose()
			{
			}

			[Token(Token = "0x6002F02")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6002F05")]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}
		}

		[Token(Token = "0x4001933")]
		[FieldOffset(Offset = "0x0")]
		private Dictionary<TKey, TValue> _dictionary;

		[Token(Token = "0x170007A3")]
		public int Count
		{
			[Token(Token = "0x6002EF5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170007A4")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EIsReadOnly
		{
			[Token(Token = "0x6002EF6")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170007A5")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6002EFE")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170007A6")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6002EFF")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002EF2")]
		public ValueCollection(Dictionary<TKey, TValue> dictionary)
		{
		}

		[Token(Token = "0x6002EF3")]
		public Enumerator GetEnumerator()
		{
			return default(Enumerator);
		}

		[Token(Token = "0x6002EF4")]
		public void CopyTo(TValue[] array, int index)
		{
		}

		[Token(Token = "0x6002EF7")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EAdd(TValue item)
		{
		}

		[Token(Token = "0x6002EF8")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002ERemove(TValue item)
		{
			return default(bool);
		}

		[Token(Token = "0x6002EF9")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EClear()
		{
		}

		[Token(Token = "0x6002EFA")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EContains(TValue item)
		{
			return default(bool);
		}

		[Token(Token = "0x6002EFB")]
		private IEnumerator<TValue> System_002ECollections_002EGeneric_002EIEnumerable_003CTValue_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002EFC")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002EFD")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}
	}

	[Token(Token = "0x400191B")]
	[FieldOffset(Offset = "0x0")]
	private int[] _buckets;

	[Token(Token = "0x400191C")]
	[FieldOffset(Offset = "0x0")]
	private Entry[] _entries;

	[Token(Token = "0x400191D")]
	[FieldOffset(Offset = "0x0")]
	private int _count;

	[Token(Token = "0x400191E")]
	[FieldOffset(Offset = "0x0")]
	private int _freeList;

	[Token(Token = "0x400191F")]
	[FieldOffset(Offset = "0x0")]
	private int _freeCount;

	[Token(Token = "0x4001920")]
	[FieldOffset(Offset = "0x0")]
	private int _version;

	[Token(Token = "0x4001921")]
	[FieldOffset(Offset = "0x0")]
	private IEqualityComparer<TKey> _comparer;

	[Token(Token = "0x4001922")]
	[FieldOffset(Offset = "0x0")]
	private KeyCollection _keys;

	[Token(Token = "0x4001923")]
	[FieldOffset(Offset = "0x0")]
	private ValueCollection _values;

	[Token(Token = "0x4001924")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[Token(Token = "0x17000788")]
	public int Count
	{
		[Token(Token = "0x6002EA5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000789")]
	public KeyCollection Keys
	{
		[Token(Token = "0x6002EA6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700078A")]
	private ICollection<TKey> System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EKeys
	{
		[Token(Token = "0x6002EA7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700078B")]
	private IEnumerable<TKey> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EKeys
	{
		[Token(Token = "0x6002EA8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700078C")]
	public ValueCollection Values
	{
		[Token(Token = "0x6002EA9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700078D")]
	private ICollection<TValue> System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EValues
	{
		[Token(Token = "0x6002EAA")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700078E")]
	private IEnumerable<TValue> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EValues
	{
		[Token(Token = "0x6002EAB")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700078F")]
	public TValue this[TKey key]
	{
		[Token(Token = "0x6002EAC")]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x6002EAD")]
		set
		{
		}
	}

	[Token(Token = "0x17000790")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x6002EC3")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000791")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002EC8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000792")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002EC9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000793")]
	private bool System_002ECollections_002EIDictionary_002EIsFixedSize
	{
		[Token(Token = "0x6002ECA")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000794")]
	private bool System_002ECollections_002EIDictionary_002EIsReadOnly
	{
		[Token(Token = "0x6002ECB")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000795")]
	private ICollection System_002ECollections_002EIDictionary_002EKeys
	{
		[Token(Token = "0x6002ECC")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000796")]
	private ICollection System_002ECollections_002EIDictionary_002EValues
	{
		[Token(Token = "0x6002ECD")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IDictionary.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000797")]
	[Token(Token = "0x6002ECE")]
	private object System_002ECollections_002EIDictionary_002Eget_Item(object key)
	{
		return null;
	}

	[Token(Token = "0x6002ECF")]
	private void System_002ECollections_002EIDictionary_002Eset_Item(object key, object value)
	{
	}

	[Token(Token = "0x6002E9E")]
	public Dictionary()
	{
	}

	[Token(Token = "0x6002E9F")]
	public Dictionary(int capacity)
	{
	}

	[Token(Token = "0x6002EA0")]
	public Dictionary(IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6002EA1")]
	public Dictionary(int capacity, IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6002EA2")]
	public Dictionary(IDictionary<TKey, TValue> dictionary)
	{
	}

	[Token(Token = "0x6002EA3")]
	public Dictionary(IDictionary<TKey, TValue> dictionary, IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6002EA4")]
	protected Dictionary(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002EAE")]
	public void Add(TKey key, TValue value)
	{
	}

	[Token(Token = "0x6002EAF")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EAdd(KeyValuePair<TKey, TValue> keyValuePair)
	{
	}

	[Token(Token = "0x6002EB0")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EContains(KeyValuePair<TKey, TValue> keyValuePair)
	{
		return default(bool);
	}

	[Token(Token = "0x6002EB1")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ERemove(KeyValuePair<TKey, TValue> keyValuePair)
	{
		return default(bool);
	}

	[Token(Token = "0x6002EB2")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002EB3")]
	public bool ContainsKey(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002EB4")]
	public bool ContainsValue(TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002EB5")]
	private void CopyTo(KeyValuePair<TKey, TValue>[] array, int index)
	{
	}

	[Token(Token = "0x6002EB6")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6002EB7")]
	private IEnumerator<KeyValuePair<TKey, TValue>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002EB8")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002EB9")]
	private int FindEntry(TKey key)
	{
		return default(int);
	}

	[Token(Token = "0x6002EBA")]
	private int Initialize(int capacity)
	{
		return default(int);
	}

	[Token(Token = "0x6002EBB")]
	private bool TryInsert(TKey key, TValue value, System.Collections.Generic.InsertionBehavior behavior)
	{
		return default(bool);
	}

	[Token(Token = "0x6002EBC")]
	public virtual void OnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6002EBD")]
	private void Resize()
	{
	}

	[Token(Token = "0x6002EBE")]
	private void Resize(int newSize, bool forceNewHashCodes)
	{
	}

	[Token(Token = "0x6002EBF")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002EC0")]
	public bool Remove(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002EC1")]
	public bool TryGetValue(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002EC2")]
	public bool TryAdd(TKey key, TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002EC4")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ECopyTo(KeyValuePair<TKey, TValue>[] array, int index)
	{
	}

	[Token(Token = "0x6002EC5")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002EC6")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002EC7")]
	public int EnsureCapacity(int capacity)
	{
		return default(int);
	}

	[Token(Token = "0x6002ED0")]
	private static bool IsCompatibleKey(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002ED1")]
	private void System_002ECollections_002EIDictionary_002EAdd(object key, object value)
	{
	}

	[Token(Token = "0x6002ED2")]
	private bool System_002ECollections_002EIDictionary_002EContains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002ED3")]
	private IDictionaryEnumerator System_002ECollections_002EIDictionary_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002ED4")]
	private void System_002ECollections_002EIDictionary_002ERemove(object key)
	{
	}
}
