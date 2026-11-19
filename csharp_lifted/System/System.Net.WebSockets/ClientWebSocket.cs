// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebSockets.ClientWebSocket
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Net.WebSockets;

[Token(Token = "0x2000378")]
public sealed class ClientWebSocket : WebSocket
{
	[Token(Token = "0x2000379")]
	private enum InternalState
	{
		[Token(Token = "0x4000FA3")]
		Created,
		[Token(Token = "0x4000FA4")]
		Connecting,
		[Token(Token = "0x4000FA5")]
		Connected,
		[Token(Token = "0x4000FA6")]
		Disposed
	}

	[Token(Token = "0x200037A")]
	internal sealed class DefaultWebProxy : IWebProxy
	{
		[Token(Token = "0x1700052E")]
		public static DefaultWebProxy Instance
		{
			[Token(Token = "0x60017B3")]
			[Address(RVA = "0x61CC900", Offset = "0x61CB900", VA = "0x61CC900")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700052F")]
		public ICredentials Credentials
		{
			[Token(Token = "0x60017B4")]
			[Address(RVA = "0x61CC970", Offset = "0x61CB970", VA = "0x61CC970", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017B5")]
		[Address(RVA = "0x61CC9B0", Offset = "0x61CB9B0", VA = "0x61CC9B0", Slot = "4")]
		public Uri GetProxy(Uri destination)
		{
			return null;
		}

		[Token(Token = "0x60017B6")]
		[Address(RVA = "0x61CC9F0", Offset = "0x61CB9F0", VA = "0x61CC9F0", Slot = "5")]
		public bool IsBypassed(Uri host)
		{
			return default(bool);
		}

		[Token(Token = "0x60017B7")]
		[Address(RVA = "0x61CCA30", Offset = "0x61CBA30", VA = "0x61CCA30")]
		public DefaultWebProxy()
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200037B")]
	[CompilerGenerated]
	private struct _003CConnectAsyncCore_003Ed__16 : IAsyncStateMachine
	{
		[Token(Token = "0x4000FA8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000FA9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000FAA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ClientWebSocket _003C_003E4__this;

		[Token(Token = "0x4000FAB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Uri uri;

		[Token(Token = "0x4000FAC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000FAD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60017B9")]
		[Address(RVA = "0x61CCAB0", Offset = "0x61CBAB0", VA = "0x61CCAB0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60017BA")]
		[Address(RVA = "0x61CCE90", Offset = "0x61CBE90", VA = "0x61CCE90", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000F9F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly ClientWebSocketOptions _options;

	[Token(Token = "0x4000FA0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private WebSocketHandle _innerWebSocket;

	[Token(Token = "0x4000FA1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int _state;

	[Token(Token = "0x1700052B")]
	public ClientWebSocketOptions Options
	{
		[Token(Token = "0x60017A7")]
		[Address(RVA = "0x61CC0B0", Offset = "0x61CB0B0", VA = "0x61CC0B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700052C")]
	public override string CloseStatusDescription
	{
		[Token(Token = "0x60017A8")]
		[Address(RVA = "0x61CC0C0", Offset = "0x61CB0C0", VA = "0x61CC0C0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700052D")]
	public override WebSocketState State
	{
		[Token(Token = "0x60017A9")]
		[Address(RVA = "0x61CC150", Offset = "0x61CB150", VA = "0x61CC150", Slot = "6")]
		get
		{
			return default(WebSocketState);
		}
	}

	[Token(Token = "0x60017A6")]
	[Address(RVA = "0x61CBC70", Offset = "0x61CAC70", VA = "0x61CBC70")]
	public ClientWebSocket()
	{
	}

	[Token(Token = "0x60017AA")]
	[Address(RVA = "0x61CC200", Offset = "0x61CB200", VA = "0x61CC200")]
	public Task ConnectAsync(Uri uri, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60017AB")]
	[Address(RVA = "0x61CC460", Offset = "0x61CB460", VA = "0x61CC460")]
	[AsyncStateMachine(typeof(_003CConnectAsyncCore_003Ed__16))]
	private Task ConnectAsyncCore(Uri uri, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60017AC")]
	[Address(RVA = "0x61CC570", Offset = "0x61CB570", VA = "0x61CC570", Slot = "12")]
	public override Task SendAsync(ArraySegment<byte> buffer, WebSocketMessageType messageType, bool endOfMessage, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60017AD")]
	[Address(RVA = "0x61CC690", Offset = "0x61CB690", VA = "0x61CC690", Slot = "11")]
	public override Task<WebSocketReceiveResult> ReceiveAsync(ArraySegment<byte> buffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60017AE")]
	[Address(RVA = "0x61CC6F0", Offset = "0x61CB6F0", VA = "0x61CC6F0", Slot = "8")]
	public override Task CloseAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60017AF")]
	[Address(RVA = "0x61CC750", Offset = "0x61CB750", VA = "0x61CC750", Slot = "9")]
	public override Task CloseOutputAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60017B0")]
	[Address(RVA = "0x61CC7B0", Offset = "0x61CB7B0", VA = "0x61CC7B0", Slot = "7")]
	public override void Abort()
	{
	}

	[Token(Token = "0x60017B1")]
	[Address(RVA = "0x61CC860", Offset = "0x61CB860", VA = "0x61CC860", Slot = "10")]
	public override void Dispose()
	{
	}

	[Token(Token = "0x60017B2")]
	[Address(RVA = "0x61CC5E0", Offset = "0x61CB5E0", VA = "0x61CC5E0")]
	private void ThrowIfNotConnected()
	{
	}
}
