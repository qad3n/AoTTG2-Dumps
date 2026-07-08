using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections.Specialized;

[Serializable]
[Token(Token = "0x2000344")]
public abstract class NameObjectCollectionBase : ICollection, IEnumerable, ISerializable, IDeserializationCallback
{
	[Token(Token = "0x2000345")]
	internal class NameObjectEntry
	{
		[Token(Token = "0x4000F10")]
		[FieldOffset(Offset = "0x10")]
		internal string Key;

		[Token(Token = "0x4000F11")]
		[FieldOffset(Offset = "0x18")]
		internal object Value;

		[Token(Token = "0x60015DD")]
		[Address(RVA = "0x45C4050", Offset = "0x45C4050", VA = "0x45C4050")]
		internal NameObjectEntry(string name, object value)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000346")]
	internal class NameObjectKeysEnumerator : IEnumerator
	{
		[Token(Token = "0x4000F12")]
		[FieldOffset(Offset = "0x10")]
		private int _pos;

		[Token(Token = "0x4000F13")]
		[FieldOffset(Offset = "0x18")]
		private NameObjectCollectionBase _coll;

		[Token(Token = "0x4000F14")]
		[FieldOffset(Offset = "0x20")]
		private int _version;

		[Token(Token = "0x170004C8")]
		public object Current
		{
			[Token(Token = "0x60015E1")]
			[Address(RVA = "0x45C4220", Offset = "0x45C4220", VA = "0x45C4220", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60015DE")]
		[Address(RVA = "0x45C4090", Offset = "0x45C4090", VA = "0x45C4090")]
		internal NameObjectKeysEnumerator(NameObjectCollectionBase coll)
		{
		}

		[Token(Token = "0x60015DF")]
		[Address(RVA = "0x45C40E0", Offset = "0x45C40E0", VA = "0x45C40E0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60015E0")]
		[Address(RVA = "0x45C41A0", Offset = "0x45C41A0", VA = "0x45C41A0", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4000F07")]
	[FieldOffset(Offset = "0x10")]
	private bool _readOnly;

	[Token(Token = "0x4000F08")]
	[FieldOffset(Offset = "0x18")]
	private ArrayList _entriesArray;

	[Token(Token = "0x4000F09")]
	[FieldOffset(Offset = "0x20")]
	private IEqualityComparer _keyComparer;

	[Token(Token = "0x4000F0A")]
	[FieldOffset(Offset = "0x28")]
	private Hashtable _entriesTable;

	[Token(Token = "0x4000F0B")]
	[FieldOffset(Offset = "0x30")]
	private NameObjectEntry _nullKeyEntry;

	[Token(Token = "0x4000F0C")]
	[FieldOffset(Offset = "0x38")]
	private SerializationInfo _serializationInfo;

	[Token(Token = "0x4000F0D")]
	[FieldOffset(Offset = "0x40")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x4000F0E")]
	[FieldOffset(Offset = "0x48")]
	private object _syncRoot;

	[Token(Token = "0x4000F0F")]
	[FieldOffset(Offset = "0x0")]
	private static StringComparer defaultComparer;

	[Token(Token = "0x170004C4")]
	protected bool IsReadOnly
	{
		[Token(Token = "0x60015CF")]
		[Address(RVA = "0x45C3B10", Offset = "0x45C3B10", VA = "0x45C3B10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C5")]
	public virtual int Count
	{
		[Token(Token = "0x60015D7")]
		[Address(RVA = "0x45C3B70", Offset = "0x45C3B70", VA = "0x45C3B70", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170004C6")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x60015D9")]
		[Address(RVA = "0x45C3EE0", Offset = "0x45C3EE0", VA = "0x45C3EE0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004C7")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x60015DA")]
		[Address(RVA = "0x45C3F60", Offset = "0x45C3F60", VA = "0x45C3F60", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60015C5")]
	[Address(RVA = "0x45BDB30", Offset = "0x45BDB30", VA = "0x45BDB30")]
	protected NameObjectCollectionBase()
	{
	}

	[Token(Token = "0x60015C6")]
	[Address(RVA = "0x45C2A40", Offset = "0x45C2A40", VA = "0x45C2A40")]
	protected NameObjectCollectionBase(IEqualityComparer equalityComparer)
	{
	}

	[Token(Token = "0x60015C7")]
	[Address(RVA = "0x45BDBF0", Offset = "0x45BDBF0", VA = "0x45BDBF0")]
	protected NameObjectCollectionBase(int capacity, IEqualityComparer equalityComparer)
	{
	}

	[Token(Token = "0x60015C8")]
	[Address(RVA = "0x45BEDF0", Offset = "0x45BEDF0", VA = "0x45BEDF0")]
	internal NameObjectCollectionBase(DBNull dummy)
	{
	}

	[Token(Token = "0x60015C9")]
	[Address(RVA = "0x45BDC80", Offset = "0x45BDC80", VA = "0x45BDC80")]
	protected NameObjectCollectionBase(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60015CA")]
	[Address(RVA = "0x45C2C50", Offset = "0x45C2C50", VA = "0x45C2C50", Slot = "11")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60015CB")]
	[Address(RVA = "0x45C3270", Offset = "0x45C3270", VA = "0x45C3270", Slot = "12")]
	public virtual void OnDeserialization(object sender)
	{
	}

	[Token(Token = "0x60015CC")]
	[Address(RVA = "0x45C2AC0", Offset = "0x45C2AC0", VA = "0x45C2AC0")]
	private void Reset()
	{
	}

	[Token(Token = "0x60015CD")]
	[Address(RVA = "0x45C2B80", Offset = "0x45C2B80", VA = "0x45C2B80")]
	private void Reset(int capacity)
	{
	}

	[Token(Token = "0x60015CE")]
	[Address(RVA = "0x45C3A60", Offset = "0x45C3A60", VA = "0x45C3A60")]
	private NameObjectEntry FindEntry(string key)
	{
		return null;
	}

	[Token(Token = "0x60015D0")]
	[Address(RVA = "0x45BE090", Offset = "0x45BE090", VA = "0x45BE090")]
	protected void BaseAdd(string name, object value)
	{
	}

	[Token(Token = "0x60015D1")]
	[Address(RVA = "0x45BE590", Offset = "0x45BE590", VA = "0x45BE590")]
	protected void BaseRemove(string name)
	{
	}

	[Token(Token = "0x60015D2")]
	[Address(RVA = "0x45BE070", Offset = "0x45BE070", VA = "0x45BE070")]
	protected object BaseGet(string name)
	{
		return null;
	}

	[Token(Token = "0x60015D3")]
	[Address(RVA = "0x45BE4A0", Offset = "0x45BE4A0", VA = "0x45BE4A0")]
	protected void BaseSet(string name, object value)
	{
	}

	[Token(Token = "0x60015D4")]
	[Address(RVA = "0x45BE9F0", Offset = "0x45BE9F0", VA = "0x45BE9F0")]
	protected object BaseGet(int index)
	{
		return null;
	}

	[Token(Token = "0x60015D5")]
	[Address(RVA = "0x45BEB10", Offset = "0x45BEB10", VA = "0x45BEB10")]
	protected string BaseGetKey(int index)
	{
		return null;
	}

	[Token(Token = "0x60015D6")]
	[Address(RVA = "0x45C3B20", Offset = "0x45C3B20", VA = "0x45C3B20", Slot = "13")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60015D8")]
	[Address(RVA = "0x45C3BA0", Offset = "0x45C3BA0", VA = "0x45C3BA0", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60015DB")]
	[Address(RVA = "0x45BEBE0", Offset = "0x45BEBE0", VA = "0x45BEBE0")]
	protected string[] BaseGetAllKeys()
	{
		return null;
	}
}
