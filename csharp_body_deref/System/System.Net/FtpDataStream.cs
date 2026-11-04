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

[Token(Token = "0x20002B2")]
internal class FtpDataStream : Stream, ICloseEx
{
	[Token(Token = "0x40009E2")]
	[FieldOffset(Offset = "0x28")]
	private FtpWebRequest _request;

	[Token(Token = "0x40009E3")]
	[FieldOffset(Offset = "0x30")]
	private NetworkStream _networkStream;

	[Token(Token = "0x40009E4")]
	[FieldOffset(Offset = "0x38")]
	private bool _writeable;

	[Token(Token = "0x40009E5")]
	[FieldOffset(Offset = "0x39")]
	private bool _readable;

	[Token(Token = "0x40009E6")]
	[FieldOffset(Offset = "0x3A")]
	private bool _isFullyRead;

	[Token(Token = "0x40009E7")]
	[FieldOffset(Offset = "0x3B")]
	private bool _closing;

	[Token(Token = "0x170003CF")]
	public override bool CanRead
	{
		[Token(Token = "0x60012F9")]
		[Address(RVA = "0xF1D4C0", Offset = "0xF1BAC0", VA = "0x180F1D4C0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003D0")]
	public override bool CanSeek
	{
		[Token(Token = "0x60012FA")]
		[Address(RVA = "0x1AFADD0", Offset = "0x1AF93D0", VA = "0x181AFADD0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003D1")]
	public override bool CanWrite
	{
		[Token(Token = "0x60012FB")]
		[Address(RVA = "0xF1D190", Offset = "0xF1B790", VA = "0x180F1D190", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003D2")]
	public override long Length
	{
		[Token(Token = "0x60012FC")]
		[Address(RVA = "0x1AFB2E0", Offset = "0x1AF98E0", VA = "0x181AFB2E0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170003D3")]
	public override long Position
	{
		[Token(Token = "0x60012FD")]
		[Address(RVA = "0x1AFB310", Offset = "0x1AF9910", VA = "0x181AFB310", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60012FE")]
		[Address(RVA = "0x1A24CA0", Offset = "0x1A232A0", VA = "0x181A24CA0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x170003D4")]
	public override bool CanTimeout
	{
		[Token(Token = "0x6001309")]
		[Address(RVA = "0x27D0D30", Offset = "0x27CF330", VA = "0x1827D0D30", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003D5")]
	public override int ReadTimeout
	{
		[Token(Token = "0x600130A")]
		[Address(RVA = "0x27D0D60", Offset = "0x27CF360", VA = "0x1827D0D60", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600130B")]
		[Address(RVA = "0x1A24E40", Offset = "0x1A23440", VA = "0x181A24E40", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x170003D6")]
	public override int WriteTimeout
	{
		[Token(Token = "0x600130C")]
		[Address(RVA = "0x27D0EC0", Offset = "0x27CF4C0", VA = "0x1827D0EC0", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600130D")]
		[Address(RVA = "0x1A26CC0", Offset = "0x1A252C0", VA = "0x181A26CC0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x60012F5")]
	[Address(RVA = "0x28F82D0", Offset = "0x28F68D0", VA = "0x1828F82D0")]
	internal FtpDataStream(NetworkStream networkStream, FtpWebRequest request, TriState writeOnly)
	{
	}

	[Token(Token = "0x60012F6")]
	[Address(RVA = "0x28F79F0", Offset = "0x28F5FF0", VA = "0x1828F79F0", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60012F7")]
	[Address(RVA = "0x28F7E50", Offset = "0x28F6450", VA = "0x1828F7E50", Slot = "38")]
	private void System_002ENet_002EICloseEx_002ECloseEx(CloseExState closeState)
	{
	}

	[Token(Token = "0x60012F8")]
	[Address(RVA = "0x28F79A0", Offset = "0x28F5FA0", VA = "0x1828F79A0")]
	private void CheckError()
	{
	}

	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x28F7DB0", Offset = "0x28F63B0", VA = "0x1828F7DB0", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6001300")]
	[Address(RVA = "0x28F7CE0", Offset = "0x28F62E0", VA = "0x1828F7CE0", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x6001301")]
	[Address(RVA = "0x28F8230", Offset = "0x28F6830", VA = "0x1828F8230", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6001302")]
	[Address(RVA = "0x28F75F0", Offset = "0x28F5BF0", VA = "0x1828F75F0")]
	private void AsyncReadCallback(IAsyncResult ar)
	{
	}

	[Token(Token = "0x6001303")]
	[Address(RVA = "0x28F7760", Offset = "0x28F5D60", VA = "0x1828F7760", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001304")]
	[Address(RVA = "0x28F7AB0", Offset = "0x28F60B0", VA = "0x1828F7AB0", Slot = "23")]
	public override int EndRead(IAsyncResult ar)
	{
		return default(int);
	}

	[Token(Token = "0x6001305")]
	[Address(RVA = "0x28F78E0", Offset = "0x28F5EE0", VA = "0x1828F78E0", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001306")]
	[Address(RVA = "0x28F7C30", Offset = "0x28F6230", VA = "0x1828F7C30", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6001307")]
	[Address(RVA = "0x27D0AF0", Offset = "0x27CF0F0", VA = "0x1827D0AF0", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6001308")]
	[Address(RVA = "0x27D0BB0", Offset = "0x27CF1B0", VA = "0x1827D0BB0", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x600130E")]
	[Address(RVA = "0x27D0BE0", Offset = "0x27CF1E0", VA = "0x1827D0BE0")]
	internal void SetSocketTimeoutOption(int timeout)
	{
	}
}
