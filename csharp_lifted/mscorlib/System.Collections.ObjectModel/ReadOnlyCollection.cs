// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.ObjectModel.ReadOnlyCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Collections.ObjectModel;

[Serializable]
[Token(Token = "0x20005E4")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.ICollectionDebugView<>))]
public class ReadOnlyCollection<T> : IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable, IList, ICollection, IReadOnlyList<T>, IReadOnlyCollection<T>
{
	[Token(Token = "0x400186E")]
	[FieldOffset(Offset = "0x0")]
	private IList<T> list;

	[NonSerialized]
	[Token(Token = "0x400186F")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[Token(Token = "0x1700075E")]
	public int Count
	{
		[Token(Token = "0x6002DFF")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700075F")]
	public T this[int index]
	{
		[Token(Token = "0x6002E00")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x17000760")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EIsReadOnly
	{
		[Token(Token = "0x6002E05")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.Generic.IList<T>.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000761")]
	[Token(Token = "0x6002E06")]
	private T System_002ECollections_002EGeneric_002EIList_003CT_003E_002Eget_Item(int index)
	{
		return (T)null;
	}

	[Token(Token = "0x6002E07")]
	private void System_002ECollections_002EGeneric_002EIList_003CT_003E_002Eset_Item(int index, T value)
	{
	}

	[Token(Token = "0x17000762")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002E0E")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000763")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002E0F")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000764")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6002E11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000765")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6002E12")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000766")]
	[Token(Token = "0x6002E13")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6002E14")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x6002DFE")]
	public ReadOnlyCollection(IList<T> list)
	{
	}

	[Token(Token = "0x6002E01")]
	public bool Contains(T value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E02")]
	public void CopyTo(T[] array, int index)
	{
	}

	[Token(Token = "0x6002E03")]
	public IEnumerator<T> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002E04")]
	public int IndexOf(T value)
	{
		return default(int);
	}

	[Token(Token = "0x6002E08")]
	private void System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EAdd(T value)
	{
	}

	[Token(Token = "0x6002E09")]
	private void System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EClear()
	{
	}

	[Token(Token = "0x6002E0A")]
	private void System_002ECollections_002EGeneric_002EIList_003CT_003E_002EInsert(int index, T value)
	{
	}

	[Token(Token = "0x6002E0B")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002ERemove(T value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E0C")]
	private void System_002ECollections_002EGeneric_002EIList_003CT_003E_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6002E0D")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002E10")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002E15")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002E16")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6002E17")]
	private static bool IsCompatibleObject(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E18")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E19")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002E1A")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6002E1B")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6002E1C")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}
}
