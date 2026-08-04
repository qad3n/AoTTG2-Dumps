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
[Token(Token = "0x2000637")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.DictionaryDebugView<, >))]
[DebuggerDisplay("Count = {Count}")]
public class ReadOnlyDictionary<TKey, TValue> : IDictionary<TKey, TValue>, ICollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable, IDictionary, ICollection, IReadOnlyDictionary<TKey, TValue>, IReadOnlyCollection<KeyValuePair<TKey, TValue>>
{
	[Serializable]
	[Token(Token = "0x2000638")]
	private struct DictionaryEnumerator : IDictionaryEnumerator, IEnumerator
	{
		[Token(Token = "0x4001B06")]
		[FieldOffset(Offset = "0x0")]
		private readonly IDictionary<TKey, TValue> _dictionary;

		[Token(Token = "0x4001B07")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<KeyValuePair<TKey, TValue>> _enumerator;

		[Token(Token = "0x170007ED")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x6003168")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x170007EE")]
		public object Key
		{
			[Token(Token = "0x6003169")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007EF")]
		public object Value
		{
			[Token(Token = "0x600316A")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007F0")]
		public object Current
		{
			[Token(Token = "0x600316B")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003167")]
		public DictionaryEnumerator(IDictionary<TKey, TValue> dictionary)
		{
		}

		[Token(Token = "0x600316C")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600316D")]
		public void Reset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000639")]
	[DebuggerTypeProxy(typeof(System.Collections.Generic.CollectionDebugView<>))]
	[DebuggerDisplay("Count = {Count}")]
	public sealed class KeyCollection : ICollection<TKey>, IEnumerable<TKey>, IEnumerable, ICollection, IReadOnlyCollection<TKey>
	{
		[Token(Token = "0x4001B08")]
		[FieldOffset(Offset = "0x0")]
		private readonly ICollection<TKey> _collection;

		[NonSerialized]
		[Token(Token = "0x4001B09")]
		[FieldOffset(Offset = "0x0")]
		private object _syncRoot;

		[Token(Token = "0x170007F1")]
		public int Count
		{
			[Token(Token = "0x6003173")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170007F2")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EIsReadOnly
		{
			[Token(Token = "0x6003174")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170007F3")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6003179")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170007F4")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x600317A")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600316E")]
		internal KeyCollection(ICollection<TKey> collection)
		{
		}

		[Token(Token = "0x600316F")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EAdd(TKey item)
		{
		}

		[Token(Token = "0x6003170")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EClear()
		{
		}

		[Token(Token = "0x6003171")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EContains(TKey item)
		{
			return default(bool);
		}

		[Token(Token = "0x6003172")]
		public void CopyTo(TKey[] array, int arrayIndex)
		{
		}

		[Token(Token = "0x6003175")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002ERemove(TKey item)
		{
			return default(bool);
		}

		[Token(Token = "0x6003176")]
		public IEnumerator<TKey> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6003177")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6003178")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x600317B")]
		internal KeyCollection()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200063A")]
	[DebuggerTypeProxy(typeof(System.Collections.Generic.CollectionDebugView<>))]
	[DebuggerDisplay("Count = {Count}")]
	public sealed class ValueCollection : ICollection<TValue>, IEnumerable<TValue>, IEnumerable, ICollection, IReadOnlyCollection<TValue>
	{
		[Token(Token = "0x4001B0A")]
		[FieldOffset(Offset = "0x0")]
		private readonly ICollection<TValue> _collection;

		[NonSerialized]
		[Token(Token = "0x4001B0B")]
		[FieldOffset(Offset = "0x0")]
		private object _syncRoot;

		[Token(Token = "0x170007F5")]
		public int Count
		{
			[Token(Token = "0x6003181")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170007F6")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EIsReadOnly
		{
			[Token(Token = "0x6003182")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170007F7")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6003187")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170007F8")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6003188")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600317C")]
		internal ValueCollection(ICollection<TValue> collection)
		{
		}

		[Token(Token = "0x600317D")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EAdd(TValue item)
		{
		}

		[Token(Token = "0x600317E")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EClear()
		{
		}

		[Token(Token = "0x600317F")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EContains(TValue item)
		{
			return default(bool);
		}

		[Token(Token = "0x6003180")]
		public void CopyTo(TValue[] array, int arrayIndex)
		{
		}

		[Token(Token = "0x6003183")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002ERemove(TValue item)
		{
			return default(bool);
		}

		[Token(Token = "0x6003184")]
		public IEnumerator<TValue> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6003185")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6003186")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6003189")]
		internal ValueCollection()
		{
		}
	}

	[Token(Token = "0x4001B02")]
	[FieldOffset(Offset = "0x0")]
	private readonly IDictionary<TKey, TValue> m_dictionary;

	[NonSerialized]
	[Token(Token = "0x4001B03")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[NonSerialized]
	[Token(Token = "0x4001B04")]
	[FieldOffset(Offset = "0x0")]
	private KeyCollection _keys;

	[NonSerialized]
	[Token(Token = "0x4001B05")]
	[FieldOffset(Offset = "0x0")]
	private ValueCollection _values;

	[Token(Token = "0x170007DC")]
	public KeyCollection Keys
	{
		[Token(Token = "0x6003142")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007DD")]
	public ValueCollection Values
	{
		[Token(Token = "0x6003143")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007DE")]
	private ICollection<TKey> System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EKeys
	{
		[Token(Token = "0x6003145")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007DF")]
	private ICollection<TValue> System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EValues
	{
		[Token(Token = "0x6003147")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007E0")]
	public TValue this[TKey key]
	{
		[Token(Token = "0x6003148")]
		get
		{
			return (TValue)null;
		}
	}

	[Token(Token = "0x170007E1")]
	private TValue System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EItem
	{
		[Token(Token = "0x600314B")]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x600314C")]
		set
		{
		}
	}

	[Token(Token = "0x170007E2")]
	public int Count
	{
		[Token(Token = "0x600314D")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170007E3")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x6003150")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007E4")]
	private bool System_002ECollections_002EIDictionary_002EIsFixedSize
	{
		[Token(Token = "0x600315B")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007E5")]
	private bool System_002ECollections_002EIDictionary_002EIsReadOnly
	{
		[Token(Token = "0x600315C")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007E6")]
	private ICollection System_002ECollections_002EIDictionary_002EKeys
	{
		[Token(Token = "0x600315D")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007E7")]
	private ICollection System_002ECollections_002EIDictionary_002EValues
	{
		[Token(Token = "0x600315F")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007E8")]
	private object System_002ECollections_002EIDictionary_002EItem
	{
		[Token(Token = "0x6003160")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003161")]
		set
		{
		}
	}

	[Token(Token = "0x170007E9")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6003163")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007EA")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6003164")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007EB")]
	private IEnumerable<TKey> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EKeys
	{
		[Token(Token = "0x6003165")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007EC")]
	private IEnumerable<TValue> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EValues
	{
		[Token(Token = "0x6003166")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003144")]
	public bool ContainsKey(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6003146")]
	public bool TryGetValue(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6003149")]
	private void System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EAdd(TKey key, TValue value)
	{
	}

	[Token(Token = "0x600314A")]
	private bool System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002ERemove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x600314E")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EContains(KeyValuePair<TKey, TValue> item)
	{
		return default(bool);
	}

	[Token(Token = "0x600314F")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ECopyTo(KeyValuePair<TKey, TValue>[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6003151")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EAdd(KeyValuePair<TKey, TValue> item)
	{
	}

	[Token(Token = "0x6003152")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EClear()
	{
	}

	[Token(Token = "0x6003153")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ERemove(KeyValuePair<TKey, TValue> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6003154")]
	public IEnumerator<KeyValuePair<TKey, TValue>> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6003155")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6003156")]
	private static bool IsCompatibleKey(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6003157")]
	private void System_002ECollections_002EIDictionary_002EAdd(object key, object value)
	{
	}

	[Token(Token = "0x6003158")]
	private void System_002ECollections_002EIDictionary_002EClear()
	{
	}

	[Token(Token = "0x6003159")]
	private bool System_002ECollections_002EIDictionary_002EContains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x600315A")]
	private IDictionaryEnumerator System_002ECollections_002EIDictionary_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600315E")]
	private void System_002ECollections_002EIDictionary_002ERemove(object key)
	{
	}

	[Token(Token = "0x6003162")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}
}
