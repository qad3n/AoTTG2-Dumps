// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Hashtable
// Update status: CHANGED in this game update
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
[Token(Token = "0x20005CE")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(HashtableDebugView))]
public class Hashtable : IDictionary, ICollection, IEnumerable, ISerializable, IDeserializationCallback, ICloneable
{
	[Token(Token = "0x20005CF")]
	private struct bucket
	{
		[Token(Token = "0x4001831")]
		[FieldOffset(Offset = "0x0")]
		public object key;

		[Token(Token = "0x4001832")]
		[FieldOffset(Offset = "0x8")]
		public object val;

		[Token(Token = "0x4001833")]
		[FieldOffset(Offset = "0x10")]
		public int hash_coll;
	}

	[Serializable]
	[Token(Token = "0x20005D0")]
	private class KeyCollection : ICollection, IEnumerable
	{
		[Token(Token = "0x4001834")]
		[FieldOffset(Offset = "0x10")]
		private Hashtable _hashtable;

		[Token(Token = "0x17000726")]
		public virtual bool IsSynchronized
		{
			[Token(Token = "0x6002D41")]
			[Address(RVA = "0x5460640", Offset = "0x545F640", VA = "0x5460640", Slot = "11")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000727")]
		public virtual object SyncRoot
		{
			[Token(Token = "0x6002D42")]
			[Address(RVA = "0x5460670", Offset = "0x545F670", VA = "0x5460670", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000728")]
		public virtual int Count
		{
			[Token(Token = "0x6002D43")]
			[Address(RVA = "0x54606A0", Offset = "0x545F6A0", VA = "0x54606A0", Slot = "13")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6002D3E")]
		[Address(RVA = "0x545F160", Offset = "0x545E160", VA = "0x545F160")]
		internal KeyCollection(Hashtable hashtable)
		{
		}

		[Token(Token = "0x6002D3F")]
		[Address(RVA = "0x5460440", Offset = "0x545F440", VA = "0x5460440", Slot = "9")]
		public virtual void CopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x6002D40")]
		[Address(RVA = "0x54605B0", Offset = "0x545F5B0", VA = "0x54605B0", Slot = "10")]
		public virtual IEnumerator GetEnumerator()
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x20005D1")]
	private class ValueCollection : ICollection, IEnumerable
	{
		[Token(Token = "0x4001835")]
		[FieldOffset(Offset = "0x10")]
		private Hashtable _hashtable;

		[Token(Token = "0x17000729")]
		public virtual bool IsSynchronized
		{
			[Token(Token = "0x6002D47")]
			[Address(RVA = "0x54608C0", Offset = "0x545F8C0", VA = "0x54608C0", Slot = "11")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700072A")]
		public virtual object SyncRoot
		{
			[Token(Token = "0x6002D48")]
			[Address(RVA = "0x54608F0", Offset = "0x545F8F0", VA = "0x54608F0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700072B")]
		public virtual int Count
		{
			[Token(Token = "0x6002D49")]
			[Address(RVA = "0x5460920", Offset = "0x545F920", VA = "0x5460920", Slot = "13")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6002D44")]
		[Address(RVA = "0x545F220", Offset = "0x545E220", VA = "0x545F220")]
		internal ValueCollection(Hashtable hashtable)
		{
		}

		[Token(Token = "0x6002D45")]
		[Address(RVA = "0x54606C0", Offset = "0x545F6C0", VA = "0x54606C0", Slot = "9")]
		public virtual void CopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x6002D46")]
		[Address(RVA = "0x5460830", Offset = "0x545F830", VA = "0x5460830", Slot = "10")]
		public virtual IEnumerator GetEnumerator()
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x20005D2")]
	private class SyncHashtable : Hashtable, IEnumerable
	{
		[Token(Token = "0x4001836")]
		[FieldOffset(Offset = "0x50")]
		protected Hashtable _table;

		[Token(Token = "0x1700072C")]
		public override int Count
		{
			[Token(Token = "0x6002D4D")]
			[Address(RVA = "0x54609C0", Offset = "0x545F9C0", VA = "0x54609C0", Slot = "41")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700072D")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6002D4E")]
			[Address(RVA = "0x54609F0", Offset = "0x545F9F0", VA = "0x54609F0", Slot = "33")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700072E")]
		public override bool IsFixedSize
		{
			[Token(Token = "0x6002D4F")]
			[Address(RVA = "0x5460A20", Offset = "0x545FA20", VA = "0x5460A20", Slot = "34")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700072F")]
		public override bool IsSynchronized
		{
			[Token(Token = "0x6002D50")]
			[Address(RVA = "0x5460A50", Offset = "0x545FA50", VA = "0x5460A50", Slot = "35")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000730")]
		public override object this[object key]
		{
			[Token(Token = "0x6002D51")]
			[Address(RVA = "0x5460A60", Offset = "0x545FA60", VA = "0x5460A60", Slot = "29")]
			get
			{
				return null;
			}
			[Token(Token = "0x6002D52")]
			[Address(RVA = "0x5460A90", Offset = "0x545FA90", VA = "0x5460A90", Slot = "30")]
			set
			{
			}
		}

		[Token(Token = "0x17000731")]
		public override object SyncRoot
		{
			[Token(Token = "0x6002D53")]
			[Address(RVA = "0x5460B90", Offset = "0x545FB90", VA = "0x5460B90", Slot = "40")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000732")]
		public override ICollection Keys
		{
			[Token(Token = "0x6002D5C")]
			[Address(RVA = "0x5461120", Offset = "0x5460120", VA = "0x5461120", Slot = "37")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000733")]
		public override ICollection Values
		{
			[Token(Token = "0x6002D5D")]
			[Address(RVA = "0x5461220", Offset = "0x5460220", VA = "0x5461220", Slot = "38")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002D4A")]
		[Address(RVA = "0x545F5E0", Offset = "0x545E5E0", VA = "0x545F5E0")]
		internal SyncHashtable(Hashtable table)
		{
		}

		[Token(Token = "0x6002D4B")]
		[Address(RVA = "0x5460940", Offset = "0x545F940", VA = "0x5460940")]
		internal SyncHashtable(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6002D4C")]
		[Address(RVA = "0x5460980", Offset = "0x545F980", VA = "0x5460980", Slot = "42")]
		public override void GetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6002D54")]
		[Address(RVA = "0x5460BC0", Offset = "0x545FBC0", VA = "0x5460BC0", Slot = "23")]
		public override void Add(object key, object value)
		{
		}

		[Token(Token = "0x6002D55")]
		[Address(RVA = "0x5460CC0", Offset = "0x545FCC0", VA = "0x5460CC0", Slot = "24")]
		public override void Clear()
		{
		}

		[Token(Token = "0x6002D56")]
		[Address(RVA = "0x5460DA0", Offset = "0x545FDA0", VA = "0x5460DA0", Slot = "26")]
		public override bool Contains(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x6002D57")]
		[Address(RVA = "0x5460DD0", Offset = "0x545FDD0", VA = "0x5460DD0", Slot = "27")]
		public override bool ContainsKey(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x6002D58")]
		[Address(RVA = "0x5460E60", Offset = "0x545FE60", VA = "0x5460E60", Slot = "28")]
		public override void CopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x6002D59")]
		[Address(RVA = "0x5460F60", Offset = "0x545FF60", VA = "0x5460F60", Slot = "25")]
		public override object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002D5A")]
		[Address(RVA = "0x54610C0", Offset = "0x54600C0", VA = "0x54610C0", Slot = "19")]
		private new IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002D5B")]
		[Address(RVA = "0x54610F0", Offset = "0x54600F0", VA = "0x54610F0", Slot = "31")]
		public override IDictionaryEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002D5E")]
		[Address(RVA = "0x5461320", Offset = "0x5460320", VA = "0x5461320", Slot = "39")]
		public override void Remove(object key)
		{
		}

		[Token(Token = "0x6002D5F")]
		[Address(RVA = "0x5461410", Offset = "0x5460410", VA = "0x5461410", Slot = "43")]
		public override void OnDeserialization(object sender)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20005D3")]
	private class HashtableEnumerator : IDictionaryEnumerator, IEnumerator, ICloneable
	{
		[Token(Token = "0x4001837")]
		[FieldOffset(Offset = "0x10")]
		private Hashtable _hashtable;

		[Token(Token = "0x4001838")]
		[FieldOffset(Offset = "0x18")]
		private int _bucket;

		[Token(Token = "0x4001839")]
		[FieldOffset(Offset = "0x1C")]
		private int _version;

		[Token(Token = "0x400183A")]
		[FieldOffset(Offset = "0x20")]
		private bool _current;

		[Token(Token = "0x400183B")]
		[FieldOffset(Offset = "0x24")]
		private int _getObjectRetType;

		[Token(Token = "0x400183C")]
		[FieldOffset(Offset = "0x28")]
		private object _currentKey;

		[Token(Token = "0x400183D")]
		[FieldOffset(Offset = "0x30")]
		private object _currentValue;

		[Token(Token = "0x17000734")]
		public virtual object Key
		{
			[Token(Token = "0x6002D62")]
			[Address(RVA = "0x5461430", Offset = "0x5460430", VA = "0x5461430", Slot = "11")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000735")]
		public virtual DictionaryEntry Entry
		{
			[Token(Token = "0x6002D64")]
			[Address(RVA = "0x54615A0", Offset = "0x54605A0", VA = "0x54615A0", Slot = "13")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x17000736")]
		public virtual object Current
		{
			[Token(Token = "0x6002D65")]
			[Address(RVA = "0x5461620", Offset = "0x5460620", VA = "0x5461620", Slot = "14")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000737")]
		public virtual object Value
		{
			[Token(Token = "0x6002D66")]
			[Address(RVA = "0x54616F0", Offset = "0x54606F0", VA = "0x54616F0", Slot = "15")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002D60")]
		[Address(RVA = "0x545EDD0", Offset = "0x545DDD0", VA = "0x545EDD0")]
		internal HashtableEnumerator(Hashtable hashtable, int getObjRetType)
		{
		}

		[Token(Token = "0x6002D61")]
		[Address(RVA = "0x5461420", Offset = "0x5460420", VA = "0x5461420", Slot = "10")]
		public object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002D63")]
		[Address(RVA = "0x5461490", Offset = "0x5460490", VA = "0x5461490", Slot = "12")]
		public virtual bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002D67")]
		[Address(RVA = "0x5461750", Offset = "0x5460750", VA = "0x5461750", Slot = "16")]
		public virtual void Reset()
		{
		}
	}

	[Token(Token = "0x20005D4")]
	internal class HashtableDebugView
	{
	}

	[Token(Token = "0x4001825")]
	[FieldOffset(Offset = "0x10")]
	private bucket[] _buckets;

	[Token(Token = "0x4001826")]
	[FieldOffset(Offset = "0x18")]
	private int _count;

	[Token(Token = "0x4001827")]
	[FieldOffset(Offset = "0x1C")]
	private int _occupancy;

	[Token(Token = "0x4001828")]
	[FieldOffset(Offset = "0x20")]
	private int _loadsize;

	[Token(Token = "0x4001829")]
	[FieldOffset(Offset = "0x24")]
	private float _loadFactor;

	[Token(Token = "0x400182A")]
	[FieldOffset(Offset = "0x28")]
	private int _version;

	[Token(Token = "0x400182B")]
	[FieldOffset(Offset = "0x2C")]
	private bool _isWriterInProgress;

	[Token(Token = "0x400182C")]
	[FieldOffset(Offset = "0x30")]
	private ICollection _keys;

	[Token(Token = "0x400182D")]
	[FieldOffset(Offset = "0x38")]
	private ICollection _values;

	[Token(Token = "0x400182E")]
	[FieldOffset(Offset = "0x40")]
	private IEqualityComparer _keycomparer;

	[Token(Token = "0x400182F")]
	[FieldOffset(Offset = "0x48")]
	private object _syncRoot;

	[Token(Token = "0x4001830")]
	[FieldOffset(Offset = "0x0")]
	private static ConditionalWeakTable<object, SerializationInfo> s_serializationInfoTable;

	[Token(Token = "0x1700071D")]
	private static ConditionalWeakTable<object, SerializationInfo> SerializationInfoTable
	{
		[Token(Token = "0x6002D14")]
		[Address(RVA = "0x545D4C0", Offset = "0x545C4C0", VA = "0x545D4C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700071E")]
	public virtual object this[object key]
	{
		[Token(Token = "0x6002D27")]
		[Address(RVA = "0x545E7D0", Offset = "0x545D7D0", VA = "0x545E7D0", Slot = "29")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002D28")]
		[Address(RVA = "0x545EA60", Offset = "0x545DA60", VA = "0x545EA60", Slot = "30")]
		set
		{
		}
	}

	[Token(Token = "0x1700071F")]
	public virtual bool IsReadOnly
	{
		[Token(Token = "0x6002D30")]
		[Address(RVA = "0x545EFA0", Offset = "0x545DFA0", VA = "0x545EFA0", Slot = "33")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000720")]
	public virtual bool IsFixedSize
	{
		[Token(Token = "0x6002D31")]
		[Address(RVA = "0x545EFB0", Offset = "0x545DFB0", VA = "0x545EFB0", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000721")]
	public virtual bool IsSynchronized
	{
		[Token(Token = "0x6002D32")]
		[Address(RVA = "0x545EFC0", Offset = "0x545DFC0", VA = "0x545EFC0", Slot = "35")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000722")]
	public virtual ICollection Keys
	{
		[Token(Token = "0x6002D34")]
		[Address(RVA = "0x545F0D0", Offset = "0x545E0D0", VA = "0x545F0D0", Slot = "37")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000723")]
	public virtual ICollection Values
	{
		[Token(Token = "0x6002D35")]
		[Address(RVA = "0x545F190", Offset = "0x545E190", VA = "0x545F190", Slot = "38")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000724")]
	public virtual object SyncRoot
	{
		[Token(Token = "0x6002D39")]
		[Address(RVA = "0x545F4A0", Offset = "0x545E4A0", VA = "0x545F4A0", Slot = "40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000725")]
	public virtual int Count
	{
		[Token(Token = "0x6002D3A")]
		[Address(RVA = "0x545F520", Offset = "0x545E520", VA = "0x545F520", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002D15")]
	[Address(RVA = "0x545D510", Offset = "0x545C510", VA = "0x545D510")]
	internal Hashtable(bool trash)
	{
	}

	[Token(Token = "0x6002D16")]
	[Address(RVA = "0x545D520", Offset = "0x545C520", VA = "0x545D520")]
	public Hashtable()
	{
	}

	[Token(Token = "0x6002D17")]
	[Address(RVA = "0x545D820", Offset = "0x545C820", VA = "0x545D820")]
	public Hashtable(int capacity)
	{
	}

	[Token(Token = "0x6002D18")]
	[Address(RVA = "0x545D5A0", Offset = "0x545C5A0", VA = "0x545D5A0")]
	public Hashtable(int capacity, float loadFactor)
	{
	}

	[Token(Token = "0x6002D19")]
	[Address(RVA = "0x545D830", Offset = "0x545C830", VA = "0x545D830")]
	public Hashtable(int capacity, float loadFactor, IEqualityComparer equalityComparer)
	{
	}

	[Token(Token = "0x6002D1A")]
	[Address(RVA = "0x545D860", Offset = "0x545C860", VA = "0x545D860")]
	public Hashtable(IEqualityComparer equalityComparer)
	{
	}

	[Token(Token = "0x6002D1B")]
	[Address(RVA = "0x545D900", Offset = "0x545C900", VA = "0x545D900")]
	public Hashtable(int capacity, IEqualityComparer equalityComparer)
	{
	}

	[Token(Token = "0x6002D1C")]
	[Address(RVA = "0x545D940", Offset = "0x545C940", VA = "0x545D940")]
	protected Hashtable(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002D1D")]
	[Address(RVA = "0x545D9F0", Offset = "0x545C9F0", VA = "0x545D9F0")]
	private uint InitHash(object key, int hashsize, out uint seed, out uint incr)
	{
		return default(uint);
	}

	[Token(Token = "0x6002D1E")]
	[Address(RVA = "0x545DA30", Offset = "0x545CA30", VA = "0x545DA30", Slot = "23")]
	public virtual void Add(object key, object value)
	{
	}

	[Token(Token = "0x6002D1F")]
	[Address(RVA = "0x545DF70", Offset = "0x545CF70", VA = "0x545DF70", Slot = "24")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x6002D20")]
	[Address(RVA = "0x545E080", Offset = "0x545D080", VA = "0x545E080", Slot = "25")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002D21")]
	[Address(RVA = "0x545E190", Offset = "0x545D190", VA = "0x545E190", Slot = "26")]
	public virtual bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D22")]
	[Address(RVA = "0x545E1B0", Offset = "0x545D1B0", VA = "0x545E1B0", Slot = "27")]
	public virtual bool ContainsKey(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D23")]
	[Address(RVA = "0x545E350", Offset = "0x545D350", VA = "0x545E350")]
	private void CopyKeys(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002D24")]
	[Address(RVA = "0x545E400", Offset = "0x545D400", VA = "0x545E400")]
	private void CopyEntries(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002D25")]
	[Address(RVA = "0x545E580", Offset = "0x545D580", VA = "0x545E580", Slot = "28")]
	public virtual void CopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002D26")]
	[Address(RVA = "0x545E710", Offset = "0x545D710", VA = "0x545E710")]
	private void CopyValues(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002D29")]
	[Address(RVA = "0x545EA70", Offset = "0x545DA70", VA = "0x545EA70")]
	private void expand()
	{
	}

	[Token(Token = "0x6002D2A")]
	[Address(RVA = "0x545EC10", Offset = "0x545DC10", VA = "0x545EC10")]
	private void rehash()
	{
	}

	[Token(Token = "0x6002D2B")]
	[Address(RVA = "0x545E060", Offset = "0x545D060", VA = "0x545E060")]
	private void UpdateVersion()
	{
	}

	[Token(Token = "0x6002D2C")]
	[Address(RVA = "0x545EAE0", Offset = "0x545DAE0", VA = "0x545EAE0")]
	private void rehash(int newsize)
	{
	}

	[Token(Token = "0x6002D2D")]
	[Address(RVA = "0x545ED40", Offset = "0x545DD40", VA = "0x545ED40", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002D2E")]
	[Address(RVA = "0x545EE30", Offset = "0x545DE30", VA = "0x545EE30", Slot = "31")]
	public virtual IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002D2F")]
	[Address(RVA = "0x545EEC0", Offset = "0x545DEC0", VA = "0x545EEC0", Slot = "32")]
	protected virtual int GetHash(object key)
	{
		return default(int);
	}

	[Token(Token = "0x6002D33")]
	[Address(RVA = "0x545EFD0", Offset = "0x545DFD0", VA = "0x545EFD0", Slot = "36")]
	protected virtual bool KeyEquals(object item, object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D36")]
	[Address(RVA = "0x545DA40", Offset = "0x545CA40", VA = "0x545DA40")]
	private void Insert(object key, object nvalue, bool add)
	{
	}

	[Token(Token = "0x6002D37")]
	[Address(RVA = "0x545EC30", Offset = "0x545DC30", VA = "0x545EC30")]
	private void putEntry(bucket[] newBuckets, object key, object nvalue, int hashcode)
	{
	}

	[Token(Token = "0x6002D38")]
	[Address(RVA = "0x545F250", Offset = "0x545E250", VA = "0x545F250", Slot = "39")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public virtual void Remove(object key)
	{
	}

	[Token(Token = "0x6002D3B")]
	[Address(RVA = "0x545F530", Offset = "0x545E530", VA = "0x545F530")]
	public static Hashtable Synchronized(Hashtable table)
	{
		return null;
	}

	[Token(Token = "0x6002D3C")]
	[Address(RVA = "0x545F610", Offset = "0x545E610", VA = "0x545F610", Slot = "42")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002D3D")]
	[Address(RVA = "0x545FB10", Offset = "0x545EB10", VA = "0x545FB10", Slot = "43")]
	public virtual void OnDeserialization(object sender)
	{
	}
}
