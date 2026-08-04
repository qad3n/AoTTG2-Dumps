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
[Token(Token = "0x2000635")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.ICollectionDebugView<>))]
public class ReadOnlyCollection<T> : IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable, IList, ICollection, IReadOnlyList<T>, IReadOnlyCollection<T>
{
	[Token(Token = "0x4001AFB")]
	[FieldOffset(Offset = "0x0")]
	private IList<T> list;

	[NonSerialized]
	[Token(Token = "0x4001AFC")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[Token(Token = "0x170007D0")]
	public int Count
	{
		[Token(Token = "0x6003111")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170007D1")]
	public T this[int index]
	{
		[Token(Token = "0x6003112")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x170007D2")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EIsReadOnly
	{
		[Token(Token = "0x6003117")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007D3")]
	private T System_002ECollections_002EGeneric_002EIList_003CT_003E_002EItem
	{
		[Token(Token = "0x6003118")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6003119")]
		set
		{
		}
	}

	[Token(Token = "0x170007D4")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6003120")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007D5")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6003121")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007D6")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6003123")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007D7")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6003124")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007D8")]
	private object System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x6003125")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003126")]
		set
		{
		}
	}

	[Token(Token = "0x6003110")]
	public ReadOnlyCollection(IList<T> list)
	{
	}

	[Token(Token = "0x6003113")]
	public bool Contains(T value)
	{
		return default(bool);
	}

	[Token(Token = "0x6003114")]
	public void CopyTo(T[] array, int index)
	{
	}

	[Token(Token = "0x6003115")]
	public IEnumerator<T> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6003116")]
	public int IndexOf(T value)
	{
		return default(int);
	}

	[Token(Token = "0x600311A")]
	private void System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EAdd(T value)
	{
	}

	[Token(Token = "0x600311B")]
	private void System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EClear()
	{
	}

	[Token(Token = "0x600311C")]
	private void System_002ECollections_002EGeneric_002EIList_003CT_003E_002EInsert(int index, T value)
	{
	}

	[Token(Token = "0x600311D")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002ERemove(T value)
	{
		return default(bool);
	}

	[Token(Token = "0x600311E")]
	private void System_002ECollections_002EGeneric_002EIList_003CT_003E_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x600311F")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6003122")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6003127")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6003128")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6003129")]
	private static bool IsCompatibleObject(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600312A")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600312B")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600312C")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x600312D")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x600312E")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}
}
