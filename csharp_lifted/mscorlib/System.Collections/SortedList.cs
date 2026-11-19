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
[Token(Token = "0x20005BE")]
[DebuggerTypeProxy(typeof(SortedListDebugView))]
[DebuggerDisplay("Count = {Count}")]
public class SortedList : IDictionary, ICollection, IEnumerable, ICloneable
{
	[Serializable]
	[Token(Token = "0x20005BF")]
	private class SyncSortedList : SortedList
	{
		[Token(Token = "0x40017FC")]
		[FieldOffset(Offset = "0x48")]
		private SortedList _list;

		[Token(Token = "0x40017FD")]
		[FieldOffset(Offset = "0x50")]
		private object _root;

		[Token(Token = "0x170006E7")]
		public override int Count
		{
			[Token(Token = "0x6002C50")]
			[Address(RVA = "0x54559B0", Offset = "0x54549B0", VA = "0x54559B0", Slot = "23")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170006E8")]
		public override object SyncRoot
		{
			[Token(Token = "0x6002C51")]
			[Address(RVA = "0x5455A80", Offset = "0x5454A80", VA = "0x5455A80", Slot = "29")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170006E9")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6002C52")]
			[Address(RVA = "0x5455A90", Offset = "0x5454A90", VA = "0x5455A90", Slot = "26")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170006EA")]
		public override bool IsFixedSize
		{
			[Token(Token = "0x6002C53")]
			[Address(RVA = "0x5455AC0", Offset = "0x5454AC0", VA = "0x5455AC0", Slot = "27")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170006EB")]
		public override bool IsSynchronized
		{
			[Token(Token = "0x6002C54")]
			[Address(RVA = "0x5455AF0", Offset = "0x5454AF0", VA = "0x5455AF0", Slot = "28")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170006EC")]
		public override object this[object key]
		{
			[Token(Token = "0x6002C55")]
			[Address(RVA = "0x5455B00", Offset = "0x5454B00", VA = "0x5455B00", Slot = "41")]
			get
			{
				return null;
			}
			[Token(Token = "0x6002C56")]
			[Address(RVA = "0x5455BE0", Offset = "0x5454BE0", VA = "0x5455BE0", Slot = "42")]
			set
			{
			}
		}

		[Token(Token = "0x6002C4F")]
		[Address(RVA = "0x5455950", Offset = "0x5454950", VA = "0x5455950")]
		internal SyncSortedList(SortedList list)
		{
		}

		[Token(Token = "0x6002C57")]
		[Address(RVA = "0x5455CC0", Offset = "0x5454CC0", VA = "0x5455CC0", Slot = "21")]
		public override void Add(object key, object value)
		{
		}

		[Token(Token = "0x6002C58")]
		[Address(RVA = "0x5455DA0", Offset = "0x5454DA0", VA = "0x5455DA0", Slot = "30")]
		public override void Clear()
		{
		}

		[Token(Token = "0x6002C59")]
		[Address(RVA = "0x5455E60", Offset = "0x5454E60", VA = "0x5455E60", Slot = "31")]
		public override object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002C5A")]
		[Address(RVA = "0x5455F40", Offset = "0x5454F40", VA = "0x5455F40", Slot = "32")]
		public override bool Contains(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x6002C5B")]
		[Address(RVA = "0x5456020", Offset = "0x5455020", VA = "0x5456020", Slot = "33")]
		public override bool ContainsKey(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x6002C5C")]
		[Address(RVA = "0x5456100", Offset = "0x5455100", VA = "0x5456100", Slot = "34")]
		public override bool ContainsValue(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x6002C5D")]
		[Address(RVA = "0x54561E0", Offset = "0x54551E0", VA = "0x54561E0", Slot = "35")]
		public override void CopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6002C5E")]
		[Address(RVA = "0x54562B0", Offset = "0x54552B0", VA = "0x54562B0", Slot = "36")]
		public override object GetByIndex(int index)
		{
			return null;
		}

		[Token(Token = "0x6002C5F")]
		[Address(RVA = "0x5456390", Offset = "0x5455390", VA = "0x5456390", Slot = "37")]
		public override IDictionaryEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002C60")]
		[Address(RVA = "0x5456470", Offset = "0x5455470", VA = "0x5456470", Slot = "38")]
		public override object GetKey(int index)
		{
			return null;
		}

		[Token(Token = "0x6002C61")]
		[Address(RVA = "0x5456550", Offset = "0x5455550", VA = "0x5456550", Slot = "39")]
		public override IList GetKeyList()
		{
			return null;
		}

		[Token(Token = "0x6002C62")]
		[Address(RVA = "0x5456630", Offset = "0x5455630", VA = "0x5456630", Slot = "40")]
		public override IList GetValueList()
		{
			return null;
		}

		[Token(Token = "0x6002C63")]
		[Address(RVA = "0x5456710", Offset = "0x5455710", VA = "0x5456710", Slot = "43")]
		public override int IndexOfKey(object key)
		{
			return default(int);
		}

		[Token(Token = "0x6002C64")]
		[Address(RVA = "0x5456850", Offset = "0x5455850", VA = "0x5456850", Slot = "44")]
		public override int IndexOfValue(object value)
		{
			return default(int);
		}

		[Token(Token = "0x6002C65")]
		[Address(RVA = "0x5456920", Offset = "0x5455920", VA = "0x5456920", Slot = "45")]
		public override void RemoveAt(int index)
		{
		}

		[Token(Token = "0x6002C66")]
		[Address(RVA = "0x54569F0", Offset = "0x54559F0", VA = "0x54569F0", Slot = "46")]
		public override void Remove(object key)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20005C0")]
	private class SortedListEnumerator : IDictionaryEnumerator, IEnumerator, ICloneable
	{
		[Token(Token = "0x40017FE")]
		[FieldOffset(Offset = "0x10")]
		private SortedList _sortedList;

		[Token(Token = "0x40017FF")]
		[FieldOffset(Offset = "0x18")]
		private object _key;

		[Token(Token = "0x4001800")]
		[FieldOffset(Offset = "0x20")]
		private object _value;

		[Token(Token = "0x4001801")]
		[FieldOffset(Offset = "0x28")]
		private int _index;

		[Token(Token = "0x4001802")]
		[FieldOffset(Offset = "0x2C")]
		private int _startIndex;

		[Token(Token = "0x4001803")]
		[FieldOffset(Offset = "0x30")]
		private int _endIndex;

		[Token(Token = "0x4001804")]
		[FieldOffset(Offset = "0x34")]
		private int _version;

		[Token(Token = "0x4001805")]
		[FieldOffset(Offset = "0x38")]
		private bool _current;

		[Token(Token = "0x4001806")]
		[FieldOffset(Offset = "0x3C")]
		private int _getObjectRetType;

		[Token(Token = "0x170006ED")]
		public virtual object Key
		{
			[Token(Token = "0x6002C69")]
			[Address(RVA = "0x5456AD0", Offset = "0x5455AD0", VA = "0x5456AD0", Slot = "11")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170006EE")]
		public virtual DictionaryEntry Entry
		{
			[Token(Token = "0x6002C6B")]
			[Address(RVA = "0x5456C80", Offset = "0x5455C80", VA = "0x5456C80", Slot = "13")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x170006EF")]
		public virtual object Current
		{
			[Token(Token = "0x6002C6C")]
			[Address(RVA = "0x5456D60", Offset = "0x5455D60", VA = "0x5456D60", Slot = "14")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170006F0")]
		public virtual object Value
		{
			[Token(Token = "0x6002C6D")]
			[Address(RVA = "0x5456E50", Offset = "0x5455E50", VA = "0x5456E50", Slot = "15")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002C67")]
		[Address(RVA = "0x54551A0", Offset = "0x54541A0", VA = "0x54551A0")]
		internal SortedListEnumerator(SortedList sortedList, int index, int count, int getObjRetType)
		{
		}

		[Token(Token = "0x6002C68")]
		[Address(RVA = "0x5456AC0", Offset = "0x5455AC0", VA = "0x5456AC0", Slot = "10")]
		public object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002C6A")]
		[Address(RVA = "0x5456B60", Offset = "0x5455B60", VA = "0x5456B60", Slot = "12")]
		public virtual bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002C6E")]
		[Address(RVA = "0x5456EE0", Offset = "0x5455EE0", VA = "0x5456EE0", Slot = "16")]
		public virtual void Reset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20005C1")]
	[TypeForwardedFrom("mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089")]
	private class KeyList : IList, ICollection, IEnumerable
	{
		[Token(Token = "0x4001807")]
		[FieldOffset(Offset = "0x10")]
		private SortedList sortedList;

		[Token(Token = "0x170006F1")]
		public virtual int Count
		{
			[Token(Token = "0x6002C70")]
			[Address(RVA = "0x5456F80", Offset = "0x5455F80", VA = "0x5456F80", Slot = "20")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170006F2")]
		public virtual bool IsReadOnly
		{
			[Token(Token = "0x6002C71")]
			[Address(RVA = "0x5456FA0", Offset = "0x5455FA0", VA = "0x5456FA0", Slot = "21")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170006F3")]
		public virtual bool IsFixedSize
		{
			[Token(Token = "0x6002C72")]
			[Address(RVA = "0x5456FB0", Offset = "0x5455FB0", VA = "0x5456FB0", Slot = "22")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170006F4")]
		public virtual bool IsSynchronized
		{
			[Token(Token = "0x6002C73")]
			[Address(RVA = "0x5456FC0", Offset = "0x5455FC0", VA = "0x5456FC0", Slot = "23")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170006F5")]
		public virtual object SyncRoot
		{
			[Token(Token = "0x6002C74")]
			[Address(RVA = "0x5456FF0", Offset = "0x5455FF0", VA = "0x5456FF0", Slot = "24")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170006F6")]
		public virtual object this[int index]
		{
			[Token(Token = "0x6002C7A")]
			[Address(RVA = "0x5457200", Offset = "0x5456200", VA = "0x5457200", Slot = "30")]
			get
			{
				return null;
			}
			[Token(Token = "0x6002C7B")]
			[Address(RVA = "0x5457230", Offset = "0x5456230", VA = "0x5457230", Slot = "31")]
			set
			{
			}
		}

		[Token(Token = "0x6002C6F")]
		[Address(RVA = "0x54553C0", Offset = "0x54543C0", VA = "0x54553C0")]
		internal KeyList(SortedList sortedList)
		{
		}

		[Token(Token = "0x6002C75")]
		[Address(RVA = "0x5457020", Offset = "0x5456020", VA = "0x5457020", Slot = "25")]
		public virtual int Add(object key)
		{
			return default(int);
		}

		[Token(Token = "0x6002C76")]
		[Address(RVA = "0x5457070", Offset = "0x5456070", VA = "0x5457070", Slot = "26")]
		public virtual void Clear()
		{
		}

		[Token(Token = "0x6002C77")]
		[Address(RVA = "0x54570C0", Offset = "0x54560C0", VA = "0x54570C0", Slot = "27")]
		public virtual bool Contains(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x6002C78")]
		[Address(RVA = "0x54570F0", Offset = "0x54560F0", VA = "0x54570F0", Slot = "28")]
		public virtual void CopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x6002C79")]
		[Address(RVA = "0x54571B0", Offset = "0x54561B0", VA = "0x54571B0", Slot = "29")]
		public virtual void Insert(int index, object value)
		{
		}

		[Token(Token = "0x6002C7C")]
		[Address(RVA = "0x5457280", Offset = "0x5456280", VA = "0x5457280", Slot = "32")]
		public virtual IEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002C7D")]
		[Address(RVA = "0x5457320", Offset = "0x5456320", VA = "0x5457320", Slot = "33")]
		public virtual int IndexOf(object key)
		{
			return default(int);
		}

		[Token(Token = "0x6002C7E")]
		[Address(RVA = "0x54573E0", Offset = "0x54563E0", VA = "0x54573E0", Slot = "34")]
		public virtual void Remove(object key)
		{
		}

		[Token(Token = "0x6002C7F")]
		[Address(RVA = "0x5457430", Offset = "0x5456430", VA = "0x5457430", Slot = "35")]
		public virtual void RemoveAt(int index)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20005C2")]
	[TypeForwardedFrom("mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089")]
	private class ValueList : IList, ICollection, IEnumerable
	{
		[Token(Token = "0x4001808")]
		[FieldOffset(Offset = "0x10")]
		private SortedList sortedList;

		[Token(Token = "0x170006F7")]
		public virtual int Count
		{
			[Token(Token = "0x6002C81")]
			[Address(RVA = "0x5457480", Offset = "0x5456480", VA = "0x5457480", Slot = "20")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170006F8")]
		public virtual bool IsReadOnly
		{
			[Token(Token = "0x6002C82")]
			[Address(RVA = "0x54574A0", Offset = "0x54564A0", VA = "0x54574A0", Slot = "21")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170006F9")]
		public virtual bool IsFixedSize
		{
			[Token(Token = "0x6002C83")]
			[Address(RVA = "0x54574B0", Offset = "0x54564B0", VA = "0x54574B0", Slot = "22")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170006FA")]
		public virtual bool IsSynchronized
		{
			[Token(Token = "0x6002C84")]
			[Address(RVA = "0x54574C0", Offset = "0x54564C0", VA = "0x54574C0", Slot = "23")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170006FB")]
		public virtual object SyncRoot
		{
			[Token(Token = "0x6002C85")]
			[Address(RVA = "0x54574F0", Offset = "0x54564F0", VA = "0x54574F0", Slot = "24")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170006FC")]
		public virtual object this[int index]
		{
			[Token(Token = "0x6002C8B")]
			[Address(RVA = "0x5457700", Offset = "0x5456700", VA = "0x5457700", Slot = "30")]
			get
			{
				return null;
			}
			[Token(Token = "0x6002C8C")]
			[Address(RVA = "0x5457730", Offset = "0x5456730", VA = "0x5457730", Slot = "31")]
			set
			{
			}
		}

		[Token(Token = "0x6002C80")]
		[Address(RVA = "0x5455480", Offset = "0x5454480", VA = "0x5455480")]
		internal ValueList(SortedList sortedList)
		{
		}

		[Token(Token = "0x6002C86")]
		[Address(RVA = "0x5457520", Offset = "0x5456520", VA = "0x5457520", Slot = "25")]
		public virtual int Add(object key)
		{
			return default(int);
		}

		[Token(Token = "0x6002C87")]
		[Address(RVA = "0x5457570", Offset = "0x5456570", VA = "0x5457570", Slot = "26")]
		public virtual void Clear()
		{
		}

		[Token(Token = "0x6002C88")]
		[Address(RVA = "0x54575C0", Offset = "0x54565C0", VA = "0x54575C0", Slot = "27")]
		public virtual bool Contains(object value)
		{
			return default(bool);
		}

		[Token(Token = "0x6002C89")]
		[Address(RVA = "0x54575F0", Offset = "0x54565F0", VA = "0x54575F0", Slot = "28")]
		public virtual void CopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x6002C8A")]
		[Address(RVA = "0x54576B0", Offset = "0x54566B0", VA = "0x54576B0", Slot = "29")]
		public virtual void Insert(int index, object value)
		{
		}

		[Token(Token = "0x6002C8D")]
		[Address(RVA = "0x5457780", Offset = "0x5456780", VA = "0x5457780", Slot = "32")]
		public virtual IEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002C8E")]
		[Address(RVA = "0x5457820", Offset = "0x5456820", VA = "0x5457820", Slot = "33")]
		public virtual int IndexOf(object value)
		{
			return default(int);
		}

		[Token(Token = "0x6002C8F")]
		[Address(RVA = "0x5457890", Offset = "0x5456890", VA = "0x5457890", Slot = "34")]
		public virtual void Remove(object value)
		{
		}

		[Token(Token = "0x6002C90")]
		[Address(RVA = "0x54578E0", Offset = "0x54568E0", VA = "0x54578E0", Slot = "35")]
		public virtual void RemoveAt(int index)
		{
		}
	}

	[Token(Token = "0x20005C3")]
	internal class SortedListDebugView
	{
	}

	[Token(Token = "0x40017F4")]
	[FieldOffset(Offset = "0x10")]
	private object[] keys;

	[Token(Token = "0x40017F5")]
	[FieldOffset(Offset = "0x18")]
	private object[] values;

	[Token(Token = "0x40017F6")]
	[FieldOffset(Offset = "0x20")]
	private int _size;

	[Token(Token = "0x40017F7")]
	[FieldOffset(Offset = "0x24")]
	private int version;

	[Token(Token = "0x40017F8")]
	[FieldOffset(Offset = "0x28")]
	private IComparer comparer;

	[Token(Token = "0x40017F9")]
	[FieldOffset(Offset = "0x30")]
	private KeyList keyList;

	[Token(Token = "0x40017FA")]
	[FieldOffset(Offset = "0x38")]
	private ValueList valueList;

	[NonSerialized]
	[Token(Token = "0x40017FB")]
	[FieldOffset(Offset = "0x40")]
	private object _syncRoot;

	[Token(Token = "0x170006DE")]
	public virtual int Capacity
	{
		[Token(Token = "0x6002C32")]
		[Address(RVA = "0x5454890", Offset = "0x5453890", VA = "0x5454890", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x170006DF")]
	public virtual int Count
	{
		[Token(Token = "0x6002C33")]
		[Address(RVA = "0x5454B50", Offset = "0x5453B50", VA = "0x5454B50", Slot = "23")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006E0")]
	public virtual ICollection Keys
	{
		[Token(Token = "0x6002C34")]
		[Address(RVA = "0x5454B60", Offset = "0x5453B60", VA = "0x5454B60", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006E1")]
	public virtual ICollection Values
	{
		[Token(Token = "0x6002C35")]
		[Address(RVA = "0x5454B80", Offset = "0x5453B80", VA = "0x5454B80", Slot = "25")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006E2")]
	public virtual bool IsReadOnly
	{
		[Token(Token = "0x6002C36")]
		[Address(RVA = "0x5454BA0", Offset = "0x5453BA0", VA = "0x5454BA0", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006E3")]
	public virtual bool IsFixedSize
	{
		[Token(Token = "0x6002C37")]
		[Address(RVA = "0x5454BB0", Offset = "0x5453BB0", VA = "0x5454BB0", Slot = "27")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006E4")]
	public virtual bool IsSynchronized
	{
		[Token(Token = "0x6002C38")]
		[Address(RVA = "0x5454BC0", Offset = "0x5453BC0", VA = "0x5454BC0", Slot = "28")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006E5")]
	public virtual object SyncRoot
	{
		[Token(Token = "0x6002C39")]
		[Address(RVA = "0x5454BD0", Offset = "0x5453BD0", VA = "0x5454BD0", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006E6")]
	public virtual object this[object key]
	{
		[Token(Token = "0x6002C47")]
		[Address(RVA = "0x54554B0", Offset = "0x54544B0", VA = "0x54554B0", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002C48")]
		[Address(RVA = "0x54554F0", Offset = "0x54544F0", VA = "0x54554F0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x6002C2D")]
	[Address(RVA = "0x5454230", Offset = "0x5453230", VA = "0x5454230")]
	public SortedList()
	{
	}

	[Token(Token = "0x6002C2E")]
	[Address(RVA = "0x5454250", Offset = "0x5453250", VA = "0x5454250")]
	private void Init()
	{
	}

	[Token(Token = "0x6002C2F")]
	[Address(RVA = "0x5454470", Offset = "0x5453470", VA = "0x5454470")]
	public SortedList(int initialCapacity)
	{
	}

	[Token(Token = "0x6002C30")]
	[Address(RVA = "0x54545D0", Offset = "0x54535D0", VA = "0x54545D0")]
	public SortedList(IComparer comparer)
	{
	}

	[Token(Token = "0x6002C31")]
	[Address(RVA = "0x5454610", Offset = "0x5453610", VA = "0x5454610", Slot = "21")]
	public virtual void Add(object key, object value)
	{
	}

	[Token(Token = "0x6002C3A")]
	[Address(RVA = "0x5454C50", Offset = "0x5453C50", VA = "0x5454C50", Slot = "30")]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x6002C3B")]
	[Address(RVA = "0x5454C80", Offset = "0x5453C80", VA = "0x5454C80", Slot = "31")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002C3C")]
	[Address(RVA = "0x5454D30", Offset = "0x5453D30", VA = "0x5454D30", Slot = "32")]
	public virtual bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C3D")]
	[Address(RVA = "0x5454D50", Offset = "0x5453D50", VA = "0x5454D50", Slot = "33")]
	public virtual bool ContainsKey(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C3E")]
	[Address(RVA = "0x5454D70", Offset = "0x5453D70", VA = "0x5454D70", Slot = "34")]
	public virtual bool ContainsValue(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C3F")]
	[Address(RVA = "0x5454D90", Offset = "0x5453D90", VA = "0x5454D90", Slot = "35")]
	public virtual void CopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002C40")]
	[Address(RVA = "0x5455020", Offset = "0x5454020", VA = "0x5455020")]
	private void EnsureCapacity(int min)
	{
	}

	[Token(Token = "0x6002C41")]
	[Address(RVA = "0x5455070", Offset = "0x5454070", VA = "0x5455070", Slot = "36")]
	public virtual object GetByIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x6002C42")]
	[Address(RVA = "0x5455120", Offset = "0x5454120", VA = "0x5455120", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002C43")]
	[Address(RVA = "0x5455200", Offset = "0x5454200", VA = "0x5455200", Slot = "37")]
	public virtual IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002C44")]
	[Address(RVA = "0x5455280", Offset = "0x5454280", VA = "0x5455280", Slot = "38")]
	public virtual object GetKey(int index)
	{
		return null;
	}

	[Token(Token = "0x6002C45")]
	[Address(RVA = "0x5455330", Offset = "0x5454330", VA = "0x5455330", Slot = "39")]
	public virtual IList GetKeyList()
	{
		return null;
	}

	[Token(Token = "0x6002C46")]
	[Address(RVA = "0x54553F0", Offset = "0x54543F0", VA = "0x54553F0", Slot = "40")]
	public virtual IList GetValueList()
	{
		return null;
	}

	[Token(Token = "0x6002C49")]
	[Address(RVA = "0x5455610", Offset = "0x5454610", VA = "0x5455610", Slot = "43")]
	public virtual int IndexOfKey(object key)
	{
		return default(int);
	}

	[Token(Token = "0x6002C4A")]
	[Address(RVA = "0x54556A0", Offset = "0x54546A0", VA = "0x54556A0", Slot = "44")]
	public virtual int IndexOfValue(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002C4B")]
	[Address(RVA = "0x5454710", Offset = "0x5453710", VA = "0x5454710")]
	private void Insert(int index, object key, object value)
	{
	}

	[Token(Token = "0x6002C4C")]
	[Address(RVA = "0x54556F0", Offset = "0x54546F0", VA = "0x54556F0", Slot = "45")]
	public virtual void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6002C4D")]
	[Address(RVA = "0x5455830", Offset = "0x5454830", VA = "0x5455830", Slot = "46")]
	public virtual void Remove(object key)
	{
	}

	[Token(Token = "0x6002C4E")]
	[Address(RVA = "0x5455870", Offset = "0x5454870", VA = "0x5455870")]
	public static SortedList Synchronized(SortedList list)
	{
		return null;
	}
}
