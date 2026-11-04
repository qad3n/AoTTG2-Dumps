// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.SortedDictionary
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x200025B")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.IDictionaryDebugView<, >))]
[DebuggerDisplay("Count = {Count}")]
public class SortedDictionary<TKey, TValue> : IDictionary<TKey, TValue>, ICollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable, IDictionary, ICollection, IReadOnlyDictionary<TKey, TValue>, IReadOnlyCollection<KeyValuePair<TKey, TValue>>
{
	[Token(Token = "0x200025C")]
	public struct Enumerator : IEnumerator<KeyValuePair<TKey, TValue>>, IDisposable, IEnumerator, IDictionaryEnumerator
	{
		[Token(Token = "0x4000867")]
		[FieldOffset(Offset = "0x0")]
		private SortedSet<KeyValuePair<TKey, TValue>>.Enumerator _treeEnum;

		[Token(Token = "0x4000868")]
		[FieldOffset(Offset = "0x0")]
		private int _getEnumeratorRetType;

		[Token(Token = "0x17000358")]
		public KeyValuePair<TKey, TValue> Current
		{
			[Token(Token = "0x6001092")]
			get
			{
				return default(KeyValuePair<TKey, TValue>);
			}
		}

		[Token(Token = "0x17000359")]
		internal bool NotStartedOrEnded
		{
			[Token(Token = "0x6001093")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700035A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001096")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700035B")]
		private object System_002ECollections_002EIDictionaryEnumerator_002EKey
		{
			[Token(Token = "0x6001097")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700035C")]
		private object System_002ECollections_002EIDictionaryEnumerator_002EValue
		{
			[Token(Token = "0x6001098")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700035D")]
		private DictionaryEntry System_002ECollections_002EIDictionaryEnumerator_002EEntry
		{
			[Token(Token = "0x6001099")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x600108F")]
		internal Enumerator(SortedDictionary<TKey, TValue> dictionary, int getEnumeratorRetType)
		{
		}

		[Token(Token = "0x6001090")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001091")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6001094")]
		internal void Reset()
		{
		}

		[Token(Token = "0x6001095")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200025D")]
	[DebuggerTypeProxy(typeof(System.Collections.Generic.DictionaryKeyCollectionDebugView<, >))]
	[DebuggerDisplay("Count = {Count}")]
	public sealed class KeyCollection : ICollection<TKey>, IEnumerable<TKey>, IEnumerable, ICollection, IReadOnlyCollection<TKey>
	{
		[Token(Token = "0x200025E")]
		public struct Enumerator : IEnumerator<TKey>, IDisposable, IEnumerator
		{
			[Token(Token = "0x400086A")]
			[FieldOffset(Offset = "0x0")]
			private SortedDictionary<TKey, TValue>.Enumerator _dictEnum;

			[Token(Token = "0x17000362")]
			public TKey Current
			{
				[Token(Token = "0x60010AA")]
				get
				{
					return (TKey)null;
				}
			}

			[Token(Token = "0x17000363")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x60010AB")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60010A7")]
			internal Enumerator(SortedDictionary<TKey, TValue> dictionary)
			{
			}

			[Token(Token = "0x60010A8")]
			public void Dispose()
			{
			}

			[Token(Token = "0x60010A9")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x60010AC")]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}
		}

		[Token(Token = "0x4000869")]
		[FieldOffset(Offset = "0x0")]
		private SortedDictionary<TKey, TValue> _dictionary;

		[Token(Token = "0x1700035E")]
		public int Count
		{
			[Token(Token = "0x600109F")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700035F")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EIsReadOnly
		{
			[Token(Token = "0x60010A0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000360")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x60010A5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000361")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x60010A6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600109A")]
		public KeyCollection(SortedDictionary<TKey, TValue> dictionary)
		{
		}

		[Token(Token = "0x600109B")]
		private IEnumerator<TKey> System_002ECollections_002EGeneric_002EIEnumerable_003CTKey_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600109C")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600109D")]
		public void CopyTo(TKey[] array, int index)
		{
		}

		[Token(Token = "0x600109E")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x60010A1")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EAdd(TKey item)
		{
		}

		[Token(Token = "0x60010A2")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EClear()
		{
		}

		[Token(Token = "0x60010A3")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EContains(TKey item)
		{
			return default(bool);
		}

		[Token(Token = "0x60010A4")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002ERemove(TKey item)
		{
			return default(bool);
		}
	}

	[Serializable]
	[Token(Token = "0x2000261")]
	[DebuggerTypeProxy(typeof(System.Collections.Generic.DictionaryValueCollectionDebugView<, >))]
	[DebuggerDisplay("Count = {Count}")]
	public sealed class ValueCollection : ICollection<TValue>, IEnumerable<TValue>, IEnumerable, ICollection, IReadOnlyCollection<TValue>
	{
		[Token(Token = "0x2000262")]
		public struct Enumerator : IEnumerator<TValue>, IDisposable, IEnumerator
		{
			[Token(Token = "0x4000870")]
			[FieldOffset(Offset = "0x0")]
			private SortedDictionary<TKey, TValue>.Enumerator _dictEnum;

			[Token(Token = "0x17000368")]
			public TValue Current
			{
				[Token(Token = "0x60010C1")]
				get
				{
					return (TValue)null;
				}
			}

			[Token(Token = "0x17000369")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x60010C2")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x60010BE")]
			internal Enumerator(SortedDictionary<TKey, TValue> dictionary)
			{
			}

			[Token(Token = "0x60010BF")]
			public void Dispose()
			{
			}

			[Token(Token = "0x60010C0")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x60010C3")]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}
		}

		[Token(Token = "0x400086F")]
		[FieldOffset(Offset = "0x0")]
		private SortedDictionary<TKey, TValue> _dictionary;

		[Token(Token = "0x17000364")]
		public int Count
		{
			[Token(Token = "0x60010B6")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000365")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EIsReadOnly
		{
			[Token(Token = "0x60010B7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000366")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x60010BC")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000367")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x60010BD")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60010B1")]
		public ValueCollection(SortedDictionary<TKey, TValue> dictionary)
		{
		}

		[Token(Token = "0x60010B2")]
		private IEnumerator<TValue> System_002ECollections_002EGeneric_002EIEnumerable_003CTValue_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60010B3")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60010B4")]
		public void CopyTo(TValue[] array, int index)
		{
		}

		[Token(Token = "0x60010B5")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x60010B8")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EAdd(TValue item)
		{
		}

		[Token(Token = "0x60010B9")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EClear()
		{
		}

		[Token(Token = "0x60010BA")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EContains(TValue item)
		{
			return default(bool);
		}

		[Token(Token = "0x60010BB")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002ERemove(TValue item)
		{
			return default(bool);
		}
	}

	[Serializable]
	[Token(Token = "0x2000265")]
	internal sealed class KeyValuePairComparer : Comparer<KeyValuePair<TKey, TValue>>
	{
		[Token(Token = "0x4000875")]
		[FieldOffset(Offset = "0x0")]
		internal IComparer<TKey> keyComparer;

		[Token(Token = "0x60010C8")]
		public KeyValuePairComparer(IComparer<TKey> keyComparer)
		{
		}

		[Token(Token = "0x60010C9")]
		public override int Compare(KeyValuePair<TKey, TValue> x, KeyValuePair<TKey, TValue> y)
		{
			return default(int);
		}
	}

	[NonSerialized]
	[Token(Token = "0x4000864")]
	[FieldOffset(Offset = "0x0")]
	private KeyCollection _keys;

	[NonSerialized]
	[Token(Token = "0x4000865")]
	[FieldOffset(Offset = "0x0")]
	private ValueCollection _values;

	[Token(Token = "0x4000866")]
	[FieldOffset(Offset = "0x0")]
	private TreeSet<KeyValuePair<TKey, TValue>> _set;

	[Token(Token = "0x17000348")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x600106D")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000349")]
	public TValue this[TKey key]
	{
		[Token(Token = "0x600106E")]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x600106F")]
		set
		{
		}
	}

	[Token(Token = "0x1700034A")]
	public int Count
	{
		[Token(Token = "0x6001070")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700034B")]
	public KeyCollection Keys
	{
		[Token(Token = "0x6001071")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034C")]
	private ICollection<TKey> System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EKeys
	{
		[Token(Token = "0x6001072")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034D")]
	private IEnumerable<TKey> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EKeys
	{
		[Token(Token = "0x6001073")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034E")]
	public ValueCollection Values
	{
		[Token(Token = "0x6001074")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034F")]
	private ICollection<TValue> System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EValues
	{
		[Token(Token = "0x6001075")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000350")]
	private IEnumerable<TValue> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EValues
	{
		[Token(Token = "0x6001076")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000351")]
	private bool System_002ECollections_002EIDictionary_002EIsFixedSize
	{
		[Token(Token = "0x6001081")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000352")]
	private bool System_002ECollections_002EIDictionary_002EIsReadOnly
	{
		[Token(Token = "0x6001082")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000353")]
	private ICollection System_002ECollections_002EIDictionary_002EKeys
	{
		[Token(Token = "0x6001083")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000354")]
	private ICollection System_002ECollections_002EIDictionary_002EValues
	{
		[Token(Token = "0x6001084")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IDictionary.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000355")]
	[Token(Token = "0x6001085")]
	private object System_002ECollections_002EIDictionary_002Eget_Item(object key)
	{
		return null;
	}

	[Token(Token = "0x6001086")]
	private void System_002ECollections_002EIDictionary_002Eset_Item(object key, object value)
	{
	}

	[Token(Token = "0x17000356")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x600108C")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000357")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x600108D")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001068")]
	public SortedDictionary()
	{
	}

	[Token(Token = "0x6001069")]
	public SortedDictionary(IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x600106A")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EAdd(KeyValuePair<TKey, TValue> keyValuePair)
	{
	}

	[Token(Token = "0x600106B")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EContains(KeyValuePair<TKey, TValue> keyValuePair)
	{
		return default(bool);
	}

	[Token(Token = "0x600106C")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ERemove(KeyValuePair<TKey, TValue> keyValuePair)
	{
		return default(bool);
	}

	[Token(Token = "0x6001077")]
	public void Add(TKey key, TValue value)
	{
	}

	[Token(Token = "0x6001078")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001079")]
	public bool ContainsKey(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x600107A")]
	public bool ContainsValue(TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x600107B")]
	public void CopyTo(KeyValuePair<TKey, TValue>[] array, int index)
	{
	}

	[Token(Token = "0x600107C")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600107D")]
	private IEnumerator<KeyValuePair<TKey, TValue>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600107E")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x600107F")]
	public bool TryGetValue(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001080")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001087")]
	private void System_002ECollections_002EIDictionary_002EAdd(object key, object value)
	{
	}

	[Token(Token = "0x6001088")]
	private bool System_002ECollections_002EIDictionary_002EContains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001089")]
	private static bool IsCompatibleKey(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x600108A")]
	private IDictionaryEnumerator System_002ECollections_002EIDictionary_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600108B")]
	private void System_002ECollections_002EIDictionary_002ERemove(object key)
	{
	}

	[Token(Token = "0x600108E")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
