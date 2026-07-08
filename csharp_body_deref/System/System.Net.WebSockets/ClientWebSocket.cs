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
			[Address(RVA = "0x469F180", Offset = "0x469F180", VA = "0x469F180")]
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
			[Address(RVA = "0x469F1F0", Offset = "0x469F1F0", VA = "0x469F1F0", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D6C")]
		[Address(RVA = "0x469F230", Offset = "0x469F230", VA = "0x469F230", Slot = "4")]
		public Uri GetProxy(Uri destination)
		{
			return null;
		}

		[Token(Token = "0x6000D6D")]
		[Address(RVA = "0x469F270", Offset = "0x469F270", VA = "0x469F270", Slot = "5")]
		public bool IsBypassed(Uri host)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D6E")]
		[Address(RVA = "0x469F2B0", Offset = "0x469F2B0", VA = "0x469F2B0")]
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
		[Address(RVA = "0x469F330", Offset = "0x469F330", VA = "0x469F330", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000D71")]
		[Address(RVA = "0x469F9C0", Offset = "0x469F9C0", VA = "0x469F9C0", Slot = "5")]
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
		[Address(RVA = "0x469E790", Offset = "0x469E790", VA = "0x469E790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000300")]
	public override string CloseStatusDescription
	{
		[Token(Token = "0x6000D5F")]
		[Address(RVA = "0x469E7A0", Offset = "0x469E7A0", VA = "0x469E7A0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000301")]
	public override WebSocketState State
	{
		[Token(Token = "0x6000D60")]
		[Address(RVA = "0x469E860", Offset = "0x469E860", VA = "0x469E860", Slot = "6")]
		get
		{
			return default(WebSocketState);
		}
	}

	[Token(Token = "0x6000D5D")]
	[Address(RVA = "0x469E340", Offset = "0x469E340", VA = "0x469E340")]
	public ClientWebSocket()
	{
	}

	[Token(Token = "0x6000D61")]
	[Address(RVA = "0x469E940", Offset = "0x469E940", VA = "0x469E940")]
	public Task ConnectAsync(Uri uri, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D62")]
	[Address(RVA = "0x469EBA0", Offset = "0x469EBA0", VA = "0x469EBA0")]
	[AsyncStateMachine(typeof(_003CConnectAsyncCore_003Ed__16))]
	private Task ConnectAsyncCore(Uri uri, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D63")]
	[Address(RVA = "0x469ECC0", Offset = "0x469ECC0", VA = "0x469ECC0", Slot = "12")]
	public override Task SendAsync(ArraySegment<byte> buffer, WebSocketMessageType messageType, bool endOfMessage, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D64")]
	[Address(RVA = "0x469EE10", Offset = "0x469EE10", VA = "0x469EE10", Slot = "11")]
	public override Task<WebSocketReceiveResult> ReceiveAsync(ArraySegment<byte> buffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D65")]
	[Address(RVA = "0x469EEA0", Offset = "0x469EEA0", VA = "0x469EEA0", Slot = "8")]
	public override Task CloseAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D66")]
	[Address(RVA = "0x469EF30", Offset = "0x469EF30", VA = "0x469EF30", Slot = "9")]
	public override Task CloseOutputAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D67")]
	[Address(RVA = "0x469EFC0", Offset = "0x469EFC0", VA = "0x469EFC0", Slot = "7")]
	public override void Abort()
	{
	}

	[Token(Token = "0x6000D68")]
	[Address(RVA = "0x469F0B0", Offset = "0x469F0B0", VA = "0x469F0B0", Slot = "10")]
	public override void Dispose()
	{
	}

	[Token(Token = "0x6000D69")]
	[Address(RVA = "0x469ED30", Offset = "0x469ED30", VA = "0x469ED30")]
	private void ThrowIfNotConnected()
	{
	}
}
