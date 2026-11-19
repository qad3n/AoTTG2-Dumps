// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.ArrayList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x20005C9")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(ArrayListDebugView))]
public class ArrayList : IList, ICollection, IEnumerable, ICloneable
{
	[Serializable]
	[Token(Token = "0x20005CA")]
	private class IListWrapper : ArrayList
	{
		[Token(Token = "0x400181D")]
		[FieldOffset(Offset = "0x28")]
		private IList _list;

		[Token(Token = "0x1700070E")]
		public override int Capacity
		{
			[Token(Token = "0x6002CDB")]
			[Address(RVA = "0x545AE10", Offset = "0x5459E10", VA = "0x545AE10", Slot = "21")]
			set
			{
			}
		}

		[Token(Token = "0x1700070F")]
		public override int Count
		{
			[Token(Token = "0x6002CDC")]
			[Address(RVA = "0x545AE90", Offset = "0x5459E90", VA = "0x545AE90", Slot = "22")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000710")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6002CDD")]
			[Address(RVA = "0x545AF30", Offset = "0x5459F30", VA = "0x545AF30", Slot = "24")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000711")]
		public override bool IsFixedSize
		{
			[Token(Token = "0x6002CDE")]
			[Address(RVA = "0x545AFD0", Offset = "0x5459FD0", VA = "0x545AFD0", Slot = "23")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000712")]
		public override bool IsSynchronized
		{
			[Token(Token = "0x6002CDF")]
			[Address(RVA = "0x545B070", Offset = "0x545A070", VA = "0x545B070", Slot = "25")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000713")]
		public override object this[int index]
		{
			[Token(Token = "0x6002CE0")]
			[Address(RVA = "0x545B110", Offset = "0x545A110", VA = "0x545B110", Slot = "27")]
			get
			{
				return null;
			}
			[Token(Token = "0x6002CE1")]
			[Address(RVA = "0x545B1C0", Offset = "0x545A1C0", VA = "0x545B1C0", Slot = "28")]
			set
			{
			}
		}

		[Token(Token = "0x17000714")]
		public override object SyncRoot
		{
			[Token(Token = "0x6002CE2")]
			[Address(RVA = "0x545B280", Offset = "0x545A280", VA = "0x545B280", Slot = "26")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002CDA")]
		[Address(RVA = "0x5459D50", Offset = "0x5458D50", VA = "0x5459D50")]
		internal IListWrapper(IList list)
		{
		}

		[Token(Token = "0x6002CE3")]
		[Address(RVA = "0x545B320", Offset = "0x545A320", VA = "0x545B320", Slot = "29")]
		public override int Add(object obj)
		{
			return default(int);
		}

		[Token(Token = "0x6002CE4")]
		[Address(RVA = "0x545B3E0", Offset = "0x545A3E0", VA = "0x545B3E0", Slot = "30")]
		public override void AddRange(ICollection c)
		{
		}

		[Token(Token = "0x6002CE5")]
		[Address(RVA = "0x545B420", Offset = "0x545A420", VA = "0x545B420", Slot = "31")]
		public override void Clear()
		{
		}

		[Token(Token = "0x6002CE6")]
		[Address(RVA = "0x545B590", Offset = "0x545A590", VA = "0x545B590", Slot = "32")]
		public override object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002CE7")]
		[Address(RVA = "0x545B600", Offset = "0x545A600", VA = "0x545B600", Slot = "33")]
		public override bool Contains(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6002CE8")]
		[Address(RVA = "0x545B6B0", Offset = "0x545A6B0", VA = "0x545B6B0", Slot = "35")]
		public override void CopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6002CE9")]
		[Address(RVA = "0x545B760", Offset = "0x545A760", VA = "0x545B760", Slot = "36")]
		public override void CopyTo(int index, Array array, int arrayIndex, int count)
		{
		}

		[Token(Token = "0x6002CEA")]
		[Address(RVA = "0x545BAC0", Offset = "0x545AAC0", VA = "0x545BAC0", Slot = "37")]
		public override IEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002CEB")]
		[Address(RVA = "0x545BB50", Offset = "0x545AB50", VA = "0x545BB50", Slot = "38")]
		public override int IndexOf(object value)
		{
			return default(int);
		}

		[Token(Token = "0x6002CEC")]
		[Address(RVA = "0x545BC00", Offset = "0x545AC00", VA = "0x545BC00", Slot = "39")]
		public override void Insert(int index, object obj)
		{
		}

		[Token(Token = "0x6002CED")]
		[Address(RVA = "0x545BCC0", Offset = "0x545ACC0", VA = "0x545BCC0", Slot = "40")]
		public override void InsertRange(int index, ICollection c)
		{
		}

		[Token(Token = "0x6002CEE")]
		[Address(RVA = "0x545C0E0", Offset = "0x545B0E0", VA = "0x545C0E0", Slot = "41")]
		public override void Remove(object value)
		{
		}

		[Token(Token = "0x6002CEF")]
		[Address(RVA = "0x545C120", Offset = "0x545B120", VA = "0x545C120", Slot = "42")]
		public override void RemoveAt(int index)
		{
		}

		[Token(Token = "0x6002CF0")]
		[Address(RVA = "0x545C1D0", Offset = "0x545B1D0", VA = "0x545C1D0", Slot = "43")]
		public override void RemoveRange(int index, int count)
		{
		}

		[Token(Token = "0x6002CF1")]
		[Address(RVA = "0x545C410", Offset = "0x545B410", VA = "0x545C410", Slot = "45")]
		public override void Sort(int index, int count, IComparer comparer)
		{
		}

		[Token(Token = "0x6002CF2")]
		[Address(RVA = "0x545C700", Offset = "0x545B700", VA = "0x545C700", Slot = "46")]
		public override object[] ToArray()
		{
			return null;
		}

		[Token(Token = "0x6002CF3")]
		[Address(RVA = "0x545C890", Offset = "0x545B890", VA = "0x545C890", Slot = "47")]
		public override Array ToArray(Type type)
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x20005CB")]
	private class ReadOnlyArrayList : ArrayList
	{
		[Token(Token = "0x400181E")]
		[FieldOffset(Offset = "0x28")]
		private ArrayList _list;

		[Token(Token = "0x17000715")]
		public override int Count
		{
			[Token(Token = "0x6002CF5")]
			[Address(RVA = "0x545CA40", Offset = "0x545BA40", VA = "0x545CA40", Slot = "22")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000716")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6002CF6")]
			[Address(RVA = "0x545CA70", Offset = "0x545BA70", VA = "0x545CA70", Slot = "24")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000717")]
		public override bool IsFixedSize
		{
			[Token(Token = "0x6002CF7")]
			[Address(RVA = "0x545CA80", Offset = "0x545BA80", VA = "0x545CA80", Slot = "23")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000718")]
		public override bool IsSynchronized
		{
			[Token(Token = "0x6002CF8")]
			[Address(RVA = "0x545CA90", Offset = "0x545BA90", VA = "0x545CA90", Slot = "25")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000719")]
		public override object this[int index]
		{
			[Token(Token = "0x6002CF9")]
			[Address(RVA = "0x545CAC0", Offset = "0x545BAC0", VA = "0x545CAC0", Slot = "27")]
			get
			{
				return null;
			}
			[Token(Token = "0x6002CFA")]
			[Address(RVA = "0x545CAF0", Offset = "0x545BAF0", VA = "0x545CAF0", Slot = "28")]
			set
			{
			}
		}

		[Token(Token = "0x1700071A")]
		public override object SyncRoot
		{
			[Token(Token = "0x6002CFB")]
			[Address(RVA = "0x545CB40", Offset = "0x545BB40", VA = "0x545CB40", Slot = "26")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700071B")]
		public override int Capacity
		{
			[Token(Token = "0x6002CFE")]
			[Address(RVA = "0x545CC10", Offset = "0x545BC10", VA = "0x545CC10", Slot = "21")]
			set
			{
			}
		}

		[Token(Token = "0x6002CF4")]
		[Address(RVA = "0x545A880", Offset = "0x5459880", VA = "0x545A880")]
		internal ReadOnlyArrayList(ArrayList l)
		{
		}

		[Token(Token = "0x6002CFC")]
		[Address(RVA = "0x545CB70", Offset = "0x545BB70", VA = "0x545CB70", Slot = "29")]
		public override int Add(object obj)
		{
			return default(int);
		}

		[Token(Token = "0x6002CFD")]
		[Address(RVA = "0x545CBC0", Offset = "0x545BBC0", VA = "0x545CBC0", Slot = "30")]
		public override void AddRange(ICollection c)
		{
		}

		[Token(Token = "0x6002CFF")]
		[Address(RVA = "0x545CC60", Offset = "0x545BC60", VA = "0x545CC60", Slot = "31")]
		public override void Clear()
		{
		}

		[Token(Token = "0x6002D00")]
		[Address(RVA = "0x545CCB0", Offset = "0x545BCB0", VA = "0x545CCB0", Slot = "32")]
		public override object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002D01")]
		[Address(RVA = "0x545CDB0", Offset = "0x545BDB0", VA = "0x545CDB0", Slot = "33")]
		public override bool Contains(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6002D02")]
		[Address(RVA = "0x545CDE0", Offset = "0x545BDE0", VA = "0x545CDE0", Slot = "35")]
		public override void CopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6002D03")]
		[Address(RVA = "0x545CE10", Offset = "0x545BE10", VA = "0x545CE10", Slot = "36")]
		public override void CopyTo(int index, Array array, int arrayIndex, int count)
		{
		}

		[Token(Token = "0x6002D04")]
		[Address(RVA = "0x545CE40", Offset = "0x545BE40", VA = "0x545CE40", Slot = "37")]
		public override IEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002D05")]
		[Address(RVA = "0x545CE70", Offset = "0x545BE70", VA = "0x545CE70", Slot = "38")]
		public override int IndexOf(object value)
		{
			return default(int);
		}

		[Token(Token = "0x6002D06")]
		[Address(RVA = "0x545CEA0", Offset = "0x545BEA0", VA = "0x545CEA0", Slot = "39")]
		public override void Insert(int index, object obj)
		{
		}

		[Token(Token = "0x6002D07")]
		[Address(RVA = "0x545CEF0", Offset = "0x545BEF0", VA = "0x545CEF0", Slot = "40")]
		public override void InsertRange(int index, ICollection c)
		{
		}

		[Token(Token = "0x6002D08")]
		[Address(RVA = "0x545CF40", Offset = "0x545BF40", VA = "0x545CF40", Slot = "41")]
		public override void Remove(object value)
		{
		}

		[Token(Token = "0x6002D09")]
		[Address(RVA = "0x545CF90", Offset = "0x545BF90", VA = "0x545CF90", Slot = "42")]
		public override void RemoveAt(int index)
		{
		}

		[Token(Token = "0x6002D0A")]
		[Address(RVA = "0x545CFE0", Offset = "0x545BFE0", VA = "0x545CFE0", Slot = "43")]
		public override void RemoveRange(int index, int count)
		{
		}

		[Token(Token = "0x6002D0B")]
		[Address(RVA = "0x545D030", Offset = "0x545C030", VA = "0x545D030", Slot = "45")]
		public override void Sort(int index, int count, IComparer comparer)
		{
		}

		[Token(Token = "0x6002D0C")]
		[Address(RVA = "0x545D080", Offset = "0x545C080", VA = "0x545D080", Slot = "46")]
		public override object[] ToArray()
		{
			return null;
		}

		[Token(Token = "0x6002D0D")]
		[Address(RVA = "0x545D0B0", Offset = "0x545C0B0", VA = "0x545D0B0", Slot = "47")]
		public override Array ToArray(Type type)
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x20005CC")]
	private sealed class ArrayListEnumeratorSimple : IEnumerator, ICloneable
	{
		[Token(Token = "0x400181F")]
		[FieldOffset(Offset = "0x10")]
		private ArrayList _list;

		[Token(Token = "0x4001820")]
		[FieldOffset(Offset = "0x18")]
		private int _index;

		[Token(Token = "0x4001821")]
		[FieldOffset(Offset = "0x1C")]
		private int _version;

		[Token(Token = "0x4001822")]
		[FieldOffset(Offset = "0x20")]
		private object _currentElement;

		[Token(Token = "0x4001823")]
		[FieldOffset(Offset = "0x28")]
		private bool _isArrayList;

		[Token(Token = "0x4001824")]
		[FieldOffset(Offset = "0x0")]
		private static object s_dummyObject;

		[Token(Token = "0x1700071C")]
		public object Current
		{
			[Token(Token = "0x6002D11")]
			[Address(RVA = "0x545D2C0", Offset = "0x545C2C0", VA = "0x545D2C0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002D0E")]
		[Address(RVA = "0x545A250", Offset = "0x5459250", VA = "0x545A250")]
		internal ArrayListEnumeratorSimple(ArrayList list)
		{
		}

		[Token(Token = "0x6002D0F")]
		[Address(RVA = "0x545D0E0", Offset = "0x545C0E0", VA = "0x545D0E0", Slot = "7")]
		public object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002D10")]
		[Address(RVA = "0x545D0F0", Offset = "0x545C0F0", VA = "0x545D0F0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002D12")]
		[Address(RVA = "0x545D380", Offset = "0x545C380", VA = "0x545D380", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x20005CD")]
	internal class ArrayListDebugView
	{
	}

	[Token(Token = "0x4001819")]
	[FieldOffset(Offset = "0x10")]
	private object[] _items;

	[Token(Token = "0x400181A")]
	[FieldOffset(Offset = "0x18")]
	private int _size;

	[Token(Token = "0x400181B")]
	[FieldOffset(Offset = "0x1C")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x400181C")]
	[FieldOffset(Offset = "0x20")]
	private object _syncRoot;

	[Token(Token = "0x17000707")]
	public virtual int Capacity
	{
		[Token(Token = "0x6002CBC")]
		[Address(RVA = "0x5459960", Offset = "0x5458960", VA = "0x5459960", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x17000708")]
	public virtual int Count
	{
		[Token(Token = "0x6002CBD")]
		[Address(RVA = "0x5459A60", Offset = "0x5458A60", VA = "0x5459A60", Slot = "22")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000709")]
	public virtual bool IsFixedSize
	{
		[Token(Token = "0x6002CBE")]
		[Address(RVA = "0x5459A70", Offset = "0x5458A70", VA = "0x5459A70", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700070A")]
	public virtual bool IsReadOnly
	{
		[Token(Token = "0x6002CBF")]
		[Address(RVA = "0x5459A80", Offset = "0x5458A80", VA = "0x5459A80", Slot = "24")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700070B")]
	public virtual bool IsSynchronized
	{
		[Token(Token = "0x6002CC0")]
		[Address(RVA = "0x5459A90", Offset = "0x5458A90", VA = "0x5459A90", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700070C")]
	public virtual object SyncRoot
	{
		[Token(Token = "0x6002CC1")]
		[Address(RVA = "0x5459AA0", Offset = "0x5458AA0", VA = "0x5459AA0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700070D")]
	public virtual object this[int index]
	{
		[Token(Token = "0x6002CC2")]
		[Address(RVA = "0x5459B20", Offset = "0x5458B20", VA = "0x5459B20", Slot = "27")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002CC3")]
		[Address(RVA = "0x5459BB0", Offset = "0x5458BB0", VA = "0x5459BB0", Slot = "28")]
		set
		{
		}
	}

	[Token(Token = "0x6002CB9")]
	[Address(RVA = "0x54594E0", Offset = "0x54584E0", VA = "0x54594E0")]
	public ArrayList()
	{
	}

	[Token(Token = "0x6002CBA")]
	[Address(RVA = "0x54595C0", Offset = "0x54585C0", VA = "0x54595C0")]
	public ArrayList(int capacity)
	{
	}

	[Token(Token = "0x6002CBB")]
	[Address(RVA = "0x5459750", Offset = "0x5458750", VA = "0x5459750")]
	public ArrayList(ICollection c)
	{
	}

	[Token(Token = "0x6002CC4")]
	[Address(RVA = "0x5459CA0", Offset = "0x5458CA0", VA = "0x5459CA0")]
	public static ArrayList Adapter(IList list)
	{
		return null;
	}

	[Token(Token = "0x6002CC5")]
	[Address(RVA = "0x5459D80", Offset = "0x5458D80", VA = "0x5459D80", Slot = "29")]
	public virtual int Add(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002CC6")]
	[Address(RVA = "0x5459ED0", Offset = "0x5458ED0", VA = "0x5459ED0", Slot = "30")]
	public virtual void AddRange(ICollection c)
	{
	}

	[Token(Token = "0x6002CC7")]
	[Address(RVA = "0x5459EF0", Offset = "0x5458EF0", VA = "0x5459EF0", Slot = "31")]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x6002CC8")]
	[Address(RVA = "0x5459F20", Offset = "0x5458F20", VA = "0x5459F20", Slot = "32")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002CC9")]
	[Address(RVA = "0x5459FA0", Offset = "0x5458FA0", VA = "0x5459FA0", Slot = "33")]
	public virtual bool Contains(object item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002CCA")]
	[Address(RVA = "0x545A060", Offset = "0x5459060", VA = "0x545A060", Slot = "34")]
	public virtual void CopyTo(Array array)
	{
	}

	[Token(Token = "0x6002CCB")]
	[Address(RVA = "0x545A080", Offset = "0x5459080", VA = "0x545A080", Slot = "35")]
	public virtual void CopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002CCC")]
	[Address(RVA = "0x545A120", Offset = "0x5459120", VA = "0x545A120", Slot = "36")]
	public virtual void CopyTo(int index, Array array, int arrayIndex, int count)
	{
	}

	[Token(Token = "0x6002CCD")]
	[Address(RVA = "0x5459E70", Offset = "0x5458E70", VA = "0x5459E70")]
	private void EnsureCapacity(int min)
	{
	}

	[Token(Token = "0x6002CCE")]
	[Address(RVA = "0x545A200", Offset = "0x5459200", VA = "0x545A200", Slot = "37")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002CCF")]
	[Address(RVA = "0x545A340", Offset = "0x5459340", VA = "0x545A340", Slot = "38")]
	public virtual int IndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002CD0")]
	[Address(RVA = "0x545A360", Offset = "0x5459360", VA = "0x545A360", Slot = "39")]
	public virtual void Insert(int index, object value)
	{
	}

	[Token(Token = "0x6002CD1")]
	[Address(RVA = "0x545A510", Offset = "0x5459510", VA = "0x545A510", Slot = "40")]
	public virtual void InsertRange(int index, ICollection c)
	{
	}

	[Token(Token = "0x6002CD2")]
	[Address(RVA = "0x545A7D0", Offset = "0x54597D0", VA = "0x545A7D0")]
	public static ArrayList ReadOnly(ArrayList list)
	{
		return null;
	}

	[Token(Token = "0x6002CD3")]
	[Address(RVA = "0x545A8B0", Offset = "0x54598B0", VA = "0x545A8B0", Slot = "41")]
	public virtual void Remove(object obj)
	{
	}

	[Token(Token = "0x6002CD4")]
	[Address(RVA = "0x545A8F0", Offset = "0x54598F0", VA = "0x545A8F0", Slot = "42")]
	public virtual void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6002CD5")]
	[Address(RVA = "0x545A9D0", Offset = "0x54599D0", VA = "0x545A9D0", Slot = "43")]
	public virtual void RemoveRange(int index, int count)
	{
	}

	[Token(Token = "0x6002CD6")]
	[Address(RVA = "0x545AB40", Offset = "0x5459B40", VA = "0x545AB40", Slot = "44")]
	public virtual void Sort(IComparer comparer)
	{
	}

	[Token(Token = "0x6002CD7")]
	[Address(RVA = "0x545AB80", Offset = "0x5459B80", VA = "0x545AB80", Slot = "45")]
	public virtual void Sort(int index, int count, IComparer comparer)
	{
	}

	[Token(Token = "0x6002CD8")]
	[Address(RVA = "0x545AC60", Offset = "0x5459C60", VA = "0x545AC60", Slot = "46")]
	public virtual object[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6002CD9")]
	[Address(RVA = "0x545AD60", Offset = "0x5459D60", VA = "0x545AD60", Slot = "47")]
	public virtual Array ToArray(Type type)
	{
		return null;
	}
}
