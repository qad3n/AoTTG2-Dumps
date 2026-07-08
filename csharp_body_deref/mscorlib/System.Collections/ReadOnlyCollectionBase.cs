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
		[Address(RVA = "0x4F9B2B0", Offset = "0x4F9B2B0", VA = "0x4F9B2B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700074D")]
	public virtual int Count
	{
		[Token(Token = "0x6002F39")]
		[Address(RVA = "0x4F9B330", Offset = "0x4F9B330", VA = "0x4F9B330", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700074E")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002F3A")]
		[Address(RVA = "0x4F9B3B0", Offset = "0x4F9B3B0", VA = "0x4F9B3B0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700074F")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002F3B")]
		[Address(RVA = "0x4F9B430", Offset = "0x4F9B430", VA = "0x4F9B430", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002F3C")]
	[Address(RVA = "0x4F9B4B0", Offset = "0x4F9B4B0", VA = "0x4F9B4B0", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002F3D")]
	[Address(RVA = "0x4F9B550", Offset = "0x4F9B550", VA = "0x4F9B550", Slot = "10")]
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002F3E")]
	[Address(RVA = "0x4F9B5D0", Offset = "0x4F9B5D0", VA = "0x4F9B5D0")]
	protected ReadOnlyCollectionBase()
	{
	}
}
