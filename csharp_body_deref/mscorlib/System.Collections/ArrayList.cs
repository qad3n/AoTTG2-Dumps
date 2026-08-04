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
[Token(Token = "0x200061A")]
[DebuggerTypeProxy(typeof(ArrayListDebugView))]
[DebuggerDisplay("Count = {Count}")]
public class ArrayList : IList, ICollection, IEnumerable, ICloneable
{
	[Serializable]
	[Token(Token = "0x200061B")]
	private class IListWrapper : ArrayList
	{
		[Token(Token = "0x4001A9E")]
		[FieldOffset(Offset = "0x28")]
		private IList _list;

		[Token(Token = "0x17000780")]
		public override int Capacity
		{
			[Token(Token = "0x6002FED")]
			[Address(RVA = "0x3C87DA0", Offset = "0x3C87DA0", VA = "0x3C87DA0", Slot = "21")]
			set
			{
			}
		}

		[Token(Token = "0x17000781")]
		public override int Count
		{
			[Token(Token = "0x6002FEE")]
			[Address(RVA = "0x3C87E20", Offset = "0x3C87E20", VA = "0x3C87E20", Slot = "22")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000782")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6002FEF")]
			[Address(RVA = "0x3C87EC0", Offset = "0x3C87EC0", VA = "0x3C87EC0", Slot = "24")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000783")]
		public override bool IsFixedSize
		{
			[Token(Token = "0x6002FF0")]
			[Address(RVA = "0x3C87F60", Offset = "0x3C87F60", VA = "0x3C87F60", Slot = "23")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000784")]
		public override bool IsSynchronized
		{
			[Token(Token = "0x6002FF1")]
			[Address(RVA = "0x3C88000", Offset = "0x3C88000", VA = "0x3C88000", Slot = "25")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000785")]
		public override object this[int index]
		{
			[Token(Token = "0x6002FF2")]
			[Address(RVA = "0x3C880A0", Offset = "0x3C880A0", VA = "0x3C880A0", Slot = "27")]
			get
			{
				return null;
			}
			[Token(Token = "0x6002FF3")]
			[Address(RVA = "0x3C88150", Offset = "0x3C88150", VA = "0x3C88150", Slot = "28")]
			set
			{
			}
		}

		[Token(Token = "0x17000786")]
		public override object SyncRoot
		{
			[Token(Token = "0x6002FF4")]
			[Address(RVA = "0x3C88210", Offset = "0x3C88210", VA = "0x3C88210", Slot = "26")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002FEC")]
		[Address(RVA = "0x3C86D30", Offset = "0x3C86D30", VA = "0x3C86D30")]
		internal IListWrapper(IList list)
		{
		}

		[Token(Token = "0x6002FF5")]
		[Address(RVA = "0x3C882B0", Offset = "0x3C882B0", VA = "0x3C882B0", Slot = "29")]
		public override int Add(object obj)
		{
			return default(int);
		}

		[Token(Token = "0x6002FF6")]
		[Address(RVA = "0x3C88370", Offset = "0x3C88370", VA = "0x3C88370", Slot = "30")]
		public override void AddRange(ICollection c)
		{
		}

		[Token(Token = "0x6002FF7")]
		[Address(RVA = "0x3C883B0", Offset = "0x3C883B0", VA = "0x3C883B0", Slot = "31")]
		public override void Clear()
		{
		}

		[Token(Token = "0x6002FF8")]
		[Address(RVA = "0x3C88520", Offset = "0x3C88520", VA = "0x3C88520", Slot = "32")]
		public override object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002FF9")]
		[Address(RVA = "0x3C88590", Offset = "0x3C88590", VA = "0x3C88590", Slot = "33")]
		public override bool Contains(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6002FFA")]
		[Address(RVA = "0x3C88640", Offset = "0x3C88640", VA = "0x3C88640", Slot = "35")]
		public override void CopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6002FFB")]
		[Address(RVA = "0x3C886F0", Offset = "0x3C886F0", VA = "0x3C886F0", Slot = "36")]
		public override void CopyTo(int index, Array array, int arrayIndex, int count)
		{
		}

		[Token(Token = "0x6002FFC")]
		[Address(RVA = "0x3C88A70", Offset = "0x3C88A70", VA = "0x3C88A70", Slot = "37")]
		public override IEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002FFD")]
		[Address(RVA = "0x3C88B00", Offset = "0x3C88B00", VA = "0x3C88B00", Slot = "38")]
		public override int IndexOf(object value)
		{
			return default(int);
		}

		[Token(Token = "0x6002FFE")]
		[Address(RVA = "0x3C88BB0", Offset = "0x3C88BB0", VA = "0x3C88BB0", Slot = "39")]
		public override void Insert(int index, object obj)
		{
		}

		[Token(Token = "0x6002FFF")]
		[Address(RVA = "0x3C88C70", Offset = "0x3C88C70", VA = "0x3C88C70", Slot = "40")]
		public override void InsertRange(int index, ICollection c)
		{
		}

		[Token(Token = "0x6003000")]
		[Address(RVA = "0x3C89090", Offset = "0x3C89090", VA = "0x3C89090", Slot = "41")]
		public override void Remove(object value)
		{
		}

		[Token(Token = "0x6003001")]
		[Address(RVA = "0x3C890D0", Offset = "0x3C890D0", VA = "0x3C890D0", Slot = "42")]
		public override void RemoveAt(int index)
		{
		}

		[Token(Token = "0x6003002")]
		[Address(RVA = "0x3C89180", Offset = "0x3C89180", VA = "0x3C89180", Slot = "43")]
		public override void RemoveRange(int index, int count)
		{
		}

		[Token(Token = "0x6003003")]
		[Address(RVA = "0x3C893C0", Offset = "0x3C893C0", VA = "0x3C893C0", Slot = "45")]
		public override void Sort(int index, int count, IComparer comparer)
		{
		}

		[Token(Token = "0x6003004")]
		[Address(RVA = "0x3C896B0", Offset = "0x3C896B0", VA = "0x3C896B0", Slot = "46")]
		public override object[] ToArray()
		{
			return null;
		}

		[Token(Token = "0x6003005")]
		[Address(RVA = "0x3C89840", Offset = "0x3C89840", VA = "0x3C89840", Slot = "47")]
		public override Array ToArray(Type type)
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x200061C")]
	private class ReadOnlyArrayList : ArrayList
	{
		[Token(Token = "0x4001A9F")]
		[FieldOffset(Offset = "0x28")]
		private ArrayList _list;

		[Token(Token = "0x17000787")]
		public override int Count
		{
			[Token(Token = "0x6003007")]
			[Address(RVA = "0x3C899F0", Offset = "0x3C899F0", VA = "0x3C899F0", Slot = "22")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000788")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6003008")]
			[Address(RVA = "0x3C89A20", Offset = "0x3C89A20", VA = "0x3C89A20", Slot = "24")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000789")]
		public override bool IsFixedSize
		{
			[Token(Token = "0x6003009")]
			[Address(RVA = "0x3C89A30", Offset = "0x3C89A30", VA = "0x3C89A30", Slot = "23")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700078A")]
		public override bool IsSynchronized
		{
			[Token(Token = "0x600300A")]
			[Address(RVA = "0x3C89A40", Offset = "0x3C89A40", VA = "0x3C89A40", Slot = "25")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700078B")]
		public override object this[int index]
		{
			[Token(Token = "0x600300B")]
			[Address(RVA = "0x3C89A70", Offset = "0x3C89A70", VA = "0x3C89A70", Slot = "27")]
			get
			{
				return null;
			}
			[Token(Token = "0x600300C")]
			[Address(RVA = "0x3C89AA0", Offset = "0x3C89AA0", VA = "0x3C89AA0", Slot = "28")]
			set
			{
			}
		}

		[Token(Token = "0x1700078C")]
		public override object SyncRoot
		{
			[Token(Token = "0x600300D")]
			[Address(RVA = "0x3C89AF0", Offset = "0x3C89AF0", VA = "0x3C89AF0", Slot = "26")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700078D")]
		public override int Capacity
		{
			[Token(Token = "0x6003010")]
			[Address(RVA = "0x3C89BC0", Offset = "0x3C89BC0", VA = "0x3C89BC0", Slot = "21")]
			set
			{
			}
		}

		[Token(Token = "0x6003006")]
		[Address(RVA = "0x3C87830", Offset = "0x3C87830", VA = "0x3C87830")]
		internal ReadOnlyArrayList(ArrayList l)
		{
		}

		[Token(Token = "0x600300E")]
		[Address(RVA = "0x3C89B20", Offset = "0x3C89B20", VA = "0x3C89B20", Slot = "29")]
		public override int Add(object obj)
		{
			return default(int);
		}

		[Token(Token = "0x600300F")]
		[Address(RVA = "0x3C89B70", Offset = "0x3C89B70", VA = "0x3C89B70", Slot = "30")]
		public override void AddRange(ICollection c)
		{
		}

		[Token(Token = "0x6003011")]
		[Address(RVA = "0x3C89C10", Offset = "0x3C89C10", VA = "0x3C89C10", Slot = "31")]
		public override void Clear()
		{
		}

		[Token(Token = "0x6003012")]
		[Address(RVA = "0x3C89C60", Offset = "0x3C89C60", VA = "0x3C89C60", Slot = "32")]
		public override object Clone()
		{
			return null;
		}

		[Token(Token = "0x6003013")]
		[Address(RVA = "0x3C89D70", Offset = "0x3C89D70", VA = "0x3C89D70", Slot = "33")]
		public override bool Contains(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6003014")]
		[Address(RVA = "0x3C89DA0", Offset = "0x3C89DA0", VA = "0x3C89DA0", Slot = "35")]
		public override void CopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6003015")]
		[Address(RVA = "0x3C89DD0", Offset = "0x3C89DD0", VA = "0x3C89DD0", Slot = "36")]
		public override void CopyTo(int index, Array array, int arrayIndex, int count)
		{
		}

		[Token(Token = "0x6003016")]
		[Address(RVA = "0x3C89E00", Offset = "0x3C89E00", VA = "0x3C89E00", Slot = "37")]
		public override IEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6003017")]
		[Address(RVA = "0x3C89E30", Offset = "0x3C89E30", VA = "0x3C89E30", Slot = "38")]
		public override int IndexOf(object value)
		{
			return default(int);
		}

		[Token(Token = "0x6003018")]
		[Address(RVA = "0x3C89E60", Offset = "0x3C89E60", VA = "0x3C89E60", Slot = "39")]
		public override void Insert(int index, object obj)
		{
		}

		[Token(Token = "0x6003019")]
		[Address(RVA = "0x3C89EB0", Offset = "0x3C89EB0", VA = "0x3C89EB0", Slot = "40")]
		public override void InsertRange(int index, ICollection c)
		{
		}

		[Token(Token = "0x600301A")]
		[Address(RVA = "0x3C89F00", Offset = "0x3C89F00", VA = "0x3C89F00", Slot = "41")]
		public override void Remove(object value)
		{
		}

		[Token(Token = "0x600301B")]
		[Address(RVA = "0x3C89F50", Offset = "0x3C89F50", VA = "0x3C89F50", Slot = "42")]
		public override void RemoveAt(int index)
		{
		}

		[Token(Token = "0x600301C")]
		[Address(RVA = "0x3C89FA0", Offset = "0x3C89FA0", VA = "0x3C89FA0", Slot = "43")]
		public override void RemoveRange(int index, int count)
		{
		}

		[Token(Token = "0x600301D")]
		[Address(RVA = "0x3C89FF0", Offset = "0x3C89FF0", VA = "0x3C89FF0", Slot = "45")]
		public override void Sort(int index, int count, IComparer comparer)
		{
		}

		[Token(Token = "0x600301E")]
		[Address(RVA = "0x3C8A040", Offset = "0x3C8A040", VA = "0x3C8A040", Slot = "46")]
		public override object[] ToArray()
		{
			return null;
		}

		[Token(Token = "0x600301F")]
		[Address(RVA = "0x3C8A070", Offset = "0x3C8A070", VA = "0x3C8A070", Slot = "47")]
		public override Array ToArray(Type type)
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x200061D")]
	private sealed class ArrayListEnumeratorSimple : IEnumerator, ICloneable
	{
		[Token(Token = "0x4001AA0")]
		[FieldOffset(Offset = "0x10")]
		private ArrayList _list;

		[Token(Token = "0x4001AA1")]
		[FieldOffset(Offset = "0x18")]
		private int _index;

		[Token(Token = "0x4001AA2")]
		[FieldOffset(Offset = "0x1C")]
		private int _version;

		[Token(Token = "0x4001AA3")]
		[FieldOffset(Offset = "0x20")]
		private object _currentElement;

		[Token(Token = "0x4001AA4")]
		[FieldOffset(Offset = "0x28")]
		private bool _isArrayList;

		[Token(Token = "0x4001AA5")]
		[FieldOffset(Offset = "0x0")]
		private static object s_dummyObject;

		[Token(Token = "0x1700078E")]
		public object Current
		{
			[Token(Token = "0x6003023")]
			[Address(RVA = "0x3C8A280", Offset = "0x3C8A280", VA = "0x3C8A280", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003020")]
		[Address(RVA = "0x3C87230", Offset = "0x3C87230", VA = "0x3C87230")]
		internal ArrayListEnumeratorSimple(ArrayList list)
		{
		}

		[Token(Token = "0x6003021")]
		[Address(RVA = "0x3C8A0A0", Offset = "0x3C8A0A0", VA = "0x3C8A0A0", Slot = "7")]
		public object Clone()
		{
			return null;
		}

		[Token(Token = "0x6003022")]
		[Address(RVA = "0x3C8A0B0", Offset = "0x3C8A0B0", VA = "0x3C8A0B0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003024")]
		[Address(RVA = "0x3C8A340", Offset = "0x3C8A340", VA = "0x3C8A340", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x200061E")]
	internal class ArrayListDebugView
	{
	}

	[Token(Token = "0x4001A98")]
	[FieldOffset(Offset = "0x10")]
	private object[] _items;

	[Token(Token = "0x4001A99")]
	[FieldOffset(Offset = "0x18")]
	private int _size;

	[Token(Token = "0x4001A9A")]
	[FieldOffset(Offset = "0x1C")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x4001A9B")]
	[FieldOffset(Offset = "0x20")]
	private object _syncRoot;

	[Token(Token = "0x4001A9C")]
	private const int _defaultCapacity = 4;

	[Token(Token = "0x4001A9D")]
	internal const int MaxArrayLength = 2146435071;

	[Token(Token = "0x17000779")]
	public virtual int Capacity
	{
		[Token(Token = "0x6002FCE")]
		[Address(RVA = "0x3C86940", Offset = "0x3C86940", VA = "0x3C86940", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x1700077A")]
	public virtual int Count
	{
		[Token(Token = "0x6002FCF")]
		[Address(RVA = "0x3C86A40", Offset = "0x3C86A40", VA = "0x3C86A40", Slot = "22")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700077B")]
	public virtual bool IsFixedSize
	{
		[Token(Token = "0x6002FD0")]
		[Address(RVA = "0x3C86A50", Offset = "0x3C86A50", VA = "0x3C86A50", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700077C")]
	public virtual bool IsReadOnly
	{
		[Token(Token = "0x6002FD1")]
		[Address(RVA = "0x3C86A60", Offset = "0x3C86A60", VA = "0x3C86A60", Slot = "24")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700077D")]
	public virtual bool IsSynchronized
	{
		[Token(Token = "0x6002FD2")]
		[Address(RVA = "0x3C86A70", Offset = "0x3C86A70", VA = "0x3C86A70", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700077E")]
	public virtual object SyncRoot
	{
		[Token(Token = "0x6002FD3")]
		[Address(RVA = "0x3C86A80", Offset = "0x3C86A80", VA = "0x3C86A80", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700077F")]
	public virtual object this[int index]
	{
		[Token(Token = "0x6002FD4")]
		[Address(RVA = "0x3C86B00", Offset = "0x3C86B00", VA = "0x3C86B00", Slot = "27")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002FD5")]
		[Address(RVA = "0x3C86B90", Offset = "0x3C86B90", VA = "0x3C86B90", Slot = "28")]
		set
		{
		}
	}

	[Token(Token = "0x6002FCB")]
	[Address(RVA = "0x3C7F2B0", Offset = "0x3C7F2B0", VA = "0x3C7F2B0")]
	public ArrayList()
	{
	}

	[Token(Token = "0x6002FCC")]
	[Address(RVA = "0x3C865A0", Offset = "0x3C865A0", VA = "0x3C865A0")]
	public ArrayList(int capacity)
	{
	}

	[Token(Token = "0x6002FCD")]
	[Address(RVA = "0x3C86730", Offset = "0x3C86730", VA = "0x3C86730")]
	public ArrayList(ICollection c)
	{
	}

	[Token(Token = "0x6002FD6")]
	[Address(RVA = "0x3C86C80", Offset = "0x3C86C80", VA = "0x3C86C80")]
	public static ArrayList Adapter(IList list)
	{
		return null;
	}

	[Token(Token = "0x6002FD7")]
	[Address(RVA = "0x3C86D60", Offset = "0x3C86D60", VA = "0x3C86D60", Slot = "29")]
	public virtual int Add(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002FD8")]
	[Address(RVA = "0x3C86EB0", Offset = "0x3C86EB0", VA = "0x3C86EB0", Slot = "30")]
	public virtual void AddRange(ICollection c)
	{
	}

	[Token(Token = "0x6002FD9")]
	[Address(RVA = "0x3C86ED0", Offset = "0x3C86ED0", VA = "0x3C86ED0", Slot = "31")]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x6002FDA")]
	[Address(RVA = "0x3C86F00", Offset = "0x3C86F00", VA = "0x3C86F00", Slot = "32")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002FDB")]
	[Address(RVA = "0x3C86F80", Offset = "0x3C86F80", VA = "0x3C86F80", Slot = "33")]
	public virtual bool Contains(object item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002FDC")]
	[Address(RVA = "0x3C87040", Offset = "0x3C87040", VA = "0x3C87040", Slot = "34")]
	public virtual void CopyTo(Array array)
	{
	}

	[Token(Token = "0x6002FDD")]
	[Address(RVA = "0x3C87060", Offset = "0x3C87060", VA = "0x3C87060", Slot = "35")]
	public virtual void CopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002FDE")]
	[Address(RVA = "0x3C87100", Offset = "0x3C87100", VA = "0x3C87100", Slot = "36")]
	public virtual void CopyTo(int index, Array array, int arrayIndex, int count)
	{
	}

	[Token(Token = "0x6002FDF")]
	[Address(RVA = "0x3C86E50", Offset = "0x3C86E50", VA = "0x3C86E50")]
	private void EnsureCapacity(int min)
	{
	}

	[Token(Token = "0x6002FE0")]
	[Address(RVA = "0x3C871E0", Offset = "0x3C871E0", VA = "0x3C871E0", Slot = "37")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002FE1")]
	[Address(RVA = "0x3C87320", Offset = "0x3C87320", VA = "0x3C87320", Slot = "38")]
	public virtual int IndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002FE2")]
	[Address(RVA = "0x3C87340", Offset = "0x3C87340", VA = "0x3C87340", Slot = "39")]
	public virtual void Insert(int index, object value)
	{
	}

	[Token(Token = "0x6002FE3")]
	[Address(RVA = "0x3C874E0", Offset = "0x3C874E0", VA = "0x3C874E0", Slot = "40")]
	public virtual void InsertRange(int index, ICollection c)
	{
	}

	[Token(Token = "0x6002FE4")]
	[Address(RVA = "0x3C87780", Offset = "0x3C87780", VA = "0x3C87780")]
	public static ArrayList ReadOnly(ArrayList list)
	{
		return null;
	}

	[Token(Token = "0x6002FE5")]
	[Address(RVA = "0x3C87860", Offset = "0x3C87860", VA = "0x3C87860", Slot = "41")]
	public virtual void Remove(object obj)
	{
	}

	[Token(Token = "0x6002FE6")]
	[Address(RVA = "0x3C878A0", Offset = "0x3C878A0", VA = "0x3C878A0", Slot = "42")]
	public virtual void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6002FE7")]
	[Address(RVA = "0x3C87980", Offset = "0x3C87980", VA = "0x3C87980", Slot = "43")]
	public virtual void RemoveRange(int index, int count)
	{
	}

	[Token(Token = "0x6002FE8")]
	[Address(RVA = "0x3C87AD0", Offset = "0x3C87AD0", VA = "0x3C87AD0", Slot = "44")]
	public virtual void Sort(IComparer comparer)
	{
	}

	[Token(Token = "0x6002FE9")]
	[Address(RVA = "0x3C87B10", Offset = "0x3C87B10", VA = "0x3C87B10", Slot = "45")]
	public virtual void Sort(int index, int count, IComparer comparer)
	{
	}

	[Token(Token = "0x6002FEA")]
	[Address(RVA = "0x3C87BF0", Offset = "0x3C87BF0", VA = "0x3C87BF0", Slot = "46")]
	public virtual object[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6002FEB")]
	[Address(RVA = "0x3C87CF0", Offset = "0x3C87CF0", VA = "0x3C87CF0", Slot = "47")]
	public virtual Array ToArray(Type type)
	{
		return null;
	}
}
