// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Specialized.ReadOnlyList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Specialized;

[Token(Token = "0x200020E")]
internal sealed class ReadOnlyList : IList, ICollection, IEnumerable
{
	[Token(Token = "0x400076E")]
	[FieldOffset(Offset = "0x10")]
	private readonly IList _list;

	[Token(Token = "0x170002FE")]
	public int Count
	{
		[Token(Token = "0x6000E3A")]
		[Address(RVA = "0x6283950", Offset = "0x6282950", VA = "0x6283950", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002FF")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000E3B")]
		[Address(RVA = "0x62839F0", Offset = "0x62829F0", VA = "0x62839F0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000300")]
	public bool IsFixedSize
	{
		[Token(Token = "0x6000E3C")]
		[Address(RVA = "0x6283A00", Offset = "0x6282A00", VA = "0x6283A00", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000301")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6000E3D")]
		[Address(RVA = "0x6283A10", Offset = "0x6282A10", VA = "0x6283A10", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000302")]
	public object this[int index]
	{
		[Token(Token = "0x6000E3E")]
		[Address(RVA = "0x6283AB0", Offset = "0x6282AB0", VA = "0x6283AB0", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E3F")]
		[Address(RVA = "0x6283B60", Offset = "0x6282B60", VA = "0x6283B60", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000303")]
	public object SyncRoot
	{
		[Token(Token = "0x6000E40")]
		[Address(RVA = "0x6283BB0", Offset = "0x6282BB0", VA = "0x6283BB0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E39")]
	[Address(RVA = "0x6283800", Offset = "0x6282800", VA = "0x6283800")]
	internal ReadOnlyList(IList list)
	{
	}

	[Token(Token = "0x6000E41")]
	[Address(RVA = "0x6283C50", Offset = "0x6282C50", VA = "0x6283C50", Slot = "6")]
	public int Add(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000E42")]
	[Address(RVA = "0x6283CA0", Offset = "0x6282CA0", VA = "0x6283CA0", Slot = "8")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000E43")]
	[Address(RVA = "0x6283CF0", Offset = "0x6282CF0", VA = "0x6283CF0", Slot = "7")]
	public bool Contains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E44")]
	[Address(RVA = "0x6283DA0", Offset = "0x6282DA0", VA = "0x6283DA0", Slot = "15")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000E45")]
	[Address(RVA = "0x6283E50", Offset = "0x6282E50", VA = "0x6283E50", Slot = "19")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000E46")]
	[Address(RVA = "0x6283EE0", Offset = "0x6282EE0", VA = "0x6283EE0", Slot = "11")]
	public int IndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000E47")]
	[Address(RVA = "0x6283F90", Offset = "0x6282F90", VA = "0x6283F90", Slot = "12")]
	public void Insert(int index, object value)
	{
	}

	[Token(Token = "0x6000E48")]
	[Address(RVA = "0x6283FE0", Offset = "0x6282FE0", VA = "0x6283FE0", Slot = "13")]
	public void Remove(object value)
	{
	}

	[Token(Token = "0x6000E49")]
	[Address(RVA = "0x6284030", Offset = "0x6283030", VA = "0x6284030", Slot = "14")]
	public void RemoveAt(int index)
	{
	}
}
