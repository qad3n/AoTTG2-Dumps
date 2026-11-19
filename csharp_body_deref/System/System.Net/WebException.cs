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
[Token(Token = "0x2000295")]
public class WebException : InvalidOperationException, ISerializable
{
	[Token(Token = "0x40009E6")]
	[FieldOffset(Offset = "0x8C")]
	private WebExceptionStatus m_Status;

	[Token(Token = "0x40009E7")]
	[FieldOffset(Offset = "0x90")]
	private WebResponse m_Response;

	[NonSerialized]
	[Token(Token = "0x40009E8")]
	[FieldOffset(Offset = "0x98")]
	private WebExceptionInternalStatus m_InternalStatus;

	[Token(Token = "0x170003E7")]
	public WebExceptionStatus Status
	{
		[Token(Token = "0x600120C")]
		[Address(RVA = "0x62A7E20", Offset = "0x62A6E20", VA = "0x62A7E20")]
		get
		{
			return default(WebExceptionStatus);
		}
	}

	[Token(Token = "0x170003E8")]
	public WebResponse Response
	{
		[Token(Token = "0x600120D")]
		[Address(RVA = "0x62A7E30", Offset = "0x62A6E30", VA = "0x62A7E30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001200")]
	[Address(RVA = "0x62A79B0", Offset = "0x62A69B0", VA = "0x62A79B0")]
	public WebException()
	{
	}

	[Token(Token = "0x6001201")]
	[Address(RVA = "0x62A6620", Offset = "0x62A5620", VA = "0x62A6620")]
	public WebException(string message)
	{
	}

	[Token(Token = "0x6001202")]
	[Address(RVA = "0x62A79D0", Offset = "0x62A69D0", VA = "0x62A79D0")]
	public WebException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6001203")]
	[Address(RVA = "0x62A6840", Offset = "0x62A5840", VA = "0x62A6840")]
	public WebException(string message, WebExceptionStatus status)
	{
	}

	[Token(Token = "0x6001204")]
	[Address(RVA = "0x62A7AA0", Offset = "0x62A6AA0", VA = "0x62A7AA0")]
	internal WebException(string message, WebExceptionStatus status, WebExceptionInternalStatus internalStatus, Exception innerException)
	{
	}

	[Token(Token = "0x6001205")]
	[Address(RVA = "0x62A79F0", Offset = "0x62A69F0", VA = "0x62A79F0")]
	public WebException(string message, Exception innerException, WebExceptionStatus status, WebResponse response)
	{
	}

	[Token(Token = "0x6001206")]
	[Address(RVA = "0x62A7C10", Offset = "0x62A6C10", VA = "0x62A7C10")]
	internal WebException(string message, string data, Exception innerException, WebExceptionStatus status, WebResponse response)
	{
	}

	[Token(Token = "0x6001207")]
	[Address(RVA = "0x62A7B50", Offset = "0x62A6B50", VA = "0x62A7B50")]
	internal WebException(string message, Exception innerException, WebExceptionStatus status, WebResponse response, WebExceptionInternalStatus internalStatus)
	{
	}

	[Token(Token = "0x6001208")]
	[Address(RVA = "0x62A7CF0", Offset = "0x62A6CF0", VA = "0x62A7CF0")]
	internal WebException(string message, string data, Exception innerException, WebExceptionStatus status, WebResponse response, WebExceptionInternalStatus internalStatus)
	{
	}

	[Token(Token = "0x6001209")]
	[Address(RVA = "0x62A7DD0", Offset = "0x62A6DD0", VA = "0x62A7DD0")]
	protected WebException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600120A")]
	[Address(RVA = "0x62A7DF0", Offset = "0x62A6DF0", VA = "0x62A7DF0", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600120B")]
	[Address(RVA = "0x62A7E10", Offset = "0x62A6E10", VA = "0x62A7E10", Slot = "11")]
	public override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
