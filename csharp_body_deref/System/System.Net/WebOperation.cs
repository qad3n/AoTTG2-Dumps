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

[Token(Token = "0x200034A")]
internal class WebOperation
{
	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200034B")]
	[CompilerGenerated]
	private struct _003CRun_003Ed__58 : IAsyncStateMachine
	{
		[Token(Token = "0x4000D4A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000D4B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000D4C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebOperation _003C_003E4__this;

		[Token(Token = "0x4000D4D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private WebRequestStream _003CrequestStream_003E5__2;

		[Token(Token = "0x4000D4E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private WebResponseStream _003Cstream_003E5__3;

		[Token(Token = "0x4000D4F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<WebRequestStream>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000D50")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x60016ED")]
		[Address(RVA = "0x28073A0", Offset = "0x28059A0", VA = "0x1828073A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60016EE")]
		[Address(RVA = "0x187DE20", Offset = "0x187C420", VA = "0x18187DE20", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000D3E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private CancellationTokenSource cts;

	[Token(Token = "0x4000D3F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private WebCompletionSource<WebRequestStream> requestTask;

	[Token(Token = "0x4000D40")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private WebCompletionSource<WebRequestStream> requestWrittenTask;

	[Token(Token = "0x4000D41")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private WebCompletionSource<WebResponseStream> responseTask;

	[Token(Token = "0x4000D42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private WebCompletionSource<(bool, WebOperation)> finishedTask;

	[Token(Token = "0x4000D43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private WebRequestStream writeStream;

	[Token(Token = "0x4000D44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private WebResponseStream responseStream;

	[Token(Token = "0x4000D45")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private ExceptionDispatchInfo disposedInfo;

	[Token(Token = "0x4000D46")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private ExceptionDispatchInfo closedInfo;

	[Token(Token = "0x4000D47")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private WebOperation priorityRequest;

	[Token(Token = "0x4000D48")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private int requestSent;

	[Token(Token = "0x4000D49")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private int finished;

	[Token(Token = "0x170004EC")]
	public HttpWebRequest Request
	{
		[Token(Token = "0x60016CE")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004ED")]
	public WebConnection Connection
	{
		[Token(Token = "0x60016CF")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60016D0")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170004EE")]
	public ServicePoint ServicePoint
	{
		[Token(Token = "0x60016D1")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60016D2")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170004EF")]
	public BufferOffsetSize WriteBuffer
	{
		[Token(Token = "0x60016D3")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F0")]
	public bool IsNtlmChallenge
	{
		[Token(Token = "0x60016D4")]
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004F1")]
	public bool Aborted
	{
		[Token(Token = "0x60016D6")]
		[Address(RVA = "0x280AFC0", Offset = "0x28095C0", VA = "0x18280AFC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004F2")]
	public bool Closed
	{
		[Token(Token = "0x60016D7")]
		[Address(RVA = "0x280B010", Offset = "0x2809610", VA = "0x18280B010")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004F3")]
	public WebRequestStream WriteStream
	{
		[Token(Token = "0x60016E6")]
		[Address(RVA = "0x280B070", Offset = "0x2809670", VA = "0x18280B070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F4")]
	internal WebCompletionSource<(bool, WebOperation)> Finished
	{
		[Token(Token = "0x60016E8")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60016D5")]
	[Address(RVA = "0x280AE10", Offset = "0x2809410", VA = "0x18280AE10")]
	public WebOperation(HttpWebRequest request, BufferOffsetSize writeBuffer, bool isNtlmChallenge, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x60016D8")]
	[Address(RVA = "0x2809EB0", Offset = "0x28084B0", VA = "0x182809EB0")]
	public void Abort()
	{
	}

	[Token(Token = "0x60016D9")]
	[Address(RVA = "0x280A060", Offset = "0x2808660", VA = "0x18280A060")]
	public void Close()
	{
	}

	[Token(Token = "0x60016DA")]
	[Address(RVA = "0x280A7B0", Offset = "0x2808DB0", VA = "0x18280A7B0")]
	private void SetCanceled()
	{
	}

	[Token(Token = "0x60016DB")]
	[Address(RVA = "0x280A950", Offset = "0x2808F50", VA = "0x18280A950")]
	private void SetError(Exception error)
	{
	}

	[Token(Token = "0x60016DC")]
	[Address(RVA = "0x280A880", Offset = "0x2808E80", VA = "0x18280A880")]
	private (ExceptionDispatchInfo, bool) SetDisposed(ref ExceptionDispatchInfo field)
	{
		return default((ExceptionDispatchInfo, bool));
	}

	[Token(Token = "0x60016DD")]
	[Address(RVA = "0x2809F10", Offset = "0x2808510", VA = "0x182809F10")]
	internal ExceptionDispatchInfo CheckDisposed(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60016DE")]
	[Address(RVA = "0x280AD70", Offset = "0x2809370", VA = "0x18280AD70")]
	internal void ThrowIfDisposed()
	{
	}

	[Token(Token = "0x60016DF")]
	[Address(RVA = "0x280AC90", Offset = "0x2809290", VA = "0x18280AC90")]
	internal void ThrowIfDisposed(CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x60016E0")]
	[Address(RVA = "0x280AB50", Offset = "0x2809150", VA = "0x18280AB50")]
	internal void ThrowIfClosedOrDisposed()
	{
	}

	[Token(Token = "0x60016E1")]
	[Address(RVA = "0x280ABB0", Offset = "0x28091B0", VA = "0x18280ABB0")]
	internal void ThrowIfClosedOrDisposed(CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x60016E2")]
	[Address(RVA = "0x2809FF0", Offset = "0x28085F0", VA = "0x182809FF0")]
	private ExceptionDispatchInfo CheckThrowDisposed(bool throwIt, ref ExceptionDispatchInfo field)
	{
		return null;
	}

	[Token(Token = "0x60016E3")]
	[Address(RVA = "0x280A470", Offset = "0x2808A70", VA = "0x18280A470")]
	internal void RegisterRequest(ServicePoint servicePoint, WebConnection connection)
	{
	}

	[Token(Token = "0x60016E4")]
	[Address(RVA = "0x280A9F0", Offset = "0x2808FF0", VA = "0x18280A9F0")]
	public void SetPriorityRequest(WebOperation operation)
	{
	}

	[Token(Token = "0x60016E5")]
	[Address(RVA = "0x280A3D0", Offset = "0x28089D0", VA = "0x18280A3D0")]
	internal Task<WebRequestStream> GetRequestStreamInternal()
	{
		return null;
	}

	[Token(Token = "0x60016E7")]
	[Address(RVA = "0x280A420", Offset = "0x2808A20", VA = "0x18280A420")]
	public Task<WebResponseStream> GetResponseStream()
	{
		return null;
	}

	[Token(Token = "0x60016E9")]
	[Address(RVA = "0x280A6F0", Offset = "0x2808CF0", VA = "0x18280A6F0")]
	[AsyncStateMachine(typeof(_003CRun_003Ed__58))]
	internal void Run()
	{
	}

	[Token(Token = "0x60016EA")]
	[Address(RVA = "0x280A0B0", Offset = "0x28086B0", VA = "0x18280A0B0")]
	internal void CompleteRequestWritten(WebRequestStream stream, [Optional] Exception error)
	{
	}

	[Token(Token = "0x60016EB")]
	[Address(RVA = "0x280A140", Offset = "0x2808740", VA = "0x18280A140")]
	internal void Finish(bool ok, [Optional] Exception error)
	{
	}
}
