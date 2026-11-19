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

[Token(Token = "0x2000370")]
internal sealed class WebSocketHandle
{
	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000372")]
	[CompilerGenerated]
	private struct _003CConnectAsyncCore_003Ed__26 : IAsyncStateMachine
	{
		[Token(Token = "0x4000F71")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000F72")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000F73")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000F74")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebSocketHandle _003C_003E4__this;

		[Token(Token = "0x4000F75")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Uri uri;

		[Token(Token = "0x4000F76")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public ClientWebSocketOptions options;

		[Token(Token = "0x4000F77")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private CancellationTokenRegistration _003Cregistration_003E5__2;

		[Token(Token = "0x4000F78")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private Stream _003Cstream_003E5__3;

		[Token(Token = "0x4000F79")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private KeyValuePair<string, string> _003CsecKeyAndSecWebSocketAccept_003E5__4;

		[Token(Token = "0x4000F7A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private ConfiguredTaskAwaitable<Socket>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000F7B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private SslStream _003CsslStream_003E5__5;

		[Token(Token = "0x4000F7C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x4000F7D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		private ConfiguredTaskAwaitable<string>.ConfiguredTaskAwaiter _003C_003Eu__3;

		[Token(Token = "0x6001798")]
		[Address(RVA = "0x61C88E0", Offset = "0x61C78E0", VA = "0x61C88E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001799")]
		[Address(RVA = "0x61C9A50", Offset = "0x61C8A50", VA = "0x61C9A50", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000373")]
	[CompilerGenerated]
	private struct _003CConnectSocketAsync_003Ed__27 : IAsyncStateMachine
	{
		[Token(Token = "0x4000F7E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000F7F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<Socket> _003C_003Et__builder;

		[Token(Token = "0x4000F80")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string host;

		[Token(Token = "0x4000F81")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000F82")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public WebSocketHandle _003C_003E4__this;

		[Token(Token = "0x4000F83")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public int port;

		[Token(Token = "0x4000F84")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<IPAddress[]>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000F85")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private IPAddress[] _003C_003E7__wrap1;

		[Token(Token = "0x4000F86")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x4000F87")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private Socket _003Csocket_003E5__4;

		[Token(Token = "0x4000F88")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private CancellationTokenRegistration _003C_003E7__wrap4;

		[Token(Token = "0x4000F89")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private CancellationTokenRegistration _003C_003E7__wrap5;

		[Token(Token = "0x4000F8A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x600179A")]
		[Address(RVA = "0x61C9AB0", Offset = "0x61C8AB0", VA = "0x61C9AB0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600179B")]
		[Address(RVA = "0x61CA760", Offset = "0x61C9760", VA = "0x61CA760", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000375")]
	[CompilerGenerated]
	private struct _003CParseAndValidateConnectResponseAsync_003Ed__30 : IAsyncStateMachine
	{
		[Token(Token = "0x4000F8C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000F8D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<string> _003C_003Et__builder;

		[Token(Token = "0x4000F8E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Stream stream;

		[Token(Token = "0x4000F8F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000F90")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string expectedSecWebSocketAccept;

		[Token(Token = "0x4000F91")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public ClientWebSocketOptions options;

		[Token(Token = "0x4000F92")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private bool _003CfoundUpgrade_003E5__2;

		[Token(Token = "0x4000F93")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
		private bool _003CfoundConnection_003E5__3;

		[Token(Token = "0x4000F94")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x42")]
		private bool _003CfoundSecWebSocketAccept_003E5__4;

		[Token(Token = "0x4000F95")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private string _003Csubprotocol_003E5__5;

		[Token(Token = "0x4000F96")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable<string>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600179E")]
		[Address(RVA = "0x61CA800", Offset = "0x61C9800", VA = "0x61CA800", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600179F")]
		[Address(RVA = "0x61CB2D0", Offset = "0x61CA2D0", VA = "0x61CB2D0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000376")]
	[CompilerGenerated]
	private struct _003CReadResponseHeaderLineAsync_003Ed__32 : IAsyncStateMachine
	{
		[Token(Token = "0x4000F97")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000F98")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<string> _003C_003Et__builder;

		[Token(Token = "0x4000F99")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Stream stream;

		[Token(Token = "0x4000F9A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000F9B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private StringBuilder _003Csb_003E5__2;

		[Token(Token = "0x4000F9C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private byte[] _003Carr_003E5__3;

		[Token(Token = "0x4000F9D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private char _003CprevChar_003E5__4;

		[Token(Token = "0x4000F9E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60017A0")]
		[Address(RVA = "0x61CB340", Offset = "0x61CA340", VA = "0x61CB340", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60017A1")]
		[Address(RVA = "0x61CB9C0", Offset = "0x61CA9C0", VA = "0x61CB9C0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000F68")]
	[ThreadStatic]
	private static StringBuilder t_cachedStringBuilder;

	[Token(Token = "0x4000F69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Encoding s_defaultHttpEncoding;

	[Token(Token = "0x4000F6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly CancellationTokenSource _abortSource;

	[Token(Token = "0x4000F6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private WebSocketState _state;

	[Token(Token = "0x4000F6C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private WebSocket _webSocket;

	[Token(Token = "0x17000529")]
	public string CloseStatusDescription
	{
		[Token(Token = "0x6001781")]
		[Address(RVA = "0x61C7330", Offset = "0x61C6330", VA = "0x61C7330")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700052A")]
	public WebSocketState State
	{
		[Token(Token = "0x6001782")]
		[Address(RVA = "0x61C7350", Offset = "0x61C6350", VA = "0x61C7350")]
		get
		{
			return default(WebSocketState);
		}
	}

	[Token(Token = "0x600177F")]
	[Address(RVA = "0x61C7210", Offset = "0x61C6210", VA = "0x61C7210")]
	public static WebSocketHandle Create()
	{
		return null;
	}

	[Token(Token = "0x6001780")]
	[Address(RVA = "0x61C7320", Offset = "0x61C6320", VA = "0x61C7320")]
	public static bool IsValid(WebSocketHandle handle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001783")]
	[Address(RVA = "0x61C7380", Offset = "0x61C6380", VA = "0x61C7380")]
	public static void CheckPlatformSupport()
	{
	}

	[Token(Token = "0x6001784")]
	[Address(RVA = "0x61C7390", Offset = "0x61C6390", VA = "0x61C7390")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001785")]
	[Address(RVA = "0x61C73C0", Offset = "0x61C63C0", VA = "0x61C73C0")]
	public void Abort()
	{
	}

	[Token(Token = "0x6001786")]
	[Address(RVA = "0x61C7400", Offset = "0x61C6400", VA = "0x61C7400")]
	public Task SendAsync(ArraySegment<byte> buffer, WebSocketMessageType messageType, bool endOfMessage, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001787")]
	[Address(RVA = "0x61C7430", Offset = "0x61C6430", VA = "0x61C7430")]
	public Task<WebSocketReceiveResult> ReceiveAsync(ArraySegment<byte> buffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001788")]
	[Address(RVA = "0x61C7460", Offset = "0x61C6460", VA = "0x61C7460")]
	public Task CloseAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001789")]
	[Address(RVA = "0x61C7490", Offset = "0x61C6490", VA = "0x61C7490")]
	public Task CloseOutputAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600178A")]
	[Address(RVA = "0x61C74C0", Offset = "0x61C64C0", VA = "0x61C74C0")]
	[AsyncStateMachine(typeof(_003CConnectAsyncCore_003Ed__26))]
	public Task ConnectAsyncCore(Uri uri, CancellationToken cancellationToken, ClientWebSocketOptions options)
	{
		return null;
	}

	[Token(Token = "0x600178B")]
	[Address(RVA = "0x61C7620", Offset = "0x61C6620", VA = "0x61C7620")]
	[AsyncStateMachine(typeof(_003CConnectSocketAsync_003Ed__27))]
	private Task<Socket> ConnectSocketAsync(string host, int port, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600178C")]
	[Address(RVA = "0x61C77A0", Offset = "0x61C67A0", VA = "0x61C77A0")]
	private static byte[] BuildRequestHeader(Uri uri, ClientWebSocketOptions options, string secKey)
	{
		return null;
	}

	[Token(Token = "0x600178D")]
	[Address(RVA = "0x61C8100", Offset = "0x61C7100", VA = "0x61C8100")]
	private static KeyValuePair<string, string> CreateSecKeyAndSecWebSocketAccept()
	{
		return default(KeyValuePair<string, string>);
	}

	[Token(Token = "0x600178E")]
	[Address(RVA = "0x61C8350", Offset = "0x61C7350", VA = "0x61C8350")]
	[AsyncStateMachine(typeof(_003CParseAndValidateConnectResponseAsync_003Ed__30))]
	private Task<string> ParseAndValidateConnectResponseAsync(Stream stream, ClientWebSocketOptions options, string expectedSecWebSocketAccept, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600178F")]
	[Address(RVA = "0x61C84B0", Offset = "0x61C74B0", VA = "0x61C84B0")]
	private static void ValidateAndTrackHeader(string targetHeaderName, string targetHeaderValue, string foundHeaderName, string foundHeaderValue, ref bool foundHeader)
	{
	}

	[Token(Token = "0x6001790")]
	[Address(RVA = "0x61C85A0", Offset = "0x61C75A0", VA = "0x61C85A0")]
	[AsyncStateMachine(typeof(_003CReadResponseHeaderLineAsync_003Ed__32))]
	private static Task<string> ReadResponseHeaderLineAsync(Stream stream, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001791")]
	[Address(RVA = "0x61C72B0", Offset = "0x61C62B0", VA = "0x61C72B0")]
	public WebSocketHandle()
	{
	}
}
