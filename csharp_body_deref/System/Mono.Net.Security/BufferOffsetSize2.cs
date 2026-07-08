using Il2CppDummyDll;

namespace Mono.Net.Security;

[Token(Token = "0x2000047")]
internal class BufferOffsetSize2 : BufferOffsetSize
{
	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x28")]
	public readonly int InitialSize;

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x453BDE0", Offset = "0x453BDE0", VA = "0x453BDE0")]
	public BufferOffsetSize2(int size)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x453BE30", Offset = "0x453BE30", VA = "0x453BE30")]
	public void Reset()
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x453BE90", Offset = "0x453BE90", VA = "0x453BE90")]
	public void MakeRoom(int size)
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x453BF40", Offset = "0x453BF40", VA = "0x453BF40")]
	public void AppendData(byte[] buffer, int offset, int size)
	{
	}
}
