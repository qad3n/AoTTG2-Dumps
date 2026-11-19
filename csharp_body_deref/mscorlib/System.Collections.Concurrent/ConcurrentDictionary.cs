// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Concurrent.ConcurrentDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections.Concurrent;

[Serializable]
[Token(Token = "0x20005DC")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(System.Collections.Concurrent.IDictionaryDebugView<, >))]
public class ConcurrentDictionary<TKey, TValue> : IDictionary<TKey, TValue>, ICollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable, IDictionary, ICollection, IReadOnlyDictionary<TKey, TValue>, IReadOnlyCollection<KeyValuePair<TKey, TValue>>
{
	[Token(Token = "0x20005DD")]
	private sealed class Tables
	{
		[Token(Token = "0x400185F")]
		[FieldOffset(Offset = "0x0")]
		internal readonly Node[] _buckets;

		[Token(Token = "0x4001860")]
		[FieldOffset(Offset = "0x0")]
		internal readonly object[] _locks;

		[Token(Token = "0x4001861")]
		[FieldOffset(Offset = "0x0")]
		internal int[] _countPerLock;

		[Token(Token = "0x6002DCD")]
		internal Tables(Node[] buckets, object[] locks, int[] countPerLock)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20005DE")]
	private sealed class Node
	{
		[Token(Token = "0x4001862")]
		[FieldOffset(Offset = "0x0")]
		internal readonly TKey _key;

		[Token(Token = "0x4001863")]
		[FieldOffset(Offset = "0x0")]
		internal TValue _value;

		[Token(Token = "0x4001864")]
		[FieldOffset(Offset = "0x0")]
		internal Node _next;

		[Token(Token = "0x4001865")]
		[FieldOffset(Offset = "0x0")]
		internal readonly int _hashcode;

		[Token(Token = "0x6002DCE")]
		internal Node(TKey key, TValue value, int hashcode, Node next)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20005DF")]
	private sealed class DictionaryEnumerator : IDictionaryEnumerator, IEnumerator
	{
		[Token(Token = "0x4001866")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<KeyValuePair<TKey, TValue>> _enumerator;

		[Token(Token = "0x1700074F")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x6002DD0")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x17000750")]
		public object Key
		{
			[Token(Token = "0x6002DD1")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000751")]
		public object Value
		{
			[Token(Token = "0x6002DD2")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000752")]
		public object Current
		{
			[Token(Token = "0x6002DD3")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002DCF")]
		internal DictionaryEnumerator(ConcurrentDictionary<TKey, TValue> dictionary)
		{
		}

		[Token(Token = "0x6002DD4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002DD5")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x20005E0")]
	[CompilerGenerated]
	private sealed class _003CGetEnumerator_003Ed__35 : IEnumerator<KeyValuePair<TKey, TValue>>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4001867")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001868")]
		[FieldOffset(Offset = "0x0")]
		private KeyValuePair<TKey, TValue> _003C_003E2__current;

		[Token(Token = "0x4001869")]
		[FieldOffset(Offset = "0x0")]
		public ConcurrentDictionary<TKey, TValue> _003C_003E4__this;

		[Token(Token = "0x400186A")]
		[FieldOffset(Offset = "0x0")]
		private Node[] _003Cbuckets_003E5__2;

		[Token(Token = "0x400186B")]
		[FieldOffset(Offset = "0x0")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x400186C")]
		[FieldOffset(Offset = "0x0")]
		private Node _003Ccurrent_003E5__4;

		[Token(Token = "0x17000753")]
		private KeyValuePair<TKey, TValue> System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ECurrent
		{
			[Token(Token = "0x6002DD9")]
			[DebuggerHidden]
			get
			{
				return default(KeyValuePair<TKey, TValue>);
			}
		}

		[Token(Token = "0x17000754")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002DDB")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002DD6")]
		[DebuggerHidden]
		public _003CGetEnumerator_003Ed__35(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002DD7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002DD8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002DDA")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[NonSerialized]
	[Token(Token = "0x4001857")]
	[FieldOffset(Offset = "0x0")]
	private Tables _tables;

	[Token(Token = "0x4001858")]
	[FieldOffset(Offset = "0x0")]
	private IEqualityComparer<TKey> _comparer;

	[NonSerialized]
	[Token(Token = "0x4001859")]
	[FieldOffset(Offset = "0x0")]
	private readonly bool _growLockArray;

	[NonSerialized]
	[Token(Token = "0x400185A")]
	[FieldOffset(Offset = "0x0")]
	private int _budget;

	[Token(Token = "0x400185B")]
	[FieldOffset(Offset = "0x0")]
	private KeyValuePair<TKey, TValue>[] _serializationArray;

	[Token(Token = "0x400185C")]
	[FieldOffset(Offset = "0x0")]
	private int _serializationConcurrencyLevel;

	[Token(Token = "0x400185D")]
	[FieldOffset(Offset = "0x0")]
	private int _serializationCapacity;

	[Token(Token = "0x400185E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly bool s_isValueWriteAtomic;

	[Token(Token = "0x17000740")]
	public TValue this[TKey key]
	{
		[Token(Token = "0x6002DA0")]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x6002DA1")]
		set
		{
		}
	}

	[Token(Token = "0x17000741")]
	public int Count
	{
		[Token(Token = "0x6002DA4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000742")]
	public ICollection<TKey> Keys
	{
		[Token(Token = "0x6002DAA")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000743")]
	private IEnumerable<TKey> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EKeys
	{
		[Token(Token = "0x6002DAB")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000744")]
	public ICollection<TValue> Values
	{
		[Token(Token = "0x6002DAC")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000745")]
	private IEnumerable<TValue> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EValues
	{
		[Token(Token = "0x6002DAD")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000746")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x6002DB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000747")]
	private bool System_002ECollections_002EIDictionary_002EIsFixedSize
	{
		[Token(Token = "0x6002DB6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000748")]
	private bool System_002ECollections_002EIDictionary_002EIsReadOnly
	{
		[Token(Token = "0x6002DB7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000749")]
	private ICollection System_002ECollections_002EIDictionary_002EKeys
	{
		[Token(Token = "0x6002DB8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700074A")]
	private ICollection System_002ECollections_002EIDictionary_002EValues
	{
		[Token(Token = "0x6002DBA")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IDictionary.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x1700074B")]
	[Token(Token = "0x6002DBB")]
	private object System_002ECollections_002EIDictionary_002Eget_Item(object key)
	{
		return null;
	}

	[Token(Token = "0x6002DBC")]
	private void System_002ECollections_002EIDictionary_002Eset_Item(object key, object value)
	{
	}

	[Token(Token = "0x1700074C")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002DBE")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700074D")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002DBF")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700074E")]
	private static int DefaultConcurrencyLevel
	{
		[Token(Token = "0x6002DC3")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002D8D")]
	private static bool IsValueWriteAtomic()
	{
		return default(bool);
	}

	[Token(Token = "0x6002D8E")]
	public ConcurrentDictionary()
	{
	}

	[Token(Token = "0x6002D8F")]
	public ConcurrentDictionary(IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6002D90")]
	private void InitializeFromCollection(IEnumerable<KeyValuePair<TKey, TValue>> collection)
	{
	}

	[Token(Token = "0x6002D91")]
	internal ConcurrentDictionary(int concurrencyLevel, int capacity, bool growLockArray, IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6002D92")]
	public bool TryAdd(TKey key, TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D93")]
	public bool ContainsKey(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D94")]
	public bool TryRemove(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D95")]
	private bool TryRemoveInternal(TKey key, out TValue value, bool matchValue, TValue oldValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D96")]
	public bool TryGetValue(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D97")]
	private bool TryGetValueInternal(TKey key, int hashcode, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D98")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002D99")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ECopyTo(KeyValuePair<TKey, TValue>[] array, int index)
	{
	}

	[Token(Token = "0x6002D9A")]
	public KeyValuePair<TKey, TValue>[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6002D9B")]
	private void CopyToPairs(KeyValuePair<TKey, TValue>[] array, int index)
	{
	}

	[Token(Token = "0x6002D9C")]
	private void CopyToEntries(DictionaryEntry[] array, int index)
	{
	}

	[Token(Token = "0x6002D9D")]
	private void CopyToObjects(object[] array, int index)
	{
	}

	[Token(Token = "0x6002D9E")]
	[IteratorStateMachine(typeof(ConcurrentDictionary<, >._003CGetEnumerator_003Ed__35))]
	public IEnumerator<KeyValuePair<TKey, TValue>> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002D9F")]
	private bool TryAddInternal(TKey key, int hashcode, TValue value, bool updateIfExists, bool acquireLock, out TValue resultingValue)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002DA2")]
	private static void ThrowKeyNotFoundException(object key)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002DA3")]
	private static void ThrowKeyNullException()
	{
	}

	[Token(Token = "0x6002DA5")]
	private int GetCountInternal()
	{
		return default(int);
	}

	[Token(Token = "0x6002DA6")]
	public TValue GetOrAdd(TKey key, Func<TKey, TValue> valueFactory)
	{
		return (TValue)null;
	}

	[Token(Token = "0x6002DA7")]
	public TValue GetOrAdd(TKey key, TValue value)
	{
		return (TValue)null;
	}

	[Token(Token = "0x6002DA8")]
	private void System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EAdd(TKey key, TValue value)
	{
	}

	[Token(Token = "0x6002DA9")]
	private bool System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002ERemove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DAE")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EAdd(KeyValuePair<TKey, TValue> keyValuePair)
	{
	}

	[Token(Token = "0x6002DAF")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EContains(KeyValuePair<TKey, TValue> keyValuePair)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DB1")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ERemove(KeyValuePair<TKey, TValue> keyValuePair)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DB2")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002DB3")]
	private void System_002ECollections_002EIDictionary_002EAdd(object key, object value)
	{
	}

	[Token(Token = "0x6002DB4")]
	private bool System_002ECollections_002EIDictionary_002EContains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DB5")]
	private IDictionaryEnumerator System_002ECollections_002EIDictionary_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002DB9")]
	private void System_002ECollections_002EIDictionary_002ERemove(object key)
	{
	}

	[Token(Token = "0x6002DBD")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002DC0")]
	private void GrowTable(Tables tables)
	{
	}

	[Token(Token = "0x6002DC1")]
	private static int GetBucket(int hashcode, int bucketCount)
	{
		return default(int);
	}

	[Token(Token = "0x6002DC2")]
	private static void GetBucketAndLockNo(int hashcode, out int bucketNo, out int lockNo, int bucketCount, int lockCount)
	{
	}

	[Token(Token = "0x6002DC4")]
	private void AcquireAllLocks(ref int locksAcquired)
	{
	}

	[Token(Token = "0x6002DC5")]
	private void AcquireLocks(int fromInclusive, int toExclusive, ref int locksAcquired)
	{
	}

	[Token(Token = "0x6002DC6")]
	private void ReleaseLocks(int fromInclusive, int toExclusive)
	{
	}

	[Token(Token = "0x6002DC7")]
	private ReadOnlyCollection<TKey> GetKeys()
	{
		return null;
	}

	[Token(Token = "0x6002DC8")]
	private ReadOnlyCollection<TValue> GetValues()
	{
		return null;
	}

	[Token(Token = "0x6002DC9")]
	[OnSerializing]
	private void OnSerializing(StreamingContext context)
	{
	}

	[Token(Token = "0x6002DCA")]
	[OnSerialized]
	private void OnSerialized(StreamingContext context)
	{
	}

	[Token(Token = "0x6002DCB")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext context)
	{
	}
}
