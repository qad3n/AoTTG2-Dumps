using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections.Concurrent;

[Serializable]
[Token(Token = "0x200062D")]
[DebuggerTypeProxy(typeof(System.Collections.Concurrent.IDictionaryDebugView<, >))]
[DebuggerDisplay("Count = {Count}")]
public class ConcurrentDictionary<TKey, TValue> : IDictionary<TKey, TValue>, ICollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable, IDictionary, ICollection, IReadOnlyDictionary<TKey, TValue>, IReadOnlyCollection<KeyValuePair<TKey, TValue>>
{
	[Token(Token = "0x200062E")]
	private sealed class Tables
	{
		[Token(Token = "0x4001AEC")]
		[FieldOffset(Offset = "0x0")]
		internal readonly Node[] _buckets;

		[Token(Token = "0x4001AED")]
		[FieldOffset(Offset = "0x0")]
		internal readonly object[] _locks;

		[Token(Token = "0x4001AEE")]
		[FieldOffset(Offset = "0x0")]
		internal int[] _countPerLock;

		[Token(Token = "0x60030DF")]
		internal Tables(Node[] buckets, object[] locks, int[] countPerLock)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200062F")]
	private sealed class Node
	{
		[Token(Token = "0x4001AEF")]
		[FieldOffset(Offset = "0x0")]
		internal readonly TKey _key;

		[Token(Token = "0x4001AF0")]
		[FieldOffset(Offset = "0x0")]
		internal TValue _value;

		[Token(Token = "0x4001AF1")]
		[FieldOffset(Offset = "0x0")]
		internal Node _next;

		[Token(Token = "0x4001AF2")]
		[FieldOffset(Offset = "0x0")]
		internal readonly int _hashcode;

		[Token(Token = "0x60030E0")]
		internal Node(TKey key, TValue value, int hashcode, Node next)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000630")]
	private sealed class DictionaryEnumerator : IDictionaryEnumerator, IEnumerator
	{
		[Token(Token = "0x4001AF3")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<KeyValuePair<TKey, TValue>> _enumerator;

		[Token(Token = "0x170007C1")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x60030E2")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x170007C2")]
		public object Key
		{
			[Token(Token = "0x60030E3")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007C3")]
		public object Value
		{
			[Token(Token = "0x60030E4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007C4")]
		public object Current
		{
			[Token(Token = "0x60030E5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60030E1")]
		internal DictionaryEnumerator(ConcurrentDictionary<TKey, TValue> dictionary)
		{
		}

		[Token(Token = "0x60030E6")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60030E7")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x2000631")]
	[CompilerGenerated]
	private sealed class _003CGetEnumerator_003Ed__35 : IEnumerator<KeyValuePair<TKey, TValue>>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4001AF4")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001AF5")]
		[FieldOffset(Offset = "0x0")]
		private KeyValuePair<TKey, TValue> _003C_003E2__current;

		[Token(Token = "0x4001AF6")]
		[FieldOffset(Offset = "0x0")]
		public ConcurrentDictionary<TKey, TValue> _003C_003E4__this;

		[Token(Token = "0x4001AF7")]
		[FieldOffset(Offset = "0x0")]
		private Node[] _003Cbuckets_003E5__2;

		[Token(Token = "0x4001AF8")]
		[FieldOffset(Offset = "0x0")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x4001AF9")]
		[FieldOffset(Offset = "0x0")]
		private Node _003Ccurrent_003E5__4;

		[Token(Token = "0x170007C5")]
		private KeyValuePair<TKey, TValue> System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ECurrent
		{
			[Token(Token = "0x60030EB")]
			[DebuggerHidden]
			get
			{
				return default(KeyValuePair<TKey, TValue>);
			}
		}

		[Token(Token = "0x170007C6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60030ED")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60030E8")]
		[DebuggerHidden]
		public _003CGetEnumerator_003Ed__35(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60030E9")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60030EA")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60030EC")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[NonSerialized]
	[Token(Token = "0x4001AE4")]
	[FieldOffset(Offset = "0x0")]
	private Tables _tables;

	[Token(Token = "0x4001AE5")]
	[FieldOffset(Offset = "0x0")]
	private IEqualityComparer<TKey> _comparer;

	[NonSerialized]
	[Token(Token = "0x4001AE6")]
	[FieldOffset(Offset = "0x0")]
	private readonly bool _growLockArray;

	[NonSerialized]
	[Token(Token = "0x4001AE7")]
	[FieldOffset(Offset = "0x0")]
	private int _budget;

	[Token(Token = "0x4001AE8")]
	[FieldOffset(Offset = "0x0")]
	private KeyValuePair<TKey, TValue>[] _serializationArray;

	[Token(Token = "0x4001AE9")]
	[FieldOffset(Offset = "0x0")]
	private int _serializationConcurrencyLevel;

	[Token(Token = "0x4001AEA")]
	[FieldOffset(Offset = "0x0")]
	private int _serializationCapacity;

	[Token(Token = "0x4001AEB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly bool s_isValueWriteAtomic;

	[Token(Token = "0x170007B2")]
	public TValue this[TKey key]
	{
		[Token(Token = "0x60030B2")]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x60030B3")]
		set
		{
		}
	}

	[Token(Token = "0x170007B3")]
	public int Count
	{
		[Token(Token = "0x60030B6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170007B4")]
	public ICollection<TKey> Keys
	{
		[Token(Token = "0x60030BC")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007B5")]
	private IEnumerable<TKey> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EKeys
	{
		[Token(Token = "0x60030BD")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007B6")]
	public ICollection<TValue> Values
	{
		[Token(Token = "0x60030BE")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007B7")]
	private IEnumerable<TValue> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EValues
	{
		[Token(Token = "0x60030BF")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007B8")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x60030C2")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007B9")]
	private bool System_002ECollections_002EIDictionary_002EIsFixedSize
	{
		[Token(Token = "0x60030C8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007BA")]
	private bool System_002ECollections_002EIDictionary_002EIsReadOnly
	{
		[Token(Token = "0x60030C9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007BB")]
	private ICollection System_002ECollections_002EIDictionary_002EKeys
	{
		[Token(Token = "0x60030CA")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007BC")]
	private ICollection System_002ECollections_002EIDictionary_002EValues
	{
		[Token(Token = "0x60030CC")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007BD")]
	private object System_002ECollections_002EIDictionary_002EItem
	{
		[Token(Token = "0x60030CD")]
		get
		{
			return null;
		}
		[Token(Token = "0x60030CE")]
		set
		{
		}
	}

	[Token(Token = "0x170007BE")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x60030D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007BF")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x60030D1")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007C0")]
	private static int DefaultConcurrencyLevel
	{
		[Token(Token = "0x60030D5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600309F")]
	private static bool IsValueWriteAtomic()
	{
		return default(bool);
	}

	[Token(Token = "0x60030A0")]
	public ConcurrentDictionary()
	{
	}

	[Token(Token = "0x60030A1")]
	public ConcurrentDictionary(IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x60030A2")]
	private void InitializeFromCollection(IEnumerable<KeyValuePair<TKey, TValue>> collection)
	{
	}

	[Token(Token = "0x60030A3")]
	internal ConcurrentDictionary(int concurrencyLevel, int capacity, bool growLockArray, IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x60030A4")]
	public bool TryAdd(TKey key, TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x60030A5")]
	public bool ContainsKey(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x60030A6")]
	public bool TryRemove(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x60030A7")]
	private bool TryRemoveInternal(TKey key, out TValue value, bool matchValue, TValue oldValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60030A8")]
	public bool TryGetValue(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x60030A9")]
	private bool TryGetValueInternal(TKey key, int hashcode, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x60030AA")]
	public void Clear()
	{
	}

	[Token(Token = "0x60030AB")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ECopyTo(KeyValuePair<TKey, TValue>[] array, int index)
	{
	}

	[Token(Token = "0x60030AC")]
	public KeyValuePair<TKey, TValue>[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x60030AD")]
	private void CopyToPairs(KeyValuePair<TKey, TValue>[] array, int index)
	{
	}

	[Token(Token = "0x60030AE")]
	private void CopyToEntries(DictionaryEntry[] array, int index)
	{
	}

	[Token(Token = "0x60030AF")]
	private void CopyToObjects(object[] array, int index)
	{
	}

	[Token(Token = "0x60030B0")]
	[IteratorStateMachine(typeof(ConcurrentDictionary<, >._003CGetEnumerator_003Ed__35))]
	public IEnumerator<KeyValuePair<TKey, TValue>> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60030B1")]
	private bool TryAddInternal(TKey key, int hashcode, TValue value, bool updateIfExists, bool acquireLock, out TValue resultingValue)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60030B4")]
	private static void ThrowKeyNotFoundException(object key)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60030B5")]
	private static void ThrowKeyNullException()
	{
	}

	[Token(Token = "0x60030B7")]
	private int GetCountInternal()
	{
		return default(int);
	}

	[Token(Token = "0x60030B8")]
	public TValue GetOrAdd(TKey key, Func<TKey, TValue> valueFactory)
	{
		return (TValue)null;
	}

	[Token(Token = "0x60030B9")]
	public TValue GetOrAdd(TKey key, TValue value)
	{
		return (TValue)null;
	}

	[Token(Token = "0x60030BA")]
	private void System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EAdd(TKey key, TValue value)
	{
	}

	[Token(Token = "0x60030BB")]
	private bool System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002ERemove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x60030C0")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EAdd(KeyValuePair<TKey, TValue> keyValuePair)
	{
	}

	[Token(Token = "0x60030C1")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EContains(KeyValuePair<TKey, TValue> keyValuePair)
	{
		return default(bool);
	}

	[Token(Token = "0x60030C3")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ERemove(KeyValuePair<TKey, TValue> keyValuePair)
	{
		return default(bool);
	}

	[Token(Token = "0x60030C4")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60030C5")]
	private void System_002ECollections_002EIDictionary_002EAdd(object key, object value)
	{
	}

	[Token(Token = "0x60030C6")]
	private bool System_002ECollections_002EIDictionary_002EContains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x60030C7")]
	private IDictionaryEnumerator System_002ECollections_002EIDictionary_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60030CB")]
	private void System_002ECollections_002EIDictionary_002ERemove(object key)
	{
	}

	[Token(Token = "0x60030CF")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60030D2")]
	private void GrowTable(Tables tables)
	{
	}

	[Token(Token = "0x60030D3")]
	private static int GetBucket(int hashcode, int bucketCount)
	{
		return default(int);
	}

	[Token(Token = "0x60030D4")]
	private static void GetBucketAndLockNo(int hashcode, out int bucketNo, out int lockNo, int bucketCount, int lockCount)
	{
	}

	[Token(Token = "0x60030D6")]
	private void AcquireAllLocks(ref int locksAcquired)
	{
	}

	[Token(Token = "0x60030D7")]
	private void AcquireLocks(int fromInclusive, int toExclusive, ref int locksAcquired)
	{
	}

	[Token(Token = "0x60030D8")]
	private void ReleaseLocks(int fromInclusive, int toExclusive)
	{
	}

	[Token(Token = "0x60030D9")]
	private ReadOnlyCollection<TKey> GetKeys()
	{
		return null;
	}

	[Token(Token = "0x60030DA")]
	private ReadOnlyCollection<TValue> GetValues()
	{
		return null;
	}

	[Token(Token = "0x60030DB")]
	[OnSerializing]
	private void OnSerializing(StreamingContext context)
	{
	}

	[Token(Token = "0x60030DC")]
	[OnSerialized]
	private void OnSerialized(StreamingContext context)
	{
	}

	[Token(Token = "0x60030DD")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext context)
	{
	}
}
