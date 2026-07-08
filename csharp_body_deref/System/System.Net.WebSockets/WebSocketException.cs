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
		[Address(RVA = "0x46A4FC0", Offset = "0x46A4FC0", VA = "0x46A4FC0", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x46A4CC0", Offset = "0x46A4CC0", VA = "0x46A4CC0")]
	public WebSocketException()
	{
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x46985A0", Offset = "0x46985A0", VA = "0x46985A0")]
	public WebSocketException(WebSocketError error)
	{
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x469E0B0", Offset = "0x469E0B0", VA = "0x469E0B0")]
	public WebSocketException(WebSocketError error, string message)
	{
	}

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x4696FC0", Offset = "0x4696FC0", VA = "0x4696FC0")]
	public WebSocketException(WebSocketError error, Exception innerException)
	{
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x46A4EC0", Offset = "0x46A4EC0", VA = "0x46A4EC0")]
	public WebSocketException(WebSocketError error, string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x46A4D40", Offset = "0x46A4D40", VA = "0x46A4D40")]
	public WebSocketException(int nativeError)
	{
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x46A11B0", Offset = "0x46A11B0", VA = "0x46A11B0")]
	public WebSocketException(string message)
	{
	}

	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x46A29C0", Offset = "0x46A29C0", VA = "0x46A29C0")]
	public WebSocketException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000DB5")]
	[Address(RVA = "0x46A4F10", Offset = "0x46A4F10", VA = "0x46A4F10")]
	private WebSocketException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6000DB6")]
	[Address(RVA = "0x46A4F20", Offset = "0x46A4F20", VA = "0x46A4F20", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x46A4D80", Offset = "0x46A4D80", VA = "0x46A4D80")]
	private static string GetErrorMessage(WebSocketError error)
	{
		return null;
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x46A4F00", Offset = "0x46A4F00", VA = "0x46A4F00")]
	private void SetErrorCodeOnError(int nativeError)
	{
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x46A4EF0", Offset = "0x46A4EF0", VA = "0x46A4EF0")]
	private static bool Succeeded(int hr)
	{
		return default(bool);
	}
}
