using System.IO;
using System.Text;
using System.Threading;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20000CF")]
internal class AsyncStreamReader
{
	[Token(Token = "0x40003AD")]
	[FieldOffset(Offset = "0x10")]
	private Stream stream;

	[Token(Token = "0x40003AE")]
	[FieldOffset(Offset = "0x18")]
	private Encoding encoding;

	[Token(Token = "0x40003AF")]
	[FieldOffset(Offset = "0x20")]
	private Decoder decoder;

	[Token(Token = "0x40003B0")]
	[FieldOffset(Offset = "0x28")]
	private byte[] byteBuffer;

	[Token(Token = "0x40003B1")]
	[FieldOffset(Offset = "0x30")]
	private char[] charBuffer;

	[Token(Token = "0x40003B2")]
	[FieldOffset(Offset = "0x38")]
	private bool cancelOperation;

	[Token(Token = "0x40003B3")]
	[FieldOffset(Offset = "0x40")]
	private ManualResetEvent eofEvent;

	[Token(Token = "0x40003B4")]
	[FieldOffset(Offset = "0x48")]
	private object syncObject;

	[Token(Token = "0x40003B5")]
	[FieldOffset(Offset = "0x50")]
	private IAsyncResult asyncReadResult;

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x4601F20", Offset = "0x4601F20", VA = "0x4601F20", Slot = "4")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x4601F40", Offset = "0x4601F40", VA = "0x4601F40", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x46023C0", Offset = "0x46023C0", VA = "0x46023C0")]
	internal void CancelOperation()
	{
	}
}
