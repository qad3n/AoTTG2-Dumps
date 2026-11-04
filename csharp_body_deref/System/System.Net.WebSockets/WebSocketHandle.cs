// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebSockets.WebSocketHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Net.Security;
using System.Net.Sockets;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Net.WebSockets;

[Token(Token = "0x20003B4")]
internal sealed class WebSocketHandle
{
	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20003B6")]
	[CompilerGenerated]
	private struct _003CConnectAsyncCore_003Ed__26 : IAsyncStateMachine
	{
		[Token(Token = "0x4001059")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400105A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400105B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400105C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebSocketHandle _003C_003E4__this;

		[Token(Token = "0x400105D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Uri uri;

		[Token(Token = "0x400105E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public ClientWebSocketOptions options;

		[Token(Token = "0x400105F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private CancellationTokenRegistration _003Cregistration_003E5__2;

		[Token(Token = "0x4001060")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private Stream _003Cstream_003E5__3;

		[Token(Token = "0x4001061")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private KeyValuePair<string, string> _003CsecKeyAndSecWebSocketAccept_003E5__4;

		[Token(Token = "0x4001062")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private ConfiguredTaskAwaitable<Socket>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4001063")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private SslStream _003CsslStream_003E5__5;

		[Token(Token = "0x4001064")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x4001065")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		private ConfiguredTaskAwaitable<string>.ConfiguredTaskAwaiter _003C_003Eu__3;

		[Token(Token = "0x6001951")]
		[Address(RVA = "0x281D9C0", Offset = "0x281BFC0", VA = "0x18281D9C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001952")]
		[Address(RVA = "0x281EA80", Offset = "0x281D080", VA = "0x18281EA80", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20003B7")]
	[CompilerGenerated]
	private struct _003CConnectSocketAsync_003Ed__27 : IAsyncStateMachine
	{
		[Token(Token = "0x4001066")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4001067")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<Socket> _003C_003Et__builder;

		[Token(Token = "0x4001068")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string host;

		[Token(Token = "0x4001069")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400106A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public WebSocketHandle _003C_003E4__this;

		[Token(Token = "0x400106B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public int port;

		[Token(Token = "0x400106C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<IPAddress[]>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x400106D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private IPAddress[] _003C_003E7__wrap1;

		[Token(Token = "0x400106E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x400106F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private Socket _003Csocket_003E5__4;

		[Token(Token = "0x4001070")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private CancellationTokenRegistration _003C_003E7__wrap4;

		[Token(Token = "0x4001071")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private CancellationTokenRegistration _003C_003E7__wrap5;

		[Token(Token = "0x4001072")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6001953")]
		[Address(RVA = "0x281EAE0", Offset = "0x281D0E0", VA = "0x18281EAE0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001954")]
		[Address(RVA = "0x281F680", Offset = "0x281DC80", VA = "0x18281F680", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20003B9")]
	[CompilerGenerated]
	private struct _003CParseAndValidateConnectResponseAsync_003Ed__30 : IAsyncStateMachine
	{
		[Token(Token = "0x4001074")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4001075")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<string> _003C_003Et__builder;

		[Token(Token = "0x4001076")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Stream stream;

		[Token(Token = "0x4001077")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4001078")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string expectedSecWebSocketAccept;

		[Token(Token = "0x4001079")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public ClientWebSocketOptions options;

		[Token(Token = "0x400107A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private bool _003CfoundUpgrade_003E5__2;

		[Token(Token = "0x400107B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
		private bool _003CfoundConnection_003E5__3;

		[Token(Token = "0x400107C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x42")]
		private bool _003CfoundSecWebSocketAccept_003E5__4;

		[Token(Token = "0x400107D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private string _003Csubprotocol_003E5__5;

		[Token(Token = "0x400107E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable<string>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001957")]
		[Address(RVA = "0x2820D30", Offset = "0x281F330", VA = "0x182820D30", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001958")]
		[Address(RVA = "0x2821610", Offset = "0x281FC10", VA = "0x182821610", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20003BA")]
	[CompilerGenerated]
	private struct _003CReadResponseHeaderLineAsync_003Ed__32 : IAsyncStateMachine
	{
		[Token(Token = "0x400107F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4001080")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<string> _003C_003Et__builder;

		[Token(Token = "0x4001081")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Stream stream;

		[Token(Token = "0x4001082")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4001083")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private StringBuilder _003Csb_003E5__2;

		[Token(Token = "0x4001084")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private byte[] _003Carr_003E5__3;

		[Token(Token = "0x4001085")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private char _003CprevChar_003E5__4;

		[Token(Token = "0x4001086")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001959")]
		[Address(RVA = "0x2821680", Offset = "0x281FC80", VA = "0x182821680", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600195A")]
		[Address(RVA = "0x2821C80", Offset = "0x2820280", VA = "0x182821C80", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4001050")]
	[ThreadStatic]
	private static StringBuilder t_cachedStringBuilder;

	[Token(Token = "0x4001051")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Encoding s_defaultHttpEncoding;

	[Token(Token = "0x4001052")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly CancellationTokenSource _abortSource;

	[Token(Token = "0x4001053")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private WebSocketState _state;

	[Token(Token = "0x4001054")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private WebSocket _webSocket;

	[Token(Token = "0x17000556")]
	public string CloseStatusDescription
	{
		[Token(Token = "0x600193A")]
		[Address(RVA = "0x2828870", Offset = "0x2826E70", VA = "0x182828870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000557")]
	public WebSocketState State
	{
		[Token(Token = "0x600193B")]
		[Address(RVA = "0x2828890", Offset = "0x2826E90", VA = "0x182828890")]
		get
		{
			return default(WebSocketState);
		}
	}

	[Token(Token = "0x6001938")]
	[Address(RVA = "0x2828280", Offset = "0x2826880", VA = "0x182828280")]
	public static WebSocketHandle Create()
	{
		return null;
	}

	[Token(Token = "0x6001939")]
	[Address(RVA = "0x1A813F0", Offset = "0x1A7F9F0", VA = "0x181A813F0")]
	public static bool IsValid(WebSocketHandle handle)
	{
		return default(bool);
	}

	[Token(Token = "0x600193C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public static void CheckPlatformSupport()
	{
	}

	[Token(Token = "0x600193D")]
	[Address(RVA = "0x2828320", Offset = "0x2826920", VA = "0x182828320")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600193E")]
	[Address(RVA = "0x2827570", Offset = "0x2825B70", VA = "0x182827570")]
	public void Abort()
	{
	}

	[Token(Token = "0x600193F")]
	[Address(RVA = "0x2828600", Offset = "0x2826C00", VA = "0x182828600")]
	public Task SendAsync(ArraySegment<byte> buffer, WebSocketMessageType messageType, bool endOfMessage, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001940")]
	[Address(RVA = "0x28285C0", Offset = "0x2826BC0", VA = "0x1828285C0")]
	public Task<WebSocketReceiveResult> ReceiveAsync(ArraySegment<byte> buffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001941")]
	[Address(RVA = "0x2827DE0", Offset = "0x28263E0", VA = "0x182827DE0")]
	public Task CloseAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001942")]
	[Address(RVA = "0x2827E10", Offset = "0x2826410", VA = "0x182827E10")]
	public Task CloseOutputAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001943")]
	[Address(RVA = "0x2827E40", Offset = "0x2826440", VA = "0x182827E40")]
	[AsyncStateMachine(typeof(_003CConnectAsyncCore_003Ed__26))]
	public Task ConnectAsyncCore(Uri uri, CancellationToken cancellationToken, ClientWebSocketOptions options)
	{
		return null;
	}

	[Token(Token = "0x6001944")]
	[Address(RVA = "0x2827F60", Offset = "0x2826560", VA = "0x182827F60")]
	[AsyncStateMachine(typeof(_003CConnectSocketAsync_003Ed__27))]
	private Task<Socket> ConnectSocketAsync(string host, int port, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001945")]
	[Address(RVA = "0x28275C0", Offset = "0x2825BC0", VA = "0x1828275C0")]
	private static byte[] BuildRequestHeader(Uri uri, ClientWebSocketOptions options, string secKey)
	{
		return null;
	}

	[Token(Token = "0x6001946")]
	[Address(RVA = "0x2828090", Offset = "0x2826690", VA = "0x182828090")]
	private static KeyValuePair<string, string> CreateSecKeyAndSecWebSocketAccept()
	{
		return default(KeyValuePair<string, string>);
	}

	[Token(Token = "0x6001947")]
	[Address(RVA = "0x2828350", Offset = "0x2826950", VA = "0x182828350")]
	[AsyncStateMachine(typeof(_003CParseAndValidateConnectResponseAsync_003Ed__30))]
	private Task<string> ParseAndValidateConnectResponseAsync(Stream stream, ClientWebSocketOptions options, string expectedSecWebSocketAccept, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001948")]
	[Address(RVA = "0x2828650", Offset = "0x2826C50", VA = "0x182828650")]
	private static void ValidateAndTrackHeader(string targetHeaderName, string targetHeaderValue, string foundHeaderName, string foundHeaderValue, ref bool foundHeader)
	{
	}

	[Token(Token = "0x6001949")]
	[Address(RVA = "0x2828490", Offset = "0x2826A90", VA = "0x182828490")]
	[AsyncStateMachine(typeof(_003CReadResponseHeaderLineAsync_003Ed__32))]
	private static Task<string> ReadResponseHeaderLineAsync(Stream stream, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600194A")]
	[Address(RVA = "0x2828800", Offset = "0x2826E00", VA = "0x182828800")]
	public WebSocketHandle()
	{
	}
}
