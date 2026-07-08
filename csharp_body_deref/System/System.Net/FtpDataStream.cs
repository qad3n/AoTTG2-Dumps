using System.IO;
using System.Net.Sockets;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200012A")]
internal class FtpDataStream : Stream, ICloseEx
{
	[Token(Token = "0x40005CC")]
	[FieldOffset(Offset = "0x28")]
	private FtpWebRequest _request;

	[Token(Token = "0x40005CD")]
	[FieldOffset(Offset = "0x30")]
	private NetworkStream _networkStream;

	[Token(Token = "0x40005CE")]
	[FieldOffset(Offset = "0x38")]
	private bool _writeable;

	[Token(Token = "0x40005CF")]
	[FieldOffset(Offset = "0x39")]
	private bool _readable;

	[Token(Token = "0x40005D0")]
	[FieldOffset(Offset = "0x3A")]
	private bool _isFullyRead;

	[Token(Token = "0x40005D1")]
	[FieldOffset(Offset = "0x3B")]
	private bool _closing;

	[Token(Token = "0x1700017A")]
	public override bool CanRead
	{
		[Token(Token = "0x600073A")]
		[Address(RVA = "0x462F970", Offset = "0x462F970", VA = "0x462F970", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017B")]
	public override bool CanSeek
	{
		[Token(Token = "0x600073B")]
		[Address(RVA = "0x462F980", Offset = "0x462F980", VA = "0x462F980", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017C")]
	public override bool CanWrite
	{
		[Token(Token = "0x600073C")]
		[Address(RVA = "0x462F9B0", Offset = "0x462F9B0", VA = "0x462F9B0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017D")]
	public override long Length
	{
		[Token(Token = "0x600073D")]
		[Address(RVA = "0x462F9C0", Offset = "0x462F9C0", VA = "0x462F9C0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700017E")]
	public override long Position
	{
		[Token(Token = "0x600073E")]
		[Address(RVA = "0x462F9F0", Offset = "0x462F9F0", VA = "0x462F9F0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600073F")]
		[Address(RVA = "0x462FA20", Offset = "0x462FA20", VA = "0x462FA20", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x1700017F")]
	public override bool CanTimeout
	{
		[Token(Token = "0x600074A")]
		[Address(RVA = "0x46306E0", Offset = "0x46306E0", VA = "0x46306E0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000180")]
	public override int ReadTimeout
	{
		[Token(Token = "0x600074B")]
		[Address(RVA = "0x4630710", Offset = "0x4630710", VA = "0x4630710", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600074C")]
		[Address(RVA = "0x4630740", Offset = "0x4630740", VA = "0x4630740", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000181")]
	public override int WriteTimeout
	{
		[Token(Token = "0x600074D")]
		[Address(RVA = "0x4630770", Offset = "0x4630770", VA = "0x4630770", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600074E")]
		[Address(RVA = "0x46307A0", Offset = "0x46307A0", VA = "0x46307A0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x6000736")]
	[Address(RVA = "0x462A7E0", Offset = "0x462A7E0", VA = "0x462A7E0")]
	internal FtpDataStream(NetworkStream networkStream, FtpWebRequest request, TriState writeOnly)
	{
	}

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x462F330", Offset = "0x462F330", VA = "0x462F330", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x462F4B0", Offset = "0x462F4B0", VA = "0x462F4B0", Slot = "38")]
	private void System_002ENet_002EICloseEx_002ECloseEx(CloseExState closeState)
	{
	}

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x462F930", Offset = "0x462F930", VA = "0x462F930")]
	private void CheckError()
	{
	}

	[Token(Token = "0x6000740")]
	[Address(RVA = "0x462FA50", Offset = "0x462FA50", VA = "0x462FA50", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6000741")]
	[Address(RVA = "0x462FB40", Offset = "0x462FB40", VA = "0x462FB40", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x6000742")]
	[Address(RVA = "0x462FC50", Offset = "0x462FC50", VA = "0x462FC50", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x462FD40", Offset = "0x462FD40", VA = "0x462FD40")]
	private void AsyncReadCallback(IAsyncResult ar)
	{
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x4630010", Offset = "0x4630010", VA = "0x4630010", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000745")]
	[Address(RVA = "0x46301F0", Offset = "0x46301F0", VA = "0x46301F0", Slot = "23")]
	public override int EndRead(IAsyncResult ar)
	{
		return default(int);
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x4630430", Offset = "0x4630430", VA = "0x4630430", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000747")]
	[Address(RVA = "0x4630530", Offset = "0x4630530", VA = "0x4630530", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x4630680", Offset = "0x4630680", VA = "0x4630680", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x46306B0", Offset = "0x46306B0", VA = "0x46306B0", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x46307D0", Offset = "0x46307D0", VA = "0x46307D0")]
	internal void SetSocketTimeoutOption(int timeout)
	{
	}
}
