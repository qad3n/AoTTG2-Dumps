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
		[Address(RVA = "0x45C1060", Offset = "0x45C1060", VA = "0x45C1060")]
		get
		{
			return null;
		}
		[Token(Token = "0x600158D")]
		[Address(RVA = "0x45C10B0", Offset = "0x45C10B0", VA = "0x45C10B0")]
		set
		{
		}
	}

	[Token(Token = "0x170004B8")]
	public int Count
	{
		[Token(Token = "0x600158E")]
		[Address(RVA = "0x45C10E0", Offset = "0x45C10E0", VA = "0x45C10E0", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170004B9")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x600158F")]
		[Address(RVA = "0x45C1110", Offset = "0x45C1110", VA = "0x45C1110", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004BA")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6001590")]
		[Address(RVA = "0x45C1120", Offset = "0x45C1120", VA = "0x45C1120", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004BB")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6001597")]
		[Address(RVA = "0x45C1250", Offset = "0x45C1250", VA = "0x45C1250", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004BC")]
	public object SyncRoot
	{
		[Token(Token = "0x600159A")]
		[Address(RVA = "0x45C12C0", Offset = "0x45C12C0", VA = "0x45C12C0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004BD")]
	private object System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x600159B")]
		[Address(RVA = "0x45C12F0", Offset = "0x45C12F0", VA = "0x45C12F0", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x600159C")]
		[Address(RVA = "0x45C1340", Offset = "0x45C1340", VA = "0x45C1340", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x6001591")]
	[Address(RVA = "0x45C1130", Offset = "0x45C1130", VA = "0x45C1130")]
	public int Add(string value)
	{
		return default(int);
	}

	[Token(Token = "0x6001592")]
	[Address(RVA = "0x45C1160", Offset = "0x45C1160", VA = "0x45C1160", Slot = "8")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001593")]
	[Address(RVA = "0x45C1190", Offset = "0x45C1190", VA = "0x45C1190")]
	public bool Contains(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001594")]
	[Address(RVA = "0x45C11C0", Offset = "0x45C11C0", VA = "0x45C11C0")]
	public void CopyTo(string[] array, int index)
	{
	}

	[Token(Token = "0x6001595")]
	[Address(RVA = "0x45C11F0", Offset = "0x45C11F0", VA = "0x45C11F0")]
	public int IndexOf(string value)
	{
		return default(int);
	}

	[Token(Token = "0x6001596")]
	[Address(RVA = "0x45C1220", Offset = "0x45C1220", VA = "0x45C1220")]
	public void Insert(int index, string value)
	{
	}

	[Token(Token = "0x6001598")]
	[Address(RVA = "0x45C1260", Offset = "0x45C1260", VA = "0x45C1260")]
	public void Remove(string value)
	{
	}

	[Token(Token = "0x6001599")]
	[Address(RVA = "0x45C1290", Offset = "0x45C1290", VA = "0x45C1290", Slot = "14")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x600159D")]
	[Address(RVA = "0x45C1390", Offset = "0x45C1390", VA = "0x45C1390", Slot = "6")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600159E")]
	[Address(RVA = "0x45C13E0", Offset = "0x45C13E0", VA = "0x45C13E0", Slot = "7")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600159F")]
	[Address(RVA = "0x45C1430", Offset = "0x45C1430", VA = "0x45C1430", Slot = "11")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60015A0")]
	[Address(RVA = "0x45C1480", Offset = "0x45C1480", VA = "0x45C1480", Slot = "12")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x60015A1")]
	[Address(RVA = "0x45C14D0", Offset = "0x45C14D0", VA = "0x45C14D0", Slot = "13")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x60015A2")]
	[Address(RVA = "0x45C1520", Offset = "0x45C1520", VA = "0x45C1520", Slot = "15")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60015A3")]
	[Address(RVA = "0x45C1550", Offset = "0x45C1550", VA = "0x45C1550", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60015A4")]
	[Address(RVA = "0x45C1580", Offset = "0x45C1580", VA = "0x45C1580")]
	public StringCollection()
	{
	}
}
