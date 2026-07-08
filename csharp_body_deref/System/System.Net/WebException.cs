using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x200014C")]
public class WebException : InvalidOperationException, ISerializable
{
	[Token(Token = "0x400069F")]
	[FieldOffset(Offset = "0x8C")]
	private WebExceptionStatus m_Status;

	[Token(Token = "0x40006A0")]
	[FieldOffset(Offset = "0x90")]
	private WebResponse m_Response;

	[NonSerialized]
	[Token(Token = "0x40006A1")]
	[FieldOffset(Offset = "0x98")]
	private WebExceptionInternalStatus m_InternalStatus;

	[Token(Token = "0x170001C1")]
	public WebExceptionStatus Status
	{
		[Token(Token = "0x600080A")]
		[Address(RVA = "0x463B160", Offset = "0x463B160", VA = "0x463B160")]
		get
		{
			return default(WebExceptionStatus);
		}
	}

	[Token(Token = "0x170001C2")]
	public WebResponse Response
	{
		[Token(Token = "0x600080B")]
		[Address(RVA = "0x463B170", Offset = "0x463B170", VA = "0x463B170")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x463AC30", Offset = "0x463AC30", VA = "0x463AC30")]
	public WebException()
	{
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x463AC50", Offset = "0x463AC50", VA = "0x463AC50")]
	public WebException(string message)
	{
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x463AC70", Offset = "0x463AC70", VA = "0x463AC70")]
	public WebException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000801")]
	[Address(RVA = "0x463AC90", Offset = "0x463AC90", VA = "0x463AC90")]
	public WebException(string message, WebExceptionStatus status)
	{
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x463ADE0", Offset = "0x463ADE0", VA = "0x463ADE0")]
	internal WebException(string message, WebExceptionStatus status, WebExceptionInternalStatus internalStatus, Exception innerException)
	{
	}

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x463AD30", Offset = "0x463AD30", VA = "0x463AD30")]
	public WebException(string message, Exception innerException, WebExceptionStatus status, WebResponse response)
	{
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x463AF50", Offset = "0x463AF50", VA = "0x463AF50")]
	internal WebException(string message, string data, Exception innerException, WebExceptionStatus status, WebResponse response)
	{
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x463AE90", Offset = "0x463AE90", VA = "0x463AE90")]
	internal WebException(string message, Exception innerException, WebExceptionStatus status, WebResponse response, WebExceptionInternalStatus internalStatus)
	{
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x463B030", Offset = "0x463B030", VA = "0x463B030")]
	internal WebException(string message, string data, Exception innerException, WebExceptionStatus status, WebResponse response, WebExceptionInternalStatus internalStatus)
	{
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x463B110", Offset = "0x463B110", VA = "0x463B110")]
	protected WebException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x463B130", Offset = "0x463B130", VA = "0x463B130", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6000809")]
	[Address(RVA = "0x463B150", Offset = "0x463B150", VA = "0x463B150", Slot = "11")]
	public override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
