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
[Token(Token = "0x2000210")]
public abstract class NameObjectCollectionBase : ICollection, IEnumerable, ISerializable, IDeserializationCallback
{
	[Token(Token = "0x2000211")]
	internal class NameObjectEntry
	{
		[Token(Token = "0x4000778")]
		[FieldOffset(Offset = "0x10")]
		internal string Key;

		[Token(Token = "0x4000779")]
		[FieldOffset(Offset = "0x18")]
		internal object Value;

		[Token(Token = "0x6000E64")]
		[Address(RVA = "0x62857A0", Offset = "0x62847A0", VA = "0x62857A0")]
		internal NameObjectEntry(string name, object value)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000212")]
	internal class NameObjectKeysEnumerator : IEnumerator
	{
		[Token(Token = "0x400077A")]
		[FieldOffset(Offset = "0x10")]
		private int _pos;

		[Token(Token = "0x400077B")]
		[FieldOffset(Offset = "0x18")]
		private NameObjectCollectionBase _coll;

		[Token(Token = "0x400077C")]
		[FieldOffset(Offset = "0x20")]
		private int _version;

		[Token(Token = "0x17000308")]
		public object Current
		{
			[Token(Token = "0x6000E68")]
			[Address(RVA = "0x6285970", Offset = "0x6284970", VA = "0x6285970", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E65")]
		[Address(RVA = "0x62857E0", Offset = "0x62847E0", VA = "0x62857E0")]
		internal NameObjectKeysEnumerator(NameObjectCollectionBase coll)
		{
		}

		[Token(Token = "0x6000E66")]
		[Address(RVA = "0x6285830", Offset = "0x6284830", VA = "0x6285830", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E67")]
		[Address(RVA = "0x62858F0", Offset = "0x62848F0", VA = "0x62858F0", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x400076F")]
	[FieldOffset(Offset = "0x10")]
	private bool _readOnly;

	[Token(Token = "0x4000770")]
	[FieldOffset(Offset = "0x18")]
	private ArrayList _entriesArray;

	[Token(Token = "0x4000771")]
	[FieldOffset(Offset = "0x20")]
	private IEqualityComparer _keyComparer;

	[Token(Token = "0x4000772")]
	[FieldOffset(Offset = "0x28")]
	private Hashtable _entriesTable;

	[Token(Token = "0x4000773")]
	[FieldOffset(Offset = "0x30")]
	private NameObjectEntry _nullKeyEntry;

	[Token(Token = "0x4000774")]
	[FieldOffset(Offset = "0x38")]
	private SerializationInfo _serializationInfo;

	[Token(Token = "0x4000775")]
	[FieldOffset(Offset = "0x40")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x4000776")]
	[FieldOffset(Offset = "0x48")]
	private object _syncRoot;

	[Token(Token = "0x4000777")]
	[FieldOffset(Offset = "0x0")]
	private static StringComparer defaultComparer;

	[Token(Token = "0x17000304")]
	protected bool IsReadOnly
	{
		[Token(Token = "0x6000E56")]
		[Address(RVA = "0x6285260", Offset = "0x6284260", VA = "0x6285260")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000305")]
	public virtual int Count
	{
		[Token(Token = "0x6000E5E")]
		[Address(RVA = "0x62852C0", Offset = "0x62842C0", VA = "0x62852C0", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000306")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000E60")]
		[Address(RVA = "0x6285630", Offset = "0x6284630", VA = "0x6285630", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000307")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000E61")]
		[Address(RVA = "0x62856B0", Offset = "0x62846B0", VA = "0x62856B0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x627F580", Offset = "0x627E580", VA = "0x627F580")]
	protected NameObjectCollectionBase()
	{
	}

	[Token(Token = "0x6000E4D")]
	[Address(RVA = "0x6284150", Offset = "0x6283150", VA = "0x6284150")]
	protected NameObjectCollectionBase(IEqualityComparer equalityComparer)
	{
	}

	[Token(Token = "0x6000E4E")]
	[Address(RVA = "0x627F640", Offset = "0x627E640", VA = "0x627F640")]
	protected NameObjectCollectionBase(int capacity, IEqualityComparer equalityComparer)
	{
	}

	[Token(Token = "0x6000E4F")]
	[Address(RVA = "0x6280810", Offset = "0x627F810", VA = "0x6280810")]
	internal NameObjectCollectionBase(DBNull dummy)
	{
	}

	[Token(Token = "0x6000E50")]
	[Address(RVA = "0x627F6D0", Offset = "0x627E6D0", VA = "0x627F6D0")]
	protected NameObjectCollectionBase(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000E51")]
	[Address(RVA = "0x6284370", Offset = "0x6283370", VA = "0x6284370", Slot = "11")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000E52")]
	[Address(RVA = "0x6284A00", Offset = "0x6283A00", VA = "0x6284A00", Slot = "12")]
	public virtual void OnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6000E53")]
	[Address(RVA = "0x62841E0", Offset = "0x62831E0", VA = "0x62841E0")]
	private void Reset()
	{
	}

	[Token(Token = "0x6000E54")]
	[Address(RVA = "0x62842A0", Offset = "0x62832A0", VA = "0x62842A0")]
	private void Reset(int capacity)
	{
	}

	[Token(Token = "0x6000E55")]
	[Address(RVA = "0x62851B0", Offset = "0x62841B0", VA = "0x62851B0")]
	private NameObjectEntry FindEntry(string key)
	{
		return null;
	}

	[Token(Token = "0x6000E57")]
	[Address(RVA = "0x627FAD0", Offset = "0x627EAD0", VA = "0x627FAD0")]
	protected void BaseAdd(string name, object value)
	{
	}

	[Token(Token = "0x6000E58")]
	[Address(RVA = "0x627FFD0", Offset = "0x627EFD0", VA = "0x627FFD0")]
	protected void BaseRemove(string name)
	{
	}

	[Token(Token = "0x6000E59")]
	[Address(RVA = "0x627FAB0", Offset = "0x627EAB0", VA = "0x627FAB0")]
	protected object BaseGet(string name)
	{
		return null;
	}

	[Token(Token = "0x6000E5A")]
	[Address(RVA = "0x627FED0", Offset = "0x627EED0", VA = "0x627FED0")]
	protected void BaseSet(string name, object value)
	{
	}

	[Token(Token = "0x6000E5B")]
	[Address(RVA = "0x6280410", Offset = "0x627F410", VA = "0x6280410")]
	protected object BaseGet(int index)
	{
		return null;
	}

	[Token(Token = "0x6000E5C")]
	[Address(RVA = "0x6280530", Offset = "0x627F530", VA = "0x6280530")]
	protected string BaseGetKey(int index)
	{
		return null;
	}

	[Token(Token = "0x6000E5D")]
	[Address(RVA = "0x6285270", Offset = "0x6284270", VA = "0x6285270", Slot = "13")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000E5F")]
	[Address(RVA = "0x62852F0", Offset = "0x62842F0", VA = "0x62852F0", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000E62")]
	[Address(RVA = "0x6280600", Offset = "0x627F600", VA = "0x6280600")]
	protected string[] BaseGetAllKeys()
	{
		return null;
	}
}
