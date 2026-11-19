// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.PropertyDescriptorCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000194")]
public class PropertyDescriptorCollection : ICollection, IEnumerable, IList, IDictionary
{
	[Token(Token = "0x2000195")]
	private class PropertyDescriptorEnumerator : IDictionaryEnumerator, IEnumerator
	{
		[Token(Token = "0x4000663")]
		[FieldOffset(Offset = "0x10")]
		private PropertyDescriptorCollection _owner;

		[Token(Token = "0x4000664")]
		[FieldOffset(Offset = "0x18")]
		private int _index;

		[Token(Token = "0x17000257")]
		public object Current
		{
			[Token(Token = "0x6000AB6")]
			[Address(RVA = "0x6245120", Offset = "0x6244120", VA = "0x6245120", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000258")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x6000AB7")]
			[Address(RVA = "0x62451C0", Offset = "0x62441C0", VA = "0x62451C0", Slot = "6")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x17000259")]
		public object Key
		{
			[Token(Token = "0x6000AB8")]
			[Address(RVA = "0x6245230", Offset = "0x6244230", VA = "0x6245230", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700025A")]
		public object Value
		{
			[Token(Token = "0x6000AB9")]
			[Address(RVA = "0x6245280", Offset = "0x6244280", VA = "0x6245280", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000AB5")]
		[Address(RVA = "0x62444F0", Offset = "0x62434F0", VA = "0x62444F0")]
		public PropertyDescriptorEnumerator(PropertyDescriptorCollection owner)
		{
		}

		[Token(Token = "0x6000ABA")]
		[Address(RVA = "0x62452D0", Offset = "0x62442D0", VA = "0x62452D0", Slot = "7")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000ABB")]
		[Address(RVA = "0x6245300", Offset = "0x6244300", VA = "0x6245300", Slot = "9")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4000658")]
	[FieldOffset(Offset = "0x0")]
	public static readonly PropertyDescriptorCollection Empty;

	[Token(Token = "0x4000659")]
	[FieldOffset(Offset = "0x10")]
	private IDictionary _cachedFoundProperties;

	[Token(Token = "0x400065A")]
	[FieldOffset(Offset = "0x18")]
	private bool _cachedIgnoreCase;

	[Token(Token = "0x400065B")]
	[FieldOffset(Offset = "0x20")]
	private PropertyDescriptor[] _properties;

	[Token(Token = "0x400065C")]
	[FieldOffset(Offset = "0x28")]
	private readonly string[] _namedSort;

	[Token(Token = "0x400065D")]
	[FieldOffset(Offset = "0x30")]
	private readonly IComparer _comparer;

	[Token(Token = "0x400065E")]
	[FieldOffset(Offset = "0x38")]
	private bool _propsOwned;

	[Token(Token = "0x400065F")]
	[FieldOffset(Offset = "0x39")]
	private bool _needSort;

	[Token(Token = "0x4000660")]
	[FieldOffset(Offset = "0x3A")]
	private bool _readOnly;

	[Token(Token = "0x4000661")]
	[FieldOffset(Offset = "0x40")]
	private readonly object _internalSyncObject;

	[Token(Token = "0x17000249")]
	public int Count
	{
		[Token(Token = "0x6000A84")]
		[Address(RVA = "0x6243070", Offset = "0x6242070", VA = "0x6243070")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000A85")]
		[Address(RVA = "0x6243080", Offset = "0x6242080", VA = "0x6243080")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700024A")]
	public virtual PropertyDescriptor this[int index]
	{
		[Token(Token = "0x6000A86")]
		[Address(RVA = "0x6243090", Offset = "0x6242090", VA = "0x6243090", Slot = "31")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024B")]
	public virtual PropertyDescriptor this[string name]
	{
		[Token(Token = "0x6000A87")]
		[Address(RVA = "0x62431B0", Offset = "0x62421B0", VA = "0x62431B0", Slot = "32")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024C")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000A9A")]
		[Address(RVA = "0x6244270", Offset = "0x6243270", VA = "0x6244270", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700024D")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000A9B")]
		[Address(RVA = "0x6244280", Offset = "0x6243280", VA = "0x6244280", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024E")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x6000A9C")]
		[Address(RVA = "0x6244290", Offset = "0x6243290", VA = "0x6244290", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700024F")]
	private bool System_002ECollections_002EIDictionary_002EIsFixedSize
	{
		[Token(Token = "0x6000AA4")]
		[Address(RVA = "0x6244530", Offset = "0x6243530", VA = "0x6244530", Slot = "28")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000250")]
	private bool System_002ECollections_002EIDictionary_002EIsReadOnly
	{
		[Token(Token = "0x6000AA5")]
		[Address(RVA = "0x6244540", Offset = "0x6243540", VA = "0x6244540", Slot = "27")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IDictionary.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000251")]
	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x6244550", Offset = "0x6243550", VA = "0x6244550", Slot = "20")]
	private object System_002ECollections_002EIDictionary_002Eget_Item(object key)
	{
		return null;
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x6244580", Offset = "0x6243580", VA = "0x6244580", Slot = "21")]
	private void System_002ECollections_002EIDictionary_002Eset_Item(object key, object value)
	{
	}

	[Token(Token = "0x17000252")]
	private ICollection System_002ECollections_002EIDictionary_002EKeys
	{
		[Token(Token = "0x6000AA8")]
		[Address(RVA = "0x6244950", Offset = "0x6243950", VA = "0x6244950", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000253")]
	private ICollection System_002ECollections_002EIDictionary_002EValues
	{
		[Token(Token = "0x6000AA9")]
		[Address(RVA = "0x6244A40", Offset = "0x6243A40", VA = "0x6244A40", Slot = "23")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000254")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6000AAF")]
		[Address(RVA = "0x6244E20", Offset = "0x6243E20", VA = "0x6244E20", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000255")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6000AB0")]
		[Address(RVA = "0x6244E30", Offset = "0x6243E30", VA = "0x6244E30", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000256")]
	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x6244EB0", Offset = "0x6243EB0", VA = "0x6244EB0", Slot = "9")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x6244ED0", Offset = "0x6243ED0", VA = "0x6244ED0", Slot = "10")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x6000A81")]
	[Address(RVA = "0x6242DF0", Offset = "0x6241DF0", VA = "0x6242DF0")]
	public PropertyDescriptorCollection(PropertyDescriptor[] properties)
	{
	}

	[Token(Token = "0x6000A82")]
	[Address(RVA = "0x6242F20", Offset = "0x6241F20", VA = "0x6242F20")]
	public PropertyDescriptorCollection(PropertyDescriptor[] properties, bool readOnly)
	{
	}

	[Token(Token = "0x6000A83")]
	[Address(RVA = "0x6242F40", Offset = "0x6241F40", VA = "0x6242F40")]
	private PropertyDescriptorCollection(PropertyDescriptor[] properties, int propCount, string[] namedSort, IComparer comparer)
	{
	}

	[Token(Token = "0x6000A88")]
	[Address(RVA = "0x62431D0", Offset = "0x62421D0", VA = "0x62431D0")]
	public int Add(PropertyDescriptor value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A89")]
	[Address(RVA = "0x6243390", Offset = "0x6242390", VA = "0x6243390")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000A8A")]
	[Address(RVA = "0x62433F0", Offset = "0x62423F0", VA = "0x62433F0")]
	public bool Contains(PropertyDescriptor value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x6243490", Offset = "0x6242490", VA = "0x6243490", Slot = "4")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000A8C")]
	[Address(RVA = "0x6243110", Offset = "0x6242110", VA = "0x6243110")]
	private void EnsurePropsOwned()
	{
	}

	[Token(Token = "0x6000A8D")]
	[Address(RVA = "0x62432A0", Offset = "0x62422A0", VA = "0x62432A0")]
	private void EnsureSize(int sizeNeeded)
	{
	}

	[Token(Token = "0x6000A8E")]
	[Address(RVA = "0x62437E0", Offset = "0x62427E0", VA = "0x62437E0", Slot = "33")]
	public virtual PropertyDescriptor Find(string name, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6000A8F")]
	[Address(RVA = "0x6243440", Offset = "0x6242440", VA = "0x6243440")]
	public int IndexOf(PropertyDescriptor value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x6243D70", Offset = "0x6242D70", VA = "0x6243D70")]
	public void Insert(int index, PropertyDescriptor value)
	{
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x6243E60", Offset = "0x6242E60", VA = "0x6243E60")]
	public void Remove(PropertyDescriptor value)
	{
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x6243F00", Offset = "0x6242F00", VA = "0x6243F00")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x6243FB0", Offset = "0x6242FB0", VA = "0x6243FB0", Slot = "34")]
	public virtual PropertyDescriptorCollection Sort()
	{
		return null;
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x6244020", Offset = "0x6243020", VA = "0x6244020", Slot = "35")]
	public virtual PropertyDescriptorCollection Sort(string[] names)
	{
		return null;
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x6244090", Offset = "0x6243090", VA = "0x6244090", Slot = "36")]
	public virtual PropertyDescriptorCollection Sort(string[] names, IComparer comparer)
	{
		return null;
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x6244100", Offset = "0x6243100", VA = "0x6244100", Slot = "37")]
	public virtual PropertyDescriptorCollection Sort(IComparer comparer)
	{
		return null;
	}

	[Token(Token = "0x6000A97")]
	[Address(RVA = "0x62434C0", Offset = "0x62424C0", VA = "0x62434C0")]
	protected void InternalSort(string[] names)
	{
	}

	[Token(Token = "0x6000A98")]
	[Address(RVA = "0x6244170", Offset = "0x6243170", VA = "0x6244170")]
	protected void InternalSort(IComparer sorter)
	{
	}

	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x62441E0", Offset = "0x62431E0", VA = "0x62441E0", Slot = "38")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x62442A0", Offset = "0x62432A0", VA = "0x62442A0", Slot = "13")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x6244300", Offset = "0x6243300", VA = "0x6244300", Slot = "26")]
	private void System_002ECollections_002EIDictionary_002EClear()
	{
	}

	[Token(Token = "0x6000A9F")]
	[Address(RVA = "0x6244360", Offset = "0x6243360", VA = "0x6244360", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x6244380", Offset = "0x6243380", VA = "0x6244380", Slot = "19")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000AA1")]
	[Address(RVA = "0x6244390", Offset = "0x6243390", VA = "0x6244390", Slot = "25")]
	private void System_002ECollections_002EIDictionary_002EAdd(object key, object value)
	{
	}

	[Token(Token = "0x6000AA2")]
	[Address(RVA = "0x6244440", Offset = "0x6243440", VA = "0x6244440", Slot = "24")]
	private bool System_002ECollections_002EIDictionary_002EContains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x6244480", Offset = "0x6243480", VA = "0x6244480", Slot = "29")]
	private IDictionaryEnumerator System_002ECollections_002EIDictionary_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x6244B00", Offset = "0x6243B00", VA = "0x6244B00", Slot = "30")]
	private void System_002ECollections_002EIDictionary_002ERemove(object key)
	{
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x6244BE0", Offset = "0x6243BE0", VA = "0x6244BE0", Slot = "11")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x6244C50", Offset = "0x6243C50", VA = "0x6244C50", Slot = "12")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x6244D00", Offset = "0x6243D00", VA = "0x6244D00", Slot = "16")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x6244DA0", Offset = "0x6243DA0", VA = "0x6244DA0", Slot = "17")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x6244E40", Offset = "0x6243E40", VA = "0x6244E40", Slot = "18")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}
}
