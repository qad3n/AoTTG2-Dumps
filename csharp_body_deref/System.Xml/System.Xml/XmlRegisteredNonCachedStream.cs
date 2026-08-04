// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlRegisteredNonCachedStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000D8")]
internal class XmlRegisteredNonCachedStream : Stream
{
	[Token(Token = "0x400057E")]
	[FieldOffset(Offset = "0x28")]
	protected Stream stream;

	[Token(Token = "0x400057F")]
	[FieldOffset(Offset = "0x30")]
	private XmlDownloadManager downloadManager;

	[Token(Token = "0x4000580")]
	[FieldOffset(Offset = "0x38")]
	private string host;

	[Token(Token = "0x170002F4")]
	public override bool CanRead
	{
		[Token(Token = "0x6000BA6")]
		[Address(RVA = "0x47FDA30", Offset = "0x47FDA30", VA = "0x47FDA30", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F5")]
	public override bool CanSeek
	{
		[Token(Token = "0x6000BA7")]
		[Address(RVA = "0x47FDA60", Offset = "0x47FDA60", VA = "0x47FDA60", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F6")]
	public override bool CanWrite
	{
		[Token(Token = "0x6000BA8")]
		[Address(RVA = "0x47FDA90", Offset = "0x47FDA90", VA = "0x47FDA90", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F7")]
	public override long Length
	{
		[Token(Token = "0x6000BA9")]
		[Address(RVA = "0x47FDAC0", Offset = "0x47FDAC0", VA = "0x47FDAC0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170002F8")]
	public override long Position
	{
		[Token(Token = "0x6000BAA")]
		[Address(RVA = "0x47FDAF0", Offset = "0x47FDAF0", VA = "0x47FDAF0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000BAB")]
		[Address(RVA = "0x47FDB20", Offset = "0x47FDB20", VA = "0x47FDB20", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x47FC5B0", Offset = "0x47FC5B0", VA = "0x47FC5B0")]
	internal XmlRegisteredNonCachedStream(Stream stream, XmlDownloadManager downloadManager, string host)
	{
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x47FD630", Offset = "0x47FD630", VA = "0x47FD630", Slot = "1")]
	~XmlRegisteredNonCachedStream()
	{
	}

	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x47FD6E0", Offset = "0x47FD6E0", VA = "0x47FD6E0", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x47FD820", Offset = "0x47FD820", VA = "0x47FD820", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x47FD850", Offset = "0x47FD850", VA = "0x47FD850", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x47FD880", Offset = "0x47FD880", VA = "0x47FD880", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x47FD8B0", Offset = "0x47FD8B0", VA = "0x47FD8B0", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x47FD8E0", Offset = "0x47FD8E0", VA = "0x47FD8E0", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x47FD910", Offset = "0x47FD910", VA = "0x47FD910", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x47FD940", Offset = "0x47FD940", VA = "0x47FD940", Slot = "34")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x47FD970", Offset = "0x47FD970", VA = "0x47FD970", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x47FD9A0", Offset = "0x47FD9A0", VA = "0x47FD9A0", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x47FD9D0", Offset = "0x47FD9D0", VA = "0x47FD9D0", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x47FDA00", Offset = "0x47FDA00", VA = "0x47FDA00", Slot = "37")]
	public override void WriteByte(byte value)
	{
	}
}
