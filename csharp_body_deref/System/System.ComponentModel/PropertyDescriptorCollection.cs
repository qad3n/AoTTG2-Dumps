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

[Token(Token = "0x20001D3")]
public class PropertyDescriptorCollection : ICollection, IEnumerable, IList, IDictionary
{
	[Token(Token = "0x20001D4")]
	private class PropertyDescriptorEnumerator : IDictionaryEnumerator, IEnumerator
	{
		[Token(Token = "0x4000732")]
		[FieldOffset(Offset = "0x10")]
		private PropertyDescriptorCollection _owner;

		[Token(Token = "0x4000733")]
		[FieldOffset(Offset = "0x18")]
		private int _index;

		[Token(Token = "0x17000286")]
		public object Current
		{
			[Token(Token = "0x6000C76")]
			[Address(RVA = "0x28B8720", Offset = "0x28B6D20", VA = "0x1828B8720", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000287")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x6000C77")]
			[Address(RVA = "0x28B87C0", Offset = "0x28B6DC0", VA = "0x1828B87C0", Slot = "6")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x17000288")]
		public object Key
		{
			[Token(Token = "0x6000C78")]
			[Address(RVA = "0x28B8830", Offset = "0x28B6E30", VA = "0x1828B8830", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000289")]
		public object Value
		{
			[Token(Token = "0x6000C79")]
			[Address(RVA = "0x28B8830", Offset = "0x28B6E30", VA = "0x1828B8830", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C75")]
		[Address(RVA = "0x18A2510", Offset = "0x18A0B10", VA = "0x1818A2510")]
		public PropertyDescriptorEnumerator(PropertyDescriptorCollection owner)
		{
		}

		[Token(Token = "0x6000C7A")]
		[Address(RVA = "0x28B86F0", Offset = "0x28B6CF0", VA = "0x1828B86F0", Slot = "7")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C7B")]
		[Address(RVA = "0x1B5AFF0", Offset = "0x1B595F0", VA = "0x181B5AFF0", Slot = "9")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4000727")]
	[FieldOffset(Offset = "0x0")]
	public static readonly PropertyDescriptorCollection Empty;

	[Token(Token = "0x4000728")]
	[FieldOffset(Offset = "0x10")]
	private IDictionary _cachedFoundProperties;

	[Token(Token = "0x4000729")]
	[FieldOffset(Offset = "0x18")]
	private bool _cachedIgnoreCase;

	[Token(Token = "0x400072A")]
	[FieldOffset(Offset = "0x20")]
	private PropertyDescriptor[] _properties;

	[Token(Token = "0x400072B")]
	[FieldOffset(Offset = "0x28")]
	private readonly string[] _namedSort;

	[Token(Token = "0x400072C")]
	[FieldOffset(Offset = "0x30")]
	private readonly IComparer _comparer;

	[Token(Token = "0x400072D")]
	[FieldOffset(Offset = "0x38")]
	private bool _propsOwned;

	[Token(Token = "0x400072E")]
	[FieldOffset(Offset = "0x39")]
	private bool _needSort;

	[Token(Token = "0x400072F")]
	[FieldOffset(Offset = "0x3A")]
	private bool _readOnly;

	[Token(Token = "0x4000730")]
	[FieldOffset(Offset = "0x40")]
	private readonly object _internalSyncObject;

	[Token(Token = "0x17000278")]
	public int Count
	{
		[Token(Token = "0x6000C44")]
		[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000C45")]
		[Address(RVA = "0xB3E0D0", Offset = "0xB3C6D0", VA = "0x180B3E0D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000279")]
	public virtual PropertyDescriptor this[int index]
	{
		[Token(Token = "0x6000C46")]
		[Address(RVA = "0x28B8650", Offset = "0x28B6C50", VA = "0x1828B8650", Slot = "31")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027A")]
	public virtual PropertyDescriptor this[string name]
	{
		[Token(Token = "0x6000C47")]
		[Address(RVA = "0x28B86D0", Offset = "0x28B6CD0", VA = "0x1828B86D0", Slot = "32")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027B")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000C5A")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700027C")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000C5B")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027D")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x6000C5C")]
		[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700027E")]
	private bool System_002ECollections_002EIDictionary_002EIsFixedSize
	{
		[Token(Token = "0x6000C64")]
		[Address(RVA = "0x19EDC10", Offset = "0x19EC210", VA = "0x1819EDC10", Slot = "28")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700027F")]
	private bool System_002ECollections_002EIDictionary_002EIsReadOnly
	{
		[Token(Token = "0x6000C65")]
		[Address(RVA = "0x19EDC10", Offset = "0x19EC210", VA = "0x1819EDC10", Slot = "27")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IDictionary.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000280")]
	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x28B75B0", Offset = "0x28B5BB0", VA = "0x1828B75B0", Slot = "20")]
	private object System_002ECollections_002EIDictionary_002Eget_Item(object key)
	{
		return null;
	}

	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x28B77A0", Offset = "0x28B5DA0", VA = "0x1828B77A0", Slot = "21")]
	private void System_002ECollections_002EIDictionary_002Eset_Item(object key, object value)
	{
	}

	[Token(Token = "0x17000281")]
	private ICollection System_002ECollections_002EIDictionary_002EKeys
	{
		[Token(Token = "0x6000C68")]
		[Address(RVA = "0x28B7610", Offset = "0x28B5C10", VA = "0x1828B7610", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000282")]
	private ICollection System_002ECollections_002EIDictionary_002EValues
	{
		[Token(Token = "0x6000C69")]
		[Address(RVA = "0x28B76D0", Offset = "0x28B5CD0", VA = "0x1828B76D0", Slot = "23")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000283")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6000C6F")]
		[Address(RVA = "0x19EDC10", Offset = "0x19EC210", VA = "0x1819EDC10", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000284")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6000C70")]
		[Address(RVA = "0x19EDC10", Offset = "0x19EC210", VA = "0x1819EDC10", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000285")]
	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x28B8060", Offset = "0x28B6660", VA = "0x1828B8060", Slot = "9")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x28B8080", Offset = "0x28B6680", VA = "0x1828B8080", Slot = "10")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x28B84C0", Offset = "0x28B6AC0", VA = "0x1828B84C0")]
	public PropertyDescriptorCollection(PropertyDescriptor[] properties)
	{
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x28B8590", Offset = "0x28B6B90", VA = "0x1828B8590")]
	public PropertyDescriptorCollection(PropertyDescriptor[] properties, bool readOnly)
	{
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x28B83A0", Offset = "0x28B69A0", VA = "0x1828B83A0")]
	private PropertyDescriptorCollection(PropertyDescriptor[] properties, int propCount, string[] namedSort, IComparer comparer)
	{
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x28B6230", Offset = "0x28B4830", VA = "0x1828B6230")]
	public int Add(PropertyDescriptor value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x28B6320", Offset = "0x28B4920", VA = "0x1828B6320")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x28B6390", Offset = "0x28B4990", VA = "0x1828B6390")]
	public bool Contains(PropertyDescriptor value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x28B63F0", Offset = "0x28B49F0", VA = "0x1828B63F0", Slot = "4")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x28B6440", Offset = "0x28B4A40", VA = "0x1828B6440")]
	private void EnsurePropsOwned()
	{
	}

	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x28B64F0", Offset = "0x28B4AF0", VA = "0x1828B64F0")]
	private void EnsureSize(int sizeNeeded)
	{
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x28B6610", Offset = "0x28B4C10", VA = "0x1828B6610", Slot = "33")]
	public virtual PropertyDescriptor Find(string name, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x28B6B00", Offset = "0x28B5100", VA = "0x1828B6B00")]
	public int IndexOf(PropertyDescriptor value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x28B6B60", Offset = "0x28B5160", VA = "0x1828B6B60")]
	public void Insert(int index, PropertyDescriptor value)
	{
	}

	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x28B70C0", Offset = "0x28B56C0", VA = "0x1828B70C0")]
	public void Remove(PropertyDescriptor value)
	{
	}

	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x28B7000", Offset = "0x28B5600", VA = "0x1828B7000")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x28B7270", Offset = "0x28B5870", VA = "0x1828B7270", Slot = "34")]
	public virtual PropertyDescriptorCollection Sort()
	{
		return null;
	}

	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x28B71F0", Offset = "0x28B57F0", VA = "0x1828B71F0", Slot = "35")]
	public virtual PropertyDescriptorCollection Sort(string[] names)
	{
		return null;
	}

	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x28B7170", Offset = "0x28B5770", VA = "0x1828B7170", Slot = "36")]
	public virtual PropertyDescriptorCollection Sort(string[] names, IComparer comparer)
	{
		return null;
	}

	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x28B72F0", Offset = "0x28B58F0", VA = "0x1828B72F0", Slot = "37")]
	public virtual PropertyDescriptorCollection Sort(IComparer comparer)
	{
		return null;
	}

	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x28B6CF0", Offset = "0x28B52F0", VA = "0x1828B6CF0")]
	protected void InternalSort(string[] names)
	{
	}

	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x28B6C70", Offset = "0x28B5270", VA = "0x1828B6C70")]
	protected void InternalSort(IComparer sorter)
	{
	}

	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x28B6A50", Offset = "0x28B5050", VA = "0x1828B6A50", Slot = "38")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x28B6320", Offset = "0x28B4920", VA = "0x1828B6320", Slot = "13")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6000C5E")]
	[Address(RVA = "0x28B6320", Offset = "0x28B4920", VA = "0x1828B6320", Slot = "26")]
	private void System_002ECollections_002EIDictionary_002EClear()
	{
	}

	[Token(Token = "0x6000C5F")]
	[Address(RVA = "0x28B7BE0", Offset = "0x28B61E0", VA = "0x1828B7BE0", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000C60")]
	[Address(RVA = "0x28B7F50", Offset = "0x28B6550", VA = "0x1828B7F50", Slot = "19")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000C61")]
	[Address(RVA = "0x28B7370", Offset = "0x28B5970", VA = "0x1828B7370", Slot = "25")]
	private void System_002ECollections_002EIDictionary_002EAdd(object key, object value)
	{
	}

	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x28B7430", Offset = "0x28B5A30", VA = "0x1828B7430", Slot = "24")]
	private bool System_002ECollections_002EIDictionary_002EContains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x28B74A0", Offset = "0x28B5AA0", VA = "0x1828B74A0", Slot = "29")]
	private IDictionaryEnumerator System_002ECollections_002EIDictionary_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x28B7510", Offset = "0x28B5B10", VA = "0x1828B7510", Slot = "30")]
	private void System_002ECollections_002EIDictionary_002ERemove(object key)
	{
	}

	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x28B7C00", Offset = "0x28B6200", VA = "0x1828B7C00", Slot = "11")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x28B7C80", Offset = "0x28B6280", VA = "0x1828B7C80", Slot = "12")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C6D")]
	[Address(RVA = "0x28B7D30", Offset = "0x28B6330", VA = "0x1828B7D30", Slot = "16")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x28B7DE0", Offset = "0x28B63E0", VA = "0x1828B7DE0", Slot = "17")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6000C71")]
	[Address(RVA = "0x28B7F60", Offset = "0x28B6560", VA = "0x1828B7F60", Slot = "18")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}
}
