// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.ListDictionaryInternal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x3C7E380", Offset = "0x3C7E380", VA = "0x3C7E380", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000737")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x6002EEC")]
			[Address(RVA = "0x3C7E3D0", Offset = "0x3C7E3D0", VA = "0x3C7E3D0", Slot = "6")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x17000738")]
		public object Key
		{
			[Token(Token = "0x6002EED")]
			[Address(RVA = "0x3C7E470", Offset = "0x3C7E470", VA = "0x3C7E470", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000739")]
		public object Value
		{
			[Token(Token = "0x6002EEE")]
			[Address(RVA = "0x3C7E4D0", Offset = "0x3C7E4D0", VA = "0x3C7E4D0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002EEA")]
		[Address(RVA = "0x3C7E1A0", Offset = "0x3C7E1A0", VA = "0x3C7E1A0")]
		public NodeEnumerator(System.Collections.ListDictionaryInternal list)
		{
		}

		[Token(Token = "0x6002EEF")]
		[Address(RVA = "0x3C7E530", Offset = "0x3C7E530", VA = "0x3C7E530", Slot = "7")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002EF0")]
		[Address(RVA = "0x3C7E5E0", Offset = "0x3C7E5E0", VA = "0x3C7E5E0", Slot = "9")]
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
				[Address(RVA = "0x3C7E9C0", Offset = "0x3C7E9C0", VA = "0x3C7E9C0", Slot = "5")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6002EF7")]
			[Address(RVA = "0x3C7E960", Offset = "0x3C7E960", VA = "0x3C7E960")]
			public NodeKeyValueEnumerator(System.Collections.ListDictionaryInternal list, bool isKeys)
			{
			}

			[Token(Token = "0x6002EF9")]
			[Address(RVA = "0x3C7EA30", Offset = "0x3C7EA30", VA = "0x3C7EA30", Slot = "4")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6002EFA")]
			[Address(RVA = "0x3C7EAE0", Offset = "0x3C7EAE0", VA = "0x3C7EAE0", Slot = "6")]
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
			[Address(RVA = "0x3C7E800", Offset = "0x3C7E800", VA = "0x3C7E800", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700073B")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6002EF4")]
			[Address(RVA = "0x3C7E840", Offset = "0x3C7E840", VA = "0x3C7E840", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700073C")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6002EF5")]
			[Address(RVA = "0x3C7E850", Offset = "0x3C7E850", VA = "0x3C7E850", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002EF1")]
		[Address(RVA = "0x3C7DB20", Offset = "0x3C7DB20", VA = "0x3C7DB20")]
		public NodeKeyValueCollection(System.Collections.ListDictionaryInternal list, bool isKeys)
		{
		}

		[Token(Token = "0x6002EF2")]
		[Address(RVA = "0x3C7E660", Offset = "0x3C7E660", VA = "0x3C7E660", Slot = "4")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6002EF6")]
		[Address(RVA = "0x3C7E8D0", Offset = "0x3C7E8D0", VA = "0x3C7E8D0", Slot = "8")]
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
		[Address(RVA = "0x3C7DAA0", Offset = "0x3C7DAA0", VA = "0x3C7DAA0")]
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
		[Address(RVA = "0x3C7D860", Offset = "0x3C7D860", VA = "0x3C7D860", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002EDB")]
		[Address(RVA = "0x3C7D920", Offset = "0x3C7D920", VA = "0x3C7D920", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700072F")]
	public int Count
	{
		[Token(Token = "0x6002EDC")]
		[Address(RVA = "0x3C7DAB0", Offset = "0x3C7DAB0", VA = "0x3C7DAB0", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000730")]
	public ICollection Keys
	{
		[Token(Token = "0x6002EDD")]
		[Address(RVA = "0x3C7DAC0", Offset = "0x3C7DAC0", VA = "0x3C7DAC0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000731")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6002EDE")]
		[Address(RVA = "0x3C7DB50", Offset = "0x3C7DB50", VA = "0x3C7DB50", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000732")]
	public bool IsFixedSize
	{
		[Token(Token = "0x6002EDF")]
		[Address(RVA = "0x3C7DB60", Offset = "0x3C7DB60", VA = "0x3C7DB60", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000733")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6002EE0")]
		[Address(RVA = "0x3C7DB70", Offset = "0x3C7DB70", VA = "0x3C7DB70", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000734")]
	public object SyncRoot
	{
		[Token(Token = "0x6002EE1")]
		[Address(RVA = "0x3C7DB80", Offset = "0x3C7DB80", VA = "0x3C7DB80", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000735")]
	public ICollection Values
	{
		[Token(Token = "0x6002EE2")]
		[Address(RVA = "0x3C7DC00", Offset = "0x3C7DC00", VA = "0x3C7DC00", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002ED9")]
	[Address(RVA = "0x3C7D850", Offset = "0x3C7D850", VA = "0x3C7D850")]
	public ListDictionaryInternal()
	{
	}

	[Token(Token = "0x6002EE3")]
	[Address(RVA = "0x3C7DC60", Offset = "0x3C7DC60", VA = "0x3C7DC60", Slot = "9")]
	public void Add(object key, object value)
	{
	}

	[Token(Token = "0x6002EE4")]
	[Address(RVA = "0x3C7DE10", Offset = "0x3C7DE10", VA = "0x3C7DE10", Slot = "10")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002EE5")]
	[Address(RVA = "0x3C7DE40", Offset = "0x3C7DE40", VA = "0x3C7DE40", Slot = "8")]
	public bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002EE6")]
	[Address(RVA = "0x3C7DF00", Offset = "0x3C7DF00", VA = "0x3C7DF00", Slot = "15")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002EE7")]
	[Address(RVA = "0x3C7E110", Offset = "0x3C7E110", VA = "0x3C7E110", Slot = "13")]
	public IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002EE8")]
	[Address(RVA = "0x3C7E200", Offset = "0x3C7E200", VA = "0x3C7E200", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002EE9")]
	[Address(RVA = "0x3C7E290", Offset = "0x3C7E290", VA = "0x3C7E290", Slot = "14")]
	public void Remove(object key)
	{
	}
}
