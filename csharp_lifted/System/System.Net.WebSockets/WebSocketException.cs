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
[Token(Token = "0x2000380")]
public sealed class WebSocketException : Win32Exception
{
	[Token(Token = "0x4000FCE")]
	[FieldOffset(Offset = "0x90")]
	private readonly WebSocketError _webSocketErrorCode;

	[Token(Token = "0x1700053C")]
	public override int ErrorCode
	{
		[Token(Token = "0x60017DD")]
		[Address(RVA = "0x61CD5C0", Offset = "0x61CC5C0", VA = "0x61CD5C0", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60017D3")]
	[Address(RVA = "0x61CD2C0", Offset = "0x61CC2C0", VA = "0x61CD2C0")]
	public WebSocketException()
	{
	}

	[Token(Token = "0x60017D4")]
	[Address(RVA = "0x61C1A10", Offset = "0x61C0A10", VA = "0x61C1A10")]
	public WebSocketException(WebSocketError error)
	{
	}

	[Token(Token = "0x60017D5")]
	[Address(RVA = "0x61CB2B0", Offset = "0x61CA2B0", VA = "0x61CB2B0")]
	public WebSocketException(WebSocketError error, string message)
	{
	}

	[Token(Token = "0x60017D6")]
	[Address(RVA = "0x61C04B0", Offset = "0x61BF4B0", VA = "0x61C04B0")]
	public WebSocketException(WebSocketError error, Exception innerException)
	{
	}

	[Token(Token = "0x60017D7")]
	[Address(RVA = "0x61CD4C0", Offset = "0x61CC4C0", VA = "0x61CD4C0")]
	public WebSocketException(WebSocketError error, string message, Exception innerException)
	{
	}

	[Token(Token = "0x60017D8")]
	[Address(RVA = "0x61CD340", Offset = "0x61CC340", VA = "0x61CD340")]
	public WebSocketException(int nativeError)
	{
	}

	[Token(Token = "0x60017D9")]
	[Address(RVA = "0x61C8590", Offset = "0x61C7590", VA = "0x61C8590")]
	public WebSocketException(string message)
	{
	}

	[Token(Token = "0x60017DA")]
	[Address(RVA = "0x61C9A40", Offset = "0x61C8A40", VA = "0x61C9A40")]
	public WebSocketException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60017DB")]
	[Address(RVA = "0x61CD510", Offset = "0x61CC510", VA = "0x61CD510")]
	private WebSocketException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60017DC")]
	[Address(RVA = "0x61CD520", Offset = "0x61CC520", VA = "0x61CD520", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60017DE")]
	[Address(RVA = "0x61CD380", Offset = "0x61CC380", VA = "0x61CD380")]
	private static string GetErrorMessage(WebSocketError error)
	{
		return null;
	}

	[Token(Token = "0x60017DF")]
	[Address(RVA = "0x61CD500", Offset = "0x61CC500", VA = "0x61CD500")]
	private void SetErrorCodeOnError(int nativeError)
	{
	}

	[Token(Token = "0x60017E0")]
	[Address(RVA = "0x61CD4F0", Offset = "0x61CC4F0", VA = "0x61CD4F0")]
	private static bool Succeeded(int hr)
	{
		return default(bool);
	}
}
