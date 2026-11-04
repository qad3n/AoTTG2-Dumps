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

[Token(Token = "0x20003BC")]
public sealed class ClientWebSocket : WebSocket
{
	[Token(Token = "0x20003BD")]
	private enum InternalState
	{
		[Token(Token = "0x400108B")]
		Created,
		[Token(Token = "0x400108C")]
		Connecting,
		[Token(Token = "0x400108D")]
		Connected,
		[Token(Token = "0x400108E")]
		Disposed
	}

	[Token(Token = "0x20003BE")]
	internal sealed class DefaultWebProxy : IWebProxy
	{
		[Token(Token = "0x1700055B")]
		public static DefaultWebProxy Instance
		{
			[Token(Token = "0x600196C")]
			[Address(RVA = "0x2812080", Offset = "0x2810680", VA = "0x182812080")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700055C")]
		public ICredentials Credentials
		{
			[Token(Token = "0x600196D")]
			[Address(RVA = "0x2812040", Offset = "0x2810640", VA = "0x182812040", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600196E")]
		[Address(RVA = "0x2811F50", Offset = "0x2810550", VA = "0x182811F50", Slot = "4")]
		public Uri GetProxy(Uri destination)
		{
			return null;
		}

		[Token(Token = "0x600196F")]
		[Address(RVA = "0x2811F90", Offset = "0x2810590", VA = "0x182811F90", Slot = "5")]
		public bool IsBypassed(Uri host)
		{
			return default(bool);
		}

		[Token(Token = "0x6001970")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public DefaultWebProxy()
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20003BF")]
	[CompilerGenerated]
	private struct _003CConnectAsyncCore_003Ed__16 : IAsyncStateMachine
	{
		[Token(Token = "0x4001090")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4001091")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4001092")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ClientWebSocket _003C_003E4__this;

		[Token(Token = "0x4001093")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Uri uri;

		[Token(Token = "0x4001094")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4001095")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001972")]
		[Address(RVA = "0x281D4B0", Offset = "0x281BAB0", VA = "0x18281D4B0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001973")]
		[Address(RVA = "0x281D960", Offset = "0x281BF60", VA = "0x18281D960", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4001087")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly ClientWebSocketOptions _options;

	[Token(Token = "0x4001088")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private WebSocketHandle _innerWebSocket;

	[Token(Token = "0x4001089")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int _state;

	[Token(Token = "0x17000558")]
	public ClientWebSocketOptions Options
	{
		[Token(Token = "0x6001960")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000559")]
	public override string CloseStatusDescription
	{
		[Token(Token = "0x6001961")]
		[Address(RVA = "0x2811E00", Offset = "0x2810400", VA = "0x182811E00", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055A")]
	public override WebSocketState State
	{
		[Token(Token = "0x6001962")]
		[Address(RVA = "0x2811E90", Offset = "0x2810490", VA = "0x182811E90", Slot = "6")]
		get
		{
			return default(WebSocketState);
		}
	}

	[Token(Token = "0x600195F")]
	[Address(RVA = "0x2811B10", Offset = "0x2810110", VA = "0x182811B10")]
	public ClientWebSocket()
	{
	}

	[Token(Token = "0x6001963")]
	[Address(RVA = "0x28114E0", Offset = "0x280FAE0", VA = "0x1828114E0")]
	public Task ConnectAsync(Uri uri, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001964")]
	[Address(RVA = "0x28113B0", Offset = "0x280F9B0", VA = "0x1828113B0")]
	[AsyncStateMachine(typeof(_003CConnectAsyncCore_003Ed__16))]
	private Task ConnectAsyncCore(Uri uri, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001965")]
	[Address(RVA = "0x28119C0", Offset = "0x280FFC0", VA = "0x1828119C0", Slot = "12")]
	public override Task SendAsync(ArraySegment<byte> buffer, WebSocketMessageType messageType, bool endOfMessage, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001966")]
	[Address(RVA = "0x2811950", Offset = "0x280FF50", VA = "0x182811950", Slot = "11")]
	public override Task<WebSocketReceiveResult> ReceiveAsync(ArraySegment<byte> buffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001967")]
	[Address(RVA = "0x28112F0", Offset = "0x280F8F0", VA = "0x1828112F0", Slot = "8")]
	public override Task CloseAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001968")]
	[Address(RVA = "0x2811350", Offset = "0x280F950", VA = "0x182811350", Slot = "9")]
	public override Task CloseOutputAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001969")]
	[Address(RVA = "0x2811240", Offset = "0x280F840", VA = "0x182811240", Slot = "7")]
	public override void Abort()
	{
	}

	[Token(Token = "0x600196A")]
	[Address(RVA = "0x28118B0", Offset = "0x280FEB0", VA = "0x1828118B0", Slot = "10")]
	public override void Dispose()
	{
	}

	[Token(Token = "0x600196B")]
	[Address(RVA = "0x2811A40", Offset = "0x2810040", VA = "0x182811A40")]
	private void ThrowIfNotConnected()
	{
	}
}
