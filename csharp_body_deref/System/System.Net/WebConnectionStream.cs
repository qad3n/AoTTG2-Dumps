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

[Token(Token = "0x2000306")]
internal abstract class WebConnectionStream : Stream
{
	[Token(Token = "0x4000C40")]
	[FieldOffset(Offset = "0x28")]
	protected bool closed;

	[Token(Token = "0x4000C41")]
	[FieldOffset(Offset = "0x29")]
	private bool disposed;

	[Token(Token = "0x4000C42")]
	[FieldOffset(Offset = "0x30")]
	private object locker;

	[Token(Token = "0x4000C43")]
	[FieldOffset(Offset = "0x38")]
	private int read_timeout;

	[Token(Token = "0x4000C44")]
	[FieldOffset(Offset = "0x3C")]
	private int write_timeout;

	[Token(Token = "0x170004A9")]
	internal HttpWebRequest Request
	{
		[Token(Token = "0x60014DB")]
		[Address(RVA = "0x6196610", Offset = "0x6195610", VA = "0x6196610")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004AA")]
	internal WebConnection Connection
	{
		[Token(Token = "0x60014DC")]
		[Address(RVA = "0x6196620", Offset = "0x6195620", VA = "0x6196620")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004AB")]
	internal WebOperation Operation
	{
		[Token(Token = "0x60014DD")]
		[Address(RVA = "0x6196630", Offset = "0x6195630", VA = "0x6196630")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004AC")]
	internal ServicePoint ServicePoint
	{
		[Token(Token = "0x60014DE")]
		[Address(RVA = "0x6196640", Offset = "0x6195640", VA = "0x6196640")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004AD")]
	public override bool CanTimeout
	{
		[Token(Token = "0x60014DF")]
		[Address(RVA = "0x6196660", Offset = "0x6195660", VA = "0x6196660", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004AE")]
	public override int ReadTimeout
	{
		[Token(Token = "0x60014E0")]
		[Address(RVA = "0x6196670", Offset = "0x6195670", VA = "0x6196670", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60014E1")]
		[Address(RVA = "0x6196680", Offset = "0x6195680", VA = "0x6196680", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x170004AF")]
	public override int WriteTimeout
	{
		[Token(Token = "0x60014E2")]
		[Address(RVA = "0x61966E0", Offset = "0x61956E0", VA = "0x61966E0", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60014E3")]
		[Address(RVA = "0x61966F0", Offset = "0x61956F0", VA = "0x61966F0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x170004B0")]
	public override bool CanSeek
	{
		[Token(Token = "0x60014F3")]
		[Address(RVA = "0x61974B0", Offset = "0x61964B0", VA = "0x61974B0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004B1")]
	public override long Length
	{
		[Token(Token = "0x60014F4")]
		[Address(RVA = "0x61974C0", Offset = "0x61964C0", VA = "0x61974C0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170004B2")]
	public override long Position
	{
		[Token(Token = "0x60014F5")]
		[Address(RVA = "0x6197510", Offset = "0x6196510", VA = "0x6197510", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60014F6")]
		[Address(RVA = "0x6197560", Offset = "0x6196560", VA = "0x6197560", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x60014DA")]
	[Address(RVA = "0x6196520", Offset = "0x6195520", VA = "0x6196520")]
	protected WebConnectionStream(WebConnection cnc, WebOperation operation)
	{
	}

	[Token(Token = "0x60014E4")]
	[Address(RVA = "0x6196750", Offset = "0x6195750", VA = "0x6196750")]
	protected Exception GetException(Exception e)
	{
		return null;
	}

	[Token(Token = "0x60014E5")]
	protected abstract bool TryReadFromBufferedContent(byte[] buffer, int offset, int count, out int result);

	[Token(Token = "0x60014E6")]
	[Address(RVA = "0x61968A0", Offset = "0x61958A0", VA = "0x61968A0", Slot = "33")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60014E7")]
	[Address(RVA = "0x6196B40", Offset = "0x6195B40", VA = "0x6196B40", Slot = "23")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback cb, object state)
	{
		return null;
	}

	[Token(Token = "0x60014E8")]
	[Address(RVA = "0x6196D10", Offset = "0x6195D10", VA = "0x6196D10", Slot = "24")]
	public override int EndRead(IAsyncResult r)
	{
		return default(int);
	}

	[Token(Token = "0x60014E9")]
	[Address(RVA = "0x6196E20", Offset = "0x6195E20", VA = "0x6196E20", Slot = "27")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback cb, object state)
	{
		return null;
	}

	[Token(Token = "0x60014EA")]
	[Address(RVA = "0x6196FF0", Offset = "0x6195FF0", VA = "0x6196FF0", Slot = "28")]
	public override void EndWrite(IAsyncResult r)
	{
	}

	[Token(Token = "0x60014EB")]
	[Address(RVA = "0x61970E0", Offset = "0x61960E0", VA = "0x61970E0", Slot = "36")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x60014EC")]
	[Address(RVA = "0x61972E0", Offset = "0x61962E0", VA = "0x61972E0", Slot = "21")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60014ED")]
	[Address(RVA = "0x61972F0", Offset = "0x61962F0", VA = "0x61972F0", Slot = "22")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60014EE")]
	[Address(RVA = "0x6188F20", Offset = "0x6187F20", VA = "0x6188F20")]
	internal void InternalClose()
	{
	}

	[Token(Token = "0x60014EF")]
	protected abstract void Close_internal(ref bool disposed);

	[Token(Token = "0x60014F0")]
	[Address(RVA = "0x61973F0", Offset = "0x61963F0", VA = "0x61973F0", Slot = "19")]
	public override void Close()
	{
	}

	[Token(Token = "0x60014F1")]
	[Address(RVA = "0x6197410", Offset = "0x6196410", VA = "0x6197410", Slot = "31")]
	public override long Seek(long a, SeekOrigin b)
	{
		return default(long);
	}

	[Token(Token = "0x60014F2")]
	[Address(RVA = "0x6197460", Offset = "0x6196460", VA = "0x6197460", Slot = "32")]
	public override void SetLength(long a)
	{
	}
}
