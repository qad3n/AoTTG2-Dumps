// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebOperation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.ExceptionServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20001C2")]
internal class WebOperation
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001C3")]
	[CompilerGenerated]
	private struct _003CRun_003Ed__58 : IAsyncStateMachine
	{
		[Token(Token = "0x4000934")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000935")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000936")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebOperation _003C_003E4__this;

		[Token(Token = "0x4000937")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private WebRequestStream _003CrequestStream_003E5__2;

		[Token(Token = "0x4000938")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private WebResponseStream _003Cstream_003E5__3;

		[Token(Token = "0x4000939")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<WebRequestStream>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x400093A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000B2C")]
		[Address(RVA = "0x4999310", Offset = "0x4999310", VA = "0x4999310", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B2D")]
		[Address(RVA = "0x4999FC0", Offset = "0x4999FC0", VA = "0x4999FC0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000928")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private CancellationTokenSource cts;

	[Token(Token = "0x4000929")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private WebCompletionSource<WebRequestStream> requestTask;

	[Token(Token = "0x400092A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private WebCompletionSource<WebRequestStream> requestWrittenTask;

	[Token(Token = "0x400092B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private WebCompletionSource<WebResponseStream> responseTask;

	[Token(Token = "0x400092C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private WebCompletionSource<(bool, WebOperation)> finishedTask;

	[Token(Token = "0x400092D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private WebRequestStream writeStream;

	[Token(Token = "0x400092E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private WebResponseStream responseStream;

	[Token(Token = "0x400092F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private ExceptionDispatchInfo disposedInfo;

	[Token(Token = "0x4000930")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private ExceptionDispatchInfo closedInfo;

	[Token(Token = "0x4000931")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private WebOperation priorityRequest;

	[Token(Token = "0x4000932")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private int requestSent;

	[Token(Token = "0x4000933")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private int finished;

	[Token(Token = "0x17000296")]
	public HttpWebRequest Request
	{
		[Token(Token = "0x6000B0D")]
		[Address(RVA = "0x4998090", Offset = "0x4998090", VA = "0x4998090")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000297")]
	public WebConnection Connection
	{
		[Token(Token = "0x6000B0E")]
		[Address(RVA = "0x49980A0", Offset = "0x49980A0", VA = "0x49980A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B0F")]
		[Address(RVA = "0x49980B0", Offset = "0x49980B0", VA = "0x49980B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000298")]
	public ServicePoint ServicePoint
	{
		[Token(Token = "0x6000B10")]
		[Address(RVA = "0x49980C0", Offset = "0x49980C0", VA = "0x49980C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B11")]
		[Address(RVA = "0x49980D0", Offset = "0x49980D0", VA = "0x49980D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000299")]
	public BufferOffsetSize WriteBuffer
	{
		[Token(Token = "0x6000B12")]
		[Address(RVA = "0x49980E0", Offset = "0x49980E0", VA = "0x49980E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029A")]
	public bool IsNtlmChallenge
	{
		[Token(Token = "0x6000B13")]
		[Address(RVA = "0x49980F0", Offset = "0x49980F0", VA = "0x49980F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700029B")]
	public bool Aborted
	{
		[Token(Token = "0x6000B15")]
		[Address(RVA = "0x49982C0", Offset = "0x49982C0", VA = "0x49982C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700029C")]
	public bool Closed
	{
		[Token(Token = "0x6000B16")]
		[Address(RVA = "0x4998310", Offset = "0x4998310", VA = "0x4998310")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700029D")]
	public WebRequestStream WriteStream
	{
		[Token(Token = "0x6000B25")]
		[Address(RVA = "0x4999110", Offset = "0x4999110", VA = "0x4999110")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029E")]
	internal WebCompletionSource<(bool, WebOperation)> Finished
	{
		[Token(Token = "0x6000B27")]
		[Address(RVA = "0x49991A0", Offset = "0x49991A0", VA = "0x49991A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x4998100", Offset = "0x4998100", VA = "0x4998100")]
	public WebOperation(HttpWebRequest request, BufferOffsetSize writeBuffer, bool isNtlmChallenge, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x4998360", Offset = "0x4998360", VA = "0x4998360")]
	public void Abort()
	{
	}

	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x4998530", Offset = "0x4998530", VA = "0x4998530")]
	public void Close()
	{
	}

	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x4998470", Offset = "0x4998470", VA = "0x4998470")]
	private void SetCanceled()
	{
	}

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x49988C0", Offset = "0x49988C0", VA = "0x49988C0")]
	private void SetError(Exception error)
	{
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x49983A0", Offset = "0x49983A0", VA = "0x49983A0")]
	private (ExceptionDispatchInfo, bool) SetDisposed(ref ExceptionDispatchInfo field)
	{
		return default((ExceptionDispatchInfo, bool));
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x4998960", Offset = "0x4998960", VA = "0x4998960")]
	internal ExceptionDispatchInfo CheckDisposed(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x4998A60", Offset = "0x4998A60", VA = "0x4998A60")]
	internal void ThrowIfDisposed()
	{
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x4998AB0", Offset = "0x4998AB0", VA = "0x4998AB0")]
	internal void ThrowIfDisposed(CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x4998B70", Offset = "0x4998B70", VA = "0x4998B70")]
	internal void ThrowIfClosedOrDisposed()
	{
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x4998BC0", Offset = "0x4998BC0", VA = "0x4998BC0")]
	internal void ThrowIfClosedOrDisposed(CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x4998A10", Offset = "0x4998A10", VA = "0x4998A10")]
	private ExceptionDispatchInfo CheckThrowDisposed(bool throwIt, ref ExceptionDispatchInfo field)
	{
		return null;
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x4998C90", Offset = "0x4998C90", VA = "0x4998C90")]
	internal void RegisterRequest(ServicePoint servicePoint, WebConnection connection)
	{
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x4998F40", Offset = "0x4998F40", VA = "0x4998F40")]
	public void SetPriorityRequest(WebOperation operation)
	{
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x49990D0", Offset = "0x49990D0", VA = "0x49990D0")]
	internal Task<WebRequestStream> GetRequestStreamInternal()
	{
		return null;
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x4999160", Offset = "0x4999160", VA = "0x4999160")]
	public Task<WebResponseStream> GetResponseStream()
	{
		return null;
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x49991B0", Offset = "0x49991B0", VA = "0x49991B0")]
	[AsyncStateMachine(typeof(_003CRun_003Ed__58))]
	internal void Run()
	{
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x4999270", Offset = "0x4999270", VA = "0x4999270")]
	internal void CompleteRequestWritten(WebRequestStream stream, [Optional] Exception error)
	{
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x49985E0", Offset = "0x49985E0", VA = "0x49985E0")]
	internal void Finish(bool ok, [Optional] Exception error)
	{
	}
}
