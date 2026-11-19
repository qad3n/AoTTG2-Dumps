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

[Token(Token = "0x200015B")]
public class EventDescriptorCollection : ICollection, IEnumerable, IList
{
	[Token(Token = "0x200015C")]
	private class ArraySubsetEnumerator : IEnumerator
	{
		[Token(Token = "0x40005D5")]
		[FieldOffset(Offset = "0x10")]
		private readonly Array _array;

		[Token(Token = "0x40005D6")]
		[FieldOffset(Offset = "0x18")]
		private readonly int _total;

		[Token(Token = "0x40005D7")]
		[FieldOffset(Offset = "0x1C")]
		private int _current;

		[Token(Token = "0x170001DD")]
		public object Current
		{
			[Token(Token = "0x60008CE")]
			[Address(RVA = "0x6233730", Offset = "0x6232730", VA = "0x6233730", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60008CB")]
		[Address(RVA = "0x6232F20", Offset = "0x6231F20", VA = "0x6232F20")]
		public ArraySubsetEnumerator(Array array, int count)
		{
		}

		[Token(Token = "0x60008CC")]
		[Address(RVA = "0x6233700", Offset = "0x6232700", VA = "0x6233700", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60008CD")]
		[Address(RVA = "0x6233720", Offset = "0x6232720", VA = "0x6233720", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x40005CD")]
	[FieldOffset(Offset = "0x10")]
	private EventDescriptor[] _events;

	[Token(Token = "0x40005CE")]
	[FieldOffset(Offset = "0x18")]
	private string[] _namedSort;

	[Token(Token = "0x40005CF")]
	[FieldOffset(Offset = "0x20")]
	private readonly IComparer _comparer;

	[Token(Token = "0x40005D0")]
	[FieldOffset(Offset = "0x28")]
	private bool _eventsOwned;

	[Token(Token = "0x40005D1")]
	[FieldOffset(Offset = "0x29")]
	private bool _needSort;

	[Token(Token = "0x40005D2")]
	[FieldOffset(Offset = "0x2A")]
	private readonly bool _readOnly;

	[Token(Token = "0x40005D3")]
	[FieldOffset(Offset = "0x0")]
	public static readonly EventDescriptorCollection Empty;

	[Token(Token = "0x170001D4")]
	public int Count
	{
		[Token(Token = "0x60008A5")]
		[Address(RVA = "0x62323C0", Offset = "0x62313C0", VA = "0x62323C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60008A6")]
		[Address(RVA = "0x62323D0", Offset = "0x62313D0", VA = "0x62323D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001D5")]
	public virtual EventDescriptor this[int index]
	{
		[Token(Token = "0x60008A7")]
		[Address(RVA = "0x62323E0", Offset = "0x62313E0", VA = "0x62323E0", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D6")]
	public virtual EventDescriptor this[string name]
	{
		[Token(Token = "0x60008A8")]
		[Address(RVA = "0x6232500", Offset = "0x6231500", VA = "0x6232500", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D7")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x60008BB")]
		[Address(RVA = "0x6233190", Offset = "0x6232190", VA = "0x6233190", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D8")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x60008BC")]
		[Address(RVA = "0x62331A0", Offset = "0x62321A0", VA = "0x62331A0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D9")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x60008BD")]
		[Address(RVA = "0x62331B0", Offset = "0x62321B0", VA = "0x62331B0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170001DA")]
	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x62331D0", Offset = "0x62321D0", VA = "0x62331D0", Slot = "9")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x62331F0", Offset = "0x62321F0", VA = "0x62331F0", Slot = "10")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x170001DB")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x60008C8")]
		[Address(RVA = "0x6233670", Offset = "0x6232670", VA = "0x6233670", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DC")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x60008C9")]
		[Address(RVA = "0x6233680", Offset = "0x6232680", VA = "0x6233680", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x62321A0", Offset = "0x62311A0", VA = "0x62321A0")]
	public EventDescriptorCollection(EventDescriptor[] events)
	{
	}

	[Token(Token = "0x60008A3")]
	[Address(RVA = "0x62322A0", Offset = "0x62312A0", VA = "0x62322A0")]
	public EventDescriptorCollection(EventDescriptor[] events, bool readOnly)
	{
	}

	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x62322C0", Offset = "0x62312C0", VA = "0x62322C0")]
	private EventDescriptorCollection(EventDescriptor[] events, int eventCount, string[] namedSort, IComparer comparer)
	{
	}

	[Token(Token = "0x60008A9")]
	[Address(RVA = "0x6232520", Offset = "0x6231520", VA = "0x6232520")]
	public int Add(EventDescriptor value)
	{
		return default(int);
	}

	[Token(Token = "0x60008AA")]
	[Address(RVA = "0x62326E0", Offset = "0x62316E0", VA = "0x62326E0")]
	public void Clear()
	{
	}

	[Token(Token = "0x60008AB")]
	[Address(RVA = "0x6232730", Offset = "0x6231730", VA = "0x6232730")]
	public bool Contains(EventDescriptor value)
	{
		return default(bool);
	}

	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x62327D0", Offset = "0x62317D0", VA = "0x62327D0", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60008AD")]
	[Address(RVA = "0x6232460", Offset = "0x6231460", VA = "0x6232460")]
	private void EnsureEventsOwned()
	{
	}

	[Token(Token = "0x60008AE")]
	[Address(RVA = "0x62325F0", Offset = "0x62315F0", VA = "0x62325F0")]
	private void EnsureSize(int sizeNeeded)
	{
	}

	[Token(Token = "0x60008AF")]
	[Address(RVA = "0x6232B20", Offset = "0x6231B20", VA = "0x6232B20", Slot = "22")]
	public virtual EventDescriptor Find(string name, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x60008B0")]
	[Address(RVA = "0x6232780", Offset = "0x6231780", VA = "0x6232780")]
	public int IndexOf(EventDescriptor value)
	{
		return default(int);
	}

	[Token(Token = "0x60008B1")]
	[Address(RVA = "0x6232C40", Offset = "0x6231C40", VA = "0x6232C40")]
	public void Insert(int index, EventDescriptor value)
	{
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x6232D30", Offset = "0x6231D30", VA = "0x6232D30")]
	public void Remove(EventDescriptor value)
	{
	}

	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x6232DD0", Offset = "0x6231DD0", VA = "0x6232DD0")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x6232E80", Offset = "0x6231E80", VA = "0x6232E80")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x6232F60", Offset = "0x6231F60", VA = "0x6232F60", Slot = "23")]
	public virtual EventDescriptorCollection Sort()
	{
		return null;
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x6232FD0", Offset = "0x6231FD0", VA = "0x6232FD0", Slot = "24")]
	public virtual EventDescriptorCollection Sort(string[] names)
	{
		return null;
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x6233040", Offset = "0x6232040", VA = "0x6233040", Slot = "25")]
	public virtual EventDescriptorCollection Sort(string[] names, IComparer comparer)
	{
		return null;
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x62330B0", Offset = "0x62320B0", VA = "0x62330B0", Slot = "26")]
	public virtual EventDescriptorCollection Sort(IComparer comparer)
	{
		return null;
	}

	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x6232800", Offset = "0x6231800", VA = "0x6232800")]
	protected void InternalSort(string[] names)
	{
	}

	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x6233120", Offset = "0x6232120", VA = "0x6233120")]
	protected void InternalSort(IComparer sorter)
	{
	}

	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x62331C0", Offset = "0x62321C0", VA = "0x62331C0", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x6233360", Offset = "0x6232360", VA = "0x6233360", Slot = "11")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x62333D0", Offset = "0x62323D0", VA = "0x62333D0", Slot = "12")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x6233480", Offset = "0x6232480", VA = "0x6233480", Slot = "13")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x62334D0", Offset = "0x62324D0", VA = "0x62334D0", Slot = "16")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x6233570", Offset = "0x6232570", VA = "0x6233570", Slot = "17")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x60008C6")]
	[Address(RVA = "0x62335F0", Offset = "0x62325F0", VA = "0x62335F0", Slot = "18")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x6233660", Offset = "0x6232660", VA = "0x6233660", Slot = "19")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}
}
