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

[Token(Token = "0x200030B")]
internal class WebOperation
{
	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200030C")]
	[CompilerGenerated]
	private struct _003CRun_003Ed__58 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C7B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C7C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000C7D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebOperation _003C_003E4__this;

		[Token(Token = "0x4000C7E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private WebRequestStream _003CrequestStream_003E5__2;

		[Token(Token = "0x4000C7F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private WebResponseStream _003Cstream_003E5__3;

		[Token(Token = "0x4000C80")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<WebRequestStream>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000C81")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x600152F")]
		[Address(RVA = "0x619A600", Offset = "0x6199600", VA = "0x619A600", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001530")]
		[Address(RVA = "0x619AF70", Offset = "0x6199F70", VA = "0x619AF70", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000C6F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private CancellationTokenSource cts;

	[Token(Token = "0x4000C70")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private WebCompletionSource<WebRequestStream> requestTask;

	[Token(Token = "0x4000C71")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private WebCompletionSource<WebRequestStream> requestWrittenTask;

	[Token(Token = "0x4000C72")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private WebCompletionSource<WebResponseStream> responseTask;

	[Token(Token = "0x4000C73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private WebCompletionSource<(bool, WebOperation)> finishedTask;

	[Token(Token = "0x4000C74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private WebRequestStream writeStream;

	[Token(Token = "0x4000C75")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private WebResponseStream responseStream;

	[Token(Token = "0x4000C76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private ExceptionDispatchInfo disposedInfo;

	[Token(Token = "0x4000C77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private ExceptionDispatchInfo closedInfo;

	[Token(Token = "0x4000C78")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private WebOperation priorityRequest;

	[Token(Token = "0x4000C79")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private int requestSent;

	[Token(Token = "0x4000C7A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private int finished;

	[Token(Token = "0x170004BD")]
	public HttpWebRequest Request
	{
		[Token(Token = "0x6001510")]
		[Address(RVA = "0x6199340", Offset = "0x6198340", VA = "0x6199340")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004BE")]
	public WebConnection Connection
	{
		[Token(Token = "0x6001511")]
		[Address(RVA = "0x6199350", Offset = "0x6198350", VA = "0x6199350")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001512")]
		[Address(RVA = "0x6199360", Offset = "0x6198360", VA = "0x6199360")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170004BF")]
	public ServicePoint ServicePoint
	{
		[Token(Token = "0x6001513")]
		[Address(RVA = "0x6199370", Offset = "0x6198370", VA = "0x6199370")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001514")]
		[Address(RVA = "0x6199380", Offset = "0x6198380", VA = "0x6199380")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170004C0")]
	public BufferOffsetSize WriteBuffer
	{
		[Token(Token = "0x6001515")]
		[Address(RVA = "0x6199390", Offset = "0x6198390", VA = "0x6199390")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004C1")]
	public bool IsNtlmChallenge
	{
		[Token(Token = "0x6001516")]
		[Address(RVA = "0x61993A0", Offset = "0x61983A0", VA = "0x61993A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C2")]
	public bool Aborted
	{
		[Token(Token = "0x6001518")]
		[Address(RVA = "0x6199570", Offset = "0x6198570", VA = "0x6199570")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C3")]
	public bool Closed
	{
		[Token(Token = "0x6001519")]
		[Address(RVA = "0x61995C0", Offset = "0x61985C0", VA = "0x61995C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C4")]
	public WebRequestStream WriteStream
	{
		[Token(Token = "0x6001528")]
		[Address(RVA = "0x619A410", Offset = "0x6199410", VA = "0x619A410")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004C5")]
	internal WebCompletionSource<(bool, WebOperation)> Finished
	{
		[Token(Token = "0x600152A")]
		[Address(RVA = "0x619A4A0", Offset = "0x61994A0", VA = "0x619A4A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001517")]
	[Address(RVA = "0x61993B0", Offset = "0x61983B0", VA = "0x61993B0")]
	public WebOperation(HttpWebRequest request, BufferOffsetSize writeBuffer, bool isNtlmChallenge, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x600151A")]
	[Address(RVA = "0x6199610", Offset = "0x6198610", VA = "0x6199610")]
	public void Abort()
	{
	}

	[Token(Token = "0x600151B")]
	[Address(RVA = "0x61997E0", Offset = "0x61987E0", VA = "0x61997E0")]
	public void Close()
	{
	}

	[Token(Token = "0x600151C")]
	[Address(RVA = "0x6199720", Offset = "0x6198720", VA = "0x6199720")]
	private void SetCanceled()
	{
	}

	[Token(Token = "0x600151D")]
	[Address(RVA = "0x6199C10", Offset = "0x6198C10", VA = "0x6199C10")]
	private void SetError(Exception error)
	{
	}

	[Token(Token = "0x600151E")]
	[Address(RVA = "0x6199650", Offset = "0x6198650", VA = "0x6199650")]
	private (ExceptionDispatchInfo, bool) SetDisposed(ref ExceptionDispatchInfo field)
	{
		return default((ExceptionDispatchInfo, bool));
	}

	[Token(Token = "0x600151F")]
	[Address(RVA = "0x6199CB0", Offset = "0x6198CB0", VA = "0x6199CB0")]
	internal ExceptionDispatchInfo CheckDisposed(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001520")]
	[Address(RVA = "0x6199DB0", Offset = "0x6198DB0", VA = "0x6199DB0")]
	internal void ThrowIfDisposed()
	{
	}

	[Token(Token = "0x6001521")]
	[Address(RVA = "0x6199E00", Offset = "0x6198E00", VA = "0x6199E00")]
	internal void ThrowIfDisposed(CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6001522")]
	[Address(RVA = "0x6199EC0", Offset = "0x6198EC0", VA = "0x6199EC0")]
	internal void ThrowIfClosedOrDisposed()
	{
	}

	[Token(Token = "0x6001523")]
	[Address(RVA = "0x6199F10", Offset = "0x6198F10", VA = "0x6199F10")]
	internal void ThrowIfClosedOrDisposed(CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6001524")]
	[Address(RVA = "0x6199D60", Offset = "0x6198D60", VA = "0x6199D60")]
	private ExceptionDispatchInfo CheckThrowDisposed(bool throwIt, ref ExceptionDispatchInfo field)
	{
		return null;
	}

	[Token(Token = "0x6001525")]
	[Address(RVA = "0x6199FE0", Offset = "0x6198FE0", VA = "0x6199FE0")]
	internal void RegisterRequest(ServicePoint servicePoint, WebConnection connection)
	{
	}

	[Token(Token = "0x6001526")]
	[Address(RVA = "0x619A260", Offset = "0x6199260", VA = "0x619A260")]
	public void SetPriorityRequest(WebOperation operation)
	{
	}

	[Token(Token = "0x6001527")]
	[Address(RVA = "0x619A3D0", Offset = "0x61993D0", VA = "0x619A3D0")]
	internal Task<WebRequestStream> GetRequestStreamInternal()
	{
		return null;
	}

	[Token(Token = "0x6001529")]
	[Address(RVA = "0x619A460", Offset = "0x6199460", VA = "0x619A460")]
	public Task<WebResponseStream> GetResponseStream()
	{
		return null;
	}

	[Token(Token = "0x600152B")]
	[Address(RVA = "0x619A4B0", Offset = "0x61994B0", VA = "0x619A4B0")]
	[AsyncStateMachine(typeof(_003CRun_003Ed__58))]
	internal void Run()
	{
	}

	[Token(Token = "0x600152C")]
	[Address(RVA = "0x619A560", Offset = "0x6199560", VA = "0x619A560")]
	internal void CompleteRequestWritten(WebRequestStream stream, [Optional] Exception error)
	{
	}

	[Token(Token = "0x600152D")]
	[Address(RVA = "0x6199950", Offset = "0x6198950", VA = "0x6199950")]
	internal void Finish(bool ok, [Optional] Exception error)
	{
	}
}
