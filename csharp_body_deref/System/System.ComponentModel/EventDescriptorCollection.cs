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
			[Address(RVA = "0x4893670", Offset = "0x4893670", VA = "0x4893670", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001043")]
		[Address(RVA = "0x4892E60", Offset = "0x4892E60", VA = "0x4892E60")]
		public ArraySubsetEnumerator(Array array, int count)
		{
		}

		[Token(Token = "0x6001044")]
		[Address(RVA = "0x4893640", Offset = "0x4893640", VA = "0x4893640", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001045")]
		[Address(RVA = "0x4893660", Offset = "0x4893660", VA = "0x4893660", Slot = "6")]
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
		[Address(RVA = "0x48922C0", Offset = "0x48922C0", VA = "0x48922C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600101E")]
		[Address(RVA = "0x48922D0", Offset = "0x48922D0", VA = "0x48922D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000395")]
	public virtual EventDescriptor this[int index]
	{
		[Token(Token = "0x600101F")]
		[Address(RVA = "0x48922E0", Offset = "0x48922E0", VA = "0x48922E0", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000396")]
	public virtual EventDescriptor this[string name]
	{
		[Token(Token = "0x6001020")]
		[Address(RVA = "0x4892400", Offset = "0x4892400", VA = "0x4892400", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000397")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6001033")]
		[Address(RVA = "0x48930D0", Offset = "0x48930D0", VA = "0x48930D0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000398")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6001034")]
		[Address(RVA = "0x48930E0", Offset = "0x48930E0", VA = "0x48930E0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000399")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x6001035")]
		[Address(RVA = "0x48930F0", Offset = "0x48930F0", VA = "0x48930F0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700039A")]
	private object System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x6001037")]
		[Address(RVA = "0x4893110", Offset = "0x4893110", VA = "0x4893110", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001038")]
		[Address(RVA = "0x4893130", Offset = "0x4893130", VA = "0x4893130", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x1700039B")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6001040")]
		[Address(RVA = "0x48935B0", Offset = "0x48935B0", VA = "0x48935B0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700039C")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6001041")]
		[Address(RVA = "0x48935C0", Offset = "0x48935C0", VA = "0x48935C0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600101A")]
	[Address(RVA = "0x48920A0", Offset = "0x48920A0", VA = "0x48920A0")]
	public EventDescriptorCollection(EventDescriptor[] events)
	{
	}

	[Token(Token = "0x600101B")]
	[Address(RVA = "0x48921A0", Offset = "0x48921A0", VA = "0x48921A0")]
	public EventDescriptorCollection(EventDescriptor[] events, bool readOnly)
	{
	}

	[Token(Token = "0x600101C")]
	[Address(RVA = "0x48921C0", Offset = "0x48921C0", VA = "0x48921C0")]
	private EventDescriptorCollection(EventDescriptor[] events, int eventCount, string[] namedSort, IComparer comparer)
	{
	}

	[Token(Token = "0x6001021")]
	[Address(RVA = "0x4892420", Offset = "0x4892420", VA = "0x4892420")]
	public int Add(EventDescriptor value)
	{
		return default(int);
	}

	[Token(Token = "0x6001022")]
	[Address(RVA = "0x48925F0", Offset = "0x48925F0", VA = "0x48925F0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001023")]
	[Address(RVA = "0x4892640", Offset = "0x4892640", VA = "0x4892640")]
	public bool Contains(EventDescriptor value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001024")]
	[Address(RVA = "0x48926E0", Offset = "0x48926E0", VA = "0x48926E0", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001025")]
	[Address(RVA = "0x4892360", Offset = "0x4892360", VA = "0x4892360")]
	private void EnsureEventsOwned()
	{
	}

	[Token(Token = "0x6001026")]
	[Address(RVA = "0x48924F0", Offset = "0x48924F0", VA = "0x48924F0")]
	private void EnsureSize(int sizeNeeded)
	{
	}

	[Token(Token = "0x6001027")]
	[Address(RVA = "0x4892A50", Offset = "0x4892A50", VA = "0x4892A50", Slot = "22")]
	public virtual EventDescriptor Find(string name, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6001028")]
	[Address(RVA = "0x4892690", Offset = "0x4892690", VA = "0x4892690")]
	public int IndexOf(EventDescriptor value)
	{
		return default(int);
	}

	[Token(Token = "0x6001029")]
	[Address(RVA = "0x4892B80", Offset = "0x4892B80", VA = "0x4892B80")]
	public void Insert(int index, EventDescriptor value)
	{
	}

	[Token(Token = "0x600102A")]
	[Address(RVA = "0x4892C70", Offset = "0x4892C70", VA = "0x4892C70")]
	public void Remove(EventDescriptor value)
	{
	}

	[Token(Token = "0x600102B")]
	[Address(RVA = "0x4892D10", Offset = "0x4892D10", VA = "0x4892D10")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x600102C")]
	[Address(RVA = "0x4892DC0", Offset = "0x4892DC0", VA = "0x4892DC0")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600102D")]
	[Address(RVA = "0x4892EA0", Offset = "0x4892EA0", VA = "0x4892EA0", Slot = "23")]
	public virtual EventDescriptorCollection Sort()
	{
		return null;
	}

	[Token(Token = "0x600102E")]
	[Address(RVA = "0x4892F10", Offset = "0x4892F10", VA = "0x4892F10", Slot = "24")]
	public virtual EventDescriptorCollection Sort(string[] names)
	{
		return null;
	}

	[Token(Token = "0x600102F")]
	[Address(RVA = "0x4892F80", Offset = "0x4892F80", VA = "0x4892F80", Slot = "25")]
	public virtual EventDescriptorCollection Sort(string[] names, IComparer comparer)
	{
		return null;
	}

	[Token(Token = "0x6001030")]
	[Address(RVA = "0x4892FF0", Offset = "0x4892FF0", VA = "0x4892FF0", Slot = "26")]
	public virtual EventDescriptorCollection Sort(IComparer comparer)
	{
		return null;
	}

	[Token(Token = "0x6001031")]
	[Address(RVA = "0x4892710", Offset = "0x4892710", VA = "0x4892710")]
	protected void InternalSort(string[] names)
	{
	}

	[Token(Token = "0x6001032")]
	[Address(RVA = "0x4893060", Offset = "0x4893060", VA = "0x4893060")]
	protected void InternalSort(IComparer sorter)
	{
	}

	[Token(Token = "0x6001036")]
	[Address(RVA = "0x4893100", Offset = "0x4893100", VA = "0x4893100", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001039")]
	[Address(RVA = "0x48932A0", Offset = "0x48932A0", VA = "0x48932A0", Slot = "11")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600103A")]
	[Address(RVA = "0x4893310", Offset = "0x4893310", VA = "0x4893310", Slot = "12")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600103B")]
	[Address(RVA = "0x48933C0", Offset = "0x48933C0", VA = "0x48933C0", Slot = "13")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x600103C")]
	[Address(RVA = "0x4893410", Offset = "0x4893410", VA = "0x4893410", Slot = "16")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600103D")]
	[Address(RVA = "0x48934B0", Offset = "0x48934B0", VA = "0x48934B0", Slot = "17")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x600103E")]
	[Address(RVA = "0x4893530", Offset = "0x4893530", VA = "0x4893530", Slot = "18")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x600103F")]
	[Address(RVA = "0x48935A0", Offset = "0x48935A0", VA = "0x48935A0", Slot = "19")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}
}
