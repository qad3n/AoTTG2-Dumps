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
			[Address(RVA = "0x4FA7BD0", Offset = "0x4FA7BD0", VA = "0x4FA7BD0", Slot = "11")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000799")]
		public virtual object SyncRoot
		{
			[Token(Token = "0x6003054")]
			[Address(RVA = "0x4FA7C00", Offset = "0x4FA7C00", VA = "0x4FA7C00", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700079A")]
		public virtual int Count
		{
			[Token(Token = "0x6003055")]
			[Address(RVA = "0x4FA7C30", Offset = "0x4FA7C30", VA = "0x4FA7C30", Slot = "13")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6003050")]
		[Address(RVA = "0x4FA65E0", Offset = "0x4FA65E0", VA = "0x4FA65E0")]
		internal KeyCollection(Hashtable hashtable)
		{
		}

		[Token(Token = "0x6003051")]
		[Address(RVA = "0x4FA79D0", Offset = "0x4FA79D0", VA = "0x4FA79D0", Slot = "9")]
		public virtual void CopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x6003052")]
		[Address(RVA = "0x4FA7B40", Offset = "0x4FA7B40", VA = "0x4FA7B40", Slot = "10")]
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
			[Address(RVA = "0x4FA7E50", Offset = "0x4FA7E50", VA = "0x4FA7E50", Slot = "11")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700079C")]
		public virtual object SyncRoot
		{
			[Token(Token = "0x600305A")]
			[Address(RVA = "0x4FA7E80", Offset = "0x4FA7E80", VA = "0x4FA7E80", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700079D")]
		public virtual int Count
		{
			[Token(Token = "0x600305B")]
			[Address(RVA = "0x4FA7EB0", Offset = "0x4FA7EB0", VA = "0x4FA7EB0", Slot = "13")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6003056")]
		[Address(RVA = "0x4FA66A0", Offset = "0x4FA66A0", VA = "0x4FA66A0")]
		internal ValueCollection(Hashtable hashtable)
		{
		}

		[Token(Token = "0x6003057")]
		[Address(RVA = "0x4FA7C50", Offset = "0x4FA7C50", VA = "0x4FA7C50", Slot = "9")]
		public virtual void CopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x6003058")]
		[Address(RVA = "0x4FA7DC0", Offset = "0x4FA7DC0", VA = "0x4FA7DC0", Slot = "10")]
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
			[Address(RVA = "0x4FA7F50", Offset = "0x4FA7F50", VA = "0x4FA7F50", Slot = "41")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700079F")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6003060")]
			[Address(RVA = "0x4FA7F80", Offset = "0x4FA7F80", VA = "0x4FA7F80", Slot = "33")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170007A0")]
		public override bool IsFixedSize
		{
			[Token(Token = "0x6003061")]
			[Address(RVA = "0x4FA7FB0", Offset = "0x4FA7FB0", VA = "0x4FA7FB0", Slot = "34")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170007A1")]
		public override bool IsSynchronized
		{
			[Token(Token = "0x6003062")]
			[Address(RVA = "0x4FA7FE0", Offset = "0x4FA7FE0", VA = "0x4FA7FE0", Slot = "35")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170007A2")]
		public override object this[object key]
		{
			[Token(Token = "0x6003063")]
			[Address(RVA = "0x4FA7FF0", Offset = "0x4FA7FF0", VA = "0x4FA7FF0", Slot = "29")]
			get
			{
				return null;
			}
			[Token(Token = "0x6003064")]
			[Address(RVA = "0x4FA8020", Offset = "0x4FA8020", VA = "0x4FA8020", Slot = "30")]
			set
			{
			}
		}

		[Token(Token = "0x170007A3")]
		public override object SyncRoot
		{
			[Token(Token = "0x6003065")]
			[Address(RVA = "0x4FA8120", Offset = "0x4FA8120", VA = "0x4FA8120", Slot = "40")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007A4")]
		public override ICollection Keys
		{
			[Token(Token = "0x600306E")]
			[Address(RVA = "0x4FA86E0", Offset = "0x4FA86E0", VA = "0x4FA86E0", Slot = "37")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007A5")]
		public override ICollection Values
		{
			[Token(Token = "0x600306F")]
			[Address(RVA = "0x4FA87F0", Offset = "0x4FA87F0", VA = "0x4FA87F0", Slot = "38")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600305C")]
		[Address(RVA = "0x4FA6A40", Offset = "0x4FA6A40", VA = "0x4FA6A40")]
		internal SyncHashtable(Hashtable table)
		{
		}

		[Token(Token = "0x600305D")]
		[Address(RVA = "0x4FA7ED0", Offset = "0x4FA7ED0", VA = "0x4FA7ED0")]
		internal SyncHashtable(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x600305E")]
		[Address(RVA = "0x4FA7F10", Offset = "0x4FA7F10", VA = "0x4FA7F10", Slot = "42")]
		public override void GetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6003066")]
		[Address(RVA = "0x4FA8150", Offset = "0x4FA8150", VA = "0x4FA8150", Slot = "23")]
		public override void Add(object key, object value)
		{
		}

		[Token(Token = "0x6003067")]
		[Address(RVA = "0x4FA8250", Offset = "0x4FA8250", VA = "0x4FA8250", Slot = "24")]
		public override void Clear()
		{
		}

		[Token(Token = "0x6003068")]
		[Address(RVA = "0x4FA8340", Offset = "0x4FA8340", VA = "0x4FA8340", Slot = "26")]
		public override bool Contains(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x6003069")]
		[Address(RVA = "0x4FA8370", Offset = "0x4FA8370", VA = "0x4FA8370", Slot = "27")]
		public override bool ContainsKey(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x600306A")]
		[Address(RVA = "0x4FA8400", Offset = "0x4FA8400", VA = "0x4FA8400", Slot = "28")]
		public override void CopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x600306B")]
		[Address(RVA = "0x4FA8500", Offset = "0x4FA8500", VA = "0x4FA8500", Slot = "25")]
		public override object Clone()
		{
			return null;
		}

		[Token(Token = "0x600306C")]
		[Address(RVA = "0x4FA8680", Offset = "0x4FA8680", VA = "0x4FA8680", Slot = "19")]
		private new IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600306D")]
		[Address(RVA = "0x4FA86B0", Offset = "0x4FA86B0", VA = "0x4FA86B0", Slot = "31")]
		public override IDictionaryEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6003070")]
		[Address(RVA = "0x4FA8900", Offset = "0x4FA8900", VA = "0x4FA8900", Slot = "39")]
		public override void Remove(object key)
		{
		}

		[Token(Token = "0x6003071")]
		[Address(RVA = "0x4FA8A00", Offset = "0x4FA8A00", VA = "0x4FA8A00", Slot = "43")]
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
			[Address(RVA = "0x4FA8A20", Offset = "0x4FA8A20", VA = "0x4FA8A20", Slot = "11")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007A7")]
		public virtual DictionaryEntry Entry
		{
			[Token(Token = "0x6003076")]
			[Address(RVA = "0x4FA8BE0", Offset = "0x4FA8BE0", VA = "0x4FA8BE0", Slot = "13")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x170007A8")]
		public virtual object Current
		{
			[Token(Token = "0x6003077")]
			[Address(RVA = "0x4FA8C80", Offset = "0x4FA8C80", VA = "0x4FA8C80", Slot = "14")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007A9")]
		public virtual object Value
		{
			[Token(Token = "0x6003078")]
			[Address(RVA = "0x4FA8D70", Offset = "0x4FA8D70", VA = "0x4FA8D70", Slot = "15")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003072")]
		[Address(RVA = "0x4FA6250", Offset = "0x4FA6250", VA = "0x4FA6250")]
		internal HashtableEnumerator(Hashtable hashtable, int getObjRetType)
		{
		}

		[Token(Token = "0x6003073")]
		[Address(RVA = "0x4FA8A10", Offset = "0x4FA8A10", VA = "0x4FA8A10", Slot = "10")]
		public object Clone()
		{
			return null;
		}

		[Token(Token = "0x6003075")]
		[Address(RVA = "0x4FA8A80", Offset = "0x4FA8A80", VA = "0x4FA8A80", Slot = "12")]
		public virtual bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003079")]
		[Address(RVA = "0x4FA8DD0", Offset = "0x4FA8DD0", VA = "0x4FA8DD0", Slot = "16")]
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
		[Address(RVA = "0x4FA4960", Offset = "0x4FA4960", VA = "0x4FA4960")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000790")]
	public virtual object this[object key]
	{
		[Token(Token = "0x6003039")]
		[Address(RVA = "0x4FA5C40", Offset = "0x4FA5C40", VA = "0x4FA5C40", Slot = "29")]
		get
		{
			return null;
		}
		[Token(Token = "0x600303A")]
		[Address(RVA = "0x4FA5EA0", Offset = "0x4FA5EA0", VA = "0x4FA5EA0", Slot = "30")]
		set
		{
		}
	}

	[Token(Token = "0x17000791")]
	public virtual bool IsReadOnly
	{
		[Token(Token = "0x6003042")]
		[Address(RVA = "0x4FA6420", Offset = "0x4FA6420", VA = "0x4FA6420", Slot = "33")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000792")]
	public virtual bool IsFixedSize
	{
		[Token(Token = "0x6003043")]
		[Address(RVA = "0x4FA6430", Offset = "0x4FA6430", VA = "0x4FA6430", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000793")]
	public virtual bool IsSynchronized
	{
		[Token(Token = "0x6003044")]
		[Address(RVA = "0x4FA6440", Offset = "0x4FA6440", VA = "0x4FA6440", Slot = "35")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000794")]
	public virtual ICollection Keys
	{
		[Token(Token = "0x6003046")]
		[Address(RVA = "0x4FA6550", Offset = "0x4FA6550", VA = "0x4FA6550", Slot = "37")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000795")]
	public virtual ICollection Values
	{
		[Token(Token = "0x6003047")]
		[Address(RVA = "0x4FA6610", Offset = "0x4FA6610", VA = "0x4FA6610", Slot = "38")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000796")]
	public virtual object SyncRoot
	{
		[Token(Token = "0x600304B")]
		[Address(RVA = "0x4FA6900", Offset = "0x4FA6900", VA = "0x4FA6900", Slot = "40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000797")]
	public virtual int Count
	{
		[Token(Token = "0x600304C")]
		[Address(RVA = "0x4FA6980", Offset = "0x4FA6980", VA = "0x4FA6980", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003027")]
	[Address(RVA = "0x4FA49B0", Offset = "0x4FA49B0", VA = "0x4FA49B0")]
	internal Hashtable(bool trash)
	{
	}

	[Token(Token = "0x6003028")]
	[Address(RVA = "0x4FA49C0", Offset = "0x4FA49C0", VA = "0x4FA49C0")]
	public Hashtable()
	{
	}

	[Token(Token = "0x6003029")]
	[Address(RVA = "0x4FA4CB0", Offset = "0x4FA4CB0", VA = "0x4FA4CB0")]
	public Hashtable(int capacity)
	{
	}

	[Token(Token = "0x600302A")]
	[Address(RVA = "0x4FA4A40", Offset = "0x4FA4A40", VA = "0x4FA4A40")]
	public Hashtable(int capacity, float loadFactor)
	{
	}

	[Token(Token = "0x600302B")]
	[Address(RVA = "0x4FA4CC0", Offset = "0x4FA4CC0", VA = "0x4FA4CC0")]
	public Hashtable(int capacity, float loadFactor, IEqualityComparer equalityComparer)
	{
	}

	[Token(Token = "0x600302C")]
	[Address(RVA = "0x4FA4CF0", Offset = "0x4FA4CF0", VA = "0x4FA4CF0")]
	public Hashtable(IEqualityComparer equalityComparer)
	{
	}

	[Token(Token = "0x600302D")]
	[Address(RVA = "0x4FA4D90", Offset = "0x4FA4D90", VA = "0x4FA4D90")]
	public Hashtable(int capacity, IEqualityComparer equalityComparer)
	{
	}

	[Token(Token = "0x600302E")]
	[Address(RVA = "0x4FA4DD0", Offset = "0x4FA4DD0", VA = "0x4FA4DD0")]
	protected Hashtable(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600302F")]
	[Address(RVA = "0x4FA4E80", Offset = "0x4FA4E80", VA = "0x4FA4E80")]
	private uint InitHash(object key, int hashsize, out uint seed, out uint incr)
	{
		return default(uint);
	}

	[Token(Token = "0x6003030")]
	[Address(RVA = "0x4FA4EC0", Offset = "0x4FA4EC0", VA = "0x4FA4EC0", Slot = "23")]
	public virtual void Add(object key, object value)
	{
	}

	[Token(Token = "0x6003031")]
	[Address(RVA = "0x4FA5390", Offset = "0x4FA5390", VA = "0x4FA5390", Slot = "24")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x6003032")]
	[Address(RVA = "0x4FA5490", Offset = "0x4FA5490", VA = "0x4FA5490", Slot = "25")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6003033")]
	[Address(RVA = "0x4FA55C0", Offset = "0x4FA55C0", VA = "0x4FA55C0", Slot = "26")]
	public virtual bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6003034")]
	[Address(RVA = "0x4FA55E0", Offset = "0x4FA55E0", VA = "0x4FA55E0", Slot = "27")]
	public virtual bool ContainsKey(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6003035")]
	[Address(RVA = "0x4FA5740", Offset = "0x4FA5740", VA = "0x4FA5740")]
	private void CopyKeys(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6003036")]
	[Address(RVA = "0x4FA5820", Offset = "0x4FA5820", VA = "0x4FA5820")]
	private void CopyEntries(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6003037")]
	[Address(RVA = "0x4FA59D0", Offset = "0x4FA59D0", VA = "0x4FA59D0", Slot = "28")]
	public virtual void CopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6003038")]
	[Address(RVA = "0x4FA5B60", Offset = "0x4FA5B60", VA = "0x4FA5B60")]
	private void CopyValues(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x600303B")]
	[Address(RVA = "0x4FA5EB0", Offset = "0x4FA5EB0", VA = "0x4FA5EB0")]
	private void expand()
	{
	}

	[Token(Token = "0x600303C")]
	[Address(RVA = "0x4FA60C0", Offset = "0x4FA60C0", VA = "0x4FA60C0")]
	private void rehash()
	{
	}

	[Token(Token = "0x600303D")]
	[Address(RVA = "0x4FA5470", Offset = "0x4FA5470", VA = "0x4FA5470")]
	private void UpdateVersion()
	{
	}

	[Token(Token = "0x600303E")]
	[Address(RVA = "0x4FA5F80", Offset = "0x4FA5F80", VA = "0x4FA5F80")]
	private void rehash(int newsize)
	{
	}

	[Token(Token = "0x600303F")]
	[Address(RVA = "0x4FA61C0", Offset = "0x4FA61C0", VA = "0x4FA61C0", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6003040")]
	[Address(RVA = "0x4FA62B0", Offset = "0x4FA62B0", VA = "0x4FA62B0", Slot = "31")]
	public virtual IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6003041")]
	[Address(RVA = "0x4FA6340", Offset = "0x4FA6340", VA = "0x4FA6340", Slot = "32")]
	protected virtual int GetHash(object key)
	{
		return default(int);
	}

	[Token(Token = "0x6003045")]
	[Address(RVA = "0x4FA6450", Offset = "0x4FA6450", VA = "0x4FA6450", Slot = "36")]
	protected virtual bool KeyEquals(object item, object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6003048")]
	[Address(RVA = "0x4FA4ED0", Offset = "0x4FA4ED0", VA = "0x4FA4ED0")]
	private void Insert(object key, object nvalue, bool add)
	{
	}

	[Token(Token = "0x6003049")]
	[Address(RVA = "0x4FA60E0", Offset = "0x4FA60E0", VA = "0x4FA60E0")]
	private void putEntry(bucket[] newBuckets, object key, object nvalue, int hashcode)
	{
	}

	[Token(Token = "0x600304A")]
	[Address(RVA = "0x4FA66D0", Offset = "0x4FA66D0", VA = "0x4FA66D0", Slot = "39")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public virtual void Remove(object key)
	{
	}

	[Token(Token = "0x600304D")]
	[Address(RVA = "0x4FA6990", Offset = "0x4FA6990", VA = "0x4FA6990")]
	public static Hashtable Synchronized(Hashtable table)
	{
		return null;
	}

	[Token(Token = "0x600304E")]
	[Address(RVA = "0x4FA6A70", Offset = "0x4FA6A70", VA = "0x4FA6A70", Slot = "42")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600304F")]
	[Address(RVA = "0x4FA7060", Offset = "0x4FA7060", VA = "0x4FA7060", Slot = "43")]
	public virtual void OnDeserialization(object sender)
	{
	}
}
