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
[Token(Token = "0x2000649")]
internal class ByteEqualityComparer : EqualityComparer<byte>
{
	[Token(Token = "0x600303C")]
	[Address(RVA = "0x1ACD240", Offset = "0x1ACB840", VA = "0x181ACD240", Slot = "8")]
	public override bool Equals(byte x, byte y)
	{
		return default(bool);
	}

	[Token(Token = "0x600303D")]
	[Address(RVA = "0xB22240", Offset = "0xB20840", VA = "0x180B22240", Slot = "9")]
	public override int GetHashCode(byte b)
	{
		return default(int);
	}

	[Token(Token = "0x600303E")]
	[Address(RVA = "0x1ACD320", Offset = "0x1ACB920", VA = "0x181ACD320", Slot = "10")]
	internal override int IndexOf(byte[] array, byte value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600303F")]
	[Address(RVA = "0x1ACD520", Offset = "0x1ACBB20", VA = "0x181ACD520", Slot = "11")]
	internal override int LastIndexOf(byte[] array, byte value, int startIndex, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003040")]
	[Address(RVA = "0x1ACD250", Offset = "0x1ACB850", VA = "0x181ACD250", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6003041")]
	[Address(RVA = "0x1ACD2D0", Offset = "0x1ACB8D0", VA = "0x181ACD2D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6003042")]
	[Address(RVA = "0x1ACD570", Offset = "0x1ACBB70", VA = "0x181ACD570")]
	public ByteEqualityComparer()
	{
	}
}
