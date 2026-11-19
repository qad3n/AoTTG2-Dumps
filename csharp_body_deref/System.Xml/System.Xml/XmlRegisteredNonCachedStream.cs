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
		[Address(RVA = "0x61001C0", Offset = "0x60FF1C0", VA = "0x61001C0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F5")]
	public override bool CanSeek
	{
		[Token(Token = "0x6000BA7")]
		[Address(RVA = "0x61001F0", Offset = "0x60FF1F0", VA = "0x61001F0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F6")]
	public override bool CanWrite
	{
		[Token(Token = "0x6000BA8")]
		[Address(RVA = "0x6100220", Offset = "0x60FF220", VA = "0x6100220", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F7")]
	public override long Length
	{
		[Token(Token = "0x6000BA9")]
		[Address(RVA = "0x6100250", Offset = "0x60FF250", VA = "0x6100250", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170002F8")]
	public override long Position
	{
		[Token(Token = "0x6000BAA")]
		[Address(RVA = "0x6100280", Offset = "0x60FF280", VA = "0x6100280", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000BAB")]
		[Address(RVA = "0x61002B0", Offset = "0x60FF2B0", VA = "0x61002B0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x60FEDF0", Offset = "0x60FDDF0", VA = "0x60FEDF0")]
	internal XmlRegisteredNonCachedStream(Stream stream, XmlDownloadManager downloadManager, string host)
	{
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x60FFDB0", Offset = "0x60FEDB0", VA = "0x60FFDB0", Slot = "1")]
	~XmlRegisteredNonCachedStream()
	{
	}

	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x60FFE70", Offset = "0x60FEE70", VA = "0x60FFE70", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x60FFFB0", Offset = "0x60FEFB0", VA = "0x60FFFB0", Slot = "23")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x60FFFE0", Offset = "0x60FEFE0", VA = "0x60FFFE0", Slot = "27")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x6100010", Offset = "0x60FF010", VA = "0x6100010", Slot = "24")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x6100040", Offset = "0x60FF040", VA = "0x6100040", Slot = "28")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x6100070", Offset = "0x60FF070", VA = "0x6100070", Slot = "21")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x61000A0", Offset = "0x60FF0A0", VA = "0x61000A0", Slot = "33")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x61000D0", Offset = "0x60FF0D0", VA = "0x61000D0", Slot = "35")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x6100100", Offset = "0x60FF100", VA = "0x6100100", Slot = "31")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x6100130", Offset = "0x60FF130", VA = "0x6100130", Slot = "32")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x6100160", Offset = "0x60FF160", VA = "0x6100160", Slot = "36")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x6100190", Offset = "0x60FF190", VA = "0x6100190", Slot = "38")]
	public override void WriteByte(byte value)
	{
	}
}
