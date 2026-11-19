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
[Token(Token = "0x20005B1")]
internal class ListDictionaryInternal : IDictionary, ICollection, IEnumerable
{
	[Token(Token = "0x20005B2")]
	private class NodeEnumerator : IDictionaryEnumerator, IEnumerator
	{
		[Token(Token = "0x40017D5")]
		[FieldOffset(Offset = "0x10")]
		private System.Collections.ListDictionaryInternal list;

		[Token(Token = "0x40017D6")]
		[FieldOffset(Offset = "0x18")]
		private DictionaryNode current;

		[Token(Token = "0x40017D7")]
		[FieldOffset(Offset = "0x20")]
		private int version;

		[Token(Token = "0x40017D8")]
		[FieldOffset(Offset = "0x24")]
		private bool start;

		[Token(Token = "0x170006C4")]
		public object Current
		{
			[Token(Token = "0x6002BD9")]
			[Address(RVA = "0x5451540", Offset = "0x5450540", VA = "0x5451540", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170006C5")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x6002BDA")]
			[Address(RVA = "0x5451590", Offset = "0x5450590", VA = "0x5451590", Slot = "6")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x170006C6")]
		public object Key
		{
			[Token(Token = "0x6002BDB")]
			[Address(RVA = "0x5451630", Offset = "0x5450630", VA = "0x5451630", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170006C7")]
		public object Value
		{
			[Token(Token = "0x6002BDC")]
			[Address(RVA = "0x5451690", Offset = "0x5450690", VA = "0x5451690", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002BD8")]
		[Address(RVA = "0x5451350", Offset = "0x5450350", VA = "0x5451350")]
		public NodeEnumerator(System.Collections.ListDictionaryInternal list)
		{
		}

		[Token(Token = "0x6002BDD")]
		[Address(RVA = "0x54516F0", Offset = "0x54506F0", VA = "0x54516F0", Slot = "7")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002BDE")]
		[Address(RVA = "0x54517A0", Offset = "0x54507A0", VA = "0x54517A0", Slot = "9")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x20005B3")]
	private class NodeKeyValueCollection : ICollection, IEnumerable
	{
		[Token(Token = "0x20005B4")]
		private class NodeKeyValueEnumerator : IEnumerator
		{
			[Token(Token = "0x40017DB")]
			[FieldOffset(Offset = "0x10")]
			private System.Collections.ListDictionaryInternal list;

			[Token(Token = "0x40017DC")]
			[FieldOffset(Offset = "0x18")]
			private DictionaryNode current;

			[Token(Token = "0x40017DD")]
			[FieldOffset(Offset = "0x20")]
			private int version;

			[Token(Token = "0x40017DE")]
			[FieldOffset(Offset = "0x24")]
			private bool isKeys;

			[Token(Token = "0x40017DF")]
			[FieldOffset(Offset = "0x25")]
			private bool start;

			[Token(Token = "0x170006CB")]
			public object Current
			{
				[Token(Token = "0x6002BE6")]
				[Address(RVA = "0x5451B80", Offset = "0x5450B80", VA = "0x5451B80", Slot = "5")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6002BE5")]
			[Address(RVA = "0x5451B20", Offset = "0x5450B20", VA = "0x5451B20")]
			public NodeKeyValueEnumerator(System.Collections.ListDictionaryInternal list, bool isKeys)
			{
			}

			[Token(Token = "0x6002BE7")]
			[Address(RVA = "0x5451BF0", Offset = "0x5450BF0", VA = "0x5451BF0", Slot = "4")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6002BE8")]
			[Address(RVA = "0x5451CA0", Offset = "0x5450CA0", VA = "0x5451CA0", Slot = "6")]
			public void Reset()
			{
			}
		}

		[Token(Token = "0x40017D9")]
		[FieldOffset(Offset = "0x10")]
		private System.Collections.ListDictionaryInternal list;

		[Token(Token = "0x40017DA")]
		[FieldOffset(Offset = "0x18")]
		private bool isKeys;

		[Token(Token = "0x170006C8")]
		private int System_002ECollections_002EICollection_002ECount
		{
			[Token(Token = "0x6002BE1")]
			[Address(RVA = "0x54519C0", Offset = "0x54509C0", VA = "0x54519C0", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170006C9")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6002BE2")]
			[Address(RVA = "0x5451A00", Offset = "0x5450A00", VA = "0x5451A00", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170006CA")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6002BE3")]
			[Address(RVA = "0x5451A10", Offset = "0x5450A10", VA = "0x5451A10", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002BDF")]
		[Address(RVA = "0x5450CD0", Offset = "0x544FCD0", VA = "0x5450CD0")]
		public NodeKeyValueCollection(System.Collections.ListDictionaryInternal list, bool isKeys)
		{
		}

		[Token(Token = "0x6002BE0")]
		[Address(RVA = "0x5451820", Offset = "0x5450820", VA = "0x5451820", Slot = "4")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6002BE4")]
		[Address(RVA = "0x5451A90", Offset = "0x5450A90", VA = "0x5451A90", Slot = "8")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x20005B5")]
	private class DictionaryNode
	{
		[Token(Token = "0x40017E0")]
		[FieldOffset(Offset = "0x10")]
		public object key;

		[Token(Token = "0x40017E1")]
		[FieldOffset(Offset = "0x18")]
		public object value;

		[Token(Token = "0x40017E2")]
		[FieldOffset(Offset = "0x20")]
		public DictionaryNode next;

		[Token(Token = "0x6002BE9")]
		[Address(RVA = "0x5450C50", Offset = "0x544FC50", VA = "0x5450C50")]
		public DictionaryNode()
		{
		}
	}

	[Token(Token = "0x40017D1")]
	[FieldOffset(Offset = "0x10")]
	private DictionaryNode head;

	[Token(Token = "0x40017D2")]
	[FieldOffset(Offset = "0x18")]
	private int version;

	[Token(Token = "0x40017D3")]
	[FieldOffset(Offset = "0x1C")]
	private int count;

	[NonSerialized]
	[Token(Token = "0x40017D4")]
	[FieldOffset(Offset = "0x20")]
	private object _syncRoot;

	[Token(Token = "0x170006BC")]
	public object this[object key]
	{
		[Token(Token = "0x6002BC8")]
		[Address(RVA = "0x5450A10", Offset = "0x544FA10", VA = "0x5450A10", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002BC9")]
		[Address(RVA = "0x5450AD0", Offset = "0x544FAD0", VA = "0x5450AD0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170006BD")]
	public int Count
	{
		[Token(Token = "0x6002BCA")]
		[Address(RVA = "0x5450C60", Offset = "0x544FC60", VA = "0x5450C60", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006BE")]
	public ICollection Keys
	{
		[Token(Token = "0x6002BCB")]
		[Address(RVA = "0x5450C70", Offset = "0x544FC70", VA = "0x5450C70", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006BF")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6002BCC")]
		[Address(RVA = "0x5450D00", Offset = "0x544FD00", VA = "0x5450D00", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006C0")]
	public bool IsFixedSize
	{
		[Token(Token = "0x6002BCD")]
		[Address(RVA = "0x5450D10", Offset = "0x544FD10", VA = "0x5450D10", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006C1")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6002BCE")]
		[Address(RVA = "0x5450D20", Offset = "0x544FD20", VA = "0x5450D20", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006C2")]
	public object SyncRoot
	{
		[Token(Token = "0x6002BCF")]
		[Address(RVA = "0x5450D30", Offset = "0x544FD30", VA = "0x5450D30", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006C3")]
	public ICollection Values
	{
		[Token(Token = "0x6002BD0")]
		[Address(RVA = "0x5450DB0", Offset = "0x544FDB0", VA = "0x5450DB0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002BC7")]
	[Address(RVA = "0x5450A00", Offset = "0x544FA00", VA = "0x5450A00")]
	public ListDictionaryInternal()
	{
	}

	[Token(Token = "0x6002BD1")]
	[Address(RVA = "0x5450E10", Offset = "0x544FE10", VA = "0x5450E10", Slot = "9")]
	public void Add(object key, object value)
	{
	}

	[Token(Token = "0x6002BD2")]
	[Address(RVA = "0x5450FC0", Offset = "0x544FFC0", VA = "0x5450FC0", Slot = "10")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002BD3")]
	[Address(RVA = "0x5450FF0", Offset = "0x544FFF0", VA = "0x5450FF0", Slot = "8")]
	public bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002BD4")]
	[Address(RVA = "0x54510B0", Offset = "0x54500B0", VA = "0x54510B0", Slot = "15")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002BD5")]
	[Address(RVA = "0x54512C0", Offset = "0x54502C0", VA = "0x54512C0", Slot = "13")]
	public IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002BD6")]
	[Address(RVA = "0x54513B0", Offset = "0x54503B0", VA = "0x54513B0", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002BD7")]
	[Address(RVA = "0x5451440", Offset = "0x5450440", VA = "0x5451440", Slot = "14")]
	public void Remove(object key)
	{
	}
}
