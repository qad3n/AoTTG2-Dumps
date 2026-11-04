// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Specialized.ReadOnlyList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Specialized;

[Token(Token = "0x200024D")]
internal sealed class ReadOnlyList : IList, ICollection, IEnumerable
{
	[Token(Token = "0x400083D")]
	[FieldOffset(Offset = "0x10")]
	private readonly IList _list;

	[Token(Token = "0x1700032D")]
	public int Count
	{
		[Token(Token = "0x6000FFA")]
		[Address(RVA = "0x28DAC40", Offset = "0x28D9240", VA = "0x1828DAC40", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700032E")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000FFB")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700032F")]
	public bool IsFixedSize
	{
		[Token(Token = "0x6000FFC")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000330")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6000FFD")]
		[Address(RVA = "0x28DAC90", Offset = "0x28D9290", VA = "0x1828DAC90", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000331")]
	public object this[int index]
	{
		[Token(Token = "0x6000FFE")]
		[Address(RVA = "0x28DACE0", Offset = "0x28D92E0", VA = "0x1828DACE0", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FFF")]
		[Address(RVA = "0x28DAD90", Offset = "0x28D9390", VA = "0x1828DAD90", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000332")]
	public object SyncRoot
	{
		[Token(Token = "0x6001000")]
		[Address(RVA = "0x28DAD40", Offset = "0x28D9340", VA = "0x1828DAD40", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FF9")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	internal ReadOnlyList(IList list)
	{
	}

	[Token(Token = "0x6001001")]
	[Address(RVA = "0x28DA8C0", Offset = "0x28D8EC0", VA = "0x1828DA8C0", Slot = "6")]
	public int Add(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6001002")]
	[Address(RVA = "0x28DA910", Offset = "0x28D8F10", VA = "0x1828DA910", Slot = "8")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001003")]
	[Address(RVA = "0x28DA960", Offset = "0x28D8F60", VA = "0x1828DA960", Slot = "7")]
	public bool Contains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001004")]
	[Address(RVA = "0x28DAA30", Offset = "0x28D9030", VA = "0x1828DAA30", Slot = "15")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001005")]
	[Address(RVA = "0x28DAAA0", Offset = "0x28D90A0", VA = "0x1828DAAA0", Slot = "19")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001006")]
	[Address(RVA = "0x28DAAF0", Offset = "0x28D90F0", VA = "0x1828DAAF0", Slot = "11")]
	public int IndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6001007")]
	[Address(RVA = "0x28DAB50", Offset = "0x28D9150", VA = "0x1828DAB50", Slot = "12")]
	public void Insert(int index, object value)
	{
	}

	[Token(Token = "0x6001008")]
	[Address(RVA = "0x28DABF0", Offset = "0x28D91F0", VA = "0x1828DABF0", Slot = "13")]
	public void Remove(object value)
	{
	}

	[Token(Token = "0x6001009")]
	[Address(RVA = "0x28DABA0", Offset = "0x28D91A0", VA = "0x1828DABA0", Slot = "14")]
	public void RemoveAt(int index)
	{
	}
}
