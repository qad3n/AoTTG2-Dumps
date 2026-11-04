// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.CountingBloomFilter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200017D")]
internal struct CountingBloomFilter
{
	[Token(Token = "0x40006D4")]
	[FieldOffset(Offset = "0x0")]
	private unsafe fixed byte m_Counters[16384];

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x323EB80", Offset = "0x323D180", VA = "0x18323EB80")]
	private void AdjustSlot(uint index, bool increment)
	{
	}

	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x323EBE0", Offset = "0x323D1E0", VA = "0x18323EBE0")]
	private uint Hash1(uint hash)
	{
		return default(uint);
	}

	[Token(Token = "0x6000AD9")]
	[Address(RVA = "0x323EBF0", Offset = "0x323D1F0", VA = "0x18323EBF0")]
	private uint Hash2(uint hash)
	{
		return default(uint);
	}

	[Token(Token = "0x6000ADA")]
	[Address(RVA = "0x323EC30", Offset = "0x323D230", VA = "0x18323EC30")]
	private bool IsSlotEmpty(uint index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x323EC00", Offset = "0x323D200", VA = "0x18323EC00")]
	public void InsertHash(uint hash)
	{
	}

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x323EC40", Offset = "0x323D240", VA = "0x18323EC40")]
	public void RemoveHash(uint hash)
	{
	}

	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x323EBB0", Offset = "0x323D1B0", VA = "0x18323EBB0")]
	public bool ContainsHash(uint hash)
	{
		return default(bool);
	}
}
