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
[Token(Token = "0x2000601")]
[DebuggerTypeProxy(typeof(System.Collections.Concurrent.IDictionaryDebugView<, >))]
[DebuggerDisplay("Count = {Count}")]
public class ConcurrentDictionary<TKey, TValue> : IDictionary<TKey, TValue>, ICollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable, IDictionary, ICollection, IReadOnlyDictionary<TKey, TValue>, IReadOnlyCollection<KeyValuePair<TKey, TValue>>
{
	[Token(Token = "0x2000602")]
	private sealed class Tables
	{
		[Token(Token = "0x40018F8")]
		[FieldOffset(Offset = "0x0")]
		internal readonly Node[] _buckets;

		[Token(Token = "0x40018F9")]
		[FieldOffset(Offset = "0x0")]
		internal readonly object[] _locks;

		[Token(Token = "0x40018FA")]
		[FieldOffset(Offset = "0x0")]
		internal int[] _countPerLock;

		[Token(Token = "0x6002DF2")]
		internal Tables(Node[] buckets, object[] locks, int[] countPerLock)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000603")]
	private sealed class Node
	{
		[Token(Token = "0x40018FB")]
		[FieldOffset(Offset = "0x0")]
		internal readonly TKey _key;

		[Token(Token = "0x40018FC")]
		[FieldOffset(Offset = "0x0")]
		internal TValue _value;

		[Token(Token = "0x40018FD")]
		[FieldOffset(Offset = "0x0")]
		internal Node _next;

		[Token(Token = "0x40018FE")]
		[FieldOffset(Offset = "0x0")]
		internal readonly int _hashcode;

		[Token(Token = "0x6002DF3")]
		internal Node(TKey key, TValue value, int hashcode, Node next)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000604")]
	private sealed class DictionaryEnumerator : IDictionaryEnumerator, IEnumerator
	{
		[Token(Token = "0x40018FF")]
		[FieldOffset(Offset = "0x0")]
		private IEnumerator<KeyValuePair<TKey, TValue>> _enumerator;

		[Token(Token = "0x17000750")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x6002DF5")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x17000751")]
		public object Key
		{
			[Token(Token = "0x6002DF6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000752")]
		public object Value
		{
			[Token(Token = "0x6002DF7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000753")]
		public object Current
		{
			[Token(Token = "0x6002DF8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002DF4")]
		internal DictionaryEnumerator(ConcurrentDictionary<TKey, TValue> dictionary)
		{
		}

		[Token(Token = "0x6002DF9")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002DFA")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x2000605")]
	[CompilerGenerated]
	private sealed class _003CGetEnumerator_003Ed__35 : IEnumerator<KeyValuePair<TKey, TValue>>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4001900")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001901")]
		[FieldOffset(Offset = "0x0")]
		private KeyValuePair<TKey, TValue> _003C_003E2__current;

		[Token(Token = "0x4001902")]
		[FieldOffset(Offset = "0x0")]
		public ConcurrentDictionary<TKey, TValue> _003C_003E4__this;

		[Token(Token = "0x4001903")]
		[FieldOffset(Offset = "0x0")]
		private Node[] _003Cbuckets_003E5__2;

		[Token(Token = "0x4001904")]
		[FieldOffset(Offset = "0x0")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x4001905")]
		[FieldOffset(Offset = "0x0")]
		private Node _003Ccurrent_003E5__4;

		[Token(Token = "0x17000754")]
		private KeyValuePair<TKey, TValue> System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ECurrent
		{
			[Token(Token = "0x6002DFE")]
			[DebuggerHidden]
			get
			{
				return default(KeyValuePair<TKey, TValue>);
			}
		}

		[Token(Token = "0x17000755")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002E00")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002DFB")]
		[DebuggerHidden]
		public _003CGetEnumerator_003Ed__35(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002DFC")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002DFD")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002DFF")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[NonSerialized]
	[Token(Token = "0x40018F0")]
	[FieldOffset(Offset = "0x0")]
	private Tables _tables;

	[Token(Token = "0x40018F1")]
	[FieldOffset(Offset = "0x0")]
	private IEqualityComparer<TKey> _comparer;

	[NonSerialized]
	[Token(Token = "0x40018F2")]
	[FieldOffset(Offset = "0x0")]
	private readonly bool _growLockArray;

	[NonSerialized]
	[Token(Token = "0x40018F3")]
	[FieldOffset(Offset = "0x0")]
	private int _budget;

	[Token(Token = "0x40018F4")]
	[FieldOffset(Offset = "0x0")]
	private KeyValuePair<TKey, TValue>[] _serializationArray;

	[Token(Token = "0x40018F5")]
	[FieldOffset(Offset = "0x0")]
	private int _serializationConcurrencyLevel;

	[Token(Token = "0x40018F6")]
	[FieldOffset(Offset = "0x0")]
	private int _serializationCapacity;

	[Token(Token = "0x40018F7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly bool s_isValueWriteAtomic;

	[Token(Token = "0x17000741")]
	public TValue this[TKey key]
	{
		[Token(Token = "0x6002DC5")]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x6002DC6")]
		set
		{
		}
	}

	[Token(Token = "0x17000742")]
	public int Count
	{
		[Token(Token = "0x6002DC9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000743")]
	public ICollection<TKey> Keys
	{
		[Token(Token = "0x6002DCF")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000744")]
	private IEnumerable<TKey> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EKeys
	{
		[Token(Token = "0x6002DD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000745")]
	public ICollection<TValue> Values
	{
		[Token(Token = "0x6002DD1")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000746")]
	private IEnumerable<TValue> System_002ECollections_002EGeneric_002EIReadOnlyDictionary_003CTKey_002CTValue_003E_002EValues
	{
		[Token(Token = "0x6002DD2")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000747")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x6002DD5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000748")]
	private bool System_002ECollections_002EIDictionary_002EIsFixedSize
	{
		[Token(Token = "0x6002DDB")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000749")]
	private bool System_002ECollections_002EIDictionary_002EIsReadOnly
	{
		[Token(Token = "0x6002DDC")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700074A")]
	private ICollection System_002ECollections_002EIDictionary_002EKeys
	{
		[Token(Token = "0x6002DDD")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700074B")]
	private ICollection System_002ECollections_002EIDictionary_002EValues
	{
		[Token(Token = "0x6002DDF")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IDictionary.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x1700074C")]
	[Token(Token = "0x6002DE0")]
	private object System_002ECollections_002EIDictionary_002Eget_Item(object key)
	{
		return null;
	}

	[Token(Token = "0x6002DE1")]
	private void System_002ECollections_002EIDictionary_002Eset_Item(object key, object value)
	{
	}

	[Token(Token = "0x1700074D")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002DE3")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700074E")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002DE4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700074F")]
	private static int DefaultConcurrencyLevel
	{
		[Token(Token = "0x6002DE8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002DB2")]
	private static bool IsValueWriteAtomic()
	{
		return default(bool);
	}

	[Token(Token = "0x6002DB3")]
	public ConcurrentDictionary()
	{
	}

	[Token(Token = "0x6002DB4")]
	public ConcurrentDictionary(IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6002DB5")]
	private void InitializeFromCollection(IEnumerable<KeyValuePair<TKey, TValue>> collection)
	{
	}

	[Token(Token = "0x6002DB6")]
	internal ConcurrentDictionary(int concurrencyLevel, int capacity, bool growLockArray, IEqualityComparer<TKey> comparer)
	{
	}

	[Token(Token = "0x6002DB7")]
	public bool TryAdd(TKey key, TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DB8")]
	public bool ContainsKey(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DB9")]
	public bool TryRemove(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DBA")]
	private bool TryRemoveInternal(TKey key, out TValue value, bool matchValue, TValue oldValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DBB")]
	public bool TryGetValue(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DBC")]
	private bool TryGetValueInternal(TKey key, int hashcode, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DBD")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002DBE")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ECopyTo(KeyValuePair<TKey, TValue>[] array, int index)
	{
	}

	[Token(Token = "0x6002DBF")]
	public KeyValuePair<TKey, TValue>[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6002DC0")]
	private void CopyToPairs(KeyValuePair<TKey, TValue>[] array, int index)
	{
	}

	[Token(Token = "0x6002DC1")]
	private void CopyToEntries(DictionaryEntry[] array, int index)
	{
	}

	[Token(Token = "0x6002DC2")]
	private void CopyToObjects(object[] array, int index)
	{
	}

	[Token(Token = "0x6002DC3")]
	[IteratorStateMachine(typeof(ConcurrentDictionary<, >._003CGetEnumerator_003Ed__35))]
	public IEnumerator<KeyValuePair<TKey, TValue>> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002DC4")]
	private bool TryAddInternal(TKey key, int hashcode, TValue value, bool updateIfExists, bool acquireLock, out TValue resultingValue)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002DC7")]
	private static void ThrowKeyNotFoundException(object key)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002DC8")]
	private static void ThrowKeyNullException()
	{
	}

	[Token(Token = "0x6002DCA")]
	private int GetCountInternal()
	{
		return default(int);
	}

	[Token(Token = "0x6002DCB")]
	public TValue GetOrAdd(TKey key, Func<TKey, TValue> valueFactory)
	{
		return (TValue)null;
	}

	[Token(Token = "0x6002DCC")]
	public TValue GetOrAdd(TKey key, TValue value)
	{
		return (TValue)null;
	}

	[Token(Token = "0x6002DCD")]
	private void System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002EAdd(TKey key, TValue value)
	{
	}

	[Token(Token = "0x6002DCE")]
	private bool System_002ECollections_002EGeneric_002EIDictionary_003CTKey_002CTValue_003E_002ERemove(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DD3")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EAdd(KeyValuePair<TKey, TValue> keyValuePair)
	{
	}

	[Token(Token = "0x6002DD4")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002EContains(KeyValuePair<TKey, TValue> keyValuePair)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DD6")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ERemove(KeyValuePair<TKey, TValue> keyValuePair)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DD7")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002DD8")]
	private void System_002ECollections_002EIDictionary_002EAdd(object key, object value)
	{
	}

	[Token(Token = "0x6002DD9")]
	private bool System_002ECollections_002EIDictionary_002EContains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DDA")]
	private IDictionaryEnumerator System_002ECollections_002EIDictionary_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002DDE")]
	private void System_002ECollections_002EIDictionary_002ERemove(object key)
	{
	}

	[Token(Token = "0x6002DE2")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002DE5")]
	private void GrowTable(Tables tables)
	{
	}

	[Token(Token = "0x6002DE6")]
	private static int GetBucket(int hashcode, int bucketCount)
	{
		return default(int);
	}

	[Token(Token = "0x6002DE7")]
	private static void GetBucketAndLockNo(int hashcode, out int bucketNo, out int lockNo, int bucketCount, int lockCount)
	{
	}

	[Token(Token = "0x6002DE9")]
	private void AcquireAllLocks(ref int locksAcquired)
	{
	}

	[Token(Token = "0x6002DEA")]
	private void AcquireLocks(int fromInclusive, int toExclusive, ref int locksAcquired)
	{
	}

	[Token(Token = "0x6002DEB")]
	private void ReleaseLocks(int fromInclusive, int toExclusive)
	{
	}

	[Token(Token = "0x6002DEC")]
	private ReadOnlyCollection<TKey> GetKeys()
	{
		return null;
	}

	[Token(Token = "0x6002DED")]
	private ReadOnlyCollection<TValue> GetValues()
	{
		return null;
	}

	[Token(Token = "0x6002DEE")]
	[OnSerializing]
	private void OnSerializing(StreamingContext context)
	{
	}

	[Token(Token = "0x6002DEF")]
	[OnSerialized]
	private void OnSerialized(StreamingContext context)
	{
	}

	[Token(Token = "0x6002DF0")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext context)
	{
	}
}
