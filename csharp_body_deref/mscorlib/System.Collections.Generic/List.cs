using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000655")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.ICollectionDebugView<>))]
[DebuggerDisplay("Count = {Count}")]
public class List<T> : IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable, IList, ICollection, IReadOnlyList<T>, IReadOnlyCollection<T>
{
	[Serializable]
	[Token(Token = "0x2000656")]
	public struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4001B39")]
		[FieldOffset(Offset = "0x0")]
		private List<T> _list;

		[Token(Token = "0x4001B3A")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x4001B3B")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x4001B3C")]
		[FieldOffset(Offset = "0x0")]
		private T _current;

		[Token(Token = "0x17000831")]
		public T Current
		{
			[Token(Token = "0x600325C")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000832")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600325D")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003258")]
		internal Enumerator(List<T> list)
		{
		}

		[Token(Token = "0x6003259")]
		public void Dispose()
		{
		}

		[Token(Token = "0x600325A")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600325B")]
		private bool MoveNextRare()
		{
			return default(bool);
		}

		[Token(Token = "0x600325E")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001B33")]
	private const int DefaultCapacity = 4;

	[Token(Token = "0x4001B34")]
	[FieldOffset(Offset = "0x0")]
	private T[] _items;

	[Token(Token = "0x4001B35")]
	[FieldOffset(Offset = "0x0")]
	private int _size;

	[Token(Token = "0x4001B36")]
	[FieldOffset(Offset = "0x0")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x4001B37")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[Token(Token = "0x4001B38")]
	[FieldOffset(Offset = "0x0")]
	private static readonly T[] s_emptyArray;

	[Token(Token = "0x17000828")]
	public int Capacity
	{
		[Token(Token = "0x600321D")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600321E")]
		set
		{
		}
	}

	[Token(Token = "0x17000829")]
	public int Count
	{
		[Token(Token = "0x600321F")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700082A")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6003220")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700082B")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EIsReadOnly
	{
		[Token(Token = "0x6003221")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700082C")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6003222")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700082D")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6003223")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700082E")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6003224")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700082F")]
	public T this[int index]
	{
		[Token(Token = "0x6003225")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6003226")]
		set
		{
		}
	}

	[Token(Token = "0x17000830")]
	private object System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x6003228")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003229")]
		set
		{
		}
	}

	[Token(Token = "0x600321A")]
	public List()
	{
	}

	[Token(Token = "0x600321B")]
	public List(int capacity)
	{
	}

	[Token(Token = "0x600321C")]
	public List(IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x6003227")]
	private static bool IsCompatibleObject(object value)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600322A")]
	public void Add(T item)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600322B")]
	private void AddWithResize(T item)
	{
	}

	[Token(Token = "0x600322C")]
	private int System_002ECollections_002EIList_002EAdd(object item)
	{
		return default(int);
	}

	[Token(Token = "0x600322D")]
	public void AddRange(IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x600322E")]
	public ReadOnlyCollection<T> AsReadOnly()
	{
		return null;
	}

	[Token(Token = "0x600322F")]
	public int BinarySearch(int index, int count, T item, IComparer<T> comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6003230")]
	public int BinarySearch(T item)
	{
		return default(int);
	}

	[Token(Token = "0x6003231")]
	public int BinarySearch(T item, IComparer<T> comparer)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6003232")]
	public void Clear()
	{
	}

	[Token(Token = "0x6003233")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6003234")]
	private bool System_002ECollections_002EIList_002EContains(object item)
	{
		return default(bool);
	}

	[Token(Token = "0x6003235")]
	public List<TOutput> ConvertAll<TOutput>(Converter<T, TOutput> converter)
	{
		return null;
	}

	[Token(Token = "0x6003236")]
	public void CopyTo(T[] array)
	{
	}

	[Token(Token = "0x6003237")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6003238")]
	public void CopyTo(T[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6003239")]
	private void EnsureCapacity(int min)
	{
	}

	[Token(Token = "0x600323A")]
	public bool Exists(Predicate<T> match)
	{
		return default(bool);
	}

	[Token(Token = "0x600323B")]
	public T Find(Predicate<T> match)
	{
		return (T)null;
	}

	[Token(Token = "0x600323C")]
	public List<T> FindAll(Predicate<T> match)
	{
		return null;
	}

	[Token(Token = "0x600323D")]
	public int FindIndex(Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x600323E")]
	public int FindIndex(int startIndex, int count, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x600323F")]
	public void ForEach(Action<T> action)
	{
	}

	[Token(Token = "0x6003240")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6003241")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6003242")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6003243")]
	public List<T> GetRange(int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6003244")]
	public int IndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x6003245")]
	private int System_002ECollections_002EIList_002EIndexOf(object item)
	{
		return default(int);
	}

	[Token(Token = "0x6003246")]
	public void Insert(int index, T item)
	{
	}

	[Token(Token = "0x6003247")]
	private void System_002ECollections_002EIList_002EInsert(int index, object item)
	{
	}

	[Token(Token = "0x6003248")]
	public void InsertRange(int index, IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x6003249")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x600324A")]
	private void System_002ECollections_002EIList_002ERemove(object item)
	{
	}

	[Token(Token = "0x600324B")]
	public int RemoveAll(Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x600324C")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x600324D")]
	public void RemoveRange(int index, int count)
	{
	}

	[Token(Token = "0x600324E")]
	public void Reverse()
	{
	}

	[Token(Token = "0x600324F")]
	public void Reverse(int index, int count)
	{
	}

	[Token(Token = "0x6003250")]
	public void Sort()
	{
	}

	[Token(Token = "0x6003251")]
	public void Sort(IComparer<T> comparer)
	{
	}

	[Token(Token = "0x6003252")]
	public void Sort(int index, int count, IComparer<T> comparer)
	{
	}

	[Token(Token = "0x6003253")]
	public void Sort(Comparison<T> comparison)
	{
	}

	[Token(Token = "0x6003254")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6003255")]
	public void TrimExcess()
	{
	}

	[Token(Token = "0x6003256")]
	private void AddEnumerable(IEnumerable<T> enumerable)
	{
	}
}
