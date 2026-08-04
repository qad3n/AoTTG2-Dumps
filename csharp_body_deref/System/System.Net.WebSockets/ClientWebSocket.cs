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

[Token(Token = "0x200021D")]
public sealed class ClientWebSocket : WebSocket
{
	[Token(Token = "0x200021E")]
	private enum InternalState
	{
		[Token(Token = "0x4000C01")]
		Created,
		[Token(Token = "0x4000C02")]
		Connecting,
		[Token(Token = "0x4000C03")]
		Connected,
		[Token(Token = "0x4000C04")]
		Disposed
	}

	[Token(Token = "0x200021F")]
	internal sealed class DefaultWebProxy : IWebProxy
	{
		[Token(Token = "0x17000302")]
		public static DefaultWebProxy Instance
		{
			[Token(Token = "0x6000D6A")]
			[Address(RVA = "0x49C4280", Offset = "0x49C4280", VA = "0x49C4280")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000303")]
		public ICredentials Credentials
		{
			[Token(Token = "0x6000D6B")]
			[Address(RVA = "0x49C42F0", Offset = "0x49C42F0", VA = "0x49C42F0", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D6C")]
		[Address(RVA = "0x49C4330", Offset = "0x49C4330", VA = "0x49C4330", Slot = "4")]
		public Uri GetProxy(Uri destination)
		{
			return null;
		}

		[Token(Token = "0x6000D6D")]
		[Address(RVA = "0x49C4370", Offset = "0x49C4370", VA = "0x49C4370", Slot = "5")]
		public bool IsBypassed(Uri host)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D6E")]
		[Address(RVA = "0x49C43B0", Offset = "0x49C43B0", VA = "0x49C43B0")]
		public DefaultWebProxy()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000220")]
	[CompilerGenerated]
	private struct _003CConnectAsyncCore_003Ed__16 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C06")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C07")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000C08")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ClientWebSocket _003C_003E4__this;

		[Token(Token = "0x4000C09")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Uri uri;

		[Token(Token = "0x4000C0A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000C0B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000D70")]
		[Address(RVA = "0x49C4430", Offset = "0x49C4430", VA = "0x49C4430", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000D71")]
		[Address(RVA = "0x49C4AC0", Offset = "0x49C4AC0", VA = "0x49C4AC0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000BFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly ClientWebSocketOptions _options;

	[Token(Token = "0x4000BFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private WebSocketHandle _innerWebSocket;

	[Token(Token = "0x4000BFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int _state;

	[Token(Token = "0x170002FF")]
	public ClientWebSocketOptions Options
	{
		[Token(Token = "0x6000D5E")]
		[Address(RVA = "0x49C3890", Offset = "0x49C3890", VA = "0x49C3890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000300")]
	public override string CloseStatusDescription
	{
		[Token(Token = "0x6000D5F")]
		[Address(RVA = "0x49C38A0", Offset = "0x49C38A0", VA = "0x49C38A0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000301")]
	public override WebSocketState State
	{
		[Token(Token = "0x6000D60")]
		[Address(RVA = "0x49C3960", Offset = "0x49C3960", VA = "0x49C3960", Slot = "6")]
		get
		{
			return default(WebSocketState);
		}
	}

	[Token(Token = "0x6000D5D")]
	[Address(RVA = "0x49C3440", Offset = "0x49C3440", VA = "0x49C3440")]
	public ClientWebSocket()
	{
	}

	[Token(Token = "0x6000D61")]
	[Address(RVA = "0x49C3A40", Offset = "0x49C3A40", VA = "0x49C3A40")]
	public Task ConnectAsync(Uri uri, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D62")]
	[Address(RVA = "0x49C3CA0", Offset = "0x49C3CA0", VA = "0x49C3CA0")]
	[AsyncStateMachine(typeof(_003CConnectAsyncCore_003Ed__16))]
	private Task ConnectAsyncCore(Uri uri, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D63")]
	[Address(RVA = "0x49C3DC0", Offset = "0x49C3DC0", VA = "0x49C3DC0", Slot = "12")]
	public override Task SendAsync(ArraySegment<byte> buffer, WebSocketMessageType messageType, bool endOfMessage, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D64")]
	[Address(RVA = "0x49C3F10", Offset = "0x49C3F10", VA = "0x49C3F10", Slot = "11")]
	public override Task<WebSocketReceiveResult> ReceiveAsync(ArraySegment<byte> buffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D65")]
	[Address(RVA = "0x49C3FA0", Offset = "0x49C3FA0", VA = "0x49C3FA0", Slot = "8")]
	public override Task CloseAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D66")]
	[Address(RVA = "0x49C4030", Offset = "0x49C4030", VA = "0x49C4030", Slot = "9")]
	public override Task CloseOutputAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D67")]
	[Address(RVA = "0x49C40C0", Offset = "0x49C40C0", VA = "0x49C40C0", Slot = "7")]
	public override void Abort()
	{
	}

	[Token(Token = "0x6000D68")]
	[Address(RVA = "0x49C41B0", Offset = "0x49C41B0", VA = "0x49C41B0", Slot = "10")]
	public override void Dispose()
	{
	}

	[Token(Token = "0x6000D69")]
	[Address(RVA = "0x49C3E30", Offset = "0x49C3E30", VA = "0x49C3E30")]
	private void ThrowIfNotConnected()
	{
	}
}
