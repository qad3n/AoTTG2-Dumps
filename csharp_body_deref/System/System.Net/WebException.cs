// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x20002D4")]
public class WebException : InvalidOperationException, ISerializable
{
	[Token(Token = "0x4000AB5")]
	[FieldOffset(Offset = "0x90")]
	private WebExceptionStatus m_Status;

	[Token(Token = "0x4000AB6")]
	[FieldOffset(Offset = "0x98")]
	private WebResponse m_Response;

	[NonSerialized]
	[Token(Token = "0x4000AB7")]
	[FieldOffset(Offset = "0xA0")]
	private WebExceptionInternalStatus m_InternalStatus;

	[Token(Token = "0x17000416")]
	public WebExceptionStatus Status
	{
		[Token(Token = "0x60013CA")]
		[Address(RVA = "0xE925C0", Offset = "0xE90BC0", VA = "0x180E925C0")]
		get
		{
			return default(WebExceptionStatus);
		}
	}

	[Token(Token = "0x17000417")]
	public WebResponse Response
	{
		[Token(Token = "0x60013CB")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60013BE")]
	[Address(RVA = "0x27D50C0", Offset = "0x27D36C0", VA = "0x1827D50C0")]
	public WebException()
	{
	}

	[Token(Token = "0x60013BF")]
	[Address(RVA = "0x27D5500", Offset = "0x27D3B00", VA = "0x1827D5500")]
	public WebException(string message)
	{
	}

	[Token(Token = "0x60013C0")]
	[Address(RVA = "0x27D5290", Offset = "0x27D3890", VA = "0x1827D5290")]
	public WebException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60013C1")]
	[Address(RVA = "0x27D50E0", Offset = "0x27D36E0", VA = "0x1827D50E0")]
	public WebException(string message, WebExceptionStatus status)
	{
	}

	[Token(Token = "0x60013C2")]
	[Address(RVA = "0x27D5130", Offset = "0x27D3730", VA = "0x1827D5130")]
	internal WebException(string message, WebExceptionStatus status, WebExceptionInternalStatus internalStatus, Exception innerException)
	{
	}

	[Token(Token = "0x60013C3")]
	[Address(RVA = "0x27D52B0", Offset = "0x27D38B0", VA = "0x1827D52B0")]
	public WebException(string message, Exception innerException, WebExceptionStatus status, WebResponse response)
	{
	}

	[Token(Token = "0x60013C4")]
	[Address(RVA = "0x27D5350", Offset = "0x27D3950", VA = "0x1827D5350")]
	internal WebException(string message, string data, Exception innerException, WebExceptionStatus status, WebResponse response)
	{
	}

	[Token(Token = "0x60013C5")]
	[Address(RVA = "0x27D51E0", Offset = "0x27D37E0", VA = "0x1827D51E0")]
	internal WebException(string message, Exception innerException, WebExceptionStatus status, WebResponse response, WebExceptionInternalStatus internalStatus)
	{
	}

	[Token(Token = "0x60013C6")]
	[Address(RVA = "0x27D5420", Offset = "0x27D3A20", VA = "0x1827D5420")]
	internal WebException(string message, string data, Exception innerException, WebExceptionStatus status, WebResponse response, WebExceptionInternalStatus internalStatus)
	{
	}

	[Token(Token = "0x60013C7")]
	[Address(RVA = "0x27D5100", Offset = "0x27D3700", VA = "0x1827D5100")]
	protected WebException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60013C8")]
	[Address(RVA = "0x27D5090", Offset = "0x27D3690", VA = "0x1827D5090", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60013C9")]
	[Address(RVA = "0x27C5080", Offset = "0x27C3680", VA = "0x1827C5080", Slot = "11")]
	public override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
