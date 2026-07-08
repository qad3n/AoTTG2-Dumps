using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x200028F")]
internal class ReaderWriterCount
{
	[Token(Token = "0x40004C3")]
	[FieldOffset(Offset = "0x10")]
	public long lockID;

	[Token(Token = "0x40004C4")]
	[FieldOffset(Offset = "0x18")]
	public int readercount;

	[Token(Token = "0x40004C5")]
	[FieldOffset(Offset = "0x1C")]
	public int writercount;

	[Token(Token = "0x40004C6")]
	[FieldOffset(Offset = "0x20")]
	public int upgradecount;

	[Token(Token = "0x40004C7")]
	[FieldOffset(Offset = "0x28")]
	public ReaderWriterCount next;

	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x41F1ED0", Offset = "0x41F1ED0", VA = "0x41F1ED0")]
	public ReaderWriterCount()
	{
	}
}
