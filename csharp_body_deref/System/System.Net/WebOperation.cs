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
		[Address(RVA = "0x4674210", Offset = "0x4674210", VA = "0x4674210", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B2D")]
		[Address(RVA = "0x4674EC0", Offset = "0x4674EC0", VA = "0x4674EC0", Slot = "5")]
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
		[Address(RVA = "0x4672F90", Offset = "0x4672F90", VA = "0x4672F90")]
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
		[Address(RVA = "0x4672FA0", Offset = "0x4672FA0", VA = "0x4672FA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B0F")]
		[Address(RVA = "0x4672FB0", Offset = "0x4672FB0", VA = "0x4672FB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000298")]
	public ServicePoint ServicePoint
	{
		[Token(Token = "0x6000B10")]
		[Address(RVA = "0x4672FC0", Offset = "0x4672FC0", VA = "0x4672FC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B11")]
		[Address(RVA = "0x4672FD0", Offset = "0x4672FD0", VA = "0x4672FD0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000299")]
	public BufferOffsetSize WriteBuffer
	{
		[Token(Token = "0x6000B12")]
		[Address(RVA = "0x4672FE0", Offset = "0x4672FE0", VA = "0x4672FE0")]
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
		[Address(RVA = "0x4672FF0", Offset = "0x4672FF0", VA = "0x4672FF0")]
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
		[Address(RVA = "0x46731C0", Offset = "0x46731C0", VA = "0x46731C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700029C")]
	public bool Closed
	{
		[Token(Token = "0x6000B16")]
		[Address(RVA = "0x4673210", Offset = "0x4673210", VA = "0x4673210")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700029D")]
	public WebRequestStream WriteStream
	{
		[Token(Token = "0x6000B25")]
		[Address(RVA = "0x4674010", Offset = "0x4674010", VA = "0x4674010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029E")]
	internal WebCompletionSource<(bool, WebOperation)> Finished
	{
		[Token(Token = "0x6000B27")]
		[Address(RVA = "0x46740A0", Offset = "0x46740A0", VA = "0x46740A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x4673000", Offset = "0x4673000", VA = "0x4673000")]
	public WebOperation(HttpWebRequest request, BufferOffsetSize writeBuffer, bool isNtlmChallenge, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x4673260", Offset = "0x4673260", VA = "0x4673260")]
	public void Abort()
	{
	}

	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x4673430", Offset = "0x4673430", VA = "0x4673430")]
	public void Close()
	{
	}

	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x4673370", Offset = "0x4673370", VA = "0x4673370")]
	private void SetCanceled()
	{
	}

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x46737C0", Offset = "0x46737C0", VA = "0x46737C0")]
	private void SetError(Exception error)
	{
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x46732A0", Offset = "0x46732A0", VA = "0x46732A0")]
	private (ExceptionDispatchInfo, bool) SetDisposed(ref ExceptionDispatchInfo field)
	{
		return default((ExceptionDispatchInfo, bool));
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x4673860", Offset = "0x4673860", VA = "0x4673860")]
	internal ExceptionDispatchInfo CheckDisposed(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x4673960", Offset = "0x4673960", VA = "0x4673960")]
	internal void ThrowIfDisposed()
	{
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x46739B0", Offset = "0x46739B0", VA = "0x46739B0")]
	internal void ThrowIfDisposed(CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x4673A70", Offset = "0x4673A70", VA = "0x4673A70")]
	internal void ThrowIfClosedOrDisposed()
	{
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x4673AC0", Offset = "0x4673AC0", VA = "0x4673AC0")]
	internal void ThrowIfClosedOrDisposed(CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x4673910", Offset = "0x4673910", VA = "0x4673910")]
	private ExceptionDispatchInfo CheckThrowDisposed(bool throwIt, ref ExceptionDispatchInfo field)
	{
		return null;
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x4673B90", Offset = "0x4673B90", VA = "0x4673B90")]
	internal void RegisterRequest(ServicePoint servicePoint, WebConnection connection)
	{
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x4673E40", Offset = "0x4673E40", VA = "0x4673E40")]
	public void SetPriorityRequest(WebOperation operation)
	{
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x4673FD0", Offset = "0x4673FD0", VA = "0x4673FD0")]
	internal Task<WebRequestStream> GetRequestStreamInternal()
	{
		return null;
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x4674060", Offset = "0x4674060", VA = "0x4674060")]
	public Task<WebResponseStream> GetResponseStream()
	{
		return null;
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x46740B0", Offset = "0x46740B0", VA = "0x46740B0")]
	[AsyncStateMachine(typeof(_003CRun_003Ed__58))]
	internal void Run()
	{
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x4674170", Offset = "0x4674170", VA = "0x4674170")]
	internal void CompleteRequestWritten(WebRequestStream stream, [Optional] Exception error)
	{
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x46734E0", Offset = "0x46734E0", VA = "0x46734E0")]
	internal void Finish(bool ok, [Optional] Exception error)
	{
	}
}
