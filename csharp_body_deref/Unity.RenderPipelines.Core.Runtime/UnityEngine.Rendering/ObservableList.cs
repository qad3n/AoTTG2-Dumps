// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ObservableList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000093")]
public class ObservableList<T> : IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable
{
	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x0")]
	private IList<T> m_List;

	[Token(Token = "0x17000064")]
	public T this[int index]
	{
		[Token(Token = "0x6000634")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000635")]
		set
		{
		}
	}

	[Token(Token = "0x17000065")]
	public int Count
	{
		[Token(Token = "0x6000636")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000066")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000637")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000005")]
	public event ListChangedEventHandler<T> ItemAdded
	{
		[Token(Token = "0x6000630")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000631")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000006")]
	public event ListChangedEventHandler<T> ItemRemoved
	{
		[Token(Token = "0x6000632")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000633")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000638")]
	public ObservableList()
	{
	}

	[Token(Token = "0x6000639")]
	public ObservableList(int capacity)
	{
	}

	[Token(Token = "0x600063A")]
	public ObservableList(IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x600063B")]
	private void OnEvent(ListChangedEventHandler<T> e, int index, T item)
	{
	}

	[Token(Token = "0x600063C")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x600063D")]
	public int IndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x600063E")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x600063F")]
	public void Add(params T[] items)
	{
	}

	[Token(Token = "0x6000640")]
	public void Insert(int index, T item)
	{
	}

	[Token(Token = "0x6000641")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000642")]
	public int Remove(params T[] items)
	{
		return default(int);
	}

	[Token(Token = "0x6000643")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000644")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000645")]
	public void CopyTo(T[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000646")]
	public IEnumerator<T> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000647")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
