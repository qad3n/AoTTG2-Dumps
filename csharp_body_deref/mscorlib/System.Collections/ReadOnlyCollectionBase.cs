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
[Token(Token = "0x20005E2")]
public abstract class ReadOnlyCollectionBase : ICollection, IEnumerable
{
	[Token(Token = "0x400188C")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _list;

	[Token(Token = "0x170006DB")]
	protected ArrayList InnerList
	{
		[Token(Token = "0x6002C49")]
		[Address(RVA = "0x1AC44A0", Offset = "0x1AC2AA0", VA = "0x181AC44A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006DC")]
	public virtual int Count
	{
		[Token(Token = "0x6002C4A")]
		[Address(RVA = "0x1AC4410", Offset = "0x1AC2A10", VA = "0x181AC4410", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006DD")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002C4B")]
		[Address(RVA = "0x1AC42F0", Offset = "0x1AC28F0", VA = "0x181AC42F0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006DE")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002C4C")]
		[Address(RVA = "0x1AC4380", Offset = "0x1AC2980", VA = "0x181AC4380", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002C4D")]
	[Address(RVA = "0x1AC4240", Offset = "0x1AC2840", VA = "0x181AC4240", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002C4E")]
	[Address(RVA = "0x1AC41B0", Offset = "0x1AC27B0", VA = "0x181AC41B0", Slot = "10")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002C4F")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected ReadOnlyCollectionBase()
	{
	}
}
