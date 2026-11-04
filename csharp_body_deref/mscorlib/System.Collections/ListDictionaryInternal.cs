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
[Token(Token = "0x20005D6")]
internal class ListDictionaryInternal : IDictionary, ICollection, IEnumerable
{
	[Token(Token = "0x20005D7")]
	private class NodeEnumerator : IDictionaryEnumerator, IEnumerator
	{
		[Token(Token = "0x400186E")]
		[FieldOffset(Offset = "0x10")]
		private System.Collections.ListDictionaryInternal list;

		[Token(Token = "0x400186F")]
		[FieldOffset(Offset = "0x18")]
		private DictionaryNode current;

		[Token(Token = "0x4001870")]
		[FieldOffset(Offset = "0x20")]
		private int version;

		[Token(Token = "0x4001871")]
		[FieldOffset(Offset = "0x24")]
		private bool start;

		[Token(Token = "0x170006C3")]
		public object Current
		{
			[Token(Token = "0x6002BFA")]
			[Address(RVA = "0x1AC2950", Offset = "0x1AC0F50", VA = "0x181AC2950", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170006C4")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x6002BFB")]
			[Address(RVA = "0x1AC2A20", Offset = "0x1AC1020", VA = "0x181AC2A20", Slot = "6")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x170006C5")]
		public object Key
		{
			[Token(Token = "0x6002BFC")]
			[Address(RVA = "0x1AC2AC0", Offset = "0x1AC10C0", VA = "0x181AC2AC0", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170006C6")]
		public object Value
		{
			[Token(Token = "0x6002BFD")]
			[Address(RVA = "0x1AC2B30", Offset = "0x1AC1130", VA = "0x181AC2B30", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002BF9")]
		[Address(RVA = "0x1AC28F0", Offset = "0x1AC0EF0", VA = "0x181AC28F0")]
		public NodeEnumerator(System.Collections.ListDictionaryInternal list)
		{
		}

		[Token(Token = "0x6002BFE")]
		[Address(RVA = "0x1AC2790", Offset = "0x1AC0D90", VA = "0x181AC2790", Slot = "7")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002BFF")]
		[Address(RVA = "0x1AC2860", Offset = "0x1AC0E60", VA = "0x181AC2860", Slot = "9")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x20005D8")]
	private class NodeKeyValueCollection : ICollection, IEnumerable
	{
		[Token(Token = "0x20005D9")]
		private class NodeKeyValueEnumerator : IEnumerator
		{
			[Token(Token = "0x4001874")]
			[FieldOffset(Offset = "0x10")]
			private System.Collections.ListDictionaryInternal list;

			[Token(Token = "0x4001875")]
			[FieldOffset(Offset = "0x18")]
			private DictionaryNode current;

			[Token(Token = "0x4001876")]
			[FieldOffset(Offset = "0x20")]
			private int version;

			[Token(Token = "0x4001877")]
			[FieldOffset(Offset = "0x24")]
			private bool isKeys;

			[Token(Token = "0x4001878")]
			[FieldOffset(Offset = "0x25")]
			private bool start;

			[Token(Token = "0x170006CA")]
			public object Current
			{
				[Token(Token = "0x6002C07")]
				[Address(RVA = "0x1AC30C0", Offset = "0x1AC16C0", VA = "0x181AC30C0", Slot = "5")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6002C06")]
			[Address(RVA = "0x1AC3050", Offset = "0x1AC1650", VA = "0x181AC3050")]
			public NodeKeyValueEnumerator(System.Collections.ListDictionaryInternal list, bool isKeys)
			{
			}

			[Token(Token = "0x6002C08")]
			[Address(RVA = "0x1AC2EF0", Offset = "0x1AC14F0", VA = "0x181AC2EF0", Slot = "4")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6002C09")]
			[Address(RVA = "0x1AC2FC0", Offset = "0x1AC15C0", VA = "0x181AC2FC0", Slot = "6")]
			public void Reset()
			{
			}
		}

		[Token(Token = "0x4001872")]
		[FieldOffset(Offset = "0x10")]
		private System.Collections.ListDictionaryInternal list;

		[Token(Token = "0x4001873")]
		[FieldOffset(Offset = "0x18")]
		private bool isKeys;

		[Token(Token = "0x170006C7")]
		private int System_002ECollections_002EICollection_002ECount
		{
			[Token(Token = "0x6002C02")]
			[Address(RVA = "0x1AC2D90", Offset = "0x1AC1390", VA = "0x181AC2D90", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170006C8")]
		private bool System_002ECollections_002EICollection_002EIsSynchronized
		{
			[Token(Token = "0x6002C03")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170006C9")]
		private object System_002ECollections_002EICollection_002ESyncRoot
		{
			[Token(Token = "0x6002C04")]
			[Address(RVA = "0x1AC2DD0", Offset = "0x1AC13D0", VA = "0x181AC2DD0", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002C00")]
		[Address(RVA = "0x16F5C50", Offset = "0x16F4250", VA = "0x1816F5C50")]
		public NodeKeyValueCollection(System.Collections.ListDictionaryInternal list, bool isKeys)
		{
		}

		[Token(Token = "0x6002C01")]
		[Address(RVA = "0x1AC2BA0", Offset = "0x1AC11A0", VA = "0x181AC2BA0", Slot = "4")]
		private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
		{
		}

		[Token(Token = "0x6002C05")]
		[Address(RVA = "0x1AC2E50", Offset = "0x1AC1450", VA = "0x181AC2E50", Slot = "8")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x20005DA")]
	private class DictionaryNode
	{
		[Token(Token = "0x4001879")]
		[FieldOffset(Offset = "0x10")]
		public object key;

		[Token(Token = "0x400187A")]
		[FieldOffset(Offset = "0x18")]
		public object value;

		[Token(Token = "0x400187B")]
		[FieldOffset(Offset = "0x20")]
		public DictionaryNode next;

		[Token(Token = "0x6002C0A")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public DictionaryNode()
		{
		}
	}

	[Token(Token = "0x400186A")]
	[FieldOffset(Offset = "0x10")]
	private DictionaryNode head;

	[Token(Token = "0x400186B")]
	[FieldOffset(Offset = "0x18")]
	private int version;

	[Token(Token = "0x400186C")]
	[FieldOffset(Offset = "0x1C")]
	private int count;

	[NonSerialized]
	[Token(Token = "0x400186D")]
	[FieldOffset(Offset = "0x20")]
	private object _syncRoot;

	[Token(Token = "0x170006BB")]
	public object this[object key]
	{
		[Token(Token = "0x6002BE9")]
		[Address(RVA = "0x1AC23E0", Offset = "0x1AC09E0", VA = "0x181AC23E0", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002BEA")]
		[Address(RVA = "0x1AC2600", Offset = "0x1AC0C00", VA = "0x181AC2600", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170006BC")]
	public int Count
	{
		[Token(Token = "0x6002BEB")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006BD")]
	public ICollection Keys
	{
		[Token(Token = "0x6002BEC")]
		[Address(RVA = "0x1AC24B0", Offset = "0x1AC0AB0", VA = "0x181AC24B0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006BE")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6002BED")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006BF")]
	public bool IsFixedSize
	{
		[Token(Token = "0x6002BEE")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006C0")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6002BEF")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006C1")]
	public object SyncRoot
	{
		[Token(Token = "0x6002BF0")]
		[Address(RVA = "0x1AC2520", Offset = "0x1AC0B20", VA = "0x181AC2520", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006C2")]
	public ICollection Values
	{
		[Token(Token = "0x6002BF1")]
		[Address(RVA = "0x1AC2590", Offset = "0x1AC0B90", VA = "0x181AC2590", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002BE8")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ListDictionaryInternal()
	{
	}

	[Token(Token = "0x6002BF2")]
	[Address(RVA = "0x1AC1C80", Offset = "0x1AC0280", VA = "0x181AC1C80", Slot = "9")]
	public void Add(object key, object value)
	{
	}

	[Token(Token = "0x6002BF3")]
	[Address(RVA = "0x1AC1E60", Offset = "0x1AC0460", VA = "0x181AC1E60", Slot = "10")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002BF4")]
	[Address(RVA = "0x1AC1E90", Offset = "0x1AC0490", VA = "0x181AC1E90", Slot = "8")]
	public bool Contains(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x6002BF5")]
	[Address(RVA = "0x1AC1F60", Offset = "0x1AC0560", VA = "0x181AC1F60", Slot = "15")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002BF6")]
	[Address(RVA = "0x1AC21B0", Offset = "0x1AC07B0", VA = "0x181AC21B0", Slot = "13")]
	public IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002BF7")]
	[Address(RVA = "0x1AC2350", Offset = "0x1AC0950", VA = "0x181AC2350", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002BF8")]
	[Address(RVA = "0x1AC2240", Offset = "0x1AC0840", VA = "0x181AC2240", Slot = "14")]
	public void Remove(object key)
	{
	}
}
