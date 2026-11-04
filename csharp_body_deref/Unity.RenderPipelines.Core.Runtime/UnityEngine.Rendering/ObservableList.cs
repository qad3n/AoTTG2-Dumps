// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ObservableList
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200005E")]
public class ObservableList<T> : IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable
{
	[Token(Token = "0x400014E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private List<T> m_List;

	[Token(Token = "0x400014F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Comparison<T> m_Comparison;

	[Token(Token = "0x4000150")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private ListChangedEventHandler<T> m_ItemAdded;

	[Token(Token = "0x4000151")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private ListChangedEventHandler<T> m_ItemRemoved;

	[Token(Token = "0x17000044")]
	public T this[int index]
	{
		[Token(Token = "0x6000550")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000551")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public int Count
	{
		[Token(Token = "0x6000552")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000046")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000553")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000003")]
	public event ListChangedEventHandler<T> ItemAdded
	{
		[Token(Token = "0x600054C")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600054D")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	public event ListChangedEventHandler<T> ItemRemoved
	{
		[Token(Token = "0x600054E")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600054F")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000554")]
	public ObservableList()
	{
	}

	[Token(Token = "0x6000555")]
	public ObservableList(int capacity, [Optional] Comparison<T> comparison)
	{
	}

	[Token(Token = "0x6000556")]
	public ObservableList(IEnumerable<T> collection, [Optional] Comparison<T> comparison)
	{
	}

	[Token(Token = "0x6000557")]
	private void OnEvent(ListChangedEventHandler<T> e, int index, T item)
	{
	}

	[Token(Token = "0x6000558")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000559")]
	public int IndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x600055A")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x600055B")]
	public void Add(params T[] items)
	{
	}

	[Token(Token = "0x600055C")]
	public void Insert(int index, T item)
	{
	}

	[Token(Token = "0x600055D")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x600055E")]
	public int Remove(params T[] items)
	{
		return default(int);
	}

	[Token(Token = "0x600055F")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000560")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000561")]
	public void CopyTo(T[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000562")]
	public IEnumerator<T> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000563")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000564")]
	private void Sort()
	{
	}
}
