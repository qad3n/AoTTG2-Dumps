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

[Token(Token = "0x200037D")]
public abstract class WebSocket : IDisposable
{
	[Token(Token = "0x17000539")]
	public abstract string CloseStatusDescription
	{
		[Token(Token = "0x60017C8")]
		get;
	}

	[Token(Token = "0x1700053A")]
	public abstract WebSocketState State
	{
		[Token(Token = "0x60017C9")]
		get;
	}

	[Token(Token = "0x1700053B")]
	public static TimeSpan DefaultKeepAliveInterval
	{
		[Token(Token = "0x60017D0")]
		[Address(RVA = "0x61CCEF0", Offset = "0x61CBEF0", VA = "0x61CCEF0")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x60017CA")]
	public abstract void Abort();

	[Token(Token = "0x60017CB")]
	public abstract Task CloseAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken);

	[Token(Token = "0x60017CC")]
	public abstract Task CloseOutputAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken);

	[Token(Token = "0x60017CD")]
	public abstract void Dispose();

	[Token(Token = "0x60017CE")]
	public abstract Task<WebSocketReceiveResult> ReceiveAsync(ArraySegment<byte> buffer, CancellationToken cancellationToken);

	[Token(Token = "0x60017CF")]
	public abstract Task SendAsync(ArraySegment<byte> buffer, WebSocketMessageType messageType, bool endOfMessage, CancellationToken cancellationToken);

	[Token(Token = "0x60017D1")]
	[Address(RVA = "0x61C9690", Offset = "0x61C8690", VA = "0x61C9690")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public static WebSocket CreateClientWebSocket(Stream innerStream, string subProtocol, int receiveBufferSize, int sendBufferSize, TimeSpan keepAliveInterval, bool useZeroMaskingKey, ArraySegment<byte> internalBuffer)
	{
		return null;
	}

	[Token(Token = "0x60017D2")]
	[Address(RVA = "0x61BE590", Offset = "0x61BD590", VA = "0x61BE590")]
	protected WebSocket()
	{
	}
}
