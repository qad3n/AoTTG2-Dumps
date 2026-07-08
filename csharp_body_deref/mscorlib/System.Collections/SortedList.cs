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
			[Address(RVA = "0x4F9CD70", Offset = "0x4F9CD70", VA = "0x4F9CD70", Slot = "23")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700075A")]
		public override object SyncRoot
		{
			[Token(Token = "0x6002F63")]
			[Address(RVA = "0x4F9CE60", Offset = "0x4F9CE60", VA = "0x4F9CE60", Slot = "29")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700075B")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6002F64")]
			[Address(RVA = "0x4F9CE70", Offset = "0x4F9CE70", VA = "0x4F9CE70", Slot = "26")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700075C")]
		public override bool IsFixedSize
		{
			[Token(Token = "0x6002F65")]
			[Address(RVA = "0x4F9CEA0", Offset = "0x4F9CEA0", VA = "0x4F9CEA0", Slot = "27")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700075D")]
		public override bool IsSynchronized
		{
			[Token(Token = "0x6002F66")]
			[Address(RVA = "0x4F9CED0", Offset = "0x4F9CED0", VA = "0x4F9CED0", Slot = "28")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700075E")]
		public override object this[object key]
		{
			[Token(Token = "0x6002F67")]
			[Address(RVA = "0x4F9CEE0", Offset = "0x4F9CEE0", VA = "0x4F9CEE0", Slot = "41")]
			get
			{
				return null;
			}
			[Token(Token = "0x6002F68")]
			[Address(RVA = "0x4F9CFD0", Offset = "0x4F9CFD0", VA = "0x4F9CFD0", Slot = "42")]
			set
			{
			}
		}

		[Token(Token = "0x6002F61")]
		[Address(RVA = "0x4F9CD10", Offset = "0x4F9CD10", VA = "0x4F9CD10")]
		internal SyncSortedList(SortedList list)
		{
		}

		[Token(Token = "0x6002F69")]
		[Address(RVA = "0x4F9D0B0", Offset = "0x4F9D0B0", VA = "0x4F9D0B0", Slot = "21")]
		public override void Add(object key, object value)
		{
		}

		[Token(Token = "0x6002F6A")]
		[Address(RVA = "0x4F9D190", Offset = "0x4F9D190", VA = "0x4F9D190", Slot = "30")]
		public override void Clear()
		{
		}

		[Token(Token = "0x6002F6B")]
		[Address(RVA = "0x4F9D260", Offset = "0x4F9D260", VA = "0x4F9D260", Slot = "31")]
		public override object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002F6C")]
		[Address(RVA = "0x4F9D350", Offset = "0x4F9D350", VA = "0x4F9D350", Slot = "32")]
		public override bool Contains(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x6002F6D")]
		[Address(RVA = "0x4F9D440", Offset = "0x4F9D440", VA = "0x4F9D440", Slot = "33")]
		public override bool ContainsKey(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x6002F6E")]
		[Address(RVA = "0x4F9D530", Offset = "0x4F9D530", VA = "0x4F9D530", Slot = "34")]
		public override bool ContainsValue(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x6002F6F")]
		[Address(RVA = "0x4F9D620", Offset = "0x4F9D620", VA = "0x4F9D620", Slot = "35")]
		public override void CopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6002F70")]
		[Address(RVA = "0x4F9D700", Offset = "0x4F9D700", VA = "0x4F9D700", Slot = "36")]
		public override object GetByIndex(int index)
		{
			return null;
		}

		[Token(Token = "0x6002F71")]
		[Address(RVA = "0x4F9D800", Offset = "0x4F9D800", VA = "0x4F9D800", Slot = "37")]
		public override IDictionaryEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002F72")]
		[Address(RVA = "0x4F9D8F0", Offset = "0x4F9D8F0", VA = "0x4F9D8F0", Slot = "38")]
		public override object GetKey(int index)
		{
			return null;
		}

		[Token(Token = "0x6002F73")]
		[Address(RVA = "0x4F9D9F0", Offset = "0x4F9D9F0", VA = "0x4F9D9F0", Slot = "39")]
		public override IList GetKeyList()
		{
			return null;
		}

		[Token(Token = "0x6002F74")]
		[Address(RVA = "0x4F9DAE0", Offset = "0x4F9DAE0", VA = "0x4F9DAE0", Slot = "40")]
		public override IList GetValueList()
		{
			return null;
		}

		[Token(Token = "0x6002F75")]
		[Address(RVA = "0x4F9DBD0", Offset = "0x4F9DBD0", VA = "0x4F9DBD0", Slot = "43")]
		public override int IndexOfKey(object key)
		{
			return default(int);
		}

		[Token(Token = "0x6002F76")]
		[Address(RVA = "0x4F9DD30", Offset = "0x4F9DD30", VA = "0x4F9DD30", Slot = "44")]
		public override int IndexOfValue(object value)
		{
			return default(int);
		}

		[Token(Token = "0x6002F77")]
		[Address(RVA = "0x4F9DE20", Offset = "0x4F9DE20", VA = "0x4F9DE20", Slot = "45")]
		public override void RemoveAt(int index)
		{
		}

		[Token(Token = "0x6002F78")]
		[Address(RVA = "0x4F9DEF0", Offset = "0x4F9DEF0", VA = "0x4F9DEF0", Slot = "46")]
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
			[Address(RVA = "0x4F9DFE0", Offset = "0x4F9DFE0", VA = "0x4F9DFE0", Slot = "11")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000760")]
		public virtual DictionaryEntry Entry
		{
			[Token(Token = "0x6002F7D")]
			[Address(RVA = "0x4F9E190", Offset = "0x4F9E190", VA = "0x4F9E190", Slot = "13")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x17000761")]
		public virtual object Current
		{
			[Token(Token = "0x6002F7E")]
			[Address(RVA = "0x4F9E270", Offset = "0x4F9E270", VA = "0x4F9E270", Slot = "14")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000762")]
		public virtual object Value
		{
			[Token(Token = "0x6002F7F")]
			[Address(RVA = "0x4F9E360", Offset = "0x4F9E360", VA = "0x4F9E360", Slot = "15")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002F79")]
		[Address(RVA = "0x4F9C540", Offset = "0x4F9C540", VA = "0x4F9C540")]
		internal SortedListEnumerator(SortedList sortedList, int index, int count, int getObjRetType)
		{
		}

		[Token(Token = "0x6002F7A")]
		[Address(RVA = "0x4F9DFD0", Offset = "0x4F9DFD0", VA = "0x4F9DFD0", Slot = "10")]
		public object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002F7C")]
		[Address(RVA = "0x4F9E070", Offset = "0x4F9E070", VA = "0x4F9E070", Slot = "12")]
		public virtual bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002F80")]
		[Address(RVA = "0x4F9E3F0", Offset = "0x4F9E3F0", VA = "0x4F9E3F0", Slot = "16")]
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
			[Address(RVA = "0x4F9E490", Offset = "0x4F9E490", VA = "0x4F9E490", Slot = "20")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000764")]
		public virtual bool IsReadOnly
		{
			[Token(Token = "0x6002F83")]
			[Address(RVA = "0x4F9E4B0", Offset = "0x4F9E4B0", VA = "0x4F9E4B0", Slot = "21")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000765")]
		public virtual bool IsFixedSize
		{
			[Token(Token = "0x6002F84")]
			[Address(RVA = "0x4F9E4C0", Offset = "0x4F9E4C0", VA = "0x4F9E4C0", Slot = "22")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000766")]
		public virtual bool IsSynchronized
		{
			[Token(Token = "0x6002F85")]
			[Address(RVA = "0x4F9E4D0", Offset = "0x4F9E4D0", VA = "0x4F9E4D0", Slot = "23")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000767")]
		public virtual object SyncRoot
		{
			[Token(Token = "0x6002F86")]
			[Address(RVA = "0x4F9E500", Offset = "0x4F9E500", VA = "0x4F9E500", Slot = "24")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000768")]
		public virtual object this[int index]
		{
			[Token(Token = "0x6002F8C")]
			[Address(RVA = "0x4F9E710", Offset = "0x4F9E710", VA = "0x4F9E710", Slot = "30")]
			get
			{
				return null;
			}
			[Token(Token = "0x6002F8D")]
			[Address(RVA = "0x4F9E740", Offset = "0x4F9E740", VA = "0x4F9E740", Slot = "31")]
			set
			{
			}
		}

		[Token(Token = "0x6002F81")]
		[Address(RVA = "0x4F9C770", Offset = "0x4F9C770", VA = "0x4F9C770")]
		internal KeyList(SortedList sortedList)
		{
		}

		[Token(Token = "0x6002F87")]
		[Address(RVA = "0x4F9E530", Offset = "0x4F9E530", VA = "0x4F9E530", Slot = "25")]
		public virtual int Add(object key)
		{
			return default(int);
		}

		[Token(Token = "0x6002F88")]
		[Address(RVA = "0x4F9E580", Offset = "0x4F9E580", VA = "0x4F9E580", Slot = "26")]
		public virtual void Clear()
		{
		}

		[Token(Token = "0x6002F89")]
		[Address(RVA = "0x4F9E5D0", Offset = "0x4F9E5D0", VA = "0x4F9E5D0", Slot = "27")]
		public virtual bool Contains(object key)
		{
			return default(bool);
		}

		[Token(Token = "0x6002F8A")]
		[Address(RVA = "0x4F9E600", Offset = "0x4F9E600", VA = "0x4F9E600", Slot = "28")]
		public virtual void CopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x6002F8B")]
		[Address(RVA = "0x4F9E6C0", Offset = "0x4F9E6C0", VA = "0x4F9E6C0", Slot = "29")]
		public virtual void Insert(int index, object value)
		{
		}

		[Token(Token = "0x6002F8E")]
		[Address(RVA = "0x4F9E790", Offset = "0x4F9E790", VA = "0x4F9E790", Slot = "32")]
		public virtual IEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002F8F")]
		[Address(RVA = "0x4F9E830", Offset = "0x4F9E830", VA = "0x4F9E830", Slot = "33")]
		public virtual int IndexOf(object key)
		{
			return default(int);
		}

		[Token(Token = "0x6002F90")]
		[Address(RVA = "0x4F9E8F0", Offset = "0x4F9E8F0", VA = "0x4F9E8F0", Slot = "34")]
		public virtual void Remove(object key)
		{
		}

		[Token(Token = "0x6002F91")]
		[Address(RVA = "0x4F9E940", Offset = "0x4F9E940", VA = "0x4F9E940", Slot = "35")]
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
			[Address(RVA = "0x4F9E990", Offset = "0x4F9E990", VA = "0x4F9E990", Slot = "20")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700076A")]
		public virtual bool IsReadOnly
		{
			[Token(Token = "0x6002F94")]
			[Address(RVA = "0x4F9E9B0", Offset = "0x4F9E9B0", VA = "0x4F9E9B0", Slot = "21")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700076B")]
		public virtual bool IsFixedSize
		{
			[Token(Token = "0x6002F95")]
			[Address(RVA = "0x4F9E9C0", Offset = "0x4F9E9C0", VA = "0x4F9E9C0", Slot = "22")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700076C")]
		public virtual bool IsSynchronized
		{
			[Token(Token = "0x6002F96")]
			[Address(RVA = "0x4F9E9D0", Offset = "0x4F9E9D0", VA = "0x4F9E9D0", Slot = "23")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700076D")]
		public virtual object SyncRoot
		{
			[Token(Token = "0x6002F97")]
			[Address(RVA = "0x4F9EA00", Offset = "0x4F9EA00", VA = "0x4F9EA00", Slot = "24")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700076E")]
		public virtual object this[int index]
		{
			[Token(Token = "0x6002F9D")]
			[Address(RVA = "0x4F9EC10", Offset = "0x4F9EC10", VA = "0x4F9EC10", Slot = "30")]
			get
			{
				return null;
			}
			[Token(Token = "0x6002F9E")]
			[Address(RVA = "0x4F9EC40", Offset = "0x4F9EC40", VA = "0x4F9EC40", Slot = "31")]
			set
			{
			}
		}

		[Token(Token = "0x6002F92")]
		[Address(RVA = "0x4F9C830", Offset = "0x4F9C830", VA = "0x4F9C830")]
		internal ValueList(SortedList sortedList)
		{
		}

		[Token(Token = "0x6002F98")]
		[Address(RVA = "0x4F9EA30", Offset = "0x4F9EA30", VA = "0x4F9EA30", Slot = "25")]
		public virtual int Add(object key)
		{
			return default(int);
		}

		[Token(Token = "0x6002F99")]
		[Address(RVA = "0x4F9EA80", Offset = "0x4F9EA80", VA = "0x4F9EA80", Slot = "26")]
		public virtual void Clear()
		{
		}

		[Token(Token = "0x6002F9A")]
		[Address(RVA = "0x4F9EAD0", Offset = "0x4F9EAD0", VA = "0x4F9EAD0", Slot = "27")]
		public virtual bool Contains(object value)
		{
			return default(bool);
		}

		[Token(Token = "0x6002F9B")]
		[Address(RVA = "0x4F9EB00", Offset = "0x4F9EB00", VA = "0x4F9EB00", Slot = "28")]
		public virtual void CopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x6002F9C")]
		[Address(RVA = "0x4F9EBC0", Offset = "0x4F9EBC0", VA = "0x4F9EBC0", Slot = "29")]
		public virtual void Insert(int index, object value)
		{
		}

		[Token(Token = "0x6002F9F")]
		[Address(RVA = "0x4F9EC90", Offset = "0x4F9EC90", VA = "0x4F9EC90", Slot = "32")]
		public virtual IEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002FA0")]
		[Address(RVA = "0x4F9ED30", Offset = "0x4F9ED30", VA = "0x4F9ED30", Slot = "33")]
		public virtual int IndexOf(object value)
		{
			return default(int);
		}

		[Token(Token = "0x6002FA1")]
		[Address(RVA = "0x4F9EDA0", Offset = "0x4F9EDA0", VA = "0x4F9EDA0", Slot = "34")]
		public virtual void Remove(object value)
		{
		}

		[Token(Token = "0x6002FA2")]
		[Address(RVA = "0x4F9EDF0", Offset = "0x4F9EDF0", VA = "0x4F9EDF0", Slot = "35")]
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
		[Address(RVA = "0x4F9BC10", Offset = "0x4F9BC10", VA = "0x4F9BC10", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x17000751")]
	public virtual int Count
	{
		[Token(Token = "0x6002F45")]
		[Address(RVA = "0x4F9BED0", Offset = "0x4F9BED0", VA = "0x4F9BED0", Slot = "23")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000752")]
	public virtual ICollection Keys
	{
		[Token(Token = "0x6002F46")]
		[Address(RVA = "0x4F9BEE0", Offset = "0x4F9BEE0", VA = "0x4F9BEE0", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000753")]
	public virtual ICollection Values
	{
		[Token(Token = "0x6002F47")]
		[Address(RVA = "0x4F9BF00", Offset = "0x4F9BF00", VA = "0x4F9BF00", Slot = "25")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000754")]
	public virtual bool IsReadOnly
	{
		[Token(Token = "0x6002F48")]
		[Address(RVA = "0x4F9BF20", Offset = "0x4F9BF20", VA = "0x4F9BF20", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000755")]
	public virtual bool IsFixedSize
	{
		[Token(Token = "0x6002F49")]
		[Address(RVA = "0x4F9BF30", Offset = "0x4F9BF30", VA = "0x4F9BF30", Slot = "27")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000756")]
	public virtual bool IsSynchronized
	{
		[Token(Token = "0x6002F4A")]
		[Address(RVA = "0x4F9BF40", Offset = "0x4F9BF40", VA = "0x4F9BF40", Slot = "28")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000757")]
	public virtual object SyncRoot
	{
		[Token(Token = "0x6002F4B")]
		[Address(RVA = "0x4F9BF50", Offset = "0x4F9BF50", VA = "0x4F9BF50", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000758")]
	public virtual object this[object key]
	{
		[Token(Token = "0x6002F59")]
		[Address(RVA = "0x4F9C860", Offset = "0x4F9C860", VA = "0x4F9C860", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002F5A")]
		[Address(RVA = "0x4F9C8A0", Offset = "0x4F9C8A0", VA = "0x4F9C8A0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x6002F3F")]
	[Address(RVA = "0x4F9B5E0", Offset = "0x4F9B5E0", VA = "0x4F9B5E0")]
	public SortedList()
	{
	}

	[Token(Token = "0x6002F40")]
	[Address(RVA = "0x4F9B600", Offset = "0x4F9B600", VA = "0x4F9B600")]
	private void Init()
	{
	}

	[Token(Token = "0x6002F41")]
	[Address(RVA = "0x4F9B800", Offset = "0x4F9B800", VA = "0x4F9B800")]
	public SortedList(int initialCapacity)
	{
	}

	[Token(Token = "0x6002F42")]
	[Address(RVA = "0x4F9B940", Offset = "0x4F9B940", VA = "0x4F9B940")]
	public SortedList(IComparer comparer)
	{
	}

	[Token(Token = "0x6002F43")]
	[Address(RVA = "0x4F9B980", Offset = "0x4F9B980", VA = "0x4F9B980", Slot = "21")]
	public virtual void Add(object key, object value)
	{
	}

	[Token(Token = "0x6002F4C")]
	[Address(RVA = "0x4F9BFD0", Offset = "0x4F9BFD0", VA = "0x4F9BFD0", Slot = "30")]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x6002F4D")]
	[Address(RVA = "0x4F9C010", Offset = "0x4F9C010", VA = "0x4F9C010", Slot = "31")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002F4E")]
	[Address(RVA = "0x4F9C0C0", Offset = "0x4F9C0C0", VA = "0x4F9C0C0", Slot = "32")]
	public virtual bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F4F")]
	[Address(RVA = "0x4F9C0E0", Offset = "0x4F9C0E0", VA = "0x4F9C0E0", Slot = "33")]
	public virtual bool ContainsKey(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F50")]
	[Address(RVA = "0x4F9C100", Offset = "0x4F9C100", VA = "0x4F9C100", Slot = "34")]
	public virtual bool ContainsValue(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F51")]
	[Address(RVA = "0x4F9C120", Offset = "0x4F9C120", VA = "0x4F9C120", Slot = "35")]
	public virtual void CopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002F52")]
	[Address(RVA = "0x4F9C3B0", Offset = "0x4F9C3B0", VA = "0x4F9C3B0")]
	private void EnsureCapacity(int min)
	{
	}

	[Token(Token = "0x6002F53")]
	[Address(RVA = "0x4F9C400", Offset = "0x4F9C400", VA = "0x4F9C400", Slot = "36")]
	public virtual object GetByIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x6002F54")]
	[Address(RVA = "0x4F9C4B0", Offset = "0x4F9C4B0", VA = "0x4F9C4B0", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002F55")]
	[Address(RVA = "0x4F9C5A0", Offset = "0x4F9C5A0", VA = "0x4F9C5A0", Slot = "37")]
	public virtual IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002F56")]
	[Address(RVA = "0x4F9C630", Offset = "0x4F9C630", VA = "0x4F9C630", Slot = "38")]
	public virtual object GetKey(int index)
	{
		return null;
	}

	[Token(Token = "0x6002F57")]
	[Address(RVA = "0x4F9C6E0", Offset = "0x4F9C6E0", VA = "0x4F9C6E0", Slot = "39")]
	public virtual IList GetKeyList()
	{
		return null;
	}

	[Token(Token = "0x6002F58")]
	[Address(RVA = "0x4F9C7A0", Offset = "0x4F9C7A0", VA = "0x4F9C7A0", Slot = "40")]
	public virtual IList GetValueList()
	{
		return null;
	}

	[Token(Token = "0x6002F5B")]
	[Address(RVA = "0x4F9C9D0", Offset = "0x4F9C9D0", VA = "0x4F9C9D0", Slot = "43")]
	public virtual int IndexOfKey(object key)
	{
		return default(int);
	}

	[Token(Token = "0x6002F5C")]
	[Address(RVA = "0x4F9CA60", Offset = "0x4F9CA60", VA = "0x4F9CA60", Slot = "44")]
	public virtual int IndexOfValue(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002F5D")]
	[Address(RVA = "0x4F9BA80", Offset = "0x4F9BA80", VA = "0x4F9BA80")]
	private void Insert(int index, object key, object value)
	{
	}

	[Token(Token = "0x6002F5E")]
	[Address(RVA = "0x4F9CAB0", Offset = "0x4F9CAB0", VA = "0x4F9CAB0", Slot = "45")]
	public virtual void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6002F5F")]
	[Address(RVA = "0x4F9CBF0", Offset = "0x4F9CBF0", VA = "0x4F9CBF0", Slot = "46")]
	public virtual void Remove(object key)
	{
	}

	[Token(Token = "0x6002F60")]
	[Address(RVA = "0x4F9CC30", Offset = "0x4F9CC30", VA = "0x4F9CC30")]
	public static SortedList Synchronized(SortedList list)
	{
		return null;
	}
}
