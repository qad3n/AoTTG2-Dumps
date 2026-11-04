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

[Token(Token = "0x200010F")]
internal class AsyncStreamReader
{
	[Token(Token = "0x400047F")]
	[FieldOffset(Offset = "0x10")]
	private Stream stream;

	[Token(Token = "0x4000480")]
	[FieldOffset(Offset = "0x18")]
	private Encoding encoding;

	[Token(Token = "0x4000481")]
	[FieldOffset(Offset = "0x20")]
	private Decoder decoder;

	[Token(Token = "0x4000482")]
	[FieldOffset(Offset = "0x28")]
	private byte[] byteBuffer;

	[Token(Token = "0x4000483")]
	[FieldOffset(Offset = "0x30")]
	private char[] charBuffer;

	[Token(Token = "0x4000484")]
	[FieldOffset(Offset = "0x38")]
	private bool cancelOperation;

	[Token(Token = "0x4000485")]
	[FieldOffset(Offset = "0x40")]
	private ManualResetEvent eofEvent;

	[Token(Token = "0x4000486")]
	[FieldOffset(Offset = "0x48")]
	private object syncObject;

	[Token(Token = "0x4000487")]
	[FieldOffset(Offset = "0x50")]
	private IAsyncResult asyncReadResult;

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x281C4F0", Offset = "0x281AAF0", VA = "0x18281C4F0", Slot = "4")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x28612E0", Offset = "0x285F8E0", VA = "0x1828612E0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0xCD9BE0", Offset = "0xCD81E0", VA = "0x180CD9BE0")]
	internal void CancelOperation()
	{
	}
}
