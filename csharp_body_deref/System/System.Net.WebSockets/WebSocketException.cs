// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebSockets.WebSocketException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Net.WebSockets;

[Serializable]
[Token(Token = "0x200022C")]
public sealed class WebSocketException : Win32Exception
{
	[Token(Token = "0x4000C63")]
	[FieldOffset(Offset = "0x90")]
	private readonly WebSocketError _webSocketErrorCode;

	[Token(Token = "0x17000312")]
	public override int ErrorCode
	{
		[Token(Token = "0x6000DB7")]
		[Address(RVA = "0x49CA0C0", Offset = "0x49CA0C0", VA = "0x49CA0C0", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x49C9DC0", Offset = "0x49C9DC0", VA = "0x49C9DC0")]
	public WebSocketException()
	{
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x49BD6A0", Offset = "0x49BD6A0", VA = "0x49BD6A0")]
	public WebSocketException(WebSocketError error)
	{
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x49C31B0", Offset = "0x49C31B0", VA = "0x49C31B0")]
	public WebSocketException(WebSocketError error, string message)
	{
	}

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x49BC0C0", Offset = "0x49BC0C0", VA = "0x49BC0C0")]
	public WebSocketException(WebSocketError error, Exception innerException)
	{
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x49C9FC0", Offset = "0x49C9FC0", VA = "0x49C9FC0")]
	public WebSocketException(WebSocketError error, string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x49C9E40", Offset = "0x49C9E40", VA = "0x49C9E40")]
	public WebSocketException(int nativeError)
	{
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x49C62B0", Offset = "0x49C62B0", VA = "0x49C62B0")]
	public WebSocketException(string message)
	{
	}

	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x49C7AC0", Offset = "0x49C7AC0", VA = "0x49C7AC0")]
	public WebSocketException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000DB5")]
	[Address(RVA = "0x49CA010", Offset = "0x49CA010", VA = "0x49CA010")]
	private WebSocketException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6000DB6")]
	[Address(RVA = "0x49CA020", Offset = "0x49CA020", VA = "0x49CA020", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x49C9E80", Offset = "0x49C9E80", VA = "0x49C9E80")]
	private static string GetErrorMessage(WebSocketError error)
	{
		return null;
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x49CA000", Offset = "0x49CA000", VA = "0x49CA000")]
	private void SetErrorCodeOnError(int nativeError)
	{
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x49C9FF0", Offset = "0x49C9FF0", VA = "0x49C9FF0")]
	private static bool Succeeded(int hr)
	{
		return default(bool);
	}
}
