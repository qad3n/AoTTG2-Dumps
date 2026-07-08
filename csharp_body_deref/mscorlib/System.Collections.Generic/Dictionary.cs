using System.Diagnostics;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x200063D")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.IDictionaryDebugView<, >))]
[DebuggerDisplay("Count = {Count}")]
public class Dictionary<TKey, TValue> : IDictionary<TKey, TValue>, ICollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable, IDictionary, ICollection, IReadOnlyDictionary<TKey, TValue>, IReadOnlyCollection<KeyValuePair<TKey, TValue>>, ISerializable, IDeserializationCallback
{
	[Token(Token = "0x200063E")]
	private struct Entry
	{
		[Token(Token = "0x4001B1E")]
		[FieldOffset(Offset = "0x0")]
		public int hashCode;

		[Token(Token = "0x4001B1F")]
		[FieldOffset(Offset = "0x0")]
		public int next;

		[Token(Token = "0x4001B20")]
		[FieldOffset(Offset = "0x0")]
		public TKey key;

		[Token(Token = "0x4001B21")]
		[FieldOffset(Offset = "0x0")]
		public TValue value;
	}

	[Serializable]
	[Token(Token = "0x200063F")]
	public struct Enumerator : IEnumerator<KeyValuePair<TKey, TValue>>, IDisposable, IEnumerator, IDictionaryEnumerator
	{
		[Token(Token = "0x4001B22")]
		[FieldOffset(Offset = "0x0")]
		private Dictionary<TKey, TValue> _dictionary;

		[Token(Token = "0x4001B23")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x4001B24")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x4001B25")]
		[FieldOffset(Offset = "0x0")]
		private KeyValuePair<TKey, TValue> _current;

		[Token(Token = "0x4001B26")]
		[FieldOffset(Offset = "0x0")]
		private int _getEnumeratorRetType;

		[Token(Token = "0x17000809")]
		public KeyValuePair<TKey, TValue> Current
		{
			[Token(Token = "0x60031C2")]
			get
			{
				return default(KeyValuePair<TKey, TValue>);
			}
		}

		[Token(Token = "0x1700080A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60031C4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700080B")]
		private DictionaryEntry System_002ECollections_002EIDictionaryEnumerator_002EEntry
		{
			[Token(Token = "0x60031C6")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x1700080C")]
		private object System_002ECollections_002EIDictionaryEnumerator_002EKey
		{
			[Token(Token = "0x60031C7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700080D")]
		private object System_002ECollections_002EIDictionaryEnumerator_002EValue
		{
			[Token(Token = "0x60031C8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60031C0")]
		internal Enumerator(Dictionary<TKey, TValue> dictionary, int getEnumeratorRetType)
		{
		}

		[Token(Token = "0x60031C1")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60031C3")]
		public void Dispose()
		{
		}

		[Token(Token = "0x60031C5")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000640")]
	[DebuggerTypeProxy(typeof(System.Collections.Generic.DictionaryKeyCollectionDebugView<, >))]
	[DebuggerDisplay("Count = {Count}")]
	public sealed class KeyCollection : ICollection<TKey>, IEnumerable<TKey>, IEnumerable, ICollection, IReadOnlyCollection<TKey>
	{
		[Serializable]
		[Token(Token = "0x2000641")]
		public struct Enumerator : IEnumerator<TKey>, IDisposable, IEnumerator
		{
			[Token(Token = "0x4001B28")]
			[FieldOffset(Offset = "0x0")]
			private Dictionary<TKey, TValue> _dictionary;

			[Token(Token = "0x4001B29")]
			[FieldOffset(Offset = "0x0")]
			private int _index;

			[Token(Token = "0x4001B2A")]
			[FieldOffset(Offset = "0x0")]
			private int _version;

			[Token(Token = "0x4001B2B")]
			[FieldOffset(Offset = "0x0")]
			private TKey _currentKey;

			[Token(Token = "0x17000812")]
			public TKey Current
			{
				[Token(Token = "0x60031DA")]
				get
				{
					return (TKey)null;
				}
			}

			[Token(Token = "0x17000813")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x60031DB")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60031D7")]
			internal Enumerator(Dictionary<TKey, TValue> dictionary)
			{
			}

			[Token(Token = "0x60031D8")]
			public void Dispose()
			{
			}

			[Token(Token = "0x60031D9")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x60031DC")]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}
		}

		[Token(Token = "0x4001B27")]
		[FieldOffset(Offset = "0x0")]
		private Dictionary<TKey, TValue> _dictionary;

		[Token(Token = "0x1700080E")]
		public int Count
		{
			[Token(Token = "0x60031CC")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700080F")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EIsReadOnly
		{
			[Token(Token = "0x60031CD")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000810")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x60031D5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000811")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x60031D6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60031C9")]
		public KeyCollection(Dictionary<TKey, TValue> dictionary)
		{
		}

		[Token(Token = "0x60031CA")]
		public Enumerator GetEnumerator()
		{
			return default(Enumerator);
		}

		[Token(Token = "0x60031CB")]
		public void CopyTo(TKey[] array, int index)
		{
		}

		[Token(Token = "0x60031CE")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EAdd(TKey item)
		{
		}

		[Token(Token = "0x60031CF")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EClear()
		{
		}

		[Token(Token = "0x60031D0")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EContains(TKey item)
		{
			return default(bool);
		}

		[Token(Token = "0x60031D1")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002ERemove(TKey item)
		{
			return default(bool);
		}

		[Token(Token = "0x60031D2")]
		private IEnumerator<TKey> System_002ECollections_002EGeneric_002EIEnumerable_003CTKey_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60031D3")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60031D4")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000642")]
	[DebuggerDisplay("Count = {Count}")]
	[DebuggerTypeProxy(typeof(System.Collections.Generic.DictionaryValueCollectionDebugView<, >))]
	public sealed class ValueCollection : ICollection<TValue>, IEnumerable<TValue>, IEnumerable, ICollection, IReadOnlyCollection<TValue>
	{
		[Serializable]
		[Token(Token = "0x2000643")]
		public struct Enumerator : IEnumerator<TValue>, IDisposable, IEnumerator
		{
			[Token(Token = "0x4001B2D")]
			[FieldOffset(Offset = "0x0")]
			private Dictionary<TKey, TValue> _dictionary;

			[Token(Token = "0x4001B2E")]
			[FieldOffset(Offset = "0x0")]
			private int _index;

			[Token(Token = "0x4001B2F")]
			[FieldOffset(Offset = "0x0")]
			private int _version;

			[Token(Token = "0x4001B30")]
			[FieldOffset(Offset = "0x0")]
			private TValue _currentValue;

			[Token(Token = "0x17000818")]
			public TValue Current
			{
				[Token(Token = "0x60031EE")]
				get
				{
					return (TValue)null;
				}
			}

			[Token(Token = "0x17000819")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x60031EF")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60031EB")]
			internal Enumerator(Dictionary<TKey, TValue> dictionary)
			{
			}

			[Token(Token = "0x60031EC")]
			public void Dispose()
			{
			}

			[Token(Token = "0x60031ED")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x60031F0")]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}
		}

		[Token(Token = "0x4001B2C")]
		[FieldOffset(Offset = "0x0")]
		private Dictionary<TKey, TValue> _dictionary;

		[Token(Token = "0x17000814")]
		public int Count
		{
			[Token(Token = "0x60031E0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000815")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EIsReadOnly
		{
			[Token(Token = "0x60031E1")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000816")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x60031E9")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000817")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x60031EA")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60031DD")]
		public ValueCollection(Dictionary<TKey, TValue> dictionary)
		{
		}

		[Token(Token = "0x60031DE")]
		public Enumerator GetEnumerator()
		{
			return default(Enumerator);
		}

		[Token(Token = "0x60031DF")]
		public void CopyTo(TValue[] array, int index)
		{
		}

		[Token(Token = "0x60031E2")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EAdd(TValue item)
		{
		}

		[Token(Token = "0x60031E3")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002ERemove(TValue item)
		{
			return default(bool);
		}

		[Token(Token = "0x60031E4")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EClear()
		{
		}

		[Token(Token = "0x60031E5")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EContains(TValue item)
		{
			return default(bool);
		}

		[Token(Token = "0x60031E6")]
		private IEnumerator<TValue> System_002ECollections_002EGeneric_002EIEnumerable_003CTValue_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60031E7")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60031E8")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}
	}

	[Token(Token = "0x4001B10")]
	[FieldOffset(Offset = "0x0")]
	private int[] _buckets;

	[Token(Token = "0x4001B11")]
	[FieldOffset(Offset = "0x0")]
	private Entry[] _entries;

	[Token(Token = "0x4001B12")]
	[FieldOffset(Offset = "0x0")]
	private int _count;

	[Token(Token = "0x4001B13")]
	[FieldOffset(Offset = "0x0")]
	private int _freeList;

	[Token(Token = "0x4001B14")]
	[FieldOffset(Offset = "0x0")]
	private int _freeCount;

	[Token(Token = "0x4001B15")]
	[FieldOffset(Offset = "0x0")]
	private int _version;

	[Token(Token = "0x4001B16")]
	[FieldOffset(Offset = "0x0")]
	private IEqualityComparer<TKey> _comparer;

	[Token(Token = "0x4001B17")]
	[FieldOffset(Offset = "0x0")]
	private KeyCollection _keys;

	[Token(Token = "0x4001B18")]
	[FieldOffset(Offset = "0x0")]
	private ValueCollection _values;

	[Token(Token = "0x4001B19")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[Token(Token = "0x4001B1A")]
	private const string VersionName = "Version";

	[Token(Token = "0x4001B1B")]
	private const string HashSizeName = "HashSize";

	[Token(Token = "0x4001B1C")]
	private const string KeyValuePairsName = "KeyValuePairs";

	[Token(Token = "0x4001B1D")]
	private const string ComparerName = "Comparer";

	[Token(Token = "0x170007F9")]
	public int Count
	{
		[Token(Token = "0x6003192")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170007FA")]
	public KeyCollection Keys
	{
		[Token(Token = "0x6003193")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007FB")]
	private ICollection<TKey> System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EKeys
	{
		[Token(Token = "0x6003194")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007FC")]
	private IEnumerable<TKey> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EKeys
	{
		[Token(Token = "0x6003195")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007FD")]
	public ValueCollection Values
	{
		[Token(Token = "0x6003196")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007FE")]
	private ICollection<TValue> System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EValues
	{
		[Token(Token = "0x6003197")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007FF")]
	private IEnumerable<TValue> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EValues
	{
		[Token(Token = "0x6003198")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000800")]
	public TValue this[TKey key]
	{
		[Token(Token = "0x6003199")]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x600319A")]
		set
		{
		}
	}

	[Token(Token = "0x17000801")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x60031AF")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000802")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x60031B3")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000803")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x60031B4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000804")]
	private bool System_002ECollections_002EIDictionary_002EIsFixedSize
	{
		[Token(Token = "0x60031B5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000805")]
	private bool System_002ECollections_002EIDictionary_002EIsReadOnly
	{
		[Token(Token = "0x60031B6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000806")]
	private ICollection System_002ECollections_002EIDictionary_002EKeys
	{
		[Token(Token = "0x60031B7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000807")]
	private ICollection System_002ECollections_002EIDictionary_002EValues
	{
		[Token(Token = "0x60031B8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000808")]
	private object System_002ECollections_002EIDictionary_002EItem
	{
		[Token(Token = "0x60031B9")]
		get
		{
			return null;
		}
		[Token(Token = "0x60031BA")]
		set
		{
		}
	}

	[Token(Token = "0x600318B")]
	public Dictionary()
	{
	}

	[Token(Token = "0x600318C")]
	public Dictionary(int capacity)
	{
	}

	[Token(Token = "0x600318D")]
	public Dictionary(IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x600318E")]
	public Dictionary(int capacity, IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x600318F")]
	public Dictionary(IDictionary<TKey, TValue> dictionary)
	{
	}

	[Token(Token = "0x6003190")]
	public Dictionary(IDictionary<TKey, TValue> dictionary, IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6003191")]
	protected Dictionary(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600319B")]
	public void Add(TKey key, TValue value)
	{
	}

	[Token(Token = "0x600319C")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EAdd(KeyValuePair<TKey, TValue> keyValuePair)
	{
	}

	[Token(Token = "0x600319D")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EContains(KeyValuePair<TKey, TValue> keyValuePair)
	{
		return default(bool);
	}

	[Token(Token = "0x600319E")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ERemove(KeyValuePair<TKey, TValue> keyValuePair)
	{
		return default(bool);
	}

	[Token(Token = "0x600319F")]
	public void Clear()
	{
	}

	[Token(Token = "0x60031A0")]
	public bool ContainsKey(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x60031A1")]
	public bool ContainsValue(TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x60031A2")]
	private void CopyTo(KeyValuePair<TKey, TValue>[] array, int index)
	{
	}

	[Token(Token = "0x60031A3")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x60031A4")]
	private IEnumerator<KeyValuePair<TKey, TValue>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60031A5")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60031A6")]
	private int FindEntry(TKey key)
	{
		return default(int);
	}

	[Token(Token = "0x60031A7")]
	private int Initialize(int capacity)
	{
		return default(int);
	}

	[Token(Token = "0x60031A8")]
	private bool TryInsert(TKey key, TValue value, System.Collections.Generic.InsertionBehavior behavior)
	{
		return default(bool);
	}

	[Token(Token = "0x60031A9")]
	public virtual void OnDeserialization(object sender)
	{
	}

	[Token(Token = "0x60031AA")]
	private void Resize()
	{
	}

	[Token(Token = "0x60031AB")]
	private void Resize(int newSize, bool forceNewHashCodes)
	{
	}

	[Token(Token = "0x60031AC")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x60031AD")]
	public bool TryGetValue(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x60031AE")]
	public bool TryAdd(TKey key, TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x60031B0")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ECopyTo(KeyValuePair<TKey, TValue>[] array, int index)
	{
	}

	[Token(Token = "0x60031B1")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60031B2")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60031BB")]
	private static bool IsCompatibleKey(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x60031BC")]
	private void System_002ECollections_002EIDictionary_002EAdd(object key, object value)
	{
	}

	[Token(Token = "0x60031BD")]
	private bool System_002ECollections_002EIDictionary_002EContains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x60031BE")]
	private IDictionaryEnumerator System_002ECollections_002EIDictionary_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60031BF")]
	private void System_002ECollections_002EIDictionary_002ERemove(object key)
	{
	}
}
