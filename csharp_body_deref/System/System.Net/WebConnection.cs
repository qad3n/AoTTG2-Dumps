// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebConnection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.IO;
using System.Net.Sockets;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;
using Mono.Net.Security;

namespace System.Net;

[Token(Token = "0x2000301")]
internal class WebConnection : IDisposable
{
	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000303")]
	[CompilerGenerated]
	private struct _003CConnect_003Ed__16 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C26")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C27")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000C28")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebConnection _003C_003E4__this;

		[Token(Token = "0x4000C29")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebOperation operation;

		[Token(Token = "0x4000C2A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000C2B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private Exception _003CconnectException_003E5__2;

		[Token(Token = "0x4000C2C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private IPAddress[] _003C_003E7__wrap2;

		[Token(Token = "0x4000C2D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003C_003E7__wrap3;

		[Token(Token = "0x4000C2E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60014D4")]
		[Address(RVA = "0x6194A90", Offset = "0x6193A90", VA = "0x6194A90", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60014D5")]
		[Address(RVA = "0x6195540", Offset = "0x6194540", VA = "0x6195540", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000304")]
	[CompilerGenerated]
	private struct _003CCreateStream_003Ed__18 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C2F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C30")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		[Token(Token = "0x4000C31")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebConnection _003C_003E4__this;

		[Token(Token = "0x4000C32")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebOperation operation;

		[Token(Token = "0x4000C33")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool reused;

		[Token(Token = "0x4000C34")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000C35")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private NetworkStream _003Cstream_003E5__2;

		[Token(Token = "0x4000C36")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000C37")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredTaskAwaitable<Stream>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x60014D6")]
		[Address(RVA = "0x61955A0", Offset = "0x61945A0", VA = "0x61955A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60014D7")]
		[Address(RVA = "0x6195D40", Offset = "0x6194D40", VA = "0x6195D40", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000305")]
	[CompilerGenerated]
	private struct _003CInitConnection_003Ed__19 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C38")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C39")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<WebRequestStream> _003C_003Et__builder;

		[Token(Token = "0x4000C3A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebOperation operation;

		[Token(Token = "0x4000C3B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000C3C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public WebConnection _003C_003E4__this;

		[Token(Token = "0x4000C3D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private bool _003Creused_003E5__2;

		[Token(Token = "0x4000C3E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000C3F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x60014D8")]
		[Address(RVA = "0x6195DB0", Offset = "0x6194DB0", VA = "0x6195DB0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60014D9")]
		[Address(RVA = "0x61964B0", Offset = "0x61954B0", VA = "0x61964B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000C18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private NetworkCredential ntlm_credentials;

	[Token(Token = "0x4000C19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private bool ntlm_authenticated;

	[Token(Token = "0x4000C1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19")]
	private bool unsafe_sharing;

	[Token(Token = "0x4000C1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Stream networkStream;

	[Token(Token = "0x4000C1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Socket socket;

	[Token(Token = "0x4000C1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private MonoTlsStream monoTlsStream;

	[Token(Token = "0x4000C1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private WebConnectionTunnel tunnel;

	[Token(Token = "0x4000C1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private int disposed;

	[Token(Token = "0x4000C21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private DateTime idleSince;

	[Token(Token = "0x4000C22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private WebOperation currentOperation;

	[Token(Token = "0x170004A3")]
	public ServicePoint ServicePoint
	{
		[Token(Token = "0x60014B5")]
		[Address(RVA = "0x61938A0", Offset = "0x61928A0", VA = "0x61938A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004A4")]
	public bool Closed
	{
		[Token(Token = "0x60014C3")]
		[Address(RVA = "0x6191990", Offset = "0x6190990", VA = "0x6191990")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004A5")]
	public DateTime IdleSince
	{
		[Token(Token = "0x60014C4")]
		[Address(RVA = "0x6194800", Offset = "0x6193800", VA = "0x6194800")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x170004A6")]
	internal bool NtlmAuthenticated
	{
		[Token(Token = "0x60014CA")]
		[Address(RVA = "0x6194840", Offset = "0x6193840", VA = "0x6194840")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60014CB")]
		[Address(RVA = "0x6194850", Offset = "0x6193850", VA = "0x6194850")]
		set
		{
		}
	}

	[Token(Token = "0x170004A7")]
	internal NetworkCredential NtlmCredential
	{
		[Token(Token = "0x60014CC")]
		[Address(RVA = "0x6194860", Offset = "0x6193860", VA = "0x6194860")]
		get
		{
			return null;
		}
		[Token(Token = "0x60014CD")]
		[Address(RVA = "0x6194870", Offset = "0x6193870", VA = "0x6194870")]
		set
		{
		}
	}

	[Token(Token = "0x170004A8")]
	internal bool UnsafeAuthenticatedConnectionSharing
	{
		[Token(Token = "0x60014CE")]
		[Address(RVA = "0x6194880", Offset = "0x6193880", VA = "0x6194880")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60014CF")]
		[Address(RVA = "0x6194890", Offset = "0x6193890", VA = "0x6194890")]
		set
		{
		}
	}

	[Token(Token = "0x60014B6")]
	[Address(RVA = "0x6192380", Offset = "0x6191380", VA = "0x6192380")]
	public WebConnection(ServicePoint sPoint)
	{
	}

	[Token(Token = "0x60014B7")]
	[Address(RVA = "0x61938B0", Offset = "0x61928B0", VA = "0x61938B0")]
	private bool CanReuse()
	{
		return default(bool);
	}

	[Token(Token = "0x60014B8")]
	[Address(RVA = "0x61938D0", Offset = "0x61928D0", VA = "0x61938D0")]
	private bool CheckReusable()
	{
		return default(bool);
	}

	[Token(Token = "0x60014B9")]
	[Address(RVA = "0x6193970", Offset = "0x6192970", VA = "0x6193970")]
	[AsyncStateMachine(typeof(_003CConnect_003Ed__16))]
	private Task Connect(WebOperation operation, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60014BA")]
	[Address(RVA = "0x6193A80", Offset = "0x6192A80", VA = "0x6193A80")]
	[AsyncStateMachine(typeof(_003CCreateStream_003Ed__18))]
	private Task<bool> CreateStream(WebOperation operation, bool reused, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60014BB")]
	[Address(RVA = "0x6193BD0", Offset = "0x6192BD0", VA = "0x6193BD0")]
	[AsyncStateMachine(typeof(_003CInitConnection_003Ed__19))]
	internal Task<WebRequestStream> InitConnection(WebOperation operation, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60014BC")]
	[Address(RVA = "0x6193D10", Offset = "0x6192D10", VA = "0x6193D10")]
	internal static WebException GetException(WebExceptionStatus status, Exception error)
	{
		return null;
	}

	[Token(Token = "0x60014BD")]
	[Address(RVA = "0x6193E70", Offset = "0x6192E70", VA = "0x6193E70")]
	internal static bool ReadLine(byte[] buffer, ref int start, int max, ref string output)
	{
		return default(bool);
	}

	[Token(Token = "0x60014BE")]
	[Address(RVA = "0x6191D60", Offset = "0x6190D60", VA = "0x6191D60")]
	internal bool CanReuseConnection(WebOperation operation)
	{
		return default(bool);
	}

	[Token(Token = "0x60014BF")]
	[Address(RVA = "0x6194060", Offset = "0x6193060", VA = "0x6194060")]
	private bool PrepareSharingNtlm(WebOperation operation)
	{
		return default(bool);
	}

	[Token(Token = "0x60014C0")]
	[Address(RVA = "0x61943B0", Offset = "0x61933B0", VA = "0x61943B0")]
	private void Reset()
	{
	}

	[Token(Token = "0x60014C1")]
	[Address(RVA = "0x61944B0", Offset = "0x61934B0", VA = "0x61944B0")]
	private void Close(bool reset)
	{
	}

	[Token(Token = "0x60014C2")]
	[Address(RVA = "0x6194570", Offset = "0x6193570", VA = "0x6194570")]
	private void CloseSocket()
	{
	}

	[Token(Token = "0x60014C5")]
	[Address(RVA = "0x61921A0", Offset = "0x61911A0", VA = "0x61921A0")]
	public bool StartOperation(WebOperation operation, bool reused)
	{
		return default(bool);
	}

	[Token(Token = "0x60014C6")]
	[Address(RVA = "0x6190D70", Offset = "0x618FD70", VA = "0x6190D70")]
	public bool Continue(WebOperation next)
	{
		return default(bool);
	}

	[Token(Token = "0x60014C7")]
	[Address(RVA = "0x6194810", Offset = "0x6193810", VA = "0x6194810")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60014C8")]
	[Address(RVA = "0x6191960", Offset = "0x6190960", VA = "0x6191960", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60014C9")]
	[Address(RVA = "0x6194480", Offset = "0x6193480", VA = "0x6194480")]
	private void ResetNtlm()
	{
	}
}
