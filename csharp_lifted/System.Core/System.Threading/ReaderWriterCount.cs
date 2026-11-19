// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ReaderWriterCount
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000290")]
internal class ReaderWriterCount
{
	[Token(Token = "0x40004CC")]
	[FieldOffset(Offset = "0x10")]
	public long lockID;

	[Token(Token = "0x40004CD")]
	[FieldOffset(Offset = "0x18")]
	public int readercount;

	[Token(Token = "0x40004CE")]
	[FieldOffset(Offset = "0x1C")]
	public int writercount;

	[Token(Token = "0x40004CF")]
	[FieldOffset(Offset = "0x20")]
	public int upgradecount;

	[Token(Token = "0x40004D0")]
	[FieldOffset(Offset = "0x28")]
	public ReaderWriterCount next;

	[Token(Token = "0x6000D28")]
	[Address(RVA = "0x5E2B9C0", Offset = "0x5E2A9C0", VA = "0x5E2B9C0")]
	public ReaderWriterCount()
	{
	}
}
