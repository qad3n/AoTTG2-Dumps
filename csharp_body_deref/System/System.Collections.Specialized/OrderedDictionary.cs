// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Specialized.OrderedDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x48E5570", Offset = "0x48E5570", VA = "0x48E5570", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004B1")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x6001581")]
			[Address(RVA = "0x48E5750", Offset = "0x48E5750", VA = "0x48E5750", Slot = "6")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x170004B2")]
		public object Key
		{
			[Token(Token = "0x6001582")]
			[Address(RVA = "0x48E5900", Offset = "0x48E5900", VA = "0x48E5900", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004B3")]
		public object Value
		{
			[Token(Token = "0x6001583")]
			[Address(RVA = "0x48E59E0", Offset = "0x48E59E0", VA = "0x48E59E0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600157F")]
		[Address(RVA = "0x48E4CD0", Offset = "0x48E4CD0", VA = "0x48E4CD0")]
		internal OrderedDictionaryEnumerator(ArrayList array, int objectReturnType)
		{
		}

		[Token(Token = "0x6001584")]
		[Address(RVA = "0x48E5AC0", Offset = "0x48E5AC0", VA = "0x48E5AC0", Slot = "7")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001585")]
		[Address(RVA = "0x48E5B50", Offset = "0x48E5B50", VA = "0x48E5B50", Slot = "9")]
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
			[Address(RVA = "0x48E6060", Offset = "0x48E6060", VA = "0x48E6060", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170004B5")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6001589")]
			[Address(RVA = "0x48E6090", Offset = "0x48E6090", VA = "0x48E6090", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170004B6")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x600158A")]
			[Address(RVA = "0x48E60A0", Offset = "0x48E60A0", VA = "0x48E60A0", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001586")]
		[Address(RVA = "0x48E4160", Offset = "0x48E4160", VA = "0x48E4160")]
		public OrderedDictionaryKeyValueCollection(ArrayList array, bool isKeys)
		{
		}

		[Token(Token = "0x6001587")]
		[Address(RVA = "0x48E5BF0", Offset = "0x48E5BF0", VA = "0x48E5BF0", Slot = "4")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x600158B")]
		[Address(RVA = "0x48E60D0", Offset = "0x48E60D0", VA = "0x48E60D0", Slot = "8")]
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
		[Address(RVA = "0x48C4200", Offset = "0x48C4200", VA = "0x48C4200", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170004A7")]
	private bool System_002ECollections_002EIDictionary_002EIsFixedSize
	{
		[Token(Token = "0x6001569")]
		[Address(RVA = "0x48E4050", Offset = "0x48E4050", VA = "0x48E4050", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004A8")]
	public bool IsReadOnly
	{
		[Token(Token = "0x600156A")]
		[Address(RVA = "0x48E4060", Offset = "0x48E4060", VA = "0x48E4060", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004A9")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x600156B")]
		[Address(RVA = "0x48E4070", Offset = "0x48E4070", VA = "0x48E4070", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004AA")]
	public ICollection Keys
	{
		[Token(Token = "0x600156C")]
		[Address(RVA = "0x48E4080", Offset = "0x48E4080", VA = "0x48E4080", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004AB")]
	private ArrayList objectsArray
	{
		[Token(Token = "0x600156D")]
		[Address(RVA = "0x48E3FD0", Offset = "0x48E3FD0", VA = "0x48E3FD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004AC")]
	private Hashtable objectsTable
	{
		[Token(Token = "0x600156E")]
		[Address(RVA = "0x48E4190", Offset = "0x48E4190", VA = "0x48E4190")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004AD")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x600156F")]
		[Address(RVA = "0x48E4210", Offset = "0x48E4210", VA = "0x48E4210", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004AE")]
	public object this[object key]
	{
		[Token(Token = "0x6001570")]
		[Address(RVA = "0x48D5C80", Offset = "0x48D5C80", VA = "0x48D5C80", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001571")]
		[Address(RVA = "0x48C3F50", Offset = "0x48C3F50", VA = "0x48C3F50", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170004AF")]
	public ICollection Values
	{
		[Token(Token = "0x6001572")]
		[Address(RVA = "0x48C4290", Offset = "0x48C4290", VA = "0x48C4290", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001563")]
	[Address(RVA = "0x48E3F00", Offset = "0x48E3F00", VA = "0x48E3F00")]
	public OrderedDictionary()
	{
	}

	[Token(Token = "0x6001564")]
	[Address(RVA = "0x48C3E70", Offset = "0x48C3E70", VA = "0x48C3E70")]
	public OrderedDictionary(int capacity)
	{
	}

	[Token(Token = "0x6001565")]
	[Address(RVA = "0x48E3F60", Offset = "0x48E3F60", VA = "0x48E3F60")]
	public OrderedDictionary(IEqualityComparer comparer)
	{
	}

	[Token(Token = "0x6001566")]
	[Address(RVA = "0x48E3F30", Offset = "0x48E3F30", VA = "0x48E3F30")]
	public OrderedDictionary(int capacity, IEqualityComparer comparer)
	{
	}

	[Token(Token = "0x6001567")]
	[Address(RVA = "0x48E3FA0", Offset = "0x48E3FA0", VA = "0x48E3FA0")]
	protected OrderedDictionary(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001573")]
	[Address(RVA = "0x48E44F0", Offset = "0x48E44F0", VA = "0x48E44F0", Slot = "9")]
	public void Add(object key, object value)
	{
	}

	[Token(Token = "0x6001574")]
	[Address(RVA = "0x48E46E0", Offset = "0x48E46E0", VA = "0x48E46E0", Slot = "10")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001575")]
	[Address(RVA = "0x48C3EA0", Offset = "0x48C3EA0", VA = "0x48C3EA0", Slot = "8")]
	public bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001576")]
	[Address(RVA = "0x48E4840", Offset = "0x48E4840", VA = "0x48E4840", Slot = "15")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001577")]
	[Address(RVA = "0x48E4290", Offset = "0x48E4290", VA = "0x48E4290")]
	private int IndexOfKey(object key)
	{
		return default(int);
	}

	[Token(Token = "0x6001578")]
	[Address(RVA = "0x48E4900", Offset = "0x48E4900", VA = "0x48E4900", Slot = "22")]
	public void Insert(int index, object key, object value)
	{
	}

	[Token(Token = "0x6001579")]
	[Address(RVA = "0x48D5D30", Offset = "0x48D5D30", VA = "0x48D5D30", Slot = "14")]
	public void Remove(object key)
	{
	}

	[Token(Token = "0x600157A")]
	[Address(RVA = "0x48E4BC0", Offset = "0x48E4BC0", VA = "0x48E4BC0", Slot = "23")]
	public virtual IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600157B")]
	[Address(RVA = "0x48E4D20", Offset = "0x48E4D20", VA = "0x48E4D20", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600157C")]
	[Address(RVA = "0x48E4E30", Offset = "0x48E4E30", VA = "0x48E4E30", Slot = "24")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600157D")]
	[Address(RVA = "0x48E5040", Offset = "0x48E5040", VA = "0x48E5040", Slot = "21")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x600157E")]
	[Address(RVA = "0x48E5060", Offset = "0x48E5060", VA = "0x48E5060", Slot = "25")]
	protected virtual void OnDeserialization(object sender)
	{
	}
}
