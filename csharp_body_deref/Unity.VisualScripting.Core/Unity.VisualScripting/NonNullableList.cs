// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.NonNullableList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000029")]
public class NonNullableList<T> : IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable, IList, ICollection
{
	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x0")]
	private readonly List<T> list;

	[Token(Token = "0x1700003D")]
	public T this[int index]
	{
		[Token(Token = "0x600014B")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x600014C")]
		set
		{
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x1700003E")]
	[Token(Token = "0x600014D")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x600014E")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x1700003F")]
	public int Count
	{
		[Token(Token = "0x600014F")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000040")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6000150")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000041")]
	public object SyncRoot
	{
		[Token(Token = "0x6000151")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000042")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000152")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000043")]
	public bool IsFixedSize
	{
		[Token(Token = "0x6000153")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000148")]
	public NonNullableList()
	{
	}

	[Token(Token = "0x6000149")]
	public NonNullableList(int capacity)
	{
	}

	[Token(Token = "0x600014A")]
	public NonNullableList(IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x6000154")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000155")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x6000156")]
	public int Add(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000157")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000158")]
	public bool Contains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000159")]
	public int IndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600015A")]
	public void Insert(int index, object value)
	{
	}

	[Token(Token = "0x600015B")]
	public void Remove(object value)
	{
	}

	[Token(Token = "0x600015C")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x600015D")]
	public void CopyTo(T[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x600015E")]
	public IEnumerator<T> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600015F")]
	public int IndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x6000160")]
	public void Insert(int index, T item)
	{
	}

	[Token(Token = "0x6000161")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000162")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000163")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000164")]
	public void AddRange(IEnumerable<T> collection)
	{
	}
}
