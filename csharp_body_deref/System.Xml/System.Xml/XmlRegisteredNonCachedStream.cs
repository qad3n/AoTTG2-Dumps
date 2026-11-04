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
		[Address(RVA = "0x27587F0", Offset = "0x2756DF0", VA = "0x1827587F0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F5")]
	public override bool CanSeek
	{
		[Token(Token = "0x6000BA7")]
		[Address(RVA = "0x1CB2D20", Offset = "0x1CB1320", VA = "0x181CB2D20", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F6")]
	public override bool CanWrite
	{
		[Token(Token = "0x6000BA8")]
		[Address(RVA = "0x2758820", Offset = "0x2756E20", VA = "0x182758820", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F7")]
	public override long Length
	{
		[Token(Token = "0x6000BA9")]
		[Address(RVA = "0x24937A0", Offset = "0x2491DA0", VA = "0x1824937A0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170002F8")]
	public override long Position
	{
		[Token(Token = "0x6000BAA")]
		[Address(RVA = "0x24938E0", Offset = "0x2491EE0", VA = "0x1824938E0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000BAB")]
		[Address(RVA = "0x2758850", Offset = "0x2756E50", VA = "0x182758850", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x2758760", Offset = "0x2756D60", VA = "0x182758760")]
	internal XmlRegisteredNonCachedStream(Stream stream, XmlDownloadManager downloadManager, string host)
	{
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x2758610", Offset = "0x2756C10", VA = "0x182758610", Slot = "1")]
	~XmlRegisteredNonCachedStream()
	{
	}

	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x27584C0", Offset = "0x2756AC0", VA = "0x1827584C0", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x2758460", Offset = "0x2756A60", VA = "0x182758460", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x2758490", Offset = "0x2756A90", VA = "0x182758490", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x27585E0", Offset = "0x2756BE0", VA = "0x1827585E0", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x1ADA6C0", Offset = "0x1AD8CC0", VA = "0x181ADA6C0", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x2491AB0", Offset = "0x24900B0", VA = "0x182491AB0", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x27586D0", Offset = "0x2756CD0", VA = "0x1827586D0", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x27586A0", Offset = "0x2756CA0", VA = "0x1827586A0", Slot = "34")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x2758700", Offset = "0x2756D00", VA = "0x182758700", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x2493020", Offset = "0x2491620", VA = "0x182493020", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x2758730", Offset = "0x2756D30", VA = "0x182758730", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x26E1780", Offset = "0x26DFD80", VA = "0x1826E1780", Slot = "37")]
	public override void WriteByte(byte value)
	{
	}
}
