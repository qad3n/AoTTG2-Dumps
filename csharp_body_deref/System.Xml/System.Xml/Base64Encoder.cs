using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000008")]
internal abstract class Base64Encoder
{
	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x10")]
	private byte[] leftOverBytes;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x18")]
	private int leftOverBytesCount;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x20")]
	private char[] charsLine;

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x43464B0", Offset = "0x43464B0", VA = "0x43464B0")]
	internal Base64Encoder()
	{
	}

	[Token(Token = "0x6000009")]
	internal abstract void WriteChars(char[] chars, int index, int count);

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x4346510", Offset = "0x4346510", VA = "0x4346510")]
	internal void Encode(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x4346830", Offset = "0x4346830", VA = "0x4346830")]
	internal void Flush()
	{
	}
}
