using System.Collections;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20000CC")]
[DefaultMember("Item")]
public class TraceListenerCollection : IList, ICollection, IEnumerable
{
	[Token(Token = "0x40003A4")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList list;

	[Token(Token = "0x170000CB")]
	public int Count
	{
		[Token(Token = "0x6000495")]
		[Address(RVA = "0x46013A0", Offset = "0x46013A0", VA = "0x46013A0", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000CC")]
	private object System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x600049B")]
		[Address(RVA = "0x4601690", Offset = "0x4601690", VA = "0x4601690", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x600049C")]
		[Address(RVA = "0x46016C0", Offset = "0x46016C0", VA = "0x46016C0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170000CD")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x600049D")]
		[Address(RVA = "0x46017C0", Offset = "0x46017C0", VA = "0x46017C0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CE")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x600049E")]
		[Address(RVA = "0x46017D0", Offset = "0x46017D0", VA = "0x46017D0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CF")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x60004A4")]
		[Address(RVA = "0x4601D30", Offset = "0x4601D30", VA = "0x4601D30", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D0")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x60004A5")]
		[Address(RVA = "0x4601D40", Offset = "0x4601D40", VA = "0x4601D40", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x46003D0", Offset = "0x46003D0", VA = "0x46003D0")]
	internal TraceListenerCollection()
	{
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x4600560", Offset = "0x4600560", VA = "0x4600560")]
	public int Add(TraceListener listener)
	{
		return default(int);
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x4601510", Offset = "0x4601510", VA = "0x4601510", Slot = "8")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x46007A0", Offset = "0x46007A0", VA = "0x46007A0", Slot = "19")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x46013D0", Offset = "0x46013D0", VA = "0x46013D0")]
	internal void InitializeListener(TraceListener listener)
	{
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x4601570", Offset = "0x4601570", VA = "0x4601570", Slot = "14")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x46017E0", Offset = "0x46017E0", VA = "0x46017E0", Slot = "6")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x46019D0", Offset = "0x46019D0", VA = "0x46019D0", Slot = "7")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x4601A00", Offset = "0x4601A00", VA = "0x4601A00", Slot = "11")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x4601A30", Offset = "0x4601A30", VA = "0x4601A30", Slot = "12")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x4601C10", Offset = "0x4601C10", VA = "0x4601C10", Slot = "13")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x4601D50", Offset = "0x4601D50", VA = "0x4601D50", Slot = "15")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}
}
