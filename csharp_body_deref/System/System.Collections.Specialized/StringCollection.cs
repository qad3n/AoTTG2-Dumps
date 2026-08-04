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
[Token(Token = "0x200033C")]
public class StringCollection : IList, ICollection, IEnumerable
{
	[Token(Token = "0x4000EF9")]
	[FieldOffset(Offset = "0x10")]
	private readonly ArrayList data;

	[Token(Token = "0x170004B7")]
	public string this[int index]
	{
		[Token(Token = "0x600158C")]
		[Address(RVA = "0x48E6160", Offset = "0x48E6160", VA = "0x48E6160")]
		get
		{
			return null;
		}
		[Token(Token = "0x600158D")]
		[Address(RVA = "0x48E61B0", Offset = "0x48E61B0", VA = "0x48E61B0")]
		set
		{
		}
	}

	[Token(Token = "0x170004B8")]
	public int Count
	{
		[Token(Token = "0x600158E")]
		[Address(RVA = "0x48E61E0", Offset = "0x48E61E0", VA = "0x48E61E0", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170004B9")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x600158F")]
		[Address(RVA = "0x48E6210", Offset = "0x48E6210", VA = "0x48E6210", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004BA")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6001590")]
		[Address(RVA = "0x48E6220", Offset = "0x48E6220", VA = "0x48E6220", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004BB")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6001597")]
		[Address(RVA = "0x48E6350", Offset = "0x48E6350", VA = "0x48E6350", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004BC")]
	public object SyncRoot
	{
		[Token(Token = "0x600159A")]
		[Address(RVA = "0x48E63C0", Offset = "0x48E63C0", VA = "0x48E63C0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004BD")]
	private object System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x600159B")]
		[Address(RVA = "0x48E63F0", Offset = "0x48E63F0", VA = "0x48E63F0", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x600159C")]
		[Address(RVA = "0x48E6440", Offset = "0x48E6440", VA = "0x48E6440", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x6001591")]
	[Address(RVA = "0x48E6230", Offset = "0x48E6230", VA = "0x48E6230")]
	public int Add(string value)
	{
		return default(int);
	}

	[Token(Token = "0x6001592")]
	[Address(RVA = "0x48E6260", Offset = "0x48E6260", VA = "0x48E6260", Slot = "8")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001593")]
	[Address(RVA = "0x48E6290", Offset = "0x48E6290", VA = "0x48E6290")]
	public bool Contains(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001594")]
	[Address(RVA = "0x48E62C0", Offset = "0x48E62C0", VA = "0x48E62C0")]
	public void CopyTo(string[] array, int index)
	{
	}

	[Token(Token = "0x6001595")]
	[Address(RVA = "0x48E62F0", Offset = "0x48E62F0", VA = "0x48E62F0")]
	public int IndexOf(string value)
	{
		return default(int);
	}

	[Token(Token = "0x6001596")]
	[Address(RVA = "0x48E6320", Offset = "0x48E6320", VA = "0x48E6320")]
	public void Insert(int index, string value)
	{
	}

	[Token(Token = "0x6001598")]
	[Address(RVA = "0x48E6360", Offset = "0x48E6360", VA = "0x48E6360")]
	public void Remove(string value)
	{
	}

	[Token(Token = "0x6001599")]
	[Address(RVA = "0x48E6390", Offset = "0x48E6390", VA = "0x48E6390", Slot = "14")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x600159D")]
	[Address(RVA = "0x48E6490", Offset = "0x48E6490", VA = "0x48E6490", Slot = "6")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600159E")]
	[Address(RVA = "0x48E64E0", Offset = "0x48E64E0", VA = "0x48E64E0", Slot = "7")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600159F")]
	[Address(RVA = "0x48E6530", Offset = "0x48E6530", VA = "0x48E6530", Slot = "11")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60015A0")]
	[Address(RVA = "0x48E6580", Offset = "0x48E6580", VA = "0x48E6580", Slot = "12")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x60015A1")]
	[Address(RVA = "0x48E65D0", Offset = "0x48E65D0", VA = "0x48E65D0", Slot = "13")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x60015A2")]
	[Address(RVA = "0x48E6620", Offset = "0x48E6620", VA = "0x48E6620", Slot = "15")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60015A3")]
	[Address(RVA = "0x48E6650", Offset = "0x48E6650", VA = "0x48E6650", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60015A4")]
	[Address(RVA = "0x48E6680", Offset = "0x48E6680", VA = "0x48E6680")]
	public StringCollection()
	{
	}
}
