using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000158")]
internal class BufferOffsetSize
{
	[Token(Token = "0x40006EC")]
	[FieldOffset(Offset = "0x10")]
	internal byte[] Buffer;

	[Token(Token = "0x40006ED")]
	[FieldOffset(Offset = "0x18")]
	internal int Offset;

	[Token(Token = "0x40006EE")]
	[FieldOffset(Offset = "0x1C")]
	internal int Size;

	[Token(Token = "0x6000865")]
	[Address(RVA = "0x46400F0", Offset = "0x46400F0", VA = "0x46400F0")]
	internal BufferOffsetSize(byte[] buffer, int offset, int size, bool copyBuffer)
	{
	}

	[Token(Token = "0x6000866")]
	[Address(RVA = "0x46401A0", Offset = "0x46401A0", VA = "0x46401A0")]
	internal BufferOffsetSize(byte[] buffer, bool copyBuffer)
	{
	}
}
