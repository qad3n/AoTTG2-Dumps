// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.List
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000629")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.ICollectionDebugView<>))]
[DebuggerDisplay("Count = {Count}")]
public class List<T> : IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable, IList, ICollection, IReadOnlyList<T>, IReadOnlyCollection<T>
{
	[Serializable]
	[Token(Token = "0x200062A")]
	public struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400193F")]
		[FieldOffset(Offset = "0x0")]
		private List<T> _list;

		[Token(Token = "0x4001940")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x4001941")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x4001942")]
		[FieldOffset(Offset = "0x0")]
		private T _current;

		[Token(Token = "0x170007C0")]
		public T Current
		{
			[Token(Token = "0x6002F73")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x170007C1")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002F74")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002F6F")]
		internal Enumerator(List<T> list)
		{
		}

		[Token(Token = "0x6002F70")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6002F71")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002F72")]
		private bool MoveNextRare()
		{
			return default(bool);
		}

		[Token(Token = "0x6002F75")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400193A")]
	[FieldOffset(Offset = "0x0")]
	private T[] _items;

	[Token(Token = "0x400193B")]
	[FieldOffset(Offset = "0x0")]
	private int _size;

	[Token(Token = "0x400193C")]
	[FieldOffset(Offset = "0x0")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x400193D")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[Token(Token = "0x400193E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly T[] s_emptyArray;

	[Token(Token = "0x170007B7")]
	public int Capacity
	{
		[Token(Token = "0x6002F32")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002F33")]
		set
		{
		}
	}

	[Token(Token = "0x170007B8")]
	public int Count
	{
		[Token(Token = "0x6002F34")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170007B9")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6002F35")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007BA")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EIsReadOnly
	{
		[Token(Token = "0x6002F36")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007BB")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6002F37")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007BC")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002F38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007BD")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002F39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007BE")]
	public T this[int index]
	{
		[Token(Token = "0x6002F3A")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6002F3B")]
		set
		{
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170007BF")]
	[Token(Token = "0x6002F3D")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6002F3E")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x6002F2F")]
	public List()
	{
	}

	[Token(Token = "0x6002F30")]
	public List(int capacity)
	{
	}

	[Token(Token = "0x6002F31")]
	public List(IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x6002F3C")]
	private static bool IsCompatibleObject(object value)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002F3F")]
	public void Add(T item)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002F40")]
	private void AddWithResize(T item)
	{
	}

	[Token(Token = "0x6002F41")]
	private int System_002ECollections_002EIList_002EAdd(object item)
	{
		return default(int);
	}

	[Token(Token = "0x6002F42")]
	public void AddRange(IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x6002F43")]
	public ReadOnlyCollection<T> AsReadOnly()
	{
		return null;
	}

	[Token(Token = "0x6002F44")]
	public int BinarySearch(int index, int count, T item, IComparer<T> comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6002F45")]
	public int BinarySearch(T item)
	{
		return default(int);
	}

	[Token(Token = "0x6002F46")]
	public int BinarySearch(T item, IComparer<T> comparer)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002F47")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002F48")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F49")]
	private bool System_002ECollections_002EIList_002EContains(object item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F4A")]
	public List<TOutput> ConvertAll<TOutput>(Converter<T, TOutput> converter)
	{
		return null;
	}

	[Token(Token = "0x6002F4B")]
	public void CopyTo(T[] array)
	{
	}

	[Token(Token = "0x6002F4C")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002F4D")]
	public void CopyTo(T[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002F4E")]
	private void EnsureCapacity(int min)
	{
	}

	[Token(Token = "0x6002F4F")]
	public bool Exists(Predicate<T> match)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F50")]
	public T Find(Predicate<T> match)
	{
		return (T)null;
	}

	[Token(Token = "0x6002F51")]
	public List<T> FindAll(Predicate<T> match)
	{
		return null;
	}

	[Token(Token = "0x6002F52")]
	public int FindIndex(Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6002F53")]
	public int FindIndex(int startIndex, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6002F54")]
	public int FindIndex(int startIndex, int count, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6002F55")]
	public T FindLast(Predicate<T> match)
	{
		return (T)null;
	}

	[Token(Token = "0x6002F56")]
	public void ForEach(Action<T> action)
	{
	}

	[Token(Token = "0x6002F57")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6002F58")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002F59")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002F5A")]
	public List<T> GetRange(int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6002F5B")]
	public int IndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x6002F5C")]
	private int System_002ECollections_002EIList_002EIndexOf(object item)
	{
		return default(int);
	}

	[Token(Token = "0x6002F5D")]
	public void Insert(int index, T item)
	{
	}

	[Token(Token = "0x6002F5E")]
	private void System_002ECollections_002EIList_002EInsert(int index, object item)
	{
	}

	[Token(Token = "0x6002F5F")]
	public void InsertRange(int index, IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x6002F60")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F61")]
	private void System_002ECollections_002EIList_002ERemove(object item)
	{
	}

	[Token(Token = "0x6002F62")]
	public int RemoveAll(Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6002F63")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6002F64")]
	public void RemoveRange(int index, int count)
	{
	}

	[Token(Token = "0x6002F65")]
	public void Reverse()
	{
	}

	[Token(Token = "0x6002F66")]
	public void Reverse(int index, int count)
	{
	}

	[Token(Token = "0x6002F67")]
	public void Sort()
	{
	}

	[Token(Token = "0x6002F68")]
	public void Sort(IComparer<T> comparer)
	{
	}

	[Token(Token = "0x6002F69")]
	public void Sort(int index, int count, IComparer<T> comparer)
	{
	}

	[Token(Token = "0x6002F6A")]
	public void Sort(Comparison<T> comparison)
	{
	}

	[Token(Token = "0x6002F6B")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6002F6C")]
	public void TrimExcess()
	{
	}

	[Token(Token = "0x6002F6D")]
	private void AddEnumerable(IEnumerable<T> enumerable)
	{
	}
}
