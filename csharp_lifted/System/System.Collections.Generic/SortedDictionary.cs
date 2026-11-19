// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.SortedDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x200021C")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.IDictionaryDebugView<, >))]
[DebuggerDisplay("Count = {Count}")]
public class SortedDictionary<TKey, TValue> : IDictionary<TKey, TValue>, ICollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable, IDictionary, ICollection, IReadOnlyDictionary<TKey, TValue>, IReadOnlyCollection<KeyValuePair<TKey, TValue>>
{
	[Token(Token = "0x200021D")]
	public struct Enumerator : IEnumerator<KeyValuePair<TKey, TValue>>, IDisposable, IEnumerator, IDictionaryEnumerator
	{
		[Token(Token = "0x4000798")]
		[FieldOffset(Offset = "0x0")]
		private SortedSet<KeyValuePair<TKey, TValue>>.Enumerator _treeEnum;

		[Token(Token = "0x4000799")]
		[FieldOffset(Offset = "0x0")]
		private int _getEnumeratorRetType;

		[Token(Token = "0x17000329")]
		public KeyValuePair<TKey, TValue> Current
		{
			[Token(Token = "0x6000ED2")]
			get
			{
				return default(KeyValuePair<TKey, TValue>);
			}
		}

		[Token(Token = "0x1700032A")]
		internal bool NotStartedOrEnded
		{
			[Token(Token = "0x6000ED3")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700032B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000ED6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700032C")]
		private object System_002ECollections_002EIDictionaryEnumerator_002EKey
		{
			[Token(Token = "0x6000ED7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700032D")]
		private object System_002ECollections_002EIDictionaryEnumerator_002EValue
		{
			[Token(Token = "0x6000ED8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700032E")]
		private DictionaryEntry System_002ECollections_002EIDictionaryEnumerator_002EEntry
		{
			[Token(Token = "0x6000ED9")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x6000ECF")]
		internal Enumerator(SortedDictionary<TKey, TValue> dictionary, int getEnumeratorRetType)
		{
		}

		[Token(Token = "0x6000ED0")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000ED1")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000ED4")]
		internal void Reset()
		{
		}

		[Token(Token = "0x6000ED5")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200021E")]
	[DebuggerDisplay("Count = {Count}")]
	[DebuggerTypeProxy(typeof(System.Collections.Generic.DictionaryKeyCollectionDebugView<, >))]
	public sealed class KeyCollection : ICollection<TKey>, IEnumerable<TKey>, IEnumerable, ICollection, IReadOnlyCollection<TKey>
	{
		[Token(Token = "0x200021F")]
		public struct Enumerator : IEnumerator<TKey>, IDisposable, IEnumerator
		{
			[Token(Token = "0x400079B")]
			[FieldOffset(Offset = "0x0")]
			private SortedDictionary<TKey, TValue>.Enumerator _dictEnum;

			[Token(Token = "0x17000333")]
			public TKey Current
			{
				[Token(Token = "0x6000EEA")]
				get
				{
					return (TKey)null;
				}
			}

			[Token(Token = "0x17000334")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6000EEB")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000EE7")]
			internal Enumerator(SortedDictionary<TKey, TValue> dictionary)
			{
			}

			[Token(Token = "0x6000EE8")]
			public void Dispose()
			{
			}

			[Token(Token = "0x6000EE9")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000EEC")]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}
		}

		[Token(Token = "0x400079A")]
		[FieldOffset(Offset = "0x0")]
		private SortedDictionary<TKey, TValue> _dictionary;

		[Token(Token = "0x1700032F")]
		public int Count
		{
			[Token(Token = "0x6000EDF")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000330")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EIsReadOnly
		{
			[Token(Token = "0x6000EE0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000331")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6000EE5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000332")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6000EE6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000EDA")]
		public KeyCollection(SortedDictionary<TKey, TValue> dictionary)
		{
		}

		[Token(Token = "0x6000EDB")]
		private IEnumerator<TKey> System_002ECollections_002EGeneric_002EIEnumerable_003CTKey_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000EDC")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000EDD")]
		public void CopyTo(TKey[] array, int index)
		{
		}

		[Token(Token = "0x6000EDE")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6000EE1")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EAdd(TKey item)
		{
		}

		[Token(Token = "0x6000EE2")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EClear()
		{
		}

		[Token(Token = "0x6000EE3")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002EContains(TKey item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000EE4")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTKey_003E_002ERemove(TKey item)
		{
			return default(bool);
		}
	}

	[Serializable]
	[Token(Token = "0x2000222")]
	[DebuggerDisplay("Count = {Count}")]
	[DebuggerTypeProxy(typeof(System.Collections.Generic.DictionaryValueCollectionDebugView<, >))]
	public sealed class ValueCollection : ICollection<TValue>, IEnumerable<TValue>, IEnumerable, ICollection, IReadOnlyCollection<TValue>
	{
		[Token(Token = "0x2000223")]
		public struct Enumerator : IEnumerator<TValue>, IDisposable, IEnumerator
		{
			[Token(Token = "0x40007A1")]
			[FieldOffset(Offset = "0x0")]
			private SortedDictionary<TKey, TValue>.Enumerator _dictEnum;

			[Token(Token = "0x17000339")]
			public TValue Current
			{
				[Token(Token = "0x6000F01")]
				get
				{
					return (TValue)null;
				}
			}

			[Token(Token = "0x1700033A")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6000F02")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000EFE")]
			internal Enumerator(SortedDictionary<TKey, TValue> dictionary)
			{
			}

			[Token(Token = "0x6000EFF")]
			public void Dispose()
			{
			}

			[Token(Token = "0x6000F00")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000F03")]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}
		}

		[Token(Token = "0x40007A0")]
		[FieldOffset(Offset = "0x0")]
		private SortedDictionary<TKey, TValue> _dictionary;

		[Token(Token = "0x17000335")]
		public int Count
		{
			[Token(Token = "0x6000EF6")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000336")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EIsReadOnly
		{
			[Token(Token = "0x6000EF7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000337")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6000EFC")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000338")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6000EFD")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000EF1")]
		public ValueCollection(SortedDictionary<TKey, TValue> dictionary)
		{
		}

		[Token(Token = "0x6000EF2")]
		private IEnumerator<TValue> System_002ECollections_002EGeneric_002EIEnumerable_003CTValue_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000EF3")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000EF4")]
		public void CopyTo(TValue[] array, int index)
		{
		}

		[Token(Token = "0x6000EF5")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6000EF8")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EAdd(TValue item)
		{
		}

		[Token(Token = "0x6000EF9")]
		private void System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EClear()
		{
		}

		[Token(Token = "0x6000EFA")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002EContains(TValue item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000EFB")]
		private bool System_002ECollections_002EGeneric_002EICollection_003CTValue_003E_002ERemove(TValue item)
		{
			return default(bool);
		}
	}

	[Serializable]
	[Token(Token = "0x2000226")]
	internal sealed class KeyValuePairComparer : Comparer<KeyValuePair<TKey, TValue>>
	{
		[Token(Token = "0x40007A6")]
		[FieldOffset(Offset = "0x0")]
		internal IComparer<TKey> keyComparer;

		[Token(Token = "0x6000F08")]
		public KeyValuePairComparer(IComparer<TKey> keyComparer)
		{
		}

		[Token(Token = "0x6000F09")]
		public override int Compare(KeyValuePair<TKey, TValue> x, KeyValuePair<TKey, TValue> y)
		{
			return default(int);
		}
	}

	[NonSerialized]
	[Token(Token = "0x4000795")]
	[FieldOffset(Offset = "0x0")]
	private KeyCollection _keys;

	[NonSerialized]
	[Token(Token = "0x4000796")]
	[FieldOffset(Offset = "0x0")]
	private ValueCollection _values;

	[Token(Token = "0x4000797")]
	[FieldOffset(Offset = "0x0")]
	private TreeSet<KeyValuePair<TKey, TValue>> _set;

	[Token(Token = "0x17000319")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000EAD")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700031A")]
	public TValue this[TKey key]
	{
		[Token(Token = "0x6000EAE")]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x6000EAF")]
		set
		{
		}
	}

	[Token(Token = "0x1700031B")]
	public int Count
	{
		[Token(Token = "0x6000EB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700031C")]
	public KeyCollection Keys
	{
		[Token(Token = "0x6000EB1")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031D")]
	private ICollection<TKey> System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EKeys
	{
		[Token(Token = "0x6000EB2")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031E")]
	private IEnumerable<TKey> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EKeys
	{
		[Token(Token = "0x6000EB3")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031F")]
	public ValueCollection Values
	{
		[Token(Token = "0x6000EB4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000320")]
	private ICollection<TValue> System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EValues
	{
		[Token(Token = "0x6000EB5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000321")]
	private IEnumerable<TValue> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EValues
	{
		[Token(Token = "0x6000EB6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000322")]
	private bool System_002ECollections_002EIDictionary_002EIsFixedSize
	{
		[Token(Token = "0x6000EC1")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000323")]
	private bool System_002ECollections_002EIDictionary_002EIsReadOnly
	{
		[Token(Token = "0x6000EC2")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000324")]
	private ICollection System_002ECollections_002EIDictionary_002EKeys
	{
		[Token(Token = "0x6000EC3")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000325")]
	private ICollection System_002ECollections_002EIDictionary_002EValues
	{
		[Token(Token = "0x6000EC4")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IDictionary.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000326")]
	[Token(Token = "0x6000EC5")]
	private object System_002ECollections_002EIDictionary_002Eget_Item(object key)
	{
		return null;
	}

	[Token(Token = "0x6000EC6")]
	private void System_002ECollections_002EIDictionary_002Eset_Item(object key, object value)
	{
	}

	[Token(Token = "0x17000327")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000ECC")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000328")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000ECD")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000EA8")]
	public SortedDictionary()
	{
	}

	[Token(Token = "0x6000EA9")]
	public SortedDictionary(IComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6000EAA")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EAdd(KeyValuePair<TKey, TValue> keyValuePair)
	{
	}

	[Token(Token = "0x6000EAB")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EContains(KeyValuePair<TKey, TValue> keyValuePair)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EAC")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ERemove(KeyValuePair<TKey, TValue> keyValuePair)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB7")]
	public void Add(TKey key, TValue value)
	{
	}

	[Token(Token = "0x6000EB8")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000EB9")]
	public bool ContainsKey(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EBA")]
	public bool ContainsValue(TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EBB")]
	public void CopyTo(KeyValuePair<TKey, TValue>[] array, int index)
	{
	}

	[Token(Token = "0x6000EBC")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000EBD")]
	private IEnumerator<KeyValuePair<TKey, TValue>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000EBE")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EBF")]
	public bool TryGetValue(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EC0")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000EC7")]
	private void System_002ECollections_002EIDictionary_002EAdd(object key, object value)
	{
	}

	[Token(Token = "0x6000EC8")]
	private bool System_002ECollections_002EIDictionary_002EContains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EC9")]
	private static bool IsCompatibleKey(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ECA")]
	private IDictionaryEnumerator System_002ECollections_002EIDictionary_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000ECB")]
	private void System_002ECollections_002EIDictionary_002ERemove(object key)
	{
	}

	[Token(Token = "0x6000ECE")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
