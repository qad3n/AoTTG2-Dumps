// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.BitSet
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000166")]
internal sealed class BitSet
{
	[Token(Token = "0x4000745")]
	[FieldOffset(Offset = "0x10")]
	private int count;

	[Token(Token = "0x4000746")]
	[FieldOffset(Offset = "0x18")]
	private uint[] bits;

	[Token(Token = "0x17000402")]
	public int Count
	{
		[Token(Token = "0x6000F85")]
		[Address(RVA = "0x6141700", Offset = "0x6140700", VA = "0x6141700")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000403")]
	public bool this[int index]
	{
		[Token(Token = "0x6000F86")]
		[Address(RVA = "0x6141710", Offset = "0x6140710", VA = "0x6141710")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000404")]
	public bool IsEmpty
	{
		[Token(Token = "0x6000F90")]
		[Address(RVA = "0x6141DB0", Offset = "0x6140DB0", VA = "0x6141DB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F83")]
	[Address(RVA = "0x6141670", Offset = "0x6140670", VA = "0x6141670")]
	private BitSet()
	{
	}

	[Token(Token = "0x6000F84")]
	[Address(RVA = "0x6141680", Offset = "0x6140680", VA = "0x6141680")]
	public BitSet(int count)
	{
	}

	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x6141790", Offset = "0x6140790", VA = "0x6141790")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x61417E0", Offset = "0x61407E0", VA = "0x61417E0")]
	public void Set(int index)
	{
	}

	[Token(Token = "0x6000F89")]
	[Address(RVA = "0x6141750", Offset = "0x6140750", VA = "0x6141750")]
	public bool Get(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F8A")]
	[Address(RVA = "0x61418C0", Offset = "0x61408C0", VA = "0x61418C0")]
	public int NextSet(int startFrom)
	{
		return default(int);
	}

	[Token(Token = "0x6000F8B")]
	[Address(RVA = "0x6141950", Offset = "0x6140950", VA = "0x6141950")]
	public void And(BitSet other)
	{
	}

	[Token(Token = "0x6000F8C")]
	[Address(RVA = "0x6141A70", Offset = "0x6140A70", VA = "0x6141A70")]
	public void Or(BitSet other)
	{
	}

	[Token(Token = "0x6000F8D")]
	[Address(RVA = "0x6141B10", Offset = "0x6140B10", VA = "0x6141B10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x6141B40", Offset = "0x6140B40", VA = "0x6141B40", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x6141CC0", Offset = "0x6140CC0", VA = "0x6141CC0")]
	public BitSet Clone()
	{
		return null;
	}

	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x6141E50", Offset = "0x6140E50", VA = "0x6141E50")]
	public bool Intersects(BitSet other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x61416F0", Offset = "0x61406F0", VA = "0x61416F0")]
	private int Subscript(int bitIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000F93")]
	[Address(RVA = "0x6141830", Offset = "0x6140830", VA = "0x6141830")]
	private void EnsureLength(int nRequiredLength)
	{
	}
}
