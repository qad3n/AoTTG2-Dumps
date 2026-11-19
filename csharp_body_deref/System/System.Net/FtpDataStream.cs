// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.FtpDataStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Net.Sockets;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000273")]
internal class FtpDataStream : Stream, ICloseEx
{
	[Token(Token = "0x4000913")]
	[FieldOffset(Offset = "0x28")]
	private FtpWebRequest _request;

	[Token(Token = "0x4000914")]
	[FieldOffset(Offset = "0x30")]
	private NetworkStream _networkStream;

	[Token(Token = "0x4000915")]
	[FieldOffset(Offset = "0x38")]
	private bool _writeable;

	[Token(Token = "0x4000916")]
	[FieldOffset(Offset = "0x39")]
	private bool _readable;

	[Token(Token = "0x4000917")]
	[FieldOffset(Offset = "0x3A")]
	private bool _isFullyRead;

	[Token(Token = "0x4000918")]
	[FieldOffset(Offset = "0x3B")]
	private bool _closing;

	[Token(Token = "0x170003A0")]
	public override bool CanRead
	{
		[Token(Token = "0x600113B")]
		[Address(RVA = "0x629D1D0", Offset = "0x629C1D0", VA = "0x629D1D0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A1")]
	public override bool CanSeek
	{
		[Token(Token = "0x600113C")]
		[Address(RVA = "0x629D1E0", Offset = "0x629C1E0", VA = "0x629D1E0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A2")]
	public override bool CanWrite
	{
		[Token(Token = "0x600113D")]
		[Address(RVA = "0x629D210", Offset = "0x629C210", VA = "0x629D210", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A3")]
	public override long Length
	{
		[Token(Token = "0x600113E")]
		[Address(RVA = "0x629D220", Offset = "0x629C220", VA = "0x629D220", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170003A4")]
	public override long Position
	{
		[Token(Token = "0x600113F")]
		[Address(RVA = "0x629D250", Offset = "0x629C250", VA = "0x629D250", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6001140")]
		[Address(RVA = "0x629D280", Offset = "0x629C280", VA = "0x629D280", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x170003A5")]
	public override bool CanTimeout
	{
		[Token(Token = "0x600114B")]
		[Address(RVA = "0x629DDC0", Offset = "0x629CDC0", VA = "0x629DDC0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A6")]
	public override int ReadTimeout
	{
		[Token(Token = "0x600114C")]
		[Address(RVA = "0x629DDF0", Offset = "0x629CDF0", VA = "0x629DDF0", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600114D")]
		[Address(RVA = "0x629DE20", Offset = "0x629CE20", VA = "0x629DE20", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x170003A7")]
	public override int WriteTimeout
	{
		[Token(Token = "0x600114E")]
		[Address(RVA = "0x629DE50", Offset = "0x629CE50", VA = "0x629DE50", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600114F")]
		[Address(RVA = "0x629DE80", Offset = "0x629CE80", VA = "0x629DE80", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x6001137")]
	[Address(RVA = "0x62983E0", Offset = "0x62973E0", VA = "0x62983E0")]
	internal FtpDataStream(NetworkStream networkStream, FtpWebRequest request, TriState writeOnly)
	{
	}

	[Token(Token = "0x6001138")]
	[Address(RVA = "0x629CBC0", Offset = "0x629BBC0", VA = "0x629CBC0", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001139")]
	[Address(RVA = "0x629CD20", Offset = "0x629BD20", VA = "0x629CD20", Slot = "39")]
	private void System_002ENet_002EICloseEx_002ECloseEx(CloseExState closeState)
	{
	}

	[Token(Token = "0x600113A")]
	[Address(RVA = "0x629D190", Offset = "0x629C190", VA = "0x629D190")]
	private void CheckError()
	{
	}

	[Token(Token = "0x6001141")]
	[Address(RVA = "0x629D2B0", Offset = "0x629C2B0", VA = "0x629D2B0", Slot = "31")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6001142")]
	[Address(RVA = "0x629D3A0", Offset = "0x629C3A0", VA = "0x629D3A0", Slot = "33")]
	public override int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x6001143")]
	[Address(RVA = "0x629D4B0", Offset = "0x629C4B0", VA = "0x629D4B0", Slot = "36")]
	public override void Write(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6001144")]
	[Address(RVA = "0x629D5A0", Offset = "0x629C5A0", VA = "0x629D5A0")]
	private void AsyncReadCallback(IAsyncResult ar)
	{
	}

	[Token(Token = "0x6001145")]
	[Address(RVA = "0x629D830", Offset = "0x629C830", VA = "0x629D830", Slot = "23")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001146")]
	[Address(RVA = "0x629DA00", Offset = "0x629CA00", VA = "0x629DA00", Slot = "24")]
	public override int EndRead(IAsyncResult ar)
	{
		return default(int);
	}

	[Token(Token = "0x6001147")]
	[Address(RVA = "0x629DBA0", Offset = "0x629CBA0", VA = "0x629DBA0", Slot = "27")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001148")]
	[Address(RVA = "0x629DCA0", Offset = "0x629CCA0", VA = "0x629DCA0", Slot = "28")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6001149")]
	[Address(RVA = "0x629DD60", Offset = "0x629CD60", VA = "0x629DD60", Slot = "21")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600114A")]
	[Address(RVA = "0x629DD90", Offset = "0x629CD90", VA = "0x629DD90", Slot = "32")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6001150")]
	[Address(RVA = "0x629DEB0", Offset = "0x629CEB0", VA = "0x629DEB0")]
	internal void SetSocketTimeoutOption(int timeout)
	{
	}
}
