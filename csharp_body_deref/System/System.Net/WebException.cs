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
		[Address(RVA = "0x4960260", Offset = "0x4960260", VA = "0x4960260")]
		get
		{
			return default(WebExceptionStatus);
		}
	}

	[Token(Token = "0x170001C2")]
	public WebResponse Response
	{
		[Token(Token = "0x600080B")]
		[Address(RVA = "0x4960270", Offset = "0x4960270", VA = "0x4960270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x495FD30", Offset = "0x495FD30", VA = "0x495FD30")]
	public WebException()
	{
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x495FD50", Offset = "0x495FD50", VA = "0x495FD50")]
	public WebException(string message)
	{
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x495FD70", Offset = "0x495FD70", VA = "0x495FD70")]
	public WebException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000801")]
	[Address(RVA = "0x495FD90", Offset = "0x495FD90", VA = "0x495FD90")]
	public WebException(string message, WebExceptionStatus status)
	{
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x495FEE0", Offset = "0x495FEE0", VA = "0x495FEE0")]
	internal WebException(string message, WebExceptionStatus status, WebExceptionInternalStatus internalStatus, Exception innerException)
	{
	}

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x495FE30", Offset = "0x495FE30", VA = "0x495FE30")]
	public WebException(string message, Exception innerException, WebExceptionStatus status, WebResponse response)
	{
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x4960050", Offset = "0x4960050", VA = "0x4960050")]
	internal WebException(string message, string data, Exception innerException, WebExceptionStatus status, WebResponse response)
	{
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x495FF90", Offset = "0x495FF90", VA = "0x495FF90")]
	internal WebException(string message, Exception innerException, WebExceptionStatus status, WebResponse response, WebExceptionInternalStatus internalStatus)
	{
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x4960130", Offset = "0x4960130", VA = "0x4960130")]
	internal WebException(string message, string data, Exception innerException, WebExceptionStatus status, WebResponse response, WebExceptionInternalStatus internalStatus)
	{
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x4960210", Offset = "0x4960210", VA = "0x4960210")]
	protected WebException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x4960230", Offset = "0x4960230", VA = "0x4960230", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6000809")]
	[Address(RVA = "0x4960250", Offset = "0x4960250", VA = "0x4960250", Slot = "11")]
	public override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
