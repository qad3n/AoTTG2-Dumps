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

[Token(Token = "0x2000345")]
internal abstract class WebConnectionStream : Stream
{
	[Token(Token = "0x4000D0F")]
	[FieldOffset(Offset = "0x28")]
	protected bool closed;

	[Token(Token = "0x4000D10")]
	[FieldOffset(Offset = "0x29")]
	private bool disposed;

	[Token(Token = "0x4000D11")]
	[FieldOffset(Offset = "0x30")]
	private object locker;

	[Token(Token = "0x4000D12")]
	[FieldOffset(Offset = "0x38")]
	private int read_timeout;

	[Token(Token = "0x4000D13")]
	[FieldOffset(Offset = "0x3C")]
	private int write_timeout;

	[Token(Token = "0x170004D8")]
	internal HttpWebRequest Request
	{
		[Token(Token = "0x6001699")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D9")]
	internal WebConnection Connection
	{
		[Token(Token = "0x600169A")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004DA")]
	internal WebOperation Operation
	{
		[Token(Token = "0x600169B")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004DB")]
	internal ServicePoint ServicePoint
	{
		[Token(Token = "0x600169C")]
		[Address(RVA = "0x27F2170", Offset = "0x27F0770", VA = "0x1827F2170")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004DC")]
	public override bool CanTimeout
	{
		[Token(Token = "0x600169D")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004DD")]
	public override int ReadTimeout
	{
		[Token(Token = "0x600169E")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600169F")]
		[Address(RVA = "0x27F21E0", Offset = "0x27F07E0", VA = "0x1827F21E0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x170004DE")]
	public override int WriteTimeout
	{
		[Token(Token = "0x60016A0")]
		[Address(RVA = "0x19CF1C0", Offset = "0x19CD7C0", VA = "0x1819CF1C0", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60016A1")]
		[Address(RVA = "0x27F2250", Offset = "0x27F0850", VA = "0x1827F2250", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x170004DF")]
	public override bool CanSeek
	{
		[Token(Token = "0x60016B1")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004E0")]
	public override long Length
	{
		[Token(Token = "0x60016B2")]
		[Address(RVA = "0x27F20D0", Offset = "0x27F06D0", VA = "0x1827F20D0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170004E1")]
	public override long Position
	{
		[Token(Token = "0x60016B3")]
		[Address(RVA = "0x27F2120", Offset = "0x27F0720", VA = "0x1827F2120", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60016B4")]
		[Address(RVA = "0x27F2190", Offset = "0x27F0790", VA = "0x1827F2190", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6001698")]
	[Address(RVA = "0x27F1FF0", Offset = "0x27F05F0", VA = "0x1827F1FF0")]
	protected WebConnectionStream(WebConnection cnc, WebOperation operation)
	{
	}

	[Token(Token = "0x60016A2")]
	[Address(RVA = "0x27F1920", Offset = "0x27EFF20", VA = "0x1827F1920")]
	protected Exception GetException(Exception e)
	{
		return null;
	}

	[Token(Token = "0x60016A3")]
	protected abstract bool TryReadFromBufferedContent(byte[] buffer, int offset, int count, out int result);

	[Token(Token = "0x60016A4")]
	[Address(RVA = "0x27F1A80", Offset = "0x27F0080", VA = "0x1827F1A80", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016A5")]
	[Address(RVA = "0x27F1260", Offset = "0x27EF860", VA = "0x1827F1260", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback cb, object state)
	{
		return null;
	}

	[Token(Token = "0x60016A6")]
	[Address(RVA = "0x27F16C0", Offset = "0x27EFCC0", VA = "0x1827F16C0", Slot = "23")]
	public override int EndRead(IAsyncResult r)
	{
		return default(int);
	}

	[Token(Token = "0x60016A7")]
	[Address(RVA = "0x27F1480", Offset = "0x27EFA80", VA = "0x1827F1480", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback cb, object state)
	{
		return null;
	}

	[Token(Token = "0x60016A8")]
	[Address(RVA = "0x27F1790", Offset = "0x27EFD90", VA = "0x1827F1790", Slot = "27")]
	public override void EndWrite(IAsyncResult r)
	{
	}

	[Token(Token = "0x60016A9")]
	[Address(RVA = "0x27F1DD0", Offset = "0x27F03D0", VA = "0x1827F1DD0", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x60016AA")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60016AB")]
	[Address(RVA = "0x27F1840", Offset = "0x27EFE40", VA = "0x1827F1840", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60016AC")]
	[Address(RVA = "0x27F1A70", Offset = "0x27F0070", VA = "0x1827F1A70")]
	internal void InternalClose()
	{
	}

	[Token(Token = "0x60016AD")]
	protected abstract void Close_internal(ref bool disposed);

	[Token(Token = "0x60016AE")]
	[Address(RVA = "0x27F16A0", Offset = "0x27EFCA0", VA = "0x1827F16A0", Slot = "18")]
	public override void Close()
	{
	}

	[Token(Token = "0x60016AF")]
	[Address(RVA = "0x27F1D30", Offset = "0x27F0330", VA = "0x1827F1D30", Slot = "30")]
	public override long Seek(long a, SeekOrigin b)
	{
		return default(long);
	}

	[Token(Token = "0x60016B0")]
	[Address(RVA = "0x27F1D80", Offset = "0x27F0380", VA = "0x1827F1D80", Slot = "31")]
	public override void SetLength(long a)
	{
	}
}
