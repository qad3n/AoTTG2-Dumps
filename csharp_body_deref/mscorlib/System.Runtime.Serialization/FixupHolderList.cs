using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Serializable]
[Token(Token = "0x20003E2")]
internal class FixupHolderList
{
	[Token(Token = "0x4001005")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.FixupHolder[] m_values;

	[Token(Token = "0x4001006")]
	[FieldOffset(Offset = "0x18")]
	internal int m_count;

	[Token(Token = "0x6001FCB")]
	[Address(RVA = "0x4EB7DA0", Offset = "0x4EB7DA0", VA = "0x4EB7DA0")]
	internal FixupHolderList()
	{
	}

	[Token(Token = "0x6001FCC")]
	[Address(RVA = "0x4EB8010", Offset = "0x4EB8010", VA = "0x4EB8010")]
	internal FixupHolderList(int startingSize)
	{
	}

	[Token(Token = "0x6001FCD")]
	[Address(RVA = "0x4EB8070", Offset = "0x4EB8070", VA = "0x4EB8070", Slot = "4")]
	internal virtual void Add(System.Runtime.Serialization.FixupHolder fixup)
	{
	}

	[Token(Token = "0x6001FCE")]
	[Address(RVA = "0x4EB8190", Offset = "0x4EB8190", VA = "0x4EB8190")]
	private void EnlargeArray()
	{
	}
}
