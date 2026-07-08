using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003E4")]
internal class ObjectHolderList
{
	[Token(Token = "0x400100B")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.ObjectHolder[] m_values;

	[Token(Token = "0x400100C")]
	[FieldOffset(Offset = "0x18")]
	internal int m_count;

	[Token(Token = "0x17000435")]
	internal int Version
	{
		[Token(Token = "0x6001FDD")]
		[Address(RVA = "0x4EB8510", Offset = "0x4EB8510", VA = "0x4EB8510")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000436")]
	internal int Count
	{
		[Token(Token = "0x6001FDE")]
		[Address(RVA = "0x4EB8520", Offset = "0x4EB8520", VA = "0x4EB8520")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001FD8")]
	[Address(RVA = "0x4EB34B0", Offset = "0x4EB34B0", VA = "0x4EB34B0")]
	internal ObjectHolderList()
	{
	}

	[Token(Token = "0x6001FD9")]
	[Address(RVA = "0x4EB8300", Offset = "0x4EB8300", VA = "0x4EB8300")]
	internal ObjectHolderList(int startingSize)
	{
	}

	[Token(Token = "0x6001FDA")]
	[Address(RVA = "0x4EB8360", Offset = "0x4EB8360", VA = "0x4EB8360", Slot = "4")]
	internal virtual void Add(System.Runtime.Serialization.ObjectHolder value)
	{
	}

	[Token(Token = "0x6001FDB")]
	[Address(RVA = "0x4EB70B0", Offset = "0x4EB70B0", VA = "0x4EB70B0")]
	internal System.Runtime.Serialization.ObjectHolderListEnumerator GetFixupEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001FDC")]
	[Address(RVA = "0x4EB8440", Offset = "0x4EB8440", VA = "0x4EB8440")]
	private void EnlargeArray()
	{
	}
}
