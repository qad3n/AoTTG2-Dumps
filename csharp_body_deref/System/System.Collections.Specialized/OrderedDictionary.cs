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
[Token(Token = "0x2000205")]
public class OrderedDictionary : IDictionary, ICollection, IEnumerable, ISerializable, IDeserializationCallback
{
	[Token(Token = "0x2000206")]
	private class OrderedDictionaryEnumerator : IDictionaryEnumerator, IEnumerator
	{
		[Token(Token = "0x400075D")]
		[FieldOffset(Offset = "0x10")]
		private int _objectReturnType;

		[Token(Token = "0x400075E")]
		[FieldOffset(Offset = "0x18")]
		private IEnumerator _arrayEnumerator;

		[Token(Token = "0x170002F0")]
		public object Current
		{
			[Token(Token = "0x6000E07")]
			[Address(RVA = "0x6281BB0", Offset = "0x6280BB0", VA = "0x6281BB0", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170002F1")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x6000E08")]
			[Address(RVA = "0x6281D90", Offset = "0x6280D90", VA = "0x6281D90", Slot = "6")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x170002F2")]
		public object Key
		{
			[Token(Token = "0x6000E09")]
			[Address(RVA = "0x6281F40", Offset = "0x6280F40", VA = "0x6281F40", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170002F3")]
		public object Value
		{
			[Token(Token = "0x6000E0A")]
			[Address(RVA = "0x6282020", Offset = "0x6281020", VA = "0x6282020", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E06")]
		[Address(RVA = "0x6281330", Offset = "0x6280330", VA = "0x6281330")]
		internal OrderedDictionaryEnumerator(ArrayList array, int objectReturnType)
		{
		}

		[Token(Token = "0x6000E0B")]
		[Address(RVA = "0x6282100", Offset = "0x6281100", VA = "0x6282100", Slot = "7")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E0C")]
		[Address(RVA = "0x6282190", Offset = "0x6281190", VA = "0x6282190", Slot = "9")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x2000207")]
	private class OrderedDictionaryKeyValueCollection : ICollection, IEnumerable
	{
		[Token(Token = "0x400075F")]
		[FieldOffset(Offset = "0x10")]
		private ArrayList _objects;

		[Token(Token = "0x4000760")]
		[FieldOffset(Offset = "0x18")]
		private bool _isKeys;

		[Token(Token = "0x170002F4")]
		private int System_002ECollections_002EICollection_002ECount
		{
			[Token(Token = "0x6000E0F")]
			[Address(RVA = "0x6282660", Offset = "0x6281660", VA = "0x6282660", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170002F5")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6000E10")]
			[Address(RVA = "0x6282690", Offset = "0x6281690", VA = "0x6282690", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170002F6")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6000E11")]
			[Address(RVA = "0x62826A0", Offset = "0x62816A0", VA = "0x62826A0", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E0D")]
		[Address(RVA = "0x6280A80", Offset = "0x627FA80", VA = "0x6280A80")]
		public OrderedDictionaryKeyValueCollection(ArrayList array, bool isKeys)
		{
		}

		[Token(Token = "0x6000E0E")]
		[Address(RVA = "0x6282230", Offset = "0x6281230", VA = "0x6282230", Slot = "4")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6000E12")]
		[Address(RVA = "0x62826D0", Offset = "0x62816D0", VA = "0x62826D0", Slot = "8")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000752")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _objectsArray;

	[Token(Token = "0x4000753")]
	[FieldOffset(Offset = "0x18")]
	private Hashtable _objectsTable;

	[Token(Token = "0x4000754")]
	[FieldOffset(Offset = "0x20")]
	private int _initialCapacity;

	[Token(Token = "0x4000755")]
	[FieldOffset(Offset = "0x28")]
	private IEqualityComparer _comparer;

	[Token(Token = "0x4000756")]
	[FieldOffset(Offset = "0x30")]
	private bool _readOnly;

	[Token(Token = "0x4000757")]
	[FieldOffset(Offset = "0x38")]
	private object _syncRoot;

	[Token(Token = "0x4000758")]
	[FieldOffset(Offset = "0x40")]
	private SerializationInfo _siInfo;

	[Token(Token = "0x4000759")]
	private const string KeyComparerName = "KeyComparer";

	[Token(Token = "0x400075A")]
	private const string ArrayListName = "ArrayList";

	[Token(Token = "0x400075B")]
	private const string ReadOnlyName = "ReadOnly";

	[Token(Token = "0x400075C")]
	private const string InitCapacityName = "InitialCapacity";

	[Token(Token = "0x170002E6")]
	public int Count
	{
		[Token(Token = "0x6000DF0")]
		[Address(RVA = "0x6262010", Offset = "0x6261010", VA = "0x6262010", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002E7")]
	private bool System_002ECollections_002EIDictionary_002EIsFixedSize
	{
		[Token(Token = "0x6000DF1")]
		[Address(RVA = "0x6280970", Offset = "0x627F970", VA = "0x6280970", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002E8")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000DF2")]
		[Address(RVA = "0x6280980", Offset = "0x627F980", VA = "0x6280980", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002E9")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000DF3")]
		[Address(RVA = "0x6280990", Offset = "0x627F990", VA = "0x6280990", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EA")]
	public ICollection Keys
	{
		[Token(Token = "0x6000DF4")]
		[Address(RVA = "0x62809A0", Offset = "0x627F9A0", VA = "0x62809A0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002EB")]
	private ArrayList objectsArray
	{
		[Token(Token = "0x6000DF5")]
		[Address(RVA = "0x62808F0", Offset = "0x627F8F0", VA = "0x62808F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002EC")]
	private Hashtable objectsTable
	{
		[Token(Token = "0x6000DF6")]
		[Address(RVA = "0x6280AB0", Offset = "0x627FAB0", VA = "0x6280AB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002ED")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000DF7")]
		[Address(RVA = "0x6280B30", Offset = "0x627FB30", VA = "0x6280B30", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002EE")]
	public object this[object key]
	{
		[Token(Token = "0x6000DF8")]
		[Address(RVA = "0x6273000", Offset = "0x6272000", VA = "0x6273000", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DF9")]
		[Address(RVA = "0x6261D60", Offset = "0x6260D60", VA = "0x6261D60", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170002EF")]
	public ICollection Values
	{
		[Token(Token = "0x6000DFA")]
		[Address(RVA = "0x62620A0", Offset = "0x62610A0", VA = "0x62620A0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x6280820", Offset = "0x627F820", VA = "0x6280820")]
	public OrderedDictionary()
	{
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x6261C80", Offset = "0x6260C80", VA = "0x6261C80")]
	public OrderedDictionary(int capacity)
	{
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x6280880", Offset = "0x627F880", VA = "0x6280880")]
	public OrderedDictionary(IEqualityComparer comparer)
	{
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x6280850", Offset = "0x627F850", VA = "0x6280850")]
	public OrderedDictionary(int capacity, IEqualityComparer comparer)
	{
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x62808C0", Offset = "0x627F8C0", VA = "0x62808C0")]
	protected OrderedDictionary(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000DFB")]
	[Address(RVA = "0x6280E10", Offset = "0x627FE10", VA = "0x6280E10", Slot = "9")]
	public void Add(object key, object value)
	{
	}

	[Token(Token = "0x6000DFC")]
	[Address(RVA = "0x6281000", Offset = "0x6280000", VA = "0x6281000", Slot = "10")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000DFD")]
	[Address(RVA = "0x6261CB0", Offset = "0x6260CB0", VA = "0x6261CB0", Slot = "8")]
	public bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DFE")]
	[Address(RVA = "0x6281160", Offset = "0x6280160", VA = "0x6281160", Slot = "15")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000DFF")]
	[Address(RVA = "0x6280BB0", Offset = "0x627FBB0", VA = "0x6280BB0")]
	private int IndexOfKey(object key)
	{
		return default(int);
	}

	[Token(Token = "0x6000E00")]
	[Address(RVA = "0x62730B0", Offset = "0x62720B0", VA = "0x62730B0", Slot = "14")]
	public void Remove(object key)
	{
	}

	[Token(Token = "0x6000E01")]
	[Address(RVA = "0x6281220", Offset = "0x6280220", VA = "0x6281220", Slot = "22")]
	public virtual IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000E02")]
	[Address(RVA = "0x6281380", Offset = "0x6280380", VA = "0x6281380", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000E03")]
	[Address(RVA = "0x6281490", Offset = "0x6280490", VA = "0x6281490", Slot = "23")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000E04")]
	[Address(RVA = "0x62816A0", Offset = "0x62806A0", VA = "0x62816A0", Slot = "21")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6000E05")]
	[Address(RVA = "0x62816C0", Offset = "0x62806C0", VA = "0x62816C0", Slot = "24")]
	protected virtual void OnDeserialization(object sender)
	{
	}
}
