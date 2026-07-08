using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20001C4")]
internal abstract class WebReadStream : Stream
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001C5")]
	[CompilerGenerated]
	private struct _003CReadAsync_003Ed__28 : IAsyncStateMachine
	{
		[Token(Token = "0x400093E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400093F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x4000940")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebReadStream _003C_003E4__this;

		[Token(Token = "0x4000941")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000942")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public byte[] buffer;

		[Token(Token = "0x4000943")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public int offset;

		[Token(Token = "0x4000944")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
		public int size;

		[Token(Token = "0x4000945")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000946")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000B43")]
		[Address(RVA = "0x4675B70", Offset = "0x4675B70", VA = "0x4675B70", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B44")]
		[Address(RVA = "0x46761E0", Offset = "0x46761E0", VA = "0x46761E0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x400093D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private bool disposed;

	[Token(Token = "0x1700029F")]
	public WebOperation Operation
	{
		[Token(Token = "0x6000B2E")]
		[Address(RVA = "0x4674ED0", Offset = "0x4674ED0", VA = "0x4674ED0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A0")]
	protected Stream InnerStream
	{
		[Token(Token = "0x6000B2F")]
		[Address(RVA = "0x4674EE0", Offset = "0x4674EE0", VA = "0x4674EE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A1")]
	public override long Length
	{
		[Token(Token = "0x6000B31")]
		[Address(RVA = "0x4674F70", Offset = "0x4674F70", VA = "0x4674F70", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170002A2")]
	public override long Position
	{
		[Token(Token = "0x6000B32")]
		[Address(RVA = "0x4674FB0", Offset = "0x4674FB0", VA = "0x4674FB0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000B33")]
		[Address(RVA = "0x4674FF0", Offset = "0x4674FF0", VA = "0x4674FF0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x170002A3")]
	public override bool CanSeek
	{
		[Token(Token = "0x6000B34")]
		[Address(RVA = "0x4675030", Offset = "0x4675030", VA = "0x4675030", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002A4")]
	public override bool CanRead
	{
		[Token(Token = "0x6000B35")]
		[Address(RVA = "0x4675040", Offset = "0x4675040", VA = "0x4675040", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002A5")]
	public override bool CanWrite
	{
		[Token(Token = "0x6000B36")]
		[Address(RVA = "0x4675050", Offset = "0x4675050", VA = "0x4675050", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x4674EF0", Offset = "0x4674EF0", VA = "0x4674EF0")]
	public WebReadStream(WebOperation operation, Stream innerStream)
	{
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x4675060", Offset = "0x4675060", VA = "0x4675060", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x46750A0", Offset = "0x46750A0", VA = "0x46750A0", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x46750E0", Offset = "0x46750E0", VA = "0x46750E0", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x4675120", Offset = "0x4675120", VA = "0x4675120", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x4675160", Offset = "0x4675160", VA = "0x4675160")]
	protected Exception GetException(Exception e)
	{
		return null;
	}

	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x46752E0", Offset = "0x46752E0", VA = "0x46752E0", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x46755A0", Offset = "0x46755A0", VA = "0x46755A0", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int size, AsyncCallback cb, object state)
	{
		return null;
	}

	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x46757A0", Offset = "0x46757A0", VA = "0x46757A0", Slot = "23")]
	public override int EndRead(IAsyncResult r)
	{
		return default(int);
	}

	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x46758B0", Offset = "0x46758B0", VA = "0x46758B0", Slot = "24")]
	[AsyncStateMachine(typeof(_003CReadAsync_003Ed__28))]
	public sealed override Task<int> ReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B40")]
	protected abstract Task<int> ProcessReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken);

	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x4675A20", Offset = "0x4675A20", VA = "0x4675A20", Slot = "39")]
	internal virtual Task FinishReading(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x4675B30", Offset = "0x4675B30", VA = "0x4675B30", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}
}
