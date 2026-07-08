using Il2CppDummyDll;

namespace Mono.Net.Security;

[Token(Token = "0x2000046")]
internal class BufferOffsetSize
{
	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x10")]
	public byte[] Buffer;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0x18")]
	public int Offset;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x1C")]
	public int Size;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x20")]
	public int TotalBytes;

	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x24")]
	public bool Complete;

	[Token(Token = "0x17000018")]
	public int EndOffset
	{
		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x453BC30", Offset = "0x453BC30", VA = "0x453BC30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000019")]
	public int Remaining
	{
		[Token(Token = "0x60000AA")]
		[Address(RVA = "0x453BC40", Offset = "0x453BC40", VA = "0x453BC40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x453BC60", Offset = "0x453BC60", VA = "0x453BC60")]
	public BufferOffsetSize(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x453BD60", Offset = "0x453BD60", VA = "0x453BD60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
