// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.ReadOnlyCollectionBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Serializable]
[Token(Token = "0x2000253")]
public sealed class ReadOnlyCollectionBuilder<T> : IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable, IList, ICollection
{
	[Serializable]
	[Token(Token = "0x2000254")]
	private class Enumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000444")]
		[FieldOffset(Offset = "0x0")]
		private readonly ReadOnlyCollectionBuilder<T> _builder;

		[Token(Token = "0x4000445")]
		[FieldOffset(Offset = "0x0")]
		private readonly int _version;

		[Token(Token = "0x4000446")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x4000447")]
		[FieldOffset(Offset = "0x0")]
		private T _current;

		[Token(Token = "0x1700025A")]
		public T Current
		{
			[Token(Token = "0x6000B94")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x1700025B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000B96")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000B93")]
		internal Enumerator(ReadOnlyCollectionBuilder<T> builder)
		{
		}

		[Token(Token = "0x6000B95")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000B97")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000B98")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000441")]
	[FieldOffset(Offset = "0x0")]
	private T[] _items;

	[Token(Token = "0x4000442")]
	[FieldOffset(Offset = "0x0")]
	private int _size;

	[Token(Token = "0x4000443")]
	[FieldOffset(Offset = "0x0")]
	private int _version;

	[Token(Token = "0x17000251")]
	public int Capacity
	{
		[Token(Token = "0x6000B73")]
		set
		{
		}
	}

	[Token(Token = "0x17000252")]
	public int Count
	{
		[Token(Token = "0x6000B74")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000253")]
	public T this[int index]
	{
		[Token(Token = "0x6000B78")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000B79")]
		set
		{
		}
	}

	[Token(Token = "0x17000254")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000B7E")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000255")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6000B82")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000256")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6000B87")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000257")]
	[Token(Token = "0x6000B89")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6000B8A")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x17000258")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000B8C")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000259")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000B8D")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B71")]
	public ReadOnlyCollectionBuilder()
	{
	}

	[Token(Token = "0x6000B72")]
	public ReadOnlyCollectionBuilder(int capacity)
	{
	}

	[Token(Token = "0x6000B75")]
	public int IndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x6000B76")]
	public void Insert(int index, T item)
	{
	}

	[Token(Token = "0x6000B77")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000B7A")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x6000B7B")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000B7C")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B7D")]
	public void CopyTo(T[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000B7F")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B80")]
	public IEnumerator<T> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000B81")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000B83")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B84")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B85")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B86")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6000B88")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6000B8B")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000B8E")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6000B8F")]
	public ReadOnlyCollection<T> ToReadOnlyCollection()
	{
		return null;
	}

	[Token(Token = "0x6000B90")]
	private void EnsureCapacity(int min)
	{
	}

	[Token(Token = "0x6000B91")]
	private static bool IsCompatibleObject(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B92")]
	private static void ValidateNullValue(object value, string argument)
	{
	}
}
