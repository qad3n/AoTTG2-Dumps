// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.CountingBloomFilter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000131")]
internal struct CountingBloomFilter
{
	[Token(Token = "0x4000583")]
	[FieldOffset(Offset = "0x0")]
	private unsafe fixed byte m_Counters[16384];

	[Token(Token = "0x600089D")]
	[Address(RVA = "0x5015B10", Offset = "0x5015B10", VA = "0x5015B10")]
	private void AdjustSlot(uint index, bool increment)
	{
	}

	[Token(Token = "0x600089E")]
	[Address(RVA = "0x5015B30", Offset = "0x5015B30", VA = "0x5015B30")]
	private uint Hash1(uint hash)
	{
		return default(uint);
	}

	[Token(Token = "0x600089F")]
	[Address(RVA = "0x5015B40", Offset = "0x5015B40", VA = "0x5015B40")]
	private uint Hash2(uint hash)
	{
		return default(uint);
	}

	[Token(Token = "0x60008A0")]
	[Address(RVA = "0x5015B50", Offset = "0x5015B50", VA = "0x5015B50")]
	private bool IsSlotEmpty(uint index)
	{
		return default(bool);
	}

	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x5015B60", Offset = "0x5015B60", VA = "0x5015B60")]
	public void InsertHash(uint hash)
	{
	}

	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x5015B90", Offset = "0x5015B90", VA = "0x5015B90")]
	public void RemoveHash(uint hash)
	{
	}

	[Token(Token = "0x60008A3")]
	[Address(RVA = "0x5015BC0", Offset = "0x5015BC0", VA = "0x5015BC0")]
	public bool ContainsHash(uint hash)
	{
		return default(bool);
	}
}
