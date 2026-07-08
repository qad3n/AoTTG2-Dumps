using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UI.Collections;

[Token(Token = "0x2000089")]
internal class IndexedSet<T> : IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable
{
	[Token(Token = "0x4000273")]
	[FieldOffset(Offset = "0x0")]
	private readonly List<T> m_List;

	[Token(Token = "0x4000274")]
	[FieldOffset(Offset = "0x0")]
	private Dictionary<T, int> m_Dictionary;

	[Token(Token = "0x4000275")]
	[FieldOffset(Offset = "0x0")]
	private int m_EnabledObjectCount;

	[Token(Token = "0x17000158")]
	public int Count
	{
		[Token(Token = "0x600054E")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000159")]
	public int Capacity
	{
		[Token(Token = "0x600054F")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700015A")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000550")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700015B")]
	public T this[int index]
	{
		[Token(Token = "0x6000555")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000556")]
		set
		{
		}
	}

	[Token(Token = "0x6000543")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x6000544")]
	public void Add(T item, bool isActive)
	{
	}

	[Token(Token = "0x6000545")]
	public bool AddUnique(T item, bool isActive = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000546")]
	public bool EnableItem(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000547")]
	public bool DisableItem(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000548")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000549")]
	public IEnumerator<T> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600054A")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600054B")]
	public void Clear()
	{
	}

	[Token(Token = "0x600054C")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x600054D")]
	public void CopyTo(T[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000551")]
	public int IndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x6000552")]
	public void Insert(int index, T item)
	{
	}

	[Token(Token = "0x6000553")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000554")]
	private void Swap(int index1, int index2)
	{
	}

	[Token(Token = "0x6000557")]
	public void RemoveAll(Predicate<T> match)
	{
	}

	[Token(Token = "0x6000558")]
	public void Sort(Comparison<T> sortLayoutFunction)
	{
	}

	[Token(Token = "0x6000559")]
	public IndexedSet()
	{
	}
}
