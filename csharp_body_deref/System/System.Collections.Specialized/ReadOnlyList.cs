// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Specialized.ReadOnlyList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x48E7340", Offset = "0x48E7340", VA = "0x48E7340", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170004BF")]
	public bool IsReadOnly
	{
		[Token(Token = "0x60015B4")]
		[Address(RVA = "0x48E73E0", Offset = "0x48E73E0", VA = "0x48E73E0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C0")]
	public bool IsFixedSize
	{
		[Token(Token = "0x60015B5")]
		[Address(RVA = "0x48E73F0", Offset = "0x48E73F0", VA = "0x48E73F0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C1")]
	public bool IsSynchronized
	{
		[Token(Token = "0x60015B6")]
		[Address(RVA = "0x48E7400", Offset = "0x48E7400", VA = "0x48E7400", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C2")]
	public object this[int index]
	{
		[Token(Token = "0x60015B7")]
		[Address(RVA = "0x48E74A0", Offset = "0x48E74A0", VA = "0x48E74A0", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015B8")]
		[Address(RVA = "0x48E7550", Offset = "0x48E7550", VA = "0x48E7550", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170004C3")]
	public object SyncRoot
	{
		[Token(Token = "0x60015B9")]
		[Address(RVA = "0x48E75A0", Offset = "0x48E75A0", VA = "0x48E75A0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60015B2")]
	[Address(RVA = "0x48E71F0", Offset = "0x48E71F0", VA = "0x48E71F0")]
	internal ReadOnlyList(IList list)
	{
	}

	[Token(Token = "0x60015BA")]
	[Address(RVA = "0x48E7640", Offset = "0x48E7640", VA = "0x48E7640", Slot = "6")]
	public int Add(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60015BB")]
	[Address(RVA = "0x48E7690", Offset = "0x48E7690", VA = "0x48E7690", Slot = "8")]
	public void Clear()
	{
	}

	[Token(Token = "0x60015BC")]
	[Address(RVA = "0x48E76E0", Offset = "0x48E76E0", VA = "0x48E76E0", Slot = "7")]
	public bool Contains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60015BD")]
	[Address(RVA = "0x48E7790", Offset = "0x48E7790", VA = "0x48E7790", Slot = "15")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60015BE")]
	[Address(RVA = "0x48E7840", Offset = "0x48E7840", VA = "0x48E7840", Slot = "19")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60015BF")]
	[Address(RVA = "0x48E78D0", Offset = "0x48E78D0", VA = "0x48E78D0", Slot = "11")]
	public int IndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60015C0")]
	[Address(RVA = "0x48E7980", Offset = "0x48E7980", VA = "0x48E7980", Slot = "12")]
	public void Insert(int index, object value)
	{
	}

	[Token(Token = "0x60015C1")]
	[Address(RVA = "0x48E79D0", Offset = "0x48E79D0", VA = "0x48E79D0", Slot = "13")]
	public void Remove(object value)
	{
	}

	[Token(Token = "0x60015C2")]
	[Address(RVA = "0x48E7A20", Offset = "0x48E7A20", VA = "0x48E7A20", Slot = "14")]
	public void RemoveAt(int index)
	{
	}
}
