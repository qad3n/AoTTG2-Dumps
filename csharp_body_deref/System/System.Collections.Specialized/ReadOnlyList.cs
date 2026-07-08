using Il2CppDummyDll;

namespace System.Collections.Specialized;

[Token(Token = "0x2000342")]
internal sealed class ReadOnlyList : IList, ICollection, IEnumerable
{
	[Token(Token = "0x4000F06")]
	[FieldOffset(Offset = "0x10")]
	private readonly IList _list;

	[Token(Token = "0x170004BE")]
	public int Count
	{
		[Token(Token = "0x60015B3")]
		[Address(RVA = "0x45C2240", Offset = "0x45C2240", VA = "0x45C2240", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170004BF")]
	public bool IsReadOnly
	{
		[Token(Token = "0x60015B4")]
		[Address(RVA = "0x45C22E0", Offset = "0x45C22E0", VA = "0x45C22E0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C0")]
	public bool IsFixedSize
	{
		[Token(Token = "0x60015B5")]
		[Address(RVA = "0x45C22F0", Offset = "0x45C22F0", VA = "0x45C22F0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C1")]
	public bool IsSynchronized
	{
		[Token(Token = "0x60015B6")]
		[Address(RVA = "0x45C2300", Offset = "0x45C2300", VA = "0x45C2300", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C2")]
	public object this[int index]
	{
		[Token(Token = "0x60015B7")]
		[Address(RVA = "0x45C23A0", Offset = "0x45C23A0", VA = "0x45C23A0", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015B8")]
		[Address(RVA = "0x45C2450", Offset = "0x45C2450", VA = "0x45C2450", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170004C3")]
	public object SyncRoot
	{
		[Token(Token = "0x60015B9")]
		[Address(RVA = "0x45C24A0", Offset = "0x45C24A0", VA = "0x45C24A0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60015B2")]
	[Address(RVA = "0x45C20F0", Offset = "0x45C20F0", VA = "0x45C20F0")]
	internal ReadOnlyList(IList list)
	{
	}

	[Token(Token = "0x60015BA")]
	[Address(RVA = "0x45C2540", Offset = "0x45C2540", VA = "0x45C2540", Slot = "6")]
	public int Add(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60015BB")]
	[Address(RVA = "0x45C2590", Offset = "0x45C2590", VA = "0x45C2590", Slot = "8")]
	public void Clear()
	{
	}

	[Token(Token = "0x60015BC")]
	[Address(RVA = "0x45C25E0", Offset = "0x45C25E0", VA = "0x45C25E0", Slot = "7")]
	public bool Contains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60015BD")]
	[Address(RVA = "0x45C2690", Offset = "0x45C2690", VA = "0x45C2690", Slot = "15")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60015BE")]
	[Address(RVA = "0x45C2740", Offset = "0x45C2740", VA = "0x45C2740", Slot = "19")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60015BF")]
	[Address(RVA = "0x45C27D0", Offset = "0x45C27D0", VA = "0x45C27D0", Slot = "11")]
	public int IndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60015C0")]
	[Address(RVA = "0x45C2880", Offset = "0x45C2880", VA = "0x45C2880", Slot = "12")]
	public void Insert(int index, object value)
	{
	}

	[Token(Token = "0x60015C1")]
	[Address(RVA = "0x45C28D0", Offset = "0x45C28D0", VA = "0x45C28D0", Slot = "13")]
	public void Remove(object value)
	{
	}

	[Token(Token = "0x60015C2")]
	[Address(RVA = "0x45C2920", Offset = "0x45C2920", VA = "0x45C2920", Slot = "14")]
	public void RemoveAt(int index)
	{
	}
}
