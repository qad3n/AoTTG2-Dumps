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
		[Address(RVA = "0x4954A70", Offset = "0x4954A70", VA = "0x4954A70", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017B")]
	public override bool CanSeek
	{
		[Token(Token = "0x600073B")]
		[Address(RVA = "0x4954A80", Offset = "0x4954A80", VA = "0x4954A80", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017C")]
	public override bool CanWrite
	{
		[Token(Token = "0x600073C")]
		[Address(RVA = "0x4954AB0", Offset = "0x4954AB0", VA = "0x4954AB0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017D")]
	public override long Length
	{
		[Token(Token = "0x600073D")]
		[Address(RVA = "0x4954AC0", Offset = "0x4954AC0", VA = "0x4954AC0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700017E")]
	public override long Position
	{
		[Token(Token = "0x600073E")]
		[Address(RVA = "0x4954AF0", Offset = "0x4954AF0", VA = "0x4954AF0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600073F")]
		[Address(RVA = "0x4954B20", Offset = "0x4954B20", VA = "0x4954B20", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x1700017F")]
	public override bool CanTimeout
	{
		[Token(Token = "0x600074A")]
		[Address(RVA = "0x49557E0", Offset = "0x49557E0", VA = "0x49557E0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000180")]
	public override int ReadTimeout
	{
		[Token(Token = "0x600074B")]
		[Address(RVA = "0x4955810", Offset = "0x4955810", VA = "0x4955810", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600074C")]
		[Address(RVA = "0x4955840", Offset = "0x4955840", VA = "0x4955840", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000181")]
	public override int WriteTimeout
	{
		[Token(Token = "0x600074D")]
		[Address(RVA = "0x4955870", Offset = "0x4955870", VA = "0x4955870", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600074E")]
		[Address(RVA = "0x49558A0", Offset = "0x49558A0", VA = "0x49558A0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x6000736")]
	[Address(RVA = "0x494F8E0", Offset = "0x494F8E0", VA = "0x494F8E0")]
	internal FtpDataStream(NetworkStream networkStream, FtpWebRequest request, TriState writeOnly)
	{
	}

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x4954430", Offset = "0x4954430", VA = "0x4954430", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x49545B0", Offset = "0x49545B0", VA = "0x49545B0", Slot = "38")]
	private void System_002ENet_002EICloseEx_002ECloseEx(CloseExState closeState)
	{
	}

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x4954A30", Offset = "0x4954A30", VA = "0x4954A30")]
	private void CheckError()
	{
	}

	[Token(Token = "0x6000740")]
	[Address(RVA = "0x4954B50", Offset = "0x4954B50", VA = "0x4954B50", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6000741")]
	[Address(RVA = "0x4954C40", Offset = "0x4954C40", VA = "0x4954C40", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x6000742")]
	[Address(RVA = "0x4954D50", Offset = "0x4954D50", VA = "0x4954D50", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x4954E40", Offset = "0x4954E40", VA = "0x4954E40")]
	private void AsyncReadCallback(IAsyncResult ar)
	{
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x4955110", Offset = "0x4955110", VA = "0x4955110", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000745")]
	[Address(RVA = "0x49552F0", Offset = "0x49552F0", VA = "0x49552F0", Slot = "23")]
	public override int EndRead(IAsyncResult ar)
	{
		return default(int);
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x4955530", Offset = "0x4955530", VA = "0x4955530", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000747")]
	[Address(RVA = "0x4955630", Offset = "0x4955630", VA = "0x4955630", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x4955780", Offset = "0x4955780", VA = "0x4955780", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x49557B0", Offset = "0x49557B0", VA = "0x49557B0", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x49558D0", Offset = "0x49558D0", VA = "0x49558D0")]
	internal void SetSocketTimeoutOption(int timeout)
	{
	}
}
