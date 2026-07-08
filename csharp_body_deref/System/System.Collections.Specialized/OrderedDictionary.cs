using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections.Specialized;

[Serializable]
[Token(Token = "0x2000339")]
public class OrderedDictionary : IDictionary, ICollection, IEnumerable, ISerializable, IDeserializationCallback
{
	[Token(Token = "0x200033A")]
	private class OrderedDictionaryEnumerator : IDictionaryEnumerator, IEnumerator
	{
		[Token(Token = "0x4000EF5")]
		[FieldOffset(Offset = "0x10")]
		private int _objectReturnType;

		[Token(Token = "0x4000EF6")]
		[FieldOffset(Offset = "0x18")]
		private IEnumerator _arrayEnumerator;

		[Token(Token = "0x170004B0")]
		public object Current
		{
			[Token(Token = "0x6001580")]
			[Address(RVA = "0x45C0470", Offset = "0x45C0470", VA = "0x45C0470", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004B1")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x6001581")]
			[Address(RVA = "0x45C0650", Offset = "0x45C0650", VA = "0x45C0650", Slot = "6")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x170004B2")]
		public object Key
		{
			[Token(Token = "0x6001582")]
			[Address(RVA = "0x45C0800", Offset = "0x45C0800", VA = "0x45C0800", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004B3")]
		public object Value
		{
			[Token(Token = "0x6001583")]
			[Address(RVA = "0x45C08E0", Offset = "0x45C08E0", VA = "0x45C08E0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600157F")]
		[Address(RVA = "0x45BFBD0", Offset = "0x45BFBD0", VA = "0x45BFBD0")]
		internal OrderedDictionaryEnumerator(ArrayList array, int objectReturnType)
		{
		}

		[Token(Token = "0x6001584")]
		[Address(RVA = "0x45C09C0", Offset = "0x45C09C0", VA = "0x45C09C0", Slot = "7")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001585")]
		[Address(RVA = "0x45C0A50", Offset = "0x45C0A50", VA = "0x45C0A50", Slot = "9")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x200033B")]
	private class OrderedDictionaryKeyValueCollection : ICollection, IEnumerable
	{
		[Token(Token = "0x4000EF7")]
		[FieldOffset(Offset = "0x10")]
		private ArrayList _objects;

		[Token(Token = "0x4000EF8")]
		[FieldOffset(Offset = "0x18")]
		private bool _isKeys;

		[Token(Token = "0x170004B4")]
		private int System_002ECollections_002EICollection_002ECount
		{
			[Token(Token = "0x6001588")]
			[Address(RVA = "0x45C0F60", Offset = "0x45C0F60", VA = "0x45C0F60", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170004B5")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6001589")]
			[Address(RVA = "0x45C0F90", Offset = "0x45C0F90", VA = "0x45C0F90", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170004B6")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x600158A")]
			[Address(RVA = "0x45C0FA0", Offset = "0x45C0FA0", VA = "0x45C0FA0", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001586")]
		[Address(RVA = "0x45BF060", Offset = "0x45BF060", VA = "0x45BF060")]
		public OrderedDictionaryKeyValueCollection(ArrayList array, bool isKeys)
		{
		}

		[Token(Token = "0x6001587")]
		[Address(RVA = "0x45C0AF0", Offset = "0x45C0AF0", VA = "0x45C0AF0", Slot = "4")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x600158B")]
		[Address(RVA = "0x45C0FD0", Offset = "0x45C0FD0", VA = "0x45C0FD0", Slot = "8")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000EEA")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _objectsArray;

	[Token(Token = "0x4000EEB")]
	[FieldOffset(Offset = "0x18")]
	private Hashtable _objectsTable;

	[Token(Token = "0x4000EEC")]
	[FieldOffset(Offset = "0x20")]
	private int _initialCapacity;

	[Token(Token = "0x4000EED")]
	[FieldOffset(Offset = "0x28")]
	private IEqualityComparer _comparer;

	[Token(Token = "0x4000EEE")]
	[FieldOffset(Offset = "0x30")]
	private bool _readOnly;

	[Token(Token = "0x4000EEF")]
	[FieldOffset(Offset = "0x38")]
	private object _syncRoot;

	[Token(Token = "0x4000EF0")]
	[FieldOffset(Offset = "0x40")]
	private SerializationInfo _siInfo;

	[Token(Token = "0x4000EF1")]
	private const string KeyComparerName = "KeyComparer";

	[Token(Token = "0x4000EF2")]
	private const string ArrayListName = "ArrayList";

	[Token(Token = "0x4000EF3")]
	private const string ReadOnlyName = "ReadOnly";

	[Token(Token = "0x4000EF4")]
	private const string InitCapacityName = "InitialCapacity";

	[Token(Token = "0x170004A6")]
	public int Count
	{
		[Token(Token = "0x6001568")]
		[Address(RVA = "0x459F100", Offset = "0x459F100", VA = "0x459F100", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170004A7")]
	private bool System_002ECollections_002EIDictionary_002EIsFixedSize
	{
		[Token(Token = "0x6001569")]
		[Address(RVA = "0x45BEF50", Offset = "0x45BEF50", VA = "0x45BEF50", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004A8")]
	public bool IsReadOnly
	{
		[Token(Token = "0x600156A")]
		[Address(RVA = "0x45BEF60", Offset = "0x45BEF60", VA = "0x45BEF60", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004A9")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x600156B")]
		[Address(RVA = "0x45BEF70", Offset = "0x45BEF70", VA = "0x45BEF70", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004AA")]
	public ICollection Keys
	{
		[Token(Token = "0x600156C")]
		[Address(RVA = "0x45BEF80", Offset = "0x45BEF80", VA = "0x45BEF80", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004AB")]
	private ArrayList objectsArray
	{
		[Token(Token = "0x600156D")]
		[Address(RVA = "0x45BEED0", Offset = "0x45BEED0", VA = "0x45BEED0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004AC")]
	private Hashtable objectsTable
	{
		[Token(Token = "0x600156E")]
		[Address(RVA = "0x45BF090", Offset = "0x45BF090", VA = "0x45BF090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004AD")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x600156F")]
		[Address(RVA = "0x45BF110", Offset = "0x45BF110", VA = "0x45BF110", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004AE")]
	public object this[object key]
	{
		[Token(Token = "0x6001570")]
		[Address(RVA = "0x45B0B80", Offset = "0x45B0B80", VA = "0x45B0B80", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001571")]
		[Address(RVA = "0x459EE50", Offset = "0x459EE50", VA = "0x459EE50", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170004AF")]
	public ICollection Values
	{
		[Token(Token = "0x6001572")]
		[Address(RVA = "0x459F190", Offset = "0x459F190", VA = "0x459F190", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001563")]
	[Address(RVA = "0x45BEE00", Offset = "0x45BEE00", VA = "0x45BEE00")]
	public OrderedDictionary()
	{
	}

	[Token(Token = "0x6001564")]
	[Address(RVA = "0x459ED70", Offset = "0x459ED70", VA = "0x459ED70")]
	public OrderedDictionary(int capacity)
	{
	}

	[Token(Token = "0x6001565")]
	[Address(RVA = "0x45BEE60", Offset = "0x45BEE60", VA = "0x45BEE60")]
	public OrderedDictionary(IEqualityComparer comparer)
	{
	}

	[Token(Token = "0x6001566")]
	[Address(RVA = "0x45BEE30", Offset = "0x45BEE30", VA = "0x45BEE30")]
	public OrderedDictionary(int capacity, IEqualityComparer comparer)
	{
	}

	[Token(Token = "0x6001567")]
	[Address(RVA = "0x45BEEA0", Offset = "0x45BEEA0", VA = "0x45BEEA0")]
	protected OrderedDictionary(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001573")]
	[Address(RVA = "0x45BF3F0", Offset = "0x45BF3F0", VA = "0x45BF3F0", Slot = "9")]
	public void Add(object key, object value)
	{
	}

	[Token(Token = "0x6001574")]
	[Address(RVA = "0x45BF5E0", Offset = "0x45BF5E0", VA = "0x45BF5E0", Slot = "10")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001575")]
	[Address(RVA = "0x459EDA0", Offset = "0x459EDA0", VA = "0x459EDA0", Slot = "8")]
	public bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001576")]
	[Address(RVA = "0x45BF740", Offset = "0x45BF740", VA = "0x45BF740", Slot = "15")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001577")]
	[Address(RVA = "0x45BF190", Offset = "0x45BF190", VA = "0x45BF190")]
	private int IndexOfKey(object key)
	{
		return default(int);
	}

	[Token(Token = "0x6001578")]
	[Address(RVA = "0x45BF800", Offset = "0x45BF800", VA = "0x45BF800", Slot = "22")]
	public void Insert(int index, object key, object value)
	{
	}

	[Token(Token = "0x6001579")]
	[Address(RVA = "0x45B0C30", Offset = "0x45B0C30", VA = "0x45B0C30", Slot = "14")]
	public void Remove(object key)
	{
	}

	[Token(Token = "0x600157A")]
	[Address(RVA = "0x45BFAC0", Offset = "0x45BFAC0", VA = "0x45BFAC0", Slot = "23")]
	public virtual IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600157B")]
	[Address(RVA = "0x45BFC20", Offset = "0x45BFC20", VA = "0x45BFC20", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600157C")]
	[Address(RVA = "0x45BFD30", Offset = "0x45BFD30", VA = "0x45BFD30", Slot = "24")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600157D")]
	[Address(RVA = "0x45BFF40", Offset = "0x45BFF40", VA = "0x45BFF40", Slot = "21")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x600157E")]
	[Address(RVA = "0x45BFF60", Offset = "0x45BFF60", VA = "0x45BFF60", Slot = "25")]
	protected virtual void OnDeserialization(object sender)
	{
	}
}
