// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Specialized.NameObjectCollectionBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections.Specialized;

[Serializable]
[Token(Token = "0x200024F")]
public abstract class NameObjectCollectionBase : ICollection, IEnumerable, ISerializable, IDeserializationCallback
{
	[Token(Token = "0x2000250")]
	internal class NameObjectEntry
	{
		[Token(Token = "0x4000847")]
		[FieldOffset(Offset = "0x10")]
		internal string Key;

		[Token(Token = "0x4000848")]
		[FieldOffset(Offset = "0x18")]
		internal object Value;

		[Token(Token = "0x6001024")]
		[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
		internal NameObjectEntry(string name, object value)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000251")]
	internal class NameObjectKeysEnumerator : IEnumerator
	{
		[Token(Token = "0x4000849")]
		[FieldOffset(Offset = "0x10")]
		private int _pos;

		[Token(Token = "0x400084A")]
		[FieldOffset(Offset = "0x18")]
		private NameObjectCollectionBase _coll;

		[Token(Token = "0x400084B")]
		[FieldOffset(Offset = "0x20")]
		private int _version;

		[Token(Token = "0x17000337")]
		public object Current
		{
			[Token(Token = "0x6001028")]
			[Address(RVA = "0x28D7080", Offset = "0x28D5680", VA = "0x1828D7080", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001025")]
		[Address(RVA = "0x28D7030", Offset = "0x28D5630", VA = "0x1828D7030")]
		internal NameObjectKeysEnumerator(NameObjectCollectionBase coll)
		{
		}

		[Token(Token = "0x6001026")]
		[Address(RVA = "0x28D6ED0", Offset = "0x28D54D0", VA = "0x1828D6ED0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001027")]
		[Address(RVA = "0x28D6FA0", Offset = "0x28D55A0", VA = "0x1828D6FA0", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x400083E")]
	[FieldOffset(Offset = "0x10")]
	private bool _readOnly;

	[Token(Token = "0x400083F")]
	[FieldOffset(Offset = "0x18")]
	private ArrayList _entriesArray;

	[Token(Token = "0x4000840")]
	[FieldOffset(Offset = "0x20")]
	private IEqualityComparer _keyComparer;

	[Token(Token = "0x4000841")]
	[FieldOffset(Offset = "0x28")]
	private Hashtable _entriesTable;

	[Token(Token = "0x4000842")]
	[FieldOffset(Offset = "0x30")]
	private NameObjectEntry _nullKeyEntry;

	[Token(Token = "0x4000843")]
	[FieldOffset(Offset = "0x38")]
	private SerializationInfo _serializationInfo;

	[Token(Token = "0x4000844")]
	[FieldOffset(Offset = "0x40")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x4000845")]
	[FieldOffset(Offset = "0x48")]
	private object _syncRoot;

	[Token(Token = "0x4000846")]
	[FieldOffset(Offset = "0x0")]
	private static StringComparer defaultComparer;

	[Token(Token = "0x17000333")]
	protected bool IsReadOnly
	{
		[Token(Token = "0x6001016")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000334")]
	public virtual int Count
	{
		[Token(Token = "0x600101E")]
		[Address(RVA = "0x19972D0", Offset = "0x19958D0", VA = "0x1819972D0", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000335")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6001020")]
		[Address(RVA = "0x28D6BD0", Offset = "0x28D51D0", VA = "0x1828D6BD0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000336")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6001021")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600100C")]
	[Address(RVA = "0x28D6D30", Offset = "0x28D5330", VA = "0x1828D6D30")]
	protected NameObjectCollectionBase()
	{
	}

	[Token(Token = "0x600100D")]
	[Address(RVA = "0x28D6D90", Offset = "0x28D5390", VA = "0x1828D6D90")]
	protected NameObjectCollectionBase(IEqualityComparer equalityComparer)
	{
	}

	[Token(Token = "0x600100E")]
	[Address(RVA = "0x28D6CF0", Offset = "0x28D52F0", VA = "0x1828D6CF0")]
	protected NameObjectCollectionBase(int capacity, IEqualityComparer equalityComparer)
	{
	}

	[Token(Token = "0x600100F")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal NameObjectCollectionBase(DBNull dummy)
	{
	}

	[Token(Token = "0x6001010")]
	[Address(RVA = "0x25E39A0", Offset = "0x25E1FA0", VA = "0x1825E39A0")]
	protected NameObjectCollectionBase(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001011")]
	[Address(RVA = "0x28D57E0", Offset = "0x28D3DE0", VA = "0x1828D57E0", Slot = "11")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001012")]
	[Address(RVA = "0x28D5F20", Offset = "0x28D4520", VA = "0x1828D5F20", Slot = "12")]
	public virtual void OnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6001013")]
	[Address(RVA = "0x28D66F0", Offset = "0x28D4CF0", VA = "0x1828D66F0")]
	private void Reset()
	{
	}

	[Token(Token = "0x6001014")]
	[Address(RVA = "0x28D67C0", Offset = "0x28D4DC0", VA = "0x1828D67C0")]
	private void Reset(int capacity)
	{
	}

	[Token(Token = "0x6001015")]
	[Address(RVA = "0x28D56A0", Offset = "0x28D3CA0", VA = "0x1828D56A0")]
	private NameObjectEntry FindEntry(string key)
	{
		return null;
	}

	[Token(Token = "0x6001017")]
	[Address(RVA = "0x28D4E50", Offset = "0x28D3450", VA = "0x1828D4E50")]
	protected void BaseAdd(string name, object value)
	{
	}

	[Token(Token = "0x6001018")]
	[Address(RVA = "0x28D5290", Offset = "0x28D3890", VA = "0x1828D5290")]
	protected void BaseRemove(string name)
	{
	}

	[Token(Token = "0x6001019")]
	[Address(RVA = "0x28D51D0", Offset = "0x28D37D0", VA = "0x1828D51D0")]
	protected object BaseGet(string name)
	{
		return null;
	}

	[Token(Token = "0x600101A")]
	[Address(RVA = "0x28D55D0", Offset = "0x28D3BD0", VA = "0x1828D55D0")]
	protected void BaseSet(string name, object value)
	{
	}

	[Token(Token = "0x600101B")]
	[Address(RVA = "0x28D51F0", Offset = "0x28D37F0", VA = "0x1828D51F0")]
	protected object BaseGet(int index)
	{
		return null;
	}

	[Token(Token = "0x600101C")]
	[Address(RVA = "0x28D5130", Offset = "0x28D3730", VA = "0x1828D5130")]
	protected string BaseGetKey(int index)
	{
		return null;
	}

	[Token(Token = "0x600101D")]
	[Address(RVA = "0x28D5760", Offset = "0x28D3D60", VA = "0x1828D5760", Slot = "13")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600101F")]
	[Address(RVA = "0x28D6880", Offset = "0x28D4E80", VA = "0x1828D6880", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001022")]
	[Address(RVA = "0x28D4FF0", Offset = "0x28D35F0", VA = "0x1828D4FF0")]
	protected string[] BaseGetAllKeys()
	{
		return null;
	}
}
