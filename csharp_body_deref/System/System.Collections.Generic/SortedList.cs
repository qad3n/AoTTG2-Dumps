using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000350")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.IDictionaryDebugView<, >))]
public class SortedList<TKey, TValue> : IDictionary<TKey, TValue>, ICollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable, IDictionary, ICollection, IReadOnlyDictionary<TKey, TValue>, IReadOnlyCollection<KeyValuePair<TKey, TValue>>
{
	[Serializable]
	[Token(Token = "0x2000351")]
	private struct Enumerator : IEnumerator<KeyValuePair<TKey, TValue>>, IDisposable, IEnumerator, IDictionaryEnumerator
	{
		[Token(Token = "0x4000F35")]
		[FieldOffset(Offset = "0x0")]
		private SortedList<TKey, TValue> _sortedList;

		[Token(Token = "0x4000F36")]
		[FieldOffset(Offset = "0x0")]
		private TKey _key;

		[Token(Token = "0x4000F37")]
		[FieldOffset(Offset = "0x0")]
		private TValue _value;

		[Token(Token = "0x4000F38")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x4000F39")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x4000F3A")]
		[FieldOffset(Offset = "0x0")]
		private int _getEnumeratorRetType;

		[Token(Token = "0x170004EB")]
		private object System_002ECollections_002EIDictionaryEnumerator_002EKey
		{
			[Token(Token = "0x6001654")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004EC")]
		private DictionaryEntry System_002ECollections_002EIDictionaryEnumerator_002EEntry
		{
			[Token(Token = "0x6001656")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x170004ED")]
		public KeyValuePair<TKey, TValue> Current
		{
			[Token(Token = "0x6001657")]
			get
			{
				return default(KeyValuePair<TKey, TValue>);
			}
		}

		[Token(Token = "0x170004EE")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001658")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004EF")]
		private object System_002ECollections_002EIDictionaryEnumerator_002EValue
		{
			[Token(Token = "0x6001659")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001652")]
		internal Enumerator(SortedList<TKey, TValue> sortedList, int getEnumeratorRetType)
		{
		}

		[Token(Token = "0x6001653")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6001655")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600165A")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000352")]
	private sealed class SortedListKeyEnumerator : IEnumerator<TKey>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000F3B")]
		[FieldOffset(Offset = "0x0")]
		private SortedList<TKey, TValue> _sortedList;

		[Token(Token = "0x4000F3C")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x4000F3D")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x4000F3E")]
		[FieldOffset(Offset = "0x0")]
		private TKey _currentKey;

		[Token(Token = "0x170004F0")]
		public TKey Current
		{
			[Token(Token = "0x600165E")]
			get
			{
				return (TKey)null;
			}
		}

		[Token(Token = "0x170004F1")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600165F")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600165B")]
		internal SortedListKeyEnumerator(SortedList<TKey, TValue> sortedList)
		{
		}

		[Token(Token = "0x600165C")]
		public void Dispose()
		{
		}

		[Token(Token = "0x600165D")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001660")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000353")]
	private sealed class SortedListValueEnumerator : IEnumerator<TValue>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000F3F")]
		[FieldOffset(Offset = "0x0")]
		private SortedList<TKey, TValue> _sortedList;

		[Token(Token = "0x4000F40")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x4000F41")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x4000F42")]
		[FieldOffset(Offset = "0x0")]
		private TValue _currentValue;

		[Token(Token = "0x170004F2")]
		public TValue Current
		{
			[Token(Token = "0x6001664")]
			get
			{
				return (TValue)null;
			}
		}

		[Token(Token = "0x170004F3")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001665")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001661")]
		internal SortedListValueEnumerator(SortedList<TKey, TValue> sortedList)
		{
		}

		[Token(Token = "0x6001662")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6001663")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001666")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000354")]
	[DebuggerDisplay("Count = {Count}")]
	[DebuggerTypeProxy(typeof(System.Collections.Generic.DictionaryKeyCollectionDebugView<, >))]
	private sealed class KeyList : IList<TKey>, ICollection<TKey>, IEnumerable<TKey>, IEnumerable, ICollection
	{
		[Token(Token = "0x4000F43")]
		[FieldOffset(Offset = "0x0")]
		private SortedList<TKey, TValue> _dict;

		[Token(Token = "0x170004F4")]
		public int Count
		{
			[Token(Token = "0x6001668")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170004F5")]
		public bool IsReadOnly
		{
			[Token(Token = "0x6001669")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170004F6")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x600166A")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170004F7")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x600166B")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004F8")]
		public TKey this[int index]
		{
			[Token(Token = "0x6001672")]
			get
			{
				return (TKey)null;
			}
			[Token(Token = "0x6001673")]
			set
			{
			}
		}

		[Token(Token = "0x6001667")]
		internal KeyList(SortedList<TKey, TValue> dictionary)
		{
		}

		[Token(Token = "0x600166C")]
		public void Add(TKey key)
		{
		}

		[Token(Token = "0x600166D")]
		public void Clear()
		{
		}

		[Token(Token = "0x600166E")]
		public bool Contains(TKey key)
		{
			return default(bool);
		}

		[Token(Token = "0x600166F")]
		public void CopyTo(TKey[] array, int arrayIndex)
		{
		}

		[Token(Token = "0x6001670")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x6001671")]
		public void Insert(int index, TKey value)
		{
		}

		[Token(Token = "0x6001674")]
		public IEnumerator<TKey> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6001675")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6001676")]
		public int IndexOf(TKey key)
		{
			return default(int);
		}

		[Token(Token = "0x6001677")]
		public bool Remove(TKey key)
		{
			return default(bool);
		}

		[Token(Token = "0x6001678")]
		public void RemoveAt(int index)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000355")]
	[DebuggerDisplay("Count = {Count}")]
	[DebuggerTypeProxy(typeof(System.Collections.Generic.DictionaryValueCollectionDebugView<, >))]
	private sealed class ValueList : IList<TValue>, ICollection<TValue>, IEnumerable<TValue>, IEnumerable, ICollection
	{
		[Token(Token = "0x4000F44")]
		[FieldOffset(Offset = "0x0")]
		private SortedList<TKey, TValue> _dict;

		[Token(Token = "0x170004F9")]
		public int Count
		{
			[Token(Token = "0x600167A")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170004FA")]
		public bool IsReadOnly
		{
			[Token(Token = "0x600167B")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170004FB")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x600167C")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170004FC")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x600167D")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004FD")]
		public TValue this[int index]
		{
			[Token(Token = "0x6001684")]
			get
			{
				return (TValue)null;
			}
			[Token(Token = "0x6001685")]
			set
			{
			}
		}

		[Token(Token = "0x6001679")]
		internal ValueList(SortedList<TKey, TValue> dictionary)
		{
		}

		[Token(Token = "0x600167E")]
		public void Add(TValue key)
		{
		}

		[Token(Token = "0x600167F")]
		public void Clear()
		{
		}

		[Token(Token = "0x6001680")]
		public bool Contains(TValue value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001681")]
		public void CopyTo(TValue[] array, int arrayIndex)
		{
		}

		[Token(Token = "0x6001682")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6001683")]
		public void Insert(int index, TValue value)
		{
		}

		[Token(Token = "0x6001686")]
		public IEnumerator<TValue> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6001687")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6001688")]
		public int IndexOf(TValue value)
		{
			return default(int);
		}

		[Token(Token = "0x6001689")]
		public bool Remove(TValue value)
		{
			return default(bool);
		}

		[Token(Token = "0x600168A")]
		public void RemoveAt(int index)
		{
		}
	}

	[Token(Token = "0x4000F2D")]
	[FieldOffset(Offset = "0x0")]
	private TKey[] keys;

	[Token(Token = "0x4000F2E")]
	[FieldOffset(Offset = "0x0")]
	private TValue[] values;

	[Token(Token = "0x4000F2F")]
	[FieldOffset(Offset = "0x0")]
	private int _size;

	[Token(Token = "0x4000F30")]
	[FieldOffset(Offset = "0x0")]
	private int version;

	[Token(Token = "0x4000F31")]
	[FieldOffset(Offset = "0x0")]
	private IComparer<TKey> comparer;

	[Token(Token = "0x4000F32")]
	[FieldOffset(Offset = "0x0")]
	private KeyList keyList;

	[Token(Token = "0x4000F33")]
	[FieldOffset(Offset = "0x0")]
	private ValueList valueList;

	[NonSerialized]
	[Token(Token = "0x4000F34")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[Token(Token = "0x170004D9")]
	public int Capacity
	{
		[Token(Token = "0x6001626")]
		set
		{
		}
	}

	[Token(Token = "0x170004DA")]
	public IComparer<TKey> Comparer
	{
		[Token(Token = "0x6001627")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004DB")]
	public int Count
	{
		[Token(Token = "0x6001629")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170004DC")]
	public IList<TKey> Keys
	{
		[Token(Token = "0x600162A")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004DD")]
	private ICollection<TKey> System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EKeys
	{
		[Token(Token = "0x600162B")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004DE")]
	private ICollection System_002ECollections_002EIDictionary_002EKeys
	{
		[Token(Token = "0x600162C")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004DF")]
	private IEnumerable<TKey> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EKeys
	{
		[Token(Token = "0x600162D")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E0")]
	public IList<TValue> Values
	{
		[Token(Token = "0x600162E")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E1")]
	private ICollection<TValue> System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EValues
	{
		[Token(Token = "0x600162F")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E2")]
	private ICollection System_002ECollections_002EIDictionary_002EValues
	{
		[Token(Token = "0x6001630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E3")]
	private IEnumerable<TValue> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EValues
	{
		[Token(Token = "0x6001631")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E4")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x6001634")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004E5")]
	private bool System_002ECollections_002EIDictionary_002EIsReadOnly
	{
		[Token(Token = "0x6001635")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004E6")]
	private bool System_002ECollections_002EIDictionary_002EIsFixedSize
	{
		[Token(Token = "0x6001636")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004E7")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6001637")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004E8")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6001638")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E9")]
	public TValue this[TKey key]
	{
		[Token(Token = "0x6001646")]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x6001647")]
		set
		{
		}
	}

	[Token(Token = "0x170004EA")]
	private object System_002ECollections_002EIDictionary_002EItem
	{
		[Token(Token = "0x6001648")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001649")]
		set
		{
		}
	}

	[Token(Token = "0x6001620")]
	public SortedList()
	{
	}

	[Token(Token = "0x6001621")]
	public SortedList(IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6001622")]
	public void Add(TKey key, TValue value)
	{
	}

	[Token(Token = "0x6001623")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EAdd(KeyValuePair<TKey, TValue> keyValuePair)
	{
	}

	[Token(Token = "0x6001624")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EContains(KeyValuePair<TKey, TValue> keyValuePair)
	{
		return default(bool);
	}

	[Token(Token = "0x6001625")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ERemove(KeyValuePair<TKey, TValue> keyValuePair)
	{
		return default(bool);
	}

	[Token(Token = "0x6001628")]
	private void System_002ECollections_002EIDictionary_002EAdd(object key, object value)
	{
	}

	[Token(Token = "0x6001632")]
	private KeyList GetKeyListHelper()
	{
		return null;
	}

	[Token(Token = "0x6001633")]
	private ValueList GetValueListHelper()
	{
		return null;
	}

	[Token(Token = "0x6001639")]
	public void Clear()
	{
	}

	[Token(Token = "0x600163A")]
	private bool System_002ECollections_002EIDictionary_002EContains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x600163B")]
	public bool ContainsKey(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x600163C")]
	public bool ContainsValue(TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x600163D")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ECopyTo(KeyValuePair<TKey, TValue>[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x600163E")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x600163F")]
	private void EnsureCapacity(int min)
	{
	}

	[Token(Token = "0x6001640")]
	private TValue GetByIndex(int index)
	{
		return (TValue)null;
	}

	[Token(Token = "0x6001641")]
	public IEnumerator<KeyValuePair<TKey, TValue>> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001642")]
	private IEnumerator<KeyValuePair<TKey, TValue>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001643")]
	private IDictionaryEnumerator System_002ECollections_002EIDictionary_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001644")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001645")]
	private TKey GetKey(int index)
	{
		return (TKey)null;
	}

	[Token(Token = "0x600164A")]
	public int IndexOfKey(TKey key)
	{
		return default(int);
	}

	[Token(Token = "0x600164B")]
	public int IndexOfValue(TValue value)
	{
		return default(int);
	}

	[Token(Token = "0x600164C")]
	private void Insert(int index, TKey key, TValue value)
	{
	}

	[Token(Token = "0x600164D")]
	public bool TryGetValue(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x600164E")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x600164F")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001650")]
	private void System_002ECollections_002EIDictionary_002ERemove(object key)
	{
	}

	[Token(Token = "0x6001651")]
	private static bool IsCompatibleKey(object key)
	{
		return default(bool);
	}
}
