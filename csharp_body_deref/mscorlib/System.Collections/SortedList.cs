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
[Token(Token = "0x200060F")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(SortedListDebugView))]
public class SortedList : IDictionary, ICollection, IEnumerable, ICloneable
{
	[Serializable]
	[Token(Token = "0x2000610")]
	private class SyncSortedList : SortedList
	{
		[Token(Token = "0x4001A7A")]
		[FieldOffset(Offset = "0x48")]
		private SortedList _list;

		[Token(Token = "0x4001A7B")]
		[FieldOffset(Offset = "0x50")]
		private object _root;

		[Token(Token = "0x17000759")]
		public override int Count
		{
			[Token(Token = "0x6002F62")]
			[Address(RVA = "0x3C82890", Offset = "0x3C82890", VA = "0x3C82890", Slot = "23")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700075A")]
		public override object SyncRoot
		{
			[Token(Token = "0x6002F63")]
			[Address(RVA = "0x3C82980", Offset = "0x3C82980", VA = "0x3C82980", Slot = "29")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700075B")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6002F64")]
			[Address(RVA = "0x3C82990", Offset = "0x3C82990", VA = "0x3C82990", Slot = "26")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700075C")]
		public override bool IsFixedSize
		{
			[Token(Token = "0x6002F65")]
			[Address(RVA = "0x3C829C0", Offset = "0x3C829C0", VA = "0x3C829C0", Slot = "27")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700075D")]
		public override bool IsSynchronized
		{
			[Token(Token = "0x6002F66")]
			[Address(RVA = "0x3C829F0", Offset = "0x3C829F0", VA = "0x3C829F0", Slot = "28")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700075E")]
		public override object this[object key]
		{
			[Token(Token = "0x6002F67")]
			[Address(RVA = "0x3C82A00", Offset = "0x3C82A00", VA = "0x3C82A00", Slot = "41")]
			get
			{
				return null;
			}
			[Token(Token = "0x6002F68")]
			[Address(RVA = "0x3C82AF0", Offset = "0x3C82AF0", VA = "0x3C82AF0", Slot = "42")]
			set
			{
			}
		}

		[Token(Token = "0x6002F61")]
		[Address(RVA = "0x3C82830", Offset = "0x3C82830", VA = "0x3C82830")]
		internal SyncSortedList(SortedList list)
		{
		}

		[Token(Token = "0x6002F69")]
		[Address(RVA = "0x3C82BD0", Offset = "0x3C82BD0", VA = "0x3C82BD0", Slot = "21")]
		public override void Add(object key, object value)
		{
		}

		[Token(Token = "0x6002F6A")]
		[Address(RVA = "0x3C82CB0", Offset = "0x3C82CB0", VA = "0x3C82CB0", Slot = "30")]
		public override void Clear()
		{
		}

		[Token(Token = "0x6002F6B")]
		[Address(RVA = "0x3C82D80", Offset = "0x3C82D80", VA = "0x3C82D80", Slot = "31")]
		public override object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002F6C")]
		[Address(RVA = "0x3C82E70", Offset = "0x3C82E70", VA = "0x3C82E70", Slot = "32")]
		public override bool Contains(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x6002F6D")]
		[Address(RVA = "0x3C82F60", Offset = "0x3C82F60", VA = "0x3C82F60", Slot = "33")]
		public override bool ContainsKey(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x6002F6E")]
		[Address(RVA = "0x3C83050", Offset = "0x3C83050", VA = "0x3C83050", Slot = "34")]
		public override bool ContainsValue(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x6002F6F")]
		[Address(RVA = "0x3C83140", Offset = "0x3C83140", VA = "0x3C83140", Slot = "35")]
		public override void CopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6002F70")]
		[Address(RVA = "0x3C83220", Offset = "0x3C83220", VA = "0x3C83220", Slot = "36")]
		public override object GetByIndex(int index)
		{
			return null;
		}

		[Token(Token = "0x6002F71")]
		[Address(RVA = "0x3C83320", Offset = "0x3C83320", VA = "0x3C83320", Slot = "37")]
		public override IDictionaryEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002F72")]
		[Address(RVA = "0x3C83410", Offset = "0x3C83410", VA = "0x3C83410", Slot = "38")]
		public override object GetKey(int index)
		{
			return null;
		}

		[Token(Token = "0x6002F73")]
		[Address(RVA = "0x3C83510", Offset = "0x3C83510", VA = "0x3C83510", Slot = "39")]
		public override IList GetKeyList()
		{
			return null;
		}

		[Token(Token = "0x6002F74")]
		[Address(RVA = "0x3C83600", Offset = "0x3C83600", VA = "0x3C83600", Slot = "40")]
		public override IList GetValueList()
		{
			return null;
		}

		[Token(Token = "0x6002F75")]
		[Address(RVA = "0x3C836F0", Offset = "0x3C836F0", VA = "0x3C836F0", Slot = "43")]
		public override int IndexOfKey(object key)
		{
			return default(int);
		}

		[Token(Token = "0x6002F76")]
		[Address(RVA = "0x3C83850", Offset = "0x3C83850", VA = "0x3C83850", Slot = "44")]
		public override int IndexOfValue(object value)
		{
			return default(int);
		}

		[Token(Token = "0x6002F77")]
		[Address(RVA = "0x3C83940", Offset = "0x3C83940", VA = "0x3C83940", Slot = "45")]
		public override void RemoveAt(int index)
		{
		}

		[Token(Token = "0x6002F78")]
		[Address(RVA = "0x3C83A10", Offset = "0x3C83A10", VA = "0x3C83A10", Slot = "46")]
		public override void Remove(object key)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000611")]
	private class SortedListEnumerator : IDictionaryEnumerator, IEnumerator, ICloneable
	{
		[Token(Token = "0x4001A7C")]
		[FieldOffset(Offset = "0x10")]
		private SortedList _sortedList;

		[Token(Token = "0x4001A7D")]
		[FieldOffset(Offset = "0x18")]
		private object _key;

		[Token(Token = "0x4001A7E")]
		[FieldOffset(Offset = "0x20")]
		private object _value;

		[Token(Token = "0x4001A7F")]
		[FieldOffset(Offset = "0x28")]
		private int _index;

		[Token(Token = "0x4001A80")]
		[FieldOffset(Offset = "0x2C")]
		private int _startIndex;

		[Token(Token = "0x4001A81")]
		[FieldOffset(Offset = "0x30")]
		private int _endIndex;

		[Token(Token = "0x4001A82")]
		[FieldOffset(Offset = "0x34")]
		private int _version;

		[Token(Token = "0x4001A83")]
		[FieldOffset(Offset = "0x38")]
		private bool _current;

		[Token(Token = "0x4001A84")]
		[FieldOffset(Offset = "0x3C")]
		private int _getObjectRetType;

		[Token(Token = "0x1700075F")]
		public virtual object Key
		{
			[Token(Token = "0x6002F7B")]
			[Address(RVA = "0x3C83B00", Offset = "0x3C83B00", VA = "0x3C83B00", Slot = "11")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000760")]
		public virtual DictionaryEntry Entry
		{
			[Token(Token = "0x6002F7D")]
			[Address(RVA = "0x3C83CB0", Offset = "0x3C83CB0", VA = "0x3C83CB0", Slot = "13")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x17000761")]
		public virtual object Current
		{
			[Token(Token = "0x6002F7E")]
			[Address(RVA = "0x3C83D90", Offset = "0x3C83D90", VA = "0x3C83D90", Slot = "14")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000762")]
		public virtual object Value
		{
			[Token(Token = "0x6002F7F")]
			[Address(RVA = "0x3C83E80", Offset = "0x3C83E80", VA = "0x3C83E80", Slot = "15")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002F79")]
		[Address(RVA = "0x3C82060", Offset = "0x3C82060", VA = "0x3C82060")]
		internal SortedListEnumerator(SortedList sortedList, int index, int count, int getObjRetType)
		{
		}

		[Token(Token = "0x6002F7A")]
		[Address(RVA = "0x3C83AF0", Offset = "0x3C83AF0", VA = "0x3C83AF0", Slot = "10")]
		public object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002F7C")]
		[Address(RVA = "0x3C83B90", Offset = "0x3C83B90", VA = "0x3C83B90", Slot = "12")]
		public virtual bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002F80")]
		[Address(RVA = "0x3C83F10", Offset = "0x3C83F10", VA = "0x3C83F10", Slot = "16")]
		public virtual void Reset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000612")]
	[TypeForwardedFrom("mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089")]
	private class KeyList : IList, ICollection, IEnumerable
	{
		[Token(Token = "0x4001A85")]
		[FieldOffset(Offset = "0x10")]
		private SortedList sortedList;

		[Token(Token = "0x17000763")]
		public virtual int Count
		{
			[Token(Token = "0x6002F82")]
			[Address(RVA = "0x3C83FB0", Offset = "0x3C83FB0", VA = "0x3C83FB0", Slot = "20")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000764")]
		public virtual bool IsReadOnly
		{
			[Token(Token = "0x6002F83")]
			[Address(RVA = "0x3C83FD0", Offset = "0x3C83FD0", VA = "0x3C83FD0", Slot = "21")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000765")]
		public virtual bool IsFixedSize
		{
			[Token(Token = "0x6002F84")]
			[Address(RVA = "0x3C83FE0", Offset = "0x3C83FE0", VA = "0x3C83FE0", Slot = "22")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000766")]
		public virtual bool IsSynchronized
		{
			[Token(Token = "0x6002F85")]
			[Address(RVA = "0x3C83FF0", Offset = "0x3C83FF0", VA = "0x3C83FF0", Slot = "23")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000767")]
		public virtual object SyncRoot
		{
			[Token(Token = "0x6002F86")]
			[Address(RVA = "0x3C84020", Offset = "0x3C84020", VA = "0x3C84020", Slot = "24")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000768")]
		public virtual object this[int index]
		{
			[Token(Token = "0x6002F8C")]
			[Address(RVA = "0x3C84230", Offset = "0x3C84230", VA = "0x3C84230", Slot = "30")]
			get
			{
				return null;
			}
			[Token(Token = "0x6002F8D")]
			[Address(RVA = "0x3C84260", Offset = "0x3C84260", VA = "0x3C84260", Slot = "31")]
			set
			{
			}
		}

		[Token(Token = "0x6002F81")]
		[Address(RVA = "0x3C82290", Offset = "0x3C82290", VA = "0x3C82290")]
		internal KeyList(SortedList sortedList)
		{
		}

		[Token(Token = "0x6002F87")]
		[Address(RVA = "0x3C84050", Offset = "0x3C84050", VA = "0x3C84050", Slot = "25")]
		public virtual int Add(object key)
		{
			return default(int);
		}

		[Token(Token = "0x6002F88")]
		[Address(RVA = "0x3C840A0", Offset = "0x3C840A0", VA = "0x3C840A0", Slot = "26")]
		public virtual void Clear()
		{
		}

		[Token(Token = "0x6002F89")]
		[Address(RVA = "0x3C840F0", Offset = "0x3C840F0", VA = "0x3C840F0", Slot = "27")]
		public virtual bool Contains(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x6002F8A")]
		[Address(RVA = "0x3C84120", Offset = "0x3C84120", VA = "0x3C84120", Slot = "28")]
		public virtual void CopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x6002F8B")]
		[Address(RVA = "0x3C841E0", Offset = "0x3C841E0", VA = "0x3C841E0", Slot = "29")]
		public virtual void Insert(int index, object value)
		{
		}

		[Token(Token = "0x6002F8E")]
		[Address(RVA = "0x3C842B0", Offset = "0x3C842B0", VA = "0x3C842B0", Slot = "32")]
		public virtual IEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002F8F")]
		[Address(RVA = "0x3C84350", Offset = "0x3C84350", VA = "0x3C84350", Slot = "33")]
		public virtual int IndexOf(object key)
		{
			return default(int);
		}

		[Token(Token = "0x6002F90")]
		[Address(RVA = "0x3C84410", Offset = "0x3C84410", VA = "0x3C84410", Slot = "34")]
		public virtual void Remove(object key)
		{
		}

		[Token(Token = "0x6002F91")]
		[Address(RVA = "0x3C84460", Offset = "0x3C84460", VA = "0x3C84460", Slot = "35")]
		public virtual void RemoveAt(int index)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000613")]
	[TypeForwardedFrom("mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089")]
	private class ValueList : IList, ICollection, IEnumerable
	{
		[Token(Token = "0x4001A86")]
		[FieldOffset(Offset = "0x10")]
		private SortedList sortedList;

		[Token(Token = "0x17000769")]
		public virtual int Count
		{
			[Token(Token = "0x6002F93")]
			[Address(RVA = "0x3C844B0", Offset = "0x3C844B0", VA = "0x3C844B0", Slot = "20")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700076A")]
		public virtual bool IsReadOnly
		{
			[Token(Token = "0x6002F94")]
			[Address(RVA = "0x3C844D0", Offset = "0x3C844D0", VA = "0x3C844D0", Slot = "21")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700076B")]
		public virtual bool IsFixedSize
		{
			[Token(Token = "0x6002F95")]
			[Address(RVA = "0x3C844E0", Offset = "0x3C844E0", VA = "0x3C844E0", Slot = "22")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700076C")]
		public virtual bool IsSynchronized
		{
			[Token(Token = "0x6002F96")]
			[Address(RVA = "0x3C844F0", Offset = "0x3C844F0", VA = "0x3C844F0", Slot = "23")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700076D")]
		public virtual object SyncRoot
		{
			[Token(Token = "0x6002F97")]
			[Address(RVA = "0x3C84520", Offset = "0x3C84520", VA = "0x3C84520", Slot = "24")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700076E")]
		public virtual object this[int index]
		{
			[Token(Token = "0x6002F9D")]
			[Address(RVA = "0x3C84730", Offset = "0x3C84730", VA = "0x3C84730", Slot = "30")]
			get
			{
				return null;
			}
			[Token(Token = "0x6002F9E")]
			[Address(RVA = "0x3C84760", Offset = "0x3C84760", VA = "0x3C84760", Slot = "31")]
			set
			{
			}
		}

		[Token(Token = "0x6002F92")]
		[Address(RVA = "0x3C82350", Offset = "0x3C82350", VA = "0x3C82350")]
		internal ValueList(SortedList sortedList)
		{
		}

		[Token(Token = "0x6002F98")]
		[Address(RVA = "0x3C84550", Offset = "0x3C84550", VA = "0x3C84550", Slot = "25")]
		public virtual int Add(object key)
		{
			return default(int);
		}

		[Token(Token = "0x6002F99")]
		[Address(RVA = "0x3C845A0", Offset = "0x3C845A0", VA = "0x3C845A0", Slot = "26")]
		public virtual void Clear()
		{
		}

		[Token(Token = "0x6002F9A")]
		[Address(RVA = "0x3C845F0", Offset = "0x3C845F0", VA = "0x3C845F0", Slot = "27")]
		public virtual bool Contains(object value)
		{
			return default(bool);
		}

		[Token(Token = "0x6002F9B")]
		[Address(RVA = "0x3C84620", Offset = "0x3C84620", VA = "0x3C84620", Slot = "28")]
		public virtual void CopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x6002F9C")]
		[Address(RVA = "0x3C846E0", Offset = "0x3C846E0", VA = "0x3C846E0", Slot = "29")]
		public virtual void Insert(int index, object value)
		{
		}

		[Token(Token = "0x6002F9F")]
		[Address(RVA = "0x3C847B0", Offset = "0x3C847B0", VA = "0x3C847B0", Slot = "32")]
		public virtual IEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002FA0")]
		[Address(RVA = "0x3C84850", Offset = "0x3C84850", VA = "0x3C84850", Slot = "33")]
		public virtual int IndexOf(object value)
		{
			return default(int);
		}

		[Token(Token = "0x6002FA1")]
		[Address(RVA = "0x3C848C0", Offset = "0x3C848C0", VA = "0x3C848C0", Slot = "34")]
		public virtual void Remove(object value)
		{
		}

		[Token(Token = "0x6002FA2")]
		[Address(RVA = "0x3C84910", Offset = "0x3C84910", VA = "0x3C84910", Slot = "35")]
		public virtual void RemoveAt(int index)
		{
		}
	}

	[Token(Token = "0x2000614")]
	internal class SortedListDebugView
	{
	}

	[Token(Token = "0x4001A72")]
	[FieldOffset(Offset = "0x10")]
	private object[] keys;

	[Token(Token = "0x4001A73")]
	[FieldOffset(Offset = "0x18")]
	private object[] values;

	[Token(Token = "0x4001A74")]
	[FieldOffset(Offset = "0x20")]
	private int _size;

	[Token(Token = "0x4001A75")]
	[FieldOffset(Offset = "0x24")]
	private int version;

	[Token(Token = "0x4001A76")]
	[FieldOffset(Offset = "0x28")]
	private IComparer comparer;

	[Token(Token = "0x4001A77")]
	[FieldOffset(Offset = "0x30")]
	private KeyList keyList;

	[Token(Token = "0x4001A78")]
	[FieldOffset(Offset = "0x38")]
	private ValueList valueList;

	[NonSerialized]
	[Token(Token = "0x4001A79")]
	[FieldOffset(Offset = "0x40")]
	private object _syncRoot;

	[Token(Token = "0x17000750")]
	public virtual int Capacity
	{
		[Token(Token = "0x6002F44")]
		[Address(RVA = "0x3C81730", Offset = "0x3C81730", VA = "0x3C81730", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x17000751")]
	public virtual int Count
	{
		[Token(Token = "0x6002F45")]
		[Address(RVA = "0x3C819F0", Offset = "0x3C819F0", VA = "0x3C819F0", Slot = "23")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000752")]
	public virtual ICollection Keys
	{
		[Token(Token = "0x6002F46")]
		[Address(RVA = "0x3C81A00", Offset = "0x3C81A00", VA = "0x3C81A00", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000753")]
	public virtual ICollection Values
	{
		[Token(Token = "0x6002F47")]
		[Address(RVA = "0x3C81A20", Offset = "0x3C81A20", VA = "0x3C81A20", Slot = "25")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000754")]
	public virtual bool IsReadOnly
	{
		[Token(Token = "0x6002F48")]
		[Address(RVA = "0x3C81A40", Offset = "0x3C81A40", VA = "0x3C81A40", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000755")]
	public virtual bool IsFixedSize
	{
		[Token(Token = "0x6002F49")]
		[Address(RVA = "0x3C81A50", Offset = "0x3C81A50", VA = "0x3C81A50", Slot = "27")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000756")]
	public virtual bool IsSynchronized
	{
		[Token(Token = "0x6002F4A")]
		[Address(RVA = "0x3C81A60", Offset = "0x3C81A60", VA = "0x3C81A60", Slot = "28")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000757")]
	public virtual object SyncRoot
	{
		[Token(Token = "0x6002F4B")]
		[Address(RVA = "0x3C81A70", Offset = "0x3C81A70", VA = "0x3C81A70", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000758")]
	public virtual object this[object key]
	{
		[Token(Token = "0x6002F59")]
		[Address(RVA = "0x3C82380", Offset = "0x3C82380", VA = "0x3C82380", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002F5A")]
		[Address(RVA = "0x3C823C0", Offset = "0x3C823C0", VA = "0x3C823C0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x6002F3F")]
	[Address(RVA = "0x3C81100", Offset = "0x3C81100", VA = "0x3C81100")]
	public SortedList()
	{
	}

	[Token(Token = "0x6002F40")]
	[Address(RVA = "0x3C81120", Offset = "0x3C81120", VA = "0x3C81120")]
	private void Init()
	{
	}

	[Token(Token = "0x6002F41")]
	[Address(RVA = "0x3C81320", Offset = "0x3C81320", VA = "0x3C81320")]
	public SortedList(int initialCapacity)
	{
	}

	[Token(Token = "0x6002F42")]
	[Address(RVA = "0x3C81460", Offset = "0x3C81460", VA = "0x3C81460")]
	public SortedList(IComparer comparer)
	{
	}

	[Token(Token = "0x6002F43")]
	[Address(RVA = "0x3C814A0", Offset = "0x3C814A0", VA = "0x3C814A0", Slot = "21")]
	public virtual void Add(object key, object value)
	{
	}

	[Token(Token = "0x6002F4C")]
	[Address(RVA = "0x3C81AF0", Offset = "0x3C81AF0", VA = "0x3C81AF0", Slot = "30")]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x6002F4D")]
	[Address(RVA = "0x3C81B30", Offset = "0x3C81B30", VA = "0x3C81B30", Slot = "31")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002F4E")]
	[Address(RVA = "0x3C81BE0", Offset = "0x3C81BE0", VA = "0x3C81BE0", Slot = "32")]
	public virtual bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F4F")]
	[Address(RVA = "0x3C81C00", Offset = "0x3C81C00", VA = "0x3C81C00", Slot = "33")]
	public virtual bool ContainsKey(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F50")]
	[Address(RVA = "0x3C81C20", Offset = "0x3C81C20", VA = "0x3C81C20", Slot = "34")]
	public virtual bool ContainsValue(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F51")]
	[Address(RVA = "0x3C81C40", Offset = "0x3C81C40", VA = "0x3C81C40", Slot = "35")]
	public virtual void CopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002F52")]
	[Address(RVA = "0x3C81ED0", Offset = "0x3C81ED0", VA = "0x3C81ED0")]
	private void EnsureCapacity(int min)
	{
	}

	[Token(Token = "0x6002F53")]
	[Address(RVA = "0x3C81F20", Offset = "0x3C81F20", VA = "0x3C81F20", Slot = "36")]
	public virtual object GetByIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x6002F54")]
	[Address(RVA = "0x3C81FD0", Offset = "0x3C81FD0", VA = "0x3C81FD0", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002F55")]
	[Address(RVA = "0x3C820C0", Offset = "0x3C820C0", VA = "0x3C820C0", Slot = "37")]
	public virtual IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002F56")]
	[Address(RVA = "0x3C82150", Offset = "0x3C82150", VA = "0x3C82150", Slot = "38")]
	public virtual object GetKey(int index)
	{
		return null;
	}

	[Token(Token = "0x6002F57")]
	[Address(RVA = "0x3C82200", Offset = "0x3C82200", VA = "0x3C82200", Slot = "39")]
	public virtual IList GetKeyList()
	{
		return null;
	}

	[Token(Token = "0x6002F58")]
	[Address(RVA = "0x3C822C0", Offset = "0x3C822C0", VA = "0x3C822C0", Slot = "40")]
	public virtual IList GetValueList()
	{
		return null;
	}

	[Token(Token = "0x6002F5B")]
	[Address(RVA = "0x3C824F0", Offset = "0x3C824F0", VA = "0x3C824F0", Slot = "43")]
	public virtual int IndexOfKey(object key)
	{
		return default(int);
	}

	[Token(Token = "0x6002F5C")]
	[Address(RVA = "0x3C82580", Offset = "0x3C82580", VA = "0x3C82580", Slot = "44")]
	public virtual int IndexOfValue(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002F5D")]
	[Address(RVA = "0x3C815A0", Offset = "0x3C815A0", VA = "0x3C815A0")]
	private void Insert(int index, object key, object value)
	{
	}

	[Token(Token = "0x6002F5E")]
	[Address(RVA = "0x3C825D0", Offset = "0x3C825D0", VA = "0x3C825D0", Slot = "45")]
	public virtual void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6002F5F")]
	[Address(RVA = "0x3C82710", Offset = "0x3C82710", VA = "0x3C82710", Slot = "46")]
	public virtual void Remove(object key)
	{
	}

	[Token(Token = "0x6002F60")]
	[Address(RVA = "0x3C82750", Offset = "0x3C82750", VA = "0x3C82750")]
	public static SortedList Synchronized(SortedList list)
	{
		return null;
	}
}
