// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.SortedList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x200022A")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.IDictionaryDebugView<, >))]
public class SortedList<TKey, TValue> : IDictionary<TKey, TValue>, ICollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable, IDictionary, ICollection, IReadOnlyDictionary<TKey, TValue>, IReadOnlyCollection<KeyValuePair<TKey, TValue>>
{
	[Serializable]
	[Token(Token = "0x200022B")]
	private struct Enumerator : IEnumerator<KeyValuePair<TKey, TValue>>, IDisposable, IEnumerator, IDictionaryEnumerator
	{
		[Token(Token = "0x40007B3")]
		[FieldOffset(Offset = "0x0")]
		private SortedList<TKey, TValue> _sortedList;

		[Token(Token = "0x40007B4")]
		[FieldOffset(Offset = "0x0")]
		private TKey _key;

		[Token(Token = "0x40007B5")]
		[FieldOffset(Offset = "0x0")]
		private TValue _value;

		[Token(Token = "0x40007B6")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x40007B7")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x40007B8")]
		[FieldOffset(Offset = "0x0")]
		private int _getEnumeratorRetType;

		[Token(Token = "0x1700034D")]
		private object System_002ECollections_002EIDictionaryEnumerator_002EKey
		{
			[Token(Token = "0x6000F47")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700034E")]
		private DictionaryEntry System_002ECollections_002EIDictionaryEnumerator_002EEntry
		{
			[Token(Token = "0x6000F49")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x1700034F")]
		public KeyValuePair<TKey, TValue> Current
		{
			[Token(Token = "0x6000F4A")]
			get
			{
				return default(KeyValuePair<TKey, TValue>);
			}
		}

		[Token(Token = "0x17000350")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000F4B")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000351")]
		private object System_002ECollections_002EIDictionaryEnumerator_002EValue
		{
			[Token(Token = "0x6000F4C")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000F45")]
		internal Enumerator(SortedList<TKey, TValue> sortedList, int getEnumeratorRetType)
		{
		}

		[Token(Token = "0x6000F46")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000F48")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000F4D")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200022C")]
	private sealed class SortedListKeyEnumerator : IEnumerator<TKey>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40007B9")]
		[FieldOffset(Offset = "0x0")]
		private SortedList<TKey, TValue> _sortedList;

		[Token(Token = "0x40007BA")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x40007BB")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x40007BC")]
		[FieldOffset(Offset = "0x0")]
		private TKey _currentKey;

		[Token(Token = "0x17000352")]
		public TKey Current
		{
			[Token(Token = "0x6000F51")]
			get
			{
				return (TKey)null;
			}
		}

		[Token(Token = "0x17000353")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000F52")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000F4E")]
		internal SortedListKeyEnumerator(SortedList<TKey, TValue> sortedList)
		{
		}

		[Token(Token = "0x6000F4F")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000F50")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000F53")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200022D")]
	private sealed class SortedListValueEnumerator : IEnumerator<TValue>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40007BD")]
		[FieldOffset(Offset = "0x0")]
		private SortedList<TKey, TValue> _sortedList;

		[Token(Token = "0x40007BE")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x40007BF")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x40007C0")]
		[FieldOffset(Offset = "0x0")]
		private TValue _currentValue;

		[Token(Token = "0x17000354")]
		public TValue Current
		{
			[Token(Token = "0x6000F57")]
			get
			{
				return (TValue)null;
			}
		}

		[Token(Token = "0x17000355")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000F58")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000F54")]
		internal SortedListValueEnumerator(SortedList<TKey, TValue> sortedList)
		{
		}

		[Token(Token = "0x6000F55")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000F56")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000F59")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200022E")]
	[DebuggerDisplay("Count = {Count}")]
	[DebuggerTypeProxy(typeof(System.Collections.Generic.DictionaryKeyCollectionDebugView<, >))]
	private sealed class KeyList : IList<TKey>, ICollection<TKey>, IEnumerable<TKey>, IEnumerable, ICollection
	{
		[Token(Token = "0x40007C1")]
		[FieldOffset(Offset = "0x0")]
		private SortedList<TKey, TValue> _dict;

		[Token(Token = "0x17000356")]
		public int Count
		{
			[Token(Token = "0x6000F5B")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000357")]
		public bool IsReadOnly
		{
			[Token(Token = "0x6000F5C")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000358")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6000F5D")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000359")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6000F5E")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700035A")]
		public TKey this[int index]
		{
			[Token(Token = "0x6000F65")]
			get
			{
				return (TKey)null;
			}
			[Token(Token = "0x6000F66")]
			set
			{
			}
		}

		[Token(Token = "0x6000F5A")]
		internal KeyList(SortedList<TKey, TValue> dictionary)
		{
		}

		[Token(Token = "0x6000F5F")]
		public void Add(TKey key)
		{
		}

		[Token(Token = "0x6000F60")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000F61")]
		public bool Contains(TKey key)
		{
			return default(bool);
		}

		[Token(Token = "0x6000F62")]
		public void CopyTo(TKey[] array, int arrayIndex)
		{
		}

		[Token(Token = "0x6000F63")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x6000F64")]
		public void Insert(int index, TKey value)
		{
		}

		[Token(Token = "0x6000F67")]
		public IEnumerator<TKey> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000F68")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000F69")]
		public int IndexOf(TKey key)
		{
			return default(int);
		}

		[Token(Token = "0x6000F6A")]
		public bool Remove(TKey key)
		{
			return default(bool);
		}

		[Token(Token = "0x6000F6B")]
		public void RemoveAt(int index)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200022F")]
	[DebuggerDisplay("Count = {Count}")]
	[DebuggerTypeProxy(typeof(System.Collections.Generic.DictionaryValueCollectionDebugView<, >))]
	private sealed class ValueList : IList<TValue>, ICollection<TValue>, IEnumerable<TValue>, IEnumerable, ICollection
	{
		[Token(Token = "0x40007C2")]
		[FieldOffset(Offset = "0x0")]
		private SortedList<TKey, TValue> _dict;

		[Token(Token = "0x1700035B")]
		public int Count
		{
			[Token(Token = "0x6000F6D")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700035C")]
		public bool IsReadOnly
		{
			[Token(Token = "0x6000F6E")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700035D")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6000F6F")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700035E")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6000F70")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700035F")]
		public TValue this[int index]
		{
			[Token(Token = "0x6000F77")]
			get
			{
				return (TValue)null;
			}
			[Token(Token = "0x6000F78")]
			set
			{
			}
		}

		[Token(Token = "0x6000F6C")]
		internal ValueList(SortedList<TKey, TValue> dictionary)
		{
		}

		[Token(Token = "0x6000F71")]
		public void Add(TValue key)
		{
		}

		[Token(Token = "0x6000F72")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000F73")]
		public bool Contains(TValue value)
		{
			return default(bool);
		}

		[Token(Token = "0x6000F74")]
		public void CopyTo(TValue[] array, int arrayIndex)
		{
		}

		[Token(Token = "0x6000F75")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6000F76")]
		public void Insert(int index, TValue value)
		{
		}

		[Token(Token = "0x6000F79")]
		public IEnumerator<TValue> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000F7A")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000F7B")]
		public int IndexOf(TValue value)
		{
			return default(int);
		}

		[Token(Token = "0x6000F7C")]
		public bool Remove(TValue value)
		{
			return default(bool);
		}

		[Token(Token = "0x6000F7D")]
		public void RemoveAt(int index)
		{
		}
	}

	[Token(Token = "0x40007AB")]
	[FieldOffset(Offset = "0x0")]
	private TKey[] keys;

	[Token(Token = "0x40007AC")]
	[FieldOffset(Offset = "0x0")]
	private TValue[] values;

	[Token(Token = "0x40007AD")]
	[FieldOffset(Offset = "0x0")]
	private int _size;

	[Token(Token = "0x40007AE")]
	[FieldOffset(Offset = "0x0")]
	private int version;

	[Token(Token = "0x40007AF")]
	[FieldOffset(Offset = "0x0")]
	private IComparer<TKey> comparer;

	[Token(Token = "0x40007B0")]
	[FieldOffset(Offset = "0x0")]
	private KeyList keyList;

	[Token(Token = "0x40007B1")]
	[FieldOffset(Offset = "0x0")]
	private ValueList valueList;

	[NonSerialized]
	[Token(Token = "0x40007B2")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[Token(Token = "0x1700033B")]
	public int Capacity
	{
		[Token(Token = "0x6000F19")]
		set
		{
		}
	}

	[Token(Token = "0x1700033C")]
	public IComparer<TKey> Comparer
	{
		[Token(Token = "0x6000F1A")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700033D")]
	public int Count
	{
		[Token(Token = "0x6000F1C")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700033E")]
	public IList<TKey> Keys
	{
		[Token(Token = "0x6000F1D")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700033F")]
	private ICollection<TKey> System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EKeys
	{
		[Token(Token = "0x6000F1E")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000340")]
	private ICollection System_002ECollections_002EIDictionary_002EKeys
	{
		[Token(Token = "0x6000F1F")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000341")]
	private IEnumerable<TKey> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EKeys
	{
		[Token(Token = "0x6000F20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000342")]
	public IList<TValue> Values
	{
		[Token(Token = "0x6000F21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000343")]
	private ICollection<TValue> System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EValues
	{
		[Token(Token = "0x6000F22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000344")]
	private ICollection System_002ECollections_002EIDictionary_002EValues
	{
		[Token(Token = "0x6000F23")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000345")]
	private IEnumerable<TValue> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EValues
	{
		[Token(Token = "0x6000F24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000346")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000F27")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000347")]
	private bool System_002ECollections_002EIDictionary_002EIsReadOnly
	{
		[Token(Token = "0x6000F28")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000348")]
	private bool System_002ECollections_002EIDictionary_002EIsFixedSize
	{
		[Token(Token = "0x6000F29")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000349")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000F2A")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700034A")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000F2B")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034B")]
	public TValue this[TKey key]
	{
		[Token(Token = "0x6000F39")]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x6000F3A")]
		set
		{
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IDictionary.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x1700034C")]
	[Token(Token = "0x6000F3B")]
	private object System_002ECollections_002EIDictionary_002Eget_Item(object key)
	{
		return null;
	}

	[Token(Token = "0x6000F3C")]
	private void System_002ECollections_002EIDictionary_002Eset_Item(object key, object value)
	{
	}

	[Token(Token = "0x6000F12")]
	public SortedList()
	{
	}

	[Token(Token = "0x6000F13")]
	public SortedList(int capacity)
	{
	}

	[Token(Token = "0x6000F14")]
	public SortedList(IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6000F15")]
	public void Add(TKey key, TValue value)
	{
	}

	[Token(Token = "0x6000F16")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EAdd(KeyValuePair<TKey, TValue> keyValuePair)
	{
	}

	[Token(Token = "0x6000F17")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EContains(KeyValuePair<TKey, TValue> keyValuePair)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F18")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ERemove(KeyValuePair<TKey, TValue> keyValuePair)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F1B")]
	private void System_002ECollections_002EIDictionary_002EAdd(object key, object value)
	{
	}

	[Token(Token = "0x6000F25")]
	private KeyList GetKeyListHelper()
	{
		return null;
	}

	[Token(Token = "0x6000F26")]
	private ValueList GetValueListHelper()
	{
		return null;
	}

	[Token(Token = "0x6000F2C")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000F2D")]
	private bool System_002ECollections_002EIDictionary_002EContains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F2E")]
	public bool ContainsKey(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F2F")]
	public bool ContainsValue(TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F30")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ECopyTo(KeyValuePair<TKey, TValue>[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000F31")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000F32")]
	private void EnsureCapacity(int min)
	{
	}

	[Token(Token = "0x6000F33")]
	private TValue GetByIndex(int index)
	{
		return (TValue)null;
	}

	[Token(Token = "0x6000F34")]
	public IEnumerator<KeyValuePair<TKey, TValue>> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000F35")]
	private IEnumerator<KeyValuePair<TKey, TValue>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000F36")]
	private IDictionaryEnumerator System_002ECollections_002EIDictionary_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000F37")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000F38")]
	private TKey GetKey(int index)
	{
		return (TKey)null;
	}

	[Token(Token = "0x6000F3D")]
	public int IndexOfKey(TKey key)
	{
		return default(int);
	}

	[Token(Token = "0x6000F3E")]
	public int IndexOfValue(TValue value)
	{
		return default(int);
	}

	[Token(Token = "0x6000F3F")]
	private void Insert(int index, TKey key, TValue value)
	{
	}

	[Token(Token = "0x6000F40")]
	public bool TryGetValue(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F41")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000F42")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F43")]
	private void System_002ECollections_002EIDictionary_002ERemove(object key)
	{
	}

	[Token(Token = "0x6000F44")]
	private static bool IsCompatibleKey(object key)
	{
		return default(bool);
	}
}
