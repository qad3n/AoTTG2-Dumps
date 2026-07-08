using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200001B")]
internal class ByteStack
{
	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x10")]
	private byte[] stack;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x18")]
	private int growthRate;

	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x1C")]
	private int top;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x20")]
	private int size;

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x4355AE0", Offset = "0x4355AE0", VA = "0x4355AE0")]
	public ByteStack(int growthRate)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x4355B50", Offset = "0x4355B50", VA = "0x4355B50")]
	public void Push(byte data)
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x4355C00", Offset = "0x4355C00", VA = "0x4355C00")]
	public byte Pop()
	{
		return default(byte);
	}
}
