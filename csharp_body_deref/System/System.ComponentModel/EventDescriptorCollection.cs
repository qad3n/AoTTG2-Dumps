// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.EventDescriptorCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200019A")]
public class EventDescriptorCollection : ICollection, IEnumerable, IList
{
	[Token(Token = "0x200019B")]
	private class ArraySubsetEnumerator : IEnumerator
	{
		[Token(Token = "0x40006A4")]
		[FieldOffset(Offset = "0x10")]
		private readonly Array _array;

		[Token(Token = "0x40006A5")]
		[FieldOffset(Offset = "0x18")]
		private readonly int _total;

		[Token(Token = "0x40006A6")]
		[FieldOffset(Offset = "0x1C")]
		private int _current;

		[Token(Token = "0x1700020C")]
		public object Current
		{
			[Token(Token = "0x6000A8E")]
			[Address(RVA = "0x2892570", Offset = "0x2890B70", VA = "0x182892570", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A8B")]
		[Address(RVA = "0x2892520", Offset = "0x2890B20", VA = "0x182892520")]
		public ArraySubsetEnumerator(Array array, int count)
		{
		}

		[Token(Token = "0x6000A8C")]
		[Address(RVA = "0x2892500", Offset = "0x2890B00", VA = "0x182892500", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A8D")]
		[Address(RVA = "0x27C0AE0", Offset = "0x27BF0E0", VA = "0x1827C0AE0", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x400069C")]
	[FieldOffset(Offset = "0x10")]
	private EventDescriptor[] _events;

	[Token(Token = "0x400069D")]
	[FieldOffset(Offset = "0x18")]
	private string[] _namedSort;

	[Token(Token = "0x400069E")]
	[FieldOffset(Offset = "0x20")]
	private readonly IComparer _comparer;

	[Token(Token = "0x400069F")]
	[FieldOffset(Offset = "0x28")]
	private bool _eventsOwned;

	[Token(Token = "0x40006A0")]
	[FieldOffset(Offset = "0x29")]
	private bool _needSort;

	[Token(Token = "0x40006A1")]
	[FieldOffset(Offset = "0x2A")]
	private readonly bool _readOnly;

	[Token(Token = "0x40006A2")]
	[FieldOffset(Offset = "0x0")]
	public static readonly EventDescriptorCollection Empty;

	[Token(Token = "0x17000203")]
	public int Count
	{
		[Token(Token = "0x6000A65")]
		[Address(RVA = "0xB3E080", Offset = "0xB3C680", VA = "0x180B3E080")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000A66")]
		[Address(RVA = "0xB3E0E0", Offset = "0xB3C6E0", VA = "0x180B3E0E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000204")]
	public virtual EventDescriptor this[int index]
	{
		[Token(Token = "0x6000A67")]
		[Address(RVA = "0x289DAB0", Offset = "0x289C0B0", VA = "0x18289DAB0", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000205")]
	public virtual EventDescriptor this[string name]
	{
		[Token(Token = "0x6000A68")]
		[Address(RVA = "0x289DA90", Offset = "0x289C090", VA = "0x18289DA90", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000206")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000A7B")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000207")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000A7C")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000208")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x6000A7D")]
		[Address(RVA = "0xB3E080", Offset = "0xB3C680", VA = "0x180B3E080", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000209")]
	[Token(Token = "0x6000A7F")]
	[Address(RVA = "0x26EC620", Offset = "0x26EAC20", VA = "0x1826EC620", Slot = "9")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6000A80")]
	[Address(RVA = "0x289D620", Offset = "0x289BC20", VA = "0x18289D620", Slot = "10")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x1700020A")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6000A88")]
		[Address(RVA = "0x1573430", Offset = "0x1571A30", VA = "0x181573430", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020B")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6000A89")]
		[Address(RVA = "0x1573430", Offset = "0x1571A30", VA = "0x181573430", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000A62")]
	[Address(RVA = "0x289D880", Offset = "0x289BE80", VA = "0x18289D880")]
	public EventDescriptorCollection(EventDescriptor[] events)
	{
	}

	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x289D910", Offset = "0x289BF10", VA = "0x18289D910")]
	public EventDescriptorCollection(EventDescriptor[] events, bool readOnly)
	{
	}

	[Token(Token = "0x6000A64")]
	[Address(RVA = "0x289D9A0", Offset = "0x289BFA0", VA = "0x18289D9A0")]
	private EventDescriptorCollection(EventDescriptor[] events, int eventCount, string[] namedSort, IComparer comparer)
	{
	}

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x289C240", Offset = "0x289A840", VA = "0x18289C240")]
	public int Add(EventDescriptor value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x289C330", Offset = "0x289A930", VA = "0x18289C330")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x289C390", Offset = "0x289A990", VA = "0x18289C390")]
	public bool Contains(EventDescriptor value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x289CFF0", Offset = "0x289B5F0", VA = "0x18289CFF0", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x289C3F0", Offset = "0x289A9F0", VA = "0x18289C3F0")]
	private void EnsureEventsOwned()
	{
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x289C4A0", Offset = "0x289AAA0", VA = "0x18289C4A0")]
	private void EnsureSize(int sizeNeeded)
	{
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x289C5C0", Offset = "0x289ABC0", VA = "0x18289C5C0", Slot = "22")]
	public virtual EventDescriptor Find(string name, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x289C780", Offset = "0x289AD80", VA = "0x18289C780")]
	public int IndexOf(EventDescriptor value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x289C7E0", Offset = "0x289ADE0", VA = "0x18289C7E0")]
	public void Insert(int index, EventDescriptor value)
	{
	}

	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x289CD40", Offset = "0x289B340", VA = "0x18289CD40")]
	public void Remove(EventDescriptor value)
	{
	}

	[Token(Token = "0x6000A73")]
	[Address(RVA = "0x289CC80", Offset = "0x289B280", VA = "0x18289CC80")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x289C6D0", Offset = "0x289ACD0", VA = "0x18289C6D0")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x289CE70", Offset = "0x289B470", VA = "0x18289CE70", Slot = "23")]
	public virtual EventDescriptorCollection Sort()
	{
		return null;
	}

	[Token(Token = "0x6000A76")]
	[Address(RVA = "0x289CEF0", Offset = "0x289B4F0", VA = "0x18289CEF0", Slot = "24")]
	public virtual EventDescriptorCollection Sort(string[] names)
	{
		return null;
	}

	[Token(Token = "0x6000A77")]
	[Address(RVA = "0x289CDF0", Offset = "0x289B3F0", VA = "0x18289CDF0", Slot = "25")]
	public virtual EventDescriptorCollection Sort(string[] names, IComparer comparer)
	{
		return null;
	}

	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x289CF70", Offset = "0x289B570", VA = "0x18289CF70", Slot = "26")]
	public virtual EventDescriptorCollection Sort(IComparer comparer)
	{
		return null;
	}

	[Token(Token = "0x6000A79")]
	[Address(RVA = "0x289C970", Offset = "0x289AF70", VA = "0x18289C970")]
	protected void InternalSort(string[] names)
	{
	}

	[Token(Token = "0x6000A7A")]
	[Address(RVA = "0x289C8F0", Offset = "0x289AEF0", VA = "0x18289C8F0")]
	protected void InternalSort(IComparer sorter)
	{
	}

	[Token(Token = "0x6000A7E")]
	[Address(RVA = "0x289D040", Offset = "0x289B640", VA = "0x18289D040", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000A81")]
	[Address(RVA = "0x289D0F0", Offset = "0x289B6F0", VA = "0x18289D0F0", Slot = "11")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A82")]
	[Address(RVA = "0x289D240", Offset = "0x289B840", VA = "0x18289D240", Slot = "12")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A83")]
	[Address(RVA = "0x289C330", Offset = "0x289A930", VA = "0x18289C330", Slot = "13")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6000A84")]
	[Address(RVA = "0x289D2F0", Offset = "0x289B8F0", VA = "0x18289D2F0", Slot = "16")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A85")]
	[Address(RVA = "0x289D3A0", Offset = "0x289B9A0", VA = "0x18289D3A0", Slot = "17")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6000A86")]
	[Address(RVA = "0x289D520", Offset = "0x289BB20", VA = "0x18289D520", Slot = "18")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6000A87")]
	[Address(RVA = "0x289D510", Offset = "0x289BB10", VA = "0x18289D510", Slot = "19")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}
}
