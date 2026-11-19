// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.Collections.IndexedSet
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UI.Collections;

[Token(Token = "0x2000087")]
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

	[Token(Token = "0x17000159")]
	public int Count
	{
		[Token(Token = "0x600055A")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700015A")]
	public int Capacity
	{
		[Token(Token = "0x600055B")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700015B")]
	public bool IsReadOnly
	{
		[Token(Token = "0x600055C")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700015C")]
	public T this[int index]
	{
		[Token(Token = "0x6000561")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000562")]
		set
		{
		}
	}

	[Token(Token = "0x600054F")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x6000550")]
	public void Add(T item, bool isActive)
	{
	}

	[Token(Token = "0x6000551")]
	public bool AddUnique(T item, bool isActive = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000552")]
	public bool EnableItem(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000553")]
	public bool DisableItem(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000554")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000555")]
	public IEnumerator<T> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000556")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000557")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000558")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000559")]
	public void CopyTo(T[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x600055D")]
	public int IndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x600055E")]
	public void Insert(int index, T item)
	{
	}

	[Token(Token = "0x600055F")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000560")]
	private void Swap(int index1, int index2)
	{
	}

	[Token(Token = "0x6000563")]
	public void RemoveAll(Predicate<T> match)
	{
	}

	[Token(Token = "0x6000564")]
	public void Sort(Comparison<T> sortLayoutFunction)
	{
	}

	[Token(Token = "0x6000565")]
	public IndexedSet()
	{
	}
}
