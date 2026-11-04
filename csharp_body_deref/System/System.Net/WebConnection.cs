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

[Token(Token = "0x2000340")]
internal class WebConnection : IDisposable
{
	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000342")]
	[CompilerGenerated]
	private struct _003CConnect_003Ed__16 : IAsyncStateMachine
	{
		[Token(Token = "0x4000CF5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000CF6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000CF7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebConnection _003C_003E4__this;

		[Token(Token = "0x4000CF8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebOperation operation;

		[Token(Token = "0x4000CF9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000CFA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private Exception _003CconnectException_003E5__2;

		[Token(Token = "0x4000CFB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private IPAddress[] _003C_003E7__wrap2;

		[Token(Token = "0x4000CFC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003C_003E7__wrap3;

		[Token(Token = "0x4000CFD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001692")]
		[Address(RVA = "0x27EB2A0", Offset = "0x27E98A0", VA = "0x1827EB2A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001693")]
		[Address(RVA = "0x27EBB00", Offset = "0x27EA100", VA = "0x1827EBB00", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000343")]
	[CompilerGenerated]
	private struct _003CCreateStream_003Ed__18 : IAsyncStateMachine
	{
		[Token(Token = "0x4000CFE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000CFF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		[Token(Token = "0x4000D00")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebConnection _003C_003E4__this;

		[Token(Token = "0x4000D01")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebOperation operation;

		[Token(Token = "0x4000D02")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool reused;

		[Token(Token = "0x4000D03")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000D04")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private NetworkStream _003Cstream_003E5__2;

		[Token(Token = "0x4000D05")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000D06")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredTaskAwaitable<Stream>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6001694")]
		[Address(RVA = "0x27EBB60", Offset = "0x27EA160", VA = "0x1827EBB60", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001695")]
		[Address(RVA = "0x27EC1F0", Offset = "0x27EA7F0", VA = "0x1827EC1F0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000344")]
	[CompilerGenerated]
	private struct _003CInitConnection_003Ed__19 : IAsyncStateMachine
	{
		[Token(Token = "0x4000D07")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000D08")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<WebRequestStream> _003C_003Et__builder;

		[Token(Token = "0x4000D09")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public WebOperation operation;

		[Token(Token = "0x4000D0A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000D0B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public WebConnection _003C_003E4__this;

		[Token(Token = "0x4000D0C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private bool _003Creused_003E5__2;

		[Token(Token = "0x4000D0D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000D0E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6001696")]
		[Address(RVA = "0x27ED020", Offset = "0x27EB620", VA = "0x1827ED020", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001697")]
		[Address(RVA = "0x27ED720", Offset = "0x27EBD20", VA = "0x1827ED720", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000CE7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private NetworkCredential ntlm_credentials;

	[Token(Token = "0x4000CE8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private bool ntlm_authenticated;

	[Token(Token = "0x4000CE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19")]
	private bool unsafe_sharing;

	[Token(Token = "0x4000CEA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Stream networkStream;

	[Token(Token = "0x4000CEB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Socket socket;

	[Token(Token = "0x4000CEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private MonoTlsStream monoTlsStream;

	[Token(Token = "0x4000CED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private WebConnectionTunnel tunnel;

	[Token(Token = "0x4000CEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private int disposed;

	[Token(Token = "0x4000CF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private DateTime idleSince;

	[Token(Token = "0x4000CF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private WebOperation currentOperation;

	[Token(Token = "0x170004D2")]
	public ServicePoint ServicePoint
	{
		[Token(Token = "0x6001673")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D3")]
	public bool Closed
	{
		[Token(Token = "0x6001681")]
		[Address(RVA = "0x25B8610", Offset = "0x25B6C10", VA = "0x1825B8610")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004D4")]
	public DateTime IdleSince
	{
		[Token(Token = "0x6001682")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x170004D5")]
	internal bool NtlmAuthenticated
	{
		[Token(Token = "0x6001688")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001689")]
		[Address(RVA = "0x111C9F0", Offset = "0x111AFF0", VA = "0x18111C9F0")]
		set
		{
		}
	}

	[Token(Token = "0x170004D6")]
	internal NetworkCredential NtlmCredential
	{
		[Token(Token = "0x600168A")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600168B")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x170004D7")]
	internal bool UnsafeAuthenticatedConnectionSharing
	{
		[Token(Token = "0x600168C")]
		[Address(RVA = "0xE8F450", Offset = "0xE8DA50", VA = "0x180E8F450")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600168D")]
		[Address(RVA = "0x18C3360", Offset = "0x18C1960", VA = "0x1818C3360")]
		set
		{
		}
	}

	[Token(Token = "0x6001674")]
	[Address(RVA = "0x27F3620", Offset = "0x27F1C20", VA = "0x1827F3620")]
	public WebConnection(ServicePoint sPoint)
	{
	}

	[Token(Token = "0x6001675")]
	[Address(RVA = "0x27F2610", Offset = "0x27F0C10", VA = "0x1827F2610")]
	private bool CanReuse()
	{
		return default(bool);
	}

	[Token(Token = "0x6001676")]
	[Address(RVA = "0x27F2640", Offset = "0x27F0C40", VA = "0x1827F2640")]
	private bool CheckReusable()
	{
		return default(bool);
	}

	[Token(Token = "0x6001677")]
	[Address(RVA = "0x27F2890", Offset = "0x27F0E90", VA = "0x1827F2890")]
	[AsyncStateMachine(typeof(_003CConnect_003Ed__16))]
	private Task Connect(WebOperation operation, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001678")]
	[Address(RVA = "0x27F2B10", Offset = "0x27F1110", VA = "0x1827F2B10")]
	[AsyncStateMachine(typeof(_003CCreateStream_003Ed__18))]
	private Task<bool> CreateStream(WebOperation operation, bool reused, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001679")]
	[Address(RVA = "0x27F2DF0", Offset = "0x27F13F0", VA = "0x1827F2DF0")]
	[AsyncStateMachine(typeof(_003CInitConnection_003Ed__19))]
	internal Task<WebRequestStream> InitConnection(WebOperation operation, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600167A")]
	[Address(RVA = "0x27F2C80", Offset = "0x27F1280", VA = "0x1827F2C80")]
	internal static WebException GetException(WebExceptionStatus status, Exception error)
	{
		return null;
	}

	[Token(Token = "0x600167B")]
	[Address(RVA = "0x27F3180", Offset = "0x27F1780", VA = "0x1827F3180")]
	internal static bool ReadLine(byte[] buffer, ref int start, int max, ref string output)
	{
		return default(bool);
	}

	[Token(Token = "0x600167C")]
	[Address(RVA = "0x27F22C0", Offset = "0x27F08C0", VA = "0x1827F22C0")]
	internal bool CanReuseConnection(WebOperation operation)
	{
		return default(bool);
	}

	[Token(Token = "0x600167D")]
	[Address(RVA = "0x27F2F40", Offset = "0x27F1540", VA = "0x1827F2F40")]
	private bool PrepareSharingNtlm(WebOperation operation)
	{
		return default(bool);
	}

	[Token(Token = "0x600167E")]
	[Address(RVA = "0x27F3390", Offset = "0x27F1990", VA = "0x1827F3390")]
	private void Reset()
	{
	}

	[Token(Token = "0x600167F")]
	[Address(RVA = "0x27F27F0", Offset = "0x27F0DF0", VA = "0x1827F27F0")]
	private void Close(bool reset)
	{
	}

	[Token(Token = "0x6001680")]
	[Address(RVA = "0x27F2690", Offset = "0x27F0C90", VA = "0x1827F2690")]
	private void CloseSocket()
	{
	}

	[Token(Token = "0x6001683")]
	[Address(RVA = "0x27F3440", Offset = "0x27F1A40", VA = "0x1827F3440")]
	public bool StartOperation(WebOperation operation, bool reused)
	{
		return default(bool);
	}

	[Token(Token = "0x6001684")]
	[Address(RVA = "0x27F29B0", Offset = "0x27F0FB0", VA = "0x1827F29B0")]
	public bool Continue(WebOperation next)
	{
		return default(bool);
	}

	[Token(Token = "0x6001685")]
	[Address(RVA = "0x27F2C40", Offset = "0x27F1240", VA = "0x1827F2C40")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001686")]
	[Address(RVA = "0x27F2C40", Offset = "0x27F1240", VA = "0x1827F2C40", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001687")]
	[Address(RVA = "0x27F3360", Offset = "0x27F1960", VA = "0x1827F3360")]
	private void ResetNtlm()
	{
	}
}
