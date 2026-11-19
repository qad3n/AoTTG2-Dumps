// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.ByteEqualityComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000624")]
internal class ByteEqualityComparer : EqualityComparer<byte>
{
	[Token(Token = "0x600301B")]
	[Address(RVA = "0x5461A70", Offset = "0x5460A70", VA = "0x5461A70", Slot = "8")]
	public override bool Equals(byte x, byte y)
	{
		return default(bool);
	}

	[Token(Token = "0x600301C")]
	[Address(RVA = "0x5461A80", Offset = "0x5460A80", VA = "0x5461A80", Slot = "9")]
	public override int GetHashCode(byte b)
	{
		return default(int);
	}

	[Token(Token = "0x600301D")]
	[Address(RVA = "0x5461AA0", Offset = "0x5460AA0", VA = "0x5461AA0", Slot = "10")]
	internal override int IndexOf(byte[] array, byte value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600301E")]
	[Address(RVA = "0x5461C30", Offset = "0x5460C30", VA = "0x5461C30", Slot = "11")]
	internal override int LastIndexOf(byte[] array, byte value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600301F")]
	[Address(RVA = "0x5461C80", Offset = "0x5460C80", VA = "0x5461C80", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6003020")]
	[Address(RVA = "0x5461CE0", Offset = "0x5460CE0", VA = "0x5461CE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6003021")]
	[Address(RVA = "0x5461D30", Offset = "0x5460D30", VA = "0x5461D30")]
	public ByteEqualityComparer()
	{
	}
}
