using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000029")]
public class NonNullableList<T> : IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable, IList, ICollection
{
	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x0")]
	private readonly List<T> list;

	[Token(Token = "0x1700003C")]
	public T this[int index]
	{
		[Token(Token = "0x6000147")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000148")]
		set
		{
		}
	}

	[Token(Token = "0x1700003D")]
	private object System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x6000149")]
		get
		{
			return null;
		}
		[Token(Token = "0x600014A")]
		set
		{
		}
	}

	[Token(Token = "0x1700003E")]
	public int Count
	{
		[Token(Token = "0x600014B")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003F")]
	public bool IsSynchronized
	{
		[Token(Token = "0x600014C")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000040")]
	public object SyncRoot
	{
		[Token(Token = "0x600014D")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000041")]
	public bool IsReadOnly
	{
		[Token(Token = "0x600014E")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000042")]
	public bool IsFixedSize
	{
		[Token(Token = "0x600014F")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000144")]
	public NonNullableList()
	{
	}

	[Token(Token = "0x6000145")]
	public NonNullableList(int capacity)
	{
	}

	[Token(Token = "0x6000146")]
	public NonNullableList(IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x6000150")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000151")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x6000152")]
	public int Add(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000153")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000154")]
	public bool Contains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000155")]
	public int IndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000156")]
	public void Insert(int index, object value)
	{
	}

	[Token(Token = "0x6000157")]
	public void Remove(object value)
	{
	}

	[Token(Token = "0x6000158")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000159")]
	public void CopyTo(T[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x600015A")]
	public IEnumerator<T> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600015B")]
	public int IndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x600015C")]
	public void Insert(int index, T item)
	{
	}

	[Token(Token = "0x600015D")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x600015E")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x600015F")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000160")]
	public void AddRange(IEnumerable<T> collection)
	{
	}
}
