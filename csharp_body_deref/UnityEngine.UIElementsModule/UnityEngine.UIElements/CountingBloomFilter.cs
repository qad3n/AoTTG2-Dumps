using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000131")]
internal struct CountingBloomFilter
{
	[Token(Token = "0x4000583")]
	[FieldOffset(Offset = "0x0")]
	private unsafe fixed byte m_Counters[16384];

	[Token(Token = "0x600089D")]
	[Address(RVA = "0x4CEE1E0", Offset = "0x4CEE1E0", VA = "0x4CEE1E0")]
	private void AdjustSlot(uint index, bool increment)
	{
	}

	[Token(Token = "0x600089E")]
	[Address(RVA = "0x4CEE200", Offset = "0x4CEE200", VA = "0x4CEE200")]
	private uint Hash1(uint hash)
	{
		return default(uint);
	}

	[Token(Token = "0x600089F")]
	[Address(RVA = "0x4CEE210", Offset = "0x4CEE210", VA = "0x4CEE210")]
	private uint Hash2(uint hash)
	{
		return default(uint);
	}

	[Token(Token = "0x60008A0")]
	[Address(RVA = "0x4CEE220", Offset = "0x4CEE220", VA = "0x4CEE220")]
	private bool IsSlotEmpty(uint index)
	{
		return default(bool);
	}

	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x4CEE230", Offset = "0x4CEE230", VA = "0x4CEE230")]
	public void InsertHash(uint hash)
	{
	}

	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x4CEE260", Offset = "0x4CEE260", VA = "0x4CEE260")]
	public void RemoveHash(uint hash)
	{
	}

	[Token(Token = "0x60008A3")]
	[Address(RVA = "0x4CEE290", Offset = "0x4CEE290", VA = "0x4CEE290")]
	public bool ContainsHash(uint hash)
	{
		return default(bool);
	}
}
