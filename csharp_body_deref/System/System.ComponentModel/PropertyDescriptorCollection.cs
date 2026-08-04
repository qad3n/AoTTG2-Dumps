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
			[Address(RVA = "0x48A5980", Offset = "0x48A5980", VA = "0x48A5980", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000418")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x600122F")]
			[Address(RVA = "0x48A5A20", Offset = "0x48A5A20", VA = "0x48A5A20", Slot = "6")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x17000419")]
		public object Key
		{
			[Token(Token = "0x6001230")]
			[Address(RVA = "0x48A5A90", Offset = "0x48A5A90", VA = "0x48A5A90", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700041A")]
		public object Value
		{
			[Token(Token = "0x6001231")]
			[Address(RVA = "0x48A5AE0", Offset = "0x48A5AE0", VA = "0x48A5AE0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600122D")]
		[Address(RVA = "0x48A4D40", Offset = "0x48A4D40", VA = "0x48A4D40")]
		public PropertyDescriptorEnumerator(PropertyDescriptorCollection owner)
		{
		}

		[Token(Token = "0x6001232")]
		[Address(RVA = "0x48A5B30", Offset = "0x48A5B30", VA = "0x48A5B30", Slot = "7")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001233")]
		[Address(RVA = "0x48A5B60", Offset = "0x48A5B60", VA = "0x48A5B60", Slot = "9")]
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
		[Address(RVA = "0x48A3750", Offset = "0x48A3750", VA = "0x48A3750")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60011FD")]
		[Address(RVA = "0x48A3760", Offset = "0x48A3760", VA = "0x48A3760")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700040A")]
	public virtual PropertyDescriptor this[int index]
	{
		[Token(Token = "0x60011FE")]
		[Address(RVA = "0x48A3770", Offset = "0x48A3770", VA = "0x48A3770", Slot = "31")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700040B")]
	public virtual PropertyDescriptor this[string name]
	{
		[Token(Token = "0x60011FF")]
		[Address(RVA = "0x48A3890", Offset = "0x48A3890", VA = "0x48A3890", Slot = "32")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700040C")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6001212")]
		[Address(RVA = "0x48A4AC0", Offset = "0x48A4AC0", VA = "0x48A4AC0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700040D")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6001213")]
		[Address(RVA = "0x48A4AD0", Offset = "0x48A4AD0", VA = "0x48A4AD0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700040E")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x6001214")]
		[Address(RVA = "0x48A4AE0", Offset = "0x48A4AE0", VA = "0x48A4AE0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700040F")]
	private bool System_002ECollections_002EIDictionary_002EIsFixedSize
	{
		[Token(Token = "0x600121C")]
		[Address(RVA = "0x48A4D80", Offset = "0x48A4D80", VA = "0x48A4D80", Slot = "28")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000410")]
	private bool System_002ECollections_002EIDictionary_002EIsReadOnly
	{
		[Token(Token = "0x600121D")]
		[Address(RVA = "0x48A4D90", Offset = "0x48A4D90", VA = "0x48A4D90", Slot = "27")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000411")]
	private object System_002ECollections_002EIDictionary_002EItem
	{
		[Token(Token = "0x600121E")]
		[Address(RVA = "0x48A4DA0", Offset = "0x48A4DA0", VA = "0x48A4DA0", Slot = "20")]
		get
		{
			return null;
		}
		[Token(Token = "0x600121F")]
		[Address(RVA = "0x48A4DD0", Offset = "0x48A4DD0", VA = "0x48A4DD0", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x17000412")]
	private ICollection System_002ECollections_002EIDictionary_002EKeys
	{
		[Token(Token = "0x6001220")]
		[Address(RVA = "0x48A51A0", Offset = "0x48A51A0", VA = "0x48A51A0", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000413")]
	private ICollection System_002ECollections_002EIDictionary_002EValues
	{
		[Token(Token = "0x6001221")]
		[Address(RVA = "0x48A52A0", Offset = "0x48A52A0", VA = "0x48A52A0", Slot = "23")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000414")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6001227")]
		[Address(RVA = "0x48A5680", Offset = "0x48A5680", VA = "0x48A5680", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000415")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6001228")]
		[Address(RVA = "0x48A5690", Offset = "0x48A5690", VA = "0x48A5690", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000416")]
	private object System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x600122A")]
		[Address(RVA = "0x48A5710", Offset = "0x48A5710", VA = "0x48A5710", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x600122B")]
		[Address(RVA = "0x48A5730", Offset = "0x48A5730", VA = "0x48A5730", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x60011F9")]
	[Address(RVA = "0x48A34D0", Offset = "0x48A34D0", VA = "0x48A34D0")]
	public PropertyDescriptorCollection(PropertyDescriptor[] properties)
	{
	}

	[Token(Token = "0x60011FA")]
	[Address(RVA = "0x48A3600", Offset = "0x48A3600", VA = "0x48A3600")]
	public PropertyDescriptorCollection(PropertyDescriptor[] properties, bool readOnly)
	{
	}

	[Token(Token = "0x60011FB")]
	[Address(RVA = "0x48A3620", Offset = "0x48A3620", VA = "0x48A3620")]
	private PropertyDescriptorCollection(PropertyDescriptor[] properties, int propCount, string[] namedSort, IComparer comparer)
	{
	}

	[Token(Token = "0x6001200")]
	[Address(RVA = "0x48A38B0", Offset = "0x48A38B0", VA = "0x48A38B0")]
	public int Add(PropertyDescriptor value)
	{
		return default(int);
	}

	[Token(Token = "0x6001201")]
	[Address(RVA = "0x48A3A80", Offset = "0x48A3A80", VA = "0x48A3A80")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001202")]
	[Address(RVA = "0x48A3AE0", Offset = "0x48A3AE0", VA = "0x48A3AE0")]
	public bool Contains(PropertyDescriptor value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001203")]
	[Address(RVA = "0x48A3B80", Offset = "0x48A3B80", VA = "0x48A3B80", Slot = "4")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001204")]
	[Address(RVA = "0x48A37F0", Offset = "0x48A37F0", VA = "0x48A37F0")]
	private void EnsurePropsOwned()
	{
	}

	[Token(Token = "0x6001205")]
	[Address(RVA = "0x48A3980", Offset = "0x48A3980", VA = "0x48A3980")]
	private void EnsureSize(int sizeNeeded)
	{
	}

	[Token(Token = "0x6001206")]
	[Address(RVA = "0x48A3EF0", Offset = "0x48A3EF0", VA = "0x48A3EF0", Slot = "33")]
	public virtual PropertyDescriptor Find(string name, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6001207")]
	[Address(RVA = "0x48A3B30", Offset = "0x48A3B30", VA = "0x48A3B30")]
	public int IndexOf(PropertyDescriptor value)
	{
		return default(int);
	}

	[Token(Token = "0x6001208")]
	[Address(RVA = "0x48A45C0", Offset = "0x48A45C0", VA = "0x48A45C0")]
	public void Insert(int index, PropertyDescriptor value)
	{
	}

	[Token(Token = "0x6001209")]
	[Address(RVA = "0x48A46B0", Offset = "0x48A46B0", VA = "0x48A46B0")]
	public void Remove(PropertyDescriptor value)
	{
	}

	[Token(Token = "0x600120A")]
	[Address(RVA = "0x48A4750", Offset = "0x48A4750", VA = "0x48A4750")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x600120B")]
	[Address(RVA = "0x48A4800", Offset = "0x48A4800", VA = "0x48A4800", Slot = "34")]
	public virtual PropertyDescriptorCollection Sort()
	{
		return null;
	}

	[Token(Token = "0x600120C")]
	[Address(RVA = "0x48A4870", Offset = "0x48A4870", VA = "0x48A4870", Slot = "35")]
	public virtual PropertyDescriptorCollection Sort(string[] names)
	{
		return null;
	}

	[Token(Token = "0x600120D")]
	[Address(RVA = "0x48A48E0", Offset = "0x48A48E0", VA = "0x48A48E0", Slot = "36")]
	public virtual PropertyDescriptorCollection Sort(string[] names, IComparer comparer)
	{
		return null;
	}

	[Token(Token = "0x600120E")]
	[Address(RVA = "0x48A4950", Offset = "0x48A4950", VA = "0x48A4950", Slot = "37")]
	public virtual PropertyDescriptorCollection Sort(IComparer comparer)
	{
		return null;
	}

	[Token(Token = "0x600120F")]
	[Address(RVA = "0x48A3BB0", Offset = "0x48A3BB0", VA = "0x48A3BB0")]
	protected void InternalSort(string[] names)
	{
	}

	[Token(Token = "0x6001210")]
	[Address(RVA = "0x48A49C0", Offset = "0x48A49C0", VA = "0x48A49C0")]
	protected void InternalSort(IComparer sorter)
	{
	}

	[Token(Token = "0x6001211")]
	[Address(RVA = "0x48A4A30", Offset = "0x48A4A30", VA = "0x48A4A30", Slot = "38")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001215")]
	[Address(RVA = "0x48A4AF0", Offset = "0x48A4AF0", VA = "0x48A4AF0", Slot = "13")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6001216")]
	[Address(RVA = "0x48A4B50", Offset = "0x48A4B50", VA = "0x48A4B50", Slot = "26")]
	private void System_002ECollections_002EIDictionary_002EClear()
	{
	}

	[Token(Token = "0x6001217")]
	[Address(RVA = "0x48A4BB0", Offset = "0x48A4BB0", VA = "0x48A4BB0", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001218")]
	[Address(RVA = "0x48A4BD0", Offset = "0x48A4BD0", VA = "0x48A4BD0", Slot = "19")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6001219")]
	[Address(RVA = "0x48A4BE0", Offset = "0x48A4BE0", VA = "0x48A4BE0", Slot = "25")]
	private void System_002ECollections_002EIDictionary_002EAdd(object key, object value)
	{
	}

	[Token(Token = "0x600121A")]
	[Address(RVA = "0x48A4C90", Offset = "0x48A4C90", VA = "0x48A4C90", Slot = "24")]
	private bool System_002ECollections_002EIDictionary_002EContains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x600121B")]
	[Address(RVA = "0x48A4CD0", Offset = "0x48A4CD0", VA = "0x48A4CD0", Slot = "29")]
	private IDictionaryEnumerator System_002ECollections_002EIDictionary_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001222")]
	[Address(RVA = "0x48A5360", Offset = "0x48A5360", VA = "0x48A5360", Slot = "30")]
	private void System_002ECollections_002EIDictionary_002ERemove(object key)
	{
	}

	[Token(Token = "0x6001223")]
	[Address(RVA = "0x48A5440", Offset = "0x48A5440", VA = "0x48A5440", Slot = "11")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6001224")]
	[Address(RVA = "0x48A54B0", Offset = "0x48A54B0", VA = "0x48A54B0", Slot = "12")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001225")]
	[Address(RVA = "0x48A5560", Offset = "0x48A5560", VA = "0x48A5560", Slot = "16")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6001226")]
	[Address(RVA = "0x48A5600", Offset = "0x48A5600", VA = "0x48A5600", Slot = "17")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6001229")]
	[Address(RVA = "0x48A56A0", Offset = "0x48A56A0", VA = "0x48A56A0", Slot = "18")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}
}
