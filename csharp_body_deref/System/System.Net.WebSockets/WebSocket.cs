// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebSockets.WebSocket
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonLibs/WebSocket/WebSocket.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.IO;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Net.WebSockets;

[Token(Token = "0x20003C1")]
public abstract class WebSocket : IDisposable
{
	[Token(Token = "0x17000566")]
	public abstract string CloseStatusDescription
	{
		[Token(Token = "0x6001981")]
		get;
	}

	[Token(Token = "0x17000567")]
	public abstract WebSocketState State
	{
		[Token(Token = "0x6001982")]
		get;
	}

	[Token(Token = "0x17000568")]
	public static TimeSpan DefaultKeepAliveInterval
	{
		[Token(Token = "0x6001989")]
		[Address(RVA = "0x2829600", Offset = "0x2827C00", VA = "0x182829600")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x6001983")]
	public abstract void Abort();

	[Token(Token = "0x6001984")]
	public abstract Task CloseAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken);

	[Token(Token = "0x6001985")]
	public abstract Task CloseOutputAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken);

	[Token(Token = "0x6001986")]
	public abstract void Dispose();

	[Token(Token = "0x6001987")]
	public abstract Task<WebSocketReceiveResult> ReceiveAsync(ArraySegment<byte> buffer, CancellationToken cancellationToken);

	[Token(Token = "0x6001988")]
	public abstract Task SendAsync(ArraySegment<byte> buffer, WebSocketMessageType messageType, bool endOfMessage, CancellationToken cancellationToken);

	[Token(Token = "0x600198A")]
	[Address(RVA = "0x2829210", Offset = "0x2827810", VA = "0x182829210")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public static WebSocket CreateClientWebSocket(Stream innerStream, string subProtocol, int receiveBufferSize, int sendBufferSize, TimeSpan keepAliveInterval, bool useZeroMaskingKey, ArraySegment<byte> internalBuffer)
	{
		return null;
	}

	[Token(Token = "0x600198B")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected WebSocket()
	{
	}
}
