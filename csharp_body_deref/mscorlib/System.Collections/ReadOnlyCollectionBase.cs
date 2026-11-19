// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.ReadOnlyCollectionBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x20005BD")]
public abstract class ReadOnlyCollectionBase : ICollection, IEnumerable
{
	[Token(Token = "0x40017F3")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _list;

	[Token(Token = "0x170006DA")]
	protected ArrayList InnerList
	{
		[Token(Token = "0x6002C26")]
		[Address(RVA = "0x5453EC0", Offset = "0x5452EC0", VA = "0x5453EC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006DB")]
	public virtual int Count
	{
		[Token(Token = "0x6002C27")]
		[Address(RVA = "0x5453F40", Offset = "0x5452F40", VA = "0x5453F40", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006DC")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002C28")]
		[Address(RVA = "0x5453FD0", Offset = "0x5452FD0", VA = "0x5453FD0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006DD")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002C29")]
		[Address(RVA = "0x5454060", Offset = "0x5453060", VA = "0x5454060", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002C2A")]
	[Address(RVA = "0x54540F0", Offset = "0x54530F0", VA = "0x54540F0", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002C2B")]
	[Address(RVA = "0x5454190", Offset = "0x5453190", VA = "0x5454190", Slot = "10")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002C2C")]
	[Address(RVA = "0x5454220", Offset = "0x5453220", VA = "0x5454220")]
	protected ReadOnlyCollectionBase()
	{
	}
}
