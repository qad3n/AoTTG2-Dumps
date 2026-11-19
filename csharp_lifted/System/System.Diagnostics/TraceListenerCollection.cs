// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.TraceListenerCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20000CD")]
[DefaultMember("Item")]
public class TraceListenerCollection : IList, ICollection, IEnumerable
{
	[Token(Token = "0x40003A7")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList list;

	[Token(Token = "0x170000D5")]
	public int Count
	{
		[Token(Token = "0x60004BF")]
		[Address(RVA = "0x6202730", Offset = "0x6201730", VA = "0x6202730", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170000D6")]
	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x6202A10", Offset = "0x6201A10", VA = "0x6202A10", Slot = "4")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x6202A40", Offset = "0x6201A40", VA = "0x6202A40", Slot = "5")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x170000D7")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x60004C7")]
		[Address(RVA = "0x6202B40", Offset = "0x6201B40", VA = "0x6202B40", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D8")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x60004C8")]
		[Address(RVA = "0x6202B50", Offset = "0x6201B50", VA = "0x6202B50", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D9")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x60004CE")]
		[Address(RVA = "0x6203070", Offset = "0x6202070", VA = "0x6203070", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DA")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x60004CF")]
		[Address(RVA = "0x6203080", Offset = "0x6202080", VA = "0x6203080", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x6201820", Offset = "0x6200820", VA = "0x6201820")]
	internal TraceListenerCollection()
	{
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x62019B0", Offset = "0x62009B0", VA = "0x62019B0")]
	public int Add(TraceListener listener)
	{
		return default(int);
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x62028A0", Offset = "0x62018A0", VA = "0x62028A0", Slot = "8")]
	public void Clear()
	{
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x6201BD0", Offset = "0x6200BD0", VA = "0x6201BD0", Slot = "19")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x6202760", Offset = "0x6201760", VA = "0x6202760")]
	internal void InitializeListener(TraceListener listener)
	{
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x6202900", Offset = "0x6201900", VA = "0x6202900", Slot = "14")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x6202B60", Offset = "0x6201B60", VA = "0x6202B60", Slot = "6")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x6202D30", Offset = "0x6201D30", VA = "0x6202D30", Slot = "7")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x6202D60", Offset = "0x6201D60", VA = "0x6202D60", Slot = "11")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x6202D90", Offset = "0x6201D90", VA = "0x6202D90", Slot = "12")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x6202F60", Offset = "0x6201F60", VA = "0x6202F60", Slot = "13")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x6203090", Offset = "0x6202090", VA = "0x6203090", Slot = "15")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}
}
