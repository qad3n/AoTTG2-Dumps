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
[Token(Token = "0x2000609")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.ICollectionDebugView<>))]
[DebuggerDisplay("Count = {Count}")]
public class ReadOnlyCollection<T> : IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable, IList, ICollection, IReadOnlyList<T>, IReadOnlyCollection<T>
{
	[Token(Token = "0x4001907")]
	[FieldOffset(Offset = "0x0")]
	private IList<T> list;

	[NonSerialized]
	[Token(Token = "0x4001908")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[Token(Token = "0x1700075F")]
	public int Count
	{
		[Token(Token = "0x6002E24")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000760")]
	public T this[int index]
	{
		[Token(Token = "0x6002E25")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x17000761")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EIsReadOnly
	{
		[Token(Token = "0x6002E2A")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.Generic.IList<T>.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000762")]
	[Token(Token = "0x6002E2B")]
	private T System_002ECollections_002EGeneric_002EIList_003CT_003E_002Eget_Item(int index)
	{
		return (T)null;
	}

	[Token(Token = "0x6002E2C")]
	private void System_002ECollections_002EGeneric_002EIList_003CT_003E_002Eset_Item(int index, T value)
	{
	}

	[Token(Token = "0x17000763")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002E33")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000764")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002E34")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000765")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6002E36")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000766")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6002E37")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000767")]
	[Token(Token = "0x6002E38")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6002E39")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x6002E23")]
	public ReadOnlyCollection(IList<T> list)
	{
	}

	[Token(Token = "0x6002E26")]
	public bool Contains(T value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E27")]
	public void CopyTo(T[] array, int index)
	{
	}

	[Token(Token = "0x6002E28")]
	public IEnumerator<T> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002E29")]
	public int IndexOf(T value)
	{
		return default(int);
	}

	[Token(Token = "0x6002E2D")]
	private void System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EAdd(T value)
	{
	}

	[Token(Token = "0x6002E2E")]
	private void System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EClear()
	{
	}

	[Token(Token = "0x6002E2F")]
	private void System_002ECollections_002EGeneric_002EIList_003CT_003E_002EInsert(int index, T value)
	{
	}

	[Token(Token = "0x6002E30")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002ERemove(T value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E31")]
	private void System_002ECollections_002EGeneric_002EIList_003CT_003E_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6002E32")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002E35")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002E3A")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002E3B")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6002E3C")]
	private static bool IsCompatibleObject(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E3D")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E3E")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002E3F")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6002E40")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6002E41")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}
}
