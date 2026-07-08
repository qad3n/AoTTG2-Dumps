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

[Token(Token = "0x20001B8")]
internal class WebConnection : IDisposable
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001BA")]
	[CompilerGenerated]
	private struct _003CConnect_003Ed__16 : IAsyncStateMachine
	{
		[Token(Token = "0x40008DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40008E0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40008E1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebConnection _003C_003E4__this;

		[Token(Token = "0x40008E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebOperation operation;

		[Token(Token = "0x40008E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40008E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private Exception _003CconnectException_003E5__2;

		[Token(Token = "0x40008E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private IPAddress[] _003C_003E7__wrap2;

		[Token(Token = "0x40008E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003C_003E7__wrap3;

		[Token(Token = "0x40008E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000AD1")]
		[Address(RVA = "0x466DB70", Offset = "0x466DB70", VA = "0x466DB70", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000AD2")]
		[Address(RVA = "0x466E7D0", Offset = "0x466E7D0", VA = "0x466E7D0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001BB")]
	[CompilerGenerated]
	private struct _003CCreateStream_003Ed__18 : IAsyncStateMachine
	{
		[Token(Token = "0x40008E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40008E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		[Token(Token = "0x40008EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebConnection _003C_003E4__this;

		[Token(Token = "0x40008EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebOperation operation;

		[Token(Token = "0x40008EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool reused;

		[Token(Token = "0x40008ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40008EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private NetworkStream _003Cstream_003E5__2;

		[Token(Token = "0x40008EF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x40008F0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredTaskAwaitable<Stream>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000AD3")]
		[Address(RVA = "0x466E830", Offset = "0x466E830", VA = "0x466E830", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000AD4")]
		[Address(RVA = "0x466F1F0", Offset = "0x466F1F0", VA = "0x466F1F0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001BC")]
	[CompilerGenerated]
	private struct _003CInitConnection_003Ed__19 : IAsyncStateMachine
	{
		[Token(Token = "0x40008F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40008F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<WebRequestStream> _003C_003Et__builder;

		[Token(Token = "0x40008F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebOperation operation;

		[Token(Token = "0x40008F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40008F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public WebConnection _003C_003E4__this;

		[Token(Token = "0x40008F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private bool _003Creused_003E5__2;

		[Token(Token = "0x40008F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x40008F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000AD5")]
		[Address(RVA = "0x466F260", Offset = "0x466F260", VA = "0x466F260", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000AD6")]
		[Address(RVA = "0x466F860", Offset = "0x466F860", VA = "0x466F860", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40008D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private NetworkCredential ntlm_credentials;

	[Token(Token = "0x40008D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private bool ntlm_authenticated;

	[Token(Token = "0x40008D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19")]
	private bool unsafe_sharing;

	[Token(Token = "0x40008D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Stream networkStream;

	[Token(Token = "0x40008D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Socket socket;

	[Token(Token = "0x40008D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private MonoTlsStream monoTlsStream;

	[Token(Token = "0x40008D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private WebConnectionTunnel tunnel;

	[Token(Token = "0x40008D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private int disposed;

	[Token(Token = "0x40008DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private DateTime idleSince;

	[Token(Token = "0x40008DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private WebOperation currentOperation;

	[Token(Token = "0x1700027C")]
	public ServicePoint ServicePoint
	{
		[Token(Token = "0x6000AB2")]
		[Address(RVA = "0x466C920", Offset = "0x466C920", VA = "0x466C920")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027D")]
	public bool Closed
	{
		[Token(Token = "0x6000AC0")]
		[Address(RVA = "0x466A6A0", Offset = "0x466A6A0", VA = "0x466A6A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700027E")]
	public DateTime IdleSince
	{
		[Token(Token = "0x6000AC1")]
		[Address(RVA = "0x466D8E0", Offset = "0x466D8E0", VA = "0x466D8E0")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700027F")]
	internal bool NtlmAuthenticated
	{
		[Token(Token = "0x6000AC7")]
		[Address(RVA = "0x466D920", Offset = "0x466D920", VA = "0x466D920")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000AC8")]
		[Address(RVA = "0x466D930", Offset = "0x466D930", VA = "0x466D930")]
		set
		{
		}
	}

	[Token(Token = "0x17000280")]
	internal NetworkCredential NtlmCredential
	{
		[Token(Token = "0x6000AC9")]
		[Address(RVA = "0x466D940", Offset = "0x466D940", VA = "0x466D940")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ACA")]
		[Address(RVA = "0x466D950", Offset = "0x466D950", VA = "0x466D950")]
		set
		{
		}
	}

	[Token(Token = "0x17000281")]
	internal bool UnsafeAuthenticatedConnectionSharing
	{
		[Token(Token = "0x6000ACB")]
		[Address(RVA = "0x466D960", Offset = "0x466D960", VA = "0x466D960")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ACC")]
		[Address(RVA = "0x466D970", Offset = "0x466D970", VA = "0x466D970")]
		set
		{
		}
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x466B220", Offset = "0x466B220", VA = "0x466B220")]
	public WebConnection(ServicePoint sPoint)
	{
	}

	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x466C930", Offset = "0x466C930", VA = "0x466C930")]
	private bool CanReuse()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AB5")]
	[Address(RVA = "0x466C950", Offset = "0x466C950", VA = "0x466C950")]
	private bool CheckReusable()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AB6")]
	[Address(RVA = "0x466C9F0", Offset = "0x466C9F0", VA = "0x466C9F0")]
	[AsyncStateMachine(typeof(_003CConnect_003Ed__16))]
	private Task Connect(WebOperation operation, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x466CB20", Offset = "0x466CB20", VA = "0x466CB20")]
	[AsyncStateMachine(typeof(_003CCreateStream_003Ed__18))]
	private Task<bool> CreateStream(WebOperation operation, bool reused, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x466CC80", Offset = "0x466CC80", VA = "0x466CC80")]
	[AsyncStateMachine(typeof(_003CInitConnection_003Ed__19))]
	internal Task<WebRequestStream> InitConnection(WebOperation operation, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x466CDC0", Offset = "0x466CDC0", VA = "0x466CDC0")]
	internal static WebException GetException(WebExceptionStatus status, Exception error)
	{
		return null;
	}

	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x466CF20", Offset = "0x466CF20", VA = "0x466CF20")]
	internal static bool ReadLine(byte[] buffer, ref int start, int max, ref string output)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0x466AAC0", Offset = "0x466AAC0", VA = "0x466AAC0")]
	internal bool CanReuseConnection(WebOperation operation)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x466D140", Offset = "0x466D140", VA = "0x466D140")]
	private bool PrepareSharingNtlm(WebOperation operation)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x466D490", Offset = "0x466D490", VA = "0x466D490")]
	private void Reset()
	{
	}

	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x466D590", Offset = "0x466D590", VA = "0x466D590")]
	private void Close(bool reset)
	{
	}

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x466D660", Offset = "0x466D660", VA = "0x466D660")]
	private void CloseSocket()
	{
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x466AFF0", Offset = "0x466AFF0", VA = "0x466AFF0")]
	public bool StartOperation(WebOperation operation, bool reused)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x46699E0", Offset = "0x46699E0", VA = "0x46699E0")]
	public bool Continue(WebOperation next)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AC4")]
	[Address(RVA = "0x466D8F0", Offset = "0x466D8F0", VA = "0x466D8F0")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x466A670", Offset = "0x466A670", VA = "0x466A670", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000AC6")]
	[Address(RVA = "0x466D560", Offset = "0x466D560", VA = "0x466D560")]
	private void ResetNtlm()
	{
	}
}
