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
[Token(Token = "0x2000604")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.ICollectionDebugView<>))]
public class List<T> : IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable, IList, ICollection, IReadOnlyList<T>, IReadOnlyCollection<T>
{
	[Serializable]
	[Token(Token = "0x2000605")]
	public struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40018A6")]
		[FieldOffset(Offset = "0x0")]
		private List<T> _list;

		[Token(Token = "0x40018A7")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x40018A8")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x40018A9")]
		[FieldOffset(Offset = "0x0")]
		private T _current;

		[Token(Token = "0x170007BF")]
		public T Current
		{
			[Token(Token = "0x6002F52")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x170007C0")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002F53")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002F4E")]
		internal Enumerator(List<T> list)
		{
		}

		[Token(Token = "0x6002F4F")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6002F50")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002F51")]
		private bool MoveNextRare()
		{
			return default(bool);
		}

		[Token(Token = "0x6002F54")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40018A1")]
	[FieldOffset(Offset = "0x0")]
	private T[] _items;

	[Token(Token = "0x40018A2")]
	[FieldOffset(Offset = "0x0")]
	private int _size;

	[Token(Token = "0x40018A3")]
	[FieldOffset(Offset = "0x0")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x40018A4")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[Token(Token = "0x40018A5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly T[] s_emptyArray;

	[Token(Token = "0x170007B6")]
	public int Capacity
	{
		[Token(Token = "0x6002F0D")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002F0E")]
		set
		{
		}
	}

	[Token(Token = "0x170007B7")]
	public int Count
	{
		[Token(Token = "0x6002F0F")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170007B8")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6002F10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007B9")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EIsReadOnly
	{
		[Token(Token = "0x6002F11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007BA")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6002F12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007BB")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002F13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007BC")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002F14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007BD")]
	public T this[int index]
	{
		[Token(Token = "0x6002F15")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6002F16")]
		set
		{
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170007BE")]
	[Token(Token = "0x6002F18")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6002F19")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x6002F0A")]
	public List()
	{
	}

	[Token(Token = "0x6002F0B")]
	public List(int capacity)
	{
	}

	[Token(Token = "0x6002F0C")]
	public List(IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x6002F17")]
	private static bool IsCompatibleObject(object value)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002F1A")]
	public void Add(T item)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002F1B")]
	private void AddWithResize(T item)
	{
	}

	[Token(Token = "0x6002F1C")]
	private int System_002ECollections_002EIList_002EAdd(object item)
	{
		return default(int);
	}

	[Token(Token = "0x6002F1D")]
	public void AddRange(IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x6002F1E")]
	public ReadOnlyCollection<T> AsReadOnly()
	{
		return null;
	}

	[Token(Token = "0x6002F1F")]
	public int BinarySearch(int index, int count, T item, IComparer<T> comparer)
	{
		return default(int);
	}

	[Token(Token = "0x6002F20")]
	public int BinarySearch(T item)
	{
		return default(int);
	}

	[Token(Token = "0x6002F21")]
	public int BinarySearch(T item, IComparer<T> comparer)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002F22")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002F23")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F24")]
	private bool System_002ECollections_002EIList_002EContains(object item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F25")]
	public List<TOutput> ConvertAll<TOutput>(Converter<T, TOutput> converter)
	{
		return null;
	}

	[Token(Token = "0x6002F26")]
	public void CopyTo(T[] array)
	{
	}

	[Token(Token = "0x6002F27")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002F28")]
	public void CopyTo(T[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002F29")]
	private void EnsureCapacity(int min)
	{
	}

	[Token(Token = "0x6002F2A")]
	public bool Exists(Predicate<T> match)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F2B")]
	public T Find(Predicate<T> match)
	{
		return (T)null;
	}

	[Token(Token = "0x6002F2C")]
	public List<T> FindAll(Predicate<T> match)
	{
		return null;
	}

	[Token(Token = "0x6002F2D")]
	public int FindIndex(Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6002F2E")]
	public int FindIndex(int startIndex, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6002F2F")]
	public int FindIndex(int startIndex, int count, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6002F30")]
	public T FindLast(Predicate<T> match)
	{
		return (T)null;
	}

	[Token(Token = "0x6002F31")]
	public int FindLastIndex(Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6002F32")]
	public int FindLastIndex(int startIndex, int count, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6002F33")]
	public void ForEach(Action<T> action)
	{
	}

	[Token(Token = "0x6002F34")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6002F35")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002F36")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002F37")]
	public List<T> GetRange(int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6002F38")]
	public int IndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x6002F39")]
	private int System_002ECollections_002EIList_002EIndexOf(object item)
	{
		return default(int);
	}

	[Token(Token = "0x6002F3A")]
	public void Insert(int index, T item)
	{
	}

	[Token(Token = "0x6002F3B")]
	private void System_002ECollections_002EIList_002EInsert(int index, object item)
	{
	}

	[Token(Token = "0x6002F3C")]
	public void InsertRange(int index, IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x6002F3D")]
	public int LastIndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x6002F3E")]
	public int LastIndexOf(T item, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002F3F")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F40")]
	private void System_002ECollections_002EIList_002ERemove(object item)
	{
	}

	[Token(Token = "0x6002F41")]
	public int RemoveAll(Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6002F42")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6002F43")]
	public void RemoveRange(int index, int count)
	{
	}

	[Token(Token = "0x6002F44")]
	public void Reverse()
	{
	}

	[Token(Token = "0x6002F45")]
	public void Reverse(int index, int count)
	{
	}

	[Token(Token = "0x6002F46")]
	public void Sort()
	{
	}

	[Token(Token = "0x6002F47")]
	public void Sort(IComparer<T> comparer)
	{
	}

	[Token(Token = "0x6002F48")]
	public void Sort(int index, int count, IComparer<T> comparer)
	{
	}

	[Token(Token = "0x6002F49")]
	public void Sort(Comparison<T> comparison)
	{
	}

	[Token(Token = "0x6002F4A")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6002F4B")]
	public void TrimExcess()
	{
	}

	[Token(Token = "0x6002F4C")]
	private void AddEnumerable(IEnumerable<T> enumerable)
	{
	}
}
