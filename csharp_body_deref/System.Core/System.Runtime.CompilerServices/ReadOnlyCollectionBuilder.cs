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
[Token(Token = "0x2000254")]
public sealed class ReadOnlyCollectionBuilder<T> : IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable, IList, ICollection
{
	[Serializable]
	[Token(Token = "0x2000255")]
	private class Enumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400044D")]
		[FieldOffset(Offset = "0x0")]
		private readonly ReadOnlyCollectionBuilder<T> _builder;

		[Token(Token = "0x400044E")]
		[FieldOffset(Offset = "0x0")]
		private readonly int _version;

		[Token(Token = "0x400044F")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x4000450")]
		[FieldOffset(Offset = "0x0")]
		private T _current;

		[Token(Token = "0x1700025C")]
		public T Current
		{
			[Token(Token = "0x6000B9F")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x1700025D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000BA1")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000B9E")]
		internal Enumerator(ReadOnlyCollectionBuilder<T> builder)
		{
		}

		[Token(Token = "0x6000BA0")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000BA2")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000BA3")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400044A")]
	[FieldOffset(Offset = "0x0")]
	private T[] _items;

	[Token(Token = "0x400044B")]
	[FieldOffset(Offset = "0x0")]
	private int _size;

	[Token(Token = "0x400044C")]
	[FieldOffset(Offset = "0x0")]
	private int _version;

	[Token(Token = "0x17000253")]
	public int Capacity
	{
		[Token(Token = "0x6000B7E")]
		set
		{
		}
	}

	[Token(Token = "0x17000254")]
	public int Count
	{
		[Token(Token = "0x6000B7F")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000255")]
	public T this[int index]
	{
		[Token(Token = "0x6000B83")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000B84")]
		set
		{
		}
	}

	[Token(Token = "0x17000256")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000B89")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000257")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6000B8D")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000258")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6000B92")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000259")]
	[Token(Token = "0x6000B94")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6000B95")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x1700025A")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000B97")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700025B")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000B98")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B7C")]
	public ReadOnlyCollectionBuilder()
	{
	}

	[Token(Token = "0x6000B7D")]
	public ReadOnlyCollectionBuilder(int capacity)
	{
	}

	[Token(Token = "0x6000B80")]
	public int IndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x6000B81")]
	public void Insert(int index, T item)
	{
	}

	[Token(Token = "0x6000B82")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000B85")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x6000B86")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000B87")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B88")]
	public void CopyTo(T[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000B8A")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B8B")]
	public IEnumerator<T> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000B8C")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000B8E")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B8F")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B90")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B91")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6000B93")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6000B96")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000B99")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6000B9A")]
	public ReadOnlyCollection<T> ToReadOnlyCollection()
	{
		return null;
	}

	[Token(Token = "0x6000B9B")]
	private void EnsureCapacity(int min)
	{
	}

	[Token(Token = "0x6000B9C")]
	private static bool IsCompatibleObject(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B9D")]
	private static void ValidateNullValue(object value, string argument)
	{
	}
}
