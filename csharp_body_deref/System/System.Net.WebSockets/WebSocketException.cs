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
[Token(Token = "0x20003C4")]
public sealed class WebSocketException : Win32Exception
{
	[Token(Token = "0x40010B6")]
	[FieldOffset(Offset = "0x98")]
	private readonly WebSocketError _webSocketErrorCode;

	[Token(Token = "0x17000569")]
	public override int ErrorCode
	{
		[Token(Token = "0x6001996")]
		[Address(RVA = "0xE925C0", Offset = "0xE90BC0", VA = "0x180E925C0", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600198C")]
	[Address(RVA = "0x2827440", Offset = "0x2825A40", VA = "0x182827440")]
	public WebSocketException()
	{
	}

	[Token(Token = "0x600198D")]
	[Address(RVA = "0x28273C0", Offset = "0x28259C0", VA = "0x1828273C0")]
	public WebSocketException(WebSocketError error)
	{
	}

	[Token(Token = "0x600198E")]
	[Address(RVA = "0x2827410", Offset = "0x2825A10", VA = "0x182827410")]
	public WebSocketException(WebSocketError error, string message)
	{
	}

	[Token(Token = "0x600198F")]
	[Address(RVA = "0x2827520", Offset = "0x2825B20", VA = "0x182827520")]
	public WebSocketException(WebSocketError error, Exception innerException)
	{
	}

	[Token(Token = "0x6001990")]
	[Address(RVA = "0x2827380", Offset = "0x2825980", VA = "0x182827380")]
	public WebSocketException(WebSocketError error, string message, Exception innerException)
	{
	}

	[Token(Token = "0x6001991")]
	[Address(RVA = "0x28274C0", Offset = "0x2825AC0", VA = "0x1828274C0")]
	public WebSocketException(int nativeError)
	{
	}

	[Token(Token = "0x6001992")]
	[Address(RVA = "0x2827510", Offset = "0x2825B10", VA = "0x182827510")]
	public WebSocketException(string message)
	{
	}

	[Token(Token = "0x6001993")]
	[Address(RVA = "0x2827400", Offset = "0x2825A00", VA = "0x182827400")]
	public WebSocketException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6001994")]
	[Address(RVA = "0x281A580", Offset = "0x2818B80", VA = "0x18281A580")]
	private WebSocketException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6001995")]
	[Address(RVA = "0x28272B0", Offset = "0x28258B0", VA = "0x1828272B0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001997")]
	[Address(RVA = "0x2827130", Offset = "0x2825730", VA = "0x182827130")]
	private static string GetErrorMessage(WebSocketError error)
	{
		return null;
	}

	[Token(Token = "0x6001998")]
	[Address(RVA = "0x2827360", Offset = "0x2825960", VA = "0x182827360")]
	private void SetErrorCodeOnError(int nativeError)
	{
	}

	[Token(Token = "0x6001999")]
	[Address(RVA = "0x2827370", Offset = "0x2825970", VA = "0x182827370")]
	private static bool Succeeded(int hr)
	{
		return default(bool);
	}
}
