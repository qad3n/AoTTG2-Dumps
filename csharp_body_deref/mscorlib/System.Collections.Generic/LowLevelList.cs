// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.LowLevelList
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x200063B")]
[DebuggerDisplay("Count = {Count}")]
internal class LowLevelList<T>
{
	[Token(Token = "0x4001967")]
	[FieldOffset(Offset = "0x0")]
	protected T[] _items;

	[Token(Token = "0x4001968")]
	[FieldOffset(Offset = "0x0")]
	protected int _size;

	[Token(Token = "0x4001969")]
	[FieldOffset(Offset = "0x0")]
	protected int _version;

	[Token(Token = "0x400196A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly T[] s_emptyArray;

	[Token(Token = "0x170007D1")]
	public int Capacity
	{
		[Token(Token = "0x6002FD2")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002FD3")]
		set
		{
		}
	}

	[Token(Token = "0x170007D2")]
	public int Count
	{
		[Token(Token = "0x6002FD4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170007D3")]
	public T this[int index]
	{
		[Token(Token = "0x6002FD5")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6002FD6")]
		set
		{
		}
	}

	[Token(Token = "0x6002FD0")]
	public LowLevelList()
	{
	}

	[Token(Token = "0x6002FD1")]
	public LowLevelList(int capacity)
	{
	}

	[Token(Token = "0x6002FD7")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x6002FD8")]
	private void EnsureCapacity(int min)
	{
	}

	[Token(Token = "0x6002FD9")]
	public void AddRange(IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x6002FDA")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002FDB")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002FDC")]
	public void CopyTo(T[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002FDD")]
	public int IndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x6002FDE")]
	public void Insert(int index, T item)
	{
	}

	[Token(Token = "0x6002FDF")]
	public void InsertRange(int index, IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x6002FE0")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002FE1")]
	public int RemoveAll(Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6002FE2")]
	public void RemoveAt(int index)
	{
	}
}
