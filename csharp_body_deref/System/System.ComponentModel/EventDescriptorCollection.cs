using System.Collections;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200028F")]
public class EventDescriptorCollection : ICollection, IEnumerable, IList
{
	[Token(Token = "0x2000290")]
	private class ArraySubsetEnumerator : IEnumerator
	{
		[Token(Token = "0x4000D6D")]
		[FieldOffset(Offset = "0x10")]
		private readonly Array _array;

		[Token(Token = "0x4000D6E")]
		[FieldOffset(Offset = "0x18")]
		private readonly int _total;

		[Token(Token = "0x4000D6F")]
		[FieldOffset(Offset = "0x1C")]
		private int _current;

		[Token(Token = "0x1700039D")]
		public object Current
		{
			[Token(Token = "0x6001046")]
			[Address(RVA = "0x456E570", Offset = "0x456E570", VA = "0x456E570", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001043")]
		[Address(RVA = "0x456DD60", Offset = "0x456DD60", VA = "0x456DD60")]
		public ArraySubsetEnumerator(Array array, int count)
		{
		}

		[Token(Token = "0x6001044")]
		[Address(RVA = "0x456E540", Offset = "0x456E540", VA = "0x456E540", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001045")]
		[Address(RVA = "0x456E560", Offset = "0x456E560", VA = "0x456E560", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4000D65")]
	[FieldOffset(Offset = "0x10")]
	private EventDescriptor[] _events;

	[Token(Token = "0x4000D66")]
	[FieldOffset(Offset = "0x18")]
	private string[] _namedSort;

	[Token(Token = "0x4000D67")]
	[FieldOffset(Offset = "0x20")]
	private readonly IComparer _comparer;

	[Token(Token = "0x4000D68")]
	[FieldOffset(Offset = "0x28")]
	private bool _eventsOwned;

	[Token(Token = "0x4000D69")]
	[FieldOffset(Offset = "0x29")]
	private bool _needSort;

	[Token(Token = "0x4000D6A")]
	[FieldOffset(Offset = "0x2A")]
	private readonly bool _readOnly;

	[Token(Token = "0x4000D6B")]
	[FieldOffset(Offset = "0x0")]
	public static readonly EventDescriptorCollection Empty;

	[Token(Token = "0x17000394")]
	public int Count
	{
		[Token(Token = "0x600101D")]
		[Address(RVA = "0x456D1C0", Offset = "0x456D1C0", VA = "0x456D1C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600101E")]
		[Address(RVA = "0x456D1D0", Offset = "0x456D1D0", VA = "0x456D1D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000395")]
	public virtual EventDescriptor this[int index]
	{
		[Token(Token = "0x600101F")]
		[Address(RVA = "0x456D1E0", Offset = "0x456D1E0", VA = "0x456D1E0", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000396")]
	public virtual EventDescriptor this[string name]
	{
		[Token(Token = "0x6001020")]
		[Address(RVA = "0x456D300", Offset = "0x456D300", VA = "0x456D300", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000397")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6001033")]
		[Address(RVA = "0x456DFD0", Offset = "0x456DFD0", VA = "0x456DFD0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000398")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6001034")]
		[Address(RVA = "0x456DFE0", Offset = "0x456DFE0", VA = "0x456DFE0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000399")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x6001035")]
		[Address(RVA = "0x456DFF0", Offset = "0x456DFF0", VA = "0x456DFF0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700039A")]
	private object System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x6001037")]
		[Address(RVA = "0x456E010", Offset = "0x456E010", VA = "0x456E010", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001038")]
		[Address(RVA = "0x456E030", Offset = "0x456E030", VA = "0x456E030", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x1700039B")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6001040")]
		[Address(RVA = "0x456E4B0", Offset = "0x456E4B0", VA = "0x456E4B0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700039C")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6001041")]
		[Address(RVA = "0x456E4C0", Offset = "0x456E4C0", VA = "0x456E4C0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600101A")]
	[Address(RVA = "0x456CFA0", Offset = "0x456CFA0", VA = "0x456CFA0")]
	public EventDescriptorCollection(EventDescriptor[] events)
	{
	}

	[Token(Token = "0x600101B")]
	[Address(RVA = "0x456D0A0", Offset = "0x456D0A0", VA = "0x456D0A0")]
	public EventDescriptorCollection(EventDescriptor[] events, bool readOnly)
	{
	}

	[Token(Token = "0x600101C")]
	[Address(RVA = "0x456D0C0", Offset = "0x456D0C0", VA = "0x456D0C0")]
	private EventDescriptorCollection(EventDescriptor[] events, int eventCount, string[] namedSort, IComparer comparer)
	{
	}

	[Token(Token = "0x6001021")]
	[Address(RVA = "0x456D320", Offset = "0x456D320", VA = "0x456D320")]
	public int Add(EventDescriptor value)
	{
		return default(int);
	}

	[Token(Token = "0x6001022")]
	[Address(RVA = "0x456D4F0", Offset = "0x456D4F0", VA = "0x456D4F0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001023")]
	[Address(RVA = "0x456D540", Offset = "0x456D540", VA = "0x456D540")]
	public bool Contains(EventDescriptor value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001024")]
	[Address(RVA = "0x456D5E0", Offset = "0x456D5E0", VA = "0x456D5E0", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001025")]
	[Address(RVA = "0x456D260", Offset = "0x456D260", VA = "0x456D260")]
	private void EnsureEventsOwned()
	{
	}

	[Token(Token = "0x6001026")]
	[Address(RVA = "0x456D3F0", Offset = "0x456D3F0", VA = "0x456D3F0")]
	private void EnsureSize(int sizeNeeded)
	{
	}

	[Token(Token = "0x6001027")]
	[Address(RVA = "0x456D950", Offset = "0x456D950", VA = "0x456D950", Slot = "22")]
	public virtual EventDescriptor Find(string name, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6001028")]
	[Address(RVA = "0x456D590", Offset = "0x456D590", VA = "0x456D590")]
	public int IndexOf(EventDescriptor value)
	{
		return default(int);
	}

	[Token(Token = "0x6001029")]
	[Address(RVA = "0x456DA80", Offset = "0x456DA80", VA = "0x456DA80")]
	public void Insert(int index, EventDescriptor value)
	{
	}

	[Token(Token = "0x600102A")]
	[Address(RVA = "0x456DB70", Offset = "0x456DB70", VA = "0x456DB70")]
	public void Remove(EventDescriptor value)
	{
	}

	[Token(Token = "0x600102B")]
	[Address(RVA = "0x456DC10", Offset = "0x456DC10", VA = "0x456DC10")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x600102C")]
	[Address(RVA = "0x456DCC0", Offset = "0x456DCC0", VA = "0x456DCC0")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600102D")]
	[Address(RVA = "0x456DDA0", Offset = "0x456DDA0", VA = "0x456DDA0", Slot = "23")]
	public virtual EventDescriptorCollection Sort()
	{
		return null;
	}

	[Token(Token = "0x600102E")]
	[Address(RVA = "0x456DE10", Offset = "0x456DE10", VA = "0x456DE10", Slot = "24")]
	public virtual EventDescriptorCollection Sort(string[] names)
	{
		return null;
	}

	[Token(Token = "0x600102F")]
	[Address(RVA = "0x456DE80", Offset = "0x456DE80", VA = "0x456DE80", Slot = "25")]
	public virtual EventDescriptorCollection Sort(string[] names, IComparer comparer)
	{
		return null;
	}

	[Token(Token = "0x6001030")]
	[Address(RVA = "0x456DEF0", Offset = "0x456DEF0", VA = "0x456DEF0", Slot = "26")]
	public virtual EventDescriptorCollection Sort(IComparer comparer)
	{
		return null;
	}

	[Token(Token = "0x6001031")]
	[Address(RVA = "0x456D610", Offset = "0x456D610", VA = "0x456D610")]
	protected void InternalSort(string[] names)
	{
	}

	[Token(Token = "0x6001032")]
	[Address(RVA = "0x456DF60", Offset = "0x456DF60", VA = "0x456DF60")]
	protected void InternalSort(IComparer sorter)
	{
	}

	[Token(Token = "0x6001036")]
	[Address(RVA = "0x456E000", Offset = "0x456E000", VA = "0x456E000", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001039")]
	[Address(RVA = "0x456E1A0", Offset = "0x456E1A0", VA = "0x456E1A0", Slot = "11")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600103A")]
	[Address(RVA = "0x456E210", Offset = "0x456E210", VA = "0x456E210", Slot = "12")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600103B")]
	[Address(RVA = "0x456E2C0", Offset = "0x456E2C0", VA = "0x456E2C0", Slot = "13")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x600103C")]
	[Address(RVA = "0x456E310", Offset = "0x456E310", VA = "0x456E310", Slot = "16")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600103D")]
	[Address(RVA = "0x456E3B0", Offset = "0x456E3B0", VA = "0x456E3B0", Slot = "17")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x600103E")]
	[Address(RVA = "0x456E430", Offset = "0x456E430", VA = "0x456E430", Slot = "18")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x600103F")]
	[Address(RVA = "0x456E4A0", Offset = "0x456E4A0", VA = "0x456E4A0", Slot = "19")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}
}
