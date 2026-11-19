// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.AsyncStreamReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Text;
using System.Threading;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20000D0")]
internal class AsyncStreamReader
{
	[Token(Token = "0x40003B0")]
	[FieldOffset(Offset = "0x10")]
	private Stream stream;

	[Token(Token = "0x40003B1")]
	[FieldOffset(Offset = "0x18")]
	private Encoding encoding;

	[Token(Token = "0x40003B2")]
	[FieldOffset(Offset = "0x20")]
	private Decoder decoder;

	[Token(Token = "0x40003B3")]
	[FieldOffset(Offset = "0x28")]
	private byte[] byteBuffer;

	[Token(Token = "0x40003B4")]
	[FieldOffset(Offset = "0x30")]
	private char[] charBuffer;

	[Token(Token = "0x40003B5")]
	[FieldOffset(Offset = "0x38")]
	private bool cancelOperation;

	[Token(Token = "0x40003B6")]
	[FieldOffset(Offset = "0x40")]
	private ManualResetEvent eofEvent;

	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0x48")]
	private object syncObject;

	[Token(Token = "0x40003B8")]
	[FieldOffset(Offset = "0x50")]
	private IAsyncResult asyncReadResult;

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x6203250", Offset = "0x6202250", VA = "0x6203250", Slot = "4")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x6203270", Offset = "0x6202270", VA = "0x6203270", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x6203670", Offset = "0x6202670", VA = "0x6203670")]
	internal void CancelOperation()
	{
	}
}
