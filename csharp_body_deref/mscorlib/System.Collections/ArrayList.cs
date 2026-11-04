// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.ArrayList
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x20005EE")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(ArrayListDebugView))]
public class ArrayList : IList, ICollection, IEnumerable, ICloneable
{
	[Serializable]
	[Token(Token = "0x20005EF")]
	private class IListWrapper : ArrayList
	{
		[Token(Token = "0x40018B6")]
		[FieldOffset(Offset = "0x28")]
		private IList _list;

		[Token(Token = "0x1700070F")]
		public override int Capacity
		{
			[Token(Token = "0x6002CFE")]
			[Address(RVA = "0x1AD5420", Offset = "0x1AD3A20", VA = "0x181AD5420", Slot = "21")]
			set
			{
			}
		}

		[Token(Token = "0x17000710")]
		public override int Count
		{
			[Token(Token = "0x6002CFF")]
			[Address(RVA = "0x1AD5230", Offset = "0x1AD3830", VA = "0x181AD5230", Slot = "22")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000711")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6002D00")]
			[Address(RVA = "0x1AD52D0", Offset = "0x1AD38D0", VA = "0x181AD52D0", Slot = "24")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000712")]
		public override bool IsFixedSize
		{
			[Token(Token = "0x6002D01")]
			[Address(RVA = "0x1AD5280", Offset = "0x1AD3880", VA = "0x181AD5280", Slot = "23")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000713")]
		public override bool IsSynchronized
		{
			[Token(Token = "0x6002D02")]
			[Address(RVA = "0x1AD5320", Offset = "0x1AD3920", VA = "0x181AD5320", Slot = "25")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000714")]
		public override object this[int index]
		{
			[Token(Token = "0x6002D03")]
			[Address(RVA = "0x1AD5370", Offset = "0x1AD3970", VA = "0x181AD5370", Slot = "27")]
			get
			{
				return null;
			}
			[Token(Token = "0x6002D04")]
			[Address(RVA = "0x1AD54B0", Offset = "0x1AD3AB0", VA = "0x181AD54B0", Slot = "28")]
			set
			{
			}
		}

		[Token(Token = "0x17000715")]
		public override object SyncRoot
		{
			[Token(Token = "0x6002D05")]
			[Address(RVA = "0x1AD53D0", Offset = "0x1AD39D0", VA = "0x181AD53D0", Slot = "26")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002CFD")]
		[Address(RVA = "0x1AD51B0", Offset = "0x1AD37B0", VA = "0x181AD51B0")]
		internal IListWrapper(IList list)
		{
		}

		[Token(Token = "0x6002D06")]
		[Address(RVA = "0x1AD40F0", Offset = "0x1AD26F0", VA = "0x181AD40F0", Slot = "29")]
		public override int Add(object obj)
		{
			return default(int);
		}

		[Token(Token = "0x6002D07")]
		[Address(RVA = "0x1AD40A0", Offset = "0x1AD26A0", VA = "0x181AD40A0", Slot = "30")]
		public override void AddRange(ICollection c)
		{
		}

		[Token(Token = "0x6002D08")]
		[Address(RVA = "0x1AD4150", Offset = "0x1AD2750", VA = "0x181AD4150", Slot = "31")]
		public override void Clear()
		{
		}

		[Token(Token = "0x6002D09")]
		[Address(RVA = "0x1AD4210", Offset = "0x1AD2810", VA = "0x181AD4210", Slot = "32")]
		public override object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002D0A")]
		[Address(RVA = "0x1AD4270", Offset = "0x1AD2870", VA = "0x181AD4270", Slot = "33")]
		public override bool Contains(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6002D0B")]
		[Address(RVA = "0x1AD4340", Offset = "0x1AD2940", VA = "0x181AD4340", Slot = "35")]
		public override void CopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6002D0C")]
		[Address(RVA = "0x1AD43B0", Offset = "0x1AD29B0", VA = "0x181AD43B0", Slot = "36")]
		public override void CopyTo(int index, Array array, int arrayIndex, int count)
		{
		}

		[Token(Token = "0x6002D0D")]
		[Address(RVA = "0x1AD46E0", Offset = "0x1AD2CE0", VA = "0x181AD46E0", Slot = "37")]
		public override IEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002D0E")]
		[Address(RVA = "0x1AD4730", Offset = "0x1AD2D30", VA = "0x181AD4730", Slot = "38")]
		public override int IndexOf(object value)
		{
			return default(int);
		}

		[Token(Token = "0x6002D0F")]
		[Address(RVA = "0x1AD4AB0", Offset = "0x1AD30B0", VA = "0x181AD4AB0", Slot = "39")]
		public override void Insert(int index, object obj)
		{
		}

		[Token(Token = "0x6002D10")]
		[Address(RVA = "0x1AD4790", Offset = "0x1AD2D90", VA = "0x181AD4790", Slot = "40")]
		public override void InsertRange(int index, ICollection c)
		{
		}

		[Token(Token = "0x6002D11")]
		[Address(RVA = "0x1ACC1E0", Offset = "0x1ACA7E0", VA = "0x181ACC1E0", Slot = "41")]
		public override void Remove(object value)
		{
		}

		[Token(Token = "0x6002D12")]
		[Address(RVA = "0x1AD4B20", Offset = "0x1AD3120", VA = "0x181AD4B20", Slot = "42")]
		public override void RemoveAt(int index)
		{
		}

		[Token(Token = "0x6002D13")]
		[Address(RVA = "0x1AD4B80", Offset = "0x1AD3180", VA = "0x181AD4B80", Slot = "43")]
		public override void RemoveRange(int index, int count)
		{
		}

		[Token(Token = "0x6002D14")]
		[Address(RVA = "0x1AD4D60", Offset = "0x1AD3360", VA = "0x181AD4D60", Slot = "45")]
		public override void Sort(int index, int count, IComparer comparer)
		{
		}

		[Token(Token = "0x6002D15")]
		[Address(RVA = "0x1AD4FF0", Offset = "0x1AD35F0", VA = "0x181AD4FF0", Slot = "46")]
		public override object[] ToArray()
		{
			return null;
		}

		[Token(Token = "0x6002D16")]
		[Address(RVA = "0x1AD50B0", Offset = "0x1AD36B0", VA = "0x181AD50B0", Slot = "47")]
		public override Array ToArray(Type type)
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x20005F0")]
	private class ReadOnlyArrayList : ArrayList
	{
		[Token(Token = "0x40018B7")]
		[FieldOffset(Offset = "0x28")]
		private ArrayList _list;

		[Token(Token = "0x17000716")]
		public override int Count
		{
			[Token(Token = "0x6002D18")]
			[Address(RVA = "0x1ADA660", Offset = "0x1AD8C60", VA = "0x181ADA660", Slot = "22")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000717")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6002D19")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "24")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000718")]
		public override bool IsFixedSize
		{
			[Token(Token = "0x6002D1A")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "23")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000719")]
		public override bool IsSynchronized
		{
			[Token(Token = "0x6002D1B")]
			[Address(RVA = "0x1ADA690", Offset = "0x1AD8C90", VA = "0x181ADA690", Slot = "25")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700071A")]
		public override object this[int index]
		{
			[Token(Token = "0x6002D1C")]
			[Address(RVA = "0x1ADA6C0", Offset = "0x1AD8CC0", VA = "0x181ADA6C0", Slot = "27")]
			get
			{
				return null;
			}
			[Token(Token = "0x6002D1D")]
			[Address(RVA = "0x1ADA770", Offset = "0x1AD8D70", VA = "0x181ADA770", Slot = "28")]
			set
			{
			}
		}

		[Token(Token = "0x1700071B")]
		public override object SyncRoot
		{
			[Token(Token = "0x6002D1E")]
			[Address(RVA = "0x1ADA6F0", Offset = "0x1AD8CF0", VA = "0x181ADA6F0", Slot = "26")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700071C")]
		public override int Capacity
		{
			[Token(Token = "0x6002D21")]
			[Address(RVA = "0x1ADA720", Offset = "0x1AD8D20", VA = "0x181ADA720", Slot = "21")]
			set
			{
			}
		}

		[Token(Token = "0x6002D17")]
		[Address(RVA = "0x1ADA5F0", Offset = "0x1AD8BF0", VA = "0x181ADA5F0")]
		internal ReadOnlyArrayList(ArrayList l)
		{
		}

		[Token(Token = "0x6002D1F")]
		[Address(RVA = "0x1ADA0C0", Offset = "0x1AD86C0", VA = "0x181ADA0C0", Slot = "29")]
		public override int Add(object obj)
		{
			return default(int);
		}

		[Token(Token = "0x6002D20")]
		[Address(RVA = "0x1ADA070", Offset = "0x1AD8670", VA = "0x181ADA070", Slot = "30")]
		public override void AddRange(ICollection c)
		{
		}

		[Token(Token = "0x6002D22")]
		[Address(RVA = "0x1ADA110", Offset = "0x1AD8710", VA = "0x181ADA110", Slot = "31")]
		public override void Clear()
		{
		}

		[Token(Token = "0x6002D23")]
		[Address(RVA = "0x1ADA160", Offset = "0x1AD8760", VA = "0x181ADA160", Slot = "32")]
		public override object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002D24")]
		[Address(RVA = "0x1ADA2C0", Offset = "0x1AD88C0", VA = "0x181ADA2C0", Slot = "33")]
		public override bool Contains(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6002D25")]
		[Address(RVA = "0x1ADA320", Offset = "0x1AD8920", VA = "0x181ADA320", Slot = "35")]
		public override void CopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6002D26")]
		[Address(RVA = "0x1ADA2F0", Offset = "0x1AD88F0", VA = "0x181ADA2F0", Slot = "36")]
		public override void CopyTo(int index, Array array, int arrayIndex, int count)
		{
		}

		[Token(Token = "0x6002D27")]
		[Address(RVA = "0x1ADA350", Offset = "0x1AD8950", VA = "0x181ADA350", Slot = "37")]
		public override IEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002D28")]
		[Address(RVA = "0x1ADA380", Offset = "0x1AD8980", VA = "0x181ADA380", Slot = "38")]
		public override int IndexOf(object value)
		{
			return default(int);
		}

		[Token(Token = "0x6002D29")]
		[Address(RVA = "0x1ADA400", Offset = "0x1AD8A00", VA = "0x181ADA400", Slot = "39")]
		public override void Insert(int index, object obj)
		{
		}

		[Token(Token = "0x6002D2A")]
		[Address(RVA = "0x1ADA3B0", Offset = "0x1AD89B0", VA = "0x181ADA3B0", Slot = "40")]
		public override void InsertRange(int index, ICollection c)
		{
		}

		[Token(Token = "0x6002D2B")]
		[Address(RVA = "0x1ADA4F0", Offset = "0x1AD8AF0", VA = "0x181ADA4F0", Slot = "41")]
		public override void Remove(object value)
		{
		}

		[Token(Token = "0x6002D2C")]
		[Address(RVA = "0x1ADA450", Offset = "0x1AD8A50", VA = "0x181ADA450", Slot = "42")]
		public override void RemoveAt(int index)
		{
		}

		[Token(Token = "0x6002D2D")]
		[Address(RVA = "0x1ADA4A0", Offset = "0x1AD8AA0", VA = "0x181ADA4A0", Slot = "43")]
		public override void RemoveRange(int index, int count)
		{
		}

		[Token(Token = "0x6002D2E")]
		[Address(RVA = "0x1ADA540", Offset = "0x1AD8B40", VA = "0x181ADA540", Slot = "45")]
		public override void Sort(int index, int count, IComparer comparer)
		{
		}

		[Token(Token = "0x6002D2F")]
		[Address(RVA = "0x1ADA5C0", Offset = "0x1AD8BC0", VA = "0x181ADA5C0", Slot = "46")]
		public override object[] ToArray()
		{
			return null;
		}

		[Token(Token = "0x6002D30")]
		[Address(RVA = "0x1ADA590", Offset = "0x1AD8B90", VA = "0x181ADA590", Slot = "47")]
		public override Array ToArray(Type type)
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x20005F1")]
	private sealed class ArrayListEnumeratorSimple : IEnumerator, ICloneable
	{
		[Token(Token = "0x40018B8")]
		[FieldOffset(Offset = "0x10")]
		private ArrayList _list;

		[Token(Token = "0x40018B9")]
		[FieldOffset(Offset = "0x18")]
		private int _index;

		[Token(Token = "0x40018BA")]
		[FieldOffset(Offset = "0x1C")]
		private int _version;

		[Token(Token = "0x40018BB")]
		[FieldOffset(Offset = "0x20")]
		private object _currentElement;

		[Token(Token = "0x40018BC")]
		[FieldOffset(Offset = "0x28")]
		private bool _isArrayList;

		[Token(Token = "0x40018BD")]
		[FieldOffset(Offset = "0x0")]
		private static object s_dummyObject;

		[Token(Token = "0x1700071D")]
		public object Current
		{
			[Token(Token = "0x6002D34")]
			[Address(RVA = "0x1ACB250", Offset = "0x1AC9850", VA = "0x181ACB250", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002D31")]
		[Address(RVA = "0x1ACB150", Offset = "0x1AC9750", VA = "0x181ACB150")]
		internal ArrayListEnumeratorSimple(ArrayList list)
		{
		}

		[Token(Token = "0x6002D32")]
		[Address(RVA = "0x1A7BC80", Offset = "0x1A7A280", VA = "0x181A7BC80", Slot = "7")]
		public object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002D33")]
		[Address(RVA = "0x1ACAE00", Offset = "0x1AC9400", VA = "0x181ACAE00", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002D35")]
		[Address(RVA = "0x1ACB000", Offset = "0x1AC9600", VA = "0x181ACB000", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x20005F2")]
	internal class ArrayListDebugView
	{
	}

	[Token(Token = "0x40018B2")]
	[FieldOffset(Offset = "0x10")]
	private object[] _items;

	[Token(Token = "0x40018B3")]
	[FieldOffset(Offset = "0x18")]
	private int _size;

	[Token(Token = "0x40018B4")]
	[FieldOffset(Offset = "0x1C")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x40018B5")]
	[FieldOffset(Offset = "0x20")]
	private object _syncRoot;

	[Token(Token = "0x17000708")]
	public virtual int Capacity
	{
		[Token(Token = "0x6002CDF")]
		[Address(RVA = "0x1ACC8C0", Offset = "0x1ACAEC0", VA = "0x181ACC8C0", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x17000709")]
	public virtual int Count
	{
		[Token(Token = "0x6002CE0")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "22")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700070A")]
	public virtual bool IsFixedSize
	{
		[Token(Token = "0x6002CE1")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700070B")]
	public virtual bool IsReadOnly
	{
		[Token(Token = "0x6002CE2")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "24")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700070C")]
	public virtual bool IsSynchronized
	{
		[Token(Token = "0x6002CE3")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700070D")]
	public virtual object SyncRoot
	{
		[Token(Token = "0x6002CE4")]
		[Address(RVA = "0x1ACC850", Offset = "0x1ACAE50", VA = "0x181ACC850", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700070E")]
	public virtual object this[int index]
	{
		[Token(Token = "0x6002CE5")]
		[Address(RVA = "0x1ACC7A0", Offset = "0x1ACADA0", VA = "0x181ACC7A0", Slot = "27")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002CE6")]
		[Address(RVA = "0x1ACC9F0", Offset = "0x1ACAFF0", VA = "0x181ACC9F0", Slot = "28")]
		set
		{
		}
	}

	[Token(Token = "0x6002CDC")]
	[Address(RVA = "0x1ACC510", Offset = "0x1ACAB10", VA = "0x181ACC510")]
	public ArrayList()
	{
	}

	[Token(Token = "0x6002CDD")]
	[Address(RVA = "0x1ACC560", Offset = "0x1ACAB60", VA = "0x181ACC560")]
	public ArrayList(int capacity)
	{
	}

	[Token(Token = "0x6002CDE")]
	[Address(RVA = "0x1ACC660", Offset = "0x1ACAC60", VA = "0x181ACC660")]
	public ArrayList(ICollection c)
	{
	}

	[Token(Token = "0x6002CE7")]
	[Address(RVA = "0x1ACB350", Offset = "0x1AC9950", VA = "0x181ACB350")]
	public static ArrayList Adapter(IList list)
	{
		return null;
	}

	[Token(Token = "0x6002CE8")]
	[Address(RVA = "0x1ACB420", Offset = "0x1AC9A20", VA = "0x181ACB420", Slot = "29")]
	public virtual int Add(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002CE9")]
	[Address(RVA = "0x1ACB400", Offset = "0x1AC9A00", VA = "0x181ACB400", Slot = "30")]
	public virtual void AddRange(ICollection c)
	{
	}

	[Token(Token = "0x6002CEA")]
	[Address(RVA = "0xA34460", Offset = "0xA32A60", VA = "0x180A34460", Slot = "31")]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x6002CEB")]
	[Address(RVA = "0x1ACB520", Offset = "0x1AC9B20", VA = "0x181ACB520", Slot = "32")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002CEC")]
	[Address(RVA = "0x1ACB6A0", Offset = "0x1AC9CA0", VA = "0x181ACB6A0", Slot = "33")]
	public virtual bool Contains(object item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002CED")]
	[Address(RVA = "0x1ACB960", Offset = "0x1AC9F60", VA = "0x181ACB960", Slot = "34")]
	public virtual void CopyTo(Array array)
	{
	}

	[Token(Token = "0x6002CEE")]
	[Address(RVA = "0x1ACB8A0", Offset = "0x1AC9EA0", VA = "0x181ACB8A0", Slot = "35")]
	public virtual void CopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002CEF")]
	[Address(RVA = "0x1ACB790", Offset = "0x1AC9D90", VA = "0x181ACB790", Slot = "36")]
	public virtual void CopyTo(int index, Array array, int arrayIndex, int count)
	{
	}

	[Token(Token = "0x6002CF0")]
	[Address(RVA = "0x1ACB980", Offset = "0x1AC9F80", VA = "0x181ACB980")]
	private void EnsureCapacity(int min)
	{
	}

	[Token(Token = "0x6002CF1")]
	[Address(RVA = "0x1ACB9E0", Offset = "0x1AC9FE0", VA = "0x181ACB9E0", Slot = "37")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002CF2")]
	[Address(RVA = "0x1ACBB10", Offset = "0x1ACA110", VA = "0x181ACBB10", Slot = "38")]
	public virtual int IndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002CF3")]
	[Address(RVA = "0x1ACBD20", Offset = "0x1ACA320", VA = "0x181ACBD20", Slot = "39")]
	public virtual void Insert(int index, object value)
	{
	}

	[Token(Token = "0x6002CF4")]
	[Address(RVA = "0x1ACBB40", Offset = "0x1ACA140", VA = "0x181ACBB40", Slot = "40")]
	public virtual void InsertRange(int index, ICollection c)
	{
	}

	[Token(Token = "0x6002CF5")]
	[Address(RVA = "0x1ACBE80", Offset = "0x1ACA480", VA = "0x181ACBE80")]
	public static ArrayList ReadOnly(ArrayList list)
	{
		return null;
	}

	[Token(Token = "0x6002CF6")]
	[Address(RVA = "0x1ACC1E0", Offset = "0x1ACA7E0", VA = "0x181ACC1E0", Slot = "41")]
	public virtual void Remove(object obj)
	{
	}

	[Token(Token = "0x6002CF7")]
	[Address(RVA = "0x1ACBF30", Offset = "0x1ACA530", VA = "0x181ACBF30", Slot = "42")]
	public virtual void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6002CF8")]
	[Address(RVA = "0x1ACC010", Offset = "0x1ACA610", VA = "0x181ACC010", Slot = "43")]
	public virtual void RemoveRange(int index, int count)
	{
	}

	[Token(Token = "0x6002CF9")]
	[Address(RVA = "0x1ACC220", Offset = "0x1ACA820", VA = "0x181ACC220", Slot = "44")]
	public virtual void Sort(IComparer comparer)
	{
	}

	[Token(Token = "0x6002CFA")]
	[Address(RVA = "0x1ACC270", Offset = "0x1ACA870", VA = "0x181ACC270", Slot = "45")]
	public virtual void Sort(int index, int count, IComparer comparer)
	{
	}

	[Token(Token = "0x6002CFB")]
	[Address(RVA = "0x1ACC3C0", Offset = "0x1ACA9C0", VA = "0x181ACC3C0", Slot = "46")]
	public virtual object[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6002CFC")]
	[Address(RVA = "0x1ACC450", Offset = "0x1ACAA50", VA = "0x181ACC450", Slot = "47")]
	public virtual Array ToArray(Type type)
	{
		return null;
	}
}
