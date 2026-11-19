// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.ObjectModel.ReadOnlyDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Collections.ObjectModel;

[Serializable]
[Token(Token = "0x20005E6")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.DictionaryDebugView<, >))]
[DebuggerDisplay("Count = {Count}")]
public class ReadOnlyDictionary<TKey, TValue> : IDictionary<TKey, TValue>, ICollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable, IDictionary, ICollection, IReadOnlyDictionary<TKey, TValue>, IReadOnlyCollection<KeyValuePair<TKey, TValue>>
{
	[Serializable]
	[Token(Token = "0x20005E7")]
	private struct DictionaryEnumerator : IDictionaryEnumerator, IEnumerator
	{
		[Token(Token = "0x4001878")]
		[FieldOffset(Offset = "0x0")]
		private readonly IDictionary<TKey, TValue> _dictionary;

		[Token(Token = "0x4001879")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<KeyValuePair<TKey, TValue>> _enumerator;

		[Token(Token = "0x1700077B")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x6002E56")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x1700077C")]
		public object Key
		{
			[Token(Token = "0x6002E57")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700077D")]
		public object Value
		{
			[Token(Token = "0x6002E58")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700077E")]
		public object Current
		{
			[Token(Token = "0x6002E59")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002E55")]
		public DictionaryEnumerator(IDictionary<TKey, TValue> dictionary)
		{
		}

		[Token(Token = "0x6002E5A")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002E5B")]
		public void Reset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20005E8")]
	[DebuggerDisplay("Count = {Count}")]
	[DebuggerTypeProxy(typeof(System.Collections.Generic.CollectionDebugView<>))]
	public sealed class KeyCollection : ICollection<TKey>, IEnumerable<TKey>, IEnumerable, ICollection, IReadOnlyCollection<TKey>
	{
		[Token(Token = "0x400187A")]
		[FieldOffset(Offset = "0x0")]
		private readonly ICollection<TKey> _collection;

		[NonSerialized]
		[Token(Token = "0x400187B")]
		[FieldOffset(Offset = "0x0")]
		private object _syncRoot;

		[Token(Token = "0x1700077F")]
		public int Count
		{
			[Token(Token = "0x6002E61")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000780")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EIsReadOnly
		{
			[Token(Token = "0x6002E62")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000781")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6002E67")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000782")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6002E68")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002E5C")]
		internal KeyCollection(ICollection<TKey> collection)
		{
		}

		[Token(Token = "0x6002E5D")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EAdd(TKey item)
		{
		}

		[Token(Token = "0x6002E5E")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EClear()
		{
		}

		[Token(Token = "0x6002E5F")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EContains(TKey item)
		{
			return default(bool);
		}

		[Token(Token = "0x6002E60")]
		public void CopyTo(TKey[] array, int arrayIndex)
		{
		}

		[Token(Token = "0x6002E63")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002ERemove(TKey item)
		{
			return default(bool);
		}

		[Token(Token = "0x6002E64")]
		public IEnumerator<TKey> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002E65")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002E66")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6002E69")]
		internal KeyCollection()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20005E9")]
	[DebuggerTypeProxy(typeof(System.Collections.Generic.CollectionDebugView<>))]
	[DebuggerDisplay("Count = {Count}")]
	public sealed class ValueCollection : ICollection<TValue>, IEnumerable<TValue>, IEnumerable, ICollection, IReadOnlyCollection<TValue>
	{
		[Token(Token = "0x400187C")]
		[FieldOffset(Offset = "0x0")]
		private readonly ICollection<TValue> _collection;

		[NonSerialized]
		[Token(Token = "0x400187D")]
		[FieldOffset(Offset = "0x0")]
		private object _syncRoot;

		[Token(Token = "0x17000783")]
		public int Count
		{
			[Token(Token = "0x6002E6F")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000784")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EIsReadOnly
		{
			[Token(Token = "0x6002E70")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000785")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6002E75")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000786")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6002E76")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002E6A")]
		internal ValueCollection(ICollection<TValue> collection)
		{
		}

		[Token(Token = "0x6002E6B")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EAdd(TValue item)
		{
		}

		[Token(Token = "0x6002E6C")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EClear()
		{
		}

		[Token(Token = "0x6002E6D")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EContains(TValue item)
		{
			return default(bool);
		}

		[Token(Token = "0x6002E6E")]
		public void CopyTo(TValue[] array, int arrayIndex)
		{
		}

		[Token(Token = "0x6002E71")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002ERemove(TValue item)
		{
			return default(bool);
		}

		[Token(Token = "0x6002E72")]
		public IEnumerator<TValue> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002E73")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002E74")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6002E77")]
		internal ValueCollection()
		{
		}
	}

	[Token(Token = "0x4001874")]
	[FieldOffset(Offset = "0x0")]
	private readonly IDictionary<TKey, TValue> m_dictionary;

	[NonSerialized]
	[Token(Token = "0x4001875")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[NonSerialized]
	[Token(Token = "0x4001876")]
	[FieldOffset(Offset = "0x0")]
	private KeyCollection _keys;

	[NonSerialized]
	[Token(Token = "0x4001877")]
	[FieldOffset(Offset = "0x0")]
	private ValueCollection _values;

	[Token(Token = "0x1700076A")]
	public KeyCollection Keys
	{
		[Token(Token = "0x6002E30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700076B")]
	public ValueCollection Values
	{
		[Token(Token = "0x6002E31")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700076C")]
	private ICollection<TKey> System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EKeys
	{
		[Token(Token = "0x6002E33")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700076D")]
	private ICollection<TValue> System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EValues
	{
		[Token(Token = "0x6002E35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700076E")]
	public TValue this[TKey key]
	{
		[Token(Token = "0x6002E36")]
		get
		{
			return (TValue)null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.Generic.IDictionary<TKey,TValue>.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x1700076F")]
	[Token(Token = "0x6002E39")]
	private TValue System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002Eget_Item(TKey key)
	{
		return (TValue)null;
	}

	[Token(Token = "0x6002E3A")]
	private void System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002Eset_Item(TKey key, TValue value)
	{
	}

	[Token(Token = "0x17000770")]
	public int Count
	{
		[Token(Token = "0x6002E3B")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000771")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x6002E3E")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000772")]
	private bool System_002ECollections_002EIDictionary_002EIsFixedSize
	{
		[Token(Token = "0x6002E49")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000773")]
	private bool System_002ECollections_002EIDictionary_002EIsReadOnly
	{
		[Token(Token = "0x6002E4A")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000774")]
	private ICollection System_002ECollections_002EIDictionary_002EKeys
	{
		[Token(Token = "0x6002E4B")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000775")]
	private ICollection System_002ECollections_002EIDictionary_002EValues
	{
		[Token(Token = "0x6002E4D")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IDictionary.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000776")]
	[Token(Token = "0x6002E4E")]
	private object System_002ECollections_002EIDictionary_002Eget_Item(object key)
	{
		return null;
	}

	[Token(Token = "0x6002E4F")]
	private void System_002ECollections_002EIDictionary_002Eset_Item(object key, object value)
	{
	}

	[Token(Token = "0x17000777")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002E51")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000778")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002E52")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000779")]
	private IEnumerable<TKey> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EKeys
	{
		[Token(Token = "0x6002E53")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700077A")]
	private IEnumerable<TValue> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EValues
	{
		[Token(Token = "0x6002E54")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002E32")]
	public bool ContainsKey(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E34")]
	public bool TryGetValue(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E37")]
	private void System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EAdd(TKey key, TValue value)
	{
	}

	[Token(Token = "0x6002E38")]
	private bool System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002ERemove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E3C")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EContains(KeyValuePair<TKey, TValue> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E3D")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ECopyTo(KeyValuePair<TKey, TValue>[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002E3F")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EAdd(KeyValuePair<TKey, TValue> item)
	{
	}

	[Token(Token = "0x6002E40")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EClear()
	{
	}

	[Token(Token = "0x6002E41")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ERemove(KeyValuePair<TKey, TValue> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E42")]
	public IEnumerator<KeyValuePair<TKey, TValue>> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002E43")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002E44")]
	private static bool IsCompatibleKey(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E45")]
	private void System_002ECollections_002EIDictionary_002EAdd(object key, object value)
	{
	}

	[Token(Token = "0x6002E46")]
	private void System_002ECollections_002EIDictionary_002EClear()
	{
	}

	[Token(Token = "0x6002E47")]
	private bool System_002ECollections_002EIDictionary_002EContains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E48")]
	private IDictionaryEnumerator System_002ECollections_002EIDictionary_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002E4C")]
	private void System_002ECollections_002EIDictionary_002ERemove(object key)
	{
	}

	[Token(Token = "0x6002E50")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}
}
