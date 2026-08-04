// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebConnectionStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4994AC0", Offset = "0x4994AC0", VA = "0x4994AC0")]
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
		[Address(RVA = "0x4994AD0", Offset = "0x4994AD0", VA = "0x4994AD0")]
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
		[Address(RVA = "0x4994AE0", Offset = "0x4994AE0", VA = "0x4994AE0")]
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
		[Address(RVA = "0x4994AF0", Offset = "0x4994AF0", VA = "0x4994AF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000286")]
	public override bool CanTimeout
	{
		[Token(Token = "0x6000ADC")]
		[Address(RVA = "0x4994B10", Offset = "0x4994B10", VA = "0x4994B10", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000287")]
	public override int ReadTimeout
	{
		[Token(Token = "0x6000ADD")]
		[Address(RVA = "0x4994B20", Offset = "0x4994B20", VA = "0x4994B20", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000ADE")]
		[Address(RVA = "0x4994B30", Offset = "0x4994B30", VA = "0x4994B30", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000288")]
	public override int WriteTimeout
	{
		[Token(Token = "0x6000ADF")]
		[Address(RVA = "0x4994B90", Offset = "0x4994B90", VA = "0x4994B90", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000AE0")]
		[Address(RVA = "0x4994BA0", Offset = "0x4994BA0", VA = "0x4994BA0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x17000289")]
	public override bool CanSeek
	{
		[Token(Token = "0x6000AF0")]
		[Address(RVA = "0x4995970", Offset = "0x4995970", VA = "0x4995970", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700028A")]
	public override long Length
	{
		[Token(Token = "0x6000AF1")]
		[Address(RVA = "0x4995980", Offset = "0x4995980", VA = "0x4995980", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700028B")]
	public override long Position
	{
		[Token(Token = "0x6000AF2")]
		[Address(RVA = "0x49959D0", Offset = "0x49959D0", VA = "0x49959D0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000AF3")]
		[Address(RVA = "0x4995A20", Offset = "0x4995A20", VA = "0x4995A20", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x49949D0", Offset = "0x49949D0", VA = "0x49949D0")]
	protected WebConnectionStream(WebConnection cnc, WebOperation operation)
	{
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x4994C00", Offset = "0x4994C00", VA = "0x4994C00")]
	protected Exception GetException(Exception e)
	{
		return null;
	}

	[Token(Token = "0x6000AE2")]
	protected abstract bool TryReadFromBufferedContent(byte[] buffer, int offset, int count, out int result);

	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x4994D50", Offset = "0x4994D50", VA = "0x4994D50", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x4995010", Offset = "0x4995010", VA = "0x4995010", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback cb, object state)
	{
		return null;
	}

	[Token(Token = "0x6000AE5")]
	[Address(RVA = "0x49951D0", Offset = "0x49951D0", VA = "0x49951D0", Slot = "23")]
	public override int EndRead(IAsyncResult r)
	{
		return default(int);
	}

	[Token(Token = "0x6000AE6")]
	[Address(RVA = "0x49952E0", Offset = "0x49952E0", VA = "0x49952E0", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback cb, object state)
	{
		return null;
	}

	[Token(Token = "0x6000AE7")]
	[Address(RVA = "0x49954B0", Offset = "0x49954B0", VA = "0x49954B0", Slot = "27")]
	public override void EndWrite(IAsyncResult r)
	{
	}

	[Token(Token = "0x6000AE8")]
	[Address(RVA = "0x49955A0", Offset = "0x49955A0", VA = "0x49955A0", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x49957A0", Offset = "0x49957A0", VA = "0x49957A0", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000AEA")]
	[Address(RVA = "0x49957B0", Offset = "0x49957B0", VA = "0x49957B0", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AEB")]
	[Address(RVA = "0x49868F0", Offset = "0x49868F0", VA = "0x49868F0")]
	internal void InternalClose()
	{
	}

	[Token(Token = "0x6000AEC")]
	protected abstract void Close_internal(ref bool disposed);

	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x49958B0", Offset = "0x49958B0", VA = "0x49958B0", Slot = "18")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x49958D0", Offset = "0x49958D0", VA = "0x49958D0", Slot = "30")]
	public override long Seek(long a, SeekOrigin b)
	{
		return default(long);
	}

	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x4995920", Offset = "0x4995920", VA = "0x4995920", Slot = "31")]
	public override void SetLength(long a)
	{
	}
}
