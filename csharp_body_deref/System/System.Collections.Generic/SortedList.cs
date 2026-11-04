// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.SortedList
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000269")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.IDictionaryDebugView<, >))]
[DebuggerDisplay("Count = {Count}")]
public class SortedList<TKey, TValue> : IDictionary<TKey, TValue>, ICollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable, IDictionary, ICollection, IReadOnlyDictionary<TKey, TValue>, IReadOnlyCollection<KeyValuePair<TKey, TValue>>
{
	[Serializable]
	[Token(Token = "0x200026A")]
	private struct Enumerator : IEnumerator<KeyValuePair<TKey, TValue>>, IDisposable, IEnumerator, IDictionaryEnumerator
	{
		[Token(Token = "0x4000882")]
		[FieldOffset(Offset = "0x0")]
		private SortedList<TKey, TValue> _sortedList;

		[Token(Token = "0x4000883")]
		[FieldOffset(Offset = "0x0")]
		private TKey _key;

		[Token(Token = "0x4000884")]
		[FieldOffset(Offset = "0x0")]
		private TValue _value;

		[Token(Token = "0x4000885")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x4000886")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x4000887")]
		[FieldOffset(Offset = "0x0")]
		private int _getEnumeratorRetType;

		[Token(Token = "0x1700037C")]
		private object System_002ECollections_002EIDictionaryEnumerator_002EKey
		{
			[Token(Token = "0x6001107")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700037D")]
		private DictionaryEntry System_002ECollections_002EIDictionaryEnumerator_002EEntry
		{
			[Token(Token = "0x6001109")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x1700037E")]
		public KeyValuePair<TKey, TValue> Current
		{
			[Token(Token = "0x600110A")]
			get
			{
				return default(KeyValuePair<TKey, TValue>);
			}
		}

		[Token(Token = "0x1700037F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600110B")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000380")]
		private object System_002ECollections_002EIDictionaryEnumerator_002EValue
		{
			[Token(Token = "0x600110C")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001105")]
		internal Enumerator(SortedList<TKey, TValue> sortedList, int getEnumeratorRetType)
		{
		}

		[Token(Token = "0x6001106")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6001108")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600110D")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200026B")]
	private sealed class SortedListKeyEnumerator : IEnumerator<TKey>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000888")]
		[FieldOffset(Offset = "0x0")]
		private SortedList<TKey, TValue> _sortedList;

		[Token(Token = "0x4000889")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x400088A")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x400088B")]
		[FieldOffset(Offset = "0x0")]
		private TKey _currentKey;

		[Token(Token = "0x17000381")]
		public TKey Current
		{
			[Token(Token = "0x6001111")]
			get
			{
				return (TKey)null;
			}
		}

		[Token(Token = "0x17000382")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001112")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600110E")]
		internal SortedListKeyEnumerator(SortedList<TKey, TValue> sortedList)
		{
		}

		[Token(Token = "0x600110F")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6001110")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001113")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200026C")]
	private sealed class SortedListValueEnumerator : IEnumerator<TValue>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400088C")]
		[FieldOffset(Offset = "0x0")]
		private SortedList<TKey, TValue> _sortedList;

		[Token(Token = "0x400088D")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x400088E")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x400088F")]
		[FieldOffset(Offset = "0x0")]
		private TValue _currentValue;

		[Token(Token = "0x17000383")]
		public TValue Current
		{
			[Token(Token = "0x6001117")]
			get
			{
				return (TValue)null;
			}
		}

		[Token(Token = "0x17000384")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001118")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001114")]
		internal SortedListValueEnumerator(SortedList<TKey, TValue> sortedList)
		{
		}

		[Token(Token = "0x6001115")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6001116")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001119")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200026D")]
	[DebuggerTypeProxy(typeof(System.Collections.Generic.DictionaryKeyCollectionDebugView<, >))]
	[DebuggerDisplay("Count = {Count}")]
	private sealed class KeyList : IList<TKey>, ICollection<TKey>, IEnumerable<TKey>, IEnumerable, ICollection
	{
		[Token(Token = "0x4000890")]
		[FieldOffset(Offset = "0x0")]
		private SortedList<TKey, TValue> _dict;

		[Token(Token = "0x17000385")]
		public int Count
		{
			[Token(Token = "0x600111B")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000386")]
		public bool IsReadOnly
		{
			[Token(Token = "0x600111C")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000387")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x600111D")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000388")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x600111E")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000389")]
		public TKey this[int index]
		{
			[Token(Token = "0x6001125")]
			get
			{
				return (TKey)null;
			}
			[Token(Token = "0x6001126")]
			set
			{
			}
		}

		[Token(Token = "0x600111A")]
		internal KeyList(SortedList<TKey, TValue> dictionary)
		{
		}

		[Token(Token = "0x600111F")]
		public void Add(TKey key)
		{
		}

		[Token(Token = "0x6001120")]
		public void Clear()
		{
		}

		[Token(Token = "0x6001121")]
		public bool Contains(TKey key)
		{
			return default(bool);
		}

		[Token(Token = "0x6001122")]
		public void CopyTo(TKey[] array, int arrayIndex)
		{
		}

		[Token(Token = "0x6001123")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x6001124")]
		public void Insert(int index, TKey value)
		{
		}

		[Token(Token = "0x6001127")]
		public IEnumerator<TKey> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6001128")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6001129")]
		public int IndexOf(TKey key)
		{
			return default(int);
		}

		[Token(Token = "0x600112A")]
		public bool Remove(TKey key)
		{
			return default(bool);
		}

		[Token(Token = "0x600112B")]
		public void RemoveAt(int index)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200026E")]
	[DebuggerTypeProxy(typeof(System.Collections.Generic.DictionaryValueCollectionDebugView<, >))]
	[DebuggerDisplay("Count = {Count}")]
	private sealed class ValueList : IList<TValue>, ICollection<TValue>, IEnumerable<TValue>, IEnumerable, ICollection
	{
		[Token(Token = "0x4000891")]
		[FieldOffset(Offset = "0x0")]
		private SortedList<TKey, TValue> _dict;

		[Token(Token = "0x1700038A")]
		public int Count
		{
			[Token(Token = "0x600112D")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700038B")]
		public bool IsReadOnly
		{
			[Token(Token = "0x600112E")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700038C")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x600112F")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700038D")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6001130")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700038E")]
		public TValue this[int index]
		{
			[Token(Token = "0x6001137")]
			get
			{
				return (TValue)null;
			}
			[Token(Token = "0x6001138")]
			set
			{
			}
		}

		[Token(Token = "0x600112C")]
		internal ValueList(SortedList<TKey, TValue> dictionary)
		{
		}

		[Token(Token = "0x6001131")]
		public void Add(TValue key)
		{
		}

		[Token(Token = "0x6001132")]
		public void Clear()
		{
		}

		[Token(Token = "0x6001133")]
		public bool Contains(TValue value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001134")]
		public void CopyTo(TValue[] array, int arrayIndex)
		{
		}

		[Token(Token = "0x6001135")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6001136")]
		public void Insert(int index, TValue value)
		{
		}

		[Token(Token = "0x6001139")]
		public IEnumerator<TValue> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600113A")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600113B")]
		public int IndexOf(TValue value)
		{
			return default(int);
		}

		[Token(Token = "0x600113C")]
		public bool Remove(TValue value)
		{
			return default(bool);
		}

		[Token(Token = "0x600113D")]
		public void RemoveAt(int index)
		{
		}
	}

	[Token(Token = "0x400087A")]
	[FieldOffset(Offset = "0x0")]
	private TKey[] keys;

	[Token(Token = "0x400087B")]
	[FieldOffset(Offset = "0x0")]
	private TValue[] values;

	[Token(Token = "0x400087C")]
	[FieldOffset(Offset = "0x0")]
	private int _size;

	[Token(Token = "0x400087D")]
	[FieldOffset(Offset = "0x0")]
	private int version;

	[Token(Token = "0x400087E")]
	[FieldOffset(Offset = "0x0")]
	private IComparer<TKey> comparer;

	[Token(Token = "0x400087F")]
	[FieldOffset(Offset = "0x0")]
	private KeyList keyList;

	[Token(Token = "0x4000880")]
	[FieldOffset(Offset = "0x0")]
	private ValueList valueList;

	[NonSerialized]
	[Token(Token = "0x4000881")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[Token(Token = "0x1700036A")]
	public int Capacity
	{
		[Token(Token = "0x60010D9")]
		set
		{
		}
	}

	[Token(Token = "0x1700036B")]
	public IComparer<TKey> Comparer
	{
		[Token(Token = "0x60010DA")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700036C")]
	public int Count
	{
		[Token(Token = "0x60010DC")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700036D")]
	public IList<TKey> Keys
	{
		[Token(Token = "0x60010DD")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700036E")]
	private ICollection<TKey> System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EKeys
	{
		[Token(Token = "0x60010DE")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700036F")]
	private ICollection System_002ECollections_002EIDictionary_002EKeys
	{
		[Token(Token = "0x60010DF")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000370")]
	private IEnumerable<TKey> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EKeys
	{
		[Token(Token = "0x60010E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000371")]
	public IList<TValue> Values
	{
		[Token(Token = "0x60010E1")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000372")]
	private ICollection<TValue> System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EValues
	{
		[Token(Token = "0x60010E2")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000373")]
	private ICollection System_002ECollections_002EIDictionary_002EValues
	{
		[Token(Token = "0x60010E3")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000374")]
	private IEnumerable<TValue> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EValues
	{
		[Token(Token = "0x60010E4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000375")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x60010E7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000376")]
	private bool System_002ECollections_002EIDictionary_002EIsReadOnly
	{
		[Token(Token = "0x60010E8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000377")]
	private bool System_002ECollections_002EIDictionary_002EIsFixedSize
	{
		[Token(Token = "0x60010E9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000378")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x60010EA")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000379")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x60010EB")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700037A")]
	public TValue this[TKey key]
	{
		[Token(Token = "0x60010F9")]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x60010FA")]
		set
		{
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IDictionary.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x1700037B")]
	[Token(Token = "0x60010FB")]
	private object System_002ECollections_002EIDictionary_002Eget_Item(object key)
	{
		return null;
	}

	[Token(Token = "0x60010FC")]
	private void System_002ECollections_002EIDictionary_002Eset_Item(object key, object value)
	{
	}

	[Token(Token = "0x60010D2")]
	public SortedList()
	{
	}

	[Token(Token = "0x60010D3")]
	public SortedList(int capacity)
	{
	}

	[Token(Token = "0x60010D4")]
	public SortedList(IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x60010D5")]
	public void Add(TKey key, TValue value)
	{
	}

	[Token(Token = "0x60010D6")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EAdd(KeyValuePair<TKey, TValue> keyValuePair)
	{
	}

	[Token(Token = "0x60010D7")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EContains(KeyValuePair<TKey, TValue> keyValuePair)
	{
		return default(bool);
	}

	[Token(Token = "0x60010D8")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ERemove(KeyValuePair<TKey, TValue> keyValuePair)
	{
		return default(bool);
	}

	[Token(Token = "0x60010DB")]
	private void System_002ECollections_002EIDictionary_002EAdd(object key, object value)
	{
	}

	[Token(Token = "0x60010E5")]
	private KeyList GetKeyListHelper()
	{
		return null;
	}

	[Token(Token = "0x60010E6")]
	private ValueList GetValueListHelper()
	{
		return null;
	}

	[Token(Token = "0x60010EC")]
	public void Clear()
	{
	}

	[Token(Token = "0x60010ED")]
	private bool System_002ECollections_002EIDictionary_002EContains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x60010EE")]
	public bool ContainsKey(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x60010EF")]
	public bool ContainsValue(TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x60010F0")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ECopyTo(KeyValuePair<TKey, TValue>[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x60010F1")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60010F2")]
	private void EnsureCapacity(int min)
	{
	}

	[Token(Token = "0x60010F3")]
	private TValue GetByIndex(int index)
	{
		return (TValue)null;
	}

	[Token(Token = "0x60010F4")]
	public IEnumerator<KeyValuePair<TKey, TValue>> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60010F5")]
	private IEnumerator<KeyValuePair<TKey, TValue>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60010F6")]
	private IDictionaryEnumerator System_002ECollections_002EIDictionary_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60010F7")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60010F8")]
	private TKey GetKey(int index)
	{
		return (TKey)null;
	}

	[Token(Token = "0x60010FD")]
	public int IndexOfKey(TKey key)
	{
		return default(int);
	}

	[Token(Token = "0x60010FE")]
	public int IndexOfValue(TValue value)
	{
		return default(int);
	}

	[Token(Token = "0x60010FF")]
	private void Insert(int index, TKey key, TValue value)
	{
	}

	[Token(Token = "0x6001100")]
	public bool TryGetValue(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001101")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6001102")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001103")]
	private void System_002ECollections_002EIDictionary_002ERemove(object key)
	{
	}

	[Token(Token = "0x6001104")]
	private static bool IsCompatibleKey(object key)
	{
		return default(bool);
	}
}
