// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Hashtable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x200061F")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(HashtableDebugView))]
public class Hashtable : IDictionary, ICollection, IEnumerable, ISerializable, IDeserializationCallback, ICloneable
{
	[Token(Token = "0x2000620")]
	private struct bucket
	{
		[Token(Token = "0x4001ABC")]
		[FieldOffset(Offset = "0x0")]
		public object key;

		[Token(Token = "0x4001ABD")]
		[FieldOffset(Offset = "0x8")]
		public object val;

		[Token(Token = "0x4001ABE")]
		[FieldOffset(Offset = "0x10")]
		public int hash_coll;
	}

	[Serializable]
	[Token(Token = "0x2000621")]
	private class KeyCollection : ICollection, IEnumerable
	{
		[Token(Token = "0x4001ABF")]
		[FieldOffset(Offset = "0x10")]
		private Hashtable _hashtable;

		[Token(Token = "0x17000798")]
		public virtual bool IsSynchronized
		{
			[Token(Token = "0x6003053")]
			[Address(RVA = "0x3C8D6F0", Offset = "0x3C8D6F0", VA = "0x3C8D6F0", Slot = "11")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000799")]
		public virtual object SyncRoot
		{
			[Token(Token = "0x6003054")]
			[Address(RVA = "0x3C8D720", Offset = "0x3C8D720", VA = "0x3C8D720", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700079A")]
		public virtual int Count
		{
			[Token(Token = "0x6003055")]
			[Address(RVA = "0x3C8D750", Offset = "0x3C8D750", VA = "0x3C8D750", Slot = "13")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6003050")]
		[Address(RVA = "0x3C8C100", Offset = "0x3C8C100", VA = "0x3C8C100")]
		internal KeyCollection(Hashtable hashtable)
		{
		}

		[Token(Token = "0x6003051")]
		[Address(RVA = "0x3C8D4F0", Offset = "0x3C8D4F0", VA = "0x3C8D4F0", Slot = "9")]
		public virtual void CopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x6003052")]
		[Address(RVA = "0x3C8D660", Offset = "0x3C8D660", VA = "0x3C8D660", Slot = "10")]
		public virtual IEnumerator GetEnumerator()
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x2000622")]
	private class ValueCollection : ICollection, IEnumerable
	{
		[Token(Token = "0x4001AC0")]
		[FieldOffset(Offset = "0x10")]
		private Hashtable _hashtable;

		[Token(Token = "0x1700079B")]
		public virtual bool IsSynchronized
		{
			[Token(Token = "0x6003059")]
			[Address(RVA = "0x3C8D970", Offset = "0x3C8D970", VA = "0x3C8D970", Slot = "11")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700079C")]
		public virtual object SyncRoot
		{
			[Token(Token = "0x600305A")]
			[Address(RVA = "0x3C8D9A0", Offset = "0x3C8D9A0", VA = "0x3C8D9A0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700079D")]
		public virtual int Count
		{
			[Token(Token = "0x600305B")]
			[Address(RVA = "0x3C8D9D0", Offset = "0x3C8D9D0", VA = "0x3C8D9D0", Slot = "13")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6003056")]
		[Address(RVA = "0x3C8C1C0", Offset = "0x3C8C1C0", VA = "0x3C8C1C0")]
		internal ValueCollection(Hashtable hashtable)
		{
		}

		[Token(Token = "0x6003057")]
		[Address(RVA = "0x3C8D770", Offset = "0x3C8D770", VA = "0x3C8D770", Slot = "9")]
		public virtual void CopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x6003058")]
		[Address(RVA = "0x3C8D8E0", Offset = "0x3C8D8E0", VA = "0x3C8D8E0", Slot = "10")]
		public virtual IEnumerator GetEnumerator()
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x2000623")]
	private class SyncHashtable : Hashtable, IEnumerable
	{
		[Token(Token = "0x4001AC1")]
		[FieldOffset(Offset = "0x50")]
		protected Hashtable _table;

		[Token(Token = "0x1700079E")]
		public override int Count
		{
			[Token(Token = "0x600305F")]
			[Address(RVA = "0x3C8DA70", Offset = "0x3C8DA70", VA = "0x3C8DA70", Slot = "41")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700079F")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6003060")]
			[Address(RVA = "0x3C8DAA0", Offset = "0x3C8DAA0", VA = "0x3C8DAA0", Slot = "33")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170007A0")]
		public override bool IsFixedSize
		{
			[Token(Token = "0x6003061")]
			[Address(RVA = "0x3C8DAD0", Offset = "0x3C8DAD0", VA = "0x3C8DAD0", Slot = "34")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170007A1")]
		public override bool IsSynchronized
		{
			[Token(Token = "0x6003062")]
			[Address(RVA = "0x3C8DB00", Offset = "0x3C8DB00", VA = "0x3C8DB00", Slot = "35")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170007A2")]
		public override object this[object key]
		{
			[Token(Token = "0x6003063")]
			[Address(RVA = "0x3C8DB10", Offset = "0x3C8DB10", VA = "0x3C8DB10", Slot = "29")]
			get
			{
				return null;
			}
			[Token(Token = "0x6003064")]
			[Address(RVA = "0x3C8DB40", Offset = "0x3C8DB40", VA = "0x3C8DB40", Slot = "30")]
			set
			{
			}
		}

		[Token(Token = "0x170007A3")]
		public override object SyncRoot
		{
			[Token(Token = "0x6003065")]
			[Address(RVA = "0x3C8DC40", Offset = "0x3C8DC40", VA = "0x3C8DC40", Slot = "40")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007A4")]
		public override ICollection Keys
		{
			[Token(Token = "0x600306E")]
			[Address(RVA = "0x3C8E200", Offset = "0x3C8E200", VA = "0x3C8E200", Slot = "37")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007A5")]
		public override ICollection Values
		{
			[Token(Token = "0x600306F")]
			[Address(RVA = "0x3C8E310", Offset = "0x3C8E310", VA = "0x3C8E310", Slot = "38")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600305C")]
		[Address(RVA = "0x3C8C560", Offset = "0x3C8C560", VA = "0x3C8C560")]
		internal SyncHashtable(Hashtable table)
		{
		}

		[Token(Token = "0x600305D")]
		[Address(RVA = "0x3C8D9F0", Offset = "0x3C8D9F0", VA = "0x3C8D9F0")]
		internal SyncHashtable(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x600305E")]
		[Address(RVA = "0x3C8DA30", Offset = "0x3C8DA30", VA = "0x3C8DA30", Slot = "42")]
		public override void GetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6003066")]
		[Address(RVA = "0x3C8DC70", Offset = "0x3C8DC70", VA = "0x3C8DC70", Slot = "23")]
		public override void Add(object key, object value)
		{
		}

		[Token(Token = "0x6003067")]
		[Address(RVA = "0x3C8DD70", Offset = "0x3C8DD70", VA = "0x3C8DD70", Slot = "24")]
		public override void Clear()
		{
		}

		[Token(Token = "0x6003068")]
		[Address(RVA = "0x3C8DE60", Offset = "0x3C8DE60", VA = "0x3C8DE60", Slot = "26")]
		public override bool Contains(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x6003069")]
		[Address(RVA = "0x3C8DE90", Offset = "0x3C8DE90", VA = "0x3C8DE90", Slot = "27")]
		public override bool ContainsKey(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x600306A")]
		[Address(RVA = "0x3C8DF20", Offset = "0x3C8DF20", VA = "0x3C8DF20", Slot = "28")]
		public override void CopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x600306B")]
		[Address(RVA = "0x3C8E020", Offset = "0x3C8E020", VA = "0x3C8E020", Slot = "25")]
		public override object Clone()
		{
			return null;
		}

		[Token(Token = "0x600306C")]
		[Address(RVA = "0x3C8E1A0", Offset = "0x3C8E1A0", VA = "0x3C8E1A0", Slot = "19")]
		private new IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600306D")]
		[Address(RVA = "0x3C8E1D0", Offset = "0x3C8E1D0", VA = "0x3C8E1D0", Slot = "31")]
		public override IDictionaryEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6003070")]
		[Address(RVA = "0x3C8E420", Offset = "0x3C8E420", VA = "0x3C8E420", Slot = "39")]
		public override void Remove(object key)
		{
		}

		[Token(Token = "0x6003071")]
		[Address(RVA = "0x3C8E520", Offset = "0x3C8E520", VA = "0x3C8E520", Slot = "43")]
		public override void OnDeserialization(object sender)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000624")]
	private class HashtableEnumerator : IDictionaryEnumerator, IEnumerator, ICloneable
	{
		[Token(Token = "0x4001AC2")]
		[FieldOffset(Offset = "0x10")]
		private Hashtable _hashtable;

		[Token(Token = "0x4001AC3")]
		[FieldOffset(Offset = "0x18")]
		private int _bucket;

		[Token(Token = "0x4001AC4")]
		[FieldOffset(Offset = "0x1C")]
		private int _version;

		[Token(Token = "0x4001AC5")]
		[FieldOffset(Offset = "0x20")]
		private bool _current;

		[Token(Token = "0x4001AC6")]
		[FieldOffset(Offset = "0x24")]
		private int _getObjectRetType;

		[Token(Token = "0x4001AC7")]
		[FieldOffset(Offset = "0x28")]
		private object _currentKey;

		[Token(Token = "0x4001AC8")]
		[FieldOffset(Offset = "0x30")]
		private object _currentValue;

		[Token(Token = "0x170007A6")]
		public virtual object Key
		{
			[Token(Token = "0x6003074")]
			[Address(RVA = "0x3C8E540", Offset = "0x3C8E540", VA = "0x3C8E540", Slot = "11")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007A7")]
		public virtual DictionaryEntry Entry
		{
			[Token(Token = "0x6003076")]
			[Address(RVA = "0x3C8E700", Offset = "0x3C8E700", VA = "0x3C8E700", Slot = "13")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x170007A8")]
		public virtual object Current
		{
			[Token(Token = "0x6003077")]
			[Address(RVA = "0x3C8E7A0", Offset = "0x3C8E7A0", VA = "0x3C8E7A0", Slot = "14")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007A9")]
		public virtual object Value
		{
			[Token(Token = "0x6003078")]
			[Address(RVA = "0x3C8E890", Offset = "0x3C8E890", VA = "0x3C8E890", Slot = "15")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003072")]
		[Address(RVA = "0x3C8BD70", Offset = "0x3C8BD70", VA = "0x3C8BD70")]
		internal HashtableEnumerator(Hashtable hashtable, int getObjRetType)
		{
		}

		[Token(Token = "0x6003073")]
		[Address(RVA = "0x3C8E530", Offset = "0x3C8E530", VA = "0x3C8E530", Slot = "10")]
		public object Clone()
		{
			return null;
		}

		[Token(Token = "0x6003075")]
		[Address(RVA = "0x3C8E5A0", Offset = "0x3C8E5A0", VA = "0x3C8E5A0", Slot = "12")]
		public virtual bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003079")]
		[Address(RVA = "0x3C8E8F0", Offset = "0x3C8E8F0", VA = "0x3C8E8F0", Slot = "16")]
		public virtual void Reset()
		{
		}
	}

	[Token(Token = "0x2000625")]
	internal class HashtableDebugView
	{
	}

	[Token(Token = "0x4001AA6")]
	internal const int HashPrime = 101;

	[Token(Token = "0x4001AA7")]
	private const int InitialSize = 3;

	[Token(Token = "0x4001AA8")]
	private const string LoadFactorName = "LoadFactor";

	[Token(Token = "0x4001AA9")]
	private const string VersionName = "Version";

	[Token(Token = "0x4001AAA")]
	private const string ComparerName = "Comparer";

	[Token(Token = "0x4001AAB")]
	private const string HashCodeProviderName = "HashCodeProvider";

	[Token(Token = "0x4001AAC")]
	private const string HashSizeName = "HashSize";

	[Token(Token = "0x4001AAD")]
	private const string KeysName = "Keys";

	[Token(Token = "0x4001AAE")]
	private const string ValuesName = "Values";

	[Token(Token = "0x4001AAF")]
	private const string KeyComparerName = "KeyComparer";

	[Token(Token = "0x4001AB0")]
	[FieldOffset(Offset = "0x10")]
	private bucket[] _buckets;

	[Token(Token = "0x4001AB1")]
	[FieldOffset(Offset = "0x18")]
	private int _count;

	[Token(Token = "0x4001AB2")]
	[FieldOffset(Offset = "0x1C")]
	private int _occupancy;

	[Token(Token = "0x4001AB3")]
	[FieldOffset(Offset = "0x20")]
	private int _loadsize;

	[Token(Token = "0x4001AB4")]
	[FieldOffset(Offset = "0x24")]
	private float _loadFactor;

	[Token(Token = "0x4001AB5")]
	[FieldOffset(Offset = "0x28")]
	private int _version;

	[Token(Token = "0x4001AB6")]
	[FieldOffset(Offset = "0x2C")]
	private bool _isWriterInProgress;

	[Token(Token = "0x4001AB7")]
	[FieldOffset(Offset = "0x30")]
	private ICollection _keys;

	[Token(Token = "0x4001AB8")]
	[FieldOffset(Offset = "0x38")]
	private ICollection _values;

	[Token(Token = "0x4001AB9")]
	[FieldOffset(Offset = "0x40")]
	private IEqualityComparer _keycomparer;

	[Token(Token = "0x4001ABA")]
	[FieldOffset(Offset = "0x48")]
	private object _syncRoot;

	[Token(Token = "0x4001ABB")]
	[FieldOffset(Offset = "0x0")]
	private static ConditionalWeakTable<object, SerializationInfo> s_serializationInfoTable;

	[Token(Token = "0x1700078F")]
	private static ConditionalWeakTable<object, SerializationInfo> SerializationInfoTable
	{
		[Token(Token = "0x6003026")]
		[Address(RVA = "0x3C8A480", Offset = "0x3C8A480", VA = "0x3C8A480")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000790")]
	public virtual object this[object key]
	{
		[Token(Token = "0x6003039")]
		[Address(RVA = "0x3C8B760", Offset = "0x3C8B760", VA = "0x3C8B760", Slot = "29")]
		get
		{
			return null;
		}
		[Token(Token = "0x600303A")]
		[Address(RVA = "0x3C8B9C0", Offset = "0x3C8B9C0", VA = "0x3C8B9C0", Slot = "30")]
		set
		{
		}
	}

	[Token(Token = "0x17000791")]
	public virtual bool IsReadOnly
	{
		[Token(Token = "0x6003042")]
		[Address(RVA = "0x3C8BF40", Offset = "0x3C8BF40", VA = "0x3C8BF40", Slot = "33")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000792")]
	public virtual bool IsFixedSize
	{
		[Token(Token = "0x6003043")]
		[Address(RVA = "0x3C8BF50", Offset = "0x3C8BF50", VA = "0x3C8BF50", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000793")]
	public virtual bool IsSynchronized
	{
		[Token(Token = "0x6003044")]
		[Address(RVA = "0x3C8BF60", Offset = "0x3C8BF60", VA = "0x3C8BF60", Slot = "35")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000794")]
	public virtual ICollection Keys
	{
		[Token(Token = "0x6003046")]
		[Address(RVA = "0x3C8C070", Offset = "0x3C8C070", VA = "0x3C8C070", Slot = "37")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000795")]
	public virtual ICollection Values
	{
		[Token(Token = "0x6003047")]
		[Address(RVA = "0x3C8C130", Offset = "0x3C8C130", VA = "0x3C8C130", Slot = "38")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000796")]
	public virtual object SyncRoot
	{
		[Token(Token = "0x600304B")]
		[Address(RVA = "0x3C8C420", Offset = "0x3C8C420", VA = "0x3C8C420", Slot = "40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000797")]
	public virtual int Count
	{
		[Token(Token = "0x600304C")]
		[Address(RVA = "0x3C8C4A0", Offset = "0x3C8C4A0", VA = "0x3C8C4A0", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003027")]
	[Address(RVA = "0x3C8A4D0", Offset = "0x3C8A4D0", VA = "0x3C8A4D0")]
	internal Hashtable(bool trash)
	{
	}

	[Token(Token = "0x6003028")]
	[Address(RVA = "0x3C8A4E0", Offset = "0x3C8A4E0", VA = "0x3C8A4E0")]
	public Hashtable()
	{
	}

	[Token(Token = "0x6003029")]
	[Address(RVA = "0x3C8A7D0", Offset = "0x3C8A7D0", VA = "0x3C8A7D0")]
	public Hashtable(int capacity)
	{
	}

	[Token(Token = "0x600302A")]
	[Address(RVA = "0x3C8A560", Offset = "0x3C8A560", VA = "0x3C8A560")]
	public Hashtable(int capacity, float loadFactor)
	{
	}

	[Token(Token = "0x600302B")]
	[Address(RVA = "0x3C8A7E0", Offset = "0x3C8A7E0", VA = "0x3C8A7E0")]
	public Hashtable(int capacity, float loadFactor, IEqualityComparer equalityComparer)
	{
	}

	[Token(Token = "0x600302C")]
	[Address(RVA = "0x3C8A810", Offset = "0x3C8A810", VA = "0x3C8A810")]
	public Hashtable(IEqualityComparer equalityComparer)
	{
	}

	[Token(Token = "0x600302D")]
	[Address(RVA = "0x3C8A8B0", Offset = "0x3C8A8B0", VA = "0x3C8A8B0")]
	public Hashtable(int capacity, IEqualityComparer equalityComparer)
	{
	}

	[Token(Token = "0x600302E")]
	[Address(RVA = "0x3C8A8F0", Offset = "0x3C8A8F0", VA = "0x3C8A8F0")]
	protected Hashtable(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600302F")]
	[Address(RVA = "0x3C8A9A0", Offset = "0x3C8A9A0", VA = "0x3C8A9A0")]
	private uint InitHash(object key, int hashsize, out uint seed, out uint incr)
	{
		return default(uint);
	}

	[Token(Token = "0x6003030")]
	[Address(RVA = "0x3C8A9E0", Offset = "0x3C8A9E0", VA = "0x3C8A9E0", Slot = "23")]
	public virtual void Add(object key, object value)
	{
	}

	[Token(Token = "0x6003031")]
	[Address(RVA = "0x3C8AEB0", Offset = "0x3C8AEB0", VA = "0x3C8AEB0", Slot = "24")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x6003032")]
	[Address(RVA = "0x3C8AFB0", Offset = "0x3C8AFB0", VA = "0x3C8AFB0", Slot = "25")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6003033")]
	[Address(RVA = "0x3C8B0E0", Offset = "0x3C8B0E0", VA = "0x3C8B0E0", Slot = "26")]
	public virtual bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6003034")]
	[Address(RVA = "0x3C8B100", Offset = "0x3C8B100", VA = "0x3C8B100", Slot = "27")]
	public virtual bool ContainsKey(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6003035")]
	[Address(RVA = "0x3C8B260", Offset = "0x3C8B260", VA = "0x3C8B260")]
	private void CopyKeys(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6003036")]
	[Address(RVA = "0x3C8B340", Offset = "0x3C8B340", VA = "0x3C8B340")]
	private void CopyEntries(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6003037")]
	[Address(RVA = "0x3C8B4F0", Offset = "0x3C8B4F0", VA = "0x3C8B4F0", Slot = "28")]
	public virtual void CopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6003038")]
	[Address(RVA = "0x3C8B680", Offset = "0x3C8B680", VA = "0x3C8B680")]
	private void CopyValues(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x600303B")]
	[Address(RVA = "0x3C8B9D0", Offset = "0x3C8B9D0", VA = "0x3C8B9D0")]
	private void expand()
	{
	}

	[Token(Token = "0x600303C")]
	[Address(RVA = "0x3C8BBE0", Offset = "0x3C8BBE0", VA = "0x3C8BBE0")]
	private void rehash()
	{
	}

	[Token(Token = "0x600303D")]
	[Address(RVA = "0x3C8AF90", Offset = "0x3C8AF90", VA = "0x3C8AF90")]
	private void UpdateVersion()
	{
	}

	[Token(Token = "0x600303E")]
	[Address(RVA = "0x3C8BAA0", Offset = "0x3C8BAA0", VA = "0x3C8BAA0")]
	private void rehash(int newsize)
	{
	}

	[Token(Token = "0x600303F")]
	[Address(RVA = "0x3C8BCE0", Offset = "0x3C8BCE0", VA = "0x3C8BCE0", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6003040")]
	[Address(RVA = "0x3C8BDD0", Offset = "0x3C8BDD0", VA = "0x3C8BDD0", Slot = "31")]
	public virtual IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6003041")]
	[Address(RVA = "0x3C8BE60", Offset = "0x3C8BE60", VA = "0x3C8BE60", Slot = "32")]
	protected virtual int GetHash(object key)
	{
		return default(int);
	}

	[Token(Token = "0x6003045")]
	[Address(RVA = "0x3C8BF70", Offset = "0x3C8BF70", VA = "0x3C8BF70", Slot = "36")]
	protected virtual bool KeyEquals(object item, object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6003048")]
	[Address(RVA = "0x3C8A9F0", Offset = "0x3C8A9F0", VA = "0x3C8A9F0")]
	private void Insert(object key, object nvalue, bool add)
	{
	}

	[Token(Token = "0x6003049")]
	[Address(RVA = "0x3C8BC00", Offset = "0x3C8BC00", VA = "0x3C8BC00")]
	private void putEntry(bucket[] newBuckets, object key, object nvalue, int hashcode)
	{
	}

	[Token(Token = "0x600304A")]
	[Address(RVA = "0x3C8C1F0", Offset = "0x3C8C1F0", VA = "0x3C8C1F0", Slot = "39")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public virtual void Remove(object key)
	{
	}

	[Token(Token = "0x600304D")]
	[Address(RVA = "0x3C8C4B0", Offset = "0x3C8C4B0", VA = "0x3C8C4B0")]
	public static Hashtable Synchronized(Hashtable table)
	{
		return null;
	}

	[Token(Token = "0x600304E")]
	[Address(RVA = "0x3C8C590", Offset = "0x3C8C590", VA = "0x3C8C590", Slot = "42")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600304F")]
	[Address(RVA = "0x3C8CB80", Offset = "0x3C8CB80", VA = "0x3C8CB80", Slot = "43")]
	public virtual void OnDeserialization(object sender)
	{
	}
}
