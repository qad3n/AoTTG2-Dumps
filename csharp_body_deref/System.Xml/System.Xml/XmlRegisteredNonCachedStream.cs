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
		[Address(RVA = "0x44C02D0", Offset = "0x44C02D0", VA = "0x44C02D0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F5")]
	public override bool CanSeek
	{
		[Token(Token = "0x6000BA7")]
		[Address(RVA = "0x44C0300", Offset = "0x44C0300", VA = "0x44C0300", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F6")]
	public override bool CanWrite
	{
		[Token(Token = "0x6000BA8")]
		[Address(RVA = "0x44C0330", Offset = "0x44C0330", VA = "0x44C0330", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F7")]
	public override long Length
	{
		[Token(Token = "0x6000BA9")]
		[Address(RVA = "0x44C0360", Offset = "0x44C0360", VA = "0x44C0360", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170002F8")]
	public override long Position
	{
		[Token(Token = "0x6000BAA")]
		[Address(RVA = "0x44C0390", Offset = "0x44C0390", VA = "0x44C0390", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000BAB")]
		[Address(RVA = "0x44C03C0", Offset = "0x44C03C0", VA = "0x44C03C0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x44BEE50", Offset = "0x44BEE50", VA = "0x44BEE50")]
	internal XmlRegisteredNonCachedStream(Stream stream, XmlDownloadManager downloadManager, string host)
	{
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x44BFED0", Offset = "0x44BFED0", VA = "0x44BFED0", Slot = "1")]
	~XmlRegisteredNonCachedStream()
	{
	}

	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x44BFF80", Offset = "0x44BFF80", VA = "0x44BFF80", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x44C00C0", Offset = "0x44C00C0", VA = "0x44C00C0", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x44C00F0", Offset = "0x44C00F0", VA = "0x44C00F0", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x44C0120", Offset = "0x44C0120", VA = "0x44C0120", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x44C0150", Offset = "0x44C0150", VA = "0x44C0150", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x44C0180", Offset = "0x44C0180", VA = "0x44C0180", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x44C01B0", Offset = "0x44C01B0", VA = "0x44C01B0", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x44C01E0", Offset = "0x44C01E0", VA = "0x44C01E0", Slot = "34")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x44C0210", Offset = "0x44C0210", VA = "0x44C0210", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x44C0240", Offset = "0x44C0240", VA = "0x44C0240", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x44C0270", Offset = "0x44C0270", VA = "0x44C0270", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x44C02A0", Offset = "0x44C02A0", VA = "0x44C02A0", Slot = "37")]
	public override void WriteByte(byte value)
	{
	}
}
