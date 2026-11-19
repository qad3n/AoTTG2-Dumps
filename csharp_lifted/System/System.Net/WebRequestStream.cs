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

[Token(Token = "0x200030F")]
internal class WebRequestStream : WebConnectionStream
{
	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000310")]
	[CompilerGenerated]
	private struct _003CFinishWriting_003Ed__31 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C9B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C9C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000C9D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x4000C9E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000C9F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600155F")]
		[Address(RVA = "0x619D2C0", Offset = "0x619C2C0", VA = "0x619D2C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001560")]
		[Address(RVA = "0x619D650", Offset = "0x619C650", VA = "0x619D650", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000311")]
	[CompilerGenerated]
	private struct _003CWriteAsyncInner_003Ed__33 : IAsyncStateMachine
	{
		[Token(Token = "0x4000CA0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000CA1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000CA2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x4000CA3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public byte[] buffer;

		[Token(Token = "0x4000CA4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int offset;

		[Token(Token = "0x4000CA5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public int size;

		[Token(Token = "0x4000CA6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000CA7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public WebCompletionSource completion;

		[Token(Token = "0x4000CA8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000CA9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private TaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6001561")]
		[Address(RVA = "0x619D6B0", Offset = "0x619C6B0", VA = "0x619D6B0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001562")]
		[Address(RVA = "0x619DC20", Offset = "0x619CC20", VA = "0x619DC20", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000312")]
	[CompilerGenerated]
	private struct _003CProcessWrite_003Ed__34 : IAsyncStateMachine
	{
		[Token(Token = "0x4000CAA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000CAB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000CAC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x4000CAD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000CAE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int size;

		[Token(Token = "0x4000CAF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public byte[] buffer;

		[Token(Token = "0x4000CB0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public int offset;

		[Token(Token = "0x4000CB1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001563")]
		[Address(RVA = "0x619DC80", Offset = "0x619CC80", VA = "0x619DC80", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001564")]
		[Address(RVA = "0x619E250", Offset = "0x619D250", VA = "0x619E250", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000313")]
	[CompilerGenerated]
	private struct _003CInitialize_003Ed__36 : IAsyncStateMachine
	{
		[Token(Token = "0x4000CB2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000CB3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000CB4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x4000CB5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000CB6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000CB7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private TaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6001565")]
		[Address(RVA = "0x619E2B0", Offset = "0x619D2B0", VA = "0x619E2B0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001566")]
		[Address(RVA = "0x619E680", Offset = "0x619D680", VA = "0x619E680", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000314")]
	[CompilerGenerated]
	private struct _003CSetHeadersAsync_003Ed__37 : IAsyncStateMachine
	{
		[Token(Token = "0x4000CB8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000CB9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000CBA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x4000CBB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000CBC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool setInternalLength;

		[Token(Token = "0x4000CBD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001567")]
		[Address(RVA = "0x619E6E0", Offset = "0x619D6E0", VA = "0x619E6E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001568")]
		[Address(RVA = "0x619EE30", Offset = "0x619DE30", VA = "0x619EE30", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000315")]
	[CompilerGenerated]
	private struct _003CWriteRequestAsync_003Ed__38 : IAsyncStateMachine
	{
		[Token(Token = "0x4000CBE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000CBF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000CC0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x4000CC1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000CC2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private BufferOffsetSize _003Cbuffer_003E5__2;

		[Token(Token = "0x4000CC3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000CC4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private TaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6001569")]
		[Address(RVA = "0x619EE90", Offset = "0x619DE90", VA = "0x619EE90", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600156A")]
		[Address(RVA = "0x619F450", Offset = "0x619E450", VA = "0x619F450", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000316")]
	[CompilerGenerated]
	private struct _003CWriteChunkTrailer_inner_003Ed__39 : IAsyncStateMachine
	{
		[Token(Token = "0x4000CC5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000CC6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000CC7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x4000CC8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000CC9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600156B")]
		[Address(RVA = "0x619F4B0", Offset = "0x619E4B0", VA = "0x619F4B0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600156C")]
		[Address(RVA = "0x619F760", Offset = "0x619E760", VA = "0x619F760", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000317")]
	[CompilerGenerated]
	private struct _003CWriteChunkTrailer_003Ed__40 : IAsyncStateMachine
	{
		[Token(Token = "0x4000CCA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000CCB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000CCC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebRequestStream _003C_003E4__this;

		[Token(Token = "0x4000CCD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private CancellationTokenSource _003Ccts_003E5__2;

		[Token(Token = "0x4000CCE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private Task _003CtimeoutTask_003E5__3;

		[Token(Token = "0x4000CCF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable<Task>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000CD0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x600156D")]
		[Address(RVA = "0x619F7C0", Offset = "0x619E7C0", VA = "0x619F7C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600156E")]
		[Address(RVA = "0x61A0030", Offset = "0x619F030", VA = "0x61A0030", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000C8E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static byte[] crlf;

	[Token(Token = "0x4000C8F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private MemoryStream writeBuffer;

	[Token(Token = "0x4000C90")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool requestWritten;

	[Token(Token = "0x4000C91")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
	private bool allowBuffering;

	[Token(Token = "0x4000C92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x62")]
	private bool sendChunked;

	[Token(Token = "0x4000C93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private WebCompletionSource pendingWrite;

	[Token(Token = "0x4000C94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private long totalWritten;

	[Token(Token = "0x4000C95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private byte[] headers;

	[Token(Token = "0x4000C96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private bool headersSent;

	[Token(Token = "0x4000C97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
	private int completeRequestWritten;

	[Token(Token = "0x4000C98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private int chunkTrailerWritten;

	[Token(Token = "0x170004CD")]
	internal Stream InnerStream
	{
		[Token(Token = "0x6001549")]
		[Address(RVA = "0x619C400", Offset = "0x619B400", VA = "0x619C400")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CE")]
	public bool KeepAlive
	{
		[Token(Token = "0x600154A")]
		[Address(RVA = "0x619C410", Offset = "0x619B410", VA = "0x619C410")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004CF")]
	public override bool CanRead
	{
		[Token(Token = "0x600154B")]
		[Address(RVA = "0x619C420", Offset = "0x619B420", VA = "0x619C420", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004D0")]
	public override bool CanWrite
	{
		[Token(Token = "0x600154C")]
		[Address(RVA = "0x619C430", Offset = "0x619B430", VA = "0x619C430", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004D1")]
	internal bool HasWriteBuffer
	{
		[Token(Token = "0x600154D")]
		[Address(RVA = "0x619C440", Offset = "0x619B440", VA = "0x619C440")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004D2")]
	internal int WriteBufferLength
	{
		[Token(Token = "0x600154E")]
		[Address(RVA = "0x619C470", Offset = "0x619B470", VA = "0x619C470")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001548")]
	[Address(RVA = "0x619C270", Offset = "0x619B270", VA = "0x619C270")]
	public WebRequestStream(WebConnection connection, WebOperation operation, Stream stream, WebConnectionTunnel tunnel)
	{
	}

	[Token(Token = "0x600154F")]
	[Address(RVA = "0x619C4B0", Offset = "0x619B4B0", VA = "0x619C4B0")]
	internal BufferOffsetSize GetWriteBuffer()
	{
		return null;
	}

	[Token(Token = "0x6001550")]
	[Address(RVA = "0x619C580", Offset = "0x619B580", VA = "0x619C580")]
	[AsyncStateMachine(typeof(_003CFinishWriting_003Ed__31))]
	private Task FinishWriting(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001551")]
	[Address(RVA = "0x619C670", Offset = "0x619B670", VA = "0x619C670", Slot = "29")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001552")]
	[Address(RVA = "0x619C8E0", Offset = "0x619B8E0", VA = "0x619C8E0")]
	[AsyncStateMachine(typeof(_003CWriteAsyncInner_003Ed__33))]
	private Task WriteAsyncInner(byte[] buffer, int offset, int size, WebCompletionSource completion, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001553")]
	[Address(RVA = "0x619CA20", Offset = "0x619BA20", VA = "0x619CA20")]
	[AsyncStateMachine(typeof(_003CProcessWrite_003Ed__34))]
	private Task ProcessWrite(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001554")]
	[Address(RVA = "0x619CB40", Offset = "0x619BB40", VA = "0x619CB40")]
	private void CheckWriteOverflow(long contentLength, long totalWritten, long size)
	{
	}

	[Token(Token = "0x6001555")]
	[Address(RVA = "0x619AD00", Offset = "0x6199D00", VA = "0x619AD00")]
	[AsyncStateMachine(typeof(_003CInitialize_003Ed__36))]
	internal Task Initialize(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001556")]
	[Address(RVA = "0x619CBF0", Offset = "0x619BBF0", VA = "0x619CBF0")]
	[AsyncStateMachine(typeof(_003CSetHeadersAsync_003Ed__37))]
	private Task SetHeadersAsync(bool setInternalLength, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001557")]
	[Address(RVA = "0x619CCF0", Offset = "0x619BCF0", VA = "0x619CCF0")]
	[AsyncStateMachine(typeof(_003CWriteRequestAsync_003Ed__38))]
	internal Task WriteRequestAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001558")]
	[Address(RVA = "0x619CDE0", Offset = "0x619BDE0", VA = "0x619CDE0")]
	[AsyncStateMachine(typeof(_003CWriteChunkTrailer_inner_003Ed__39))]
	private Task WriteChunkTrailer_inner(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001559")]
	[Address(RVA = "0x619CED0", Offset = "0x619BED0", VA = "0x619CED0")]
	[AsyncStateMachine(typeof(_003CWriteChunkTrailer_003Ed__40))]
	private Task WriteChunkTrailer()
	{
		return null;
	}

	[Token(Token = "0x600155A")]
	[Address(RVA = "0x619CBD0", Offset = "0x619BBD0", VA = "0x619CBD0")]
	internal void KillBuffer()
	{
	}

	[Token(Token = "0x600155B")]
	[Address(RVA = "0x619CFB0", Offset = "0x619BFB0", VA = "0x619CFB0", Slot = "25")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600155C")]
	[Address(RVA = "0x619D050", Offset = "0x619C050", VA = "0x619D050", Slot = "39")]
	protected override bool TryReadFromBufferedContent(byte[] buffer, int offset, int count, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x600155D")]
	[Address(RVA = "0x619D090", Offset = "0x619C090", VA = "0x619D090", Slot = "40")]
	protected override void Close_internal(ref bool disposed)
	{
	}
}
