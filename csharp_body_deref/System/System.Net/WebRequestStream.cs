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

[Token(Token = "0x200034E")]
internal class WebRequestStream : WebConnectionStream
{
	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200034F")]
	[CompilerGenerated]
	private struct _003CFinishWriting_003Ed__31 : IAsyncStateMachine
	{
		[Token(Token = "0x4000D6A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000D6B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000D6C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x4000D6D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000D6E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600171D")]
		[Address(RVA = "0x28023E0", Offset = "0x28009E0", VA = "0x1828023E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600171E")]
		[Address(RVA = "0x28026F0", Offset = "0x2800CF0", VA = "0x1828026F0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000350")]
	[CompilerGenerated]
	private struct _003CWriteAsyncInner_003Ed__33 : IAsyncStateMachine
	{
		[Token(Token = "0x4000D6F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000D70")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000D71")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x4000D72")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public byte[] buffer;

		[Token(Token = "0x4000D73")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int offset;

		[Token(Token = "0x4000D74")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public int size;

		[Token(Token = "0x4000D75")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000D76")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public WebCompletionSource completion;

		[Token(Token = "0x4000D77")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000D78")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private TaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x600171F")]
		[Address(RVA = "0x28083E0", Offset = "0x28069E0", VA = "0x1828083E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001720")]
		[Address(RVA = "0x28089B0", Offset = "0x2806FB0", VA = "0x1828089B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000351")]
	[CompilerGenerated]
	private struct _003CProcessWrite_003Ed__34 : IAsyncStateMachine
	{
		[Token(Token = "0x4000D79")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000D7A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000D7B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x4000D7C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000D7D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int size;

		[Token(Token = "0x4000D7E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public byte[] buffer;

		[Token(Token = "0x4000D7F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public int offset;

		[Token(Token = "0x4000D80")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001721")]
		[Address(RVA = "0x2804180", Offset = "0x2802780", VA = "0x182804180", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001722")]
		[Address(RVA = "0x2804730", Offset = "0x2802D30", VA = "0x182804730", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000352")]
	[CompilerGenerated]
	private struct _003CInitialize_003Ed__36 : IAsyncStateMachine
	{
		[Token(Token = "0x4000D81")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000D82")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000D83")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x4000D84")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000D85")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000D86")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private TaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6001723")]
		[Address(RVA = "0x2802E10", Offset = "0x2801410", VA = "0x182802E10", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001724")]
		[Address(RVA = "0x2803260", Offset = "0x2801860", VA = "0x182803260", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000353")]
	[CompilerGenerated]
	private struct _003CSetHeadersAsync_003Ed__37 : IAsyncStateMachine
	{
		[Token(Token = "0x4000D87")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000D88")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000D89")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x4000D8A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000D8B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool setInternalLength;

		[Token(Token = "0x4000D8C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001725")]
		[Address(RVA = "0x2807BC0", Offset = "0x28061C0", VA = "0x182807BC0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001726")]
		[Address(RVA = "0x2808240", Offset = "0x2806840", VA = "0x182808240", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000354")]
	[CompilerGenerated]
	private struct _003CWriteRequestAsync_003Ed__38 : IAsyncStateMachine
	{
		[Token(Token = "0x4000D8D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000D8E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000D8F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x4000D90")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000D91")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private BufferOffsetSize _003Cbuffer_003E5__2;

		[Token(Token = "0x4000D92")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000D93")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private TaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6001727")]
		[Address(RVA = "0x28094E0", Offset = "0x2807AE0", VA = "0x1828094E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001728")]
		[Address(RVA = "0x2809B40", Offset = "0x2808140", VA = "0x182809B40", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000355")]
	[CompilerGenerated]
	private struct _003CWriteChunkTrailer_inner_003Ed__39 : IAsyncStateMachine
	{
		[Token(Token = "0x4000D94")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000D95")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000D96")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x4000D97")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000D98")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001729")]
		[Address(RVA = "0x2809230", Offset = "0x2807830", VA = "0x182809230", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600172A")]
		[Address(RVA = "0x2809480", Offset = "0x2807A80", VA = "0x182809480", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000356")]
	[CompilerGenerated]
	private struct _003CWriteChunkTrailer_003Ed__40 : IAsyncStateMachine
	{
		[Token(Token = "0x4000D99")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000D9A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000D9B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x4000D9C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationTokenSource _003Ccts_003E5__2;

		[Token(Token = "0x4000D9D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private Task _003CtimeoutTask_003E5__3;

		[Token(Token = "0x4000D9E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable<Task>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000D9F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x600172B")]
		[Address(RVA = "0x2808A10", Offset = "0x2807010", VA = "0x182808A10", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600172C")]
		[Address(RVA = "0x28091D0", Offset = "0x28077D0", VA = "0x1828091D0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000D5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static byte[] crlf;

	[Token(Token = "0x4000D5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private MemoryStream writeBuffer;

	[Token(Token = "0x4000D5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool requestWritten;

	[Token(Token = "0x4000D60")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
	private bool allowBuffering;

	[Token(Token = "0x4000D61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x62")]
	private bool sendChunked;

	[Token(Token = "0x4000D62")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private WebCompletionSource pendingWrite;

	[Token(Token = "0x4000D63")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private long totalWritten;

	[Token(Token = "0x4000D64")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private byte[] headers;

	[Token(Token = "0x4000D65")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private bool headersSent;

	[Token(Token = "0x4000D66")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
	private int completeRequestWritten;

	[Token(Token = "0x4000D67")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private int chunkTrailerWritten;

	[Token(Token = "0x170004FC")]
	internal Stream InnerStream
	{
		[Token(Token = "0x6001707")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004FD")]
	public bool KeepAlive
	{
		[Token(Token = "0x6001708")]
		[Address(RVA = "0xA4D590", Offset = "0xA4BB90", VA = "0x180A4D590")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004FE")]
	public override bool CanRead
	{
		[Token(Token = "0x6001709")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004FF")]
	public override bool CanWrite
	{
		[Token(Token = "0x600170A")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000500")]
	internal bool HasWriteBuffer
	{
		[Token(Token = "0x600170B")]
		[Address(RVA = "0x280D0E0", Offset = "0x280B6E0", VA = "0x18280D0E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000501")]
	internal int WriteBufferLength
	{
		[Token(Token = "0x600170C")]
		[Address(RVA = "0x280D110", Offset = "0x280B710", VA = "0x18280D110")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001706")]
	[Address(RVA = "0x280CF60", Offset = "0x280B560", VA = "0x18280CF60")]
	public WebRequestStream(WebConnection connection, WebOperation operation, Stream stream, WebConnectionTunnel tunnel)
	{
	}

	[Token(Token = "0x600170D")]
	[Address(RVA = "0x280C160", Offset = "0x280A760", VA = "0x18280C160")]
	internal BufferOffsetSize GetWriteBuffer()
	{
		return null;
	}

	[Token(Token = "0x600170E")]
	[Address(RVA = "0x280C060", Offset = "0x280A660", VA = "0x18280C060")]
	[AsyncStateMachine(typeof(_003CFinishWriting_003Ed__31))]
	private Task FinishWriting(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600170F")]
	[Address(RVA = "0x280C7F0", Offset = "0x280ADF0", VA = "0x18280C7F0", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001710")]
	[Address(RVA = "0x280C6D0", Offset = "0x280ACD0", VA = "0x18280C6D0")]
	[AsyncStateMachine(typeof(_003CWriteAsyncInner_003Ed__33))]
	private Task WriteAsyncInner(byte[] buffer, int offset, int size, WebCompletionSource completion, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001711")]
	[Address(RVA = "0x280C3B0", Offset = "0x280A9B0", VA = "0x18280C3B0")]
	[AsyncStateMachine(typeof(_003CProcessWrite_003Ed__34))]
	private Task ProcessWrite(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001712")]
	[Address(RVA = "0x280BD20", Offset = "0x280A320", VA = "0x18280BD20")]
	private void CheckWriteOverflow(long contentLength, long totalWritten, long size)
	{
	}

	[Token(Token = "0x6001713")]
	[Address(RVA = "0x280C280", Offset = "0x280A880", VA = "0x18280C280")]
	[AsyncStateMachine(typeof(_003CInitialize_003Ed__36))]
	internal Task Initialize(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001714")]
	[Address(RVA = "0x280C570", Offset = "0x280AB70", VA = "0x18280C570")]
	[AsyncStateMachine(typeof(_003CSetHeadersAsync_003Ed__37))]
	private Task SetHeadersAsync(bool setInternalLength, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001715")]
	[Address(RVA = "0x280CDC0", Offset = "0x280B3C0", VA = "0x18280CDC0")]
	[AsyncStateMachine(typeof(_003CWriteRequestAsync_003Ed__38))]
	internal Task WriteRequestAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001716")]
	[Address(RVA = "0x280CBD0", Offset = "0x280B1D0", VA = "0x18280CBD0")]
	[AsyncStateMachine(typeof(_003CWriteChunkTrailer_inner_003Ed__39))]
	private Task WriteChunkTrailer_inner(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001717")]
	[Address(RVA = "0x280CCD0", Offset = "0x280B2D0", VA = "0x18280CCD0")]
	[AsyncStateMachine(typeof(_003CWriteChunkTrailer_003Ed__40))]
	private Task WriteChunkTrailer()
	{
		return null;
	}

	[Token(Token = "0x6001718")]
	[Address(RVA = "0x280C390", Offset = "0x280A990", VA = "0x18280C390")]
	internal void KillBuffer()
	{
	}

	[Token(Token = "0x6001719")]
	[Address(RVA = "0x280C4E0", Offset = "0x280AAE0", VA = "0x18280C4E0", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600171A")]
	[Address(RVA = "0x280C690", Offset = "0x280AC90", VA = "0x18280C690", Slot = "38")]
	protected override bool TryReadFromBufferedContent(byte[] buffer, int offset, int count, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x600171B")]
	[Address(RVA = "0x280BDD0", Offset = "0x280A3D0", VA = "0x18280BDD0", Slot = "39")]
	protected override void Close_internal(ref bool disposed)
	{
	}
}
