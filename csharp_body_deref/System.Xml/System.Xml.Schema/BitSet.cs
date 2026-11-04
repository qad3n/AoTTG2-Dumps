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
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000403")]
	public bool this[int index]
	{
		[Token(Token = "0x6000F86")]
		[Address(RVA = "0x2779D50", Offset = "0x2778350", VA = "0x182779D50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000404")]
	public bool IsEmpty
	{
		[Token(Token = "0x6000F90")]
		[Address(RVA = "0x277A090", Offset = "0x2778690", VA = "0x18277A090")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F83")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	private BitSet()
	{
	}

	[Token(Token = "0x6000F84")]
	[Address(RVA = "0x277A020", Offset = "0x2778620", VA = "0x18277A020")]
	public BitSet(int count)
	{
	}

	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x27799C0", Offset = "0x2777FC0", VA = "0x1827799C0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x2779FA0", Offset = "0x27785A0", VA = "0x182779FA0")]
	public void Set(int index)
	{
	}

	[Token(Token = "0x6000F89")]
	[Address(RVA = "0x2779D50", Offset = "0x2778350", VA = "0x182779D50")]
	public bool Get(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F8A")]
	[Address(RVA = "0x2779E80", Offset = "0x2778480", VA = "0x182779E80")]
	public int NextSet(int startFrom)
	{
		return default(int);
	}

	[Token(Token = "0x6000F8B")]
	[Address(RVA = "0x27798F0", Offset = "0x2777EF0", VA = "0x1827798F0")]
	public void And(BitSet other)
	{
	}

	[Token(Token = "0x6000F8C")]
	[Address(RVA = "0x2779F10", Offset = "0x2778510", VA = "0x182779F10")]
	public void Or(BitSet other)
	{
	}

	[Token(Token = "0x6000F8D")]
	[Address(RVA = "0x2779D10", Offset = "0x2778310", VA = "0x182779D10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x2779B90", Offset = "0x2778190", VA = "0x182779B90", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x2779A10", Offset = "0x2778010", VA = "0x182779A10")]
	public BitSet Clone()
	{
		return null;
	}

	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x2779DA0", Offset = "0x27783A0", VA = "0x182779DA0")]
	public bool Intersects(BitSet other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x277A010", Offset = "0x2778610", VA = "0x18277A010")]
	private int Subscript(int bitIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000F93")]
	[Address(RVA = "0x2779B00", Offset = "0x2778100", VA = "0x182779B00")]
	private void EnsureLength(int nRequiredLength)
	{
	}
}
