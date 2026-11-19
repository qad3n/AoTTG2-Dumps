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
[Token(Token = "0x2000208")]
public class StringCollection : IList, ICollection, IEnumerable
{
	[Token(Token = "0x4000761")]
	[FieldOffset(Offset = "0x10")]
	private readonly ArrayList data;

	[Token(Token = "0x170002F7")]
	public string this[int index]
	{
		[Token(Token = "0x6000E13")]
		[Address(RVA = "0x6282770", Offset = "0x6281770", VA = "0x6282770")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E14")]
		[Address(RVA = "0x62827C0", Offset = "0x62817C0", VA = "0x62827C0")]
		set
		{
		}
	}

	[Token(Token = "0x170002F8")]
	public int Count
	{
		[Token(Token = "0x6000E15")]
		[Address(RVA = "0x62827F0", Offset = "0x62817F0", VA = "0x62827F0", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002F9")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6000E16")]
		[Address(RVA = "0x6282820", Offset = "0x6281820", VA = "0x6282820", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002FA")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6000E17")]
		[Address(RVA = "0x6282830", Offset = "0x6281830", VA = "0x6282830", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002FB")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6000E1E")]
		[Address(RVA = "0x6282960", Offset = "0x6281960", VA = "0x6282960", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002FC")]
	public object SyncRoot
	{
		[Token(Token = "0x6000E21")]
		[Address(RVA = "0x62829D0", Offset = "0x62819D0", VA = "0x62829D0", Slot = "17")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170002FD")]
	[Token(Token = "0x6000E22")]
	[Address(RVA = "0x6282A00", Offset = "0x6281A00", VA = "0x6282A00", Slot = "4")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6000E23")]
	[Address(RVA = "0x6282A50", Offset = "0x6281A50", VA = "0x6282A50", Slot = "5")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x6000E18")]
	[Address(RVA = "0x6282840", Offset = "0x6281840", VA = "0x6282840")]
	public int Add(string value)
	{
		return default(int);
	}

	[Token(Token = "0x6000E19")]
	[Address(RVA = "0x6282870", Offset = "0x6281870", VA = "0x6282870", Slot = "8")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000E1A")]
	[Address(RVA = "0x62828A0", Offset = "0x62818A0", VA = "0x62828A0")]
	public bool Contains(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E1B")]
	[Address(RVA = "0x62828D0", Offset = "0x62818D0", VA = "0x62828D0")]
	public void CopyTo(string[] array, int index)
	{
	}

	[Token(Token = "0x6000E1C")]
	[Address(RVA = "0x6282900", Offset = "0x6281900", VA = "0x6282900")]
	public int IndexOf(string value)
	{
		return default(int);
	}

	[Token(Token = "0x6000E1D")]
	[Address(RVA = "0x6282930", Offset = "0x6281930", VA = "0x6282930")]
	public void Insert(int index, string value)
	{
	}

	[Token(Token = "0x6000E1F")]
	[Address(RVA = "0x6282970", Offset = "0x6281970", VA = "0x6282970")]
	public void Remove(string value)
	{
	}

	[Token(Token = "0x6000E20")]
	[Address(RVA = "0x62829A0", Offset = "0x62819A0", VA = "0x62829A0", Slot = "14")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000E24")]
	[Address(RVA = "0x6282AA0", Offset = "0x6281AA0", VA = "0x6282AA0", Slot = "6")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000E25")]
	[Address(RVA = "0x6282AF0", Offset = "0x6281AF0", VA = "0x6282AF0", Slot = "7")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E26")]
	[Address(RVA = "0x6282B40", Offset = "0x6281B40", VA = "0x6282B40", Slot = "11")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000E27")]
	[Address(RVA = "0x6282B90", Offset = "0x6281B90", VA = "0x6282B90", Slot = "12")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6000E28")]
	[Address(RVA = "0x6282BE0", Offset = "0x6281BE0", VA = "0x6282BE0", Slot = "13")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6000E29")]
	[Address(RVA = "0x6282C30", Offset = "0x6281C30", VA = "0x6282C30", Slot = "15")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000E2A")]
	[Address(RVA = "0x6282C60", Offset = "0x6281C60", VA = "0x6282C60", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000E2B")]
	[Address(RVA = "0x6282C90", Offset = "0x6281C90", VA = "0x6282C90")]
	public StringCollection()
	{
	}
}
