// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebReadStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200030D")]
internal abstract class WebReadStream : Stream
{
	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200030E")]
	[CompilerGenerated]
	private struct _003CReadAsync_003Ed__28 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C85")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C86")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x4000C87")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebReadStream _003C_003E4__this;

		[Token(Token = "0x4000C88")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000C89")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public byte[] buffer;

		[Token(Token = "0x4000C8A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public int offset;

		[Token(Token = "0x4000C8B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
		public int size;

		[Token(Token = "0x4000C8C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000C8D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6001546")]
		[Address(RVA = "0x619BBF0", Offset = "0x619ABF0", VA = "0x619BBF0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001547")]
		[Address(RVA = "0x619C200", Offset = "0x619B200", VA = "0x619C200", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000C84")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private bool disposed;

	[Token(Token = "0x170004C6")]
	public WebOperation Operation
	{
		[Token(Token = "0x6001531")]
		[Address(RVA = "0x619AF80", Offset = "0x6199F80", VA = "0x619AF80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004C7")]
	protected Stream InnerStream
	{
		[Token(Token = "0x6001532")]
		[Address(RVA = "0x619AF90", Offset = "0x6199F90", VA = "0x619AF90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004C8")]
	public override long Length
	{
		[Token(Token = "0x6001534")]
		[Address(RVA = "0x619B020", Offset = "0x619A020", VA = "0x619B020", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170004C9")]
	public override long Position
	{
		[Token(Token = "0x6001535")]
		[Address(RVA = "0x619B060", Offset = "0x619A060", VA = "0x619B060", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6001536")]
		[Address(RVA = "0x619B0A0", Offset = "0x619A0A0", VA = "0x619B0A0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x170004CA")]
	public override bool CanSeek
	{
		[Token(Token = "0x6001537")]
		[Address(RVA = "0x619B0E0", Offset = "0x619A0E0", VA = "0x619B0E0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004CB")]
	public override bool CanRead
	{
		[Token(Token = "0x6001538")]
		[Address(RVA = "0x619B0F0", Offset = "0x619A0F0", VA = "0x619B0F0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004CC")]
	public override bool CanWrite
	{
		[Token(Token = "0x6001539")]
		[Address(RVA = "0x619B100", Offset = "0x619A100", VA = "0x619B100", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001533")]
	[Address(RVA = "0x619AFA0", Offset = "0x6199FA0", VA = "0x619AFA0")]
	public WebReadStream(WebOperation operation, Stream innerStream)
	{
	}

	[Token(Token = "0x600153A")]
	[Address(RVA = "0x619B110", Offset = "0x619A110", VA = "0x619B110", Slot = "32")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x600153B")]
	[Address(RVA = "0x619B150", Offset = "0x619A150", VA = "0x619B150", Slot = "31")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x600153C")]
	[Address(RVA = "0x619B190", Offset = "0x619A190", VA = "0x619B190", Slot = "36")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x600153D")]
	[Address(RVA = "0x619B1D0", Offset = "0x619A1D0", VA = "0x619B1D0", Slot = "21")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600153E")]
	[Address(RVA = "0x619B210", Offset = "0x619A210", VA = "0x619B210")]
	protected Exception GetException(Exception e)
	{
		return null;
	}

	[Token(Token = "0x600153F")]
	[Address(RVA = "0x619B390", Offset = "0x619A390", VA = "0x619B390", Slot = "33")]
	public override int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x6001540")]
	[Address(RVA = "0x619B630", Offset = "0x619A630", VA = "0x619B630", Slot = "23")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int size, AsyncCallback cb, object state)
	{
		return null;
	}

	[Token(Token = "0x6001541")]
	[Address(RVA = "0x619B840", Offset = "0x619A840", VA = "0x619B840", Slot = "24")]
	public override int EndRead(IAsyncResult r)
	{
		return default(int);
	}

	[Token(Token = "0x6001542")]
	[Address(RVA = "0x619B950", Offset = "0x619A950", VA = "0x619B950", Slot = "25")]
	[AsyncStateMachine(typeof(_003CReadAsync_003Ed__28))]
	public sealed override Task<int> ReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001543")]
	protected abstract Task<int> ProcessReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken);

	[Token(Token = "0x6001544")]
	[Address(RVA = "0x619BAA0", Offset = "0x619AAA0", VA = "0x619BAA0", Slot = "40")]
	internal virtual Task FinishReading(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001545")]
	[Address(RVA = "0x619BBB0", Offset = "0x619ABB0", VA = "0x619BBB0", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}
}
