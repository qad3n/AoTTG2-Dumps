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
[Token(Token = "0x200060E")]
public abstract class ReadOnlyCollectionBase : ICollection, IEnumerable
{
	[Token(Token = "0x4001A71")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _list;

	[Token(Token = "0x1700074C")]
	protected ArrayList InnerList
	{
		[Token(Token = "0x6002F38")]
		[Address(RVA = "0x3C80DD0", Offset = "0x3C80DD0", VA = "0x3C80DD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700074D")]
	public virtual int Count
	{
		[Token(Token = "0x6002F39")]
		[Address(RVA = "0x3C80E50", Offset = "0x3C80E50", VA = "0x3C80E50", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700074E")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002F3A")]
		[Address(RVA = "0x3C80ED0", Offset = "0x3C80ED0", VA = "0x3C80ED0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700074F")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002F3B")]
		[Address(RVA = "0x3C80F50", Offset = "0x3C80F50", VA = "0x3C80F50", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002F3C")]
	[Address(RVA = "0x3C80FD0", Offset = "0x3C80FD0", VA = "0x3C80FD0", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002F3D")]
	[Address(RVA = "0x3C81070", Offset = "0x3C81070", VA = "0x3C81070", Slot = "10")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002F3E")]
	[Address(RVA = "0x3C810F0", Offset = "0x3C810F0", VA = "0x3C810F0")]
	protected ReadOnlyCollectionBase()
	{
	}
}
