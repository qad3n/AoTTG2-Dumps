// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ReaderWriterCount
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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

	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ReaderWriterCount()
	{
	}
}
