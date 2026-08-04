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

[Token(Token = "0x2000229")]
public abstract class WebSocket : IDisposable
{
	[Token(Token = "0x1700030F")]
	public abstract string CloseStatusDescription
	{
		[Token(Token = "0x6000DA2")]
		get;
	}

	[Token(Token = "0x17000310")]
	public abstract WebSocketState State
	{
		[Token(Token = "0x6000DA3")]
		get;
	}

	[Token(Token = "0x17000311")]
	public static TimeSpan DefaultKeepAliveInterval
	{
		[Token(Token = "0x6000DAA")]
		[Address(RVA = "0x49C4B20", Offset = "0x49C4B20", VA = "0x49C4B20")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x6000DA4")]
	public abstract void Abort();

	[Token(Token = "0x6000DA5")]
	public abstract Task CloseAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken);

	[Token(Token = "0x6000DA6")]
	public abstract Task CloseOutputAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken);

	[Token(Token = "0x6000DA7")]
	public abstract void Dispose();

	[Token(Token = "0x6000DA8")]
	public abstract Task<WebSocketReceiveResult> ReceiveAsync(ArraySegment<byte> buffer, CancellationToken cancellationToken);

	[Token(Token = "0x6000DA9")]
	public abstract Task SendAsync(ArraySegment<byte> buffer, WebSocketMessageType messageType, bool endOfMessage, CancellationToken cancellationToken);

	[Token(Token = "0x6000DAB")]
	[Address(RVA = "0x49C7710", Offset = "0x49C7710", VA = "0x49C7710")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public static WebSocket CreateClientWebSocket(Stream innerStream, string subProtocol, int receiveBufferSize, int sendBufferSize, TimeSpan keepAliveInterval, bool useZeroMaskingKey, ArraySegment<byte> internalBuffer)
	{
		return null;
	}

	[Token(Token = "0x6000DAC")]
	[Address(RVA = "0x49BA130", Offset = "0x49BA130", VA = "0x49BA130")]
	protected WebSocket()
	{
	}
}
