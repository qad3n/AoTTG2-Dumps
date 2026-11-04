// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.SortedList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x20005E3")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(SortedListDebugView))]
public class SortedList : IDictionary, ICollection, IEnumerable, ICloneable
{
	[Serializable]
	[Token(Token = "0x20005E4")]
	private class SyncSortedList : SortedList
	{
		[Token(Token = "0x4001895")]
		[FieldOffset(Offset = "0x48")]
		private SortedList _list;

		[Token(Token = "0x4001896")]
		[FieldOffset(Offset = "0x50")]
		private object _root;

		[Token(Token = "0x170006E8")]
		public override int Count
		{
			[Token(Token = "0x6002C73")]
			[Address(RVA = "0x1AC9B80", Offset = "0x1AC8180", VA = "0x181AC9B80", Slot = "23")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170006E9")]
		public override object SyncRoot
		{
			[Token(Token = "0x6002C74")]
			[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0", Slot = "29")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170006EA")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6002C75")]
			[Address(RVA = "0x1AC9C60", Offset = "0x1AC8260", VA = "0x181AC9C60", Slot = "26")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170006EB")]
		public override bool IsFixedSize
		{
			[Token(Token = "0x6002C76")]
			[Address(RVA = "0x1AC9C30", Offset = "0x1AC8230", VA = "0x181AC9C30", Slot = "27")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170006EC")]
		public override bool IsSynchronized
		{
			[Token(Token = "0x6002C77")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "28")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170006ED")]
		public override object this[object key]
		{
			[Token(Token = "0x6002C78")]
			[Address(RVA = "0x1AC9C90", Offset = "0x1AC8290", VA = "0x181AC9C90", Slot = "41")]
			get
			{
				return null;
			}
			[Token(Token = "0x6002C79")]
			[Address(RVA = "0x1AC9D50", Offset = "0x1AC8350", VA = "0x181AC9D50", Slot = "42")]
			set
			{
			}
		}

		[Token(Token = "0x6002C72")]
		[Address(RVA = "0x1AC9B20", Offset = "0x1AC8120", VA = "0x181AC9B20")]
		internal SyncSortedList(SortedList list)
		{
		}

		[Token(Token = "0x6002C7A")]
		[Address(RVA = "0x1AC8F30", Offset = "0x1AC7530", VA = "0x181AC8F30", Slot = "21")]
		public override void Add(object key, object value)
		{
		}

		[Token(Token = "0x6002C7B")]
		[Address(RVA = "0x1AC8FF0", Offset = "0x1AC75F0", VA = "0x181AC8FF0", Slot = "30")]
		public override void Clear()
		{
		}

		[Token(Token = "0x6002C7C")]
		[Address(RVA = "0x1AC9090", Offset = "0x1AC7690", VA = "0x181AC9090", Slot = "31")]
		public override object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002C7D")]
		[Address(RVA = "0x1AC92C0", Offset = "0x1AC78C0", VA = "0x181AC92C0", Slot = "32")]
		public override bool Contains(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x6002C7E")]
		[Address(RVA = "0x1AC9140", Offset = "0x1AC7740", VA = "0x181AC9140", Slot = "33")]
		public override bool ContainsKey(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x6002C7F")]
		[Address(RVA = "0x1AC9200", Offset = "0x1AC7800", VA = "0x181AC9200", Slot = "34")]
		public override bool ContainsValue(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x6002C80")]
		[Address(RVA = "0x1AC9380", Offset = "0x1AC7980", VA = "0x181AC9380", Slot = "35")]
		public override void CopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6002C81")]
		[Address(RVA = "0x1AC9440", Offset = "0x1AC7A40", VA = "0x181AC9440", Slot = "36")]
		public override object GetByIndex(int index)
		{
			return null;
		}

		[Token(Token = "0x6002C82")]
		[Address(RVA = "0x1AC9500", Offset = "0x1AC7B00", VA = "0x181AC9500", Slot = "37")]
		public override IDictionaryEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002C83")]
		[Address(RVA = "0x1AC9660", Offset = "0x1AC7C60", VA = "0x181AC9660", Slot = "38")]
		public override object GetKey(int index)
		{
			return null;
		}

		[Token(Token = "0x6002C84")]
		[Address(RVA = "0x1AC95B0", Offset = "0x1AC7BB0", VA = "0x181AC95B0", Slot = "39")]
		public override IList GetKeyList()
		{
			return null;
		}

		[Token(Token = "0x6002C85")]
		[Address(RVA = "0x1AC9720", Offset = "0x1AC7D20", VA = "0x181AC9720", Slot = "40")]
		public override IList GetValueList()
		{
			return null;
		}

		[Token(Token = "0x6002C86")]
		[Address(RVA = "0x1AC97D0", Offset = "0x1AC7DD0", VA = "0x181AC97D0", Slot = "43")]
		public override int IndexOfKey(object key)
		{
			return default(int);
		}

		[Token(Token = "0x6002C87")]
		[Address(RVA = "0x1AC9900", Offset = "0x1AC7F00", VA = "0x181AC9900", Slot = "44")]
		public override int IndexOfValue(object value)
		{
			return default(int);
		}

		[Token(Token = "0x6002C88")]
		[Address(RVA = "0x1AC99C0", Offset = "0x1AC7FC0", VA = "0x181AC99C0", Slot = "45")]
		public override void RemoveAt(int index)
		{
		}

		[Token(Token = "0x6002C89")]
		[Address(RVA = "0x1AC9A70", Offset = "0x1AC8070", VA = "0x181AC9A70", Slot = "46")]
		public override void Remove(object key)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20005E5")]
	private class SortedListEnumerator : IDictionaryEnumerator, IEnumerator, ICloneable
	{
		[Token(Token = "0x4001897")]
		[FieldOffset(Offset = "0x10")]
		private SortedList _sortedList;

		[Token(Token = "0x4001898")]
		[FieldOffset(Offset = "0x18")]
		private object _key;

		[Token(Token = "0x4001899")]
		[FieldOffset(Offset = "0x20")]
		private object _value;

		[Token(Token = "0x400189A")]
		[FieldOffset(Offset = "0x28")]
		private int _index;

		[Token(Token = "0x400189B")]
		[FieldOffset(Offset = "0x2C")]
		private int _startIndex;

		[Token(Token = "0x400189C")]
		[FieldOffset(Offset = "0x30")]
		private int _endIndex;

		[Token(Token = "0x400189D")]
		[FieldOffset(Offset = "0x34")]
		private int _version;

		[Token(Token = "0x400189E")]
		[FieldOffset(Offset = "0x38")]
		private bool _current;

		[Token(Token = "0x400189F")]
		[FieldOffset(Offset = "0x3C")]
		private int _getObjectRetType;

		[Token(Token = "0x170006EE")]
		public virtual object Key
		{
			[Token(Token = "0x6002C8C")]
			[Address(RVA = "0x1AC51E0", Offset = "0x1AC37E0", VA = "0x181AC51E0", Slot = "11")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170006EF")]
		public virtual DictionaryEntry Entry
		{
			[Token(Token = "0x6002C8E")]
			[Address(RVA = "0x1AC50E0", Offset = "0x1AC36E0", VA = "0x181AC50E0", Slot = "13")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x170006F0")]
		public virtual object Current
		{
			[Token(Token = "0x6002C8F")]
			[Address(RVA = "0x1AC4FE0", Offset = "0x1AC35E0", VA = "0x181AC4FE0", Slot = "14")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170006F1")]
		public virtual object Value
		{
			[Token(Token = "0x6002C90")]
			[Address(RVA = "0x1AC52B0", Offset = "0x1AC38B0", VA = "0x181AC52B0", Slot = "15")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002C8A")]
		[Address(RVA = "0x1AC4F80", Offset = "0x1AC3580", VA = "0x181AC4F80")]
		internal SortedListEnumerator(SortedList sortedList, int index, int count, int getObjRetType)
		{
		}

		[Token(Token = "0x6002C8B")]
		[Address(RVA = "0x1A7BC80", Offset = "0x1A7A280", VA = "0x181A7BC80", Slot = "10")]
		public object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002C8D")]
		[Address(RVA = "0x1AC4DC0", Offset = "0x1AC33C0", VA = "0x181AC4DC0", Slot = "12")]
		public virtual bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002C91")]
		[Address(RVA = "0x1AC4EE0", Offset = "0x1AC34E0", VA = "0x181AC4EE0", Slot = "16")]
		public virtual void Reset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20005E6")]
	[TypeForwardedFrom("mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089")]
	private class KeyList : IList, ICollection, IEnumerable
	{
		[Token(Token = "0x40018A0")]
		[FieldOffset(Offset = "0x10")]
		private SortedList sortedList;

		[Token(Token = "0x170006F2")]
		public virtual int Count
		{
			[Token(Token = "0x6002C93")]
			[Address(RVA = "0xF3EA90", Offset = "0xF3D090", VA = "0x180F3EA90", Slot = "20")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170006F3")]
		public virtual bool IsReadOnly
		{
			[Token(Token = "0x6002C94")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "21")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170006F4")]
		public virtual bool IsFixedSize
		{
			[Token(Token = "0x6002C95")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "22")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170006F5")]
		public virtual bool IsSynchronized
		{
			[Token(Token = "0x6002C96")]
			[Address(RVA = "0x1AC1C00", Offset = "0x1AC0200", VA = "0x181AC1C00", Slot = "23")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170006F6")]
		public virtual object SyncRoot
		{
			[Token(Token = "0x6002C97")]
			[Address(RVA = "0x197BE90", Offset = "0x197A490", VA = "0x18197BE90", Slot = "24")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170006F7")]
		public virtual object this[int index]
		{
			[Token(Token = "0x6002C9D")]
			[Address(RVA = "0x1AB8650", Offset = "0x1AB6C50", VA = "0x181AB8650", Slot = "30")]
			get
			{
				return null;
			}
			[Token(Token = "0x6002C9E")]
			[Address(RVA = "0x1AC1C30", Offset = "0x1AC0230", VA = "0x181AC1C30", Slot = "31")]
			set
			{
			}
		}

		[Token(Token = "0x6002C92")]
		[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
		internal KeyList(SortedList sortedList)
		{
		}

		[Token(Token = "0x6002C98")]
		[Address(RVA = "0x1AC17D0", Offset = "0x1ABFDD0", VA = "0x181AC17D0", Slot = "25")]
		public virtual int Add(object key)
		{
			return default(int);
		}

		[Token(Token = "0x6002C99")]
		[Address(RVA = "0x1AC1820", Offset = "0x1ABFE20", VA = "0x181AC1820", Slot = "26")]
		public virtual void Clear()
		{
		}

		[Token(Token = "0x6002C9A")]
		[Address(RVA = "0x1AC1870", Offset = "0x1ABFE70", VA = "0x181AC1870", Slot = "27")]
		public virtual bool Contains(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x6002C9B")]
		[Address(RVA = "0x1AC18A0", Offset = "0x1ABFEA0", VA = "0x181AC18A0", Slot = "28")]
		public virtual void CopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x6002C9C")]
		[Address(RVA = "0x1AC1B10", Offset = "0x1AC0110", VA = "0x181AC1B10", Slot = "29")]
		public virtual void Insert(int index, object value)
		{
		}

		[Token(Token = "0x6002C9F")]
		[Address(RVA = "0x1AC1970", Offset = "0x1ABFF70", VA = "0x181AC1970", Slot = "32")]
		public virtual IEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002CA0")]
		[Address(RVA = "0x1AC1A20", Offset = "0x1AC0020", VA = "0x181AC1A20", Slot = "33")]
		public virtual int IndexOf(object key)
		{
			return default(int);
		}

		[Token(Token = "0x6002CA1")]
		[Address(RVA = "0x1AC1BB0", Offset = "0x1AC01B0", VA = "0x181AC1BB0", Slot = "34")]
		public virtual void Remove(object key)
		{
		}

		[Token(Token = "0x6002CA2")]
		[Address(RVA = "0x1AC1B60", Offset = "0x1AC0160", VA = "0x181AC1B60", Slot = "35")]
		public virtual void RemoveAt(int index)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20005E7")]
	[TypeForwardedFrom("mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089")]
	private class ValueList : IList, ICollection, IEnumerable
	{
		[Token(Token = "0x40018A1")]
		[FieldOffset(Offset = "0x10")]
		private SortedList sortedList;

		[Token(Token = "0x170006F8")]
		public virtual int Count
		{
			[Token(Token = "0x6002CA4")]
			[Address(RVA = "0xF3EA90", Offset = "0xF3D090", VA = "0x180F3EA90", Slot = "20")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170006F9")]
		public virtual bool IsReadOnly
		{
			[Token(Token = "0x6002CA5")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "21")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170006FA")]
		public virtual bool IsFixedSize
		{
			[Token(Token = "0x6002CA6")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "22")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170006FB")]
		public virtual bool IsSynchronized
		{
			[Token(Token = "0x6002CA7")]
			[Address(RVA = "0x1AC1C00", Offset = "0x1AC0200", VA = "0x181AC1C00", Slot = "23")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170006FC")]
		public virtual object SyncRoot
		{
			[Token(Token = "0x6002CA8")]
			[Address(RVA = "0x197BE90", Offset = "0x197A490", VA = "0x18197BE90", Slot = "24")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170006FD")]
		public virtual object this[int index]
		{
			[Token(Token = "0x6002CAE")]
			[Address(RVA = "0x1ACA880", Offset = "0x1AC8E80", VA = "0x181ACA880", Slot = "30")]
			get
			{
				return null;
			}
			[Token(Token = "0x6002CAF")]
			[Address(RVA = "0x1ACA8B0", Offset = "0x1AC8EB0", VA = "0x181ACA8B0", Slot = "31")]
			set
			{
			}
		}

		[Token(Token = "0x6002CA3")]
		[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
		internal ValueList(SortedList sortedList)
		{
		}

		[Token(Token = "0x6002CA9")]
		[Address(RVA = "0x1ACA4B0", Offset = "0x1AC8AB0", VA = "0x181ACA4B0", Slot = "25")]
		public virtual int Add(object key)
		{
			return default(int);
		}

		[Token(Token = "0x6002CAA")]
		[Address(RVA = "0x1ACA500", Offset = "0x1AC8B00", VA = "0x181ACA500", Slot = "26")]
		public virtual void Clear()
		{
		}

		[Token(Token = "0x6002CAB")]
		[Address(RVA = "0x1ACA550", Offset = "0x1AC8B50", VA = "0x181ACA550", Slot = "27")]
		public virtual bool Contains(object value)
		{
			return default(bool);
		}

		[Token(Token = "0x6002CAC")]
		[Address(RVA = "0x1ACA580", Offset = "0x1AC8B80", VA = "0x181ACA580", Slot = "28")]
		public virtual void CopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x6002CAD")]
		[Address(RVA = "0x1ACA790", Offset = "0x1AC8D90", VA = "0x181ACA790", Slot = "29")]
		public virtual void Insert(int index, object value)
		{
		}

		[Token(Token = "0x6002CB0")]
		[Address(RVA = "0x1ACA650", Offset = "0x1AC8C50", VA = "0x181ACA650", Slot = "32")]
		public virtual IEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002CB1")]
		[Address(RVA = "0x1ACA700", Offset = "0x1AC8D00", VA = "0x181ACA700", Slot = "33")]
		public virtual int IndexOf(object value)
		{
			return default(int);
		}

		[Token(Token = "0x6002CB2")]
		[Address(RVA = "0x1ACA830", Offset = "0x1AC8E30", VA = "0x181ACA830", Slot = "34")]
		public virtual void Remove(object value)
		{
		}

		[Token(Token = "0x6002CB3")]
		[Address(RVA = "0x1ACA7E0", Offset = "0x1AC8DE0", VA = "0x181ACA7E0", Slot = "35")]
		public virtual void RemoveAt(int index)
		{
		}
	}

	[Token(Token = "0x20005E8")]
	internal class SortedListDebugView
	{
	}

	[Token(Token = "0x400188D")]
	[FieldOffset(Offset = "0x10")]
	private object[] keys;

	[Token(Token = "0x400188E")]
	[FieldOffset(Offset = "0x18")]
	private object[] values;

	[Token(Token = "0x400188F")]
	[FieldOffset(Offset = "0x20")]
	private int _size;

	[Token(Token = "0x4001890")]
	[FieldOffset(Offset = "0x24")]
	private int version;

	[Token(Token = "0x4001891")]
	[FieldOffset(Offset = "0x28")]
	private IComparer comparer;

	[Token(Token = "0x4001892")]
	[FieldOffset(Offset = "0x30")]
	private KeyList keyList;

	[Token(Token = "0x4001893")]
	[FieldOffset(Offset = "0x38")]
	private ValueList valueList;

	[NonSerialized]
	[Token(Token = "0x4001894")]
	[FieldOffset(Offset = "0x40")]
	private object _syncRoot;

	[Token(Token = "0x170006DF")]
	public virtual int Capacity
	{
		[Token(Token = "0x6002C55")]
		[Address(RVA = "0x1AC67C0", Offset = "0x1AC4DC0", VA = "0x181AC67C0", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x170006E0")]
	public virtual int Count
	{
		[Token(Token = "0x6002C56")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170", Slot = "23")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006E1")]
	public virtual ICollection Keys
	{
		[Token(Token = "0x6002C57")]
		[Address(RVA = "0x1AC6710", Offset = "0x1AC4D10", VA = "0x181AC6710", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006E2")]
	public virtual ICollection Values
	{
		[Token(Token = "0x6002C58")]
		[Address(RVA = "0x1AC67A0", Offset = "0x1AC4DA0", VA = "0x181AC67A0", Slot = "25")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006E3")]
	public virtual bool IsReadOnly
	{
		[Token(Token = "0x6002C59")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006E4")]
	public virtual bool IsFixedSize
	{
		[Token(Token = "0x6002C5A")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "27")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006E5")]
	public virtual bool IsSynchronized
	{
		[Token(Token = "0x6002C5B")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "28")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006E6")]
	public virtual object SyncRoot
	{
		[Token(Token = "0x6002C5C")]
		[Address(RVA = "0x1AC6730", Offset = "0x1AC4D30", VA = "0x181AC6730", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006E7")]
	public virtual object this[object key]
	{
		[Token(Token = "0x6002C6A")]
		[Address(RVA = "0x1AC66C0", Offset = "0x1AC4CC0", VA = "0x181AC66C0", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002C6B")]
		[Address(RVA = "0x1AC6970", Offset = "0x1AC4F70", VA = "0x181AC6970", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x6002C50")]
	[Address(RVA = "0x1AC6370", Offset = "0x1AC4970", VA = "0x181AC6370")]
	public SortedList()
	{
	}

	[Token(Token = "0x6002C51")]
	[Address(RVA = "0x1AC5D20", Offset = "0x1AC4320", VA = "0x181AC5D20")]
	private void Init()
	{
	}

	[Token(Token = "0x6002C52")]
	[Address(RVA = "0x1AC64E0", Offset = "0x1AC4AE0", VA = "0x181AC64E0")]
	public SortedList(int initialCapacity)
	{
	}

	[Token(Token = "0x6002C53")]
	[Address(RVA = "0x1AC6330", Offset = "0x1AC4930", VA = "0x181AC6330")]
	public SortedList(IComparer comparer)
	{
	}

	[Token(Token = "0x6002C54")]
	[Address(RVA = "0x1AC5380", Offset = "0x1AC3980", VA = "0x181AC5380", Slot = "21")]
	public virtual void Add(object key, object value)
	{
	}

	[Token(Token = "0x6002C5D")]
	[Address(RVA = "0xCA4FA0", Offset = "0xCA35A0", VA = "0x180CA4FA0", Slot = "30")]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x6002C5E")]
	[Address(RVA = "0x1AC54C0", Offset = "0x1AC3AC0", VA = "0x181AC54C0", Slot = "31")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002C5F")]
	[Address(RVA = "0x1AC5590", Offset = "0x1AC3B90", VA = "0x181AC5590", Slot = "32")]
	public virtual bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C60")]
	[Address(RVA = "0x1AC5590", Offset = "0x1AC3B90", VA = "0x181AC5590", Slot = "33")]
	public virtual bool ContainsKey(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C61")]
	[Address(RVA = "0x1AC55B0", Offset = "0x1AC3BB0", VA = "0x181AC55B0", Slot = "34")]
	public virtual bool ContainsValue(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C62")]
	[Address(RVA = "0x1AC55D0", Offset = "0x1AC3BD0", VA = "0x181AC55D0", Slot = "35")]
	public virtual void CopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002C63")]
	[Address(RVA = "0x1AC58C0", Offset = "0x1AC3EC0", VA = "0x181AC58C0")]
	private void EnsureCapacity(int min)
	{
	}

	[Token(Token = "0x6002C64")]
	[Address(RVA = "0x1AC5920", Offset = "0x1AC3F20", VA = "0x181AC5920", Slot = "36")]
	public virtual object GetByIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x6002C65")]
	[Address(RVA = "0x1AC62A0", Offset = "0x1AC48A0", VA = "0x181AC62A0", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002C66")]
	[Address(RVA = "0x1AC59D0", Offset = "0x1AC3FD0", VA = "0x181AC59D0", Slot = "37")]
	public virtual IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002C67")]
	[Address(RVA = "0x1AC5AE0", Offset = "0x1AC40E0", VA = "0x181AC5AE0", Slot = "38")]
	public virtual object GetKey(int index)
	{
		return null;
	}

	[Token(Token = "0x6002C68")]
	[Address(RVA = "0x1AC5A60", Offset = "0x1AC4060", VA = "0x181AC5A60", Slot = "39")]
	public virtual IList GetKeyList()
	{
		return null;
	}

	[Token(Token = "0x6002C69")]
	[Address(RVA = "0x1AC5B90", Offset = "0x1AC4190", VA = "0x181AC5B90", Slot = "40")]
	public virtual IList GetValueList()
	{
		return null;
	}

	[Token(Token = "0x6002C6C")]
	[Address(RVA = "0x1AC5C10", Offset = "0x1AC4210", VA = "0x181AC5C10", Slot = "43")]
	public virtual int IndexOfKey(object key)
	{
		return default(int);
	}

	[Token(Token = "0x6002C6D")]
	[Address(RVA = "0x1AC5CC0", Offset = "0x1AC42C0", VA = "0x181AC5CC0", Slot = "44")]
	public virtual int IndexOfValue(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002C6E")]
	[Address(RVA = "0x1AC5E90", Offset = "0x1AC4490", VA = "0x181AC5E90")]
	private void Insert(int index, object key, object value)
	{
	}

	[Token(Token = "0x6002C6F")]
	[Address(RVA = "0x1AC6020", Offset = "0x1AC4620", VA = "0x181AC6020", Slot = "45")]
	public virtual void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6002C70")]
	[Address(RVA = "0x1AC6180", Offset = "0x1AC4780", VA = "0x181AC6180", Slot = "46")]
	public virtual void Remove(object key)
	{
	}

	[Token(Token = "0x6002C71")]
	[Address(RVA = "0x1AC61C0", Offset = "0x1AC47C0", VA = "0x181AC61C0")]
	public static SortedList Synchronized(SortedList list)
	{
		return null;
	}
}
