using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000667")]
[DebuggerDisplay("Count = {Count}")]
internal class LowLevelList<T>
{
	[Token(Token = "0x4001B64")]
	private const int _defaultCapacity = 4;

	[Token(Token = "0x4001B65")]
	[FieldOffset(Offset = "0x0")]
	protected T[] _items;

	[Token(Token = "0x4001B66")]
	[FieldOffset(Offset = "0x0")]
	protected int _size;

	[Token(Token = "0x4001B67")]
	[FieldOffset(Offset = "0x0")]
	protected int _version;

	[Token(Token = "0x4001B68")]
	[FieldOffset(Offset = "0x0")]
	private static readonly T[] s_emptyArray;

	[Token(Token = "0x17000842")]
	public int Capacity
	{
		[Token(Token = "0x60032B7")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60032B8")]
		set
		{
		}
	}

	[Token(Token = "0x17000843")]
	public int Count
	{
		[Token(Token = "0x60032B9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000844")]
	public T this[int index]
	{
		[Token(Token = "0x60032BA")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x60032BB")]
		set
		{
		}
	}

	[Token(Token = "0x60032B5")]
	public LowLevelList()
	{
	}

	[Token(Token = "0x60032B6")]
	public LowLevelList(int capacity)
	{
	}

	[Token(Token = "0x60032BC")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x60032BD")]
	private void EnsureCapacity(int min)
	{
	}

	[Token(Token = "0x60032BE")]
	public void AddRange(IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x60032BF")]
	public void Clear()
	{
	}

	[Token(Token = "0x60032C0")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x60032C1")]
	public void CopyTo(T[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x60032C2")]
	public int IndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x60032C3")]
	public void Insert(int index, T item)
	{
	}

	[Token(Token = "0x60032C4")]
	public void InsertRange(int index, IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x60032C5")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x60032C6")]
	public int RemoveAll(Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x60032C7")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x60032C8")]
	public T[] ToArray()
	{
		return null;
	}
}
