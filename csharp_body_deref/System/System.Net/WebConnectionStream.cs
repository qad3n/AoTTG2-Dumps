using System.IO;
using System.Runtime.CompilerServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20001BD")]
internal abstract class WebConnectionStream : Stream
{
	[Token(Token = "0x40008F9")]
	[FieldOffset(Offset = "0x28")]
	protected bool closed;

	[Token(Token = "0x40008FA")]
	[FieldOffset(Offset = "0x29")]
	private bool disposed;

	[Token(Token = "0x40008FB")]
	[FieldOffset(Offset = "0x30")]
	private object locker;

	[Token(Token = "0x40008FC")]
	[FieldOffset(Offset = "0x38")]
	private int read_timeout;

	[Token(Token = "0x40008FD")]
	[FieldOffset(Offset = "0x3C")]
	private int write_timeout;

	[Token(Token = "0x17000282")]
	internal HttpWebRequest Request
	{
		[Token(Token = "0x6000AD8")]
		[Address(RVA = "0x466F9C0", Offset = "0x466F9C0", VA = "0x466F9C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000283")]
	internal WebConnection Connection
	{
		[Token(Token = "0x6000AD9")]
		[Address(RVA = "0x466F9D0", Offset = "0x466F9D0", VA = "0x466F9D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000284")]
	internal WebOperation Operation
	{
		[Token(Token = "0x6000ADA")]
		[Address(RVA = "0x466F9E0", Offset = "0x466F9E0", VA = "0x466F9E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000285")]
	internal ServicePoint ServicePoint
	{
		[Token(Token = "0x6000ADB")]
		[Address(RVA = "0x466F9F0", Offset = "0x466F9F0", VA = "0x466F9F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000286")]
	public override bool CanTimeout
	{
		[Token(Token = "0x6000ADC")]
		[Address(RVA = "0x466FA10", Offset = "0x466FA10", VA = "0x466FA10", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000287")]
	public override int ReadTimeout
	{
		[Token(Token = "0x6000ADD")]
		[Address(RVA = "0x466FA20", Offset = "0x466FA20", VA = "0x466FA20", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000ADE")]
		[Address(RVA = "0x466FA30", Offset = "0x466FA30", VA = "0x466FA30", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000288")]
	public override int WriteTimeout
	{
		[Token(Token = "0x6000ADF")]
		[Address(RVA = "0x466FA90", Offset = "0x466FA90", VA = "0x466FA90", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000AE0")]
		[Address(RVA = "0x466FAA0", Offset = "0x466FAA0", VA = "0x466FAA0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x17000289")]
	public override bool CanSeek
	{
		[Token(Token = "0x6000AF0")]
		[Address(RVA = "0x4670870", Offset = "0x4670870", VA = "0x4670870", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700028A")]
	public override long Length
	{
		[Token(Token = "0x6000AF1")]
		[Address(RVA = "0x4670880", Offset = "0x4670880", VA = "0x4670880", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700028B")]
	public override long Position
	{
		[Token(Token = "0x6000AF2")]
		[Address(RVA = "0x46708D0", Offset = "0x46708D0", VA = "0x46708D0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000AF3")]
		[Address(RVA = "0x4670920", Offset = "0x4670920", VA = "0x4670920", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x466F8D0", Offset = "0x466F8D0", VA = "0x466F8D0")]
	protected WebConnectionStream(WebConnection cnc, WebOperation operation)
	{
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x466FB00", Offset = "0x466FB00", VA = "0x466FB00")]
	protected Exception GetException(Exception e)
	{
		return null;
	}

	[Token(Token = "0x6000AE2")]
	protected abstract bool TryReadFromBufferedContent(byte[] buffer, int offset, int count, out int result);

	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x466FC50", Offset = "0x466FC50", VA = "0x466FC50", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x466FF10", Offset = "0x466FF10", VA = "0x466FF10", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback cb, object state)
	{
		return null;
	}

	[Token(Token = "0x6000AE5")]
	[Address(RVA = "0x46700D0", Offset = "0x46700D0", VA = "0x46700D0", Slot = "23")]
	public override int EndRead(IAsyncResult r)
	{
		return default(int);
	}

	[Token(Token = "0x6000AE6")]
	[Address(RVA = "0x46701E0", Offset = "0x46701E0", VA = "0x46701E0", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback cb, object state)
	{
		return null;
	}

	[Token(Token = "0x6000AE7")]
	[Address(RVA = "0x46703B0", Offset = "0x46703B0", VA = "0x46703B0", Slot = "27")]
	public override void EndWrite(IAsyncResult r)
	{
	}

	[Token(Token = "0x6000AE8")]
	[Address(RVA = "0x46704A0", Offset = "0x46704A0", VA = "0x46704A0", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x46706A0", Offset = "0x46706A0", VA = "0x46706A0", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000AEA")]
	[Address(RVA = "0x46706B0", Offset = "0x46706B0", VA = "0x46706B0", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AEB")]
	[Address(RVA = "0x46617F0", Offset = "0x46617F0", VA = "0x46617F0")]
	internal void InternalClose()
	{
	}

	[Token(Token = "0x6000AEC")]
	protected abstract void Close_internal(ref bool disposed);

	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x46707B0", Offset = "0x46707B0", VA = "0x46707B0", Slot = "18")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x46707D0", Offset = "0x46707D0", VA = "0x46707D0", Slot = "30")]
	public override long Seek(long a, SeekOrigin b)
	{
		return default(long);
	}

	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x4670820", Offset = "0x4670820", VA = "0x4670820", Slot = "31")]
	public override void SetLength(long a)
	{
	}
}
