using System.Collections;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002C8")]
public class PropertyDescriptorCollection : ICollection, IEnumerable, IList, IDictionary
{
	[Token(Token = "0x20002C9")]
	private class PropertyDescriptorEnumerator : IDictionaryEnumerator, IEnumerator
	{
		[Token(Token = "0x4000DFB")]
		[FieldOffset(Offset = "0x10")]
		private PropertyDescriptorCollection _owner;

		[Token(Token = "0x4000DFC")]
		[FieldOffset(Offset = "0x18")]
		private int _index;

		[Token(Token = "0x17000417")]
		public object Current
		{
			[Token(Token = "0x600122E")]
			[Address(RVA = "0x4580880", Offset = "0x4580880", VA = "0x4580880", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000418")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x600122F")]
			[Address(RVA = "0x4580920", Offset = "0x4580920", VA = "0x4580920", Slot = "6")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x17000419")]
		public object Key
		{
			[Token(Token = "0x6001230")]
			[Address(RVA = "0x4580990", Offset = "0x4580990", VA = "0x4580990", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700041A")]
		public object Value
		{
			[Token(Token = "0x6001231")]
			[Address(RVA = "0x45809E0", Offset = "0x45809E0", VA = "0x45809E0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600122D")]
		[Address(RVA = "0x457FC40", Offset = "0x457FC40", VA = "0x457FC40")]
		public PropertyDescriptorEnumerator(PropertyDescriptorCollection owner)
		{
		}

		[Token(Token = "0x6001232")]
		[Address(RVA = "0x4580A30", Offset = "0x4580A30", VA = "0x4580A30", Slot = "7")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001233")]
		[Address(RVA = "0x4580A60", Offset = "0x4580A60", VA = "0x4580A60", Slot = "9")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4000DF0")]
	[FieldOffset(Offset = "0x0")]
	public static readonly PropertyDescriptorCollection Empty;

	[Token(Token = "0x4000DF1")]
	[FieldOffset(Offset = "0x10")]
	private IDictionary _cachedFoundProperties;

	[Token(Token = "0x4000DF2")]
	[FieldOffset(Offset = "0x18")]
	private bool _cachedIgnoreCase;

	[Token(Token = "0x4000DF3")]
	[FieldOffset(Offset = "0x20")]
	private PropertyDescriptor[] _properties;

	[Token(Token = "0x4000DF4")]
	[FieldOffset(Offset = "0x28")]
	private readonly string[] _namedSort;

	[Token(Token = "0x4000DF5")]
	[FieldOffset(Offset = "0x30")]
	private readonly IComparer _comparer;

	[Token(Token = "0x4000DF6")]
	[FieldOffset(Offset = "0x38")]
	private bool _propsOwned;

	[Token(Token = "0x4000DF7")]
	[FieldOffset(Offset = "0x39")]
	private bool _needSort;

	[Token(Token = "0x4000DF8")]
	[FieldOffset(Offset = "0x3A")]
	private bool _readOnly;

	[Token(Token = "0x4000DF9")]
	[FieldOffset(Offset = "0x40")]
	private readonly object _internalSyncObject;

	[Token(Token = "0x17000409")]
	public int Count
	{
		[Token(Token = "0x60011FC")]
		[Address(RVA = "0x457E650", Offset = "0x457E650", VA = "0x457E650")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60011FD")]
		[Address(RVA = "0x457E660", Offset = "0x457E660", VA = "0x457E660")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700040A")]
	public virtual PropertyDescriptor this[int index]
	{
		[Token(Token = "0x60011FE")]
		[Address(RVA = "0x457E670", Offset = "0x457E670", VA = "0x457E670", Slot = "31")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700040B")]
	public virtual PropertyDescriptor this[string name]
	{
		[Token(Token = "0x60011FF")]
		[Address(RVA = "0x457E790", Offset = "0x457E790", VA = "0x457E790", Slot = "32")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700040C")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6001212")]
		[Address(RVA = "0x457F9C0", Offset = "0x457F9C0", VA = "0x457F9C0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700040D")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6001213")]
		[Address(RVA = "0x457F9D0", Offset = "0x457F9D0", VA = "0x457F9D0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700040E")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x6001214")]
		[Address(RVA = "0x457F9E0", Offset = "0x457F9E0", VA = "0x457F9E0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700040F")]
	private bool System_002ECollections_002EIDictionary_002EIsFixedSize
	{
		[Token(Token = "0x600121C")]
		[Address(RVA = "0x457FC80", Offset = "0x457FC80", VA = "0x457FC80", Slot = "28")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000410")]
	private bool System_002ECollections_002EIDictionary_002EIsReadOnly
	{
		[Token(Token = "0x600121D")]
		[Address(RVA = "0x457FC90", Offset = "0x457FC90", VA = "0x457FC90", Slot = "27")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000411")]
	private object System_002ECollections_002EIDictionary_002EItem
	{
		[Token(Token = "0x600121E")]
		[Address(RVA = "0x457FCA0", Offset = "0x457FCA0", VA = "0x457FCA0", Slot = "20")]
		get
		{
			return null;
		}
		[Token(Token = "0x600121F")]
		[Address(RVA = "0x457FCD0", Offset = "0x457FCD0", VA = "0x457FCD0", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x17000412")]
	private ICollection System_002ECollections_002EIDictionary_002EKeys
	{
		[Token(Token = "0x6001220")]
		[Address(RVA = "0x45800A0", Offset = "0x45800A0", VA = "0x45800A0", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000413")]
	private ICollection System_002ECollections_002EIDictionary_002EValues
	{
		[Token(Token = "0x6001221")]
		[Address(RVA = "0x45801A0", Offset = "0x45801A0", VA = "0x45801A0", Slot = "23")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000414")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6001227")]
		[Address(RVA = "0x4580580", Offset = "0x4580580", VA = "0x4580580", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000415")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6001228")]
		[Address(RVA = "0x4580590", Offset = "0x4580590", VA = "0x4580590", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000416")]
	private object System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x600122A")]
		[Address(RVA = "0x4580610", Offset = "0x4580610", VA = "0x4580610", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x600122B")]
		[Address(RVA = "0x4580630", Offset = "0x4580630", VA = "0x4580630", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x60011F9")]
	[Address(RVA = "0x457E3D0", Offset = "0x457E3D0", VA = "0x457E3D0")]
	public PropertyDescriptorCollection(PropertyDescriptor[] properties)
	{
	}

	[Token(Token = "0x60011FA")]
	[Address(RVA = "0x457E500", Offset = "0x457E500", VA = "0x457E500")]
	public PropertyDescriptorCollection(PropertyDescriptor[] properties, bool readOnly)
	{
	}

	[Token(Token = "0x60011FB")]
	[Address(RVA = "0x457E520", Offset = "0x457E520", VA = "0x457E520")]
	private PropertyDescriptorCollection(PropertyDescriptor[] properties, int propCount, string[] namedSort, IComparer comparer)
	{
	}

	[Token(Token = "0x6001200")]
	[Address(RVA = "0x457E7B0", Offset = "0x457E7B0", VA = "0x457E7B0")]
	public int Add(PropertyDescriptor value)
	{
		return default(int);
	}

	[Token(Token = "0x6001201")]
	[Address(RVA = "0x457E980", Offset = "0x457E980", VA = "0x457E980")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001202")]
	[Address(RVA = "0x457E9E0", Offset = "0x457E9E0", VA = "0x457E9E0")]
	public bool Contains(PropertyDescriptor value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001203")]
	[Address(RVA = "0x457EA80", Offset = "0x457EA80", VA = "0x457EA80", Slot = "4")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001204")]
	[Address(RVA = "0x457E6F0", Offset = "0x457E6F0", VA = "0x457E6F0")]
	private void EnsurePropsOwned()
	{
	}

	[Token(Token = "0x6001205")]
	[Address(RVA = "0x457E880", Offset = "0x457E880", VA = "0x457E880")]
	private void EnsureSize(int sizeNeeded)
	{
	}

	[Token(Token = "0x6001206")]
	[Address(RVA = "0x457EDF0", Offset = "0x457EDF0", VA = "0x457EDF0", Slot = "33")]
	public virtual PropertyDescriptor Find(string name, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6001207")]
	[Address(RVA = "0x457EA30", Offset = "0x457EA30", VA = "0x457EA30")]
	public int IndexOf(PropertyDescriptor value)
	{
		return default(int);
	}

	[Token(Token = "0x6001208")]
	[Address(RVA = "0x457F4C0", Offset = "0x457F4C0", VA = "0x457F4C0")]
	public void Insert(int index, PropertyDescriptor value)
	{
	}

	[Token(Token = "0x6001209")]
	[Address(RVA = "0x457F5B0", Offset = "0x457F5B0", VA = "0x457F5B0")]
	public void Remove(PropertyDescriptor value)
	{
	}

	[Token(Token = "0x600120A")]
	[Address(RVA = "0x457F650", Offset = "0x457F650", VA = "0x457F650")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x600120B")]
	[Address(RVA = "0x457F700", Offset = "0x457F700", VA = "0x457F700", Slot = "34")]
	public virtual PropertyDescriptorCollection Sort()
	{
		return null;
	}

	[Token(Token = "0x600120C")]
	[Address(RVA = "0x457F770", Offset = "0x457F770", VA = "0x457F770", Slot = "35")]
	public virtual PropertyDescriptorCollection Sort(string[] names)
	{
		return null;
	}

	[Token(Token = "0x600120D")]
	[Address(RVA = "0x457F7E0", Offset = "0x457F7E0", VA = "0x457F7E0", Slot = "36")]
	public virtual PropertyDescriptorCollection Sort(string[] names, IComparer comparer)
	{
		return null;
	}

	[Token(Token = "0x600120E")]
	[Address(RVA = "0x457F850", Offset = "0x457F850", VA = "0x457F850", Slot = "37")]
	public virtual PropertyDescriptorCollection Sort(IComparer comparer)
	{
		return null;
	}

	[Token(Token = "0x600120F")]
	[Address(RVA = "0x457EAB0", Offset = "0x457EAB0", VA = "0x457EAB0")]
	protected void InternalSort(string[] names)
	{
	}

	[Token(Token = "0x6001210")]
	[Address(RVA = "0x457F8C0", Offset = "0x457F8C0", VA = "0x457F8C0")]
	protected void InternalSort(IComparer sorter)
	{
	}

	[Token(Token = "0x6001211")]
	[Address(RVA = "0x457F930", Offset = "0x457F930", VA = "0x457F930", Slot = "38")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001215")]
	[Address(RVA = "0x457F9F0", Offset = "0x457F9F0", VA = "0x457F9F0", Slot = "13")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6001216")]
	[Address(RVA = "0x457FA50", Offset = "0x457FA50", VA = "0x457FA50", Slot = "26")]
	private void System_002ECollections_002EIDictionary_002EClear()
	{
	}

	[Token(Token = "0x6001217")]
	[Address(RVA = "0x457FAB0", Offset = "0x457FAB0", VA = "0x457FAB0", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001218")]
	[Address(RVA = "0x457FAD0", Offset = "0x457FAD0", VA = "0x457FAD0", Slot = "19")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6001219")]
	[Address(RVA = "0x457FAE0", Offset = "0x457FAE0", VA = "0x457FAE0", Slot = "25")]
	private void System_002ECollections_002EIDictionary_002EAdd(object key, object value)
	{
	}

	[Token(Token = "0x600121A")]
	[Address(RVA = "0x457FB90", Offset = "0x457FB90", VA = "0x457FB90", Slot = "24")]
	private bool System_002ECollections_002EIDictionary_002EContains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x600121B")]
	[Address(RVA = "0x457FBD0", Offset = "0x457FBD0", VA = "0x457FBD0", Slot = "29")]
	private IDictionaryEnumerator System_002ECollections_002EIDictionary_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001222")]
	[Address(RVA = "0x4580260", Offset = "0x4580260", VA = "0x4580260", Slot = "30")]
	private void System_002ECollections_002EIDictionary_002ERemove(object key)
	{
	}

	[Token(Token = "0x6001223")]
	[Address(RVA = "0x4580340", Offset = "0x4580340", VA = "0x4580340", Slot = "11")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6001224")]
	[Address(RVA = "0x45803B0", Offset = "0x45803B0", VA = "0x45803B0", Slot = "12")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001225")]
	[Address(RVA = "0x4580460", Offset = "0x4580460", VA = "0x4580460", Slot = "16")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6001226")]
	[Address(RVA = "0x4580500", Offset = "0x4580500", VA = "0x4580500", Slot = "17")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6001229")]
	[Address(RVA = "0x45805A0", Offset = "0x45805A0", VA = "0x45805A0", Slot = "18")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}
}
