// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebRequestStream
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

[Token(Token = "0x20001C6")]
internal class WebRequestStream : WebConnectionStream
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001C7")]
	[CompilerGenerated]
	private struct _003CFinishWriting_003Ed__31 : IAsyncStateMachine
	{
		[Token(Token = "0x4000954")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000955")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000956")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x4000957")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000958")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000B5C")]
		[Address(RVA = "0x499C420", Offset = "0x499C420", VA = "0x499C420", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B5D")]
		[Address(RVA = "0x499C850", Offset = "0x499C850", VA = "0x499C850", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001C8")]
	[CompilerGenerated]
	private struct _003CWriteAsyncInner_003Ed__33 : IAsyncStateMachine
	{
		[Token(Token = "0x4000959")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400095A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400095B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x400095C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public byte[] buffer;

		[Token(Token = "0x400095D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int offset;

		[Token(Token = "0x400095E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public int size;

		[Token(Token = "0x400095F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000960")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public WebCompletionSource completion;

		[Token(Token = "0x4000961")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000962")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private TaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000B5E")]
		[Address(RVA = "0x499C8B0", Offset = "0x499C8B0", VA = "0x499C8B0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B5F")]
		[Address(RVA = "0x499CFB0", Offset = "0x499CFB0", VA = "0x499CFB0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001C9")]
	[CompilerGenerated]
	private struct _003CProcessWrite_003Ed__34 : IAsyncStateMachine
	{
		[Token(Token = "0x4000963")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000964")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000965")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x4000966")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000967")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int size;

		[Token(Token = "0x4000968")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public byte[] buffer;

		[Token(Token = "0x4000969")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public int offset;

		[Token(Token = "0x400096A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000B60")]
		[Address(RVA = "0x499D010", Offset = "0x499D010", VA = "0x499D010", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B61")]
		[Address(RVA = "0x499D7A0", Offset = "0x499D7A0", VA = "0x499D7A0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001CA")]
	[CompilerGenerated]
	private struct _003CInitialize_003Ed__36 : IAsyncStateMachine
	{
		[Token(Token = "0x400096B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400096C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400096D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x400096E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400096F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000970")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private TaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000B62")]
		[Address(RVA = "0x499D800", Offset = "0x499D800", VA = "0x499D800", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B63")]
		[Address(RVA = "0x499DCC0", Offset = "0x499DCC0", VA = "0x499DCC0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001CB")]
	[CompilerGenerated]
	private struct _003CSetHeadersAsync_003Ed__37 : IAsyncStateMachine
	{
		[Token(Token = "0x4000971")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000972")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000973")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x4000974")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000975")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool setInternalLength;

		[Token(Token = "0x4000976")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000B64")]
		[Address(RVA = "0x499DD20", Offset = "0x499DD20", VA = "0x499DD20", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B65")]
		[Address(RVA = "0x499E520", Offset = "0x499E520", VA = "0x499E520", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001CC")]
	[CompilerGenerated]
	private struct _003CWriteRequestAsync_003Ed__38 : IAsyncStateMachine
	{
		[Token(Token = "0x4000977")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000978")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000979")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x400097A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400097B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private BufferOffsetSize _003Cbuffer_003E5__2;

		[Token(Token = "0x400097C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x400097D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private TaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000B66")]
		[Address(RVA = "0x499E580", Offset = "0x499E580", VA = "0x499E580", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B67")]
		[Address(RVA = "0x499ED40", Offset = "0x499ED40", VA = "0x499ED40", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001CD")]
	[CompilerGenerated]
	private struct _003CWriteChunkTrailer_inner_003Ed__39 : IAsyncStateMachine
	{
		[Token(Token = "0x400097E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400097F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000980")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x4000981")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000982")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000B68")]
		[Address(RVA = "0x499EDA0", Offset = "0x499EDA0", VA = "0x499EDA0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B69")]
		[Address(RVA = "0x499F0E0", Offset = "0x499F0E0", VA = "0x499F0E0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001CE")]
	[CompilerGenerated]
	private struct _003CWriteChunkTrailer_003Ed__40 : IAsyncStateMachine
	{
		[Token(Token = "0x4000983")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000984")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000985")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x4000986")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationTokenSource _003Ccts_003E5__2;

		[Token(Token = "0x4000987")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private Task _003CtimeoutTask_003E5__3;

		[Token(Token = "0x4000988")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable<Task>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000989")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000B6A")]
		[Address(RVA = "0x499F140", Offset = "0x499F140", VA = "0x499F140", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B6B")]
		[Address(RVA = "0x499FB60", Offset = "0x499FB60", VA = "0x499FB60", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000947")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static byte[] crlf;

	[Token(Token = "0x4000948")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private MemoryStream writeBuffer;

	[Token(Token = "0x4000949")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool requestWritten;

	[Token(Token = "0x400094A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
	private bool allowBuffering;

	[Token(Token = "0x400094B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x62")]
	private bool sendChunked;

	[Token(Token = "0x400094C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private WebCompletionSource pendingWrite;

	[Token(Token = "0x400094D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private long totalWritten;

	[Token(Token = "0x400094E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private byte[] headers;

	[Token(Token = "0x400094F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private bool headersSent;

	[Token(Token = "0x4000950")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
	private int completeRequestWritten;

	[Token(Token = "0x4000951")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private int chunkTrailerWritten;

	[Token(Token = "0x170002A6")]
	internal Stream InnerStream
	{
		[Token(Token = "0x6000B46")]
		[Address(RVA = "0x499B4F0", Offset = "0x499B4F0", VA = "0x499B4F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A7")]
	public bool KeepAlive
	{
		[Token(Token = "0x6000B47")]
		[Address(RVA = "0x499B500", Offset = "0x499B500", VA = "0x499B500")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002A8")]
	public override bool CanRead
	{
		[Token(Token = "0x6000B48")]
		[Address(RVA = "0x499B510", Offset = "0x499B510", VA = "0x499B510", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002A9")]
	public override bool CanWrite
	{
		[Token(Token = "0x6000B49")]
		[Address(RVA = "0x499B520", Offset = "0x499B520", VA = "0x499B520", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002AA")]
	internal bool HasWriteBuffer
	{
		[Token(Token = "0x6000B4A")]
		[Address(RVA = "0x499B530", Offset = "0x499B530", VA = "0x499B530")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002AB")]
	internal int WriteBufferLength
	{
		[Token(Token = "0x6000B4B")]
		[Address(RVA = "0x499B560", Offset = "0x499B560", VA = "0x499B560")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x499B350", Offset = "0x499B350", VA = "0x499B350")]
	public WebRequestStream(WebConnection connection, WebOperation operation, Stream stream, WebConnectionTunnel tunnel)
	{
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x499B5A0", Offset = "0x499B5A0", VA = "0x499B5A0")]
	internal BufferOffsetSize GetWriteBuffer()
	{
		return null;
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x499B680", Offset = "0x499B680", VA = "0x499B680")]
	[AsyncStateMachine(typeof(_003CFinishWriting_003Ed__31))]
	private Task FinishWriting(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x499B770", Offset = "0x499B770", VA = "0x499B770", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x499B9E0", Offset = "0x499B9E0", VA = "0x499B9E0")]
	[AsyncStateMachine(typeof(_003CWriteAsyncInner_003Ed__33))]
	private Task WriteAsyncInner(byte[] buffer, int offset, int size, WebCompletionSource completion, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x499BB30", Offset = "0x499BB30", VA = "0x499BB30")]
	[AsyncStateMachine(typeof(_003CProcessWrite_003Ed__34))]
	private Task ProcessWrite(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x499BC70", Offset = "0x499BC70", VA = "0x499BC70")]
	private void CheckWriteOverflow(long contentLength, long totalWritten, long size)
	{
	}

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x4999D30", Offset = "0x4999D30", VA = "0x4999D30")]
	[AsyncStateMachine(typeof(_003CInitialize_003Ed__36))]
	internal Task Initialize(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x499BD20", Offset = "0x499BD20", VA = "0x499BD20")]
	[AsyncStateMachine(typeof(_003CSetHeadersAsync_003Ed__37))]
	private Task SetHeadersAsync(bool setInternalLength, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x499BE30", Offset = "0x499BE30", VA = "0x499BE30")]
	[AsyncStateMachine(typeof(_003CWriteRequestAsync_003Ed__38))]
	internal Task WriteRequestAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x499BF30", Offset = "0x499BF30", VA = "0x499BF30")]
	[AsyncStateMachine(typeof(_003CWriteChunkTrailer_inner_003Ed__39))]
	private Task WriteChunkTrailer_inner(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x499C020", Offset = "0x499C020", VA = "0x499C020")]
	[AsyncStateMachine(typeof(_003CWriteChunkTrailer_003Ed__40))]
	private Task WriteChunkTrailer()
	{
		return null;
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x499BD00", Offset = "0x499BD00", VA = "0x499BD00")]
	internal void KillBuffer()
	{
	}

	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x499C110", Offset = "0x499C110", VA = "0x499C110", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x499C1B0", Offset = "0x499C1B0", VA = "0x499C1B0", Slot = "38")]
	protected override bool TryReadFromBufferedContent(byte[] buffer, int offset, int count, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x499C1F0", Offset = "0x499C1F0", VA = "0x499C1F0", Slot = "39")]
	protected override void Close_internal(ref bool disposed)
	{
	}
}
