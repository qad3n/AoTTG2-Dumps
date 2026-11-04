// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Specialized.OrderedDictionary
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections.Specialized;

[Serializable]
[Token(Token = "0x2000244")]
public class OrderedDictionary : IDictionary, ICollection, IEnumerable, ISerializable, IDeserializationCallback
{
	[Token(Token = "0x2000245")]
	private class OrderedDictionaryEnumerator : IDictionaryEnumerator, IEnumerator
	{
		[Token(Token = "0x400082C")]
		[FieldOffset(Offset = "0x10")]
		private int _objectReturnType;

		[Token(Token = "0x400082D")]
		[FieldOffset(Offset = "0x18")]
		private IEnumerator _arrayEnumerator;

		[Token(Token = "0x1700031F")]
		public object Current
		{
			[Token(Token = "0x6000FC7")]
			[Address(RVA = "0x28D8D50", Offset = "0x28D7350", VA = "0x1828D8D50", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000320")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x6000FC8")]
			[Address(RVA = "0x28D8F50", Offset = "0x28D7550", VA = "0x1828D8F50", Slot = "6")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x17000321")]
		public object Key
		{
			[Token(Token = "0x6000FC9")]
			[Address(RVA = "0x28D9050", Offset = "0x28D7650", VA = "0x1828D9050", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000322")]
		public object Value
		{
			[Token(Token = "0x6000FCA")]
			[Address(RVA = "0x28D90E0", Offset = "0x28D76E0", VA = "0x1828D90E0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000FC6")]
		[Address(RVA = "0x28D8CF0", Offset = "0x28D72F0", VA = "0x1828D8CF0")]
		internal OrderedDictionaryEnumerator(ArrayList array, int objectReturnType)
		{
		}

		[Token(Token = "0x6000FCB")]
		[Address(RVA = "0x28D8C50", Offset = "0x28D7250", VA = "0x1828D8C50", Slot = "7")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000FCC")]
		[Address(RVA = "0x28D8CA0", Offset = "0x28D72A0", VA = "0x1828D8CA0", Slot = "9")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x2000246")]
	private class OrderedDictionaryKeyValueCollection : ICollection, IEnumerable
	{
		[Token(Token = "0x400082E")]
		[FieldOffset(Offset = "0x10")]
		private ArrayList _objects;

		[Token(Token = "0x400082F")]
		[FieldOffset(Offset = "0x18")]
		private bool _isKeys;

		[Token(Token = "0x17000323")]
		private int System_002ECollections_002EICollection_002ECount
		{
			[Token(Token = "0x6000FCF")]
			[Address(RVA = "0x1AB8C80", Offset = "0x1AB7280", VA = "0x181AB8C80", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000324")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6000FD0")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000325")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6000FD1")]
			[Address(RVA = "0x1AB84F0", Offset = "0x1AB6AF0", VA = "0x181AB84F0", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000FCD")]
		[Address(RVA = "0x16F5C50", Offset = "0x16F4250", VA = "0x1816F5C50")]
		public OrderedDictionaryKeyValueCollection(ArrayList array, bool isKeys)
		{
		}

		[Token(Token = "0x6000FCE")]
		[Address(RVA = "0x28D9170", Offset = "0x28D7770", VA = "0x1828D9170", Slot = "4")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6000FD2")]
		[Address(RVA = "0x28D9490", Offset = "0x28D7A90", VA = "0x1828D9490", Slot = "8")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000821")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _objectsArray;

	[Token(Token = "0x4000822")]
	[FieldOffset(Offset = "0x18")]
	private Hashtable _objectsTable;

	[Token(Token = "0x4000823")]
	[FieldOffset(Offset = "0x20")]
	private int _initialCapacity;

	[Token(Token = "0x4000824")]
	[FieldOffset(Offset = "0x28")]
	private IEqualityComparer _comparer;

	[Token(Token = "0x4000825")]
	[FieldOffset(Offset = "0x30")]
	private bool _readOnly;

	[Token(Token = "0x4000826")]
	[FieldOffset(Offset = "0x38")]
	private object _syncRoot;

	[Token(Token = "0x4000827")]
	[FieldOffset(Offset = "0x40")]
	private SerializationInfo _siInfo;

	[Token(Token = "0x4000828")]
	private const string KeyComparerName = "KeyComparer";

	[Token(Token = "0x4000829")]
	private const string ArrayListName = "ArrayList";

	[Token(Token = "0x400082A")]
	private const string ReadOnlyName = "ReadOnly";

	[Token(Token = "0x400082B")]
	private const string InitCapacityName = "InitialCapacity";

	[Token(Token = "0x17000315")]
	public int Count
	{
		[Token(Token = "0x6000FB0")]
		[Address(RVA = "0x28DA230", Offset = "0x28D8830", VA = "0x1828DA230", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000316")]
	private bool System_002ECollections_002EIDictionary_002EIsFixedSize
	{
		[Token(Token = "0x6000FB1")]
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000317")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000FB2")]
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000318")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000FB3")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000319")]
	public ICollection Keys
	{
		[Token(Token = "0x6000FB4")]
		[Address(RVA = "0x28DA2A0", Offset = "0x28D88A0", VA = "0x1828DA2A0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031A")]
	private ArrayList objectsArray
	{
		[Token(Token = "0x6000FB5")]
		[Address(RVA = "0x28DA3A0", Offset = "0x28D89A0", VA = "0x1828DA3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031B")]
	private Hashtable objectsTable
	{
		[Token(Token = "0x6000FB6")]
		[Address(RVA = "0x28DA420", Offset = "0x28D8A20", VA = "0x1828DA420")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031C")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000FB7")]
		[Address(RVA = "0x28DA010", Offset = "0x28D8610", VA = "0x1828DA010", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031D")]
	public object this[object key]
	{
		[Token(Token = "0x6000FB8")]
		[Address(RVA = "0x28DA260", Offset = "0x28D8860", VA = "0x1828DA260", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FB9")]
		[Address(RVA = "0x28DA4B0", Offset = "0x28D8AB0", VA = "0x1828DA4B0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700031E")]
	public ICollection Values
	{
		[Token(Token = "0x6000FBA")]
		[Address(RVA = "0x28DA320", Offset = "0x28D8920", VA = "0x1828DA320", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FAB")]
	[Address(RVA = "0x28DA1C0", Offset = "0x28D87C0", VA = "0x1828DA1C0")]
	public OrderedDictionary()
	{
	}

	[Token(Token = "0x6000FAC")]
	[Address(RVA = "0x28DA140", Offset = "0x28D8740", VA = "0x1828DA140")]
	public OrderedDictionary(int capacity)
	{
	}

	[Token(Token = "0x6000FAD")]
	[Address(RVA = "0x28DA180", Offset = "0x28D8780", VA = "0x1828DA180")]
	public OrderedDictionary(IEqualityComparer comparer)
	{
	}

	[Token(Token = "0x6000FAE")]
	[Address(RVA = "0x28DA1F0", Offset = "0x28D87F0", VA = "0x1828DA1F0")]
	public OrderedDictionary(int capacity, IEqualityComparer comparer)
	{
	}

	[Token(Token = "0x6000FAF")]
	[Address(RVA = "0x176C0D0", Offset = "0x176A6D0", VA = "0x18176C0D0")]
	protected OrderedDictionary(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x28D9530", Offset = "0x28D7B30", VA = "0x1828D9530", Slot = "9")]
	public void Add(object key, object value)
	{
	}

	[Token(Token = "0x6000FBC")]
	[Address(RVA = "0x28D9660", Offset = "0x28D7C60", VA = "0x1828D9660", Slot = "10")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x28D9710", Offset = "0x28D7D10", VA = "0x1828D9710", Slot = "8")]
	public bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x28D9750", Offset = "0x28D7D50", VA = "0x1828D9750", Slot = "15")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000FBF")]
	[Address(RVA = "0x28D9A10", Offset = "0x28D8010", VA = "0x1828D9A10")]
	private int IndexOfKey(object key)
	{
		return default(int);
	}

	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x28D9EE0", Offset = "0x28D84E0", VA = "0x1828D9EE0", Slot = "14")]
	public void Remove(object key)
	{
	}

	[Token(Token = "0x6000FC1")]
	[Address(RVA = "0x28D97A0", Offset = "0x28D7DA0", VA = "0x1828D97A0", Slot = "22")]
	public virtual IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000FC2")]
	[Address(RVA = "0x28DA080", Offset = "0x28D8680", VA = "0x1828DA080", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000FC3")]
	[Address(RVA = "0x28D9840", Offset = "0x28D7E40", VA = "0x1828D9840", Slot = "23")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x28DA120", Offset = "0x28D8720", VA = "0x1828DA120", Slot = "21")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x28D9B70", Offset = "0x28D8170", VA = "0x1828D9B70", Slot = "24")]
	protected virtual void OnDeserialization(object sender)
	{
	}
}
