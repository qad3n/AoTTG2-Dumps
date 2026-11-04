// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Specialized.StringCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Specialized;

[Serializable]
[Token(Token = "0x2000247")]
public class StringCollection : IList, ICollection, IEnumerable
{
	[Token(Token = "0x4000830")]
	[FieldOffset(Offset = "0x10")]
	private readonly ArrayList data;

	[Token(Token = "0x17000326")]
	public string this[int index]
	{
		[Token(Token = "0x6000FD3")]
		[Address(RVA = "0x28DC430", Offset = "0x28DAA30", VA = "0x1828DC430")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FD4")]
		[Address(RVA = "0x28DC550", Offset = "0x28DAB50", VA = "0x1828DC550")]
		set
		{
		}
	}

	[Token(Token = "0x17000327")]
	public int Count
	{
		[Token(Token = "0x6000FD5")]
		[Address(RVA = "0x1AB8C80", Offset = "0x1AB7280", VA = "0x181AB8C80", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000328")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6000FD6")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000329")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6000FD7")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700032A")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6000FDE")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700032B")]
	public object SyncRoot
	{
		[Token(Token = "0x6000FE1")]
		[Address(RVA = "0x1AB84F0", Offset = "0x1AB6AF0", VA = "0x181AB84F0", Slot = "17")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x1700032C")]
	[Token(Token = "0x6000FE2")]
	[Address(RVA = "0x28DC430", Offset = "0x28DAA30", VA = "0x1828DC430", Slot = "4")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6000FE3")]
	[Address(RVA = "0x28DC480", Offset = "0x28DAA80", VA = "0x1828DC480", Slot = "5")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x6000FD8")]
	[Address(RVA = "0x28DC1C0", Offset = "0x28DA7C0", VA = "0x1828DC1C0")]
	public int Add(string value)
	{
		return default(int);
	}

	[Token(Token = "0x6000FD9")]
	[Address(RVA = "0x2547410", Offset = "0x2545A10", VA = "0x182547410", Slot = "8")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000FDA")]
	[Address(RVA = "0x1AB8620", Offset = "0x1AB6C20", VA = "0x181AB8620")]
	public bool Contains(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FDB")]
	[Address(RVA = "0x1AB84C0", Offset = "0x1AB6AC0", VA = "0x181AB84C0")]
	public void CopyTo(string[] array, int index)
	{
	}

	[Token(Token = "0x6000FDC")]
	[Address(RVA = "0x1AB8650", Offset = "0x1AB6C50", VA = "0x181AB8650")]
	public int IndexOf(string value)
	{
		return default(int);
	}

	[Token(Token = "0x6000FDD")]
	[Address(RVA = "0x28DC1F0", Offset = "0x28DA7F0", VA = "0x1828DC1F0")]
	public void Insert(int index, string value)
	{
	}

	[Token(Token = "0x6000FDF")]
	[Address(RVA = "0x27D1560", Offset = "0x27CFB60", VA = "0x1827D1560")]
	public void Remove(string value)
	{
	}

	[Token(Token = "0x6000FE0")]
	[Address(RVA = "0x28DC220", Offset = "0x28DA820", VA = "0x1828DC220", Slot = "14")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000FE4")]
	[Address(RVA = "0x28DC250", Offset = "0x28DA850", VA = "0x1828DC250", Slot = "6")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000FE5")]
	[Address(RVA = "0x28DC2B0", Offset = "0x28DA8B0", VA = "0x1828DC2B0", Slot = "7")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FE6")]
	[Address(RVA = "0x28DC310", Offset = "0x28DA910", VA = "0x1828DC310", Slot = "11")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000FE7")]
	[Address(RVA = "0x28DC370", Offset = "0x28DA970", VA = "0x1828DC370", Slot = "12")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6000FE8")]
	[Address(RVA = "0x28DC3D0", Offset = "0x28DA9D0", VA = "0x1828DC3D0", Slot = "13")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6000FE9")]
	[Address(RVA = "0x1AB84C0", Offset = "0x1AB6AC0", VA = "0x181AB84C0", Slot = "15")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x19244D0", Offset = "0x1922AD0", VA = "0x1819244D0", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x28DC4E0", Offset = "0x28DAAE0", VA = "0x1828DC4E0")]
	public StringCollection()
	{
	}
}
