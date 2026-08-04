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

[Token(Token = "0x2000222")]
internal sealed class WebSocketHandle
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000224")]
	[CompilerGenerated]
	private struct _003CConnectAsyncCore_003Ed__26 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C1F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C20")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000C21")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000C22")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebSocketHandle _003C_003E4__this;

		[Token(Token = "0x4000C23")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Uri uri;

		[Token(Token = "0x4000C24")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public ClientWebSocketOptions options;

		[Token(Token = "0x4000C25")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private CancellationTokenRegistration _003Cregistration_003E5__2;

		[Token(Token = "0x4000C26")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private Stream _003Cstream_003E5__3;

		[Token(Token = "0x4000C27")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private KeyValuePair<string, string> _003CsecKeyAndSecWebSocketAccept_003E5__4;

		[Token(Token = "0x4000C28")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private ConfiguredTaskAwaitable<Socket>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000C29")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private SslStream _003CsslStream_003E5__5;

		[Token(Token = "0x4000C2A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x4000C2B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		private ConfiguredTaskAwaitable<string>.ConfiguredTaskAwaiter _003C_003Eu__3;

		[Token(Token = "0x6000D98")]
		[Address(RVA = "0x49C6600", Offset = "0x49C6600", VA = "0x49C6600", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000D99")]
		[Address(RVA = "0x49C7AD0", Offset = "0x49C7AD0", VA = "0x49C7AD0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000225")]
	[CompilerGenerated]
	private struct _003CConnectSocketAsync_003Ed__27 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C2C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C2D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<Socket> _003C_003Et__builder;

		[Token(Token = "0x4000C2E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string host;

		[Token(Token = "0x4000C2F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000C30")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public WebSocketHandle _003C_003E4__this;

		[Token(Token = "0x4000C31")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public int port;

		[Token(Token = "0x4000C32")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<IPAddress[]>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000C33")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private IPAddress[] _003C_003E7__wrap1;

		[Token(Token = "0x4000C34")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x4000C35")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private Socket _003Csocket_003E5__4;

		[Token(Token = "0x4000C36")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private CancellationTokenRegistration _003C_003E7__wrap4;

		[Token(Token = "0x4000C37")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private CancellationTokenRegistration _003C_003E7__wrap5;

		[Token(Token = "0x4000C38")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000D9A")]
		[Address(RVA = "0x49C7B30", Offset = "0x49C7B30", VA = "0x49C7B30", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000D9B")]
		[Address(RVA = "0x49C8850", Offset = "0x49C8850", VA = "0x49C8850", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000227")]
	[CompilerGenerated]
	private struct _003CParseAndValidateConnectResponseAsync_003Ed__30 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C3A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C3B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<string> _003C_003Et__builder;

		[Token(Token = "0x4000C3C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Stream stream;

		[Token(Token = "0x4000C3D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000C3E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string expectedSecWebSocketAccept;

		[Token(Token = "0x4000C3F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public ClientWebSocketOptions options;

		[Token(Token = "0x4000C40")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private bool _003CfoundUpgrade_003E5__2;

		[Token(Token = "0x4000C41")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
		private bool _003CfoundConnection_003E5__3;

		[Token(Token = "0x4000C42")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x42")]
		private bool _003CfoundSecWebSocketAccept_003E5__4;

		[Token(Token = "0x4000C43")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private string _003Csubprotocol_003E5__5;

		[Token(Token = "0x4000C44")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable<string>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000D9E")]
		[Address(RVA = "0x49C88F0", Offset = "0x49C88F0", VA = "0x49C88F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000D9F")]
		[Address(RVA = "0x49C9690", Offset = "0x49C9690", VA = "0x49C9690", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000228")]
	[CompilerGenerated]
	private struct _003CReadResponseHeaderLineAsync_003Ed__32 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C45")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C46")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<string> _003C_003Et__builder;

		[Token(Token = "0x4000C47")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Stream stream;

		[Token(Token = "0x4000C48")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000C49")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private StringBuilder _003Csb_003E5__2;

		[Token(Token = "0x4000C4A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private byte[] _003Carr_003E5__3;

		[Token(Token = "0x4000C4B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private char _003CprevChar_003E5__4;

		[Token(Token = "0x4000C4C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000DA0")]
		[Address(RVA = "0x49C9700", Offset = "0x49C9700", VA = "0x49C9700", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000DA1")]
		[Address(RVA = "0x49C9D50", Offset = "0x49C9D50", VA = "0x49C9D50", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000C16")]
	[ThreadStatic]
	private static StringBuilder t_cachedStringBuilder;

	[Token(Token = "0x4000C17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Encoding s_defaultHttpEncoding;

	[Token(Token = "0x4000C18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly CancellationTokenSource _abortSource;

	[Token(Token = "0x4000C19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private WebSocketState _state;

	[Token(Token = "0x4000C1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private WebSocket _webSocket;

	[Token(Token = "0x1700030D")]
	public string CloseStatusDescription
	{
		[Token(Token = "0x6000D81")]
		[Address(RVA = "0x49C3940", Offset = "0x49C3940", VA = "0x49C3940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030E")]
	public WebSocketState State
	{
		[Token(Token = "0x6000D82")]
		[Address(RVA = "0x49C3A10", Offset = "0x49C3A10", VA = "0x49C3A10")]
		get
		{
			return default(WebSocketState);
		}
	}

	[Token(Token = "0x6000D7F")]
	[Address(RVA = "0x49C48B0", Offset = "0x49C48B0", VA = "0x49C48B0")]
	public static WebSocketHandle Create()
	{
		return null;
	}

	[Token(Token = "0x6000D80")]
	[Address(RVA = "0x49C3930", Offset = "0x49C3930", VA = "0x49C3930")]
	public static bool IsValid(WebSocketHandle handle)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D83")]
	[Address(RVA = "0x49C36E0", Offset = "0x49C36E0", VA = "0x49C36E0")]
	public static void CheckPlatformSupport()
	{
	}

	[Token(Token = "0x6000D84")]
	[Address(RVA = "0x49C4250", Offset = "0x49C4250", VA = "0x49C4250")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000D85")]
	[Address(RVA = "0x49C4170", Offset = "0x49C4170", VA = "0x49C4170")]
	public void Abort()
	{
	}

	[Token(Token = "0x6000D86")]
	[Address(RVA = "0x49C3EE0", Offset = "0x49C3EE0", VA = "0x49C3EE0")]
	public Task SendAsync(ArraySegment<byte> buffer, WebSocketMessageType messageType, bool endOfMessage, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D87")]
	[Address(RVA = "0x49C3F70", Offset = "0x49C3F70", VA = "0x49C3F70")]
	public Task<WebSocketReceiveResult> ReceiveAsync(ArraySegment<byte> buffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D88")]
	[Address(RVA = "0x49C4000", Offset = "0x49C4000", VA = "0x49C4000")]
	public Task CloseAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D89")]
	[Address(RVA = "0x49C4090", Offset = "0x49C4090", VA = "0x49C4090")]
	public Task CloseOutputAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D8A")]
	[Address(RVA = "0x49C4950", Offset = "0x49C4950", VA = "0x49C4950")]
	[AsyncStateMachine(typeof(_003CConnectAsyncCore_003Ed__26))]
	public Task ConnectAsyncCore(Uri uri, CancellationToken cancellationToken, ClientWebSocketOptions options)
	{
		return null;
	}

	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x49C5000", Offset = "0x49C5000", VA = "0x49C5000")]
	[AsyncStateMachine(typeof(_003CConnectSocketAsync_003Ed__27))]
	private Task<Socket> ConnectSocketAsync(string host, int port, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D8C")]
	[Address(RVA = "0x49C5180", Offset = "0x49C5180", VA = "0x49C5180")]
	private static byte[] BuildRequestHeader(Uri uri, ClientWebSocketOptions options, string secKey)
	{
		return null;
	}

	[Token(Token = "0x6000D8D")]
	[Address(RVA = "0x49C5DB0", Offset = "0x49C5DB0", VA = "0x49C5DB0")]
	private static KeyValuePair<string, string> CreateSecKeyAndSecWebSocketAccept()
	{
		return default(KeyValuePair<string, string>);
	}

	[Token(Token = "0x6000D8E")]
	[Address(RVA = "0x49C6070", Offset = "0x49C6070", VA = "0x49C6070")]
	[AsyncStateMachine(typeof(_003CParseAndValidateConnectResponseAsync_003Ed__30))]
	private Task<string> ParseAndValidateConnectResponseAsync(Stream stream, ClientWebSocketOptions options, string expectedSecWebSocketAccept, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D8F")]
	[Address(RVA = "0x49C61D0", Offset = "0x49C61D0", VA = "0x49C61D0")]
	private static void ValidateAndTrackHeader(string targetHeaderName, string targetHeaderValue, string foundHeaderName, string foundHeaderValue, ref bool foundHeader)
	{
	}

	[Token(Token = "0x6000D90")]
	[Address(RVA = "0x49C62C0", Offset = "0x49C62C0", VA = "0x49C62C0")]
	[AsyncStateMachine(typeof(_003CReadResponseHeaderLineAsync_003Ed__32))]
	private static Task<string> ReadResponseHeaderLineAsync(Stream stream, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D91")]
	[Address(RVA = "0x49C4F90", Offset = "0x49C4F90", VA = "0x49C4F90")]
	public WebSocketHandle()
	{
	}
}
