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
		[Address(RVA = "0x4842670", Offset = "0x4842670", VA = "0x4842670")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000403")]
	public bool this[int index]
	{
		[Token(Token = "0x6000F86")]
		[Address(RVA = "0x4842680", Offset = "0x4842680", VA = "0x4842680")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000404")]
	public bool IsEmpty
	{
		[Token(Token = "0x6000F90")]
		[Address(RVA = "0x4842C50", Offset = "0x4842C50", VA = "0x4842C50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F83")]
	[Address(RVA = "0x48425E0", Offset = "0x48425E0", VA = "0x48425E0")]
	private BitSet()
	{
	}

	[Token(Token = "0x6000F84")]
	[Address(RVA = "0x48425F0", Offset = "0x48425F0", VA = "0x48425F0")]
	public BitSet(int count)
	{
	}

	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x4842700", Offset = "0x4842700", VA = "0x4842700")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x4842750", Offset = "0x4842750", VA = "0x4842750")]
	public void Set(int index)
	{
	}

	[Token(Token = "0x6000F89")]
	[Address(RVA = "0x48426C0", Offset = "0x48426C0", VA = "0x48426C0")]
	public bool Get(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F8A")]
	[Address(RVA = "0x4842830", Offset = "0x4842830", VA = "0x4842830")]
	public int NextSet(int startFrom)
	{
		return default(int);
	}

	[Token(Token = "0x6000F8B")]
	[Address(RVA = "0x48428C0", Offset = "0x48428C0", VA = "0x48428C0")]
	public void And(BitSet other)
	{
	}

	[Token(Token = "0x6000F8C")]
	[Address(RVA = "0x4842980", Offset = "0x4842980", VA = "0x4842980")]
	public void Or(BitSet other)
	{
	}

	[Token(Token = "0x6000F8D")]
	[Address(RVA = "0x4842A10", Offset = "0x4842A10", VA = "0x4842A10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x4842A40", Offset = "0x4842A40", VA = "0x4842A40", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x4842B60", Offset = "0x4842B60", VA = "0x4842B60")]
	public BitSet Clone()
	{
		return null;
	}

	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x4842CA0", Offset = "0x4842CA0", VA = "0x4842CA0")]
	public bool Intersects(BitSet other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x4842660", Offset = "0x4842660", VA = "0x4842660")]
	private int Subscript(int bitIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000F93")]
	[Address(RVA = "0x48427A0", Offset = "0x48427A0", VA = "0x48427A0")]
	private void EnsureLength(int nRequiredLength)
	{
	}
}
