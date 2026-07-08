using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x2000602")]
internal class ListDictionaryInternal : IDictionary, ICollection, IEnumerable
{
	[Token(Token = "0x2000603")]
	private class NodeEnumerator : IDictionaryEnumerator, IEnumerator
	{
		[Token(Token = "0x4001A53")]
		[FieldOffset(Offset = "0x10")]
		private System.Collections.ListDictionaryInternal list;

		[Token(Token = "0x4001A54")]
		[FieldOffset(Offset = "0x18")]
		private DictionaryNode current;

		[Token(Token = "0x4001A55")]
		[FieldOffset(Offset = "0x20")]
		private int version;

		[Token(Token = "0x4001A56")]
		[FieldOffset(Offset = "0x24")]
		private bool start;

		[Token(Token = "0x17000736")]
		public object Current
		{
			[Token(Token = "0x6002EEB")]
			[Address(RVA = "0x4F98860", Offset = "0x4F98860", VA = "0x4F98860", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000737")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x6002EEC")]
			[Address(RVA = "0x4F988B0", Offset = "0x4F988B0", VA = "0x4F988B0", Slot = "6")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x17000738")]
		public object Key
		{
			[Token(Token = "0x6002EED")]
			[Address(RVA = "0x4F98950", Offset = "0x4F98950", VA = "0x4F98950", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000739")]
		public object Value
		{
			[Token(Token = "0x6002EEE")]
			[Address(RVA = "0x4F989B0", Offset = "0x4F989B0", VA = "0x4F989B0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002EEA")]
		[Address(RVA = "0x4F98680", Offset = "0x4F98680", VA = "0x4F98680")]
		public NodeEnumerator(System.Collections.ListDictionaryInternal list)
		{
		}

		[Token(Token = "0x6002EEF")]
		[Address(RVA = "0x4F98A10", Offset = "0x4F98A10", VA = "0x4F98A10", Slot = "7")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002EF0")]
		[Address(RVA = "0x4F98AC0", Offset = "0x4F98AC0", VA = "0x4F98AC0", Slot = "9")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x2000604")]
	private class NodeKeyValueCollection : ICollection, IEnumerable
	{
		[Token(Token = "0x2000605")]
		private class NodeKeyValueEnumerator : IEnumerator
		{
			[Token(Token = "0x4001A59")]
			[FieldOffset(Offset = "0x10")]
			private System.Collections.ListDictionaryInternal list;

			[Token(Token = "0x4001A5A")]
			[FieldOffset(Offset = "0x18")]
			private DictionaryNode current;

			[Token(Token = "0x4001A5B")]
			[FieldOffset(Offset = "0x20")]
			private int version;

			[Token(Token = "0x4001A5C")]
			[FieldOffset(Offset = "0x24")]
			private bool isKeys;

			[Token(Token = "0x4001A5D")]
			[FieldOffset(Offset = "0x25")]
			private bool start;

			[Token(Token = "0x1700073D")]
			public object Current
			{
				[Token(Token = "0x6002EF8")]
				[Address(RVA = "0x4F98EA0", Offset = "0x4F98EA0", VA = "0x4F98EA0", Slot = "5")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6002EF7")]
			[Address(RVA = "0x4F98E40", Offset = "0x4F98E40", VA = "0x4F98E40")]
			public NodeKeyValueEnumerator(System.Collections.ListDictionaryInternal list, bool isKeys)
			{
			}

			[Token(Token = "0x6002EF9")]
			[Address(RVA = "0x4F98F10", Offset = "0x4F98F10", VA = "0x4F98F10", Slot = "4")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6002EFA")]
			[Address(RVA = "0x4F98FC0", Offset = "0x4F98FC0", VA = "0x4F98FC0", Slot = "6")]
			public void Reset()
			{
			}
		}

		[Token(Token = "0x4001A57")]
		[FieldOffset(Offset = "0x10")]
		private System.Collections.ListDictionaryInternal list;

		[Token(Token = "0x4001A58")]
		[FieldOffset(Offset = "0x18")]
		private bool isKeys;

		[Token(Token = "0x1700073A")]
		private int System_002ECollections_002EICollection_002ECount
		{
			[Token(Token = "0x6002EF3")]
			[Address(RVA = "0x4F98CE0", Offset = "0x4F98CE0", VA = "0x4F98CE0", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700073B")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6002EF4")]
			[Address(RVA = "0x4F98D20", Offset = "0x4F98D20", VA = "0x4F98D20", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700073C")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6002EF5")]
			[Address(RVA = "0x4F98D30", Offset = "0x4F98D30", VA = "0x4F98D30", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002EF1")]
		[Address(RVA = "0x4F98000", Offset = "0x4F98000", VA = "0x4F98000")]
		public NodeKeyValueCollection(System.Collections.ListDictionaryInternal list, bool isKeys)
		{
		}

		[Token(Token = "0x6002EF2")]
		[Address(RVA = "0x4F98B40", Offset = "0x4F98B40", VA = "0x4F98B40", Slot = "4")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6002EF6")]
		[Address(RVA = "0x4F98DB0", Offset = "0x4F98DB0", VA = "0x4F98DB0", Slot = "8")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x2000606")]
	private class DictionaryNode
	{
		[Token(Token = "0x4001A5E")]
		[FieldOffset(Offset = "0x10")]
		public object key;

		[Token(Token = "0x4001A5F")]
		[FieldOffset(Offset = "0x18")]
		public object value;

		[Token(Token = "0x4001A60")]
		[FieldOffset(Offset = "0x20")]
		public DictionaryNode next;

		[Token(Token = "0x6002EFB")]
		[Address(RVA = "0x4F97F80", Offset = "0x4F97F80", VA = "0x4F97F80")]
		public DictionaryNode()
		{
		}
	}

	[Token(Token = "0x4001A4F")]
	[FieldOffset(Offset = "0x10")]
	private DictionaryNode head;

	[Token(Token = "0x4001A50")]
	[FieldOffset(Offset = "0x18")]
	private int version;

	[Token(Token = "0x4001A51")]
	[FieldOffset(Offset = "0x1C")]
	private int count;

	[NonSerialized]
	[Token(Token = "0x4001A52")]
	[FieldOffset(Offset = "0x20")]
	private object _syncRoot;

	[Token(Token = "0x1700072E")]
	public object this[object key]
	{
		[Token(Token = "0x6002EDA")]
		[Address(RVA = "0x4F97D40", Offset = "0x4F97D40", VA = "0x4F97D40", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002EDB")]
		[Address(RVA = "0x4F97E00", Offset = "0x4F97E00", VA = "0x4F97E00", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700072F")]
	public int Count
	{
		[Token(Token = "0x6002EDC")]
		[Address(RVA = "0x4F97F90", Offset = "0x4F97F90", VA = "0x4F97F90", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000730")]
	public ICollection Keys
	{
		[Token(Token = "0x6002EDD")]
		[Address(RVA = "0x4F97FA0", Offset = "0x4F97FA0", VA = "0x4F97FA0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000731")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6002EDE")]
		[Address(RVA = "0x4F98030", Offset = "0x4F98030", VA = "0x4F98030", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000732")]
	public bool IsFixedSize
	{
		[Token(Token = "0x6002EDF")]
		[Address(RVA = "0x4F98040", Offset = "0x4F98040", VA = "0x4F98040", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000733")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6002EE0")]
		[Address(RVA = "0x4F98050", Offset = "0x4F98050", VA = "0x4F98050", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000734")]
	public object SyncRoot
	{
		[Token(Token = "0x6002EE1")]
		[Address(RVA = "0x4F98060", Offset = "0x4F98060", VA = "0x4F98060", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000735")]
	public ICollection Values
	{
		[Token(Token = "0x6002EE2")]
		[Address(RVA = "0x4F980E0", Offset = "0x4F980E0", VA = "0x4F980E0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002ED9")]
	[Address(RVA = "0x4F97D30", Offset = "0x4F97D30", VA = "0x4F97D30")]
	public ListDictionaryInternal()
	{
	}

	[Token(Token = "0x6002EE3")]
	[Address(RVA = "0x4F98140", Offset = "0x4F98140", VA = "0x4F98140", Slot = "9")]
	public void Add(object key, object value)
	{
	}

	[Token(Token = "0x6002EE4")]
	[Address(RVA = "0x4F982F0", Offset = "0x4F982F0", VA = "0x4F982F0", Slot = "10")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002EE5")]
	[Address(RVA = "0x4F98320", Offset = "0x4F98320", VA = "0x4F98320", Slot = "8")]
	public bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002EE6")]
	[Address(RVA = "0x4F983E0", Offset = "0x4F983E0", VA = "0x4F983E0", Slot = "15")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002EE7")]
	[Address(RVA = "0x4F985F0", Offset = "0x4F985F0", VA = "0x4F985F0", Slot = "13")]
	public IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002EE8")]
	[Address(RVA = "0x4F986E0", Offset = "0x4F986E0", VA = "0x4F986E0", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002EE9")]
	[Address(RVA = "0x4F98770", Offset = "0x4F98770", VA = "0x4F98770", Slot = "14")]
	public void Remove(object key)
	{
	}
}
