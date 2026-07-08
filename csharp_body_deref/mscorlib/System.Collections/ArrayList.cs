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
			[Address(RVA = "0x4FA2280", Offset = "0x4FA2280", VA = "0x4FA2280", Slot = "21")]
			set
			{
			}
		}

		[Token(Token = "0x17000781")]
		public override int Count
		{
			[Token(Token = "0x6002FEE")]
			[Address(RVA = "0x4FA2300", Offset = "0x4FA2300", VA = "0x4FA2300", Slot = "22")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000782")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6002FEF")]
			[Address(RVA = "0x4FA23A0", Offset = "0x4FA23A0", VA = "0x4FA23A0", Slot = "24")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000783")]
		public override bool IsFixedSize
		{
			[Token(Token = "0x6002FF0")]
			[Address(RVA = "0x4FA2440", Offset = "0x4FA2440", VA = "0x4FA2440", Slot = "23")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000784")]
		public override bool IsSynchronized
		{
			[Token(Token = "0x6002FF1")]
			[Address(RVA = "0x4FA24E0", Offset = "0x4FA24E0", VA = "0x4FA24E0", Slot = "25")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000785")]
		public override object this[int index]
		{
			[Token(Token = "0x6002FF2")]
			[Address(RVA = "0x4FA2580", Offset = "0x4FA2580", VA = "0x4FA2580", Slot = "27")]
			get
			{
				return null;
			}
			[Token(Token = "0x6002FF3")]
			[Address(RVA = "0x4FA2630", Offset = "0x4FA2630", VA = "0x4FA2630", Slot = "28")]
			set
			{
			}
		}

		[Token(Token = "0x17000786")]
		public override object SyncRoot
		{
			[Token(Token = "0x6002FF4")]
			[Address(RVA = "0x4FA26F0", Offset = "0x4FA26F0", VA = "0x4FA26F0", Slot = "26")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002FEC")]
		[Address(RVA = "0x4FA1210", Offset = "0x4FA1210", VA = "0x4FA1210")]
		internal IListWrapper(IList list)
		{
		}

		[Token(Token = "0x6002FF5")]
		[Address(RVA = "0x4FA2790", Offset = "0x4FA2790", VA = "0x4FA2790", Slot = "29")]
		public override int Add(object obj)
		{
			return default(int);
		}

		[Token(Token = "0x6002FF6")]
		[Address(RVA = "0x4FA2850", Offset = "0x4FA2850", VA = "0x4FA2850", Slot = "30")]
		public override void AddRange(ICollection c)
		{
		}

		[Token(Token = "0x6002FF7")]
		[Address(RVA = "0x4FA2890", Offset = "0x4FA2890", VA = "0x4FA2890", Slot = "31")]
		public override void Clear()
		{
		}

		[Token(Token = "0x6002FF8")]
		[Address(RVA = "0x4FA2A00", Offset = "0x4FA2A00", VA = "0x4FA2A00", Slot = "32")]
		public override object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002FF9")]
		[Address(RVA = "0x4FA2A70", Offset = "0x4FA2A70", VA = "0x4FA2A70", Slot = "33")]
		public override bool Contains(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6002FFA")]
		[Address(RVA = "0x4FA2B20", Offset = "0x4FA2B20", VA = "0x4FA2B20", Slot = "35")]
		public override void CopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6002FFB")]
		[Address(RVA = "0x4FA2BD0", Offset = "0x4FA2BD0", VA = "0x4FA2BD0", Slot = "36")]
		public override void CopyTo(int index, Array array, int arrayIndex, int count)
		{
		}

		[Token(Token = "0x6002FFC")]
		[Address(RVA = "0x4FA2F50", Offset = "0x4FA2F50", VA = "0x4FA2F50", Slot = "37")]
		public override IEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002FFD")]
		[Address(RVA = "0x4FA2FE0", Offset = "0x4FA2FE0", VA = "0x4FA2FE0", Slot = "38")]
		public override int IndexOf(object value)
		{
			return default(int);
		}

		[Token(Token = "0x6002FFE")]
		[Address(RVA = "0x4FA3090", Offset = "0x4FA3090", VA = "0x4FA3090", Slot = "39")]
		public override void Insert(int index, object obj)
		{
		}

		[Token(Token = "0x6002FFF")]
		[Address(RVA = "0x4FA3150", Offset = "0x4FA3150", VA = "0x4FA3150", Slot = "40")]
		public override void InsertRange(int index, ICollection c)
		{
		}

		[Token(Token = "0x6003000")]
		[Address(RVA = "0x4FA3570", Offset = "0x4FA3570", VA = "0x4FA3570", Slot = "41")]
		public override void Remove(object value)
		{
		}

		[Token(Token = "0x6003001")]
		[Address(RVA = "0x4FA35B0", Offset = "0x4FA35B0", VA = "0x4FA35B0", Slot = "42")]
		public override void RemoveAt(int index)
		{
		}

		[Token(Token = "0x6003002")]
		[Address(RVA = "0x4FA3660", Offset = "0x4FA3660", VA = "0x4FA3660", Slot = "43")]
		public override void RemoveRange(int index, int count)
		{
		}

		[Token(Token = "0x6003003")]
		[Address(RVA = "0x4FA38A0", Offset = "0x4FA38A0", VA = "0x4FA38A0", Slot = "45")]
		public override void Sort(int index, int count, IComparer comparer)
		{
		}

		[Token(Token = "0x6003004")]
		[Address(RVA = "0x4FA3B90", Offset = "0x4FA3B90", VA = "0x4FA3B90", Slot = "46")]
		public override object[] ToArray()
		{
			return null;
		}

		[Token(Token = "0x6003005")]
		[Address(RVA = "0x4FA3D20", Offset = "0x4FA3D20", VA = "0x4FA3D20", Slot = "47")]
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
			[Address(RVA = "0x4FA3ED0", Offset = "0x4FA3ED0", VA = "0x4FA3ED0", Slot = "22")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000788")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6003008")]
			[Address(RVA = "0x4FA3F00", Offset = "0x4FA3F00", VA = "0x4FA3F00", Slot = "24")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000789")]
		public override bool IsFixedSize
		{
			[Token(Token = "0x6003009")]
			[Address(RVA = "0x4FA3F10", Offset = "0x4FA3F10", VA = "0x4FA3F10", Slot = "23")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700078A")]
		public override bool IsSynchronized
		{
			[Token(Token = "0x600300A")]
			[Address(RVA = "0x4FA3F20", Offset = "0x4FA3F20", VA = "0x4FA3F20", Slot = "25")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700078B")]
		public override object this[int index]
		{
			[Token(Token = "0x600300B")]
			[Address(RVA = "0x4FA3F50", Offset = "0x4FA3F50", VA = "0x4FA3F50", Slot = "27")]
			get
			{
				return null;
			}
			[Token(Token = "0x600300C")]
			[Address(RVA = "0x4FA3F80", Offset = "0x4FA3F80", VA = "0x4FA3F80", Slot = "28")]
			set
			{
			}
		}

		[Token(Token = "0x1700078C")]
		public override object SyncRoot
		{
			[Token(Token = "0x600300D")]
			[Address(RVA = "0x4FA3FD0", Offset = "0x4FA3FD0", VA = "0x4FA3FD0", Slot = "26")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700078D")]
		public override int Capacity
		{
			[Token(Token = "0x6003010")]
			[Address(RVA = "0x4FA40A0", Offset = "0x4FA40A0", VA = "0x4FA40A0", Slot = "21")]
			set
			{
			}
		}

		[Token(Token = "0x6003006")]
		[Address(RVA = "0x4FA1D10", Offset = "0x4FA1D10", VA = "0x4FA1D10")]
		internal ReadOnlyArrayList(ArrayList l)
		{
		}

		[Token(Token = "0x600300E")]
		[Address(RVA = "0x4FA4000", Offset = "0x4FA4000", VA = "0x4FA4000", Slot = "29")]
		public override int Add(object obj)
		{
			return default(int);
		}

		[Token(Token = "0x600300F")]
		[Address(RVA = "0x4FA4050", Offset = "0x4FA4050", VA = "0x4FA4050", Slot = "30")]
		public override void AddRange(ICollection c)
		{
		}

		[Token(Token = "0x6003011")]
		[Address(RVA = "0x4FA40F0", Offset = "0x4FA40F0", VA = "0x4FA40F0", Slot = "31")]
		public override void Clear()
		{
		}

		[Token(Token = "0x6003012")]
		[Address(RVA = "0x4FA4140", Offset = "0x4FA4140", VA = "0x4FA4140", Slot = "32")]
		public override object Clone()
		{
			return null;
		}

		[Token(Token = "0x6003013")]
		[Address(RVA = "0x4FA4250", Offset = "0x4FA4250", VA = "0x4FA4250", Slot = "33")]
		public override bool Contains(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6003014")]
		[Address(RVA = "0x4FA4280", Offset = "0x4FA4280", VA = "0x4FA4280", Slot = "35")]
		public override void CopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6003015")]
		[Address(RVA = "0x4FA42B0", Offset = "0x4FA42B0", VA = "0x4FA42B0", Slot = "36")]
		public override void CopyTo(int index, Array array, int arrayIndex, int count)
		{
		}

		[Token(Token = "0x6003016")]
		[Address(RVA = "0x4FA42E0", Offset = "0x4FA42E0", VA = "0x4FA42E0", Slot = "37")]
		public override IEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6003017")]
		[Address(RVA = "0x4FA4310", Offset = "0x4FA4310", VA = "0x4FA4310", Slot = "38")]
		public override int IndexOf(object value)
		{
			return default(int);
		}

		[Token(Token = "0x6003018")]
		[Address(RVA = "0x4FA4340", Offset = "0x4FA4340", VA = "0x4FA4340", Slot = "39")]
		public override void Insert(int index, object obj)
		{
		}

		[Token(Token = "0x6003019")]
		[Address(RVA = "0x4FA4390", Offset = "0x4FA4390", VA = "0x4FA4390", Slot = "40")]
		public override void InsertRange(int index, ICollection c)
		{
		}

		[Token(Token = "0x600301A")]
		[Address(RVA = "0x4FA43E0", Offset = "0x4FA43E0", VA = "0x4FA43E0", Slot = "41")]
		public override void Remove(object value)
		{
		}

		[Token(Token = "0x600301B")]
		[Address(RVA = "0x4FA4430", Offset = "0x4FA4430", VA = "0x4FA4430", Slot = "42")]
		public override void RemoveAt(int index)
		{
		}

		[Token(Token = "0x600301C")]
		[Address(RVA = "0x4FA4480", Offset = "0x4FA4480", VA = "0x4FA4480", Slot = "43")]
		public override void RemoveRange(int index, int count)
		{
		}

		[Token(Token = "0x600301D")]
		[Address(RVA = "0x4FA44D0", Offset = "0x4FA44D0", VA = "0x4FA44D0", Slot = "45")]
		public override void Sort(int index, int count, IComparer comparer)
		{
		}

		[Token(Token = "0x600301E")]
		[Address(RVA = "0x4FA4520", Offset = "0x4FA4520", VA = "0x4FA4520", Slot = "46")]
		public override object[] ToArray()
		{
			return null;
		}

		[Token(Token = "0x600301F")]
		[Address(RVA = "0x4FA4550", Offset = "0x4FA4550", VA = "0x4FA4550", Slot = "47")]
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
			[Address(RVA = "0x4FA4760", Offset = "0x4FA4760", VA = "0x4FA4760", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003020")]
		[Address(RVA = "0x4FA1710", Offset = "0x4FA1710", VA = "0x4FA1710")]
		internal ArrayListEnumeratorSimple(ArrayList list)
		{
		}

		[Token(Token = "0x6003021")]
		[Address(RVA = "0x4FA4580", Offset = "0x4FA4580", VA = "0x4FA4580", Slot = "7")]
		public object Clone()
		{
			return null;
		}

		[Token(Token = "0x6003022")]
		[Address(RVA = "0x4FA4590", Offset = "0x4FA4590", VA = "0x4FA4590", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003024")]
		[Address(RVA = "0x4FA4820", Offset = "0x4FA4820", VA = "0x4FA4820", Slot = "6")]
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
		[Address(RVA = "0x4FA0E20", Offset = "0x4FA0E20", VA = "0x4FA0E20", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x1700077A")]
	public virtual int Count
	{
		[Token(Token = "0x6002FCF")]
		[Address(RVA = "0x4FA0F20", Offset = "0x4FA0F20", VA = "0x4FA0F20", Slot = "22")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700077B")]
	public virtual bool IsFixedSize
	{
		[Token(Token = "0x6002FD0")]
		[Address(RVA = "0x4FA0F30", Offset = "0x4FA0F30", VA = "0x4FA0F30", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700077C")]
	public virtual bool IsReadOnly
	{
		[Token(Token = "0x6002FD1")]
		[Address(RVA = "0x4FA0F40", Offset = "0x4FA0F40", VA = "0x4FA0F40", Slot = "24")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700077D")]
	public virtual bool IsSynchronized
	{
		[Token(Token = "0x6002FD2")]
		[Address(RVA = "0x4FA0F50", Offset = "0x4FA0F50", VA = "0x4FA0F50", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700077E")]
	public virtual object SyncRoot
	{
		[Token(Token = "0x6002FD3")]
		[Address(RVA = "0x4FA0F60", Offset = "0x4FA0F60", VA = "0x4FA0F60", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700077F")]
	public virtual object this[int index]
	{
		[Token(Token = "0x6002FD4")]
		[Address(RVA = "0x4FA0FE0", Offset = "0x4FA0FE0", VA = "0x4FA0FE0", Slot = "27")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002FD5")]
		[Address(RVA = "0x4FA1070", Offset = "0x4FA1070", VA = "0x4FA1070", Slot = "28")]
		set
		{
		}
	}

	[Token(Token = "0x6002FCB")]
	[Address(RVA = "0x4F99790", Offset = "0x4F99790", VA = "0x4F99790")]
	public ArrayList()
	{
	}

	[Token(Token = "0x6002FCC")]
	[Address(RVA = "0x4FA0A80", Offset = "0x4FA0A80", VA = "0x4FA0A80")]
	public ArrayList(int capacity)
	{
	}

	[Token(Token = "0x6002FCD")]
	[Address(RVA = "0x4FA0C10", Offset = "0x4FA0C10", VA = "0x4FA0C10")]
	public ArrayList(ICollection c)
	{
	}

	[Token(Token = "0x6002FD6")]
	[Address(RVA = "0x4FA1160", Offset = "0x4FA1160", VA = "0x4FA1160")]
	public static ArrayList Adapter(IList list)
	{
		return null;
	}

	[Token(Token = "0x6002FD7")]
	[Address(RVA = "0x4FA1240", Offset = "0x4FA1240", VA = "0x4FA1240", Slot = "29")]
	public virtual int Add(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002FD8")]
	[Address(RVA = "0x4FA1390", Offset = "0x4FA1390", VA = "0x4FA1390", Slot = "30")]
	public virtual void AddRange(ICollection c)
	{
	}

	[Token(Token = "0x6002FD9")]
	[Address(RVA = "0x4FA13B0", Offset = "0x4FA13B0", VA = "0x4FA13B0", Slot = "31")]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x6002FDA")]
	[Address(RVA = "0x4FA13E0", Offset = "0x4FA13E0", VA = "0x4FA13E0", Slot = "32")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002FDB")]
	[Address(RVA = "0x4FA1460", Offset = "0x4FA1460", VA = "0x4FA1460", Slot = "33")]
	public virtual bool Contains(object item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002FDC")]
	[Address(RVA = "0x4FA1520", Offset = "0x4FA1520", VA = "0x4FA1520", Slot = "34")]
	public virtual void CopyTo(Array array)
	{
	}

	[Token(Token = "0x6002FDD")]
	[Address(RVA = "0x4FA1540", Offset = "0x4FA1540", VA = "0x4FA1540", Slot = "35")]
	public virtual void CopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002FDE")]
	[Address(RVA = "0x4FA15E0", Offset = "0x4FA15E0", VA = "0x4FA15E0", Slot = "36")]
	public virtual void CopyTo(int index, Array array, int arrayIndex, int count)
	{
	}

	[Token(Token = "0x6002FDF")]
	[Address(RVA = "0x4FA1330", Offset = "0x4FA1330", VA = "0x4FA1330")]
	private void EnsureCapacity(int min)
	{
	}

	[Token(Token = "0x6002FE0")]
	[Address(RVA = "0x4FA16C0", Offset = "0x4FA16C0", VA = "0x4FA16C0", Slot = "37")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002FE1")]
	[Address(RVA = "0x4FA1800", Offset = "0x4FA1800", VA = "0x4FA1800", Slot = "38")]
	public virtual int IndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002FE2")]
	[Address(RVA = "0x4FA1820", Offset = "0x4FA1820", VA = "0x4FA1820", Slot = "39")]
	public virtual void Insert(int index, object value)
	{
	}

	[Token(Token = "0x6002FE3")]
	[Address(RVA = "0x4FA19C0", Offset = "0x4FA19C0", VA = "0x4FA19C0", Slot = "40")]
	public virtual void InsertRange(int index, ICollection c)
	{
	}

	[Token(Token = "0x6002FE4")]
	[Address(RVA = "0x4FA1C60", Offset = "0x4FA1C60", VA = "0x4FA1C60")]
	public static ArrayList ReadOnly(ArrayList list)
	{
		return null;
	}

	[Token(Token = "0x6002FE5")]
	[Address(RVA = "0x4FA1D40", Offset = "0x4FA1D40", VA = "0x4FA1D40", Slot = "41")]
	public virtual void Remove(object obj)
	{
	}

	[Token(Token = "0x6002FE6")]
	[Address(RVA = "0x4FA1D80", Offset = "0x4FA1D80", VA = "0x4FA1D80", Slot = "42")]
	public virtual void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6002FE7")]
	[Address(RVA = "0x4FA1E60", Offset = "0x4FA1E60", VA = "0x4FA1E60", Slot = "43")]
	public virtual void RemoveRange(int index, int count)
	{
	}

	[Token(Token = "0x6002FE8")]
	[Address(RVA = "0x4FA1FB0", Offset = "0x4FA1FB0", VA = "0x4FA1FB0", Slot = "44")]
	public virtual void Sort(IComparer comparer)
	{
	}

	[Token(Token = "0x6002FE9")]
	[Address(RVA = "0x4FA1FF0", Offset = "0x4FA1FF0", VA = "0x4FA1FF0", Slot = "45")]
	public virtual void Sort(int index, int count, IComparer comparer)
	{
	}

	[Token(Token = "0x6002FEA")]
	[Address(RVA = "0x4FA20D0", Offset = "0x4FA20D0", VA = "0x4FA20D0", Slot = "46")]
	public virtual object[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6002FEB")]
	[Address(RVA = "0x4FA21D0", Offset = "0x4FA21D0", VA = "0x4FA21D0", Slot = "47")]
	public virtual Array ToArray(Type type)
	{
		return null;
	}
}
