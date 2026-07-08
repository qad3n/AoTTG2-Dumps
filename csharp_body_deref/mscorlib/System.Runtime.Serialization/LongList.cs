using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Serializable]
[Token(Token = "0x20003E3")]
internal class LongList
{
	[Token(Token = "0x4001007")]
	[FieldOffset(Offset = "0x10")]
	private long[] m_values;

	[Token(Token = "0x4001008")]
	[FieldOffset(Offset = "0x18")]
	private int m_count;

	[Token(Token = "0x4001009")]
	[FieldOffset(Offset = "0x1C")]
	private int m_totalItems;

	[Token(Token = "0x400100A")]
	[FieldOffset(Offset = "0x20")]
	private int m_currentItem;

	[Token(Token = "0x17000433")]
	internal int Count
	{
		[Token(Token = "0x6001FD2")]
		[Address(RVA = "0x4EB82F0", Offset = "0x4EB82F0", VA = "0x4EB82F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000434")]
	internal long Current
	{
		[Token(Token = "0x6001FD5")]
		[Address(RVA = "0x4EB5CF0", Offset = "0x4EB5CF0", VA = "0x4EB5CF0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6001FCF")]
	[Address(RVA = "0x4EB7E20", Offset = "0x4EB7E20", VA = "0x4EB7E20")]
	internal LongList()
	{
	}

	[Token(Token = "0x6001FD0")]
	[Address(RVA = "0x4EB8210", Offset = "0x4EB8210", VA = "0x4EB8210")]
	internal LongList(int startingSize)
	{
	}

	[Token(Token = "0x6001FD1")]
	[Address(RVA = "0x4EB7E80", Offset = "0x4EB7E80", VA = "0x4EB7E80")]
	internal void Add(long value)
	{
	}

	[Token(Token = "0x6001FD3")]
	[Address(RVA = "0x4EB5CE0", Offset = "0x4EB5CE0", VA = "0x4EB5CE0")]
	internal void StartEnumeration()
	{
	}

	[Token(Token = "0x6001FD4")]
	[Address(RVA = "0x4EB5D30", Offset = "0x4EB5D30", VA = "0x4EB5D30")]
	internal bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001FD6")]
	[Address(RVA = "0x4EB7D30", Offset = "0x4EB7D30", VA = "0x4EB7D30")]
	internal bool RemoveElement(long value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FD7")]
	[Address(RVA = "0x4EB8270", Offset = "0x4EB8270", VA = "0x4EB8270")]
	private void EnlargeArray()
	{
	}
}
